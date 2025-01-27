/*
This file is automatically generated
power_stroke_icon
C Source
*/

#include "power_stroke_icon.h"

#include "Ft_Gpu.h"
#include "power_stroke_icon_progmem.h"

Ft_Esd_BitmapInfo power_stroke_icon__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 40,
	.Height = 40,
	.Format = L4,
	.Stride = 20,
	.Size = 800,
	.ProgMem = power_stroke_icon_bin,
	.StorageSize = ((350 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell power_stroke_icon(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &power_stroke_icon__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell power_stroke_icon_0__Get__ESD() { return power_stroke_icon(0); }
#endif

/* end of file */
