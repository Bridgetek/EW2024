/*
This file is automatically generated
FloorHeatOn
C Source
*/

#include "FloorHeatOn.h"

#include "Ft_Gpu.h"
#include "FloorHeatOn_progmem.h"

Ft_Esd_BitmapInfo FloorHeatOn__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 83,
	.Height = 52,
	.Format = PALETTED8,
	.Stride = 83,
	.Size = 4316,
	.ProgMem = FloorHeatOn_index_bin,
	.StorageSize = ((1719 + 3) >> 2),
	.PaletteProgMem = FloorHeatOn_lut_raw,
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell FloorHeatOn(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &FloorHeatOn__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell FloorHeatOn_0__Get__ESD() { return FloorHeatOn(0); }
#endif

/* end of file */
