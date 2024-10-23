/*
This file is automatically generated
Esd_Render__h
Simulation wrapper
*/

/* Simulation wrapper for 'Esd_Render_Bitmap' */

#ifdef ESD_SIMULATION
#include <stdlib.h>
#include "Esd_Core.h"

void Esd_Render_Bitmap(int16_t, int16_t, Esd_BitmapCell, esd_argb32_t);

typedef struct
{
	int16_t x;
	int16_t y;
	Esd_BitmapCell bitmapCell;
	esd_argb32_t c;
} Esd_Render_Bitmap__ESD;

void Esd_Render_Bitmap__Set_x__ESD(void *context, int16_t value) { ((Esd_Render_Bitmap__ESD *)context)->x = value; }
void Esd_Render_Bitmap__Set_y__ESD(void *context, int16_t value) { ((Esd_Render_Bitmap__ESD *)context)->y = value; }
void Esd_Render_Bitmap__Set_bitmapCell__ESD(void *context, Esd_BitmapCell value) { ((Esd_Render_Bitmap__ESD *)context)->bitmapCell = value; }
void Esd_Render_Bitmap__Set_c__ESD(void *context, esd_argb32_t value) { ((Esd_Render_Bitmap__ESD *)context)->c = value; }

void *Esd_Render_Bitmap__Create__ESD()
{
	Esd_Render_Bitmap__ESD *context = (Esd_Render_Bitmap__ESD *)esd_malloc(sizeof(Esd_Render_Bitmap__ESD));
	if (context)
	{
		context->x = 0;
		context->y = 0;
		context->bitmapCell = (Esd_BitmapCell){ 0 };
		context->c = 0xffffffffUL;
	}
	else
	{
		eve_printf_debug("Out of memory (Esd_Render_Bitmap__Create__ESD)");
	}
	return context;
}

void Esd_Render_Bitmap__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Esd_Render_Bitmap_Render(Esd_Render_Bitmap__ESD *context)
{
	Esd_Render_Bitmap(context->x, context->y, context->bitmapCell, context->c);
}

#endif /* ESD_SIMULATION */

/* Simulation wrapper for 'Esd_Render_Bitmap_Scaled' */

#ifdef ESD_SIMULATION
#include <stdlib.h>
#include "Esd_Core.h"

void Esd_Render_Bitmap_Scaled(int16_t, int16_t, Esd_BitmapCell, esd_argb32_t, esd_int32_f16_t, esd_int32_f16_t, esd_int32_f16_t, esd_int32_f16_t, int16_t, int16_t);

typedef struct
{
	int16_t x;
	int16_t y;
	Esd_BitmapCell bitmapCell;
	esd_argb32_t c;
	esd_int32_f16_t xscale;
	esd_int32_f16_t yscale;
	esd_int32_f16_t xoffset;
	esd_int32_f16_t yoffset;
	int16_t width;
	int16_t height;
} Esd_Render_Bitmap_Scaled__ESD;

void Esd_Render_Bitmap_Scaled__Set_x__ESD(void *context, int16_t value) { ((Esd_Render_Bitmap_Scaled__ESD *)context)->x = value; }
void Esd_Render_Bitmap_Scaled__Set_y__ESD(void *context, int16_t value) { ((Esd_Render_Bitmap_Scaled__ESD *)context)->y = value; }
void Esd_Render_Bitmap_Scaled__Set_bitmapCell__ESD(void *context, Esd_BitmapCell value) { ((Esd_Render_Bitmap_Scaled__ESD *)context)->bitmapCell = value; }
void Esd_Render_Bitmap_Scaled__Set_c__ESD(void *context, esd_argb32_t value) { ((Esd_Render_Bitmap_Scaled__ESD *)context)->c = value; }
void Esd_Render_Bitmap_Scaled__Set_xscale__ESD(void *context, esd_int32_f16_t value) { ((Esd_Render_Bitmap_Scaled__ESD *)context)->xscale = value; }
void Esd_Render_Bitmap_Scaled__Set_yscale__ESD(void *context, esd_int32_f16_t value) { ((Esd_Render_Bitmap_Scaled__ESD *)context)->yscale = value; }
void Esd_Render_Bitmap_Scaled__Set_xoffset__ESD(void *context, esd_int32_f16_t value) { ((Esd_Render_Bitmap_Scaled__ESD *)context)->xoffset = value; }
void Esd_Render_Bitmap_Scaled__Set_yoffset__ESD(void *context, esd_int32_f16_t value) { ((Esd_Render_Bitmap_Scaled__ESD *)context)->yoffset = value; }
void Esd_Render_Bitmap_Scaled__Set_width__ESD(void *context, int16_t value) { ((Esd_Render_Bitmap_Scaled__ESD *)context)->width = value; }
void Esd_Render_Bitmap_Scaled__Set_height__ESD(void *context, int16_t value) { ((Esd_Render_Bitmap_Scaled__ESD *)context)->height = value; }

