/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_Heat_Page
C Source
*/

#include "Usr_Heat_Page.h"

#include "Esd_Context.h"
#include "Usr_GlobalVariables.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);

static ft_argb32_t Usr_Heat_Page_ESD_Touch_Panel_1_Color__Property(void *context) { return 0x181818UL; }
static int Usr_Heat_Page_ESD_Touch_Panel_1_Radius__Property(void *context) { return 30L; }
static ft_bool_t Usr_Heat_Page_ESD_Touch_Panel_1_ShowBorder__Property(void *context) { return 0; }
static ft_argb32_t Usr_Heat_Page_ESD_Touch_Panel_Color__Property(void *context) { return 0x181818UL; }
static int Usr_Heat_Page_ESD_Touch_Panel_Radius__Property(void *context) { return 30L; }
static ft_bool_t Usr_Heat_Page_ESD_Touch_Panel_ShowBorder__Property(void *context) { return 0; }
static int Usr_Heat_Page_ESD_Line_Widget_2_linewidth__Property(void *context) { return 7L; }
static ft_argb32_t Usr_Heat_Page_ESD_Line_Widget_2_color__Property(void *context) { return 0xffffffffUL; }
static int Usr_Heat_Page_ESD_Line_Widget_1_linewidth__Property(void *context) { return 7L; }
static ft_argb32_t Usr_Heat_Page_ESD_Line_Widget_1_color__Property(void *context) { return 0xffffffffUL; }
static int Usr_Heat_Page_ESD_Line_Widget_linewidth__Property(void *context) { return 7L; }
static ft_argb32_t Usr_Heat_Page_ESD_Line_Widget_color__Property(void *context) { return 0xffffffffUL; }
static ft_uint8_t Usr_Heat_Page_ESD_Image_Button_MinAlpha__Property(void *context) { return 0; }
static Ft_Esd_BitmapCell Usr_Heat_Page_ESD_Image_Button_BitmapNormal__Property(void *context) { return return_circle_64_0(); }
static Ft_Esd_BitmapCell Usr_Heat_Page_ESD_Image_2_BitmapCell__Property(void *context) { return heat_icon_0(); }
static int Usr_Heat_Page_Usr_CircullarSlider_RingWidth__Property(void *context) { return 1L; }
static int Usr_Heat_Page_Usr_CircullarSlider_InnerBorder__Property(void *context) { return 0L; }
static int Usr_Heat_Page_Usr_CircullarSlider_OuterBorder__Property(void *context) { return 0L; }
static ft_argb32_t Usr_Heat_Page_Usr_CircullarSlider_BorderColor__Property(void *context) { return 0xff171916UL; }
static ft_argb32_t Usr_Heat_Page_Usr_CircullarSlider_SelectionColor__Property(void *context) { return 0xff171916UL; }
static ft_argb32_t Usr_Heat_Page_Usr_CircullarSlider_BackgroundColor__Property(void *context) { return 0xff171916UL; }
static ft_argb32_t Usr_Heat_Page_Usr_CircullarSlider_ValueColor__Property(void *context) { return 0xff171916UL; }
static uint8_t Usr_Heat_Page_Usr_Vertical_ScrollText_Font__Property(void *context) { return 31; }
static ft_argb32_t Usr_Heat_Page_ESD_Rectangle_Widget_Color__Property(void *context) { return 0xff171916UL; }

static Ft_Esd_WidgetSlots s_Usr_Heat_Page__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Usr_Heat_Page_Update,
	(void(*)(void *))Ft_Esd_Widget_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Usr_Heat_Page_End,
};

static void Usr_Heat_Page_ESD_Touch_Panel_1_Up__Signal(void *context);
static void Usr_Heat_Page_ESD_Touch_Panel_1_Down__Signal(void *context);
static void Usr_Heat_Page_ESD_Touch_Panel_1_Tap__Signal(void *context);
static void Usr_Heat_Page_ESD_Touch_Panel_Up__Signal(void *context);
static void Usr_Heat_Page_ESD_Touch_Panel_Down__Signal(void *context);
static void Usr_Heat_Page_ESD_Touch_Panel_Tap__Signal(void *context);
static void Usr_Heat_Page_ESD_Image_Button_Pushed__Signal(void *context);
static void Usr_Heat_Page_Usr_CircullarSlider_Up__Signal(void *context);
static void Usr_Heat_Page_Usr_CircullarSlider_ValueChanged__Signal(void *context);

