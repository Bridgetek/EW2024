/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_FramePage
Header
*/

#ifndef Usr_FramePage__H
#define Usr_FramePage__H

#include "Esd_Base.h"
#include "Esd_Core.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Gradient.h"
#include "Ft_Esd_Layout_Fixed.h"
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

#define Usr_FramePage_CLASSID 0xAEFCB65F
ESD_SYMBOL(Usr_FramePage_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Usr_FramePage, Include = "Usr_FramePage.h", Callback, X = 0, Y = 0, Width = 400, Height = 300, Page)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	Ft_Esd_Layout_Fixed Fixed_Position;
	Ft_Esd_Gradient ESD_Gradient_Widget;
} Usr_FramePage;

void Usr_FramePage__Initializer(Usr_FramePage *context);

ESD_SLOT(End)
void Usr_FramePage_End(Usr_FramePage *context);

#endif /* Usr_FramePage__H */

/* end of file */