
/*-----------------------------------------------------------------------------
*
* Copyright (c) 2011 MStar Semiconductor, Inc.  All rights reserved.
*
*-----------------------------------------------------------------------------
* FILE
*      mmi_fishfury_helpscene.h
*
*
* HISTORY
*      2012.01.05       Andy Wang         Initial Version
*
*-----------------------------------------------------------------------------*/

#ifndef __MMI_FISHFURYGAME_HELPSCENE_INC__
#define __MMI_FISHFURYGAME_HELPSCENE_INC__


/*------------------------------------------------------------------------------
Include Files
-------------------------------------------------------------------------------*/
#include "mmi_pgl_headers.h"

#include "mgl_Scene_Environment.h"
#include "mmi_fishfurygame_priv.h"


/*------------------------------------------------------------------------------
Macro
-------------------------------------------------------------------------------*/
#define CONFIRM_ICON_WIDTH  36
#define CONFIRM_ICON_HEIGHT 36
#define CONFIRM_POS_X           359
#define CONFIRM_POS_Y           224

/*------------------------------------------------------------------------------
Data Type
-------------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
Global Variables
-------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
Global Function
-------------------------------------------------------------------------------*/
pgl_void FishFury_HelpScene_OnFocus(EngineHandleID engineID, SceneHandleID nSceneID, void *userData);
#endif