void *Esd_Render_Bitmap_Scaled__Create__ESD()
{
	Esd_Render_Bitmap_Scaled__ESD *context = (Esd_Render_Bitmap_Scaled__ESD *)esd_malloc(sizeof(Esd_Render_Bitmap_Scaled__ESD));
	if (context)
	{
		context->x = 0;
		context->y = 0;
		context->bitmapCell = (Esd_BitmapCell){ 0 };
		context->c = 0xffffffffUL;
		context->xscale = (1L * (1L << 16) + 0x0L);
		context->yscale = (1L * (1L << 16) + 0x0L);
		context->xoffset = 0L;
		context->yoffset = 0L;
		context->width = 200;
		context->height = 100;
	}
	else
	{
		eve_printf_debug("Out of memory (Esd_Render_Bitmap_Scaled__Create__ESD)");
	}
	return context;
}

void Esd_Render_Bitmap_Scaled__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Esd_Render_Bitmap_Scaled_Render(Esd_Render_Bitmap_Scaled__ESD *context)
{
	Esd_Render_Bitmap_Scaled(context->x, context->y, context->bitmapCell, context->c, context->xscale, context->yscale, context->xoffset, context->yoffset, context->width, context->height);
}

#endif /* ESD_SIMULATION */

/* Simulation wrapper for 'Esd_Render_Line' */

#ifdef ESD_SIMULATION
#include <stdlib.h>
#include "Esd_Core.h"

typedef struct
{
	int32_t x0;
	int32_t y0;
	int32_t x1;
	int32_t y1;
	int32_t width;
	esd_argb32_t color;
} Esd_Render_Line__ESD;

void Esd_Render_Line__Set_x0__ESD(void *context, int32_t value) { ((Esd_Render_Line__ESD *)context)->x0 = value; }
void Esd_Render_Line__Set_y0__ESD(void *context, int32_t value) { ((Esd_Render_Line__ESD *)context)->y0 = value; }
void Esd_Render_Line__Set_x1__ESD(void *context, int32_t value) { ((Esd_Render_Line__ESD *)context)->x1 = value; }
void Esd_Render_Line__Set_y1__ESD(void *context, int32_t value) { ((Esd_Render_Line__ESD *)context)->y1 = value; }
void Esd_Render_Line__Set_width__ESD(void *context, int32_t value) { ((Esd_Render_Line__ESD *)context)->width = value; }
void Esd_Render_Line__Set_color__ESD(void *context, esd_argb32_t value) { ((Esd_Render_Line__ESD *)context)->color = value; }

void *Esd_Render_Line__Create__ESD()
{
	Esd_Render_Line__ESD *context = (Esd_Render_Line__ESD *)esd_malloc(sizeof(Esd_Render_Line__ESD));
	if (context)
	{
		context->x0 = 0L;
		context->y0 = 0L;
		context->x1 = 60L;
		context->y1 = 20L;
		context->width = 4L;
		context->color = 0xffffffffUL;
	}
	else
	{
		eve_printf_debug("Out of memory (Esd_Render_Line__Create__ESD)");
	}
	return context;
}

void Esd_Render_Line__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Esd_Render_Line_Render(Esd_Render_Line__ESD *context)
{
	Esd_Render_Line(context->x0, context->y0, context->x1, context->y1, context->width, context->color);
}

#endif /* ESD_SIMULATION */

/* Simulation wrapper for 'Esd_Render_LineF' */

#ifdef ESD_SIMULATION
#include <stdlib.h>
#include "Esd_Core.h"

void Esd_Render_LineF(esd_int32_f4_t, esd_int32_f4_t, esd_int32_f4_t, esd_int32_f4_t, esd_int32_f3_t, esd_argb32_t);

typedef struct
{
	esd_int32_f4_t x0;
	esd_int32_f4_t y0;
	esd_int32_f4_t x1;
	esd_int32_f4_t y1;
	esd_int32_f3_t width;
	esd_argb32_t color;
} Esd_Render_LineF__ESD;

