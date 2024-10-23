/*
This file is automatically generated
snow_icon
C Source
*/

#include "snow_icon.h"

#include "Ft_Gpu.h"
#include "snow_icon_progmem.h"

Ft_Esd_BitmapInfo snow_icon__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 42, /* Padded to 44, REPEAT will not work as expected */
	.Height = 48,
	.Format = L2,
	.Stride = 11,
	.Size = 528,
	.ProgMem = snow_icon_bin,
	.StorageSize = ((215 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell snow_icon(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &snow_icon__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell snow_icon_0__Get__ESD() { return snow_icon(0); }
#endif

/* end of file */
