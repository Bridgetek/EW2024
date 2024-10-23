/*
This file is automatically generated
curtain3
C Source
*/

#include "curtain3.h"

#include "Ft_Gpu.h"
#include "curtain3_progmem.h"

Ft_Esd_BitmapInfo curtain3__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 100,
	.Height = 63,
	.Format = PALETTED8,
	.Stride = 100,
	.Size = 6300,
	.ProgMem = curtain3_index_bin,
	.StorageSize = ((833 + 3) >> 2),
	.PaletteProgMem = curtain3_lut_raw,
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell curtain3(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &curtain3__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell curtain3_0__Get__ESD() { return curtain3(0); }
#endif

/* end of file */
