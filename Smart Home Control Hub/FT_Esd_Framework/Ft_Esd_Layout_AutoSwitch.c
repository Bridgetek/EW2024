
#include "Ft_Esd_Layout_AutoSwitch.h"

#ifdef ESD_SIMULATION
extern int Ft_Esd_DesignerMode;
#endif

static Ft_Esd_WidgetSlots s_Ft_Esd_Layout_AutoSwitch__Slots = {
	(void (*)(void *))Ft_Esd_Widget_Initialize,
	(void (*)(void *))Ft_Esd_Layout_AutoSwitch_Start,
	(void (*)(void *))Ft_Esd_Widget_Enable,
	(void (*)(void *))Ft_Esd_Layout_AutoSwitch_Update,
	(void (*)(void *))Ft_Esd_Layout_AutoSwitch_Render,
	(void (*)(void *))Ft_Esd_Layout_AutoSwitch_Idle,
	(void (*)(void *))Ft_Esd_Widget_Disable,
	(void (*)(void *))Ft_Esd_Widget_End,
};

void Ft_Esd_Layout_AutoSwitch__Initializer(Ft_Esd_Layout_AutoSwitch *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Layout_AutoSwitch_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Layout_AutoSwitch__Slots;
	context->Widget.LocalWidth = FT_DispWidth;
	context->Widget.LocalHeight = FT_DispHeight;
	context->Current = 0;
}

void setNextPicture(Ft_Esd_Layout_AutoSwitch *context)
{
	Ft_Esd_Widget *old = context->Current;
	Ft_Esd_Widget *current = context->Current->Next;
	if (!current)
	{
		current = old->Parent->First;
	}
	context->Current = current;
	Ft_Esd_Widget_SetActive(old, false);
	Ft_Esd_Widget_SetActive(current, true);
	context->Widget.Recalculate = FT_TRUE;
	Esd_CurrentContext->HW_updated = true;
}

void Ft_Esd_Layout_AutoSwitch_Start(Ft_Esd_Layout_AutoSwitch *context)
{
	context->Current = context->Widget.First;
	context->Widget.Recalculate = FT_FALSE;
	Ft_Esd_Widget_IterateChildActiveSlotReverse((Ft_Esd_Widget *)context, FT_ESD_WIDGET_START);
}

void Ft_Esd_Layout_AutoSwitch_Update(Ft_Esd_Layout_AutoSwitch *context)
{
	if (!context->Current)
		return;

	static ft_uint32_t time = 0;
	time += Ft_Esd_GetDeltaMs();
	if (time > context->AnimationDuration)
	{
		setNextPicture(context);
		time = 0;
	}

	Ft_Esd_Widget *current = context->Current;

	bool recalculate = context->Widget.Recalculate;
	if (recalculate)
	{

		context->Widget.Recalculate = FT_FALSE;
		Ft_Esd_Widget *child;
		child = (context->Widget).Last;

		while (child)
		{
			if (child == current)
			{
				Ft_Esd_Widget_SetGlobalRect(child,
				    context->Widget.GlobalX,
				    context->Widget.GlobalY,
				    Esd_GetHost()->Width,
				    Esd_GetHost()->Height);
			}
			else
			{
				Ft_Esd_Widget_SetActive(child, FT_FALSE);
			}
			child = child->Previous;
		}
	}

	Ft_Esd_Widget_IterateChildActiveSlotReverse((Ft_Esd_Widget *)context, FT_ESD_WIDGET_UPDATE);

	if (recalculate)
		Ft_Esd_Widget_CheckDefaultIdle(&context->Widget);
}

void Ft_Esd_Layout_AutoSwitch_Render(Ft_Esd_Layout_AutoSwitch *context)
{
	Ft_Esd_Widget_IterateChildActiveValidSlotReverse((Ft_Esd_Widget *)context, FT_ESD_WIDGET_RENDER);
}

void Ft_Esd_Layout_AutoSwitch_Idle(Ft_Esd_Layout_AutoSwitch *context)
{
	Ft_Esd_Widget_IterateChildActiveSlotReverse((Ft_Esd_Widget *)context, FT_ESD_WIDGET_IDLE);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_Layout_AutoSwitch Instance;
} Ft_Esd_Layout_AutoSwitch__ESD;

void *Ft_Esd_Layout_AutoSwitch__Create__ESD()
{
	Ft_Esd_Layout_AutoSwitch__ESD *context = (Ft_Esd_Layout_AutoSwitch__ESD *)esd_malloc(sizeof(Ft_Esd_Layout_AutoSwitch__ESD));
	Ft_Esd_Layout_AutoSwitch__Initializer(&context->Instance);
	context->Instance.Owner = context;
	return context;
}
ft_bool_t Ft_Esd_Layout_AutoSwitch__Get_AnimationDuration__ESD(void *context) { return ((Ft_Esd_Layout_AutoSwitch__ESD *)context)->Instance.AnimationDuration; }
void Ft_Esd_Layout_AutoSwitch__Set_AnimationDuration__ESD(void *context, ft_bool_t value) { ((Ft_Esd_Layout_AutoSwitch__ESD *)context)->Instance.AnimationDuration = value; }

void Ft_Esd_Layout_AutoSwitch__Destroy__ESD(void *context)
{
	esd_free(context);
}

#endif /* ESD_SIMULATION */

/* end of file */
