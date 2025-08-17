#pragma once

#ifdef DISABLE_SEGGER_RTT

// RTT disabled → replace everything with no-ops
#define SEGGER_RTT_AllocDownBuffer(...)          (0)
#define SEGGER_RTT_AllocUpBuffer(...)            (0)
#define SEGGER_RTT_ConfigUpBuffer(...)           (0)
#define SEGGER_RTT_ConfigDownBuffer(...)         (0)
#define SEGGER_RTT_GetKey(...)                   (0)
#define SEGGER_RTT_HasData(...)                  (0)
#define SEGGER_RTT_HasKey(...)                   (0)
#define SEGGER_RTT_HasDataUp(...)                (0)
#define SEGGER_RTT_Init(...)                     ((void)0)
#define SEGGER_RTT_Read(...)                     (0)
#define SEGGER_RTT_ReadNoLock(...)               (0)
#define SEGGER_RTT_SetNameDownBuffer(...)        (0)
#define SEGGER_RTT_SetNameUpBuffer(...)          (0)
#define SEGGER_RTT_SetFlagsDownBuffer(...)       (0)
#define SEGGER_RTT_SetFlagsUpBuffer(...)         (0)
#define SEGGER_RTT_WaitKey(...)                  (0)
#define SEGGER_RTT_Write(...)                    (0)
#define SEGGER_RTT_WriteNoLock(...)              (0)
#define SEGGER_RTT_WriteSkipNoLock(...)          (0)
#define SEGGER_RTT_ASM_WriteSkipNoLock(...)      (0)
#define SEGGER_RTT_WriteString(...)              (0)
#define SEGGER_RTT_WriteWithOverwriteNoLock(...) ((void)0)
#define SEGGER_RTT_PutChar(...)                  (0)
#define SEGGER_RTT_PutCharSkip(...)              (0)
#define SEGGER_RTT_PutCharSkipNoLock(...)        (0)
#define SEGGER_RTT_SetTerminal(...)              (0)
#define SEGGER_RTT_TerminalOut(...)              (0)
#define SEGGER_RTT_printf(...)                   (0)
#define SEGGER_RTT_vprintf(...)                  (0)

#else
#include "SEGGER_RTT.h"
#endif