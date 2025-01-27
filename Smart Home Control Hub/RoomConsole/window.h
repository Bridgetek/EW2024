/*
This file is automatically generated
window
Header
*/

#ifndef window__H
#define window__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell window(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo window__Info;

ESD_FUNCTION(window_0, Type = Ft_Esd_BitmapCell, DisplayName = "window", Include = "window.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define window_0() ((Ft_Esd_BitmapCell){ .Info = &window__Info, .Cell = 0 })

#endif /* window__H */

/* end of file */
