/*
This file is automatically generated
fan4
C Source
*/

#include "fan4.h"

#include "Ft_Gpu.h"
#include "fan4_progmem.h"

Ft_Esd_BitmapInfo fan4__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 128,
	.Height = 128,
	.Format = L2,
	.Stride = 32,
	.Size = 4096,
	.ProgMem = fan4_bin,
	.StorageSize = ((626 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell fan4(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &fan4__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell fan4_0__Get__ESD() { return fan4(0); }
#endif

/* end of file */
