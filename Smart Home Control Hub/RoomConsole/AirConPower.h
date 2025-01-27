/*
This file is automatically generated
AirConPower
Header
*/

#ifndef AirConPower__H
#define AirConPower__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell AirConPower(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo AirConPower__Info;

ESD_FUNCTION(AirConPower_0, Type = Ft_Esd_BitmapCell, DisplayName = "AirConPower", Include = "AirConPower.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define AirConPower_0() ((Ft_Esd_BitmapCell){ .Info = &AirConPower__Info, .Cell = 0 })

#endif /* AirConPower__H */

/* end of file */