void Usr_Heat_Page__Fixed_Position__Initializer(Usr_Heat_Page *context)
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

void Usr_Heat_Page__ESD_Touch_Panel_1__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_TouchPanel *object = (Ft_Esd_TouchPanel *)&context->ESD_Touch_Panel_1;
	Ft_Esd_TouchPanel__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 310;
	object->Widget.LocalY = 308;
	object->Widget.LocalWidth = 60;
	object->Widget.LocalHeight = 60;
	object->Color = Usr_Heat_Page_ESD_Touch_Panel_1_Color__Property;
	object->Radius = Usr_Heat_Page_ESD_Touch_Panel_1_Radius__Property;
	object->ShowBorder = Usr_Heat_Page_ESD_Touch_Panel_1_ShowBorder__Property;
	object->Up = Usr_Heat_Page_ESD_Touch_Panel_1_Up__Signal;
	object->Down = Usr_Heat_Page_ESD_Touch_Panel_1_Down__Signal;
	object->Tap = Usr_Heat_Page_ESD_Touch_Panel_1_Tap__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__ESD_Touch_Panel__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_TouchPanel *object = (Ft_Esd_TouchPanel *)&context->ESD_Touch_Panel;
	Ft_Esd_TouchPanel__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 115;
	object->Widget.LocalY = 308;
	object->Widget.LocalWidth = 60;
	object->Widget.LocalHeight = 60;
	object->Color = Usr_Heat_Page_ESD_Touch_Panel_Color__Property;
	object->Radius = Usr_Heat_Page_ESD_Touch_Panel_Radius__Property;
	object->ShowBorder = Usr_Heat_Page_ESD_Touch_Panel_ShowBorder__Property;
	object->Up = Usr_Heat_Page_ESD_Touch_Panel_Up__Signal;
	object->Down = Usr_Heat_Page_ESD_Touch_Panel_Down__Signal;
	object->Tap = Usr_Heat_Page_ESD_Touch_Panel_Tap__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__ESD_Line_Widget_2__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_Line *object = (Ft_Esd_Line *)&context->ESD_Line_Widget_2;
	Ft_Esd_Line__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 340;
	object->Widget.LocalY = 323;
	object->Widget.LocalWidth = 0;
	object->Widget.LocalHeight = 28;
	object->linewidth = Usr_Heat_Page_ESD_Line_Widget_2_linewidth__Property;
	object->color = Usr_Heat_Page_ESD_Line_Widget_2_color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__ESD_Line_Widget_1__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_Line *object = (Ft_Esd_Line *)&context->ESD_Line_Widget_1;
	Ft_Esd_Line__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 326;
	object->Widget.LocalY = 337;
	object->Widget.LocalWidth = 28;
	object->Widget.LocalHeight = 0;
	object->linewidth = Usr_Heat_Page_ESD_Line_Widget_1_linewidth__Property;
	object->color = Usr_Heat_Page_ESD_Line_Widget_1_color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__ESD_Line_Widget__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_Line *object = (Ft_Esd_Line *)&context->ESD_Line_Widget;
	Ft_Esd_Line__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 130;
	object->Widget.LocalY = 338;
	object->Widget.LocalWidth = 28;
	object->Widget.LocalHeight = 0;
	object->linewidth = Usr_Heat_Page_ESD_Line_Widget_linewidth__Property;
	object->color = Usr_Heat_Page_ESD_Line_Widget_color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__ESD_Image_Button__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_ImageButton *object = (Ft_Esd_ImageButton *)&context->ESD_Image_Button;
	Ft_Esd_ImageButton__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 210;
	object->Widget.LocalY = 308;
	object->Widget.LocalWidth = 60;
	object->Widget.LocalHeight = 60;
	object->MinAlpha = Usr_Heat_Page_ESD_Image_Button_MinAlpha__Property;
	object->BitmapNormal = Usr_Heat_Page_ESD_Image_Button_BitmapNormal__Property;
	object->Scaling = ESD_SCALING_FIT;
	object->Pushed = Usr_Heat_Page_ESD_Image_Button_Pushed__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__ESD_Image_2__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image_2;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 218;
	object->Widget.LocalY = 158;
	object->Widget.LocalWidth = 100;
	object->Widget.LocalHeight = 100;
	object->Color = 0xffff5500UL;
	object->BitmapCell = Usr_Heat_Page_ESD_Image_2_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__ESD_Circle__1__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_Circle *object = (Ft_Esd_Circle *)&context->ESD_Circle__1;
	Ft_Esd_Circle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 115;
	object->Widget.LocalY = 308;
	object->Widget.LocalWidth = 60;
	object->Widget.LocalHeight = 60;
	object->Color = 0xff81a8e3UL;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__ESD_Circle___Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_Circle *object = (Ft_Esd_Circle *)&context->ESD_Circle_;
	Ft_Esd_Circle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 310;
	object->Widget.LocalY = 308;
	object->Widget.LocalWidth = 60;
	object->Widget.LocalHeight = 60;
	object->Color = 0xfffd644fUL;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__Usr_CircullarSlider__Initializer(Usr_Heat_Page *context)
{
	Usr_CircullarSlider *object = (Usr_CircullarSlider *)&context->Usr_CircullarSlider;
	Usr_CircullarSlider__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = -1;
	object->Widget.LocalY = -1;
	object->Widget.LocalWidth = 482;
	object->Widget.LocalHeight = 482;
	object->RingWidth = Usr_Heat_Page_Usr_CircullarSlider_RingWidth__Property;
	object->InnerBorder = Usr_Heat_Page_Usr_CircullarSlider_InnerBorder__Property;
	object->OuterBorder = Usr_Heat_Page_Usr_CircullarSlider_OuterBorder__Property;
	object->BorderColor = Usr_Heat_Page_Usr_CircullarSlider_BorderColor__Property;
	object->SelectionColor = Usr_Heat_Page_Usr_CircullarSlider_SelectionColor__Property;
	object->BackgroundColor = Usr_Heat_Page_Usr_CircullarSlider_BackgroundColor__Property;
	object->ValueColor = Usr_Heat_Page_Usr_CircullarSlider_ValueColor__Property;
	object->Value = 15;
	object->UnitCircle = 30;
	object->MaxValue = 30;
	object->Up = Usr_Heat_Page_Usr_CircullarSlider_Up__Signal;
	object->ValueChanged = Usr_Heat_Page_Usr_CircullarSlider_ValueChanged__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__Usr_Vertical_ScrollText__Initializer(Usr_Heat_Page *context)
{
	Usr_Vertical_ScrollText *object = (Usr_Vertical_ScrollText *)&context->Usr_Vertical_ScrollText;
	Usr_Vertical_ScrollText__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 161;
	object->Widget.LocalY = 230;
	object->Widget.LocalWidth = 148;
	object->Widget.LocalHeight = 300;
	object->Font = Usr_Heat_Page_Usr_Vertical_ScrollText_Font__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__Circle_Temprature__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_CircleLine *object = (Ft_Esd_CircleLine *)&context->Circle_Temprature;
	Ft_Esd_CircleLine__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 268;
	object->Widget.LocalY = 232;
	object->Widget.LocalWidth = 10;
	object->Widget.LocalHeight = 10;
	object->Border = 3L;
	object->Color = 0xffffffffUL;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__ESD_Gradient_ArcLine__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_Gradient_Arc_Line *object = (Ft_Esd_Gradient_Arc_Line *)&context->ESD_Gradient_ArcLine;
	Ft_Esd_Gradient_Arc_Line__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 99;
	object->Widget.LocalY = 96;
	object->Widget.LocalWidth = 284;
	object->Widget.LocalHeight = 284;
	object->Border = 25L;
	object->Start_Color = 0xff91bdffUL;
	object->End_Color = 0xfffd644fUL;
	object->Origin = 186L;
	object->Angle = 168L;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__ESD_Rectangle_Widget__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->ESD_Rectangle_Widget;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 480;
	object->Widget.LocalHeight = 480;
	object->Color = Usr_Heat_Page_ESD_Rectangle_Widget_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_Heat_Page__Initializer(Usr_Heat_Page *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Usr_Heat_Page_CLASSID;
	context->Widget.Slots = &s_Usr_Heat_Page__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->Local_Method__Value = 0;
	context->NewValue = 0L;
	context->BackPushed = Esd_Noop;
	context->PlusAlpha = 255L;
	context->MinusAlpha = 255L;
	Usr_Heat_Page__Fixed_Position__Initializer(context);
	Usr_Heat_Page__ESD_Touch_Panel_1__Initializer(context);
	Usr_Heat_Page__ESD_Touch_Panel__Initializer(context);
	Usr_Heat_Page__ESD_Line_Widget_2__Initializer(context);
	Usr_Heat_Page__ESD_Line_Widget_1__Initializer(context);
	Usr_Heat_Page__ESD_Line_Widget__Initializer(context);
	Usr_Heat_Page__ESD_Image_Button__Initializer(context);
	Usr_Heat_Page__ESD_Image_2__Initializer(context);
	Usr_Heat_Page__ESD_Circle__1__Initializer(context);
	Usr_Heat_Page__ESD_Circle___Initializer(context);
	Usr_Heat_Page__Usr_CircullarSlider__Initializer(context);
	Usr_Heat_Page__Usr_Vertical_ScrollText__Initializer(context);
	Usr_Heat_Page__Circle_Temprature__Initializer(context);
	Usr_Heat_Page__ESD_Gradient_ArcLine__Initializer(context);
	Usr_Heat_Page__ESD_Rectangle_Widget__Initializer(context);
}

extern int g_HeatValue;


static int Usr_Heat_Page_Local_Method(Usr_Heat_Page *context, int value);
static void Usr_Heat_Page_Local_Method__Internal(Usr_Heat_Page *context);

void Usr_Heat_Page_Update(Usr_Heat_Page *context)
{
	void *owner = context->Owner;
	esd_rgb32_t rgb = 0x81a8e3UL;
	int a = context->MinusAlpha;
	esd_argb32_t update_variable = ESD_COMPOSE_RGB_ALPHA(rgb, a);
	context->ESD_Circle__1.Color = update_variable;
	esd_rgb32_t rgb_1 = 0xfd644fUL;
	int a_1 = context->PlusAlpha;
	esd_argb32_t update_variable_1 = ESD_COMPOSE_RGB_ALPHA(rgb_1, a_1);
	context->ESD_Circle_.Color = update_variable_1;
	int update_variable_2 = g_HeatValue;
	context->Usr_Vertical_ScrollText.Value = update_variable_2;
	int update_variable_3 = g_HeatValue;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->Circle_Temprature, update_variable_3);
	int update_variable_4 = g_HeatValue;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->ESD_Gradient_ArcLine, update_variable_4);
	int left_1 = g_HeatValue;
	int right = 168L;
	int left = left_1 * right;
	int right_1 = 30L;
	int update_variable_5 = left / right_1;
	context->ESD_Gradient_ArcLine.Angle = update_variable_5;
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context);
}

