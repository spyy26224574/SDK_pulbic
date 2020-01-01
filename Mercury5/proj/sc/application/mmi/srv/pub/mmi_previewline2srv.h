/**
* @file mmi_previewline2srv.h
*
* Service without using State Machine - PREVIEWLINE2SRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_PREVIEWLINE2SRV
* Interface Id: IID_PREVIEWLINE2SRV
*
* @version $Id: mmi_previewline2srv.h 33461 2009-06-16 08:06:40Z mark.yang $
*/
#ifndef __MMI_PREVIEWLINE2SRV_H__
#define __MMI_PREVIEWLINE2SRV_H__

/*-------------------------------------------------------------------------*/

#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"
#include "mae_menulabel.h"
#include "mmi_mae_menumodel.h"
#include "mmi_mae_image.h"
#include "mmi_cfgsrv.h"
#include "mmi_alarmsrv.h"
#include "mmi_common_content.h"

typedef void (*PREVIEWLINE2_CALLBACKFUNC_PTR) (IBase *pOwner, MAE_WChar *pWChar);
#define SET_MAX_PREVIEW_LINE2_CHARS 30
#define CUSTOMID_AUTOPOWERON   (0)
#define CUSTOMID_AUTOPOWEROFF  (1)

typedef struct Line2PrvData_TAG
{
    MAE_WChar **ppPreviewBuf;
}Line2PrvData_t;


typedef struct Line2PrvInitData_TAG
{
    MenuItemId_e eMenuItemID;
    boolean bUseSettingValue;
    u32 u32SettingValue;
    void *pData;
    PREVIEWLINE2_CALLBACKFUNC_PTR pPreviewLine2CallBackFunc;
}Line2PrvInitData_t;

/**************************************************************/
//For Setting AP
/**************************************************************/
//For Preview Menu List
typedef struct SET_PML_MODEL_ITEM_TAG
{
    MenuModelData_t stMenuModelData;
    u32 u32NextFormType;
    u32 u32ViewID;
}SET_PML_MODEL_ITEM_t;

//For Generic Radio Button List
typedef struct SET_GRBL_MODEL_ITEM_TAG
{
    MenuModelData_t stMenuModelData;
    u32 u32CFGItemValue;
}SET_GRBL_MODEL_ITEM_t;

//For Backlight level
typedef struct SET_BKL_LEVEL_MODEL_ITEM_TAG
{
    IImage *pImage;
    u32 u32Level;
}SET_BKL_LEVEL_MODEL_ITEM_t;


//For Ring tone Volume
typedef struct SET_VOLUME_MODEL_ITEM_TAG
{
    IImage *pImage;
    u32 u32VolumeLevel;
}SET_VOLUME_MODEL_ITEM_t;

//Display Language
typedef struct SET_DISPLAYLANG_MODEL_ITEM_TAG
{
    MenuModelData_t stMenuModelData;
    u32 eLangCode;
}SET_DISPLAYLANG_MODEL_ITEM_t;


//Writing Language
typedef struct SET_WRITINGLANG_MODEL_ITEM_TAG
{
    MenuModelData_t stMenuModelData;
    u32 eLangCode;
}SET_WRITINGLANG_MODEL_ITEM_t;


//Input Method
typedef struct SET_InputMethod_MODEL_ITEM_TAG
{
    MenuModelData_t stMenuModelData;
    u32 eInputMethodCode;
}SET_INPUTMETHOD_MODEL_ITEM_t;

//Layout menu model item
typedef struct SET_LAYOUT_MODEL_ITEM_TAG
{
    MenuModelData_t stMenuModelData;
    u32 u32layoutSetting;
}SET_LAYOUT_MODEL_ITEM_t;

#ifdef __UI_STYLE_MMI_MAIN_MENU_ANIMATION__
//Animation menu model item
typedef struct SET_ANIMATION_MODEL_ITEM_TAG
{
    MenuModelData_t stMenuModelData;
    u32 u32AnimationSetting;
}SET_ANIMATION_MODEL_ITEM_t;
#endif //#ifdef __UI_STYLE_MMI_MAIN_MENU_ANIMATION__


typedef struct CFGInfo_TAG
{
    MenuItemId_e eMenuItemID;
    CFGItemID_e eCFGItemID;
    u16 u16CFGItemSize;
}CFGInfo_t;

typedef struct ContentInfo_TAG
{
    MenuItemId_e eMenuItemID;
    CFGItemID_e eCFGItemID;
    u32 eTitleTextId;
    MMI_Common_Location_Type_e eLocType;
}ContentInfo_t;

typedef struct SOptionInfo_TAG
{
    MenuItemId_e eMenuItemID;
    CFGItemID_e eCFGItemID;
}SOptionInfo_t;

