/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_Vertical_ScrollText
Header
*/

#ifndef Usr_Vertical_ScrollText__H
#define Usr_Vertical_ScrollText__H

#include "Esd_Base.h"
#include "Esd_FontInfo.h"
#include "Ft_Esd.h"
#include "Ft_Esd_DefaultTheme.h"
#include "Ft_Esd_Layout_Fixed.h"
#include "Ft_Esd_Math.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_Timer.h"
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

#define Usr_Vertical_ScrollText_CLASSID 0x26086758
ESD_SYMBOL(Usr_Vertical_ScrollText_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Usr_Vertical_ScrollText, Include = "Usr_Vertical_ScrollText.h", Callback, X = 0, Y = 8, Width = 400, Height = 300)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Alpha, Type = ft_uint8_t, Min = 0, Max = 255, SingleStep = 1, Default = 255)
	ft_uint8_t(* Alpha)(void *context);
	ESD_INPUT(Theme, Type = Ft_Esd_Theme *, EditRole = Library, Default = Ft_Esd_Theme_GetCurrent)
	Ft_Esd_Theme *(* Theme)(void *context);
	ESD_VARIABLE(Value, DisplayName = "Value", Type = int, Min = 0, Max = 30, Public)
	int Value;
	ESD_VARIABLE(nextValue, DisplayName = "Value", Type = int, Default = 200, Private)
	int nextValue;
	ESD_VARIABLE(currentValue, Type = int, Default = 100, Private)
	int currentValue;
	ESD_VARIABLE(baseLine, Type = uint16_t, Private)
	uint16_t baseLine;
	ESD_VARIABLE(capsHeight, Type = uint16_t, Private)
	uint16_t capsHeight;
	ESD_INPUT(Font, Type = uint8_t, Min = 16, Max = 34, Default = 27)
	uint8_t(* Font)(void *context);
	ESD_INPUT(FontResource, DisplayName = "Font Resource", Type = Esd_FontInfo *)
	Esd_FontInfo *(* FontResource)(void *context);
	ESD_VARIABLE(xOffset, Type = uint16_t, Private)
	uint16_t xOffset;
	ESD_VARIABLE(myFont, Type = uint16_t, Private)
	uint16_t myFont;
	Ft_Esd_Timer ESD_Timer;
	Ft_Esd_Layout_Fixed Fixed_Positioning;
} Usr_Vertical_ScrollText;

void Usr_Vertical_ScrollText__Initializer(Usr_Vertical_ScrollText *context);

ESD_SLOT(Start)
void Usr_Vertical_ScrollText_Start(Usr_Vertical_ScrollText *context);

ESD_SLOT(Update)
void Usr_Vertical_ScrollText_Update(Usr_Vertical_ScrollText *context);

ESD_SLOT(Render)
void Usr_Vertical_ScrollText_Render(Usr_Vertical_ScrollText *context);

ESD_SLOT(Idle)
void Usr_Vertical_ScrollText_Idle(Usr_Vertical_ScrollText *context);

ESD_SLOT(End)
void Usr_Vertical_ScrollText_End(Usr_Vertical_ScrollText *context);

#endif /* Usr_Vertical_ScrollText__H */

/* end of file */