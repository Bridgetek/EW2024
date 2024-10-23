/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_TransparentRectButton
C Source
*/

#include "Ft_Esd_TransparentRectButton.h"

#include "Esd_Context.h"
#include "Ft_Esd_CoCmd.h"
#include "Ft_Esd_Dl.h"
#include "Ft_Esd_Primitives.h"
#include "Ft_Esd_Theme.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
ft_bool_t Ft_Esd_TransparentRectButton_Primary__Default(void *context) { return 1; }
int Ft_Esd_TransparentRectButton_PrimaryAlpha__Default(void *context) { return 50L; }
int Ft_Esd_TransparentRectButton_Alpha__Default(void *context) { return 150L; }
Ft_Esd_BitmapCell Ft_Esd_TransparentRectButton_BitMap__Default(void *context) { return (Ft_Esd_BitmapCell){ 0 }; }
const char * Ft_Esd_TransparentRectButton_Text__Default(void *context) { return ""; }
int Ft_Esd_TransparentRectButton_Font__Default(void *context) { return 27L; }
ft_uint16_t Ft_Esd_TransparentRectButton_AlignX__Default(void *context) { return OPT_ALIGN_LEFT; }
ft_uint16_t Ft_Esd_TransparentRectButton_AlignY__Default(void *context) { return OPT_ALIGN_TOP; }


static Ft_Esd_WidgetSlots s_Ft_Esd_TransparentRectButton__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_TransparentRectButton_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_TransparentRectButton_Update,
	(void(*)(void *))Ft_Esd_TransparentRectButton_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_TransparentRectButton_End,
};

static void Ft_Esd_TransparentRectButton_Touch_Tag_Down__Signal(void *context);
static void Ft_Esd_TransparentRectButton_Touch_Tag_Up__Signal(void *context);
static void Ft_Esd_TransparentRectButton_Touch_Tag_Tap__Signal(void *context);

void Ft_Esd_TransparentRectButton__Touch_Tag__Initializer(Ft_Esd_TransparentRectButton *context)
{
	Ft_Esd_TouchTag *object = (Ft_Esd_TouchTag *)&context->Touch_Tag;
	Ft_Esd_TouchTag__Initializer(object);
	object->Owner = (void *)context;
	object->Down = Ft_Esd_TransparentRectButton_Touch_Tag_Down__Signal;
	object->Up = Ft_Esd_TransparentRectButton_Touch_Tag_Up__Signal;
	object->Tap = Ft_Esd_TransparentRectButton_Touch_Tag_Tap__Signal;
}

void Ft_Esd_TransparentRectButton__Fixed_Position__Initializer(Ft_Esd_TransparentRectButton *context)
{
	Ft_Esd_Layout_Fixed *object = (Ft_Esd_Layout_Fixed *)&context->Fixed_Position;
	Ft_Esd_Layout_Fixed__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void Ft_Esd_TransparentRectButton__Initializer(Ft_Esd_TransparentRectButton *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_TransparentRectButton_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_TransparentRectButton__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 50;
	context->Widget.LocalHeight = 50;
	context->Primary = Ft_Esd_TransparentRectButton_Primary__Default;
	context->PrimaryAlpha = Ft_Esd_TransparentRectButton_PrimaryAlpha__Default;
	context->Alpha = Ft_Esd_TransparentRectButton_Alpha__Default;
	context->BitMap = Ft_Esd_TransparentRectButton_BitMap__Default;
	context->Text = Ft_Esd_TransparentRectButton_Text__Default;
	context->Font = Ft_Esd_TransparentRectButton_Font__Default;
	context->AlignX = Ft_Esd_TransparentRectButton_AlignX__Default;
	context->AlignY = Ft_Esd_TransparentRectButton_AlignY__Default;
	context->Down = Esd_Noop;
	context->Up = Esd_Noop;
	context->Pushed = Esd_Noop;
	Ft_Esd_TransparentRectButton__Touch_Tag__Initializer(context);
	Ft_Esd_TransparentRectButton__Fixed_Position__Initializer(context);
}

static Ft_Esd_Theme *Ft_Esd_TransparentRectButton_Current_Theme__return(Ft_Esd_TransparentRectButton *context);

Ft_Esd_Theme *Ft_Esd_Theme_GetCurrent();

void Ft_Esd_TransparentRectButton_Start__Builtin(Ft_Esd_TransparentRectButton *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_Start((Ft_Esd_Widget *)context);
	Ft_Esd_TouchTag_Start(&context->Touch_Tag);
}

void Ft_Esd_TransparentRectButton_End__Builtin(Ft_Esd_TransparentRectButton *context)
{
	void *owner = context->Owner;
	Ft_Esd_TouchTag_End(&context->Touch_Tag);
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Fixed_Position); 
}