void Usr_Heat_Page_End(Usr_Heat_Page *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Fixed_Position); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Touch_Panel_1); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Touch_Panel); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Line_Widget_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Line_Widget_1); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Line_Widget); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_Button); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Circle__1); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Circle_); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Usr_CircullarSlider); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Usr_Vertical_ScrollText); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Circle_Temprature); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Gradient_ArcLine); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Rectangle_Widget); 
}

static int Usr_Heat_Page_Local_Method(Usr_Heat_Page *context, int value)
{
	void *owner = context->Owner;
	if(value < 0) return 0;
	else if (value > 30) return 30;
	else return value;
}

static void Usr_Heat_Page_Local_Method__Internal(Usr_Heat_Page *context)
{
	void *owner = context->Owner;
	int value = context->NewValue;
	context->Local_Method__Value = Usr_Heat_Page_Local_Method(context, value);
}

void Usr_Heat_Page_Right(Usr_Heat_Page *context)
{
	void *owner = context->Owner;
	int left_2 = g_HeatValue;
	int right_2 = 1L;
	int set_variable_2_1 = left_2 + right_2;
	context->NewValue = set_variable_2_1;
	Usr_Heat_Page_Local_Method__Internal(context);
	int set_variable = context->Local_Method__Value;
	g_HeatValue = set_variable;
}

