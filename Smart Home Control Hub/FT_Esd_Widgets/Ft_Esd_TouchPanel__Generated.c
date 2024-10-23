/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_TouchPanel
C Source
*/

/*
Comment :
Introduction:
This widget draws a touchable panel.
ESD Rectangle and Color Panel is used internally.
Touch input is supported.
*/

#include "Ft_Esd_TouchPanel.h"

#include "Esd_Context.h"
#include "Ft_Esd_Elements.h"
#include "Ft_Esd_Primitives.h"
#include "Ft_Esd_TouchTag.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
ft_argb32_t Ft_Esd_TouchPanel_Color__Default(void *context) { return 0xff181818UL; }
int Ft_Esd_TouchPanel_Radius__Default(void *context) { return 4L; }
ft_bool_t Ft_Esd_TouchPanel_Raised__Default(void *context) { return 0; }
ft_bool_t Ft_Esd_TouchPanel_ShowBorder__Default(void *context) { return 1; }
ft_bool_t Ft_Esd_TouchPanel_IncludeDefaultTag__Default(void *context) { return 0; }

static int Ft_Esd_TouchPanel_Touch_Area_X__Property(void *context);
static int Ft_Esd_TouchPanel_Touch_Area_Y__Property(void *context);
static int Ft_Esd_TouchPanel_Touch_Area_Width__Property(void *context);
static int Ft_Esd_TouchPanel_Touch_Area_Height__Property(void *context);

static Ft_Esd_WidgetSlots s_Ft_Esd_TouchPanel__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_TouchPanel_Update,
	(void(*)(void *))Ft_Esd_Widget_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_TouchPanel_End,
};

static void Ft_Esd_TouchPanel_Touch_Area_Up__Signal(void *context);
static void Ft_Esd_TouchPanel_Touch_Area_Down__Signal(void *context);
static void Ft_Esd_TouchPanel_TouchTagRenderInterface_Rendering__Signal(void *context);
static void Ft_Esd_TouchPanel_TouchTagRenderInterface_Up__Signal(void *context);
static void Ft_Esd_TouchPanel_TouchTagRenderInterface_Down__Signal(void *context);
static void Ft_Esd_TouchPanel_TouchTagRenderInterface_Tap__Signal(void *context);

void Ft_Esd_TouchPanel__Touch_Area__Initializer(Ft_Esd_TouchPanel *context)
{
	Ft_Esd_TouchArea *object = (Ft_Esd_TouchArea *)&context->Touch_Area;
	Ft_Esd_TouchArea__Initializer(object);
	object->Owner = (void *)context;
	object->X = Ft_Esd_TouchPanel_Touch_Area_X__Property;
	object->Y = Ft_Esd_TouchPanel_Touch_Area_Y__Property;
	object->Width = Ft_Esd_TouchPanel_Touch_Area_Width__Property;
	object->Height = Ft_Esd_TouchPanel_Touch_Area_Height__Property;
	object->Up = Ft_Esd_TouchPanel_Touch_Area_Up__Signal;
	object->Down = Ft_Esd_TouchPanel_Touch_Area_Down__Signal;
}

void Ft_Esd_TouchPanel__TouchTagRenderInterface__Initializer(Ft_Esd_TouchPanel *context)
{
	Ft_Esd_TouchTagRenderInterface *object = (Ft_Esd_TouchTagRenderInterface *)&context->TouchTagRenderInterface;
	Ft_Esd_TouchTagRenderInterface__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 400;
	object->Widget.LocalHeight = 300;
	object->Rendering = Ft_Esd_TouchPanel_TouchTagRenderInterface_Rendering__Signal;
	object->Up = Ft_Esd_TouchPanel_TouchTagRenderInterface_Up__Signal;
	object->Down = Ft_Esd_TouchPanel_TouchTagRenderInterface_Down__Signal;
	object->Tap = Ft_Esd_TouchPanel_TouchTagRenderInterface_Tap__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void Ft_Esd_TouchPanel__Initializer(Ft_Esd_TouchPanel *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_TouchPanel_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_TouchPanel__Slots;
	context->Widget.LocalX = 14;
	context->Widget.LocalY = 10;
	context->Widget.LocalWidth = 276;
	context->Widget.LocalHeight = 198;
	context->Color = Ft_Esd_TouchPanel_Color__Default;
	context->Radius = Ft_Esd_TouchPanel_Radius__Default;
	context->Raised = Ft_Esd_TouchPanel_Raised__Default;
	context->ShowBorder = Ft_Esd_TouchPanel_ShowBorder__Default;
	context->Up = Esd_Noop;
	context->Down = Esd_Noop;
	context->Tap = Esd_Noop;
	context->IncludeDefaultTag = Ft_Esd_TouchPanel_IncludeDefaultTag__Default;
	context->AssumedTouching = 0;
	context->AssumedInside = 0;
	Ft_Esd_TouchPanel__Touch_Area__Initializer(context);
	Ft_Esd_TouchPanel__TouchTagRenderInterface__Initializer(context);
}

static ft_uint8_t Ft_Esd_TouchPanel_Current_Tag__return(Ft_Esd_TouchPanel *context);
static int Ft_Esd_TouchPanel_Touch_Area__active(Ft_Esd_TouchPanel *context);

void Ft_Esd_Elements_Panel_Color(ft_argb32_t, ft_int16_t, ft_int16_t, ft_int16_t, ft_int16_t, ft_int16_t, ft_bool_t);

void Ft_Esd_TouchPanel_Update__Builtin(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	Ft_Esd_TouchArea_Update(&context->Touch_Area);
	ft_int16_t update_variable = context->Widget.GlobalX;
	Ft_Esd_Widget_SetX((Ft_Esd_Widget *)&context->TouchTagRenderInterface, update_variable);
	ft_int16_t update_variable_1 = context->Widget.GlobalY;
	Ft_Esd_Widget_SetY((Ft_Esd_Widget *)&context->TouchTagRenderInterface, update_variable_1);
	ft_int16_t update_variable_2 = context->Widget.GlobalWidth;
	Ft_Esd_Widget_SetWidth((Ft_Esd_Widget *)&context->TouchTagRenderInterface, update_variable_2);
	ft_int16_t update_variable_3 = context->Widget.GlobalHeight;
	Ft_Esd_Widget_SetHeight((Ft_Esd_Widget *)&context->TouchTagRenderInterface, update_variable_3);
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context);
}

