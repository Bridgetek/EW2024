import bteve2 as eve
import array
import struct

class Demo:
    def snap(self, gd, s):
        regs = [
            eve.REG_CLOCK,
            eve.REG_DDR_0_RC, # Scanout
            eve.REG_DDR_4_RC, # bitmap fetch
            eve.REG_DDR_2_WC, # RE write
            eve.REG_DDR_3_RC, # arb R
            eve.REG_DDR_3_WC, # arb W
            eve.REG_DDR_5_WC, # LVDSRX
        ]
        for (i, a) in enumerate(regs):
            gd.cmd_memcpy(s + 4 * i, a, 4)
        return ["scanout", "RE-r", "RE-w", "arb-R", "arb-W", "LVDSRX", "total"]

    def instrumented_swap(self, gd):
        # gd.swap(); return
        gd.cmd_graphicsfinish()
        gd.finish()
        assert gd.rd32(eve.REG_DLSWAP) == 0
        gd.cmd_regwrite(eve.REG_SC0_RESET, 1)
        self.snap(gd, self.stats + 0)
        gd.cmd_swap()
        gd.cmd_graphicsfinish()
        names = self.snap(gd, self.stats + 28)
        gd.cmd_dlstart()
        gd.finish()
        ss = array.array("I", gd.rd(self.stats, 4 * 14))
        diffs = [(ss[i+7] - ss[i]) & 0xffffffff for i in range(7)]
        dur = diffs[0] / 72e6
        bw = [(32 * d) / (dur * 1e6) for d in diffs[1:]]
        bw.append(sum(bw))
        print(f"{dur*1000:6.3f} ms", "   ".join([f"{nm}: {b:4.0f}" for (nm,b) in zip(names, bw)]))

    def screenshot(self, gd, fn = "out.png"):
        print(f"Dumping screenshot to \"{fn}\"")
        import tb
        (_, fmt, w, h) = gd.framebuffer
        addr = gd.rd32(eve.REG_SC0_PTR0)
        tb.frombytes(fmt, w, h, gd.rd(addr, w * h * tb.bpp(fmt) // 8)).save(fn)

    def setup_scroll(self, gd):
        gd.BitmapHandle(63)
        #gd.cmd_loadimage(0xffffffff, 0)
        gd.cmd_loadimage(80 << 20, 0)
        with open("assets/Bridgetek_FA_dark_512.png", "rb") as f:
            gd.load(f)
        gd.BitmapSize(eve.NEAREST, eve.REPEAT, eve.BORDER, 0, 129)
        gd.BitmapSizeH(0, 0)

    def draw_scroll(self, gd, frame):
        gd.ClearColorRGB(0x1a, 0x1a, 0x1a)
        gd.Clear(1,1,1)

        gd.SaveContext()
        gd.VertexFormat(0)
        gd.BitmapHandle(63)
        gd.Begin(eve.BITMAPS)

        gd.ColorRGB(0x80, 0x80, 0x80)
        gd.BitmapTransformC(frame*256)
        for i in (0, 2, 4):
            gd.Vertex2f(0, 40 + 200 * i)
        gd.BitmapTransformC(-frame*256)
        for i in (1, 3, 5):
            gd.Vertex2f(0, 40 + 200 * i)
        gd.RestoreContext()
