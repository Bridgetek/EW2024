/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_ScrollPanel
C Source
*/

/*
Comment :
Introduction:
This widget draws a panel.
It supports scrolling with both vertical and horizontal scroll bar.
*/

#include "Ft_Esd_ScrollPanel.h"

#include "Esd_Context.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
ft_bool_t Ft_Esd_ScrollPanel_ShowPanel__Default(void *context) { return 1; }
ft_bool_t Ft_Esd_ScrollPanel_Active_Scroll__Default(void *context) { return 0; }
ft_bool_t Ft_Esd_ScrollPanel_RaiseBorder__Default(void *context) { return 1; }
Ft_Esd_Theme * Ft_Esd_ScrollPanel_Theme__Default(void *context) { return Ft_Esd_Theme_GetCurrent(); }
int Ft_Esd_ScrollPanel_Radius__Default(void *context) { return 4L; }
void Ft_Esd_ScrollPanel_ScrollXChanged__Noop(void *context, ft_int16_t value) { }
void Ft_Esd_ScrollPanel_ScrollYChanged__Noop(void *context, ft_int16_t value) { }

static ft_argb32_t Ft_Esd_ScrollPanel_TouchPanel_Color__Property(void *context);
static int Ft_Esd_ScrollPanel_TouchPanel_Radius__Property(void *context);
static ft_bool_t Ft_Esd_ScrollPanel_TouchPanel_Raised__Property(void *context);
static ft_bool_t Ft_Esd_ScrollPanel_TouchPanel_ShowBorder__Property(void *context);
static ft_bool_t Ft_Esd_ScrollPanel_TouchPanel_IncludeDefaultTag__Property(void *context);
static Ft_Esd_Theme * Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Theme__Property(void *context);
static ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Size__Property(void *context);
static ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Max__Property(void *context);
static ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Min__Property(void *context);
static Ft_Esd_Theme * Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Theme__Property(void *context);
static ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Size__Property(void *context);
static ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Max__Property(void *context);
static ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Min__Property(void *context);

static Ft_Esd_WidgetSlots s_Ft_Esd_ScrollPanel__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_ScrollPanel_Update,
	(void(*)(void *))Ft_Esd_Widget_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_ScrollPanel_End,
};

static void Ft_Esd_ScrollPanel_Scroll_Layout_ScrollXChanged__Writer(void *context, ft_int16_t value);
static void Ft_Esd_ScrollPanel_Scroll_Layout_ScrollYChanged__Writer(void *context, ft_int16_t value);
static void Ft_Esd_ScrollPanel_TouchPanel_Up__Signal(void *context);
static void Ft_Esd_ScrollPanel_TouchPanel_Down__Signal(void *context);
static void Ft_Esd_ScrollPanel_TouchPanel_Tap__Signal(void *context);
static void Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Changed__Writer(void *context, int value);
static void Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Changed__Writer(void *context, int value);

Ft_Esd_Widget *Ft_Esd_ScrollPanel_Widget_Interface__Container(void *context);

void Ft_Esd_ScrollPanel__Linear_Layout__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_Layout_Linear *object = (Ft_Esd_Layout_Linear *)&context->Linear_Layout;
	Ft_Esd_Layout_Linear__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 76;
	object->Widget.LocalY = 68;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	object->Margin = 4;
	object->Orientation = ESD_ORIENTATION_HORIZONTAL;
	object->Align = ESD_ALIGN_FILLLEFT;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void Ft_Esd_ScrollPanel__Stretch__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_Layout_Stretch *object = (Ft_Esd_Layout_Stretch *)&context->Stretch;
	Ft_Esd_Layout_Stretch__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 89;
	object->Widget.LocalY = 54;
	object->Widget.LocalWidth = 12;
	object->Widget.LocalHeight = 53;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Linear_Layout);
}

void Ft_Esd_ScrollPanel__Linear_Layout_2__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_Layout_Linear *object = (Ft_Esd_Layout_Linear *)&context->Linear_Layout_2;
	Ft_Esd_Layout_Linear__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 86;
	object->Widget.LocalY = 54;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	object->ChildClipping = 0;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Stretch);
}

void Ft_Esd_ScrollPanel__Stretch_3__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_Layout_Stretch *object = (Ft_Esd_Layout_Stretch *)&context->Stretch_3;
	Ft_Esd_Layout_Stretch__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 147;
	object->Widget.LocalY = 52;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Linear_Layout_2);
}

void Ft_Esd_ScrollPanel__Scroll_Layout__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_Layout_Scroll *object = (Ft_Esd_Layout_Scroll *)&context->Scroll_Layout;
	Ft_Esd_Layout_Scroll__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 70;
	object->Widget.LocalY = 56;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	object->Align = ESD_ALIGN_TOPLEFT;
	object->Scissor = 1;
	object->ScrollXChanged = Ft_Esd_ScrollPanel_Scroll_Layout_ScrollXChanged__Writer;
	object->ScrollYChanged = Ft_Esd_ScrollPanel_Scroll_Layout_ScrollYChanged__Writer;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Stretch_3);
}

void Ft_Esd_ScrollPanel__TouchPanel__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_TouchPanel *object = (Ft_Esd_TouchPanel *)&context->TouchPanel;
	Ft_Esd_TouchPanel__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 82;
	object->Widget.LocalY = 44;
	object->Widget.LocalWidth = 259;
	object->Widget.LocalHeight = 284;
	object->Color = Ft_Esd_ScrollPanel_TouchPanel_Color__Property;
	object->Radius = Ft_Esd_ScrollPanel_TouchPanel_Radius__Property;
	object->Raised = Ft_Esd_ScrollPanel_TouchPanel_Raised__Property;
	object->ShowBorder = Ft_Esd_ScrollPanel_TouchPanel_ShowBorder__Property;
	object->IncludeDefaultTag = Ft_Esd_ScrollPanel_TouchPanel_IncludeDefaultTag__Property;
	object->Up = Ft_Esd_ScrollPanel_TouchPanel_Up__Signal;
	object->Down = Ft_Esd_ScrollPanel_TouchPanel_Down__Signal;
	object->Tap = Ft_Esd_ScrollPanel_TouchPanel_Tap__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Stretch_3);
}

void Ft_Esd_ScrollPanel__ESD_Scroll_Bar_2__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_ScrollBar *object = (Ft_Esd_ScrollBar *)&context->ESD_Scroll_Bar_2;
	Ft_Esd_ScrollBar__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 143;
	object->Widget.LocalY = 75;
	object->Widget.LocalWidth = 180;
	object->Widget.LocalHeight = 24;
	object->Theme = Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Theme__Property;
	object->Size = Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Size__Property;
	object->Max = Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Max__Property;
	object->Min = Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Min__Property;
	object->Changed = Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Changed__Writer;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Linear_Layout_2);
}

void Ft_Esd_ScrollPanel__Linear_Layout_3__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_Layout_Linear *object = (Ft_Esd_Layout_Linear *)&context->Linear_Layout_3;
	Ft_Esd_Layout_Linear__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 179;
	object->Widget.LocalY = 56;
	object->Widget.LocalWidth = 24;
	object->Widget.LocalHeight = 50;
	object->ChildClipping = 0;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Linear_Layout);
}

void Ft_Esd_ScrollPanel__Stretch_2__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_Layout_Stretch *object = (Ft_Esd_Layout_Stretch *)&context->Stretch_2;
	Ft_Esd_Layout_Stretch__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 6;
	object->Widget.LocalY = 73;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Linear_Layout_3);
}

void Ft_Esd_ScrollPanel__ESD_Scroll_Bar__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_ScrollBar *object = (Ft_Esd_ScrollBar *)&context->ESD_Scroll_Bar;
	Ft_Esd_ScrollBar__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 364;
	object->Widget.LocalY = 63;
	object->Widget.LocalWidth = 24;
	object->Widget.LocalHeight = 24;
	object->Theme = Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Theme__Property;
	object->Size = Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Size__Property;
	object->Max = Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Max__Property;
	object->Min = Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Min__Property;
	object->Changed = Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Changed__Writer;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Stretch_2);
}

void Ft_Esd_ScrollPanel__Fill_Layout__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_Layout_Fill *object = (Ft_Esd_Layout_Fill *)&context->Fill_Layout;
	Ft_Esd_Layout_Fill__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 11;
	object->Widget.LocalY = 8;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 24;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Linear_Layout_3);
}

