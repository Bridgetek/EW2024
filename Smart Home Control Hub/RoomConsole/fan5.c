/*
This file is automatically generated
fan5
C Source
*/

#include "fan5.h"

#include "Ft_Gpu.h"
#include "fan5_progmem.h"

Ft_Esd_BitmapInfo fan5__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 64,
	.Height = 64,
	.Format = L2,
	.Stride = 16,
	.Size = 1024,
	.ProgMem = fan5_bin,
	.StorageSize = ((285 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell fan5(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &fan5__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell fan5_0__Get__ESD() { return fan5(0); }
#endif

/* end of file */