void Ft_Esd_TouchPanel_End(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->TouchTagRenderInterface); 
}

ft_bool_t Ft_Esd_TouchPanel_Touching(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	ft_bool_t left = Ft_Esd_TouchTagRenderInterface_Touching(&context->TouchTagRenderInterface);
	ft_bool_t right = context->AssumedTouching;
	return left || right;
}

ft_bool_t Ft_Esd_TouchPanel_Inside(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	ft_bool_t left_1 = Ft_Esd_TouchTagRenderInterface_Inside(&context->TouchTagRenderInterface);
	ft_bool_t right_1 = context->AssumedInside;
	return left_1 || right_1;
}

int Ft_Esd_TouchPanel_TouchX(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	return Ft_Esd_TouchTagRenderInterface_TouchX(&context->TouchTagRenderInterface);
}

void Ft_Esd_TouchPanel_Update(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	ft_bool_t if_1 = context->IncludeDefaultTag(owner);
	if (if_1)
	{
		ft_uint8_t left_2 = Ft_Esd_TouchPanel_Current_Tag__return(context);
		int right_2 = 255L;
		int if_2 = left_2 == right_2;
		if (if_2)
		{
			ft_bool_t if_3 = context->AssumedTouching;
			if (if_3)
			{
				ft_bool_t clear_assumedinside = 0;
				context->AssumedInside = clear_assumedinside;
				int left_3 = Ft_Esd_TouchTagRenderInterface_TouchX(&context->TouchTagRenderInterface);
				int right_3 = context->Touch_Area.X(context->Touch_Area.Owner);
				int if_4 = left_3 >= right_3;
				if (if_4)
				{
					int left_4 = Ft_Esd_TouchTagRenderInterface_TouchX(&context->TouchTagRenderInterface);
					int left_5 = context->Touch_Area.X(context->Touch_Area.Owner);
					int right_5 = context->Touch_Area.Width(context->Touch_Area.Owner);
					int right_4 = left_5 + right_5;
					int if_5 = left_4 <= right_4;
					if (if_5)
					{
						int left_6 = Ft_Esd_TouchTagRenderInterface_TouchY(&context->TouchTagRenderInterface);
						int right_6 = context->Touch_Area.Y(context->Touch_Area.Owner);
						int if_6 = left_6 >= right_6;
						if (if_6)
						{
							int left_7 = Ft_Esd_TouchTagRenderInterface_TouchY(&context->TouchTagRenderInterface);
							int left_8 = context->Touch_Area.Y(context->Touch_Area.Owner);
							int right_8 = context->Touch_Area.Height(context->Touch_Area.Owner);
							int right_7 = left_8 + right_8;
							int if_7 = left_7 <= right_7;
							if (if_7)
							{
								ft_bool_t set_assumed_inside = 1;
								context->AssumedInside = set_assumed_inside;
							}
							else
							{
							}
						}
						else
						{
						}
					}
					else
					{
					}
				}
				else
				{
				}
			}
			else
			{
			}
		}
		else
		{
		}
	}
	else
	{
	}
	Ft_Esd_TouchPanel_Update__Builtin(context);
}

