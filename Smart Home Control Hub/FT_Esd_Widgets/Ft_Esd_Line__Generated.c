/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Line
C Source
*/

/*
Comment :
Introduction:
This widget draws a line.
Line width and line color can be changed.
*/

#include "Ft_Esd_Line.h"

#include "Esd_Context.h"
#include "Ft_Esd_Primitives.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
int Ft_Esd_Line_linewidth__Default(void *context) { return 16L; }
ft_argb32_t Ft_Esd_Line_color__Default(void *context) { return 0xfffafafaUL; }


static Ft_Esd_WidgetSlots s_Ft_Esd_Line__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Line_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Widget_End,
};


void Ft_Esd_Line__Initializer(Ft_Esd_Line *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Line_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Line__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->linewidth = Ft_Esd_Line_linewidth__Default;
	context->color = Ft_Esd_Line_color__Default;
}


void Ft_Esd_Line_Render(Ft_Esd_Line *context)
{
	void *owner = context->Owner;
	ft_int16_t x0 = context->Widget.GlobalX;
	ft_int16_t y0 = context->Widget.GlobalY;
	ft_int16_t left = context->Widget.GlobalX;
	ft_int16_t right = context->Widget.GlobalWidth;
	int x1 = left + right;
	ft_int16_t left_1 = context->Widget.GlobalY;
	ft_int16_t right_1 = context->Widget.GlobalHeight;
	int y1 = left_1 + right_1;
	int width = context->linewidth(owner);
	ft_argb32_t color_1 = context->color(owner);
	Ft_Esd_Render_Line(x0, y0, x1, y1, width, color_1);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_Line Instance;
	int linewidth;
	ft_argb32_t color;
} Ft_Esd_Line__ESD;

int Ft_Esd_Line__Get_linewidth__ESD(void *context) { return ((Ft_Esd_Line__ESD *)context)->linewidth; }
void Ft_Esd_Line__Set_linewidth__ESD(void *context, int value) { ((Ft_Esd_Line__ESD *)context)->linewidth = value; }
ft_argb32_t Ft_Esd_Line__Get_color__ESD(void *context) { return ((Ft_Esd_Line__ESD *)context)->color; }
void Ft_Esd_Line__Set_color__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_Line__ESD *)context)->color = value; }

void *Ft_Esd_Line__Create__ESD()
{
	Ft_Esd_Line__ESD *context = (Ft_Esd_Line__ESD *)esd_malloc(sizeof(Ft_Esd_Line__ESD));
	if (context)
	{
		Ft_Esd_Line__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->linewidth = 16L;
		context->Instance.linewidth = Ft_Esd_Line__Get_linewidth__ESD;
		context->color = 0xfffafafaUL;
		context->Instance.color = Ft_Esd_Line__Get_color__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_Line__Create__ESD)");
	}
	return context;
}

void Ft_Esd_Line__Destroy__ESD(void *context)
{
	esd_free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */
