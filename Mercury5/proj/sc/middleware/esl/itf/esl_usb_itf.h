/**
 *
 * @file    esl_usb_itf.h
 *
 * @brief   This module defines the Enhanced Service Layer interface of USB serivce
 *
 * @author  Kevin Chang
 * @version $Id: esl_usb_itf.h 13504 2008-08-21 13:42:10Z kevin.chang $
 *
 */
#ifndef __ESL_USB_ITF_H__
#define __ESL_USB_ITF_H__


/*--------------------------------------------------------------------------*/
/* INCLUDE FILE                                                             */
/*--------------------------------------------------------------------------*/
#include "vm_types.ht"


/*--------------------------------------------------------------------------*/
/* PREPROCESSOR CONSTANT DEFINITION                                         */
/*--------------------------------------------------------------------------*/
#ifdef DefExtern
#undef DefExtern
#endif
#ifdef __ESL_USB_ITF__
#define	DefExtern
#else
#define	DefExtern	extern
#endif


/*--------------------------------------------------------------------------*/
/* PREPROCESSOR MACRO DEFINITION                                            */
/*--------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------*/
/* TYPE DEFINITION                                                          */
/*--------------------------------------------------------------------------*/

/**
 *  @brief The enumeration defines the return code of the USB interface
 */
typedef enum {
  ESL_USB_OK,                 /**< Function complete successfully */
  ESL_USB_FAIL,               /**< Function common fail */
  ESL_USB_PARAM_ERROR,        /**< The input parameter is wrong */
  ESL_USB_MEM_ALLOC_ERROR,    /**< Can not allocate memory from OS */
  ESL_USB_REJECT,             /**< Request rejected because of other function's confliction */
  ESL_USB_ABORT,              /**< Request aborted because of incorrect sequence */
  ESL_USB_TIMEOUT             /**< Request no response timeout, this error is returned by call back function */
} esl_UsbErrCode_e;

/**
 * @brief The enumeration defines the USB device type of the USB interface function.
 */
typedef enum {
  ESL_USB_NONE,           /**< No USB function */
  ESL_USB_CDC,            /**< Communication Device Class (Modem virtual COM port) */
  ESL_USB_MSC,            /**< Mass Storage Device Class */
  ESL_USB_MTP,            /**< Media Transfer Protocol */
  ESL_USB_PBD,            /**< Picture Bridge Device */
  ESL_USB_VDC_MAIN,       /**< Video Class used for PC camera service with main sensor */
  ESL_USB_VDC_SUB,        /**< Video Class used for PC camera service with sub sensor */
  ESL_USB_OTG             /**< OTG Host */
} esl_UsbDev_e;

/**
 * @brief The enumeration defines the attached USB service.
 */
typedef enum {
  ESL_USB_PCHOST,            /**< USB cable attached for PC host */
  ESL_USB_CHARGING           /**< USB cable is for charging only */
} esl_UsbAttach_e;

/**
 *  @brief The enumeration defines type of the camera notification.
 */
typedef enum {
    ESL_USB_MSC_STOP,            /**< Notify MMI that USB mass storage service stopped from PC side. */
    ESL_USB_VBUS_CONNECT,        /**< Notify MMI that USB VBUS connected. */
    ESL_USB_VBUS_REMOVE,         /**< Notify MMI that USB VBUS removed. */
    ESL_USB_NOTIFY_ALL,
    ESL_USB_NOTIFY_NUM = ESL_USB_NOTIFY_ALL /**< Notify numbers */  
} esl_UsbNotifyType_e;

/**
 *  @brief The enumeration defines webcam light flicker frequency.
 */
typedef enum {
	ESL_USB_WEBCAM_ANTIFLICKER_OFF,     /**< Antiflicker off */
	ESL_USB_WEBCAM_ANTIFLICKER_ON_60HZ, /**< 60Hz light frequency */
	ESL_USB_WEBCAM_ANTIFLICKER_ON_50HZ  /**< 50Hz light frequency */
} esl_UsbWebcamFlicker_e;

/**
 * @brief The sturcture defines the return information of USB service
 */
typedef struct {
  union {
   esl_UsbAttach_e usbAttach;  /**< USB current attached service */
  } param;
} esl_UsbInfo_t;

