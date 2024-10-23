/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_PolygonWidget
Header
*/

#ifndef Ft_Esd_PolygonWidget__H
#define Ft_Esd_PolygonWidget__H

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

#define Ft_Esd_PolygonWidget_CLASSID 0x3F3CCC4B
ESD_SYMBOL(Ft_Esd_PolygonWidget_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Ft_Esd_PolygonWidget, Include = "Ft_Esd_PolygonWidget.h", Callback, DisplayName = "ESD Polygon Widget", Category = EsdBasicWidgets, Icon = ":/icons/layer-shape-polygon.png", X = 202, Y = 105, Width = 250, Height = 250)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	/* Offset from the top-left pixel in the x-direction */
	ESD_ARRAY_INPUT(VertexsX, DisplayName = "Vertices", Type = int, Array = true, Static = false, Pair = VertexsY, SubDisplayName = x)
	const int* (* VertexsX)(void *context, size_t *size);
	int VertexsX_ArraySize;
	/* Offset from the top-left pixel in the y-direction */
	ESD_ARRAY_INPUT(VertexsY, Type = int, Array = true, Static = true, Pair = VertexsX, SubDisplayName = y)
	const int* (* VertexsY)(void *context, size_t *size);
	int VertexsY_ArraySize;
	ESD_INPUT(Border_Width, Type = ft_uint8_t, Min = 0, Max = 255, SingleStep = 1, Default = 10)
	ft_uint8_t(* Border_Width)(void *context);
	ESD_INPUT(Border_Color, Type = ft_argb32_t, Default = #00007f)
	ft_argb32_t(* Border_Color)(void *context);
	ESD_INPUT(Fill_Color, Type = ft_argb32_t, Default = #ffff00)
	ft_argb32_t(* Fill_Color)(void *context);
} Ft_Esd_PolygonWidget;

void Ft_Esd_PolygonWidget__Initializer(Ft_Esd_PolygonWidget *context);

ESD_SLOT(Start)
void Ft_Esd_PolygonWidget_Start(Ft_Esd_PolygonWidget *context);

ESD_SLOT(Render)
void Ft_Esd_PolygonWidget_Render(Ft_Esd_PolygonWidget *context);

ESD_SLOT(Update)
void Ft_Esd_PolygonWidget_Update(Ft_Esd_PolygonWidget *context);

#endif /* Ft_Esd_PolygonWidget__H */

/* end of file */
