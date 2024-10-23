/*
This file is automatically generated
CurtainOpen
Header
*/

#ifndef CurtainOpen__H
#define CurtainOpen__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell CurtainOpen(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo CurtainOpen__Info;

ESD_FUNCTION(CurtainOpen_0, Type = Ft_Esd_BitmapCell, DisplayName = "CurtainOpen", Include = "CurtainOpen.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define CurtainOpen_0() ((Ft_Esd_BitmapCell){ .Info = &CurtainOpen__Info, .Cell = 0 })

#endif /* CurtainOpen__H */

/* end of file */