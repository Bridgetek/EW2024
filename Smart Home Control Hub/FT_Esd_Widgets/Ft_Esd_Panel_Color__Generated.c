/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Panel_Color
C Source
*/

/*
Comment :
Introduction:
This widget purposely draws a colored background.
Panel can be in either normal or raised mode.
The four corners can be rounded by "Radius" property.
"Color" property is used to fill the panel.
*/

#include "Ft_Esd_Panel_Color.h"

#include "Esd_Context.h"
#include "Ft_Esd_Elements.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
ft_argb32_t Ft_Esd_Panel_Color_Color__Default(void *context) { return 0x7cadcf32UL; }
int Ft_Esd_Panel_Color_Radius__Default(void *context) { return 4L; }
ft_bool_t Ft_Esd_Panel_Color_Raised__Default(void *context) { return 0; }


static Ft_Esd_WidgetSlots s_Ft_Esd_Panel_Color__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Panel_Color_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Widget_End,
};


void Ft_Esd_Panel_Color__Initializer(Ft_Esd_Panel_Color *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Panel_Color_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Panel_Color__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->Color = Ft_Esd_Panel_Color_Color__Default;
	context->Radius = Ft_Esd_Panel_Color_Radius__Default;
	context->Raised = Ft_Esd_Panel_Color_Raised__Default;
}

void Ft_Esd_Elements_Panel_Color(ft_argb32_t, ft_int16_t, ft_int16_t, ft_int16_t, ft_int16_t, ft_int16_t, ft_bool_t);

void Ft_Esd_Panel_Color_Render(Ft_Esd_Panel_Color *context)
{
	void *owner = context->Owner;
	ft_argb32_t color = context->Color(owner);
	ft_int16_t x = context->Widget.GlobalX;
	ft_int16_t y = context->Widget.GlobalY;
	ft_int16_t width = context->Widget.GlobalWidth;
	ft_int16_t height = context->Widget.GlobalHeight;
	int radius = context->Radius(owner);
	ft_bool_t raised = context->Raised(owner);
	Ft_Esd_Elements_Panel_Color(color, x, y, width, height, radius, raised);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_Panel_Color Instance;
	ft_argb32_t Color;
	int Radius;
	ft_bool_t Raised;
} Ft_Esd_Panel_Color__ESD;

ft_argb32_t Ft_Esd_Panel_Color__Get_Color__ESD(void *context) { return ((Ft_Esd_Panel_Color__ESD *)context)->Color; }
void Ft_Esd_Panel_Color__Set_Color__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_Panel_Color__ESD *)context)->Color = value; }
int Ft_Esd_Panel_Color__Get_Radius__ESD(void *context) { return ((Ft_Esd_Panel_Color__ESD *)context)->Radius; }
void Ft_Esd_Panel_Color__Set_Radius__ESD(void *context, int value) { ((Ft_Esd_Panel_Color__ESD *)context)->Radius = value; }
ft_bool_t Ft_Esd_Panel_Color__Get_Raised__ESD(void *context) { return ((Ft_Esd_Panel_Color__ESD *)context)->Raised; }
void Ft_Esd_Panel_Color__Set_Raised__ESD(void *context, ft_bool_t value) { ((Ft_Esd_Panel_Color__ESD *)context)->Raised = value; }

void *Ft_Esd_Panel_Color__Create__ESD()
{
	Ft_Esd_Panel_Color__ESD *context = (Ft_Esd_Panel_Color__ESD *)esd_malloc(sizeof(Ft_Esd_Panel_Color__ESD));
	if (context)
	{
		Ft_Esd_Panel_Color__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->Color = 0x7cadcf32UL;
		context->Instance.Color = Ft_Esd_Panel_Color__Get_Color__ESD;
		context->Radius = 4L;
		context->Instance.Radius = Ft_Esd_Panel_Color__Get_Radius__ESD;
		context->Raised = 0;
		context->Instance.Raised = Ft_Esd_Panel_Color__Get_Raised__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_Panel_Color__Create__ESD)");
	}
	return context;
}

void Ft_Esd_Panel_Color__Destroy__ESD(void *context)
{
	esd_free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */
