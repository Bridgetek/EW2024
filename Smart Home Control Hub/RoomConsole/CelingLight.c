/*
This file is automatically generated
CelingLight
C Source
*/

#include "CelingLight.h"

#include "Ft_Gpu.h"
#include "CelingLight_progmem.h"

Ft_Esd_BitmapInfo CelingLight__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 185, /* Padded to 186, REPEAT will not work as expected */
	.Height = 23,
	.Format = L4,
	.Stride = 93,
	.Size = 2139,
	.ProgMem = CelingLight_bin,
	.StorageSize = ((997 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell CelingLight(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &CelingLight__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell CelingLight_0__Get__ESD() { return CelingLight(0); }
#endif

/* end of file */
