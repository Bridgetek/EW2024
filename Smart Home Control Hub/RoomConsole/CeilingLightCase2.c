/*
This file is automatically generated
CeilingLightCase2
C Source
*/

#include "CeilingLightCase2.h"

#include "Ft_Gpu.h"
#include "CeilingLightCase2_progmem.h"

Ft_Esd_BitmapInfo CeilingLightCase2__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 133, /* Padded to 134, REPEAT will not work as expected */
	.Height = 26,
	.Format = L4,
	.Stride = 67,
	.Size = 1742,
	.ProgMem = CeilingLightCase2_bin,
	.StorageSize = ((575 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell CeilingLightCase2(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &CeilingLightCase2__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell CeilingLightCase2_0__Get__ESD() { return CeilingLightCase2(0); }
#endif

/* end of file */