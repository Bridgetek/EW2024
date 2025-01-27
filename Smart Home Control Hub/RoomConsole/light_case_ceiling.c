/*
This file is automatically generated
light_case_ceiling
C Source
*/

#include "light_case_ceiling.h"

#include "Ft_Gpu.h"
#include "light_case_ceiling_progmem.h"

Ft_Esd_BitmapInfo light_case_ceiling__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 186, /* Padded to 188, REPEAT will not work as expected */
	.Height = 94,
	.Format = L2,
	.Stride = 47,
	.Size = 4418,
	.ProgMem = light_case_ceiling_bin,
	.StorageSize = ((432 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell light_case_ceiling(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &light_case_ceiling__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell light_case_ceiling_0__Get__ESD() { return light_case_ceiling(0); }
#endif

/* end of file */