void Ft_Esd_TransparentRectButton_Render(Ft_Esd_TransparentRectButton *context)
{
	void *owner = context->Owner;
	ft_int16_t x = context->Widget.GlobalX;
	ft_int16_t y = context->Widget.GlobalY;
	Ft_Esd_BitmapCell bitmapCell = context->BitMap(owner);
	ft_argb32_t c_1 = 0xffffffffUL;
	Ft_Esd_Render_Bitmap(x, y, bitmapCell, c_1);
	ft_uint8_t s = Ft_Esd_TouchTag_Tag(&context->Touch_Tag);
	Ft_Esd_Dl_TAG(s);
	Ft_Esd_Theme * theme = Ft_Esd_TransparentRectButton_Current_Theme__return(context);
	ft_argb32_t c_2 = Ft_Esd_Theme_GetTextColor(theme);
	Ft_Esd_Dl_COLOR_RGB(c_2);
	EVE_HalContext * phost = Ft_Esd_GetHost();
	ft_uint16_t left = context->AlignX(owner);
	int right = 0L;
	int if_1 = left == right;
	int x_1;
	if (if_1)
	{
		x_1 = context->Widget.GlobalX;
	}
	else
	{
		ft_uint16_t left_1 = context->AlignX(owner);
		int right_1 = 2L;
		int if_2 = left_1 == right_1;
		if (if_2)
		{
			ft_int16_t left_2 = context->Widget.GlobalX;
			ft_int16_t right_2 = context->Widget.GlobalWidth;
			x_1 = left_2 + right_2;
		}
		else
		{
			ft_int16_t left_3 = context->Widget.GlobalX;
			ft_int16_t left_4 = context->Widget.GlobalWidth;
			int right_4 = 2L;
			int right_3 = left_4 / right_4;
			x_1 = left_3 + right_3;
		}
	}
	ft_uint16_t left_5 = context->AlignY(owner);
	int right_5 = 1L;
	int if_3 = left_5 == right_5;
	int y_1;
	if (if_3)
	{
		ft_int16_t left_6 = context->Widget.GlobalY;
		ft_int16_t left_7 = context->Widget.GlobalHeight;
		int right_7 = 2L;
		int right_6 = left_7 / right_7;
		y_1 = left_6 + right_6;
	}
	else
	{
		ft_uint16_t left_8 = context->AlignY(owner);
		int right_8 = 0L;
		int if_4 = left_8 == right_8;
		if (if_4)
		{
			y_1 = context->Widget.GlobalY;
		}
		else
		{
			ft_int16_t left_10 = context->Widget.GlobalY;
			ft_int16_t right_9 = context->Widget.GlobalHeight;
			int left_9 = left_10 + right_9;
			int i = context->Font(owner);
			ft_uint16_t right_10 = Ft_Esd_GetFontHeight(i);
			y_1 = left_9 - right_10;
		}
	}
	int font = context->Font(owner);
	ft_uint16_t left_12 = context->AlignX(owner);
	int right_11 = 0L;
	int if_5 = left_12 == right_11;
	uint16_t left_11;
	if (if_5)
	{
		left_11 = 0;
	}
	else
	{
		ft_uint16_t left_13 = context->AlignX(owner);
		int right_12 = 2L;
		int if_6 = left_13 == right_12;
		if (if_6)
		{
			left_11 = OPT_RIGHTX;
		}
		else
		{
			left_11 = OPT_CENTERX;
		}
	}
	ft_uint16_t left_14 = context->AlignY(owner);
	int right_14 = 1L;
	int if_7 = left_14 == right_14;
	uint16_t right_13;
	if (if_7)
	{
		right_13 = OPT_CENTERY;
	}
	else
	{
		right_13 = 0;
	}
	uint16_t options = left_11 | right_13;
	const char * s_1 = context->Text(owner);
	Ft_Gpu_CoCmd_Text(phost, x_1, y_1, font, options, s_1);
	ft_int16_t x_2 = context->Widget.GlobalX;
	ft_int16_t y_2 = context->Widget.GlobalY;
	ft_int16_t width = context->Widget.GlobalWidth;
	ft_int16_t height = context->Widget.GlobalHeight;
	ft_int32_t radius = 0L;
	Ft_Esd_Theme * theme_1 = Ft_Esd_TransparentRectButton_Current_Theme__return(context);
	ft_argb32_t rgb = Ft_Esd_Theme_GetCurrentColor(theme_1);
	ft_bool_t if_8 = context->Primary(owner);
	int a;
	if (if_8)
	{
		ft_bool_t if_9 = Ft_Esd_TouchTag_Inside(&context->Touch_Tag);
		if (if_9)
		{
			a = context->Alpha(owner);
		}
		else
		{
			a = context->PrimaryAlpha(owner);
		}
	}
	else
	{
		a = context->Alpha(owner);
	}
	ft_argb32_t color = Ft_Esd_ColorARGB_Combine(rgb, a);
	Ft_Esd_Render_Rectangle(x_2, y_2, width, height, radius, color);
	ft_uint8_t alpha = 255;
	Ft_Esd_Dl_COLOR_A(alpha);
	ft_uint8_t s_2 = 255;
	Ft_Esd_Dl_TAG(s_2);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context); 
}

