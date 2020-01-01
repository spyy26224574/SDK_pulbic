#ifndef __MMI_PICVIEWERAPP_ID_H__
#define __MMI_PICVIEWERAPP_ID_H__

#ifdef __APP_MMI_SMALLROM__
#define __PICVIEWERAPP_SMALLROM__
#endif

typedef enum
{
    PICVIEWER_WND_VIEW = WND_ID_APP_BASE,
#ifdef __MMI_PICVIEWER_ZOOM_ENABLE__
    PICVIEWER_WND_ZOOM,
#endif
    PICVIEWER_WND_SETWALLPAPER,
    PICVIEWER_WND_DETAILS,
#ifdef __MMI_PICVIEWER_SLIDESHOW_ENABLE__
    PICVIEWER_WND_SLIDESHOW,
#endif
    PICVIEWER_WND_SETAS,
#ifdef __PICVIEWERAPP_SMALLROM__
    PICVIEWER_WND_OPTION,
#endif
} PicViewerWndId_e;

typedef enum
{
#ifdef __MMI_PICVIEWER_SET_CONTACT_ENABLE__
    MNU_PICVIEWER_SET_AS_CONTACT,
#endif
    MNU_PICVIEWER_SET_AS_WALLPAPER,
#ifdef __USER_DEFINE_POWERONOFF_ANIM__
    MNU_PICVIEWER_SET_AS_POWERON_ANIM,
    MNU_PICVIEWER_SET_AS_POWEROFF_ANIM,
#ifdef __APP_MMI_SCREENSAVER__
    MNU_PICVIEWER_SET_AS_SCREENSAVER_ANIM,
#endif
#endif
}PicViewerMenuId_e;


typedef enum
{
    PV_DISPLAY_DUMMYWDG = APP_WDG_START,
    PV_DISPLAY_TRANSITIONWDG,
    PV_DISPLAY_IMAGEWDG,
#ifndef __PICVIEWERAPP_SMALLROM__
    PV_DISPLAY_ACTION_BAR_BG_IMAGEWDG,
#endif
    PV_DISPLAY_PREVIOUS_BUTTONWDG,
    PV_DISPLAY_NEXT_BUTTONWDG,
#ifndef __PICVIEWERAPP_SMALLROM__
#ifdef __MMI_PICVIEWER_SLIDESHOW_ENABLE__
    PV_DISPLAY_SLIDESHOW_BUTTONWDG,
#endif
    PV_DISPLAY_BACK_BUTTONWDG,
    PV_DISPLAY_DELETE_LSK_BUTTONWDG,
    PV_DISPLAY_OPTION_BUTTONWDG,
    PV_DISPLAY_OK_BUTTONWDG,
    PV_DISPLAY_BLOG_BUTTONWDG,
#endif
    PV_DISPLAY_PIC_IDX_TEXTWDG,
#ifndef __PICVIEWERAPP_SMALLROM__
    PV_DISPLAY_MENUWDG,
    PV_DISPLAY_SELECT_BUTTONWDG
#endif
} PicViewerDisplayViewWdgId_e;

typedef enum
{
    PV_LANDSCAPEDISPLAY_DUMMYWDG = APP_WDG_START,
    PV_LANDSCAPEDISPLAY_TRANSITIONWDG,
    PV_LANDSCAPEDISPLAY_IMAGEWDG,
#ifndef __PICVIEWERAPP_SMALLROM__
    PV_LANDSCAPEDISPLAY_ACTION_BAR_BG_IMAGEWDG,
    PV_LANDSCAPEDISPLAY_BACK_BUTTONWDG,
#endif
    PV_LANDSCAPEDISPLAY_PREVIOUS_BUTTONWDG,
    PV_LANDSCAPEDISPLAY_NEXT_BUTTONWDG,
#ifndef __PICVIEWERAPP_SMALLROM__
    PV_LANDSCAPEDISPLAY_DELETE_LSK_BUTTONWDG,
#endif
    PV_LANDSCAPEDISPLAY_PIC_IDX_TEXTWDG
} PicViewerLandscapeDisplayViewWdgId_e;

#ifdef __MMI_PICVIEWER_SLIDESHOW_ENABLE__
typedef enum
{
    PV_SLIDESHOW_DUMMYWDG = APP_WDG_START,
    PV_SLIDESHOW_TRANSITIONWDG,
    PV_SLIDESHOW_IMAGEWDG
} PicViewerSlideShowWdgId_e;
#endif

typedef enum
{
    PV_WALLPAPER__ABSCONTAINER = APP_WDG_START,
    PV_WALLPAPER_IMAGEWDG,
    PV_WALLPAPER_ZONE_BITMAPWDG,
#ifndef __PICVIEWERAPP_SMALLROM__
    PV_WALLPAPER_ZOOM_IN_BUTTONWDG,
    PV_WALLPAPER_ZOOM_OUT_BUTTONWDG,
    PV_WALLPAPER_ACTION_BAR_BG_IMAGEWDG,
    PV_WALLPAPER_BACK_BUTTONWDG,
    PV_WALLPAPER_SET_BUTTONWDG,
    PV_WALLPAPER_ZOOM_SWITCH_BUTTONWDG
#endif
} PicViewerSetWallpaperWdgId_e;

typedef enum
{
    PV_ZOOM__ABSCONTAINER = APP_WDG_START,
    PV_ZOOM_IMAGEWDG,
    PV_ZOOM_VIEWPORTWDG,
    PV_ZOOM_SCROLLINDICATORWDG,
#ifndef __PICVIEWERAPP_SMALLROM__
    PV_ZOOM_ACTION_BAR_BG_IMAGEWDG,
    PV_ZOOM_IN_BUTTONWDG,
    PV_ZOOM_BACK_BUTTONWDG,
    PV_ZOOM_OUT_BUTTONWDG
#endif
} PicViewerZoomWdgId_e;

#endif //__MMI_PICVIEWERAPP_ID_H__
