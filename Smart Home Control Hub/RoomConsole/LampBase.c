/*
This file is automatically generated
LampBase
C Source
*/

#include "LampBase.h"

#include "Ft_Gpu.h"
#include "LampBase_progmem.h"

Ft_Esd_BitmapInfo LampBase__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 77, /* Padded to 78, REPEAT will not work as expected */
	.Height = 62,
	.Format = L4,
	.Stride = 39,
	.Size = 2418,
	.ProgMem = LampBase_bin,
	.StorageSize = ((747 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell LampBase(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &LampBase__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell LampBase_0__Get__ESD() { return LampBase(0); }
#endif

/* end of file */