Ft_Esd_Theme *Ft_Esd_TransparentRectButton_Current_Theme__return(Ft_Esd_TransparentRectButton *context)
{
	void *owner = context->Owner;
	return Ft_Esd_Theme_GetCurrent();
}

void Ft_Esd_TransparentRectButton_Start(Ft_Esd_TransparentRectButton *context)
{
	void *owner = context->Owner;
	Ft_Esd_TransparentRectButton_Start__Builtin(context);
}

void Ft_Esd_TransparentRectButton_Update(Ft_Esd_TransparentRectButton *context)
{
	void *owner = context->Owner;
	Ft_Esd_TouchTag_Update(&context->Touch_Tag);
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context); 
}

void Ft_Esd_TransparentRectButton_End(Ft_Esd_TransparentRectButton *context)
{
	void *owner = context->Owner;
	Ft_Esd_TransparentRectButton_End__Builtin(context);
}

void Ft_Esd_TransparentRectButton_Touch_Tag_Down__Signal(void *c)
{
	Ft_Esd_TransparentRectButton *context = (Ft_Esd_TransparentRectButton *)c;
	void *owner = context->Owner;
	context->Down(owner);
}

void Ft_Esd_TransparentRectButton_Touch_Tag_Up__Signal(void *c)
{
	Ft_Esd_TransparentRectButton *context = (Ft_Esd_TransparentRectButton *)c;
	void *owner = context->Owner;
	context->Up(owner);
}

void Ft_Esd_TransparentRectButton_Touch_Tag_Tap__Signal(void *c)
{
	Ft_Esd_TransparentRectButton *context = (Ft_Esd_TransparentRectButton *)c;
	void *owner = context->Owner;
	context->Pushed(owner);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_TransparentRectButton Instance;
	ft_bool_t Primary;
	int PrimaryAlpha;
	int Alpha;
	Ft_Esd_BitmapCell BitMap;
	const char * Text;
	int Font;
	ft_uint16_t AlignX;
	ft_uint16_t AlignY;
} Ft_Esd_TransparentRectButton__ESD;

