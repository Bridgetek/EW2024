/*
This file is automatically generated
LampChasis1
C Source
*/

#include "LampChasis1.h"

#include "Ft_Gpu.h"
#include "LampChasis1_progmem.h"

Ft_Esd_BitmapInfo LampChasis1__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 146,
	.Height = 7,
	.Format = L4,
	.Stride = 73,
	.Size = 511,
	.ProgMem = LampChasis1_bin,
	.StorageSize = ((215 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell LampChasis1(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &LampChasis1__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell LampChasis1_0__Get__ESD() { return LampChasis1(0); }
#endif

/* end of file */