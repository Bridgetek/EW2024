/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_LightWidget
Header
*/

#ifndef Usr_LightWidget__H
#define Usr_LightWidget__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Math.h"
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

#define Usr_LightWidget_CLASSID 0xE7B274DC
ESD_SYMBOL(Usr_LightWidget_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Usr_LightWidget, Include = "Usr_LightWidget.h", Callback, X = 0, Y = 0, Width = 400, Height = 300)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
} Usr_LightWidget;

void Usr_LightWidget__Initializer(Usr_LightWidget *context);

ESD_SLOT(Start)
void Usr_LightWidget_Start(Usr_LightWidget *context);

ESD_SLOT(Update)
void Usr_LightWidget_Update(Usr_LightWidget *context);

ESD_SLOT(Render)
void Usr_LightWidget_Render(Usr_LightWidget *context);

ESD_SLOT(Idle)
void Usr_LightWidget_Idle(Usr_LightWidget *context);

ESD_SLOT(End)
void Usr_LightWidget_End(Usr_LightWidget *context);

#endif /* Usr_LightWidget__H */

/* end of file */