ft_bool_t Ft_Esd_TransparentRectButton__Get_Primary__ESD(void *context) { return ((Ft_Esd_TransparentRectButton__ESD *)context)->Primary; }
void Ft_Esd_TransparentRectButton__Set_Primary__ESD(void *context, ft_bool_t value) { ((Ft_Esd_TransparentRectButton__ESD *)context)->Primary = value; }
int Ft_Esd_TransparentRectButton__Get_PrimaryAlpha__ESD(void *context) { return ((Ft_Esd_TransparentRectButton__ESD *)context)->PrimaryAlpha; }
void Ft_Esd_TransparentRectButton__Set_PrimaryAlpha__ESD(void *context, int value) { ((Ft_Esd_TransparentRectButton__ESD *)context)->PrimaryAlpha = value; }
int Ft_Esd_TransparentRectButton__Get_Alpha__ESD(void *context) { return ((Ft_Esd_TransparentRectButton__ESD *)context)->Alpha; }
void Ft_Esd_TransparentRectButton__Set_Alpha__ESD(void *context, int value) { ((Ft_Esd_TransparentRectButton__ESD *)context)->Alpha = value; }
Ft_Esd_BitmapCell Ft_Esd_TransparentRectButton__Get_BitMap__ESD(void *context) { return ((Ft_Esd_TransparentRectButton__ESD *)context)->BitMap; }
void Ft_Esd_TransparentRectButton__Set_BitMap__ESD(void *context, Ft_Esd_BitmapCell value) { ((Ft_Esd_TransparentRectButton__ESD *)context)->BitMap = value; }
const char * Ft_Esd_TransparentRectButton__Get_Text__ESD(void *context) { return ((Ft_Esd_TransparentRectButton__ESD *)context)->Text; }
void Ft_Esd_TransparentRectButton__Set_Text__ESD(void *context, const char * value) { ((Ft_Esd_TransparentRectButton__ESD *)context)->Text = value; }
int Ft_Esd_TransparentRectButton__Get_Font__ESD(void *context) { return ((Ft_Esd_TransparentRectButton__ESD *)context)->Font; }
void Ft_Esd_TransparentRectButton__Set_Font__ESD(void *context, int value) { ((Ft_Esd_TransparentRectButton__ESD *)context)->Font = value; }
ft_uint16_t Ft_Esd_TransparentRectButton__Get_AlignX__ESD(void *context) { return ((Ft_Esd_TransparentRectButton__ESD *)context)->AlignX; }
void Ft_Esd_TransparentRectButton__Set_AlignX__ESD(void *context, ft_uint16_t value) { ((Ft_Esd_TransparentRectButton__ESD *)context)->AlignX = value; }
ft_uint16_t Ft_Esd_TransparentRectButton__Get_AlignY__ESD(void *context) { return ((Ft_Esd_TransparentRectButton__ESD *)context)->AlignY; }
void Ft_Esd_TransparentRectButton__Set_AlignY__ESD(void *context, ft_uint16_t value) { ((Ft_Esd_TransparentRectButton__ESD *)context)->AlignY = value; }

void *Ft_Esd_TransparentRectButton__Create__ESD()
{
	Ft_Esd_TransparentRectButton__ESD *context = (Ft_Esd_TransparentRectButton__ESD *)esd_malloc(sizeof(Ft_Esd_TransparentRectButton__ESD));
	if (context)
	{
		Ft_Esd_TransparentRectButton__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->Primary = 1;
		context->Instance.Primary = Ft_Esd_TransparentRectButton__Get_Primary__ESD;
		context->PrimaryAlpha = 50L;
		context->Instance.PrimaryAlpha = Ft_Esd_TransparentRectButton__Get_PrimaryAlpha__ESD;
		context->Alpha = 150L;
		context->Instance.Alpha = Ft_Esd_TransparentRectButton__Get_Alpha__ESD;
		context->BitMap = (Ft_Esd_BitmapCell){ 0 };
		context->Instance.BitMap = Ft_Esd_TransparentRectButton__Get_BitMap__ESD;
		context->Text = "";
		context->Instance.Text = Ft_Esd_TransparentRectButton__Get_Text__ESD;
		context->Font = 27L;
		context->Instance.Font = Ft_Esd_TransparentRectButton__Get_Font__ESD;
		context->AlignX = OPT_ALIGN_LEFT;
		context->Instance.AlignX = Ft_Esd_TransparentRectButton__Get_AlignX__ESD;
		context->AlignY = OPT_ALIGN_TOP;
		context->Instance.AlignY = Ft_Esd_TransparentRectButton__Get_AlignY__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_TransparentRectButton__Create__ESD)");
	}
	return context;
}

void Ft_Esd_TransparentRectButton__Destroy__ESD(void *context)
{
	esd_free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */
