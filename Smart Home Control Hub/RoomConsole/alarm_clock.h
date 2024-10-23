/*
This file is automatically generated
alarm_clock
Header
*/

#ifndef alarm_clock__H
#define alarm_clock__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell alarm_clock(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo alarm_clock__Info;

ESD_FUNCTION(alarm_clock_0, Type = Ft_Esd_BitmapCell, DisplayName = "alarm_clock", Include = "alarm_clock.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define alarm_clock_0() ((Ft_Esd_BitmapCell){ .Info = &alarm_clock__Info, .Cell = 0 })

#endif /* alarm_clock__H */

/* end of file */