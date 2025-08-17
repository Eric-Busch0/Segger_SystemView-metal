#pragma once

#ifdef DISABLE_SYSTEMVIEW

#define SEGGER_SYSVIEW_Init(...)             ((void)0)
#define SEGGER_SYSVIEW_SetRAMBase(...)       ((void)0)
#define SEGGER_SYSVIEW_Start(...)            ((void)0)
#define SEGGER_SYSVIEW_Stop(...)             ((void)0)
#define SEGGER_SYSVIEW_GetSysDesc(...)       ((void)0)
#define SEGGER_SYSVIEW_SendTaskList(...)     ((void)0)
#define SEGGER_SYSVIEW_SendTaskInfo(...)     ((void)0)
#define SEGGER_SYSVIEW_SendSysDesc(...)      ((void)0)
#define SEGGER_SYSVIEW_IsStarted(...)        (0)

#define SEGGER_SYSVIEW_RecordVoid(...)       ((void)0)
#define SEGGER_SYSVIEW_RecordU32(...)        ((void)0)
#define SEGGER_SYSVIEW_RecordU32x2(...)      ((void)0)
#define SEGGER_SYSVIEW_RecordEnterISR(...)   ((void)0)
#define SEGGER_SYSVIEW_RecordExitISR(...)    ((void)0)
#define SEGGER_SYSVIEW_OnIdle(...)           ((void)0)
#define SEGGER_SYSVIEW_OnTaskCreate(...)     ((void)0)
#define SEGGER_SYSVIEW_OnTaskTerminate(...)  ((void)0)
#define SEGGER_SYSVIEW_OnTaskStartExec(...)  ((void)0)
#define SEGGER_SYSVIEW_OnTaskStopExec(...)   ((void)0)
#define SEGGER_SYSVIEW_OnUserStart(...)      ((void)0)
#define SEGGER_SYSVIEW_OnUserStop(...)       ((void)0)

#define SEGGER_SYSVIEW_NameResource(...)     ((void)0)
#define SEGGER_SYSVIEW_PrintfHost(...)       ((void)0)
#define SEGGER_SYSVIEW_PrintfTarget(...)     ((void)0)
#define SEGGER_SYSVIEW_WarnfHost(...)        ((void)0)
#define SEGGER_SYSVIEW_ErrorfHost(...)       ((void)0)
#define SEGGER_SYSVIEW_Print(...)            ((void)0)
#define SEGGER_SYSVIEW_Warn(...)             ((void)0)
#define SEGGER_SYSVIEW_Error(...)            ((void)0)

#else
#include "SEGGER_SYSVIEW.h"
#endif
