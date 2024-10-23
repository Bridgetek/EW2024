/*
This file is automatically generated
curtain_close_home
C Source
*/

#include "curtain_close_home.h"

#include "Ft_Gpu.h"
#include "curtain_close_home_progmem.h"

Ft_Esd_BitmapInfo curtain_close_home__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 100,
	.Height = 100,
	.Format = PALETTED8,
	.Stride = 100,
	.Size = 10000,
	.ProgMem = curtain_close_home_index_bin,
	.StorageSize = ((560 + 3) >> 2),
	.PaletteProgMem = curtain_close_home_lut_raw,
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell curtain_close_home(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &curtain_close_home__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell curtain_close_home_0__Get__ESD() { return curtain_close_home(0); }
#endif

/* end of file */