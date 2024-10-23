/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_RangeSlider
Header
*/

#ifndef Ft_Esd_RangeSlider__H
#define Ft_Esd_RangeSlider__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Math.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_TouchTag.h"
#include "Ft_Esd_Widget.h"

#ifndef ESD_LOGIC
#define ESD_LOGIC(name, ...)
#define ESD_ACTOR(name, ...)
#define ESD_WIDGET(name, ...)
#define ESD_PAGE(name, ...)
#define ESD_APPLICATION(name, ...)
#define ESD_INPUT(name, ...)
#define ESD_ARRAY_INPUT(name, ...)
#define ESD_OUTPUT(name, ...)
#define ESD_SLOT(name, ...)
#define ESD_SIGNAL(name, ...)
#define ESD_VARIABLE(name, ...)
#define ESD_WRITER(name, ...)
#endif

#define Ft_Esd_RangeSlider_CLASSID 0xB23BBDF8
ESD_SYMBOL(Ft_Esd_RangeSlider_CLASSID, Type = esd_classid_t)

/* EVE builtin RangeSlider bar widget */
ESD_WIDGET(Ft_Esd_RangeSlider, Include = "Ft_Esd_RangeSlider.h", Callback, DisplayName = "ESD RangeSlider", Category = EsdWidgets, Icon = ":/icons/ui-seek-bar.png", X = 50, Y = 50, Width = 160, Height = 20)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Theme, Type = Ft_Esd_Theme *, Default = Ft_Esd_Theme_GetCurrent)
	Ft_Esd_Theme *(* Theme)(void *context);
	ESD_INPUT(Alpha, Type = ft_uint8_t, Min = 0, Max = 255, SingleStep = 1, Default = 255)
	ft_uint8_t(* Alpha)(void *context);
	/* Inclusive range of the RangeSlider value */
	ESD_INPUT(Min, Type = ft_int16_t, Default = 0)
	ft_int16_t(* Min)(void *context);
	/* Inclusive range of the RangeSlider value */
	ESD_INPUT(Max, Type = ft_int16_t, Default = 100)
	ft_int16_t(* Max)(void *context);
	/* Inclusive range of the RangeSlider value */
	ESD_INPUT(Step, Type = ft_int16_t, Default = 5)
	ft_int16_t(* Step)(void *context);
	/* Inclusive range of the RangeSlider value */
	ESD_INPUT(Marker_Lines, Type = ft_bool_t, Default = true)
	ft_bool_t(* Marker_Lines)(void *context);
	ESD_VARIABLE(ValueSlider, Type = int, Private)
	int ValueSlider;
	ESD_VARIABLE(ValueDisplay, Type = int, Private)
	int ValueDisplay;
	/* Inclusive range of the RangeSlider value */
	ESD_INPUT(Value, Type = ft_int16_t, Default = 5)
	ft_int16_t(* Value)(void *context);
	ESD_VARIABLE(PreviousValue, Type = int, Private)
	int PreviousValue;
	Ft_Esd_TouchTag TouchTag;
} Ft_Esd_RangeSlider;

void Ft_Esd_RangeSlider__Initializer(Ft_Esd_RangeSlider *context);

ESD_SLOT(Start)
void Ft_Esd_RangeSlider_Start(Ft_Esd_RangeSlider *context);

ESD_SLOT(End)
void Ft_Esd_RangeSlider_End(Ft_Esd_RangeSlider *context);

ESD_SLOT(Render)
void Ft_Esd_RangeSlider_Render(Ft_Esd_RangeSlider *context);

ESD_SLOT(Update)
void Ft_Esd_RangeSlider_Update(Ft_Esd_RangeSlider *context);

ESD_OUTPUT(Output, Type = int)
int Ft_Esd_RangeSlider_Output(Ft_Esd_RangeSlider *context);

#endif /* Ft_Esd_RangeSlider__H */

/* end of file */