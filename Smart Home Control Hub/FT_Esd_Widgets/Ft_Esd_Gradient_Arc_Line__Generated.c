/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Gradient_Arc_Line
C Source
*/

#include "Ft_Esd_Gradient_Arc_Line.h"

#include "Esd_Context.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);


static Ft_Esd_WidgetSlots s_Ft_Esd_Gradient_Arc_Line__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Gradient_Arc_Line_Update,
	(void(*)(void *))Ft_Esd_Widget_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Gradient_Arc_Line_End,
};

static void Ft_Esd_Gradient_Arc_Line_Render_Forwarder_ForwardRender__Signal(void *context);

void Ft_Esd_Gradient_Arc_Line__Render_Forwarder__Initializer(Ft_Esd_Gradient_Arc_Line *context)
{
	Ft_Esd_RenderForwarder *object = (Ft_Esd_RenderForwarder *)&context->Render_Forwarder;
	Ft_Esd_RenderForwarder__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 10;
	object->Widget.LocalY = 10;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	object->ForwardRender = Ft_Esd_Gradient_Arc_Line_Render_Forwarder_ForwardRender__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void Ft_Esd_Gradient_Arc_Line__Initializer(Ft_Esd_Gradient_Arc_Line *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Gradient_Arc_Line_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Gradient_Arc_Line__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->G_X = 0L;
	context->G_Y = 0L;
	context->G_W = 0L;
	context->G_H = 0L;
	context->Border = 20L;
	context->Start_Color = 0xff00ff00UL;
	context->End_Color = 0xffaa0000UL;
	context->Origin = 0L;
	context->Angle = 90L;
	context->IsClockwise = 1;
	context->ShowEndPoint = 1;
	context->ShowStartPoint = 1;
	Ft_Esd_Gradient_Arc_Line__Render_Forwarder__Initializer(context);
}

void Ft_Esd_Gradient_Arc_Line_Func(Ft_Esd_Gradient_Arc_Line *context, int, int, int, int, ft_argb32_t, ft_argb32_t, ft_bool_t, int, int);

void Ft_Esd_Gradient_Arc_Line_Update(Ft_Esd_Gradient_Arc_Line *context)
{
	void *owner = context->Owner;
	ft_int16_t update_variable = Ft_Esd_RenderForwarder_GlobalX(&context->Render_Forwarder);
	context->G_X = update_variable;
	ft_int16_t update_variable_1 = Ft_Esd_RenderForwarder_GlobalY(&context->Render_Forwarder);
	context->G_Y = update_variable_1;
	ft_int16_t update_variable_2 = Ft_Esd_RenderForwarder_GlobalWidth(&context->Render_Forwarder);
	context->G_W = update_variable_2;
	ft_int16_t update_variable_3 = Ft_Esd_RenderForwarder_GlobalHeight(&context->Render_Forwarder);
	context->G_H = update_variable_3;
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context);
}

void Ft_Esd_Gradient_Arc_Line_End(Ft_Esd_Gradient_Arc_Line *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Render_Forwarder); 
}

void Ft_Esd_Gradient_Arc_Line_Render_Forwarder_ForwardRender__Signal(void *c)
{
	Ft_Esd_Gradient_Arc_Line *context = (Ft_Esd_Gradient_Arc_Line *)c;
	void *owner = context->Owner;
	int x = 0L;
	int y = 0L;
	int radius = 0L;
	int border = context->Border;
	esd_argb32_t startColor = context->Start_Color;
	esd_argb32_t endColor = context->End_Color;
	bool isClockwise = context->IsClockwise;
	int origin = context->Origin;
	int value = context->Angle;
	Ft_Esd_Gradient_Arc_Line_Func(context, x, y, radius, border, startColor, endColor, isClockwise, origin, value);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_Gradient_Arc_Line Instance;
} Ft_Esd_Gradient_Arc_Line__ESD;


void *Ft_Esd_Gradient_Arc_Line__Create__ESD()
{
	Ft_Esd_Gradient_Arc_Line__ESD *context = (Ft_Esd_Gradient_Arc_Line__ESD *)esd_malloc(sizeof(Ft_Esd_Gradient_Arc_Line__ESD));
	if (context)
	{
		Ft_Esd_Gradient_Arc_Line__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_Gradient_Arc_Line__Create__ESD)");
	}
	return context;
}

void Ft_Esd_Gradient_Arc_Line__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Ft_Esd_Gradient_Arc_Line__Set_G_X__ESD(void *context, int value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.G_X = value; }
void Ft_Esd_Gradient_Arc_Line__Set_G_Y__ESD(void *context, int value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.G_Y = value; }
void Ft_Esd_Gradient_Arc_Line__Set_G_W__ESD(void *context, int value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.G_W = value; }
void Ft_Esd_Gradient_Arc_Line__Set_G_H__ESD(void *context, int value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.G_H = value; }
void Ft_Esd_Gradient_Arc_Line__Set_Border__ESD(void *context, int value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.Border = value; }
void Ft_Esd_Gradient_Arc_Line__Set_Start_Color__ESD(void *context, esd_argb32_t value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.Start_Color = value; }
void Ft_Esd_Gradient_Arc_Line__Set_End_Color__ESD(void *context, esd_argb32_t value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.End_Color = value; }
void Ft_Esd_Gradient_Arc_Line__Set_Origin__ESD(void *context, int value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.Origin = value; }
void Ft_Esd_Gradient_Arc_Line__Set_Angle__ESD(void *context, int value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.Angle = value; }
void Ft_Esd_Gradient_Arc_Line__Set_IsClockwise__ESD(void *context, bool value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.IsClockwise = value; }
void Ft_Esd_Gradient_Arc_Line__Set_ShowEndPoint__ESD(void *context, bool value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.ShowEndPoint = value; }
void Ft_Esd_Gradient_Arc_Line__Set_ShowStartPoint__ESD(void *context, bool value) { ((Ft_Esd_Gradient_Arc_Line__ESD *)context)->Instance.ShowStartPoint = value; }

#endif /* ESD_SIMULATION */

/* end of file */