int Ft_Esd_TouchPanel_TouchY(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	return Ft_Esd_TouchTagRenderInterface_TouchY(&context->TouchTagRenderInterface);
}

int Ft_Esd_TouchPanel_TouchXDelta(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	return Ft_Esd_TouchTagRenderInterface_TouchXDelta(&context->TouchTagRenderInterface);
}

int Ft_Esd_TouchPanel_TouchYDelta(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	return Ft_Esd_TouchTagRenderInterface_TouchYDelta(&context->TouchTagRenderInterface);
}

int Ft_Esd_TouchPanel_Tag(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	return Ft_Esd_TouchTagRenderInterface_Tag(&context->TouchTagRenderInterface);
}

ft_uint8_t Ft_Esd_TouchPanel_Current_Tag__return(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	Ft_Esd_TouchTag * context_1 = 0x0;
	return Ft_Esd_TouchTag_CurrentTag(context_1);
}

int Ft_Esd_TouchPanel_Touch_Area_X__Property(void *c)
{
	Ft_Esd_TouchPanel *context = (Ft_Esd_TouchPanel *)c;
	void *owner = context->Owner;
	return context->Widget.GlobalX;
}

int Ft_Esd_TouchPanel_Touch_Area_Y__Property(void *c)
{
	Ft_Esd_TouchPanel *context = (Ft_Esd_TouchPanel *)c;
	void *owner = context->Owner;
	return context->Widget.GlobalY;
}

int Ft_Esd_TouchPanel_Touch_Area_Width__Property(void *c)
{
	Ft_Esd_TouchPanel *context = (Ft_Esd_TouchPanel *)c;
	void *owner = context->Owner;
	return context->Widget.GlobalWidth;
}

int Ft_Esd_TouchPanel_Touch_Area_Height__Property(void *c)
{
	Ft_Esd_TouchPanel *context = (Ft_Esd_TouchPanel *)c;
	void *owner = context->Owner;
	return context->Widget.GlobalHeight;
}

int Ft_Esd_TouchPanel_Touch_Area__active(Ft_Esd_TouchPanel *context)
{
	void *owner = context->Owner;
	return context->IncludeDefaultTag(owner);
}

void Ft_Esd_TouchPanel_Touch_Area_Up__Signal(void *c)
{
	Ft_Esd_TouchPanel *context = (Ft_Esd_TouchPanel *)c;
	void *owner = context->Owner;
	ft_bool_t if_8 = context->IncludeDefaultTag(owner);
	if (if_8)
	{
		ft_bool_t if_9 = context->AssumedTouching;
		if (if_9)
		{
			context->Up(owner);
			ft_bool_t set_variable = 0;
			context->AssumedTouching = set_variable;
			context->AssumedInside = set_variable;
		}
		else
		{
		}
	}
	else
	{
	}
}

void Ft_Esd_TouchPanel_Touch_Area_Down__Signal(void *c)
{
	Ft_Esd_TouchPanel *context = (Ft_Esd_TouchPanel *)c;
	void *owner = context->Owner;
	ft_bool_t if_10 = context->IncludeDefaultTag(owner);
	if (if_10)
	{
		ft_uint8_t left_9 = Ft_Esd_TouchPanel_Current_Tag__return(context);
		int right_9 = 255L;
		int if_11 = left_9 == right_9;
		if (if_11)
		{
			ft_bool_t if_12 = Ft_Esd_TouchArea_Inside(&context->Touch_Area);
			if (if_12)
			{
				context->Down(owner);
				ft_bool_t set_variable_1 = context->Touch_Area.Touching;
				context->AssumedTouching = set_variable_1;
				ft_bool_t set_variable_2 = Ft_Esd_TouchArea_Inside(&context->Touch_Area);
				context->AssumedInside = set_variable_2;
			}
			else
			{
			}
		}
		else
		{
		}
	}
	else
	{
	}
}

void Ft_Esd_TouchPanel_TouchTagRenderInterface_Rendering__Signal(void *c)
{
	Ft_Esd_TouchPanel *context = (Ft_Esd_TouchPanel *)c;
	void *owner = context->Owner;
	ft_bool_t if_13 = context->ShowBorder(owner);
	if (if_13)
	{
		ft_argb32_t color = context->Color(owner);
		ft_int16_t x = context->Widget.GlobalX;
		ft_int16_t y = context->Widget.GlobalY;
		ft_int16_t width = context->Widget.GlobalWidth;
		ft_int16_t height = context->Widget.GlobalHeight;
		int radius = context->Radius(owner);
		ft_bool_t raised = context->Raised(owner);
		Ft_Esd_Elements_Panel_Color(color, x, y, width, height, radius, raised);
	}
	else
	{
		ft_int16_t x_1 = context->Widget.GlobalX;
		ft_int16_t y_1 = context->Widget.GlobalY;
		ft_int16_t width_1 = context->Widget.GlobalWidth;
		ft_int16_t height_1 = context->Widget.GlobalHeight;
		int radius_1 = context->Radius(owner);
		ft_argb32_t color_1 = context->Color(owner);
		Ft_Esd_Render_Rectangle(x_1, y_1, width_1, height_1, radius_1, color_1);
	}
}