void Esd_Render_LineF__Set_x0__ESD(void *context, esd_int32_f4_t value) { ((Esd_Render_LineF__ESD *)context)->x0 = value; }
void Esd_Render_LineF__Set_y0__ESD(void *context, esd_int32_f4_t value) { ((Esd_Render_LineF__ESD *)context)->y0 = value; }
void Esd_Render_LineF__Set_x1__ESD(void *context, esd_int32_f4_t value) { ((Esd_Render_LineF__ESD *)context)->x1 = value; }
void Esd_Render_LineF__Set_y1__ESD(void *context, esd_int32_f4_t value) { ((Esd_Render_LineF__ESD *)context)->y1 = value; }
void Esd_Render_LineF__Set_width__ESD(void *context, esd_int32_f3_t value) { ((Esd_Render_LineF__ESD *)context)->width = value; }
void Esd_Render_LineF__Set_color__ESD(void *context, esd_argb32_t value) { ((Esd_Render_LineF__ESD *)context)->color = value; }

void *Esd_Render_LineF__Create__ESD()
{
	Esd_Render_LineF__ESD *context = (Esd_Render_LineF__ESD *)esd_malloc(sizeof(Esd_Render_LineF__ESD));
	if (context)
	{
		context->x0 = 0L;
		context->y0 = 0L;
		context->x1 = (60L * (1L << 4) + 0x0L);
		context->y1 = (20L * (1L << 4) + 0x0L);
		context->width = (2L * (1L << 3) + 0x0L);
		context->color = 0xffffffffUL;
	}
	else
	{
		eve_printf_debug("Out of memory (Esd_Render_LineF__Create__ESD)");
	}
	return context;
}

void Esd_Render_LineF__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Esd_Render_LineF_Render(Esd_Render_LineF__ESD *context)
{
	Esd_Render_LineF(context->x0, context->y0, context->x1, context->y1, context->width, context->color);
}

#endif /* ESD_SIMULATION */

/* Simulation wrapper for 'Esd_Render_MultiGradient' */

#ifdef ESD_SIMULATION
#include <stdlib.h>
#include "Esd_Core.h"

void Esd_Render_MultiGradient(int16_t, int16_t, int16_t, int16_t, esd_argb32_t, esd_argb32_t, esd_argb32_t, esd_argb32_t);

typedef struct
{
	int16_t x;
	int16_t y;
	int16_t width;
	int16_t height;
	esd_argb32_t topLeft;
	esd_argb32_t topRight;
	esd_argb32_t bottomLeft;
	esd_argb32_t bottomRight;
} Esd_Render_MultiGradient__ESD;

void Esd_Render_MultiGradient__Set_x__ESD(void *context, int16_t value) { ((Esd_Render_MultiGradient__ESD *)context)->x = value; }
void Esd_Render_MultiGradient__Set_y__ESD(void *context, int16_t value) { ((Esd_Render_MultiGradient__ESD *)context)->y = value; }
void Esd_Render_MultiGradient__Set_width__ESD(void *context, int16_t value) { ((Esd_Render_MultiGradient__ESD *)context)->width = value; }
void Esd_Render_MultiGradient__Set_height__ESD(void *context, int16_t value) { ((Esd_Render_MultiGradient__ESD *)context)->height = value; }
void Esd_Render_MultiGradient__Set_topLeft__ESD(void *context, esd_argb32_t value) { ((Esd_Render_MultiGradient__ESD *)context)->topLeft = value; }
void Esd_Render_MultiGradient__Set_topRight__ESD(void *context, esd_argb32_t value) { ((Esd_Render_MultiGradient__ESD *)context)->topRight = value; }
void Esd_Render_MultiGradient__Set_bottomLeft__ESD(void *context, esd_argb32_t value) { ((Esd_Render_MultiGradient__ESD *)context)->bottomLeft = value; }
void Esd_Render_MultiGradient__Set_bottomRight__ESD(void *context, esd_argb32_t value) { ((Esd_Render_MultiGradient__ESD *)context)->bottomRight = value; }

void *Esd_Render_MultiGradient__Create__ESD()
{
	Esd_Render_MultiGradient__ESD *context = (Esd_Render_MultiGradient__ESD *)esd_malloc(sizeof(Esd_Render_MultiGradient__ESD));
	if (context)
	{
		context->x = 0;
		context->y = 0;
		context->width = 0;
		context->height = 0;
		context->topLeft = 0xffff0000UL;
		context->topRight = 0xff00ff00UL;
		context->bottomLeft = 0xff0000ffUL;
		context->bottomRight = 0xff000000UL;
	}
	else
	{
		eve_printf_debug("Out of memory (Esd_Render_MultiGradient__Create__ESD)");
	}
	return context;
}

