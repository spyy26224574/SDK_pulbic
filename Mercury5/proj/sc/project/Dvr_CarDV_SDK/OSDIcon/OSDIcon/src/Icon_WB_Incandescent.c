/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        �C/GUI-BitmapConvert V3.96.
*        Compiled Jul 19 2005, 13:50:35
*          (c) 2002-2005  Micrium, Inc.
  www.micrium.com

  (c) 1998-2005  Segger
  Microcontroller Systeme GmbH
  www.segger.com
*
**********************************************************************
*
* Source file: Icon_WB_Incandescent
* Dimensions:  24 * 32
* NumColors:   10
*
**********************************************************************
*/

#include "stdlib.h"

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_WB_Incandescent[] = {
     0xFF00FF,0xFFFFFF,0x030303,0xFFFFFF
    ,0x030303,0xFE00FE,0xFEFEFE,0xFFFFFF
    ,0xFCFCFC,0x030303
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_WB_Incandescent = {
  10,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsIcon_WB_Incandescent[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_WB_Incandescent[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x99, 0x22, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x88, 0x81, 0x82, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x88, 0x81, 0x82, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x82, 0x29, 0x82, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x82, 0x29, 0x82, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x28, 0x20, 0x00, 0x28, 0x20, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0x21, 0x20, 0x00, 0x21, 0x22, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0x89, 0x00, 0x00, 0x09, 0x82, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0x89, 0x00, 0x00, 0x09, 0x82, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0x89, 0x00, 0x00, 0x09, 0x82, 0x00, 0x00, 0x00,
  0x00, 0x92, 0x22, 0x22, 0x89, 0x00, 0x00, 0x09, 0x82, 0x22, 0x22, 0x90,
  0x00, 0x98, 0x88, 0x12, 0x89, 0x00, 0x00, 0x02, 0x82, 0x18, 0x88, 0x90,
  0x00, 0x92, 0x22, 0x22, 0x21, 0x20, 0x00, 0x21, 0x22, 0x22, 0x22, 0x90,
  0x00, 0x00, 0x00, 0x22, 0x28, 0x22, 0x29, 0x28, 0x22, 0x20, 0x00, 0x00,
  0x00, 0x00, 0x09, 0x28, 0x29, 0x88, 0x81, 0x82, 0x28, 0x99, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x82, 0x21, 0x92, 0x99, 0x91, 0x22, 0x82, 0x00, 0x00,
  0x00, 0x00, 0x22, 0x22, 0x21, 0x92, 0x89, 0x91, 0x22, 0x22, 0x20, 0x00,
  0x00, 0x00, 0x28, 0x22, 0x21, 0x92, 0x89, 0x91, 0x12, 0x28, 0x20, 0x00,
  0x00, 0x00, 0x22, 0x92, 0x82, 0x02, 0x89, 0x02, 0x82, 0x92, 0x20, 0x00,
  0x00, 0x00, 0x00, 0x22, 0x89, 0x02, 0x89, 0x09, 0x82, 0x20, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x28, 0x20, 0x02, 0x89, 0x00, 0x28, 0x20, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x22, 0x20, 0x02, 0x89, 0x00, 0x22, 0x20, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_WB_Incandescent = {
  24, /* XSize */
  32, /* YSize */
  12, /* BytesPerLine */
  4, /* BitsPerPixel */
  acIcon_WB_Incandescent,  /* Pointer to picture data (indices) */
  &PalIcon_WB_Incandescent  /* Pointer to palette */
};

/* *** End of file *** */