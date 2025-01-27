/*
This file is automatically generated
window1
C Source
*/

#include "window1.h"

#include "Ft_Gpu.h"
#include "window1_progmem.h"

Ft_Esd_BitmapInfo window1__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 232,
	.Height = 137,
	.Format = L4,
	.Stride = 116,
	.Size = 15892,
	.ProgMem = window1_bin,
	.StorageSize = ((441 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell window1(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &window1__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell window1_0__Get__ESD() { return window1(0); }
#endif

/* end of file */
