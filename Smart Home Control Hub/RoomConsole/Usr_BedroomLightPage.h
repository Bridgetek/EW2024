/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_BedroomLightPage
Header
*/

#ifndef Usr_BedroomLightPage__H
#define Usr_BedroomLightPage__H

#include "Esd_Base.h"
#include "Esd_Core.h"
#include "Esd_FontInfo.h"
#include "Ft_Esd.h"
#include "Ft_Esd_BitmapInfo.h"
#include "Ft_Esd_Gradient.h"
#include "Ft_Esd_Image.h"
#include "Ft_Esd_ImageButton.h"
#include "Ft_Esd_Label.h"
#include "Ft_Esd_Layout_Fixed.h"
#include "Ft_Esd_RangeSlider.h"
#include "Ft_Esd_Rectangle.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_Theme_DarkOrange.h"
#include "Ft_Esd_Widget.h"
#include "Lamp.h"
#include "LampBase.h"
#include "LampChasis1.h"
#include "LampChasis2.h"
#include "LampNeck.h"
#include "LampTop.h"
#include "power_circle_64.h"
#include "return_circle_64.h"

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

#define Usr_BedroomLightPage_CLASSID 0xEB734EB0
ESD_SYMBOL(Usr_BedroomLightPage_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Usr_BedroomLightPage, Include = "Usr_BedroomLightPage.h", Callback, X = 0, Y = 0, Width = 400, Height = 300, Page)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_VARIABLE(SliderValue, Type = int, Default = 255, Private)
	int SliderValue;
	ESD_VARIABLE(LampColor, Type = esd_argb32_t, Default = #ffffff, Private)
	esd_argb32_t LampColor;
	ESD_VARIABLE(lampEffect, Type = esd_argb32_t, Default = #f69616, Private)
	esd_argb32_t lampEffect;
	ESD_VARIABLE(On, Type = bool, Default = true, Private)
	bool On;
	ESD_SIGNAL(BackPushed)
	void(* BackPushed)(void *context);
	Ft_Esd_Layout_Fixed Fixed_Position;
	Ft_Esd_Image ESD_Image_7;
	Ft_Esd_Image ESD_Image_6;
	Ft_Esd_Image ESD_Image_5;
	Ft_Esd_Image ESD_Image_4;
	Ft_Esd_Image ESD_Image_3;
	Ft_Esd_Image ESD_Image_2;
	Ft_Esd_RangeSlider ESD_RangeSlider;
	Ft_Esd_Label ESD_Label;
	Ft_Esd_ImageButton ESD_Image_Button_2;
	Ft_Esd_ImageButton ESD_Image_Button;
	Ft_Esd_Rectangle ESD_Rectangle_Widget_4;
	Ft_Esd_Gradient ESD_Gradient_Widget;
} Usr_BedroomLightPage;

void Usr_BedroomLightPage__Initializer(Usr_BedroomLightPage *context);

ESD_SLOT(Update)
void Usr_BedroomLightPage_Update(Usr_BedroomLightPage *context);

ESD_SLOT(End)
void Usr_BedroomLightPage_End(Usr_BedroomLightPage *context);

ESD_SLOT(Start)
void Usr_BedroomLightPage_Start(Usr_BedroomLightPage *context);

ESD_SLOT(Right)
void Usr_BedroomLightPage_Right(Usr_BedroomLightPage *context);

ESD_SLOT(Left)
void Usr_BedroomLightPage_Left(Usr_BedroomLightPage *context);

#endif /* Usr_BedroomLightPage__H */

/* end of file */
