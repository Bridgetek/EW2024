/*
This file is automatically generated
LightPage1
C Source
*/

#include "LightPage1.h"

#include "Ft_Gpu.h"
#include "LightPage1_progmem.h"

Ft_Esd_BitmapInfo LightPage1__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 480,
	.Height = 480,
	.Format = PALETTED8,
	.Stride = 480,
	.Size = 230400,
	.ProgMem = LightPage1_index_bin,
	.StorageSize = ((20230 + 3) >> 2),
	.PaletteProgMem = LightPage1_lut_raw,
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell LightPage1(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &LightPage1__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell LightPage1_0__Get__ESD() { return LightPage1(0); }
#endif

/* end of file */