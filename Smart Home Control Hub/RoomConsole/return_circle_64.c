/*
This file is automatically generated
return_circle_64
C Source
*/

#include "return_circle_64.h"

#include "Ft_Gpu.h"
#include "return_circle_64_progmem.h"

Ft_Esd_BitmapInfo return_circle_64__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 64,
	.Height = 64,
	.Format = L4,
	.Stride = 32,
	.Size = 2048,
	.ProgMem = return_circle_64_bin,
	.StorageSize = ((666 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell return_circle_64(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &return_circle_64__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell return_circle_64_0__Get__ESD() { return return_circle_64(0); }
#endif

/* end of file */
