/*
This file is automatically generated
light_on_38
C Source
*/

#include "light_on_38.h"

#include "Ft_Gpu.h"
#include "light_on_38_progmem.h"

Ft_Esd_BitmapInfo light_on_38__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 38,
	.Height = 18,
	.Format = L4,
	.Stride = 19,
	.Size = 342,
	.ProgMem = light_on_38_bin,
	.StorageSize = ((181 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell light_on_38(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &light_on_38__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell light_on_38_0__Get__ESD() { return light_on_38(0); }
#endif

/* end of file */