typedef struct CFGItemData_TAG
{
    u32 datasize;
    union
    {
        u8 dataval1;
        u16 dataval2;
        u32 dataval4;
    }value;
}CFGItemData_t;
/**************************************************************/
/**************************************************************/
MAE_Ret SETTING_GetContentInfo(MenuItemId_e eMenuItemID, const ContentInfo_t **ppstContentInfo);
MAE_Ret SETTING_GetCFGInfo(MenuItemId_e eMenuItemID, const CFGInfo_t **ppstCFGInfo);
MAE_Ret SETTING_CFGData_InitData(CFGItemData_t *pCFGData, u32 nSize, u32 nValue);
MAE_Ret SETTING_CFGData_SetData(CFGItemData_t *pCFGData, u32 nValue);
MAE_Ret SETTING_CFGData_GetData(CFGItemData_t *pCFGData, u32 *nValue);
void *SETTING_CFGData_GetDataPtr(CFGItemData_t *pCFGData);

/*-------------------------------------------------------------------------*/

/**
 * External Events
 */


/**
 * IPREVIEWLINE2SRV Interfaces
 */
#define INHERIT_IPREVIEWLINE2SRV(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret     (*Init)     ( IName * , Line2PrvInitData_t *pstLine2PrvInitData);  \
    MAE_Ret     (*Update)       ( IName * , Line2PrvData_t *pstLine2PrvData);  \
    MAE_Ret     (*UpdateNextandSave)        ( IName * , Line2PrvData_t *pstLine2PrvData);  \
    MAE_Ret     (*GetMenuItemID)        ( IName * , MenuItemId_e *peMenuItemID);  \
    void        (*ReleaseResource)      ( IName * )

DEFINE_INTERFACE(IPREVIEWLINE2SRV);


#define IPREVIEWLINE2SRV_QueryInterface(pICntlr, id, pp, po)            GET_FUNCTBL((pICntlr), IPREVIEWLINE2SRV)->QueryInterface(pICntlr, id, pp, po)
#define IPREVIEWLINE2SRV_HandleEvent(pICntlr, e, p1, p2)                GET_FUNCTBL((pICntlr), IPREVIEWLINE2SRV)->HandleEvent(pICntlr, e, p1, p2)
/**
 IPREVIEWLINE2SRV_Init
@brief  The interface is used to set initial data to previewline2 service

@param[in]     pIPREVIEWLINE2SRV                Pointer to the IPREVIEWLINE2SRV interface.
@param[in]     pstLine2PrvInitData                      The place to holder initial data.


@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_BAD_PARAM    If parameter error.
@return MAE_RET_FAILED              If an error happen.
 */
#define IPREVIEWLINE2SRV_Init(pICntlr, p1)  GET_FUNCTBL((pICntlr), IPREVIEWLINE2SRV)->Init( pICntlr, p1)
/**
 IPREVIEWLINE2SRV_Update
@brief  The interface is used to
fill string in text buffer which is created by client AP

@param[in]     pIPREVIEWLINE2SRV             Pointer to the IPREVIEWLINE2SRV interface.
@param[in]     pstLine2PrvData                        The place to holder preview data(Previewbuffer and buffer size).

@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_BAD_PARAM    If parameter error.
@return MAE_RET_FAILED              If an error happen.
 */
#define IPREVIEWLINE2SRV_Update(pICntlr, p1)    GET_FUNCTBL((pICntlr), IPREVIEWLINE2SRV)->Update( pICntlr, p1)
/**
 IPREVIEWLINE2SRV_UpdateNextandSave
@brief  The interface is used to set setting to next value(ex. ON->OFF, OFF->ON)
and fill corresponding string in text buffer which is created by client AP

@param[in]     pIPREVIEWLINE2SRV             Pointer to the IPREVIEWLINE2SRV interface.
@param[in]     pstLine2PrvData                        The place to holder preview data(Previewbuffer and buffer size).

@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_BAD_PARAM    If parameter error.
@return MAE_RET_FAILED              If an error happen.
 */
#define IPREVIEWLINE2SRV_UpdateNextandSave(pICntlr, p1) GET_FUNCTBL((pICntlr), IPREVIEWLINE2SRV)->UpdateNextandSave( pICntlr, p1)
/**
 IPREVIEWLINE2SRV_GetMenuItemID
@brief  The interface is used to get menu item ID which is set by function call "IPREVIEWLINE2SRV_Init".

@param[in]     pIPREVIEWLINE2SRV             Pointer to the IPREVIEWLINE2SRV interface.
@param[in]     peMenuItemID                           The place to holder Menu Item ID.

@return MAE_RET_SUCCESS           If successful.
@return MAE_RET_BAD_PARAM    If parameter error.
@return MAE_RET_FAILED              If an error happen.
 */
#define IPREVIEWLINE2SRV_GetMenuItemID(pICntlr, p1) GET_FUNCTBL((pICntlr), IPREVIEWLINE2SRV)->GetMenuItemID( pICntlr, p1)
/**
 Notice:This function is not called by user.
 */
#define IPREVIEWLINE2SRV_ReleaseResource(pICntlr)   GET_FUNCTBL((pICntlr), IPREVIEWLINE2SRV)->ReleaseResource( pICntlr)



/**
 * Functions
 */

void PREVIEWLINE2SRV_Init(void);

MAE_Ret PREVIEWLINE2SRV_New(MAE_ClsId id, void **ppObj);

/*-------------------------------------------------------------------------*/
#endif /* __MMI_PREVIEWLINE2SRV_H__ */