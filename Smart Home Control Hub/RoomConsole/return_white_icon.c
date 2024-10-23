/*
This file is automatically generated
return_white_icon
C Source
*/

#include "return_white_icon.h"

#include "Ft_Gpu.h"
#include "return_white_icon_progmem.h"

Ft_Esd_BitmapInfo return_white_icon__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 31, /* Padded to 32, REPEAT will not work as expected */
	.Height = 28,
	.Format = L4,
	.Stride = 16,
	.Size = 448,
	.ProgMem = return_white_icon_bin,
	.StorageSize = ((242 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell return_white_icon(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &return_white_icon__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell return_white_icon_0__Get__ESD() { return return_white_icon(0); }
#endif

/* end of file */
