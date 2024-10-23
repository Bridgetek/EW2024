/*
This file is automatically generated
alarm_clock
C Source
*/

#include "alarm_clock.h"

#include "Ft_Gpu.h"
#include "alarm_clock_progmem.h"

Ft_Esd_BitmapInfo alarm_clock__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 64,
	.Height = 64,
	.Format = L2,
	.Stride = 16,
	.Size = 1024,
	.ProgMem = alarm_clock_bin,
	.StorageSize = ((458 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell alarm_clock(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &alarm_clock__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell alarm_clock_0__Get__ESD() { return alarm_clock(0); }
#endif

/* end of file */
