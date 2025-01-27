/*
This file is automatically generated
curtain_open_home3
C Source
*/

#include "curtain_open_home3.h"

#include "Ft_Gpu.h"
#include "curtain_open_home3_progmem.h"

Ft_Esd_BitmapInfo curtain_open_home3__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 100,
	.Height = 66,
	.Format = PALETTED8,
	.Stride = 100,
	.Size = 6600,
	.ProgMem = curtain_open_home3_index_bin,
	.StorageSize = ((1671 + 3) >> 2),
	.PaletteProgMem = curtain_open_home3_lut_raw,
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell curtain_open_home3(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &curtain_open_home3__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell curtain_open_home3_0__Get__ESD() { return curtain_open_home3(0); }
#endif

/* end of file */
