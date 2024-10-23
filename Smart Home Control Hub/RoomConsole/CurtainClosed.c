/*
This file is automatically generated
CurtainClosed
C Source
*/

#include "CurtainClosed.h"

#include "Ft_Gpu.h"
#include "CurtainClosed_progmem.h"

Ft_Esd_BitmapInfo CurtainClosed__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 64,
	.Height = 55,
	.Format = L2,
	.Stride = 16,
	.Size = 880,
	.ProgMem = CurtainClosed_bin,
	.StorageSize = ((98 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell CurtainClosed(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &CurtainClosed__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell CurtainClosed_0__Get__ESD() { return CurtainClosed(0); }
#endif

/* end of file */
