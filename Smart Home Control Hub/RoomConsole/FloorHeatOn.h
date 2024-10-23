/*
This file is automatically generated
FloorHeatOn
Header
*/

#ifndef FloorHeatOn__H
#define FloorHeatOn__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell FloorHeatOn(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo FloorHeatOn__Info;

ESD_FUNCTION(FloorHeatOn_0, Type = Ft_Esd_BitmapCell, DisplayName = "FloorHeatOn", Include = "FloorHeatOn.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define FloorHeatOn_0() ((Ft_Esd_BitmapCell){ .Info = &FloorHeatOn__Info, .Cell = 0 })

#endif /* FloorHeatOn__H */

/* end of file */