/**
 *  @brief The structure defines the USB device configure information.
 */
typedef struct {
  esl_UsbWebcamFlicker_e   usbWebcamFlicker;       /**< USB webcam flicker. */     
} esl_UsbDevConfig_t;

/**
 * @brief Call back function, Application needs to provide the function entry 
 *
 * @param senderID      : Sender task ID 
 * @param userValue     : Reference value for indicating different sender in same task or check msg response.
 * @param errCode       : The error return by Multimedia task to know process success or fail.
 * @param pUsbInfo      : Callback information return by USB multi-media driver
 *
 * @return None
 */
typedef void (*esl_UsbCb)(u16 senderID, u32 userValue, esl_UsbErrCode_e errCode, esl_UsbInfo_t *pUsbInfo);

/**
 *  @brief The sturcture defines the notificaiton value for application layer (MMI).
 */
typedef struct {
	esl_UsbNotifyType_e	usbNotifyType;  /**< message primitive */
} esl_UsbNotifyInfo_t;

/**
 *  @brief Notification Call back function, MMI need to provide the function entity 
 *
 * @param senderID		  : Sender task id. 
 * @param userValue      : Reference value for indicating different sender in same task or check msg response.
 * @param pUsbGetInfo : Notification value return by Multimedia task.
 *
 * @return None
 */
typedef void (*esl_UsbNotifyCb)(u16 senderID, u32 userValue, esl_UsbNotifyInfo_t *pUsbGetInfo);

/**
 * @brief The USB service call back function structure definition
 */
typedef struct
{
	u16        senderID;    /**< Sender task ID */	   
	u32        userValue;   /**< Reference value for indicating different sender in same task or check msg response. */
	esl_UsbCb  pfnCb;       /**< Call back function that called by Media task after process finished. */
} esl_UsbCb_t;

/**
 *  @brief Notification callback informatoin structure supported for application layer (MMI)
 */
typedef struct {
	u16              senderID;	 /**< Sender ID */	   
	u32              userValue;  /**< Reference value for indicating different sender in same task or check msg response. */
	esl_UsbNotifyCb  pfnNotifyCb;/**< Notification call back function that called by Media task after receiving the notification. */
} esl_UsbNotifyCb_t;


/*--------------------------------------------------------------------------*/
/* GLOBAL VARIABLE DEFINITION                                               */
/*--------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------*/
/* GLOBAL FUNCTION DEFINITION                                               */
/*--------------------------------------------------------------------------*/


/** 
 * @brief Select the USB device
 *   
 * @param usbDev	                      : USB device class or function to start
 * @param usbDevConfig                  : USB device configure information
 * @param pUsbCb                        : Call back struct pointer, include sender ID, userValue and call back function.
 *
 * @return ESL_USB_OK       				    : Function open request success
 * @return ESL_USB_FAIL                 : Function open request fail
 * @return ESL_USB_PARAM_ERROR          : Incorrect parameter setting
 * @return ESL_USB_MEM_ALLOC_ERROR	    : Can't allocate available memory from OS
 * @return ESL_USB_REJECT               : Request rejected becuase of other function's confliction
 * @return ESL_USB_ABORT                : Request aborted becuase of incorrect sequence 
 * @return ESL_USB_TIMEOUT              : Request no response timeout, this error is returned by call back function
 */
esl_UsbErrCode_e esl_UsbOpenReq(esl_UsbDev_e usbDev, esl_UsbDevConfig_t usbDevConfig, esl_UsbCb_t *pUsbCb);


/** 
 * @brief Close the designate USB device
 *   
 * @param usbDev	                      : USB device class or function to stop
 * @param pUsbCb	                      : Call back struct pointer, include sender ID, userValue and call back function.
 *
 * @return ESL_USB_OK       				    : Function close request success
 * @return ESL_USB_FAIL                 : Function close request fail
 * @return ESL_USB_PARAM_ERROR          : Incorrect parameter setting
 * @return ESL_USB_MEM_ALLOC_ERROR	    : Can't allocate available memory from OS
 * @return ESL_USB_REJECT               : Request rejected becuase of other function's confliction
 * @return ESL_USB_ABORT                : Request aborted becuase of incorrect sequence 
 * @return ESL_USB_TIMEOUT              : Request no response timeout, this error is returned by call back function
 */
