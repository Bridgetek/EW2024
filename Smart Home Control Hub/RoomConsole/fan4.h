/*
This file is automatically generated
fan4
Header
*/

#ifndef fan4__H
#define fan4__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell fan4(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo fan4__Info;

ESD_FUNCTION(fan4_0, Type = Ft_Esd_BitmapCell, DisplayName = "fan4", Include = "fan4.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define fan4_0() ((Ft_Esd_BitmapCell){ .Info = &fan4__Info, .Cell = 0 })

#endif /* fan4__H */

/* end of file */