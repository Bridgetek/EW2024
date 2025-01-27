/*
This file is automatically generated
snow_white_icon
C Source
*/

#include "snow_white_icon.h"

#include "Ft_Gpu.h"
#include "snow_white_icon_progmem.h"

Ft_Esd_BitmapInfo snow_white_icon__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 32,
	.Height = 32,
	.Format = L2,
	.Stride = 8,
	.Size = 256,
	.ProgMem = snow_white_icon_bin,
	.StorageSize = ((102 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell snow_white_icon(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &snow_white_icon__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell snow_white_icon_0__Get__ESD() { return snow_white_icon(0); }
#endif

/* end of file */