esl_UsbErrCode_e esl_UsbCloseReq(esl_UsbDev_e usbDev, esl_UsbCb_t *pUsbCb);


/** 
 * @brief Attach the designate USB service
 *  
 * @param pUsbCb	     : Call back struct pointer, include sender ID, userValue and call back information.
 *                       This function will return which USB service was attached.
 *                       To return the enumeration "ESL_USB_PCHOST" indicates USB cable connect to PC host.
 *                       To return the enumeration "ESL_USB_CHARGING" indicates USB cable connectto charger.
 *
 * @return ESL_USB_OK       				    : Function Attach request success
 * @return ESL_USB_FAIL                 : Function Attach request fail
 * @return ESL_USB_PARAM_ERROR          : Incorrect parameter setting
 * @return ESL_USB_MEM_ALLOC_ERROR	    : Can't allocate available memory from OS
 * @return ESL_USB_REJECT               : Request rejected becuase of other function's confliction
 * @return ESL_USB_ABORT                : Request aborted becuase of incorrect sequence 
 * @return ESL_USB_TIMEOUT              : Request no response timeout, this error is returned by call back function
 */
esl_UsbErrCode_e esl_UsbAttachReq(esl_UsbCb_t *pUsbCb);


/** 
 * @brief Register usb notification.  
 * 
 * @param usbNotifyType    : The type of register notification.
 * @param usbNotifyCb      : Notification call back to inform MMI when Multimedia task receivd notification.
 * @param pUsbCb           : Call back structure, include sender ID, userValue and call back function. 
 *                                       It uses to send response message that provide by application layer(MMI) 
 *                                       to inform application layer(MMI) the process in EMA is success or fail.
 *
 * @return ESL_USB_OK     : Register success.
 * @return ESL_USB_FAIL   : Register fail.
 */
esl_UsbErrCode_e esl_UsbRegNotify(esl_UsbNotifyType_e usbNotifyType, esl_UsbNotifyCb_t usbNotifyCb, esl_UsbCb_t *pUsbCb);


/** 
 * @brief Attach the designate USB service and M2 start polling USB VBUS.
 *   
 * @param pUsbCb	     : Call back struct pointer, include sender ID, userValue and call back information.
 *                       This function will return which USB service was attached.
 *                       To return the enumeration "ESL_USB_PCHost" indicates USB cable connect to PC host.
 *                       To return the enumeration "ESL_USB_Charging" indicates USB cable connectto charger.
 *
 * @return ESL_USB_OK       				    : Function query request success
 * @return ESL_USB_FAIL                 : Function query request fail
 * @return ESL_USB_PARAM_ERROR          : Incorrect parameter setting
 * @return ESL_USB_MEM_ALLOC_ERROR	    : Can't allocate available memory from OS
 * @return ESL_USB_REJECT               : Request rejected becuase of other function's confliction
 * @return ESL_USB_ABORT                : Request aborted becuase of incorrect sequence 
 */
esl_UsbErrCode_e esl_UsbAttachAndPollingReq(esl_UsbCb_t *pUsbCb);


/** 
 * @brief Stop M2 polling USB VBUS.
 *   
 * @param pUsbCb	     : Call back struct pointer, include sender ID, userValue and call back information.
 *                       This function will return which USB service was attached.
 *                       To return the enumeration "ESL_USB_PCHost" indicates USB cable connect to PC host.
 *                       To return the enumeration "ESL_USB_Charging" indicates USB cable connectto charger.
 *
 * @return ESL_USB_OK       				    : Function query request success
 * @return ESL_USB_FAIL                 : Function query request fail
 * @return ESL_USB_PARAM_ERROR          : Incorrect parameter setting
 * @return ESL_USB_MEM_ALLOC_ERROR	    : Can't allocate available memory from OS
 * @return ESL_USB_REJECT               : Request rejected becuase of other function's confliction
 * @return ESL_USB_ABORT                : Request aborted becuase of incorrect sequence 
 */
esl_UsbErrCode_e esl_UsbStopPollingReq(esl_UsbCb_t *pUsbCb);

#endif /* __ESL_USB_ITF_H__ */
