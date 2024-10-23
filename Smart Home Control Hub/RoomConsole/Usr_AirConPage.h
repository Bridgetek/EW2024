/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_AirConPage
Header
*/

#ifndef Usr_AirConPage__H
#define Usr_AirConPage__H

#include "Esd_Base.h"
#include "Esd_Core.h"
#include "Esd_FontInfo.h"
#include "Ft_Esd.h"
#include "Ft_Esd_BitmapInfo.h"
#include "Ft_Esd_Image.h"
#include "Ft_Esd_Label.h"
#include "Ft_Esd_Layout_Fixed.h"
#include "Ft_Esd_PushButton.h"
#include "Ft_Esd_Rectangle.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_Theme_LightBlue.h"
#include "Ft_Esd_TouchPanel.h"
#include "Ft_Esd_Widget.h"
#include "Usr_AirConWidget.h"
#include "fan_icon.h"
#include "heat_icon.h"
#include "humid_icon.h"
#include "snow_icon.h"

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

#define Usr_AirConPage_CLASSID 0xC9908EAF
ESD_SYMBOL(Usr_AirConPage_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Usr_AirConPage, Include = "Usr_AirConPage.h", Callback, X = 0, Y = 0, Width = 400, Height = 300, Page)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_SIGNAL(ButtonPushed)
	void(* ButtonPushed)(void *context);
	ESD_VARIABLE(SubPage, Type = int, Private)
	int SubPage;
	Ft_Esd_Layout_Fixed Fixed_Position;
	Ft_Esd_TouchPanel ESD_Touch_Panel_3;
	Ft_Esd_TouchPanel ESD_Touch_Panel_2;
	Ft_Esd_TouchPanel ESD_Touch_Panel_1;
	Ft_Esd_TouchPanel ESD_Touch_Panel;
	Ft_Esd_Image ESD_Image_1_1_1;
	Ft_Esd_Image ESD_Image_1_1;
	Ft_Esd_Image ESD_Image_1;
	Ft_Esd_Image ESD_Image;
	Ft_Esd_Label ESD_Label_2_1_1_1;
	Ft_Esd_Label ESD_Label_2_1_1;
	Ft_Esd_Label ESD_Label_2_1;
	Ft_Esd_Label ESD_Label_2;
	Ft_Esd_PushButton Humid_Button;
	Ft_Esd_PushButton Fan_Button;
	Ft_Esd_PushButton Heat_Button;
	Ft_Esd_PushButton Cool_Button;
	Usr_AirConWidget Usr_AirConWidget;
	Ft_Esd_Label ESD_Label;
	Ft_Esd_Rectangle ESD_Rectangle_Widget_4;
} Usr_AirConPage;

void Usr_AirConPage__Initializer(Usr_AirConPage *context);

ESD_SLOT(End)
void Usr_AirConPage_End(Usr_AirConPage *context);

ESD_OUTPUT(CurrentPage, Type = int)
int Usr_AirConPage_CurrentPage(Usr_AirConPage *context);

#endif /* Usr_AirConPage__H */

/* end of file */