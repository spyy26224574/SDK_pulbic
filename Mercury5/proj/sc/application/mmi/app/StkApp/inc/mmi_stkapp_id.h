#ifndef __MMI_STKAPP_ID_H__
#define __MMI_STKAPP_ID_H__

typedef enum StkappWndId_e_
{
    STKAPP_WND_SHOWTITLETEXT = WND_ID_APP_BASE,
    STKAPP_WND_SHOWMENU,
    STKAPP_WND_WAIT,
    STKAPP_WND_CALLNOTIFY,
    STKAPP_WND_DISPLAYTEXT,
    STKAPP_WND_GETINPUTSHOWTEXT,
    STKAPP_WND_GETINPUTEDIT,
    STKAPP_WND_GETINPUTEDITOPTION,
    STKAPP_WND_GETINPUTYESNO,
    STKAPP_WND_SELECTITEM,
    STKAPP_WND_SENDDATA,
    STKAPP_WND_PLAYTONE,
    STKAPP_WND_REFRESH,
} StkappWndId_e;

typedef enum StkAppRcId_e_
{
    STKAPP_RCID_DRAWTEXT,
    STKAPP_RCID_LOADMENU,
    STKAPP_RCID_LAUNCHEDITOR,
    STKAPP_RCID_LAUNCHEDITOROPTION,
} StkAppRcId_e;

typedef enum
{
	MNU_STKAPP_INPUT_MENU = 0,
}STKMenuId_e;

#endif //__MMI_STKAPP_ID_H__