void Esd_Render_MultiGradient__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Esd_Render_MultiGradient_Render(Esd_Render_MultiGradient__ESD *context)
{
	Esd_Render_MultiGradient(context->x, context->y, context->width, context->height, context->topLeft, context->topRight, context->bottomLeft, context->bottomRight);
}

#endif /* ESD_SIMULATION */

/* Simulation wrapper for 'Esd_Render_MultiGradient_Rounded' */

#ifdef ESD_SIMULATION
#include <stdlib.h>
#include "Esd_Core.h"

void Esd_Render_MultiGradient_Rounded(int16_t, int16_t, int16_t, int16_t, esd_int32_f4_t, uint8_t, esd_rgb32_t, esd_rgb32_t, esd_rgb32_t, esd_rgb32_t);

typedef struct
{
	int16_t x;
	int16_t y;
	int16_t width;
	int16_t height;
	esd_int32_f4_t radius;
	uint8_t alpha;
	esd_rgb32_t topLeft;
	esd_rgb32_t topRight;
	esd_rgb32_t bottomLeft;
	esd_rgb32_t bottomRight;
} Esd_Render_MultiGradient_Rounded__ESD;

void Esd_Render_MultiGradient_Rounded__Set_x__ESD(void *context, int16_t value) { ((Esd_Render_MultiGradient_Rounded__ESD *)context)->x = value; }
void Esd_Render_MultiGradient_Rounded__Set_y__ESD(void *context, int16_t value) { ((Esd_Render_MultiGradient_Rounded__ESD *)context)->y = value; }
void Esd_Render_MultiGradient_Rounded__Set_width__ESD(void *context, int16_t value) { ((Esd_Render_MultiGradient_Rounded__ESD *)context)->width = value; }
void Esd_Render_MultiGradient_Rounded__Set_height__ESD(void *context, int16_t value) { ((Esd_Render_MultiGradient_Rounded__ESD *)context)->height = value; }
void Esd_Render_MultiGradient_Rounded__Set_radius__ESD(void *context, esd_int32_f4_t value) { ((Esd_Render_MultiGradient_Rounded__ESD *)context)->radius = value; }
void Esd_Render_MultiGradient_Rounded__Set_alpha__ESD(void *context, uint8_t value) { ((Esd_Render_MultiGradient_Rounded__ESD *)context)->alpha = value; }
void Esd_Render_MultiGradient_Rounded__Set_topLeft__ESD(void *context, esd_rgb32_t value) { ((Esd_Render_MultiGradient_Rounded__ESD *)context)->topLeft = value; }
void Esd_Render_MultiGradient_Rounded__Set_topRight__ESD(void *context, esd_rgb32_t value) { ((Esd_Render_MultiGradient_Rounded__ESD *)context)->topRight = value; }
void Esd_Render_MultiGradient_Rounded__Set_bottomLeft__ESD(void *context, esd_rgb32_t value) { ((Esd_Render_MultiGradient_Rounded__ESD *)context)->bottomLeft = value; }
void Esd_Render_MultiGradient_Rounded__Set_bottomRight__ESD(void *context, esd_rgb32_t value) { ((Esd_Render_MultiGradient_Rounded__ESD *)context)->bottomRight = value; }

void *Esd_Render_MultiGradient_Rounded__Create__ESD()
{
	Esd_Render_MultiGradient_Rounded__ESD *context = (Esd_Render_MultiGradient_Rounded__ESD *)esd_malloc(sizeof(Esd_Render_MultiGradient_Rounded__ESD));
	if (context)
	{
		context->x = 0;
		context->y = 0;
		context->width = 0;
		context->height = 0;
		context->radius = (4L * (1L << 4) + 0x0L);
		context->alpha = 255;
		context->topLeft = 0xff0012UL;
		context->topRight = 0x31ff00UL;
		context->bottomLeft = 0x6700ffUL;
		context->bottomRight = 0xd1ffUL;
	}
	else
	{
		eve_printf_debug("Out of memory (Esd_Render_MultiGradient_Rounded__Create__ESD)");
	}
	return context;
}

void Esd_Render_MultiGradient_Rounded__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Esd_Render_MultiGradient_Rounded_Render(Esd_Render_MultiGradient_Rounded__ESD *context)
{
	Esd_Render_MultiGradient_Rounded(context->x, context->y, context->width, context->height, context->radius, context->alpha, context->topLeft, context->topRight, context->bottomLeft, context->bottomRight);
}

#endif /* ESD_SIMULATION */

/* Simulation wrapper for 'Esd_Render_Rect' */

