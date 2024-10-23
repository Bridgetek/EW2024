/*
This file is automatically generated
CurtainOpen
C Source
*/

#include "CurtainOpen.h"

#include "Ft_Gpu.h"
#include "CurtainOpen_progmem.h"

Ft_Esd_BitmapInfo CurtainOpen__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 64,
	.Height = 55,
	.Format = L2,
	.Stride = 16,
	.Size = 880,
	.ProgMem = CurtainOpen_bin,
	.StorageSize = ((102 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell CurtainOpen(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &CurtainOpen__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell CurtainOpen_0__Get__ESD() { return CurtainOpen(0); }
#endif

/* end of file */
