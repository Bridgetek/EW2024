/*
This file is automatically generated
CeilingLightlshade
C Source
*/

#include "CeilingLightlshade.h"

#include "Ft_Gpu.h"
#include "CeilingLightlshade_progmem.h"

Ft_Esd_BitmapInfo CeilingLightlshade__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 60,
	.Height = 61,
	.Format = L4,
	.Stride = 30,
	.Size = 1830,
	.ProgMem = CeilingLightlshade_bin,
	.StorageSize = ((1136 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell CeilingLightlshade(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &CeilingLightlshade__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell CeilingLightlshade_0__Get__ESD() { return CeilingLightlshade(0); }
#endif

/* end of file */