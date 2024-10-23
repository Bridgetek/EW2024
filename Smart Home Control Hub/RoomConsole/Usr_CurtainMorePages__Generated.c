/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_CurtainMorePages
C Source
*/

#include "Usr_CurtainMorePages.h"

#include "Esd_Context.h"
ESD_CORE_EXPORT void Esd_Noop(void *context);

static ft_uint8_t Usr_CurtainMorePages_ESD_Image_Button_MinAlpha__Property(void *context) { return 0; }
static Ft_Esd_BitmapCell Usr_CurtainMorePages_ESD_Image_Button_BitmapNormal__Property(void *context) { return return_circle_64_0(); }
static Ft_Esd_BitmapCell Usr_CurtainMorePages_ESD_Image_2_1_1_1_BitmapCell__Property(void *context) { return Curtain_adjust_0(); }
static Ft_Esd_BitmapCell Usr_CurtainMorePages_ESD_Image_2_2_BitmapCell__Property(void *context) { return Curtain_hand_pull_0(); }
static Ft_Esd_BitmapCell Usr_CurtainMorePages_ESD_Image_2_BitmapCell__Property(void *context) { return linkable_0(); }
static uint8_t Usr_CurtainMorePages_ESD_Label_1_1_Font__Property(void *context) { return 28; }
static const char * Usr_CurtainMorePages_ESD_Label_1_1_Text__Property(void *context) { return "Adjust manual"; }
static uint8_t Usr_CurtainMorePages_ESD_Label_1_2_Font__Property(void *context) { return 28; }
static const char * Usr_CurtainMorePages_ESD_Label_1_2_Text__Property(void *context) { return "Power failure pull"; }
static uint8_t Usr_CurtainMorePages_ESD_Label_1_Font__Property(void *context) { return 28; }
static const char * Usr_CurtainMorePages_ESD_Label_1_Text__Property(void *context) { return "Intelligent linkage"; }
static ft_int32_t Usr_CurtainMorePages_Rectangle_Light_2_Radius__Property(void *context) { return 10L; }
static ft_argb32_t Usr_CurtainMorePages_Rectangle_Light_2_Color__Property(void *context) { return 0x3ae8f1f9UL; }
static ft_int32_t Usr_CurtainMorePages_Rectangle_Light_1_Radius__Property(void *context) { return 10L; }
static ft_argb32_t Usr_CurtainMorePages_Rectangle_Light_1_Color__Property(void *context) { return 0x3ae8f1f9UL; }
static ft_int32_t Usr_CurtainMorePages_Rectangle_Light_Radius__Property(void *context) { return 10L; }
static ft_argb32_t Usr_CurtainMorePages_Rectangle_Light_Color__Property(void *context) { return 0x3ae8f1f9UL; }
static uint8_t Usr_CurtainMorePages_ESD_Label_Font__Property(void *context) { return 29; }
static const char * Usr_CurtainMorePages_ESD_Label_Text__Property(void *context) { return "Function selection"; }
static ft_uint16_t Usr_CurtainMorePages_ESD_Label_AlignX__Property(void *context) { return OPT_ALIGN_CENTER; }
static ft_int32_t Usr_CurtainMorePages_ESD_Rectangle_Widget_4_Radius__Property(void *context) { return 24L; }
static ft_argb32_t Usr_CurtainMorePages_ESD_Rectangle_Widget_4_Color__Property(void *context) { return 0x59000000UL; }

static Ft_Esd_WidgetSlots s_Usr_CurtainMorePages__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Widget_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Usr_CurtainMorePages_End,
};

static void Usr_CurtainMorePages_ESD_Image_Button_Pushed__Signal(void *context);

