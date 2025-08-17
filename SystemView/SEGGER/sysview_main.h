#pragma once


#ifdef SEGGER_TRACE_ENABLE
  #include "SEGGER.h"
  #include "SEGGER_SYSVIEW.h"
  #include "SEGGER_SYSVIEW_Int.h"
  #include "SEGGER_RTT.h"
  #include "SEGGER_SYSVIEW_ConfDefaults.h"
#else
#define SEGGER_RTT_AllocDownBuffer ((void)0)
#define SEGGER_RTT_AllocUpBuffer ((void)0)
#define SEGGER_RTT_ConfigUpBuffer ((void)0)
#define SEGGER_RTT_ConfigDownBuffer ((void)0)
#define SEGGER_RTT_GetKey ((void)0)
#define SEGGER_RTT_HasData ((void)0)
#define SEGGER_RTT_HasKey ((void)0)
#define SEGGER_RTT_HasDataUp ((void)0)
#define SEGGER_RTT_Init ((void)0)
#define SEGGER_RTT_Read ((void)0)
#define SEGGER_RTT_ReadNoLock ((void)0)
#define SEGGER_RTT_SetNameDownBuffer ((void)0)
#define SEGGER_RTT_SetNameUpBuffer ((void)0)
#define SEGGER_RTT_SetFlagsDownBuffer ((void)0)
#define SEGGER_RTT_SetFlagsUpBuffer ((void)0)
#define SEGGER_RTT_WaitKey ((void)0)
#define SEGGER_RTT_Write ((void)0)
#define SEGGER_RTT_WriteNoLock ((void)0)
#define SEGGER_RTT_WriteSkipNoLock ((void)0)
#define SEGGER_RTT_ASM_WriteSkipNoLock ((void)0)
#define SEGGER_RTT_WriteString ((void)0)
#define SEGGER_RTT_WriteWithOverwriteNoLock ((void)0)
#define SEGGER_RTT_PutChar ((void)0)
#define SEGGER_RTT_PutCharSkip ((void)0)
#define SEGGER_RTT_PutCharSkipNoLock ((void)0)
//
// Function macro for performance optimization
//
#define      SEGGER_RTT_HASDATA(n)       (_SEGGER_RTT.aDown[n].WrOff - _SEGGER_RTT.aDown[n].RdOff)

#if RTT_USE_ASM
  #define SEGGER_RTT_WriteSkipNoLock  SEGGER_RTT_ASM_WriteSkipNoLock
#endif

/*********************************************************************
*
*       RTT "Terminal" API functions
*
**********************************************************************
*/
int     SEGGER_RTT_SetTerminal        (char TerminalId);
int     SEGGER_RTT_TerminalOut        (char TerminalId, const char* s);

/*********************************************************************
*
*       RTT printf functions (require SEGGER_RTT_printf.c)
*
**********************************************************************
*/
int SEGGER_RTT_printf(unsigned BufferIndex, const char * sFormat, ...);
int SEGGER_RTT_vprintf(unsigned BufferIndex, const char * sFormat, va_list * pParamList);


#endif
  
