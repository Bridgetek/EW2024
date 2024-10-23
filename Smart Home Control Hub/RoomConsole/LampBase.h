/*
This file is automatically generated
LampBase
Header
*/

#ifndef LampBase__H
#define LampBase__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell LampBase(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo LampBase__Info;

ESD_FUNCTION(LampBase_0, Type = Ft_Esd_BitmapCell, DisplayName = "LampBase", Include = "LampBase.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define LampBase_0() ((Ft_Esd_BitmapCell){ .Info = &LampBase__Info, .Cell = 0 })

#endif /* LampBase__H */

/* end of file */
