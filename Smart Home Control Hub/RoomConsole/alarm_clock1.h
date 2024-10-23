/*
This file is automatically generated
alarm_clock1
Header
*/

#ifndef alarm_clock1__H
#define alarm_clock1__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell alarm_clock1(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo alarm_clock1__Info;

ESD_FUNCTION(alarm_clock1_0, Type = Ft_Esd_BitmapCell, DisplayName = "alarm_clock1", Include = "alarm_clock1.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define alarm_clock1_0() ((Ft_Esd_BitmapCell){ .Info = &alarm_clock1__Info, .Cell = 0 })

#endif /* alarm_clock1__H */

/* end of file */