void Usr_Heat_Page_Left(Usr_Heat_Page *context)
{
	void *owner = context->Owner;
	int left_3 = g_HeatValue;
	int right_3 = 1L;
	int set_variable_3_1 = left_3 - right_3;
	context->NewValue = set_variable_3_1;
	Usr_Heat_Page_Local_Method__Internal(context);
	int set_variable_1 = context->Local_Method__Value;
	g_HeatValue = set_variable_1;
}

void Usr_Heat_Page_ESD_Touch_Panel_1_Up__Signal(void *c)
{
	Usr_Heat_Page *context = (Usr_Heat_Page *)c;
	void *owner = context->Owner;
	int set_variable_6_1_1 = 255L;
	context->PlusAlpha = set_variable_6_1_1;
}

void Usr_Heat_Page_ESD_Touch_Panel_1_Down__Signal(void *c)
{
	Usr_Heat_Page *context = (Usr_Heat_Page *)c;
	void *owner = context->Owner;
	int set_variable_6_2 = 160L;
	context->PlusAlpha = set_variable_6_2;
}

void Usr_Heat_Page_ESD_Touch_Panel_1_Tap__Signal(void *c)
{
	Usr_Heat_Page *context = (Usr_Heat_Page *)c;
	void *owner = context->Owner;
	int left_4 = g_HeatValue;
	int right_4 = 1L;
	int set_variable_2_1_1 = left_4 + right_4;
	context->NewValue = set_variable_2_1_1;
	Usr_Heat_Page_Local_Method__Internal(context);
	int set_variable_2 = context->Local_Method__Value;
	g_HeatValue = set_variable_2;
}

