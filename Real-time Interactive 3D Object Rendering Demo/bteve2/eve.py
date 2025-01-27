import struct
import array
from collections import namedtuple

from .registers import *

class CoprocessorException(Exception):
    pass

FIFO_MAX = (CMDBUF_SIZE - 4) # Maximum reported free space in the EVE command FIFO

_B0 = b'\x00'

def align4(s):
    """
    :param bytes s: input bytes object
    :return: the bytes object extended so that its length is a multiple of 4
    """
    return s + _B0 * (-len(s) & 3)

def f16(v):
    return int(round(65536 * v))

def furmans(deg):
    """ Given an angle in degrees, return it in Furmans """
    return 0xffff & f16(deg / 360.0)

# Order matches the register layout, so can fill with a single block read
# REG_TOUCH_SCREEN_XY            = 0x7f006160   #   Touchscreen screen $(x,y)$ (16, 16)
# REG_TOUCH_RAW_XY               = 0x7f006164   #   Touchscreen raw $(x,y)$ (16, 16)
# REG_CTOUCH_TOUCHB_XY           = 0x7f006168   #   Touchscreen touch 2
# REG_CTOUCH_TOUCHC_XY           = 0x7f00616c   #   Touchscreen touch 3
# REG_CTOUCH_TOUCH4_XY           = 0x7f006170   #   Touchscreen touch 4
# REG_TOUCH_TAG_XY               = 0x7f006174   #   Touchscreen screen $(x,y)$ used for tag lookup
# REG_TOUCH_TAG                  = 0x7f006178   #   Touchscreen tag result 0
_Touch = namedtuple(
    "TouchInputs",
    (
    "y", "x",
    "rawy", "rawx",
    "y1", "x1",
    "y2", "x2",
    "y3", "x3",
    "tag_y", "tag_x",
    "tag",
    ))
_State = namedtuple(
    "State",
    (
    "touching",
    "press",
    "release"
    ))
_Tracker = namedtuple(
    "Tracker",
    (
    "tag",
    "val"
    ))
_Inputs = namedtuple(
    "Inputs",
    (
    "touch",
    "tracker",
    "state",
    ))

class EVE2:

    # This class is designed to be used as a subclass of a superclass that provides
    # the methods reset, wr and rd, which provide raw byte read/write to the EVE2
    # hardware.

    #  reset()          Strobe the reset pin
    #  rd(a, n)         Read bytes
    #  wr(a, s)         Write bytes

    def boot(self):
        self.reset()
        self.getspace()

    def rd32(self, a):
        return struct.unpack("I", self.rd(a, 4))[0]

    def wr32(self, a, v):
        self.wr(a, struct.pack("I", v))

    def getspace(self):
        self.space = self.rd32(REG_CMDB_SPACE)
        if self.space & 1:
            message = self.rd(RAM_HIMEM, 256).strip(b'\x00').decode('ascii')
            # print('message', repr(message))
            raise CoprocessorException(message)

    def reserve(self, n):
        while self.space < n:
            self.getspace()

    def is_finished(self):
        self.getspace()
        return self.space == FIFO_MAX
            
    def write(self, ss):
        self.reserve(len(ss))
        self.wr(REG_CMDB_WRITE, ss)
        self.space -= len(ss)

    def finish(self):
        self.flush()
        self.reserve(FIFO_MAX)

    def is_idle(self):
        self.getspace()
        return self.space == FIFO_MAX

    def cstring(self, s):
        if type(s) == str:
            s = bytes(s, "utf-8")
        self.cc(align4(s + _B0))

    def fstring(self, aa):
        self.cstring(aa[0])
        # XXX MicroPython is currently lacking array.array.tobytes()
        self.cc(bytes(array.array("i", aa[1:])))

    # cmd_animdraw(int32_t ch)
    def cmd_animdraw(self, *args):
        self.cmd(0x4f, 'i', args)

    # cmd_animframe(int16_t x, int16_t y, uint32_t aoptr, uint32_t frame)
    def cmd_animframe(self, *args):
        self.cmd(0x5e, 'hhII', args)

    # cmd_animstart(int32_t ch, uint32_t aoptr, uint32_t loop)
    def cmd_animstart(self, *args):
        self.cmd(0x5f, 'iII', args)

    # cmd_animstop(int32_t ch)
    def cmd_animstop(self, *args):
        self.cmd(0x4d, 'i', args)

    # cmd_animxy(int32_t ch, int16_t x, int16_t y)
    def cmd_animxy(self, *args):
        self.cmd(0x4e, 'ihh', args)

    # cmd_apbread(uint32_t dest, uint32_t addr)
    def cmd_apbread(self, *args):
        self.cmd(0x62, 'II', args)

    # cmd_apbwrite(uint32_t addr, uint32_t v)
    def cmd_apbwrite(self, *args):
        self.cmd(0x63, 'II', args)

    # cmd_append(uint32_t ptr, uint32_t num)
    def cmd_append(self, *args):
        self.cmd(0x1c, 'II', args)

    # cmd_appendf(uint32_t ptr, uint32_t num)
    def cmd_appendf(self, *args):
        self.cmd(0x52, 'II', args)

    # cmd_arc(int16_t x, int16_t y, uint16_t r0, uint16_t r1, uint16_t a0, uint16_t a1)
    def cmd_arc(self, x, y, r0, r1, a0, a1):
        self.cmd(0x87, 'hhHHHH', (x, y, r0, r1, furmans(a0), furmans(a1)))

    # cmd_bgcolor(uint32_t c)
    def cmd_bgcolor(self, *args):
        self.cmd(0x07, 'I', args)

    # cmd_bitmap_transform(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t tx0, int32_t ty0, int32_t tx1, int32_t ty1, int32_t tx2, int32_t ty2, uint16_t result)
    def cmd_bitmap_transform(self, *args):
        self.cmd(0x1f, 'iiiiiiiiiiiiHH', args + (0,))
        #self.cmd(0x1f, 'iiiiiiiiiiiiH', args)
    # cmd_button(int16_t x, int16_t y, int16_t w, int16_t h, int16_t font, uint16_t options, const char* s)
    def cmd_button(self, *args):
        self.cmd(0x0b, 'hhhhhH', args[:6])
        self.fstring(args[6:])

    # cmd_calibrate(uint32_t result)
    def cmd_calibrate(self, *args):
        self.cmd0(0x13)
        return self.result()

    # cmd_calibratesub(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint32_t result)
    def cmd_calibratesub(self, *args):
        self.cmd(0x56, 'HHHHI', args)

    # cmd_calllist(uint32_t a)
    def cmd_calllist(self, *args):
        self.cmd(0x5b, 'I', args)

    # cmd_cgradient(uint32_t shape, int16_t x, int16_t y, int16_t w, int16_t h, uint32_t rgb0, uint32_t rgb1)
    def cmd_cgradient(self, *args):
        self.cmd(0x8a, 'IhhhhII', args)

    # cmd_clock(int16_t x, int16_t y, int16_t r, uint16_t options, uint16_t h, uint16_t m, uint16_t s, uint16_t ms)
    def cmd_clock(self, *args):
        self.cmd(0x12, 'hhhHHHHH', args)

    # cmd_coldstart()
    def cmd_coldstart(self, *args):
        self.cmd0(0x2e)

    # cmd_copylist(uint32_t dst)
    def cmd_copylist(self, *args):
        self.cmd(0x88, 'I', args)

    # cmd_crc(uint32_t ptr)
    def cmd_crc(self, *args):
        self.cmd(0x03, 'I', args)

    # cmd_ddrshutdown()
    def cmd_ddrshutdown(self, *args):
        self.cmd0(0x65)

    # cmd_ddrstartup()
    def cmd_ddrstartup(self, *args):
        self.cmd0(0x66)

    # cmd_dial(int16_t x, int16_t y, int16_t r, uint16_t options, uint16_t val)
    def cmd_dial(self, x, y, r, options, val):
        self.cmd(0x29, "hhhHI", (x, y, r, options, furmans(val)))

    # cmd_dlstart()
    def cmd_dlstart(self, *args):
        self.cmd0(0x00)

    # cmd_enableregion(uint32_t en)
    def cmd_enableregion(self, *args):
        self.cmd(0x7e, 'I', args)

    # cmd_endlist()
    def cmd_endlist(self, *args):
        self.cmd0(0x5d)

    # cmd_evaluate(uint32_t addr, uint32_t u)
    def cmd_evaluate(self, *args):
        self.cmd(0x72, 'II', args)

    # cmd_execute(uint32_t ptr, uint32_t result)
    def cmd_execute(self, *args):
        self.cmd(0x05, 'II', args)

    # cmd_fence()
    def cmd_fence(self, *args):
        self.cmd0(0x68)

    # cmd_fgcolor(uint32_t c)
    def cmd_fgcolor(self, *args):
        self.cmd(0x08, 'I', args)

    # cmd_fillwidth(uint32_t s)
    def cmd_fillwidth(self, *args):
        self.cmd(0x51, 'I', args)

    # cmd_flashattach()
    def cmd_flashattach(self, *args):
        self.cmd0(0x43)

    # cmd_flashdetach()
    def cmd_flashdetach(self, *args):
        self.cmd0(0x42)

    # cmd_flasherase()
    def cmd_flasherase(self, *args):
        self.cmd0(0x3e)

    # cmd_flashfast(uint32_t result)
    def cmd_flashfast(self):
        return self.cmdr(0x44, "", ())

    # cmd_flashprogram(uint32_t dest, uint32_t src, uint32_t num)
    def cmd_flashprogram(self, *args):
        self.cmd(0x64, 'III', args)

    # cmd_flashread(uint32_t dest, uint32_t src, uint32_t num)
    def cmd_flashread(self, *args):
        self.cmd(0x40, 'III', args)

    # cmd_flashsource(uint32_t ptr)
    def cmd_flashsource(self, *args):
        self.cmd(0x48, 'I', args)

    # cmd_flashspidesel()
    def cmd_flashspidesel(self, *args):
        self.cmd0(0x45)

    # cmd_flashspirx(uint32_t ptr, uint32_t num)
    def cmd_flashspirx(self, *args):
        self.cmd(0x47, 'II', args)

    # cmd_flashspitx(uint32_t num!)
    def cmd_flashspitx(self, *args):
        self.cmd(0x46, 'I', args)

    # cmd_flashupdate(uint32_t dest, uint32_t src, uint32_t num)
    def cmd_flashupdate(self, *args):
        self.cmd(0x41, 'III', args)

    # cmd_flashwrite(uint32_t ptr, uint32_t num!)
    def cmd_flashwrite(self, *args):
        self.cmd(0x3f, 'II', args)

    # cmd_fsdir(uint32_t dst, uint32_t num, const char* path, uint32_t result)
    def cmd_fsdir(self, dst, num, path):
        self.cmd(0x8e, 'II', (dst, num))
        self.cstring(path)
        return self.result()

    # cmd_fsoptions(uint32_t options)
    def cmd_fsoptions(self, *args):
        self.cmd(0x6d, 'I', args)

    # cmd_fsread(uint32_t dst, const char* filename, uint32_t result)
    def cmd_fsread(self, dst, filename):
        self.cmd(0x71, 'I', (dst,))
        self.cstring(filename)
        return self.result()

    # cmd_fssize(const char* filename, uint32_t size)
    def cmd_fssize(self, filename):
        self.cmd0(0x80)
        self.cstring(filename)
        return self.result()

    # cmd_fssource(const char* filename, uint32_t result)
    def cmd_fssource(self, filename):
        self.cmd0(0x7f)
        self.cstring(filename)
        return self.result()

    # cmd_gauge(int16_t x, int16_t y, int16_t r, uint16_t options, uint16_t major, uint16_t minor, uint16_t val, uint16_t range)
    def cmd_gauge(self, *args):
        self.cmd(0x11, 'hhhHHHHH', args)

    # cmd_getimage(uint32_t source, uint32_t fmt, uint32_t w, uint32_t h, uint32_t palette)
    def cmd_getimage(self, *args):
        self.cmd(0x58, 'IIIII', (0,0,0,0,0))
        return self.previous("IIiiI")

    # cmd_getmatrix(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f)
    def cmd_getmatrix(self):
        self.cmd(0x2f, 'iiiiii', (0,0,0,0,0,0))
        return tuple([x/0x10000 for x in self.previous("6i")])

    # cmd_getpoint(uint32_t sx, uint32_t sy)
    def cmd_getpoint(self, *args):
        self.cmd(0x06, 'II', args)

    # cmd_getprops(uint32_t ptr, uint32_t w, uint32_t h)
    def cmd_getprops(self):
        self.cmd(0x22, 'III', (0,0,0))
        return self.previous("Iii")

    # cmd_getptr(uint32_t result)
    def cmd_getptr(self):
        self.cmd(0x20, 'I', (0,))
        return self.previous()

    def previous(self, fmt = "I"):
        # Return the result field of the preceding command
        self.finish()
        size = struct.calcsize(fmt)
        offset = (self.rd32(REG_CMD_READ) - size) & FIFO_MAX
        r = struct.unpack(fmt, self.rd(RAM_CMD + offset, size))
        if len(r) == 1:
            return r[0]
        else:
            return r

    def result(self):
        # For operations that return a result code in the last argument
        self.cc(b'    ')
        return self.previous()

    # cmd_glow(int16_t x, int16_t y, int16_t w, int16_t h)
    def cmd_glow(self, *args):
        self.cmd(0x8b, 'hhhh', args)

    # cmd_gradcolor(uint32_t c)
    def cmd_gradcolor(self, *args):
        self.cmd(0x30, 'I', args)

    # cmd_gradient(int16_t x0, int16_t y0, uint32_t rgb0, int16_t x1, int16_t y1, uint32_t rgb1)
    def cmd_gradient(self, *args):
        self.cmd(0x09, 'hhIhhI', args)

    # cmd_gradienta(int16_t x0, int16_t y0, uint32_t argb0, int16_t x1, int16_t y1, uint32_t argb1)
    def cmd_gradienta(self, *args):
        self.cmd(0x50, 'hhIhhI', args)

    # cmd_graphicsfinish()
    def cmd_graphicsfinish(self, *args):
        self.cmd0(0x6b)

    # cmd_i2sstartup(uint32_t freq)
    def cmd_i2sstartup(self, *args):
        self.cmd(0x69, 'I', args)

    # cmd_inflate(uint32_t ptr, uint32_t options!)
    def cmd_inflate(self, *args):
        self.cmd(0x4a, 'II', args)

    # cmd_interrupt(uint32_t ms)
    def cmd_interrupt(self, *args):
        self.cmd(0x02, 'I', args)

    # cmd_keys(int16_t x, int16_t y, int16_t w, int16_t h, int16_t font, uint16_t options, const char* s)
    def cmd_keys(self, *args):
        self.cmd(0x0c, 'hhhhhH', args[:6])
        self.fstring(args[6:])

    # cmd_loadasset(uint32_t ptr, uint32_t options!)
    def cmd_loadasset(self, *args):
        self.cmd(0x81, 'II', args)

    # cmd_loadidentity()
    def cmd_loadidentity(self, *args):
        self.cmd0(0x23)

    # cmd_loadimage(uint32_t ptr, uint32_t options!)
    def cmd_loadimage(self, *args):
        self.cmd(0x21, 'II', args)

    # cmd_loadpatch(uint32_t options!)
    def cmd_loadpatch(self, *args):
        self.cmd(0x82, 'I', args)

    # cmd_loadwav(uint32_t dst, uint32_t options!)
    def cmd_loadwav(self, *args):
        self.cmd(0x85, 'II', args)

    # cmd_logo()
    def cmd_logo(self, *args):
        self.cmd0(0x2d)

    # cmd_mediafifo(uint32_t ptr, uint32_t size)
    def cmd_mediafifo(self, *args):
        self.cmd(0x34, 'II', args)

    # cmd_memcpy(uint32_t dest, uint32_t src, uint32_t num)
    def cmd_memcpy(self, *args):
        self.cmd(0x1b, 'III', args)

    # cmd_memcrc(uint32_t ptr, uint32_t num, uint32_t result)
    def cmd_memcrc(self, *args):
        return self.cmdr(0x16, 'II', args)

    # cmd_memset(uint32_t ptr, uint32_t value, uint32_t num)
    def cmd_memset(self, *args):
        self.cmd(0x19, 'III', args)

    # cmd_memwrite(uint32_t ptr, uint32_t num!)
    def cmd_memwrite(self, *args):
        self.cmd(0x18, 'II', args)

    # cmd_memzero(uint32_t ptr, uint32_t num)
    def cmd_memzero(self, *args):
        self.cmd(0x1a, 'II', args)

    # cmd_newlist(uint32_t a)
    def cmd_newlist(self, *args):
        self.cmd(0x5c, 'I', args)

    # cmd_nop()
    def cmd_nop(self, *args):
        self.cmd0(0x53)

    # cmd_number(int16_t x, int16_t y, int16_t font, uint16_t options, int32_t n)
    def cmd_number(self, *args):
        self.cmd(0x2a, 'hhhHi', args)

    # cmd_otprd(uint32_t dst, uint32_t src, uint32_t num, uint32_t result)
    def cmd_otprd(self, *args):
        self.cmd(0x74, 'IIII', args)

    # cmd_otpwr(uint32_t dst, uint32_t src, uint32_t num, uint32_t result)
    def cmd_otpwr(self, *args):
        self.cmd(0x75, 'IIII', args)

    # cmd_playvideo(uint32_t options!)
    def cmd_playvideo(self, *args):
        self.cmd(0x35, 'I', args)

    # cmd_playwav(uint32_t options!)
    def cmd_playwav(self, *args):
        self.cmd(0x79, 'I', args)

    # cmd_progress(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t options, uint16_t val, uint16_t range)
    def cmd_progress(self, *args):
        self.cmd(0x0d, 'hhhhHHHH', args + (0,))

    # cmd_regread(uint32_t ptr, uint32_t result)
    def cmd_regread(self, *args):
        return self.cmdr(0x17, 'I', args)

    # cmd_regwrite(uint32_t dst, uint32_t value)
    def cmd_regwrite(self, *args):
        self.cmd(0x86, 'II', args)

    # cmd_rendertarget(uint32_t a, uint16_t fmt, int16_t w, int16_t h)
    def cmd_rendertarget(self, *args):
        self.cmd(0x8d, 'IHhhH', args + (0,))

    # cmd_resetfonts()
    def cmd_resetfonts(self, *args):
        self.cmd0(0x4c)

    # cmd_restorecontext()
    def cmd_restorecontext(self, *args):
        self.cmd0(0x7d)

    # cmd_result(uint32_t dst)
    def cmd_result(self, *args):
        self.cmd(0x89, 'I', args)

    # cmd_return()
    def cmd_return(self, *args):
        self.cmd0(0x5a)

    # cmd_romfont(uint32_t font, uint32_t romslot)
    def cmd_romfont(self, *args):
        self.cmd(0x39, 'II', args)

    # cmd_rotate(int32_t a)
    def cmd_rotate(self, a):
        self.cmd(0x26, 'i', (furmans(a),))

    # cmd_rotatearound(int32_t x, int32_t y, int32_t a, int32_t s)
    def cmd_rotatearound(self, *args):
        self.cmd(0x4b, 'iiii', args)

    # cmd_runanim(uint32_t waitmask, uint32_t play)
    def cmd_runanim(self, *args):
        self.cmd(0x60, 'II', args)

    # cmd_savecontext()
    def cmd_savecontext(self, *args):
        self.cmd0(0x7c)

    # cmd_scale(int32_t sx, int32_t sy)
    def cmd_scale(self, sx, sy):
        self.cmd(0x25, 'ii', (f16(sx), f16(sy)))

    # cmd_screensaver()
    def cmd_screensaver(self, *args):
        self.cmd0(0x2b)

    # cmd_scrollbar(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t options, uint16_t val, uint16_t size, uint16_t range)
    def cmd_scrollbar(self, *args):
        self.cmd(0x0f, 'hhhhHHHH', args)

    def cmdr(self, code, fmt, args):
        self.cmd(code, fmt, args)
        return self.result()
        
    # cmd_sdattach(uint32_t options, uint32_t result)
    def cmd_sdattach(self, *args):
        return self.cmdr(0x6e, 'I', args)

    # cmd_sdblockread(uint32_t dst, uint32_t src, uint32_t count, uint32_t result)
    def cmd_sdblockread(self, *args):
        return self.cmdr(0x6f, 'III', args)

    # cmd_sdblockwrite(uint32_t dst, uint32_t src, uint32_t count, uint32_t result)
    def cmd_sdblockwrite(self, *args):
        return self.cmdr(0x70, 'III', args)

    # cmd_setbase(uint32_t b)
    def cmd_setbase(self, *args):
        self.cmd(0x33, 'I', args)

    # cmd_setbitmap(uint32_t source, uint16_t fmt, uint16_t w, uint16_t h)
    def cmd_setbitmap(self, *args):
        self.cmd(0x3d, 'IHHHH', args + (0,))

    # cmd_setfont(uint32_t font, uint32_t ptr, uint32_t firstchar)
    def cmd_setfont(self, *args):
        self.cmd(0x36, 'III', args)

    # cmd_setmatrix()
    def cmd_setmatrix(self, *args):
        self.cmd0(0x27)

    # cmd_setrotate(uint32_t r)
    def cmd_setrotate(self, *args):
        self.cmd(0x31, 'I', args)

    # cmd_setscratch(uint32_t handle)
    def cmd_setscratch(self, *args):
        self.cmd(0x37, 'I', args)

    # cmd_sketch(int16_t x, int16_t y, uint16_t w, uint16_t h, uint32_t ptr, uint16_t format)
    def cmd_sketch(self, *args):
        self.cmd(0x2c, 'hhHHIHH', args + (0,))

    # cmd_skipcond(uint32_t a, uint32_t func, uint32_t ref, uint32_t mask, uint32_t num)
    def cmd_skipcond(self, *args):
        self.cmd(0x8c, 'IIIII', args)

    # cmd_slider(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t options, uint16_t val, uint16_t range)
    def cmd_slider(self, *args):
        self.cmd(0x0e, 'hhhhHHHH', args + (0,))

    # cmd_snapshot(uint32_t ptr)
    def cmd_snapshot(self, *args):
        self.cmd(0x1d, 'I', args)

    # cmd_softboot(uint32_t mode)
    def cmd_softboot(self, *args):
        self.cmd(0x61, 'I', args)

    # cmd_spinner(int16_t x, int16_t y, uint16_t style, uint16_t scale)
    def cmd_spinner(self, *args):
        self.cmd(0x14, 'hhHH', args)

    # cmd_stop()
    def cmd_stop(self, *args):
        self.cmd0(0x15)

    # cmd_swap()
    def cmd_swap(self, *args):
        self.cmd0(0x01)

    # cmd_sync()
    def cmd_sync(self, *args):
        self.cmd0(0x3c)

    # cmd_testcard()
    def cmd_testcard(self, *args):
        self.cmd0(0x57)

    # cmd_text(int16_t x, int16_t y, int16_t font, uint16_t options, const char* s)
    def cmd_text(self, *args):
        self.cmd(0x0a, 'hhhH', args[:4])
        self.fstring(args[4:])

    # cmd_textdim(uint32_t dimensions, int16_t font, uint16_t options, const char* s)
    def cmd_textdim(self, *args):
        self.cmd(0x84, 'IhH', args[:3])
        self.fstring(args[3:])

    # cmd_toggle(int16_t x, int16_t y, int16_t w, int16_t font, uint16_t options, uint16_t state, const char* s)
    def cmd_toggle(self, *args):
        self.cmd(0x10, "hhhhHH", args[0:6])
        label = (args[6].encode() + b'\xff' + args[7].encode())
        self.fstring((label,) + args[8:])

    # cmd_touch_transform(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t tx0, int32_t ty0, int32_t tx1, int32_t ty1, int32_t tx2, int32_t ty2, uint16_t result)
    def cmd_touch_transform(self, *args):
        self.cmd(0x1e, 'iiiiiiiiiiiiHH', args + (0,))

    # cmd_touchrd(uint32_t addr, uint32_t num)
    def cmd_touchrd(self, *args):
        self.cmd(0x76, 'II', args)

    # cmd_touchwr(uint32_t num!)
    def cmd_touchwr(self, *args):
        self.cmd(0x77, 'I', args)

    # cmd_track(int16_t x, int16_t y, int16_t w, int16_t h, int16_t tag)
    def cmd_track(self, *args):
        self.cmd(0x28, 'hhhhhH', args + (0,))

    # cmd_translate(int32_t tx, int32_t ty)
    def cmd_translate(self, tx, ty):
        self.cmd(0x24, 'ii', (f16(tx), f16(ty)))

    # cmd_videoframe(uint32_t dst, uint32_t ptr)
    def cmd_videoframe(self, *args):
        self.cmd(0x3b, 'II', args)

    # cmd_videostart(uint32_t options)
    def cmd_videostart(self, *args):
        self.cmd(0x3a, 'I', args)

    # cmd_wait(uint32_t us)
    def cmd_wait(self, *args):
        self.cmd(0x59, 'I', args)

    # cmd_waitchange(uint32_t a)
    def cmd_waitchange(self, *args):
        self.cmd(0x67, 'I', args)

    # cmd_waitcond(uint32_t a, uint32_t func, uint32_t ref, uint32_t mask)
    def cmd_waitcond(self, *args):
        self.cmd(0x78, 'IIII', args)

    # cmd_watchdog(uint32_t init_val)
    def cmd_watchdog(self, *args):
        self.cmd(0x83, 'I', args)

    # cmd_workarea(uint32_t ptr)
    def cmd_workarea(self, *args):
        self.cmd(0x6c, 'I', args)
        # Some higher-level functions

    def get_inputs(self):
        self.finish()
        t = _Touch(*struct.unpack("hhHHhhhhhhhhI", self.rd(REG_TOUCH_SCREEN_XY, 28)))

        r = _Tracker(*struct.unpack("HH", self.rd(REG_TRACKER, 4)))

        if not hasattr(self, "prev_touching"):
            self.prev_touching = False
        touching = (t.x != -32768)
        press = touching and not self.prev_touching
        release = (not touching) and self.prev_touching
        s = _State(touching, press, release)
        self.prev_touching = touching

        self.inputs = _Inputs(t, r, s)
        return self.inputs

    def swap(self):
        self.Display()
        self.cmd_swap()
        self.flush()
        self.cmd_dlstart()
        self.cmd_loadidentity()

    def pswap(self):
        # like .swap, but no finish()
        self.Display()
        self.cmd_swap()
        self.cmd_dlstart()

    def calibrate(self):
        fn = "calibrate.bin"

        try:
            with open(fn, "rb") as f:
                self.wr(REG_TOUCH_TRANSFORM_A, f.read())
        except FileNotFoundError:
            self.Clear()
            self.cmd_text(self.w // 2, self.h // 2, 34, OPT_CENTER, "Tap the dot")
            self.cmd_calibrate(0)
            self.cmd_dlstart()
            cd = self.rd(REG_TOUCH_TRANSFORM_A, 24)
            print("[" + ",".join([f"{c / 65536:.3f}" for c in array.array("i", cd)]) + "]")
            with open(fn, "wb") as f:
                f.write(self.rd(REG_TOUCH_TRANSFORM_A, 24))

    def load(self, f):
        while True:
            s = f.read(512)
            if not s:
                return
            self.cc(align4(s))

    def panel(self, surface):
        self.cmd_rendertarget(*surface)
        self.Clear()
        self.swap()
        self.cmd_graphicsfinish()

        (self.w, self.h) = (surface.w, surface.h)
        '''
        self.cmd_regwrite(REG_HCYCLE, 2000)
        self.cmd_regwrite(REG_HSIZE, 1920)
        self.cmd_regwrite(REG_HOFFSET, 80)
        self.cmd_regwrite(REG_HSYNC0, 64)
        self.cmd_regwrite(REG_HSYNC1, 74)

        self.cmd_regwrite(REG_VCYCLE, 1243)
        self.cmd_regwrite(REG_VSIZE, 1200)
        self.cmd_regwrite(REG_VOFFSET, 25)
        self.cmd_regwrite(REG_VSYNC0, 20)
        self.cmd_regwrite(REG_VSYNC1, 23)

        self.cmd_regwrite(REG_PCLK_POL, 0)

        self.cmd_regwrite(REG_DISP, 1)
        self.cmd_regwrite(REG_PWM_DUTY, 128)        
        '''
        horcy = 1920+160 # 2060-2280
        vercy = 1200+44 # 1210-1280
        self.cmd_regwrite(REG_GPIO, 0x80)

        self.cmd_regwrite(REG_HCYCLE, horcy)
        self.cmd_regwrite(REG_HSIZE, 1920)
        self.cmd_regwrite(REG_HOFFSET, 52)
        self.cmd_regwrite(REG_HSYNC0, 0)
        self.cmd_regwrite(REG_HSYNC1, 32)

        self.cmd_regwrite(REG_VCYCLE, vercy)
        self.cmd_regwrite(REG_VSIZE, 1200)
        self.cmd_regwrite(REG_VOFFSET, 10)
        self.cmd_regwrite(REG_VSYNC0, 0)
        self.cmd_regwrite(REG_VSYNC1, 3)

        self.cmd_regwrite(REG_PCLK_POL, 0)
        self.cmd_regwrite(REG_DISP, 1)
        self.cmd_regwrite(REG_PWM_DUTY, 128)      
 
        extsyncmode = 3     # 0: 1 pixel single // 1: 2 pixel single // 2: 2 pixel dual // 3: 4 pixel dual
        TXPLLDiv = 0x03
        self.cmd_apbwrite(LVDSPLL_CFG, 0x00300870 + TXPLLDiv if TXPLLDiv > 4 else 0x00301070 + TXPLLDiv)

        self.cmd_apbwrite(LVDS_EN, 7) # Enable PLL

        self.cmd_regwrite(REG_SO_MODE, extsyncmode)
        self.cmd_regwrite(REG_SO_SOURCE, surface.addr)
        self.cmd_regwrite(REG_SO_FORMAT, surface.fmt)
        self.cmd_regwrite(REG_SO_EN, 1)

        # Use canned calibration for 1920x1200 CTP
        # CTP is other way up so simple 180° rotation 

        cal = [-1.008,0.006,1924.014,0.022,-1.016,1178.634]
        cal_binary = bytes(array.array("i", [int(c * 65536) for c in cal]))
        self.cmd_memwrite(REG_TOUCH_TRANSFORM_A, len(cal_binary))
        self.cc(cal_binary)

        self.flush()

"""
class MoviePlayer:
    def __init__(self, gd, f, mf_base = 0xf0000, mf_size = 0x8000):
        self.gd = gd
        self.f = f
        self.mf_base = mf_base
        self.mf_size = mf_size

        gd.cmd_mediafifo(mf_base, mf_size)
        self.wp = 0
        gd.cmd_regwrite(REG_MEDIAFIFO_WRITE, 0)

    def play(self):
        gd = self.gd
        gd.cmd_playvideo(OPT_MEDIAFIFO | OPT_FULLSCREEN | OPT_NOTEAR)
        gd.cmd_nop()
        gd.flush()
        while not gd.is_idle():
            self.service()
        gd.finish()
        
    def service(self):
        gd = self.gd

        rp = gd.rd32(REG_MEDIAFIFO_READ)
        fullness = (self.wp - rp) % self.mf_size
        SZ = 2048
        # print("rp=%x wp=%x" % (rp, self.wp))
        while fullness < (self.mf_size - SZ):
            s = self.f.read(SZ)
            if not s:
                return
            # print("Writing %x to %x" % (len(s), self.mf_base + self.wp))
            gd.wr(self.mf_base + self.wp, s)
            self.wp = (self.wp + len(s)) % self.mf_size
            gd.wr32(REG_MEDIAFIFO_WRITE, self.wp)
            fullness += len(s)
"""
