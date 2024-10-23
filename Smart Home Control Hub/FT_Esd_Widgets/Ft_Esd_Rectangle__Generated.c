/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Rectangle
C Source
*/

/*
Comment :
Introduction:
This widget draws a rectangle.
Fill color is taken from "Color" property.
*/

#include "Ft_Esd_Rectangle.h"

#include "Esd_Context.h"
#include "Esd_Core.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
ft_int32_t Ft_Esd_Rectangle_Radius__Default(void *context) { return 1L; }
int Ft_Esd_Rectangle_Border_Width__Default(void *context) { return 0L; }
ft_argb32_t Ft_Esd_Rectangle_Border_Color__Default(void *context) { return 0xffffffUL; }
ft_argb32_t Ft_Esd_Rectangle_Color__Default(void *context) { return 0xffffffffUL; }


static Ft_Esd_WidgetSlots s_Ft_Esd_Rectangle__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Rectangle_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Widget_End,
};


void Ft_Esd_Rectangle__Initializer(Ft_Esd_Rectangle *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Rectangle_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Rectangle__Slots;
	context->Widget.LocalX = 33;
	context->Widget.LocalY = 42;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->Radius = Ft_Esd_Rectangle_Radius__Default;
	context->Border_Width = Ft_Esd_Rectangle_Border_Width__Default;
	context->Border_Color = Ft_Esd_Rectangle_Border_Color__Default;
	context->Color = Ft_Esd_Rectangle_Color__Default;
}


static int Ft_Esd_Rectangle_Local_Method_2(Ft_Esd_Rectangle *context, int InputRadius, int Width, int Height);
static int Ft_Esd_Rectangle_Local_Method(Ft_Esd_Rectangle *context, int InputRadius, int Width, int Height, int BorderWidth);

void Ft_Esd_Rectangle_Render(Ft_Esd_Rectangle *context)
{
	void *owner = context->Owner;
	ft_int16_t x = context->Widget.GlobalX;
	ft_int16_t y = context->Widget.GlobalY;
	ft_int16_t width = context->Widget.GlobalWidth;
	ft_int16_t height = context->Widget.GlobalHeight;
	ft_int32_t InputRadius = context->Radius(owner);
	ft_int16_t Width = context->Widget.GlobalWidth;
	ft_int16_t Height = context->Widget.GlobalHeight;
	int BorderWidth = context->Border_Width(owner);
	int radius = Ft_Esd_Rectangle_Local_Method(context, InputRadius, Width, Height, BorderWidth);
	ft_argb32_t color = context->Border_Color(owner);
	Esd_Render_Rect(x, y, width, height, radius, color);
	ft_int16_t left = context->Widget.GlobalX;
	int right = context->Border_Width(owner);
	int x_1 = left + right;
	ft_int16_t left_1 = context->Widget.GlobalY;
	int right_1 = context->Border_Width(owner);
	int y_1 = left_1 + right_1;
	ft_int16_t left_2 = context->Widget.GlobalWidth;
	int left_3 = 2L;
	int right_3 = context->Border_Width(owner);
	int right_2 = left_3 * right_3;
	int width_1 = left_2 - right_2;
	ft_int16_t left_4 = context->Widget.GlobalHeight;
	int left_5 = 2L;
	int right_5 = context->Border_Width(owner);
	int right_4 = left_5 * right_5;
	int height_1 = left_4 - right_4;
	ft_int32_t InputRadius_1 = context->Radius(owner);
	ft_int16_t left_6 = context->Widget.GlobalWidth;
	int left_7 = 2L;
	int right_7 = context->Border_Width(owner);
	int right_6 = left_7 * right_7;
	int Width_1 = left_6 - right_6;
	ft_int16_t left_8 = context->Widget.GlobalHeight;
	int left_9 = 2L;
	int right_9 = context->Border_Width(owner);
	int right_8 = left_9 * right_9;
	int Height_1 = left_8 - right_8;
	int radius_1 = Ft_Esd_Rectangle_Local_Method_2(context, InputRadius_1, Width_1, Height_1);
	ft_argb32_t color_1 = context->Color(owner);
	Esd_Render_Rect(x_1, y_1, width_1, height_1, radius_1, color_1);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context);
}

static int Ft_Esd_Rectangle_Local_Method_2(Ft_Esd_Rectangle *context, int InputRadius, int Width, int Height)
{
	void *owner = context->Owner;
	int tempRadius =0;
	if(Width<Height)
	  tempRadius = Width/2;
	else
	  tempRadius = Height/2;
	
	if(InputRadius < tempRadius)
	   return InputRadius;
	else
	   return tempRadius;
}

static int Ft_Esd_Rectangle_Local_Method(Ft_Esd_Rectangle *context, int InputRadius, int Width, int Height, int BorderWidth)
{
	void *owner = context->Owner;
	int tempRadius = 0;
	if(Width<Height)
	  tempRadius = Width/2;
	else
	  tempRadius = Height/2;
	
	if(InputRadius == 1)
	   return InputRadius;
	else if(InputRadius < tempRadius)
	   return InputRadius+BorderWidth;
	else
	   return tempRadius+BorderWidth;
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_Rectangle Instance;
	ft_int32_t Radius;
	int Border_Width;
	ft_argb32_t Border_Color;
	ft_argb32_t Color;
} Ft_Esd_Rectangle__ESD;

ft_int32_t Ft_Esd_Rectangle__Get_Radius__ESD(void *context) { return ((Ft_Esd_Rectangle__ESD *)context)->Radius; }
void Ft_Esd_Rectangle__Set_Radius__ESD(void *context, ft_int32_t value) { ((Ft_Esd_Rectangle__ESD *)context)->Radius = value; }
int Ft_Esd_Rectangle__Get_Border_Width__ESD(void *context) { return ((Ft_Esd_Rectangle__ESD *)context)->Border_Width; }
void Ft_Esd_Rectangle__Set_Border_Width__ESD(void *context, int value) { ((Ft_Esd_Rectangle__ESD *)context)->Border_Width = value; }
ft_argb32_t Ft_Esd_Rectangle__Get_Border_Color__ESD(void *context) { return ((Ft_Esd_Rectangle__ESD *)context)->Border_Color; }
void Ft_Esd_Rectangle__Set_Border_Color__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_Rectangle__ESD *)context)->Border_Color = value; }
ft_argb32_t Ft_Esd_Rectangle__Get_Color__ESD(void *context) { return ((Ft_Esd_Rectangle__ESD *)context)->Color; }
void Ft_Esd_Rectangle__Set_Color__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_Rectangle__ESD *)context)->Color = value; }

void *Ft_Esd_Rectangle__Create__ESD()
{
	Ft_Esd_Rectangle__ESD *context = (Ft_Esd_Rectangle__ESD *)esd_malloc(sizeof(Ft_Esd_Rectangle__ESD));
	if (context)
	{
		Ft_Esd_Rectangle__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->Radius = 1L;
		context->Instance.Radius = Ft_Esd_Rectangle__Get_Radius__ESD;
		context->Border_Width = 0L;
		context->Instance.Border_Width = Ft_Esd_Rectangle__Get_Border_Width__ESD;
		context->Border_Color = 0xffffffUL;
		context->Instance.Border_Color = Ft_Esd_Rectangle__Get_Border_Color__ESD;
		context->Color = 0xffffffffUL;
		context->Instance.Color = Ft_Esd_Rectangle__Get_Color__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_Rectangle__Create__ESD)");
	}
	return context;
}

void Ft_Esd_Rectangle__Destroy__ESD(void *context)
{
	esd_free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */