/* ###################################################################
**     Filename    : Events.c
**     Project     : PersonalCloud
**     Processor   : MK64FN1M0VLQ12
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-02-10, 13:55, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Cpu_OnNMI - void Cpu_OnNMI(void);
**
** ###################################################################*/
/*!
** @file Events.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         
/* MODULE Events */

#include "Cpu.h"
#include "Events.h"
#include "Init_Config.h"
#include "PDD_Includes.h"

#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */

/*
** ===================================================================
**     Event       :  Cpu_OnNMI (module Events)
**
**     Component   :  Cpu [MK64FN1M0LQ12]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMI(void)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  USB_OnHostDeviceDeattach (module Events)
**
**     Component   :  USB [USB_LDD]
*/
/*!
**     @brief
**         Called after the device has been successfully attached (see
**         OnResetRecovery() event) and the deattach condition is
**         detected,  OnDeattach() event is enabled and USB module is
**         enabled. See SetEventMask() and GetEventMask() methods.
**     @param
**         UserDataPtr     - User data pointer. This
**                           pointer is passed as the parameter of Init
**                           method.
*/
/* ===================================================================*/
void USB_OnHostDeviceDeattach(LDD_TUserData *UserDataPtr)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  USB_OnHostResetRecovery (module Events)
**
**     Component   :  USB [USB_LDD]
*/
/*!
**     @brief
**         Called 10 ms later (reset recovery time) after the reset
**         signaling is stopped, OnResetRecovery() event is enabled and
**         USB module is enabled. See SetEventMask() and GetEventMask()
**         methods. As soon as this event is invoked attached device
**         can be accessed by the SendXX()/RecvXX() methods.
**     @param
**         UserDataPtr     - User data pointer. This
**                           pointer is passed as the parameter of Init
**                           method.
**     @param
**         CurrentSpeed    - Current device speed.
*/
/* ===================================================================*/
void USB_OnHostResetRecovery(LDD_TUserData *UserDataPtr, LDD_USB_TBusSpeed CurrentSpeed)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  USB_OnHostResumeRecovery (module Events)
**
**     Component   :  USB [USB_LDD]
*/
/*!
**     @brief
**         Called 10 ms later (resume recovery time) after the resume
**         signaling is stopped, OnResumeRecovery() event is enabled
**         and USB module is enabled. See SetEventMask() and
**         GetEventMask() methods. As soon as this event is invoked
**         attached device can be accessed by the SendXX()/RecvXX()
**         methods.
**     @param
**         UserDataPtr     - User data pointer. This
**                           pointer is passed as the parameter of Init
**                           method.
*/
/* ===================================================================*/
void USB_OnHostResumeRecovery(LDD_TUserData *UserDataPtr)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  USB_OnSignalChange (module Events)
**
**     Component   :  USB [USB_LDD]
*/
/*!
**     @brief
**         Called after the output signals (DP+- pull-up,DP+- pull-down,
**         VBUS enable, VBUS charge, VBUS discharge) state have changed
**         , OnSignalStateChange() event is enabled and USB module is
**         enabled. See SetEventMask() and GetEventMask() methods.
**         The state machine changed these signals. In some
**         implementations the signals are handled internally(e.g.
**         internal pull up/down) or are connected to the pin. This
**         event can be used in the case of external HW providing
**         requested functionality.
**         Read only - This event is enabled only if at least one
**         "output pin" property (e.g. VBUS enable  selects
**         "XXX_signal" value and is disabled if no signal is used.
**     @param
**         UserDataPtr     - User data pointer. This
**                           pointer is passed as the parameter of Init
**                           method.
**     @param
**         SignalMask      - Mask of signal(s) with a new
**                           value.
**     @param
**         SignalValue     - New value of the signal(s)
*/
/* ===================================================================*/
void USB_OnSignalChange(LDD_TUserData *UserDataPtr, LDD_TPinMask SignalMask, LDD_TPinMask SignalValue)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  ETH_OnFrameTransmitted (module Events)
**
**     Component   :  ETH [Ethernet_LDD]
*/
/*!
**     @brief
**         This event is called after the whole frame on the head of
**         the internal frame queue has been sent and removed from the
**         queue. The event is available only if IEEE 1588 is disabled.
**     @param
**         UserDataPtr     - Pointer to user data
**                           structure pointer.
*/
/* ===================================================================*/
void ETH_OnFrameTransmitted(LDD_TUserData *UserDataPtr)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  ETH_OnFrameReceived (module Events)
**
**     Component   :  ETH [Ethernet_LDD]
*/
/*!
**     @brief
**         This event is called after the whole frame on the head of
**         the internal frame queue has been received and removed from
**         the queue. The event is available only if IEEE 1588 is
**         disabled.
**     @param
**         UserDataPtr     - Pointer to user data
**                           structure pointer.
**     @param
**         FragCount       - Received frame fragment count
**                           (the number of buffers used to store the
**                           frame data).
**     @param
**         Length          - Received frame length.
*/
/* ===================================================================*/
void ETH_OnFrameReceived(LDD_TUserData *UserDataPtr, uint16_t FragCount, uint16_t Length)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  ETH_OnFatalError (module Events)
**
**     Component   :  ETH [Ethernet_LDD]
*/
/*!
**     @brief
**         This event is called when a fatal error has occurred (i.e.
**         ethernet bus error). The device should be reinitialized
**         during this event (Deinit and Init methods should be called).
**     @param
**         UserDataPtr     - Pointer to user data
**                           structure pointer.
*/
/* ===================================================================*/
void ETH_OnFatalError(LDD_TUserData *UserDataPtr)
{
  /* Write your code here ... */
}

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