#ifdef ESD_SIMULATION
#include <stdlib.h>
#include "Esd_Core.h"

typedef struct
{
	int32_t x;
	int32_t y;
	int32_t width;
	int32_t height;
	int32_t radius;
	esd_argb32_t color;
} Esd_Render_Rect__ESD;

void Esd_Render_Rect__Set_x__ESD(void *context, int32_t value) { ((Esd_Render_Rect__ESD *)context)->x = value; }
void Esd_Render_Rect__Set_y__ESD(void *context, int32_t value) { ((Esd_Render_Rect__ESD *)context)->y = value; }
void Esd_Render_Rect__Set_width__ESD(void *context, int32_t value) { ((Esd_Render_Rect__ESD *)context)->width = value; }
void Esd_Render_Rect__Set_height__ESD(void *context, int32_t value) { ((Esd_Render_Rect__ESD *)context)->height = value; }
void Esd_Render_Rect__Set_radius__ESD(void *context, int32_t value) { ((Esd_Render_Rect__ESD *)context)->radius = value; }
void Esd_Render_Rect__Set_color__ESD(void *context, esd_argb32_t value) { ((Esd_Render_Rect__ESD *)context)->color = value; }

void *Esd_Render_Rect__Create__ESD()
{
	Esd_Render_Rect__ESD *context = (Esd_Render_Rect__ESD *)esd_malloc(sizeof(Esd_Render_Rect__ESD));
	if (context)
	{
		context->x = 0L;
		context->y = 0L;
		context->width = 60L;
		context->height = 20L;
		context->radius = 4L;
		context->color = 0xffffffffUL;
	}
	else
	{
		eve_printf_debug("Out of memory (Esd_Render_Rect__Create__ESD)");
	}
	return context;
}

void Esd_Render_Rect__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Esd_Render_Rect_Render(Esd_Render_Rect__ESD *context)
{
	Esd_Render_Rect(context->x, context->y, context->width, context->height, context->radius, context->color);
}

#endif /* ESD_SIMULATION */

/* Simulation wrapper for 'Esd_Render_RectF' */

#ifdef ESD_SIMULATION
#include <stdlib.h>
#include "Esd_Core.h"

void Esd_Render_RectF(esd_int32_f4_t, esd_int32_f4_t, esd_int32_f4_t, esd_int32_f4_t, esd_int32_f4_t, esd_argb32_t);

typedef struct
{
	esd_int32_f4_t x;
	esd_int32_f4_t y;
	esd_int32_f4_t width;
	esd_int32_f4_t height;
	esd_int32_f4_t radius;
	esd_argb32_t color;
} Esd_Render_RectF__ESD;

void Esd_Render_RectF__Set_x__ESD(void *context, esd_int32_f4_t value) { ((Esd_Render_RectF__ESD *)context)->x = value; }
void Esd_Render_RectF__Set_y__ESD(void *context, esd_int32_f4_t value) { ((Esd_Render_RectF__ESD *)context)->y = value; }
void Esd_Render_RectF__Set_width__ESD(void *context, esd_int32_f4_t value) { ((Esd_Render_RectF__ESD *)context)->width = value; }
void Esd_Render_RectF__Set_height__ESD(void *context, esd_int32_f4_t value) { ((Esd_Render_RectF__ESD *)context)->height = value; }
void Esd_Render_RectF__Set_radius__ESD(void *context, esd_int32_f4_t value) { ((Esd_Render_RectF__ESD *)context)->radius = value; }
void Esd_Render_RectF__Set_color__ESD(void *context, esd_argb32_t value) { ((Esd_Render_RectF__ESD *)context)->color = value; }

void *Esd_Render_RectF__Create__ESD()
{
	Esd_Render_RectF__ESD *context = (Esd_Render_RectF__ESD *)esd_malloc(sizeof(Esd_Render_RectF__ESD));
	if (context)
	{
		context->x = 0L;
		context->y = 0L;
		context->width = (60L * (1L << 4) + 0x0L);
		context->height = (20L * (1L << 4) + 0x0L);
		context->radius = (4L * (1L << 4) + 0x0L);
		context->color = 0xffffffffUL;
	}
	else
	{
		eve_printf_debug("Out of memory (Esd_Render_RectF__Create__ESD)");
	}
	return context;
}

void Esd_Render_RectF__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Esd_Render_RectF_Render(Esd_Render_RectF__ESD *context)
{
	Esd_Render_RectF(context->x, context->y, context->width, context->height, context->radius, context->color);
}

#endif /* ESD_SIMULATION */

/* end of file */