void Usr_Heat_Page_ESD_Touch_Panel_Up__Signal(void *c)
{
	Usr_Heat_Page *context = (Usr_Heat_Page *)c;
	void *owner = context->Owner;
	int set_variable_6_1 = 255L;
	context->MinusAlpha = set_variable_6_1;
}

void Usr_Heat_Page_ESD_Touch_Panel_Down__Signal(void *c)
{
	Usr_Heat_Page *context = (Usr_Heat_Page *)c;
	void *owner = context->Owner;
	int set_variable_6 = 160L;
	context->MinusAlpha = set_variable_6;
}

void Usr_Heat_Page_ESD_Touch_Panel_Tap__Signal(void *c)
{
	Usr_Heat_Page *context = (Usr_Heat_Page *)c;
	void *owner = context->Owner;
	int left_5 = g_HeatValue;
	int right_5 = 1L;
	int set_variable_3_1_1 = left_5 - right_5;
	context->NewValue = set_variable_3_1_1;
	Usr_Heat_Page_Local_Method__Internal(context);
	int set_variable_3 = context->Local_Method__Value;
	g_HeatValue = set_variable_3;
}

void Usr_Heat_Page_ESD_Image_Button_Pushed__Signal(void *c)
{
	Usr_Heat_Page *context = (Usr_Heat_Page *)c;
	void *owner = context->Owner;
	context->BackPushed(owner);
}

void Usr_Heat_Page_Usr_CircullarSlider_Up__Signal(void *c)
{
	Usr_Heat_Page *context = (Usr_Heat_Page *)c;
	void *owner = context->Owner;
	int set_variable_4 = 15L;
	context->Usr_CircullarSlider.Value = (int)set_variable_4;
}

void Usr_Heat_Page_Usr_CircullarSlider_ValueChanged__Signal(void *c)
{
	Usr_Heat_Page *context = (Usr_Heat_Page *)c;
	void *owner = context->Owner;
	int left_6 = g_HeatValue;
	int right_6 = Usr_CircullarSlider_DeltaValue(&context->Usr_CircullarSlider);
	int set_variable_5 = left_6 + right_6;
	context->NewValue = set_variable_5;
	Usr_Heat_Page_Local_Method__Internal(context);
	int set_variable_7 = context->Local_Method__Value;
	g_HeatValue = set_variable_7;
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Usr_Heat_Page Instance;
} Usr_Heat_Page__ESD;


void *Usr_Heat_Page__Create__ESD()
{
	Usr_Heat_Page__ESD *context = (Usr_Heat_Page__ESD *)esd_malloc(sizeof(Usr_Heat_Page__ESD));
	if (context)
	{
		Usr_Heat_Page__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (Usr_Heat_Page__Create__ESD)");
	}
	return context;
}

void Usr_Heat_Page__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Usr_Heat_Page__Set_NewValue__ESD(void *context, int value) { ((Usr_Heat_Page__ESD *)context)->Instance.NewValue = value; }
void Usr_Heat_Page__Set_PlusAlpha__ESD(void *context, int value) { ((Usr_Heat_Page__ESD *)context)->Instance.PlusAlpha = value; }
void Usr_Heat_Page__Set_MinusAlpha__ESD(void *context, int value) { ((Usr_Heat_Page__ESD *)context)->Instance.MinusAlpha = value; }

#endif /* ESD_SIMULATION */

/* end of file */