void Ft_Esd_ScrollPanel__Initializer(Ft_Esd_ScrollPanel *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_ScrollPanel_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_ScrollPanel__Slots;
	context->Widget.LocalX = 15;
	context->Widget.LocalY = 20;
	context->Widget.LocalWidth = 359;
	context->Widget.LocalHeight = 391;
	context->Up = Esd_Noop;
	context->Down = Esd_Noop;
	context->Tap = Esd_Noop;
	context->Touching = 0;
	context->Inside = 0;
	context->ShowPanel = Ft_Esd_ScrollPanel_ShowPanel__Default;
	context->Active_Scroll = Ft_Esd_ScrollPanel_Active_Scroll__Default;
	context->TouchX = 0L;
	context->RaiseBorder = Ft_Esd_ScrollPanel_RaiseBorder__Default;
	context->TouchY = 0L;
	context->Theme = Ft_Esd_ScrollPanel_Theme__Default;
	context->ScrollX = 0;
	context->ScrollY = 0;
	context->Align = ESD_ALIGN_TOPFILL;
	context->PreviousTouchX = 0;
	context->ScrollBars = ESD_VISIBLE_NEVER;
	context->PreviousScrollX = 0;
	context->TouchScroll = 1;
	context->PreviousTouchY = 0;
	context->Radius = Ft_Esd_ScrollPanel_Radius__Default;
	context->PreviousScrollY = 0;
	context->ScrollBarSize = 24;
	context->ScrollXChanged = Ft_Esd_ScrollPanel_ScrollXChanged__Noop;
	context->ScrollYChanged = Ft_Esd_ScrollPanel_ScrollYChanged__Noop;
	Ft_Esd_ScrollPanel__Linear_Layout__Initializer(context);
	Ft_Esd_ScrollPanel__Stretch__Initializer(context);
	Ft_Esd_ScrollPanel__Linear_Layout_2__Initializer(context);
	Ft_Esd_ScrollPanel__Stretch_3__Initializer(context);
	Ft_Esd_ScrollPanel__Scroll_Layout__Initializer(context);
	Ft_Esd_ScrollPanel__TouchPanel__Initializer(context);
	Ft_Esd_ScrollPanel__ESD_Scroll_Bar_2__Initializer(context);
	Ft_Esd_ScrollPanel__Linear_Layout_3__Initializer(context);
	Ft_Esd_ScrollPanel__Stretch_2__Initializer(context);
	Ft_Esd_ScrollPanel__ESD_Scroll_Bar__Initializer(context);
	Ft_Esd_ScrollPanel__Fill_Layout__Initializer(context);
	context->Widget.Container = Ft_Esd_ScrollPanel_Widget_Interface__Container(context);
}

void Ft_Esd_ScrollPanel_Update_Scroll(Ft_Esd_ScrollPanel *context);

