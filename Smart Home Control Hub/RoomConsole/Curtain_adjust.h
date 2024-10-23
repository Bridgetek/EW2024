/*
This file is automatically generated
Curtain_adjust
Header
*/

#ifndef Curtain_adjust__H
#define Curtain_adjust__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell Curtain_adjust(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo Curtain_adjust__Info;

ESD_FUNCTION(Curtain_adjust_0, Type = Ft_Esd_BitmapCell, DisplayName = "Curtain_adjust", Include = "Curtain_adjust.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define Curtain_adjust_0() ((Ft_Esd_BitmapCell){ .Info = &Curtain_adjust__Info, .Cell = 0 })

#endif /* Curtain_adjust__H */

/* end of file */