/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_FontIcon
C Source
*/

#include "Ft_Esd_FontIcon.h"

#include "Esd_Context.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
Ft_Esd_BitmapCell Ft_Esd_FontIcon_BitmapCell__Default(void *context) { return (Ft_Esd_BitmapCell){ 0 }; }
ft_uint8_t Ft_Esd_FontIcon_MinAlpha__Default(void *context) { return 1; }


static Ft_Esd_WidgetSlots s_Ft_Esd_FontIcon__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_FontIcon_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Widget_End,
};


void Ft_Esd_FontIcon__Initializer(Ft_Esd_FontIcon *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_FontIcon_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_FontIcon__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 128;
	context->Widget.LocalHeight = 128;
	context->Color = 0xffffffffUL;
	context->BitmapCell = Ft_Esd_FontIcon_BitmapCell__Default;
	context->FontIcon = "f3a2-brands";
	context->Align = ESD_ALIGN_TOPLEFT;
	context->Scaling = ESD_SCALING_FIT;
	context->AutoResize = ESD_AUTORESIZE_BOTH;
	context->ScaleX = (1L * (1L << 16) + 0x0L);
	context->ScaleY = (1L * (1L << 16) + 0x0L);
	context->MinAlpha = Ft_Esd_FontIcon_MinAlpha__Default;
}

void Ft_Esd_FontIcon_Render_Bitmap(Ft_Esd_FontIcon *context);

void Ft_Esd_FontIcon_Render(Ft_Esd_FontIcon *context)
{
	void *owner = context->Owner;
	Ft_Esd_FontIcon_Render_Bitmap(context);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context); 
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_FontIcon Instance;
	Ft_Esd_BitmapCell BitmapCell;
	ft_uint8_t MinAlpha;
} Ft_Esd_FontIcon__ESD;

Ft_Esd_BitmapCell Ft_Esd_FontIcon__Get_BitmapCell__ESD(void *context) { return ((Ft_Esd_FontIcon__ESD *)context)->BitmapCell; }
void Ft_Esd_FontIcon__Set_BitmapCell__ESD(void *context, Ft_Esd_BitmapCell value) { ((Ft_Esd_FontIcon__ESD *)context)->BitmapCell = value; }
ft_uint8_t Ft_Esd_FontIcon__Get_MinAlpha__ESD(void *context) { return ((Ft_Esd_FontIcon__ESD *)context)->MinAlpha; }
void Ft_Esd_FontIcon__Set_MinAlpha__ESD(void *context, ft_uint8_t value) { ((Ft_Esd_FontIcon__ESD *)context)->MinAlpha = value; }

void *Ft_Esd_FontIcon__Create__ESD()
{
	Ft_Esd_FontIcon__ESD *context = (Ft_Esd_FontIcon__ESD *)esd_malloc(sizeof(Ft_Esd_FontIcon__ESD));
	if (context)
	{
		Ft_Esd_FontIcon__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->BitmapCell = (Ft_Esd_BitmapCell){ 0 };
		context->Instance.BitmapCell = Ft_Esd_FontIcon__Get_BitmapCell__ESD;
		context->MinAlpha = 1;
		context->Instance.MinAlpha = Ft_Esd_FontIcon__Get_MinAlpha__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_FontIcon__Create__ESD)");
	}
	return context;
}

void Ft_Esd_FontIcon__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Ft_Esd_FontIcon__Set_Color__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_FontIcon__ESD *)context)->Instance.Color = value; }
void Ft_Esd_FontIcon__Set_FontIcon__ESD(void *context, esd_fonticon_t value) { ((Ft_Esd_FontIcon__ESD *)context)->Instance.FontIcon = value; }
void Ft_Esd_FontIcon__Set_Align__ESD(void *context, uint8_t value) { ((Ft_Esd_FontIcon__ESD *)context)->Instance.Align = value; }
void Ft_Esd_FontIcon__Set_Scaling__ESD(void *context, uint8_t value) { ((Ft_Esd_FontIcon__ESD *)context)->Instance.Scaling = value; }
void Ft_Esd_FontIcon__Set_AutoResize__ESD(void *context, ft_uint8_t value) { ((Ft_Esd_FontIcon__ESD *)context)->Instance.AutoResize = value; }
void Ft_Esd_FontIcon__Set_ScaleX__ESD(void *context, ft_int32_f16_t value) { ((Ft_Esd_FontIcon__ESD *)context)->Instance.ScaleX = value; }
void Ft_Esd_FontIcon__Set_ScaleY__ESD(void *context, ft_int32_f16_t value) { ((Ft_Esd_FontIcon__ESD *)context)->Instance.ScaleY = value; }

#endif /* ESD_SIMULATION */

/* end of file */