void Ft_Esd_ScrollPanel_Update__Builtin(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	ft_bool_t update_variable = Ft_Esd_TouchPanel_Touching(&context->TouchPanel);
	context->Touching = update_variable;
	ft_bool_t update_variable_1 = Ft_Esd_TouchPanel_Inside(&context->TouchPanel);
	context->Inside = update_variable_1;
	int update_variable_2 = Ft_Esd_TouchPanel_TouchX(&context->TouchPanel);
	context->TouchX = update_variable_2;
	int update_variable_3 = Ft_Esd_TouchPanel_TouchY(&context->TouchPanel);
	context->TouchY = update_variable_3;
	ft_int16_t update_variable_4 = context->ScrollX;
	context->Scroll_Layout.ScrollX = update_variable_4;
	ft_int16_t update_variable_5 = context->ScrollY;
	context->Scroll_Layout.ScrollY = update_variable_5;
	uint8_t update_variable_6 = context->Align;
	context->Scroll_Layout.Align = update_variable_6;
	ft_bool_t update_variable_7 = context->TouchScroll;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->TouchPanel, update_variable_7);
	ft_uint16_t left_1 = Ft_Esd_Layout_Scroll_RangeX(&context->Scroll_Layout);
	ft_uint8_t left_2 = context->ScrollBars;
	ft_uint8_t right_1 = ESD_VISIBLE_WHENNEEDED;
	int right = left_2 == right_1;
	int left = left_1 && right;
	ft_uint8_t left_3 = context->ScrollBars;
	ft_uint8_t right_3 = ESD_VISIBLE_ALWAYS;
	int right_2 = left_3 == right_3;
	int update_variable_8 = left || right_2;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->ESD_Scroll_Bar_2, update_variable_8);
	ft_int16_t update_variable_9 = context->ScrollBarSize;
	Ft_Esd_Widget_SetHeight((Ft_Esd_Widget *)&context->ESD_Scroll_Bar_2, update_variable_9);
	ft_int16_t update_variable_10 = context->ScrollX;
	context->ESD_Scroll_Bar_2.Value = update_variable_10;
	ft_uint16_t left_5 = Ft_Esd_Layout_Scroll_RangeY(&context->Scroll_Layout);
	ft_uint8_t left_6 = context->ScrollBars;
	ft_uint8_t right_5 = ESD_VISIBLE_WHENNEEDED;
	int right_4 = left_6 == right_5;
	int left_4 = left_5 && right_4;
	ft_uint8_t left_7 = context->ScrollBars;
	ft_uint8_t right_7 = ESD_VISIBLE_ALWAYS;
	int right_6 = left_7 == right_7;
	int update_variable_11 = left_4 || right_6;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->Linear_Layout_3, update_variable_11);
	ft_int16_t update_variable_12 = context->ScrollBarSize;
	Ft_Esd_Widget_SetWidth((Ft_Esd_Widget *)&context->Linear_Layout_3, update_variable_12);
	ft_int16_t update_variable_13 = context->ScrollY;
	context->ESD_Scroll_Bar.Value = update_variable_13;
	ft_uint16_t left_9 = Ft_Esd_Layout_Scroll_RangeX(&context->Scroll_Layout);
	ft_uint8_t left_10 = context->ScrollBars;
	ft_uint8_t right_9 = ESD_VISIBLE_WHENNEEDED;
	int right_8 = left_10 == right_9;
	int left_8 = left_9 && right_8;
	ft_uint8_t left_11 = context->ScrollBars;
	ft_uint8_t right_11 = ESD_VISIBLE_ALWAYS;
	int right_10 = left_11 == right_11;
	int update_variable_14 = left_8 || right_10;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->Fill_Layout, update_variable_14);
	ft_int16_t update_variable_15 = context->ScrollBarSize;
	Ft_Esd_Widget_SetHeight((Ft_Esd_Widget *)&context->Fill_Layout, update_variable_15);
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context);
}

void Ft_Esd_ScrollPanel_End(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Linear_Layout); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Stretch); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Linear_Layout_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Stretch_3); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Scroll_Layout); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->TouchPanel); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Scroll_Bar_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Linear_Layout_3); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Stretch_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Scroll_Bar); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Fill_Layout); 
}

void Ft_Esd_ScrollPanel_Update(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	Ft_Esd_ScrollPanel_Update_Scroll(context);
	Ft_Esd_ScrollPanel_Update__Builtin(context);
}

Ft_Esd_Widget * Ft_Esd_ScrollPanel_Widget_Interface__Container(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return (Ft_Esd_Widget *)&context->Scroll_Layout;
}

ft_int16_t Ft_Esd_ScrollPanel_MinX(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	return context->Scroll_Layout.MinX;
}

ft_int16_t Ft_Esd_ScrollPanel_MaxX(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	return context->Scroll_Layout.MaxX;
}

ft_int16_t Ft_Esd_ScrollPanel_MinY(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	return context->Scroll_Layout.MinY;
}

ft_int16_t Ft_Esd_ScrollPanel_MaxY(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	return context->Scroll_Layout.MaxY;
}

ft_int16_t Ft_Esd_ScrollPanel_RangeX(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	return Ft_Esd_Layout_Scroll_RangeX(&context->Scroll_Layout);
}

ft_int16_t Ft_Esd_ScrollPanel_RangeY(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	return Ft_Esd_Layout_Scroll_RangeY(&context->Scroll_Layout);
}

ft_int16_t Ft_Esd_ScrollPanel_Width(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	return Ft_Esd_Layout_Scroll_Width(&context->Scroll_Layout);
}

ft_int16_t Ft_Esd_ScrollPanel_Height(Ft_Esd_ScrollPanel *context)
{
	void *owner = context->Owner;
	return Ft_Esd_Layout_Scroll_Height(&context->Scroll_Layout);
}

void Ft_Esd_ScrollPanel_Scroll_Layout_ScrollXChanged__Writer(void *c, ft_int16_t value)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	context->ScrollX = value;
	context->ESD_Scroll_Bar_2.Value = value;
	context->ScrollXChanged(owner, value);
}

void Ft_Esd_ScrollPanel_Scroll_Layout_ScrollYChanged__Writer(void *c, ft_int16_t value)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	context->ScrollY = value;
	context->ScrollYChanged(owner, value);
	context->ESD_Scroll_Bar.Value = value;
}

ft_argb32_t Ft_Esd_ScrollPanel_TouchPanel_Color__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	Ft_Esd_Theme * theme = context->Theme(owner);
	return Ft_Esd_Theme_GetBackColor(theme);
}

int Ft_Esd_ScrollPanel_TouchPanel_Radius__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return context->Radius(owner);
}

ft_bool_t Ft_Esd_ScrollPanel_TouchPanel_Raised__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return context->RaiseBorder(owner);
}

ft_bool_t Ft_Esd_ScrollPanel_TouchPanel_ShowBorder__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return context->ShowPanel(owner);
}

ft_bool_t Ft_Esd_ScrollPanel_TouchPanel_IncludeDefaultTag__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return context->Active_Scroll(owner);
}

void Ft_Esd_ScrollPanel_TouchPanel_Up__Signal(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	context->Up(owner);
}

void Ft_Esd_ScrollPanel_TouchPanel_Down__Signal(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	context->Down(owner);
	int store_previous_values = context->TouchX;
	context->PreviousTouchX = (int)store_previous_values;
	ft_int16_t set_variable_3 = context->ScrollX;
	context->PreviousScrollX = (int)set_variable_3;
	int set_variable = context->TouchY;
	context->PreviousTouchY = set_variable;
	ft_int16_t set_variable_1 = context->ScrollY;
	context->PreviousScrollY = set_variable_1;
}

void Ft_Esd_ScrollPanel_TouchPanel_Tap__Signal(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	context->Tap(owner);
}

Ft_Esd_Theme * Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Theme__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return context->Theme(owner);
}

ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Size__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return Ft_Esd_Layout_Scroll_Width(&context->Scroll_Layout);
}

ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Max__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return context->Scroll_Layout.MaxX;
}

ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Min__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return context->Scroll_Layout.MinX;
}

void Ft_Esd_ScrollPanel_ESD_Scroll_Bar_2_Changed__Writer(void *c, int value)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	context->ScrollX = (int)value;
	context->Scroll_Layout.ScrollX = (int)value;
	context->ScrollXChanged(owner, (int)value);
}

Ft_Esd_Theme * Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Theme__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return context->Theme(owner);
}

ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Size__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return Ft_Esd_Layout_Scroll_Height(&context->Scroll_Layout);
}

ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Max__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return context->Scroll_Layout.MaxY;
}

ft_int16_t Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Min__Property(void *c)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	return context->Scroll_Layout.MinY;
}

void Ft_Esd_ScrollPanel_ESD_Scroll_Bar_Changed__Writer(void *c, int value)
{
	Ft_Esd_ScrollPanel *context = (Ft_Esd_ScrollPanel *)c;
	void *owner = context->Owner;
	context->ScrollY = (int)value;
	context->Scroll_Layout.ScrollY = (int)value;
	context->ScrollYChanged(owner, (int)value);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_ScrollPanel Instance;
	ft_bool_t ShowPanel;
	ft_bool_t Active_Scroll;
	ft_bool_t RaiseBorder;
	Ft_Esd_Theme * Theme;
	int Radius;
} Ft_Esd_ScrollPanel__ESD;