void Ft_Esd_TouchPanel_TouchTagRenderInterface_Up__Signal(void *c)
{
	Ft_Esd_TouchPanel *context = (Ft_Esd_TouchPanel *)c;
	void *owner = context->Owner;
	context->Up(owner);
}

void Ft_Esd_TouchPanel_TouchTagRenderInterface_Down__Signal(void *c)
{
	Ft_Esd_TouchPanel *context = (Ft_Esd_TouchPanel *)c;
	void *owner = context->Owner;
	context->Down(owner);
}

void Ft_Esd_TouchPanel_TouchTagRenderInterface_Tap__Signal(void *c)
{
	Ft_Esd_TouchPanel *context = (Ft_Esd_TouchPanel *)c;
	void *owner = context->Owner;
	context->Tap(owner);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_TouchPanel Instance;
	ft_argb32_t Color;
	int Radius;
	ft_bool_t Raised;
	ft_bool_t ShowBorder;
	ft_bool_t IncludeDefaultTag;
} Ft_Esd_TouchPanel__ESD;

ft_argb32_t Ft_Esd_TouchPanel__Get_Color__ESD(void *context) { return ((Ft_Esd_TouchPanel__ESD *)context)->Color; }
void Ft_Esd_TouchPanel__Set_Color__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_TouchPanel__ESD *)context)->Color = value; }
int Ft_Esd_TouchPanel__Get_Radius__ESD(void *context) { return ((Ft_Esd_TouchPanel__ESD *)context)->Radius; }
void Ft_Esd_TouchPanel__Set_Radius__ESD(void *context, int value) { ((Ft_Esd_TouchPanel__ESD *)context)->Radius = value; }
ft_bool_t Ft_Esd_TouchPanel__Get_Raised__ESD(void *context) { return ((Ft_Esd_TouchPanel__ESD *)context)->Raised; }
void Ft_Esd_TouchPanel__Set_Raised__ESD(void *context, ft_bool_t value) { ((Ft_Esd_TouchPanel__ESD *)context)->Raised = value; }
ft_bool_t Ft_Esd_TouchPanel__Get_ShowBorder__ESD(void *context) { return ((Ft_Esd_TouchPanel__ESD *)context)->ShowBorder; }
void Ft_Esd_TouchPanel__Set_ShowBorder__ESD(void *context, ft_bool_t value) { ((Ft_Esd_TouchPanel__ESD *)context)->ShowBorder = value; }
ft_bool_t Ft_Esd_TouchPanel__Get_IncludeDefaultTag__ESD(void *context) { return ((Ft_Esd_TouchPanel__ESD *)context)->IncludeDefaultTag; }
void Ft_Esd_TouchPanel__Set_IncludeDefaultTag__ESD(void *context, ft_bool_t value) { ((Ft_Esd_TouchPanel__ESD *)context)->IncludeDefaultTag = value; }

void *Ft_Esd_TouchPanel__Create__ESD()
{
	Ft_Esd_TouchPanel__ESD *context = (Ft_Esd_TouchPanel__ESD *)esd_malloc(sizeof(Ft_Esd_TouchPanel__ESD));
	if (context)
	{
		Ft_Esd_TouchPanel__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->Color = 0xff181818UL;
		context->Instance.Color = Ft_Esd_TouchPanel__Get_Color__ESD;
		context->Radius = 4L;
		context->Instance.Radius = Ft_Esd_TouchPanel__Get_Radius__ESD;
		context->Raised = 0;
		context->Instance.Raised = Ft_Esd_TouchPanel__Get_Raised__ESD;
		context->ShowBorder = 1;
		context->Instance.ShowBorder = Ft_Esd_TouchPanel__Get_ShowBorder__ESD;
		context->IncludeDefaultTag = 0;
		context->Instance.IncludeDefaultTag = Ft_Esd_TouchPanel__Get_IncludeDefaultTag__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_TouchPanel__Create__ESD)");
	}
	return context;
}

void Ft_Esd_TouchPanel__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Ft_Esd_TouchPanel__Set_AssumedTouching__ESD(void *context, ft_bool_t value) { ((Ft_Esd_TouchPanel__ESD *)context)->Instance.AssumedTouching = value; }
void Ft_Esd_TouchPanel__Set_AssumedInside__ESD(void *context, ft_bool_t value) { ((Ft_Esd_TouchPanel__ESD *)context)->Instance.AssumedInside = value; }

#endif /* ESD_SIMULATION */

/* end of file */