/*
This file is automatically generated
CelingLight
Header
*/

#ifndef CelingLight__H
#define CelingLight__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell CelingLight(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo CelingLight__Info;

ESD_FUNCTION(CelingLight_0, Type = Ft_Esd_BitmapCell, DisplayName = "CelingLight", Include = "CelingLight.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define CelingLight_0() ((Ft_Esd_BitmapCell){ .Info = &CelingLight__Info, .Cell = 0 })

#endif /* CelingLight__H */

/* end of file */