ft_bool_t Ft_Esd_ScrollPanel__Get_ShowPanel__ESD(void *context) { return ((Ft_Esd_ScrollPanel__ESD *)context)->ShowPanel; }
void Ft_Esd_ScrollPanel__Set_ShowPanel__ESD(void *context, ft_bool_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->ShowPanel = value; }
ft_bool_t Ft_Esd_ScrollPanel__Get_Active_Scroll__ESD(void *context) { return ((Ft_Esd_ScrollPanel__ESD *)context)->Active_Scroll; }
void Ft_Esd_ScrollPanel__Set_Active_Scroll__ESD(void *context, ft_bool_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Active_Scroll = value; }
ft_bool_t Ft_Esd_ScrollPanel__Get_RaiseBorder__ESD(void *context) { return ((Ft_Esd_ScrollPanel__ESD *)context)->RaiseBorder; }
void Ft_Esd_ScrollPanel__Set_RaiseBorder__ESD(void *context, ft_bool_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->RaiseBorder = value; }
Ft_Esd_Theme * Ft_Esd_ScrollPanel__Get_Theme__ESD(void *context) { return ((Ft_Esd_ScrollPanel__ESD *)context)->Theme; }
void Ft_Esd_ScrollPanel__Set_Theme__ESD(void *context, Ft_Esd_Theme * value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Theme = value; }
int Ft_Esd_ScrollPanel__Get_Radius__ESD(void *context) { return ((Ft_Esd_ScrollPanel__ESD *)context)->Radius; }
void Ft_Esd_ScrollPanel__Set_Radius__ESD(void *context, int value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Radius = value; }

void *Ft_Esd_ScrollPanel__Create__ESD()
{
	Ft_Esd_ScrollPanel__ESD *context = (Ft_Esd_ScrollPanel__ESD *)esd_malloc(sizeof(Ft_Esd_ScrollPanel__ESD));
	if (context)
	{
		Ft_Esd_ScrollPanel__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->ShowPanel = 1;
		context->Instance.ShowPanel = Ft_Esd_ScrollPanel__Get_ShowPanel__ESD;
		context->Active_Scroll = 0;
		context->Instance.Active_Scroll = Ft_Esd_ScrollPanel__Get_Active_Scroll__ESD;
		context->RaiseBorder = 1;
		context->Instance.RaiseBorder = Ft_Esd_ScrollPanel__Get_RaiseBorder__ESD;
		context->Theme = Ft_Esd_Theme_GetCurrent();
		context->Instance.Theme = Ft_Esd_ScrollPanel__Get_Theme__ESD;
		context->Radius = 4L;
		context->Instance.Radius = Ft_Esd_ScrollPanel__Get_Radius__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_ScrollPanel__Create__ESD)");
	}
	return context;
}

void Ft_Esd_ScrollPanel__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Ft_Esd_ScrollPanel__Set_Touching__ESD(void *context, ft_bool_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.Touching = value; }
void Ft_Esd_ScrollPanel__Set_Inside__ESD(void *context, ft_bool_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.Inside = value; }
void Ft_Esd_ScrollPanel__Set_TouchX__ESD(void *context, int value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.TouchX = value; }
void Ft_Esd_ScrollPanel__Set_TouchY__ESD(void *context, int value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.TouchY = value; }
void Ft_Esd_ScrollPanel__Set_ScrollX__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.ScrollX = value; }
void Ft_Esd_ScrollPanel__Set_ScrollY__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.ScrollY = value; }
void Ft_Esd_ScrollPanel__Set_Align__ESD(void *context, uint8_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.Align = value; }
void Ft_Esd_ScrollPanel__Set_PreviousTouchX__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.PreviousTouchX = value; }
void Ft_Esd_ScrollPanel__Set_ScrollBars__ESD(void *context, ft_uint8_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.ScrollBars = value; }
void Ft_Esd_ScrollPanel__Set_PreviousScrollX__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.PreviousScrollX = value; }
void Ft_Esd_ScrollPanel__Set_TouchScroll__ESD(void *context, ft_bool_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.TouchScroll = value; }
void Ft_Esd_ScrollPanel__Set_PreviousTouchY__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.PreviousTouchY = value; }
void Ft_Esd_ScrollPanel__Set_PreviousScrollY__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.PreviousScrollY = value; }
void Ft_Esd_ScrollPanel__Set_ScrollBarSize__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ScrollPanel__ESD *)context)->Instance.ScrollBarSize = value; }

#endif /* ESD_SIMULATION */

/* end of file */