void Usr_CurtainMorePages__Fixed_Position__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Layout_Fixed *object = (Ft_Esd_Layout_Fixed *)&context->Fixed_Position;
	Ft_Esd_Layout_Fixed__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void Usr_CurtainMorePages__ESD_Image_Button__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_ImageButton *object = (Ft_Esd_ImageButton *)&context->ESD_Image_Button;
	Ft_Esd_ImageButton__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 206;
	object->Widget.LocalY = 369;
	object->Widget.LocalWidth = 64;
	object->Widget.LocalHeight = 64;
	object->MinAlpha = Usr_CurtainMorePages_ESD_Image_Button_MinAlpha__Property;
	object->BitmapNormal = Usr_CurtainMorePages_ESD_Image_Button_BitmapNormal__Property;
	object->Pushed = Usr_CurtainMorePages_ESD_Image_Button_Pushed__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__ESD_Image_2_1_1_1__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image_2_1_1_1;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 126;
	object->Widget.LocalY = 302;
	object->Widget.LocalWidth = 51;
	object->Widget.LocalHeight = 51;
	object->BitmapCell = Usr_CurtainMorePages_ESD_Image_2_1_1_1_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__ESD_Image_2_2__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image_2_2;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 126;
	object->Widget.LocalY = 218;
	object->Widget.LocalWidth = 51;
	object->Widget.LocalHeight = 51;
	object->BitmapCell = Usr_CurtainMorePages_ESD_Image_2_2_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__ESD_Image_2__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image_2;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 126;
	object->Widget.LocalY = 138;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	object->BitmapCell = Usr_CurtainMorePages_ESD_Image_2_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__ESD_Label_1_1__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Label *object = (Ft_Esd_Label *)&context->ESD_Label_1_1;
	Ft_Esd_Label__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 184;
	object->Widget.LocalY = 305;
	object->Widget.LocalWidth = 144;
	object->Widget.LocalHeight = 36;
	object->Font = Usr_CurtainMorePages_ESD_Label_1_1_Font__Property;
	object->Text = Usr_CurtainMorePages_ESD_Label_1_1_Text__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__ESD_Label_1_2__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Label *object = (Ft_Esd_Label *)&context->ESD_Label_1_2;
	Ft_Esd_Label__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 184;
	object->Widget.LocalY = 225;
	object->Widget.LocalWidth = 170;
	object->Widget.LocalHeight = 36;
	object->Font = Usr_CurtainMorePages_ESD_Label_1_2_Font__Property;
	object->Text = Usr_CurtainMorePages_ESD_Label_1_2_Text__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__ESD_Label_1__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Label *object = (Ft_Esd_Label *)&context->ESD_Label_1;
	Ft_Esd_Label__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 184;
	object->Widget.LocalY = 146;
	object->Widget.LocalWidth = 170;
	object->Widget.LocalHeight = 36;
	object->Font = Usr_CurtainMorePages_ESD_Label_1_Font__Property;
	object->Text = Usr_CurtainMorePages_ESD_Label_1_Text__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__Rectangle_Light_2__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->Rectangle_Light_2;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 106;
	object->Widget.LocalY = 291;
	object->Widget.LocalWidth = 268;
	object->Widget.LocalHeight = 54;
	object->Radius = Usr_CurtainMorePages_Rectangle_Light_2_Radius__Property;
	object->Color = Usr_CurtainMorePages_Rectangle_Light_2_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__Rectangle_Light_1__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->Rectangle_Light_1;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 106;
	object->Widget.LocalY = 212;
	object->Widget.LocalWidth = 268;
	object->Widget.LocalHeight = 54;
	object->Radius = Usr_CurtainMorePages_Rectangle_Light_1_Radius__Property;
	object->Color = Usr_CurtainMorePages_Rectangle_Light_1_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__Rectangle_Light__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->Rectangle_Light;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 106;
	object->Widget.LocalY = 132;
	object->Widget.LocalWidth = 268;
	object->Widget.LocalHeight = 54;
	object->Radius = Usr_CurtainMorePages_Rectangle_Light_Radius__Property;
	object->Color = Usr_CurtainMorePages_Rectangle_Light_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__ESD_Label__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Label *object = (Ft_Esd_Label *)&context->ESD_Label;
	Ft_Esd_Label__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 140;
	object->Widget.LocalY = 60;
	object->Widget.LocalWidth = 200;
	object->Widget.LocalHeight = 36;
	object->Font = Usr_CurtainMorePages_ESD_Label_Font__Property;
	object->Text = Usr_CurtainMorePages_ESD_Label_Text__Property;
	object->AlignX = Usr_CurtainMorePages_ESD_Label_AlignX__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__ESD_Rectangle_Widget_4__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->ESD_Rectangle_Widget_4;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 109;
	object->Widget.LocalY = 50;
	object->Widget.LocalWidth = 260;
	object->Widget.LocalHeight = 48;
	object->Radius = Usr_CurtainMorePages_ESD_Rectangle_Widget_4_Radius__Property;
	object->Color = Usr_CurtainMorePages_ESD_Rectangle_Widget_4_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_CurtainMorePages__Initializer(Usr_CurtainMorePages *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Usr_CurtainMorePages_CLASSID;
	context->Widget.Slots = &s_Usr_CurtainMorePages__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->BackPushed = Esd_Noop;
	Usr_CurtainMorePages__Fixed_Position__Initializer(context);
	Usr_CurtainMorePages__ESD_Image_Button__Initializer(context);
	Usr_CurtainMorePages__ESD_Image_2_1_1_1__Initializer(context);
	Usr_CurtainMorePages__ESD_Image_2_2__Initializer(context);
	Usr_CurtainMorePages__ESD_Image_2__Initializer(context);
	Usr_CurtainMorePages__ESD_Label_1_1__Initializer(context);
	Usr_CurtainMorePages__ESD_Label_1_2__Initializer(context);
	Usr_CurtainMorePages__ESD_Label_1__Initializer(context);
	Usr_CurtainMorePages__Rectangle_Light_2__Initializer(context);
	Usr_CurtainMorePages__Rectangle_Light_1__Initializer(context);
	Usr_CurtainMorePages__Rectangle_Light__Initializer(context);
	Usr_CurtainMorePages__ESD_Label__Initializer(context);
	Usr_CurtainMorePages__ESD_Rectangle_Widget_4__Initializer(context);
}

void Usr_CurtainMorePages_End(Usr_CurtainMorePages *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Fixed_Position); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_Button); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_2_1_1_1); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_2_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Label_1_1); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Label_1_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Label_1); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Rectangle_Light_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Rectangle_Light_1); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Rectangle_Light); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Label); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Rectangle_Widget_4); 
}

void Usr_CurtainMorePages_ESD_Image_Button_Pushed__Signal(void *c)
{
	Usr_CurtainMorePages *context = (Usr_CurtainMorePages *)c;
	void *owner = context->Owner;
	context->BackPushed(owner);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Usr_CurtainMorePages Instance;
} Usr_CurtainMorePages__ESD;


void *Usr_CurtainMorePages__Create__ESD()
{
	Usr_CurtainMorePages__ESD *context = (Usr_CurtainMorePages__ESD *)esd_malloc(sizeof(Usr_CurtainMorePages__ESD));
	if (context)
	{
		Usr_CurtainMorePages__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (Usr_CurtainMorePages__Create__ESD)");
	}
	return context;
}

void Usr_CurtainMorePages__Destroy__ESD(void *context)
{
	esd_free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */