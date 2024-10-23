/*
This file is automatically generated
window
C Source
*/

#include "window.h"

#include "Ft_Gpu.h"
#include "window_progmem.h"

Ft_Esd_BitmapInfo window__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 320,
	.Height = 189,
	.Format = L4,
	.Stride = 160,
	.Size = 30240,
	.ProgMem = window_bin,
	.StorageSize = ((622 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell window(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &window__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell window_0__Get__ESD() { return window(0); }
#endif

/* end of file */
