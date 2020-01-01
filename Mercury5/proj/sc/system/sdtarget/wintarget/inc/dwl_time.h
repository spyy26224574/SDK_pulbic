/****************************************************************************/
/*  $Workfile::xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx$ */
/*--------------------------------------------------------------------------*/
/*  Scope   :  Target downloader                                            */
/*             Time and date management                                     */
/****************************************************************************/

#ifndef _9c92e1e85040870cdbc43a4c8f288628_included_dwl_time_h
#define _9c92e1e85040870cdbc43a4c8f288628_included_dwl_time_h


/****************************************************************************/
/*  Function: dwl_InitTime                                                  */
/*--------------------------------------------------------------------------*/
/*  Scope   : Initialises the time management                               */
/*                                                                          */
/*                                                                          */
/*  Return    : n/a                                                         */
/*                                                                          */
/*  Interface : n/a                                                         */
/****************************************************************************/
void dwl_InitTime(void);


/****************************************************************************/
/*  Function: dwl_Time_ms                                                   */
/*--------------------------------------------------------------------------*/
/*  Scope   : Returns the number of milliseconds elapsed from               */
/*            the last dwl_InitTime                                         */
/*                                                                          */
/*  Return    : (u32) Number of milliseconds                                */
/*                                                                          */
/*  Interface : n/a                                                         */
/****************************************************************************/
u32 dwl_Time_ms(void);


/****************************************************************************/
/*  Function: dwl_Wait_ms                                                   */
/*--------------------------------------------------------------------------*/
/*  Scope   : Waits during the supplied number of milliseconds              */
/*                                                                          */
/*  Return    : n/a                                                         */
/*                                                                          */
/*  Interface :                                                             */
/*--------------------------------------------------------------------------*/
/*  Variable Name     |IN |OUT|GLB|  Use                                    */
/*--------------------+---+---+---+-----------------------------------------*/
/*  i__u32_Delay      | X |   |   |  Delay to wait                          */
/*--------------------+---+---+---+-----------------------------------------*/
/****************************************************************************/
void dwl_Wait_ms(u32 i__u32_Delay);



#endif /* ! _9c92e1e85040870cdbc43a4c8f288628_included_dwl_time_h   */