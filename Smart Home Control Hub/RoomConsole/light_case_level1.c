/*
This file is automatically generated
light_case_level1
C Source
*/

#include "light_case_level1.h"

#include "Ft_Gpu.h"
#include "light_case_level1_progmem.h"

Ft_Esd_BitmapInfo light_case_level1__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 56,
	.Height = 48,
	.Format = PALETTED8,
	.Stride = 56,
	.Size = 2688,
	.ProgMem = light_case_level1_index_bin,
	.StorageSize = ((700 + 3) >> 2),
	.PaletteProgMem = light_case_level1_lut_raw,
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell light_case_level1(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &light_case_level1__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell light_case_level1_0__Get__ESD() { return light_case_level1(0); }
#endif

/* end of file */