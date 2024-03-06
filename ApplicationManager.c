/**********************************************************************************************************************
 *  FILE REQUIRES USER MODIFICATIONS
 *  Template Scope: sections marked with Start and End comments
 *  -------------------------------------------------------------------------------------------------------------------
 *  This file includes template code that must be completed and/or adapted during BSW integration.
 *  The template code is incomplete and only intended for providing a signature and an empty implementation.
 *  It is neither intended nor qualified for use in series production without applying suitable quality measures.
 *  The template code must be completed as described in the instructions given within this file and/or in the.
 *  Technical Reference.
 *  The completed implementation must be tested with diligent care and must comply with all quality requirements which.
 *  are necessary according to the state of the art before its use.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  ApplicationManager.c
 *           Config:  C:/WorkSpace/Lidar_2/L2G8810_Software/20_Construction/Renesas_V3M/CuC/App/code/framework/generated/LIDAR.dpa
 *        SW-C Type:  ApplicationManager
 *  Generation Time:  2023-07-03 14:43:34
 *
 *        Generator:  MICROSAR RTE Generator Version 4.22.1
 *                    RTE Core Version 1.22.1
 *          License:  CBD1800087
 *
 *      Description:  C-Code implementation template for SW-C <ApplicationManager>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * AppMgr_AppIdType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_DcmIdleStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_DcmOpCodeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_FnctReqType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_FunctionalModeType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 1267, +10000.
 *
 * AppMgr_HadModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_HilModuleIdType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_IdleModeStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_OMModesType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_PucModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_PucStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_ReqBswMEcuModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_RspDiagType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_StateReqType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_SysModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * AppMgr_SysStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * ComM_ModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * CvAppAliveness
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * Dem_EventStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * Dem_EventStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * Dlt_ApplicationIDType
 *   This type describes the Application ID
 *
 * Dlt_ContextIDType
 *   This type describes the Context ID
 *
 * Dlt_MessageLogInfoType
 *   This type describes the message log level, message options, context ID type and application ID of a verbose or non-verbose message.
 *
 * Dlt_MessageLogLevelType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * Dlt_MessageOptionsType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * Dlt_Uint8BufferType
 *   This type describes the message buffer.
 *
 * HAM_HamModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * NvmExt_ReqStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * OMAuth_InitNegoStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * OMProt_SystemModesType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * OmProt_OmCurrentFwModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * Omc_OperatingModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * Rte_DT_AppMgr_HilDataType_0
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * Rte_DT_AppMgr_LfcHandlerCvappType_0
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 1267, +10000.
 *
 * Rte_DT_AppMgr_OMModeSubModeType_0
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * Rte_DT_OMProt_SystemModeSubModeType_0
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * Rte_DT_SignalMngr_PuCStateAndMode_0
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * Rte_DT_SignalMngr_PuCStateAndMode_1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * Rte_DT_SignalMngr_PuCStateAndMode_2
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 126, +10.
 *
 * SignalMngr_LfcHandlerR7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *      For example: 1, 0, 1267, +10000.
 *
 * SignalMngr_PuCAppMode
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * SignalMngr_PuCSysMode
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * StateAutonomousDrivingEnum
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 * SysCtrl_RH850ShutDownScenarioType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence
 *      of decimal digits (#x30-#x39).
 *
 *      For example: 1, 0, 126, +10.
 *
 *
 * Operation Prototypes:
 * =====================
 * RegisterContext of Port Interface DltSwcMessageService
 *   The service represents the interface to be used by software components to register their Dlt context.
 *
 * SendLogMessage of Port Interface DltSwcMessageService
 *   The service represents the interface to be used by basic software modules or by software component to send log messages.
 *
 *********************************************************************************************************************/

#include "Rte_ApplicationManager.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "ApplicationModeManager.h"
#include "ApplicationManager_Priv.h"
#include "AppMgr_Dynamometer_Priv.h"
#include "AppMgr_Eol_Priv.h"
#include "CDD_MeSbcFS84.h"
#define TAG "AppMgr"
#include "pdebug.h"
#include "ACP_api.h"
#include "ACP_bootloader.h"
#include "Dio.h"
#include "Omc_Data.h"
#include "CDD_HWVariant.h"
#include "NvmExt.h"
#include "NvM_RamRom.h"

#ifndef ME_HILENABLE_BUILD
#define ME_HILENABLE_BUILD 0U
#endif

#define ApplicationManager_START_SEC_VAR_INIT_UNSPECIFIED
#include "ApplicationManager_MemMap.h"

#define FAULT_FLAG_SET                     1U
#define FAULT_FLAG_CLEAR                   0U
#define FAULT_FLAG_UNSET                   2U
#define DLT_STATUS_FALSE                   0U
#define DLT_STATUS_HAM_AUTONOMOUS          1U
#define DLT_STATUS_NTW                     2U


static AppMgr_state_str AppMgr_states = { APP_M_NO_STATE,  APP_M_NO_STATE,  APP_MGR_NORMAL,   APP_M_NO_STATE,
                                          APP_M_NO_STATE,  APP_M_NO_STATE,  APP_MGR_NO_TRANS, APP_MGR_NO_TRANS,
                                          APP_M_NO_STATE,  APP_M_FALSE };

static AppMgr_mode_str AppMgr_modes = { APP_M_MAX_MODES, APP_MGR_SYS_SecureMode_FIELD, SIGNALMNGR_PUC_SYS_SecureModes_FIELD, SIGNALMNGR_PUC_SYS_SecureModes_FIELD,
                                        { APP_M_OM_DEF_MODE, APP_M_OM_DEF_MODE }, { HIL_NA, HIL_NA }, HIL_INVALID,
                                        { 255U, 255U, DATA_NOTAVAILABLE, 255U },
                                        APP_M_NO_MODE, APP_M_OM_DEF_MODE, APP_M_OM_DEF_MODE, APP_M_NO_MODE, APP_M_NO_MODE, APP_M_FALSE,
                                        APP_M_READ_IDLE_OFF };
static uint8 Idle_Requester=APP_M_REQ_ID_NONE;
static uint8 Fault_Flag = FAULT_FLAG_CLEAR;
static uint8 Toggle_OM_ENline_Flag = FALSE;
static uint8 Dlt_printing_flag = DLT_STATUS_FALSE;
static uint8 Over_Travel_Time_dlt_cnt = 0u;
static uint8 AppMgr_reqShdown = e_ShutDown;   /* type of shutdown/reset request for SBC */
static uint8 AppMgr_fault_started = APP_M_FALSE;
static uint8 AppMgr_partialReset = APP_M_PR_NONE;
static uint8 Toggle_For_BIST_State = APP_M_PR_OM_READY;
static uint8 AppMgr_partialResetReason = APP_M_PR_REASON_NONE;
static uint16 AppMgr_PartialResetErrorID = (uint16)APP_M_PR_NONE;
static AppMgr_Dcm_Data AppMgr_dcm = { APP_M_DCM_IDLE_OFF, APP_M_FALSE };
static uint8 AppMgr_Process_OM_CoreDump = APP_M_OM_COREDUMP_NOK ;
static AppMgr_FunctionalModeType AppMgr_functionalMode = APP_M_NO_MODE ;
static AppMgr_FunctionalModeType AppMgr_functionalModePrev = APP_M_NO_MODE ;
static AppMgr_StandbyPrepareShutdownReq_op AppMgr_StandbyPrepareShutdownReq = {APP_M_CVAPP_ACK_NONE, APP_M_PREP_SHUTDOWN_REQ_TIMER_STOPPED};
static uint8 AppMgr_CVAppErr_NoCoreDump_Trigger = APP_M_FALSE;
static uint8 AppMgr_ResetHilNvM_SM = APP_M_RESET_HIL_NVM_INIT;
static uint16 AppMgr_OM_overtravel_time = 0u; /* OM overtravel time from coding data */
static uint16 AppMgr_OM_overtravel_time_TimeOut = 0u; /* timer for OM overtravel time Monitoring */
static uint8 AppMgr_OM_overtravel_time_TimeOut_PrintingFlag = TRUE;
static uint8 AppMgr_Coding_Data_Avilable = FALSE;

/* Array of states with allowed transition (MAX 32 states!) */
/* Read mask for each state from left to right.
   TB (true bit) means transition allowed, FB (false bit) means transition not allowed */
/* PRQA S 3218 1 */
static const uint32 allowedT[APP_M_MAX_STATES] =
{
/*                             23 |     22  |      21       |      20     |      19    |     18   |    17    |       16     |     15      |      14     |   13   |    12    |   11 |     10   |       9    |    8  |      7    |     6   |     5  |    4   |   3  |    2   |     1  */
/*   NEXT_STATE ->     SerDes_Test| UNUSED_3| PARTIAL_RESET | SAFE_SILENT | WAIT_CVAPP | WAIT_A53 | UNUSED_2 |   UNUSED_6   |  UNUSED_5   |  UNUSED_4   |UNUSED_7| UNUSED_1 |FAULT |HARD_RESET| SAFE_COMM  |STANDBY|RESET_BOOTL|UNUSED_10|OM_FLASH|UNUSED_8|NORMAL|UNUSED_9|STARTUP */
/* 1  STARTUP            */    FB |     FB  |      FB       |    TB19     |      FB    |   TB17   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    | TB10 |    TB9   |     TB8    |  TB7  |    TB6    |   TB5   |   TB4  |   TB3  | TB2  |  TB1   |   TB0 ,
/* 2  UNUSED_9           */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 3  NORMAL             */  TB22 |     FB  |    TB20       |    TB19     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    | TB10 |    TB9   |     TB8    |  TB7  |    TB6    |   TB5   |   TB4  |   TB3  | TB2  |  TB1   |    FB ,
/* 4  UNUSED_8           */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 5  OM_FLASH           */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |     FB    |    FB   |   TB4  |    FB  |  FB  |   FB   |    FB ,
/* 6  UNUSED_10          */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 7  RESET_BOOTL        */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |    TB6    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 8  STANDBY            */  TB22 |     FB  |      FB       |    TB19     |    TB18    |   TB17   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |     TB8    |  TB7  |     FB    |    FB   |    FB  |    FB  | TB2  |  TB1   |    FB ,
/* 9  SAFE_COMM          */  TB22 |     FB  |    TB20       |    TB19     |    TB18    |   TB17   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    | TB10 |    TB9   |     TB8    |  TB7  |    TB6    |   TB5   |   TB4  |   TB3  | TB2  |  TB1   |   TB0 ,
/* 10 HARD_RESET         */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |    TB9   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 11 FAULT              */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    | TB10 |    TB9   |      FB    |   FB  |     FB    |   TB5   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 12 UNUSED_1           */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 13 UNUSED_7           */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |  FB  |     FB   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 14 UNUSED_4           */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 15 UNUSED_5           */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 16 UNUSED_6           */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 17 UNUSED_2           */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 18 WAIT_A53           */    FB |     FB  |      FB       |    TB19     |    TB18    |   TB17   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    | TB10 |    TB9   |     TB8    |  TB7  |    TB6    |   TB5   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 19 WAIT_CVAPP         */  TB22 |     FB  |    TB20       |    TB19     |    TB18    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    | TB10 |    TB9   |     TB8    |  TB7  |    TB6    |   TB5   |   TB4  |   TB3  | TB2  |  TB1   |    FB ,
/* 20 SAFE_SILENT        */  TB22 |     FB  |    TB20       |    TB19     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    | TB10 |    TB9   |     TB8    |  TB7  |    TB6    |   TB5   |   TB4  |    FB  |  FB  |   FB   |    FB ,
/* 21 PARTIAL_RESET      */    FB |     FB  |    TB20       |    TB19     |    TB18    |   TB17   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    | TB10 |    TB9   |     TB8    |  TB7  |    TB6    |   TB5   |   TB4  |   TB3  | TB2  |  TB1   |   TB0 ,
/* 22 UNUSED_3           */    FB |     FB  |      FB       |      FB     |      FB    |     FB   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    |   FB |     FB   |      FB    |   FB  |     FB    |    FB   |    FB  |    FB  |  FB  |   FB   |    FB ,
/* 23 SerDes_Test        */  TB22 |     FB  |      FB       |    TB19     |    TB18    |   TB17   |    FB    |       FB     |      FB     |      FB     |   FB   |    FB    | TB10 |    TB9   |     TB8    |  TB7  |    TB6    |   TB5   |    FB  |    FB  | TB2  |  TB1   |   TB0
};

#define ApplicationManager_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "ApplicationManager_MemMap.h"

#define ApplicationManager_START_SEC_CONST_UNSPECIFIED
#include "ApplicationManager_MemMap.h"

static const AppMgr_log_string AppMgr_print_R7_states[APP_M_MAX_STATES+1U] =
{
/* 0 */   { APP_M_NO_STATE,              "CuC_Invalid"},
/* 1 */   { APP_MGR_STARTUP,             "CuC_Startup" },
/* 2 */   { APP_M_NO_STATE,              "CuC_Invalid" },
/* 3 */   { APP_MGR_NORMAL,              "CuC_Normal" },
/* 4 */   { APP_M_NO_STATE,              "CuC_Invalid" },
/* 5 */   { APP_MGR_OM_FLASH,            "CuC_OmFlashing" },
/* 6 */   { APP_MGR_UNUSED_10,           "CuC_Unused10" },
/* 7 */   { APP_MGR_RESET_BOOTL,         "CuC_DiagResetBootl" },
/* 8 */   { APP_MGR_STANDBY,             "CuC_Standby" },
/* 9 */   { APP_MGR_SAFE_COMM,           "CuC_SafeCommunicate" },
/* 10 */  { APP_MGR_HARD_RESET,          "CuC_HardReset" },
/* 11 */  { APP_MGR_FAULT,               "CuC_Fault" },
/* 12 */  { APP_MGR_UNUSED_1,            "CuC_Unused1" },
/* 13 */  { APP_MGR_UNUSED_7,            "CuC_Unused7" },
/* 14 */  { APP_MGR_UNUSED_4,            "CuC_Unused4" },
/* 15 */  { APP_MGR_UNUSED_5,            "CuC_Unused5" },
/* 16 */  { APP_MGR_UNUSED_6,            "CuC_Unused6" },
/* 17 */  { APP_MGR_UNUSED_2,            "CuC_UnUsed2" },
/* 18 */  { APP_MGR_A53_INITIALIZED,     "CuC_A53Initialized" },
/* 19 */  { APP_MGR_WAIT_CVAPP_INIT,     "CuC_WaitCvAppInit" },
/* 20 */  { APP_MGR_SAFE_SILENT,         "CuC_SafeSilent" },
/* 21 */  { APP_MGR_PARTIAL_RESET,       "CuC_PartialReset" },
/* 22 */  { APP_MGR_UNUSED_3,            "CuC_Unused3" },
/* 23 */  { APP_MGR_SERDES_TEST,         "CuC_SerDesTest" }
};

static const AppMgr_log_string AppMgr_print_R7_modes[APP_M_MAX_MODES] =
{
/* 0 */  { RTE_MODE_SecEcuMode_PLANT,       "CuC_Plant" },
/* 1 */  { RTE_MODE_SecEcuMode_ENGINEERING, "CuC_Engineering" },
/* 2 */  { RTE_MODE_SecEcuMode_FIELD,       "CuC_Field" },
/* 3 */  { RTE_TRANSITION_SecEcuMode,       "CuC_TransitionMode" }
};

static const AppMgr_log_string AppMgr_print_R7_Hil[APP_M_MAX_HIL_STATE] =
{
/* 0 */  { HIL_NA,       "CuC_HilError" },
/* 1 */  { HIL_ENABLED,  "CuC_HilEnabled" },
/* 2 */  { HIL_DISABLED, "CuC_HilDisabled" },
/* 3 */  { HIL_ACTIVE,   "CuC_HilActive" }
};

static const AppMgr_log_string AppMgr_print_PuC_states[APP_M_MAX_PUC_STATES] =
{
/* 0 */   { APP_M_NO_STATE,                                 "Puc_Invalid" },
/* 1 */   { SIGNALMNGR_PUC_MGR_A53_INITIALIZED,             "Puc_A53Initialized" },
/* 2 */   { SIGNALMNGR_PUC_MGR_CVAPP_INITIALIZED,           "Puc_CvAppInitialized" },
/* 3 */   { SIGNALMNGR_PUC_MGR_CVAPP_COMM_INIT,             "Puc_CvAppCommInit" },
/* 4 */   { APP_M_NO_STATE,                                 "Puc_Invalid" },
/* 5 */   { APP_M_NO_STATE,                                 "Puc_Invalid" },
/* 6 */   { SIGNALMNGR_PUC_MGR_NORMAL,                      "Puc_CvAppNormal" },
/* 7 */   { SIGNALMNGR_PUC_MGR_CVAPP_ERROR,                 "Puc_CvAppError" }
};

static const AppMgr_log_string AppMgr_print_PuC_modes[APP_M_MAX_PUC_MODES] =
{
/* 0 */  { SIGNALMNGR_PUC_SYS_SecureModes_PLANT,       "PuC_Plant" },
/* 1 */  { SIGNALMNGR_PUC_SYS_SecureModes_ENGINEERING, "PuC_Engineering" },
/* 2 */  { SIGNALMNGR_PUC_SYS_SecureModes_FIELD,       "PuC_Field" },
/* 3 */  { RTE_TRANSITION_SecEcuMode,      "PuC_TransitionMode" }
};

#define ApplicationManager_STOP_SEC_CONST_UNSPECIFIED
#include "ApplicationManager_MemMap.h"

#define ApplicationManager_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "ApplicationManager_MemMap.h"

static uint32 AppMgr_CvAppInitTimeout  = 0U; /* timer for CvApp Init Monitoring */
static uint32 AppMgr_A53InitTimeout    = 0U; /* timer for A53 Init Monitoring */
static uint32 AppMgr_shdownTimeout     = 0U;    /* timer for starting the shutdown */
static boolean AppMgr_R7StackCpuUseTrg = ((boolean)FALSE); /* Flag to Indicate if R7 STack and Cpu Utilization is triggered */

/* DLT stuff */
static Dlt_MessageLogInfoType AppM_MsgInfo = {0};

static Rte_ModeType_AppMgr_BswmNotificationMDG RE_AppMgr_Main_bswmNotif = 0U;
static Rte_ModeType_OmcOperatingMode RE_AppMgr_Main_fetraflaMode = OMC_MODE_NORMAL;

static AppMgr_Idle_op AppMgr_Idle = { 0U, 0U, APP_M_FALSE, 0U, APP_M_TYPE_NONE, APP_M_REQ_ID_NONE,
                                      APP_MGR_NO_TRANS, APP_M_CVAPP_ACK_NONE,
                                      APP_M_NO_MODE, APP_M_FALSE };

#define ApplicationManager_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "ApplicationManager_MemMap.h"

#define ApplicationManager_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "ApplicationManager_MemMap.h"

static Rte_ModeType_AppMgr_BswmNotificationMDG RE_AppMgr_Main_newBswmNotif;
static Rte_ModeType_OmcOperatingMode RE_AppMgr_Main_newFetraflaMode;

#if (STD_ON == DLT_TRACING_STATUS)
static LogAppMgrSystemStates AppMgr_SendDltData_LogSystemStates;
static LogAppMgrSystemModes AppMgr_SendDltData_LogSystemModes;
static AppMgr_PADStatusType AppMgr_PADStatus ;
#endif /* STD_ON == DLT_TRACING_STATUS */

static uint32 stRsuDegradation = APP_M_RSU_DEGRADATION_INVALID;


static uint8  lastIdleModeStored = APP_M_LAST_IDLE_OFF;

#define ApplicationManager_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "ApplicationManager_MemMap.h"


/* We take the RAM mirror of HIL here for early startup processing */
/* To be review later */
Hil_NvMRamType Hil_NvData =  {  0, { 0, 0, 0, } };
const Hil_NvMRamType Hil_NvDefaultData =  {  0, { 0, 0, 0, } };

/* Moved from ASILB memory in order to allow NvM (QM) to write into it*/
static NvmExt_ReqStatusType ReqlastIdleModeStored_writedelayed = NVMEXT_REQ_STS_INIT;
static NvmExt_ReqStatusType ReqHilNvmErite_Status = NVMEXT_REQ_STS_INIT;

/*dlt declaration*/
#define APPLMANGR             AppM_MsgInfo
#define APPL_ID_APPLMANGR     0x65808077U            /* Application Id: APPM application*/

/* BS Feature */
#define APPMGR_BS_FeaturesSERDES  24190u

static void  AppMgr_StateChanged(void);
static void  AppMgr_ChangeState(AppMgr_SysStateType state);
static void  AppMgr_SetHADmode(uint8 hadMode);
static uint8 AppMgr_AllowedNextState(AppMgr_SysStateType state);
static void  AppMgr_CheckStartup(Rte_ModeType_AppMgr_BswmNotificationMDG bswmNotif);
static void  AppMgr_CheckCMReset(void);
static void  AppMgr_CheckHardReset(void);
static void  AppMgr_CheckFault(void);
static void  AppMgr_CheckWaitA53(void);
static void  AppMgr_CheckWaitCvApp(void);
static void  AppMgr_CheckOMFlash(void);
static void  AppMgr_CheckStandBy(void);
static void  AppMgr_TriggerR7StackCpuUtilization(void);

static boolean AppMgr_ReqDiagMgrStateChange(uint8 reqState, uint8 * newState);
static boolean AppMgr_ReqDegradationMgrStateChange(uint8 reqState, uint8 * newState);
static boolean AppMgr_ReqSignalMonStateChange(uint8 reqState, uint8 * newState);
static boolean AppMgr_ReqOMFlashPluginStateChange(uint8 reqState, uint8 * newState);

static void AppMgr_ManagePuCStateChange(void);
static void AppMgr_ManagePuCModeChange(void);
static void AppMgr_ReadHAMData(void);
static void AppMgr_ManageAppMgrStateModeChange(void);
static void AppMgr_ProcessBswMNotification(Rte_ModeType_AppMgr_BswmNotificationMDG bswmNotification);
static void AppMgr_ProcessBswMStateMachine(void);
static void AppMgr_CheckPendingRequests(void);
static void AppMgr_ProcessAppMgrCurrentState(void);
static void AppMgr_BroadcastAllModesStates(void);
static void AppMgr_ProcessIdleOn(void);
static void AppMgr_ProcessIdleOnWithOMBIST(void);
static void AppMgr_ProcessIdleOff(void);
static void AppMgr_ProcessPartialResetReq(void);
static void AppMgr_ProcessPartialResetDiagReq(void);
static void AppMgr_ProcessForcedPartialResetDegrReq(void);
static void AppMgr_Update_DynamoEOL_FunctionalModes(void);
static void AppMgr_ManageRsuDegradation(void);

static void AppMgr_ProcessBswMNotify_Shutdown(void);
static void AppMgr_ProcessBswMNotify_StartCMReset(void);
static void AppMgr_ProcessBswMNotify_StartHardReset(void);
static void AppMgr_ProcessBswMNotify_StartStandby(void);
static void AppMgr_ProcessBswMNotify_Normal(void);

static uint8 AppMgr_HandleDcmReqPR(uint8 opStatus);
static uint8 AppMgr_HandleDcmReqIdle(uint8 opStatus, pcuint8 data);
static uint8 AppMgr_DcmPRPreconditions(void);
static uint8 AppMgr_DcmSetIdleOff(uint8 opStatus);
static uint8 AppMgr_DcmSetIdleOn(uint8 opStatus);
static Std_ReturnType AppMgr_Internal_HandleFetraflaReq(uint8 type);
static void AppMgr_Internal_UpdateIdleOnModeStatus(void);
static uint8 AppMgr_DcmSetIdleOnPreconditions(void);
static uint8 AppMgr_DcmSetIdleOffPreconditions(void);
static void AppMgr_ChangeToDiagIdleOn(void);
static void AppMgr_ChangeToDiagIdleOff(void);
static void AppMgr_ResetTimerIdle(void);
static void AppMgr_ResetParamsIdle(void);
static void AppMgr_ResetParamsBist(void);
static void AppMgr_HandleIdleOnRequests(void);
static void AppMgr_HandleIdleOffRequests(void);
static void AppMgr_HandleResetHilNvM(void);

static boolean AppMgr_IsCvApp_Valid(void);
static boolean AppMgr_IsCvApp_Error(void);

#if (STD_ON == DLT_TRACING_STATUS)
static void AppMgr_SendStatesToDlt(void);
static void AppMgr_SendModesToDlt(void);
static void AppMgr_SendStatesModesOnChangeToDlt(void);

static void AppMgr_HandleIdleReq_Omc(void);
static void AppMgr_HandleIdleReq_Degr(void);
static void AppMgr_HandleIdleReq_Ntw(void);
static void AppMgr_HandleIdle_PR_States(void);

static uint8 AppMgr_DefaultCuCStateForTransition(void);
#endif /* STD_ON == DLT_TRACING_STATUS */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * AppMgr_FunctionalModeType: Integer in interval [0...65535]
 * DegMgr_ErrorIdDt: Integer in interval [0...65535]
 * Dlt_MessageOptionsType: Integer in interval [0...255]
 * Rte_DT_AppMgr_OMModeSubModeType_1: Integer in interval [0...255]
 * Rte_DT_OMProt_SystemModeSubModeType_1: Integer in interval [0...255]
 * boolean: Boolean (standard type)
 * boolean: Boolean (standard type)
 * dtRef_VOID: DataReference
 * dtRef_const_VOID: DataReference
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * pcuint8: Integer in interval [0...4294967295]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * AppMgr_AppIdType: Enumeration of integer in interval [0...255] with enumerators
 *   DIAG_MGR (1U)
 *   CLEANING_APP_UNUSED (2U)
 *   DEGRADATION_MGR (3U)
 *   SIGNAL_MON (4U)
 *   OM_FLASH_PLUGIN (5U)
 * AppMgr_DcmIdleStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   APP_M_DCM_IDLE_ON (0U)
 *   APP_M_DCM_IDLE_OFF (1U)
 *   APP_M_DCM_IDLE_USER_PRIO_ON (2U)
 *   APP_M_DCM_IDLE_USER_PRIO_OFF (3U)
 * AppMgr_DcmOpCodeType: Enumeration of integer in interval [0...255] with enumerators
 *   e_DCM_PartialReset (1U)
 *   e_DCM_IdleState (2U)
 * AppMgr_FnctReqType: Enumeration of integer in interval [0...255] with enumerators
 *   APP_M_REQ_NONE (0U)
 *   APP_M_REQ_IDLEON (1U)
 *   APP_M_REQ_IDLEOFF (2U)
 *   APP_M_REQ_PR (3U)
 * AppMgr_HadModeType: Enumeration of integer in interval [0...255] with enumerators
 *   HAD_NOT_READY (0U)
 *   HAD_READY (1U)
 *   HAD_INVALID (255U)
 * AppMgr_HilModuleIdType: Enumeration of integer in interval [0...255] with enumerators
 *   SERDES (1U)
 *   DEM_GATE_KEEPER (2U)
 * AppMgr_IdleModeStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   APP_M_READ_IDLE_OFF (0U)
 *   APP_M_READ_IDLE_ON_SERV_INT (1U)
 *   APP_M_READ_IDLE_ON_DIAG_JOB (2U)
 *   APP_M_READ_IDLE_ON_INTERNAL (3U)
 *   APP_M_READ_IDLE_ON_ENERGIESPARMODE (4U)
 *   APP_M_READ_IDLE_INVALID (255U)
 * AppMgr_OMModesType: Enumeration of integer in interval [0...255] with enumerators
 *   APPMGR_SYSTEM_MODE_POWER_UP (0U)
 *   APPMGR_SYSTEM_MODE_FW_UPGRADE (1U)
 *   APPMGR_SYSTEM_MODE_NORMAL (2U)
 *   APPMGR_SYSTEM_MODE_STANDBY (3U)
 *   APPMGR_SYSTEM_MODE_POWER_DOWN (4U)
 *   APPMGR_SYSTEM_MODE_DEGRADATION (5U)
 *   APPMGR_SYSTEM_MODE_RESERVED_TBD (6U)
 *   APPMGR_SYSTEM_MODE_LIDAR_LOCKED (9U)
 *   APPMGR_SYSTEM_MODE_FACTORY_CALIB (10U)
 *   APPMGR_SYSTEM_MODE_REPLAY (11U)
 * AppMgr_PADStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   NOT_ACTIVE (0U)
 *   ACTIVE (1U)
 * AppMgr_PucModeType: Enumeration of integer in interval [0...255] with enumerators
 *   APPMGR_PUC_SYS_SecureModes_PLANT (0U)
 *   APPMGR_PUC_SYS_SecureModes_ENGINEERING (1U)
 *   APPMGR_PUC_SYS_SecureModes_FIELD (2U)
 * AppMgr_PucStateType: Enumeration of integer in interval [0...255] with enumerators
 *   APPMGR_PUC_MGR_A53_INITIALIZED (1U)
 *   APPMGR_PUC_MGR_CVAPP_INITIALIZATION (2U)
 *   APPMGR_PUC_MGR_CVAPP_COMM_INIT (3U)
 *   APPMGR_PUC_MGR_NORMAL (6U)
 *   APPMGR_PUC_MGR_CVAPP_ERROR (7U)
 *   APPMGR_PUC_MGR_INVALID (255U)
 * AppMgr_ReqBswMEcuModeType: Enumeration of integer in interval [0...255] with enumerators
 *   ECU_STARTUP_REQ (0U)
 *   ECU_SHUTDOWN_REQ (1U)
 *   ECU_RUN_REQ (2U)
 *   ECU_NONE_REQ (3U)
 *   ECU_RESET_REQ (4U)
 *   ECU_PRGSESS_RESET_REQ (5U)
 *   ECU_STOP_BUS_COMM (6U)
 *   ECU_STANDBY_REQ (7U)
 * AppMgr_RspDiagType: Enumeration of integer in interval [0...255] with enumerators
 *   APP_M_RSP_DIAG_NONE (0U)
 *   APP_M_RSP_DIAG_OK (1U)
 *   APP_M_RSP_DIAG_NOTOK (2U)
 *   APP_M_RSP_DIAG_PENDING (3U)
 * AppMgr_StateReqType: Enumeration of integer in interval [0...255] with enumerators
 *   REQ_UNUSED_3 (1U)
 *   REQ_UNUSED_4 (2U)
 *   REQ_UNUSED_1 (3U)
 *   REQ_UNUSED_2 (4U)
 *   REQ_START_SAFE_COMM (5U)
 *   REQ_STOP_SAFE_COMM (6U)
 *   REQ_FAULT_RESET (7U)
 *   REQ_START_DYNAMOMETER (8U)
 *   REQ_STOP_DYNAMOMETER (9U)
 *   REQ_START_EOL (10U)
 *   REQ_STOP_EOL (11U)
 *   REQ_START_OM_FLASH (12U)
 *   REQ_STOP_OM_FLASH (13U)
 *   REQ_UNUSED_5 (14U)
 *   REQ_UNUSED_6 (15U)
 *   REQ_SAFE_SILENT (16U)
 *   REQ_PARTIAL_RESET_UNUSED (17U)
 *   REQ_START_SERDES_TEST (18U)
 *   REQ_STOP_SERDES_TEST (19U)
 *   REQ_START_IDLE (20U)
 *   REQ_STOP_IDLE (21U)
 *   REQ_LAST_STORED_IDLE_MODE (22U)
 *   REQ_IDLE_ERROR (23U)
 *   REQ_FAULT_BOOTLOADER (24U)
 *   REQ_FORCED_PARTIAL_RESET (25U)
 * AppMgr_SysModeType: Enumeration of integer in interval [0...255] with enumerators
 *   APP_MGR_SYS_SecureMode_PLANT (0U)
 *   APP_MGR_SYS_SecureMode_ENGINEERING (1U)
 *   APP_MGR_SYS_SecureMode_FIELD (2U)
 * AppMgr_SysStateType: Enumeration of integer in interval [0...255] with enumerators
 *   APP_MGR_STARTUP (1U)
 *   APP_MGR_NORMAL (3U)
 *   APP_MGR_OM_FLASH (5U)
 *   APP_MGR_UNUSED_10 (6U)
 *   APP_MGR_RESET_BOOTL (7U)
 *   APP_MGR_STANDBY (8U)
 *   APP_MGR_SAFE_COMM (9U)
 *   APP_MGR_HARD_RESET (10U)
 *   APP_MGR_FAULT (11U)
 *   APP_MGR_UNUSED_1 (12U)
 *   APP_MGR_UNUSED_7 (13U)
 *   APP_MGR_UNUSED_4 (14U)
 *   APP_MGR_UNUSED_5 (15U)
 *   APP_MGR_UNUSED_6 (16U)
 *   APP_MGR_UNUSED_2 (17U)
 *   APP_MGR_A53_INITIALIZED (18U)
 *   APP_MGR_WAIT_CVAPP_INIT (19U)
 *   APP_MGR_SAFE_SILENT (20U)
 *   APP_MGR_PARTIAL_RESET (21U)
 *   APP_MGR_UNUSED_3 (22U)
 *   APP_MGR_SERDES_TEST (23U)
 * ComM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 * CvAppAliveness: Enumeration of integer in interval [0...255] with enumerators
 *   CVAPP_NOT_ALIVE (0U)
 *   CVAPP_ALIVE (1U)
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 *   DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
 *   DEM_EVENT_STATUS_PASSED_CONDITIONS_NOT_FULFILLED (5U)
 *   DEM_EVENT_STATUS_FAILED_CONDITIONS_NOT_FULFILLED (6U)
 *   DEM_EVENT_STATUS_PREPASSED_CONDITIONS_NOT_FULFILLED (7U)
 *   DEM_EVENT_STATUS_PREFAILED_CONDITIONS_NOT_FULFILLED (8U)
 * Dem_EventStatusType: Enumeration of integer in interval [0...4] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 *   DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
 * Dlt_MessageLogLevelType: Enumeration of integer in interval [0...6] with enumerators
 *   DLT_LOG_OFF (0U)
 *   DLT_LOG_FATAL (1U)
 *   DLT_LOG_ERROR (2U)
 *   DLT_LOG_WARN (3U)
 *   DLT_LOG_INFO (4U)
 *   DLT_LOG_DEBUG (5U)
 *   DLT_LOG_VERBOSE (6U)
 * HAM_HamModeType: Enumeration of integer in interval [0...255] with enumerators
 *   HAM_INACTIVE (1U)
 *   HAM_ACTIVE (2U)
 *   HAM_INVALID (255U)
 * NvmExt_ReqStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   NVMEXT_REQ_STS_INIT (2U)
 *   NVMEXT_REQ_STS_OK (0U)
 *   NVMEXT_REQ_STS_NOK (1U)
 *   NVMEXT_REQ_STS_SUBMIT (3U)
 *   NVMEXT_REQ_STS_PROC (4U)
 *   NVMEXT_REQ_STS_PENDING (5U)
 *   NVMEXT_REQ_STS_TIMEOUT (6U)
 *   NVMEXT_REQ_STS_INVALID (7U)
 *   NVMEXT_REQ_STS_NOT_SUPPORTED (8U)
 * OMAuth_InitNegoStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   OM_A_INITNEGO_NOT_COMPLETE (0U)
 *   OM_A_INITNEGO_COMPLETE (1U)
 * OMProt_SystemModesType: Enumeration of integer in interval [0...255] with enumerators
 *   OMPROT_SYSTEM_MODE_POWER_UP (0U)
 *   OMPROT_SYSTEM_MODE_FW_UPGRADE (1U)
 *   OMPROT_SYSTEM_MODE_NORMAL (2U)
 *   OMPROT_SYSTEM_MODE_STANDBY (3U)
 *   OMPROT_SYSTEM_MODE_POWER_DOWN (4U)
 *   OMPROT_SYSTEM_MODE_DEGRADATION (5U)
 *   OMPROT_SYSTEM_MODE_LOW_POWER (6U)
 *   OMPROT_SYSTEM_MODE_LOCKED (9U)
 *   OMPROT_SYSTEM_MODE_FACTORY_CALIB (10U)
 *   OMPROT_SYSTEM_MODE_REPLAY_MODE (11U)
 * OmProt_OmCurrentFwModeType: Enumeration of integer in interval [0...255] with enumerators
 *   OM_FW_BOOT (1U)
 *   OM_FW_APPL (2U)
 *   OM_FW_INVALID (255U)
 * Omc_OperatingModeType: Enumeration of integer in interval [0...255] with enumerators
 *   OMC_MODE_NORMAL (0U)
 *   OMC_MODE_ASSEMBLY (1U)
 *   OMC_MODE_TRANSPORT (2U)
 *   OMC_MODE_BMW_FLASH (3U)
 * Rte_DT_AppMgr_HilDataType_0: Enumeration of integer in interval [0...255] with enumerators
 *   HIL_NA (0U)
 *   HIL_ENABLED (1U)
 *   HIL_DISABLED (2U)
 *   HIL_ACTIVE (3U)
 *   HIL_INVALID (255U)
 * Rte_DT_AppMgr_LfcHandlerCvappType_0: Enumeration of integer in interval [0...65535] with enumerators
 *   E_CVAppAllOk (0U)
 *   E_CVAppOMTemperatureOverRangePartialResetNeeded (1U)
 *   E_CVAppOMDegradationRecoveryFailedPartialResetNeeded (2U)
 *   E_CVAppOMLaserTriggerOffRecoveryFailedPartialResetNeeded (3U)
 *   E_CVAppOMLaserPowerSupplyOffRecoveryFailedPartialResetNeeded (4U)
 *   E_CVAppDetectsOMAliveMonitoringFailedForcedPartialResetNeeded (5U)
 *   E_CVAppDetectsOMSafetyGoalViolationsPartialResetNeeded (6U)
 *   E_CVAppUnused1 (7U)
 *   E_CVAppUnused2 (8U)
 *   E_CVAppOMForcedPartialResetACK (9U)
 *   E_CVAppOMForcedPartialResetError (10U)
 *   E_CVAppDiagJobPartialResetACK (50U)
 *   E_CVAppDiagJobPartialResetError (51U)
 *   E_CVAppIDLEFunctModeEntryRequestACK (52U)
 *   E_CVAppIDLEFunctModeEntryRequestError (53U)
 *   E_CVAppIDLEFunctModeExitRequestACK (54U)
 *   E_CVAppIDLEFunctModeExitRequestError (55U)
 *   E_CVAppFeTraEntryRequestACK_UNUSED (56U)
 *   E_CVAppFeTraEntryRequestError_UNUSED (57U)
 *   E_CVAppFeTraExitRequestACK_UNUSED (58U)
 *   E_CVAppFeTraExitRequestError_UNUSED (59U)
 *   E_CVAppForcedIDLEFunctModeEntryRequestACK (60U)
 *   E_CVAppForcedIDLEFunctModeEntryRequestError (61U)
 *   E_CVAppForcedIDLEFunctModeExitRequestACK (62U)
 *   E_CVAppForcedIDLEFunctModeExitRequestError (63U)
 *   E_CVAppIDLEStateEntryBISTinProgress (64U)
 *   E_CVAppIDLEStateEntryBISTError (65U)
 *   E_CVAppIDLEorPartialResetInProgress (66U)
 *   E_CVAppUnused3 (100U)
 *   E_CVAppUnused4 (101U)
 *   E_CVAppUnused5 (102U)
 *   E_CVAppUnused6 (103U)
 *   E_CVAppUnused7 (104U)
 *   E_CVAppUnused8 (105U)
 *   E_CVAppShutDownRequestACK (200U)
 *   E_CVAppShutDownRequestError (201U)
 *   E_CVAppDiagJobSystemHardResetACK_UNUSED (202U)
 *   E_CVAppDiagJobSystemHardResetError_UNUSED (203U)
 *   E_CVAppPrepareShutDownRequestACK (204U)
 *   E_CVAppPrepareShutDownRequestOMPowerUpInProgress (205U)
 *   E_CVAppPrepareShutDownRequestError (206U)
 *   E_CVAppResumeOperationRequestACK (207U)
 *   E_CVAppResumeOperationRequestError (208U)
 *   E_CVAppDynamometerEntryRequestACK (300U)
 *   E_CVAppDynamometerEntryRequestError (301U)
 *   E_CVAppDynamometerExitRequestACK (302U)
 *   E_CVAppDynamometerExitRequestError (303U)
 *   E_CVAppEOLEntryRequestACK (304U)
 *   E_CVAppEOLEntryRequestError (305U)
 *   E_CVAppEOLExitRequestACK (306U)
 *   E_CVAppEOLExitRequestError (307U)
 *   E_CVAppFlaEntryRequestACK_UNUSED (400U)
 *   E_CVAppFlaEntryRequestError_UNUSED (401U)
 *   E_CVAppFlaExitRequestACK_UNUSED (402U)
 *   E_CVAppFlaExitRequestError_UNUSED (403U)
 *   E_CVAppErrorInTransition (65534U)
 *   E_CVAppInvalidValue (65535U)
 * Rte_DT_AppMgr_OMModeSubModeType_0: Enumeration of integer in interval [0...255] with enumerators
 *   APPMGR_SYSTEM_MODE_POWER_UP (0U)
 *   APPMGR_SYSTEM_MODE_FW_UPGRADE (1U)
 *   APPMGR_SYSTEM_MODE_NORMAL (2U)
 *   APPMGR_SYSTEM_MODE_STANDBY (3U)
 *   APPMGR_SYSTEM_MODE_POWER_DOWN (4U)
 *   APPMGR_SYSTEM_MODE_DEGRADATION (5U)
 *   APPMGR_SYSTEM_MODE_RESERVED_TBD (6U)
 *   APPMGR_SYSTEM_MODE_LIDAR_LOCKED (9U)
 *   APPMGR_SYSTEM_MODE_FACTORY_CALIB (10U)
 *   APPMGR_SYSTEM_MODE_REPLAY (11U)
 * Rte_DT_NetSigMonASILB_StatusAutonomousDrivingType_1: Enumeration of integer in interval [0...255] with enumerators
 *   DATA_NOTAVAILABLE (0U)
 *   DATA_NOTAVAILABLE_BflMask 1U (0b00000001)
 *   DATA_NOTAVAILABLE_BflPn 0
 *   DATA_NOTAVAILABLE_BflLn 1
 *   NO_NEWUPDATES (1U)
 *   NO_NEWUPDATES_BflMask 1U (0b00000001)
 *   NO_NEWUPDATES_BflPn 0
 *   NO_NEWUPDATES_BflLn 1
 *   INVALIDDATA (2U)
 *   INVALIDDATA_BflMask 2U (0b00000010)
 *   INVALIDDATA_BflPn 1
 *   INVALIDDATA_BflLn 1
 *   VALID_DATA (3U)
 *   VALID_DATA_BflMask 3U (0b00000011)
 *   VALID_DATA_BflPn 0
 *   VALID_DATA_BflLn 2
 * Rte_DT_OMProt_SystemModeSubModeType_0: Enumeration of integer in interval [0...255] with enumerators
 *   OMPROT_SYSTEM_MODE_POWER_UP (0U)
 *   OMPROT_SYSTEM_MODE_FW_UPGRADE (1U)
 *   OMPROT_SYSTEM_MODE_NORMAL (2U)
 *   OMPROT_SYSTEM_MODE_STANDBY (3U)
 *   OMPROT_SYSTEM_MODE_POWER_DOWN (4U)
 *   OMPROT_SYSTEM_MODE_DEGRADATION (5U)
 *   OMPROT_SYSTEM_MODE_LOW_POWER (6U)
 *   OMPROT_SYSTEM_MODE_LOCKED (9U)
 *   OMPROT_SYSTEM_MODE_FACTORY_CALIB (10U)
 *   OMPROT_SYSTEM_MODE_REPLAY_MODE (11U)
 * Rte_DT_SignalMngr_PuCStateAndMode_0: Enumeration of integer in interval [0...255] with enumerators
 *   SIGNALMNGR_PUC_MGR_A53_INITIALIZED (1U)
 *   SIGNALMNGR_PUC_MGR_CVAPP_INITIALIZED (2U)
 *   SIGNALMNGR_PUC_MGR_CVAPP_COMM_INIT (3U)
 *   SIGNALMNGR_PUC_MGR_UNUSED1 (4U)
 *   SIGNALMNGR_PUC_MGR_UNUSED2 (5U)
 *   SIGNALMNGR_PUC_MGR_NORMAL (6U)
 *   SIGNALMNGR_PUC_MGR_CVAPP_ERROR (7U)
 *   SIGNALMNGR_PUC_MGR_INVALID (255U)
 * Rte_DT_SignalMngr_PuCStateAndMode_1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGNALMNGR_PUC_SYS_SecureModes_PLANT (0U)
 *   SIGNALMNGR_PUC_SYS_SecureModes_ENGINEERING (1U)
 *   SIGNALMNGR_PUC_SYS_SecureModes_FIELD (2U)
 *   SIGNALMNGR_PUC_SYS_SecureModes_INVALID (255U)
 * Rte_DT_SignalMngr_PuCStateAndMode_2: Enumeration of integer in interval [0...255] with enumerators
 *   SIGNALMNGR_PUC_HIL_DISABLED (0U)
 *   SIGNALMNGR_PUC_HIL_ENABLED (1U)
 *   SIGNALMNGR_PUC_HIL_INVALID (255U)
 * SignalMngr_LfcHandlerR7: Enumeration of integer in interval [0...65535] with enumerators
 *   E_R7AllOk (0U)
 *   E_R7DiagJobPartialReset (1U)
 *   E_R7IDLEFunctModeEntryRequest (2U)
 *   E_R7IDLEFunctModeExitRequest (3U)
 *   E_R7FeTraEntryRequest_UNUSED (4U)
 *   E_R7FeTraExitRequest_UNUSED (5U)
 *   E_R7DegradationPartialResetOM_UNUSED (6U)
 *   E_R7ForcedPartialResetRequest (7U)
 *   E_R7ForcedPartialResetRequestedFromCVAppACK (8U)
 *   E_R7ForcedPartialResetRequestedFromCVAppNACK (9U)
 *   E_R7ForcedIDLEFunctModeEntryRequest (10U)
 *   E_R7ForcedIDLEFunctModeExitRequest (11U)
 *   E_R7EnterTargetCalibrationWithReset_UNUSED (100U)
 *   E_R7EnterTargetCalibrationWithoutReset_UNUSED (101U)
 *   E_R7ShutDownRequest (200U)
 *   E_R7DiagJobSystemHardReset_UNUSED (201U)
 *   E_R7StandByRequest_UNUSED (202U)
 *   E_R7PrepareShutDownRequest (203U)
 *   E_R7ResumeOperationRequest (204U)
 *   E_R7DynamometerEntryRequest (300U)
 *   E_R7DynamometerExitRequest (301U)
 *   E_R7EOLEntryRequest (302U)
 *   E_R7EOLExitRequest (303U)
 *   E_R7FlaEntryRequest_UNUSED (400U)
 *   E_R7FlaExitRequest_UNUSED (401U)
 *   E_R7ErrorInTransition (65534U)
 *   E_R7InvalidValue (65535U)
 * SignalMngr_PuCAppMode: Enumeration of integer in interval [0...255] with enumerators
 *   SIGNALMNGR_PUC_MGR_A53_INITIALIZED (1U)
 *   SIGNALMNGR_PUC_MGR_CVAPP_INITIALIZED (2U)
 *   SIGNALMNGR_PUC_MGR_CVAPP_COMM_INIT (3U)
 *   SIGNALMNGR_PUC_MGR_UNUSED1 (4U)
 *   SIGNALMNGR_PUC_MGR_UNUSED2 (5U)
 *   SIGNALMNGR_PUC_MGR_NORMAL (6U)
 *   SIGNALMNGR_PUC_MGR_CVAPP_ERROR (7U)
 *   SIGNALMNGR_PUC_MGR_INVALID (255U)
 * SignalMngr_PuCSysMode: Enumeration of integer in interval [0...255] with enumerators
 *   SIGNALMNGR_PUC_SYS_SecureModes_PLANT (0U)
 *   SIGNALMNGR_PUC_SYS_SecureModes_ENGINEERING (1U)
 *   SIGNALMNGR_PUC_SYS_SecureModes_FIELD (2U)
 *   SIGNALMNGR_PUC_SYS_SecureModes_INVALID (255U)
 * StateAutonomousDrivingEnum: Enumeration of integer in interval [0...255] with enumerators
 *   StateAutonomousDrivingEnum_Off (1U)
 *   StateAutonomousDrivingEnum_Init (2U)
 *   StateAutonomousDrivingEnum_Ready (4U)
 *   StateAutonomousDrivingEnum_Preactive (8U)
 *   StateAutonomousDrivingEnum_Active (48U)
 *   StateAutonomousDrivingEnum_StateAutonomousDrivingEnum_INVALID (255U)
 * SysCtrl_RH850ShutDownScenarioType: Enumeration of integer in interval [0...255] with enumerators
 *   e_Sys_Ok (0U)
 *   e_ShutDown (1U)
 *   e_PowerDown (2U)
 *   e_CM_Reset (3U)
 *   e_ECU_RESET (4U)
 *   e_OM_Reset (5U)
 *   e_Fault_Reset (6U)
 *   e_Nm_Reset_Unused (7U)
 *   e_R7Wdg_Reset (8U)
 *   e_A53Wdg_Reset (9U)
 *   e_OMWdg_Reset (10U)
 *   e_PreShutDown (11U)
 *   e_ECU_RESET_SerDesTest (12U)
 * tdu8SerDes_GlobalType: Enumeration of integer in interval [0...255] with enumerators
 *   SERDES_RTE_STATE_INIT (0U)
 *   SERDES_RTE_STATE_WAIT_FOR_OM (1U)
 *   SERDES_RTE_STATE_LINKCHECK (2U)
 *   SERDES_RTE_STATE_LINKERROR (3U)
 *   SERDES_RTE_STATE_DISABLED (4U)
 *
 * Array Types:
 * ============
 * DataArrayType_uint8_1: Array with 1 element(s) of type uint8
 * DataArrayType_uint8_2: Array with 2 element(s) of type uint8
 * Dlt_ApplicationIDType: Array with 4 element(s) of type uint8
 * Dlt_ContextIDType: Array with 4 element(s) of type uint8
 * Dlt_Uint8BufferType: Array with 1300 element(s) of type uint8
 *
 * Record Types:
 * =============
 * AppMgr_HilDataType: Record with elements
 *   hilMode of type Rte_DT_AppMgr_HilDataType_0
 *   hilReadiness of type uint8
 * AppMgr_LfcHandlerCvappType: Record with elements
 *   lfcReq of type Rte_DT_AppMgr_LfcHandlerCvappType_0
 *   errorID of type uint16
 * AppMgr_OMModeSubModeType: Record with elements
 *   Mode of type Rte_DT_AppMgr_OMModeSubModeType_0
 *   SubMode of type Rte_DT_AppMgr_OMModeSubModeType_1
 * Dlt_MessageLogInfoType: Record with elements
 *   argCount of type uint8
 *   logLevel of type Dlt_MessageLogLevelType
 *   options of type Dlt_MessageOptionsType
 *   contextId of type Dlt_ContextIDType
 *   appId of type Dlt_ApplicationIDType
 * NetSigMonASILB_StatusAutonomousDrivingType: Record with elements
 *   StateAutonomousDrivingEnum of type StateAutonomousDrivingEnum
 *   StatusBitflag of type Rte_DT_NetSigMonASILB_StatusAutonomousDrivingType_1
 * OMProt_SystemModeSubModeType: Record with elements
 *   Mode of type Rte_DT_OMProt_SystemModeSubModeType_0
 *   SubMode of type Rte_DT_OMProt_SystemModeSubModeType_1
 * PMGR_CodingParamsType: Record with elements
 *   BWD_deactivated_ASIL of type uint8
 *   CVApp_OM_Degradation_Max_Reset_Allowed_ASIL of type uint8
 *   CVApp_OM_Max_Forced_Partial_Reset_Allowed_ASIL of type uint8
 *   CVApp_core_dump_deactivated of type uint8
 *   Coding_Error of type uint8
 *   Coding_Status of type uint8
 *   CountryType_ASIL of type uint8
 *   DL_ETHERNET_TRANSMISSION_ASIL of type uint8
 *   DUMMY_1 of type uint8
 *   DUMMY_10 of type uint8
 *   DUMMY_11 of type uint8
 *   DUMMY_12 of type uint8
 *   DUMMY_13 of type uint8
 *   DUMMY_14 of type uint8
 *   DUMMY_15 of type uint8
 *   DUMMY_16 of type uint8
 *   DUMMY_17 of type uint8
 *   DUMMY_18 of type uint8
 *   DUMMY_19 of type uint16
 *   DUMMY_2 of type uint8
 *   DUMMY_20 of type uint16
 *   DUMMY_21 of type uint16
 *   DUMMY_22 of type uint16
 *   DUMMY_3 of type uint8
 *   DUMMY_4 of type uint8
 *   DUMMY_5 of type uint8
 *   DUMMY_6 of type uint8
 *   DUMMY_7 of type uint8
 *   DUMMY_8 of type uint8
 *   DUMMY_9 of type uint8
 *   IPSec_Hash_Status_ASIL of type uint8
 *   OD_ETHERNET_TRANSMISSION_ASIL of type uint8
 *   OMHWErrorConfirmationTimeThreshold of type uint8
 *   OMUnintendedResetThreshold of type uint8
 *   OM_overtravel_time of type uint16
 *   Online_calibration_deactivated_ASIL of type uint8
 *   SERDES_LINEFAULT_CLEAR_TIMEOUT_LINK_LOCKED of type uint16
 *   SERDES_LINEFAULT_CLEAR_TIMEOUT_NO_LINK_LOCK of type uint16
 *   SERDES_LINEFAULT_SET_TIMEOUT_LINK_LOCKED of type uint16
 *   SERDES_LINEFAULT_SET_TIMEOUT_NO_LINK_LOCK of type uint16
 *   SERDES_LINK_ERROR_CONNECT_TIMEOUT_1 of type uint16
 *   T_OAV_ASIL of type uint8
 *   ThresholdForOnlineCalibrationFaultAfterStartup of type uint16
 *   TypeSteering_ASIL of type uint8
 *   TypeVehicle_ASIL of type uint8
 *   VM_nominal_pose_pitch_ASIL of type float32
 *   VM_nominal_pose_roll_ASIL of type float32
 *   VM_nominal_pose_x_ASIL of type sint16
 *   VM_nominal_pose_y_ASIL of type sint16
 *   VM_nominal_pose_yaw_ASIL of type float32
 *   VM_nominal_pose_z_ASIL of type sint16
 *   VM_pose_tolerance_pitch_neg_ASIL of type float32
 *   VM_pose_tolerance_pitch_pos_ASIL of type float32
 *   VM_pose_tolerance_roll_neg_ASIL of type float32
 *   VM_pose_tolerance_roll_pos_ASIL of type float32
 *   VM_pose_tolerance_yaw_neg_ASIL of type float32
 *   VM_pose_tolerance_yaw_pos_ASIL of type float32
 *   VM_pose_tolerance_z_neg_ASIL of type sint16
 *   VM_pose_tolerance_z_pos_ASIL of type uint16
 *   c_fasta_aktiv_c of type uint8
 *   enable_IDLE_mode_ASIL of type uint8
 *   enable_low_power_mode_ASIL of type uint8
 *   heating_FreezeTempThreshold of type sint8
 *   heating_MaxAmbientTempThreshold of type sint8
 *   heating_blockage_threshold of type uint8
 *   heating_deactivated of type uint8
 *   heating_defrost_time_sec of type uint16
 *   heating_ice_prevention_time_sec of type uint8
 *   max_ambient_temp_h of type sint8
 *   max_ambient_temp_l of type sint8
 *   max_power of type uint8
 *   max_sg_temp_h of type sint8
 *   max_sg_temp_l of type sint8
 *   min_ambient_temp_h of type sint8
 *   min_ambient_temp_l of type sint8
 *   min_energy_availability of type float32
 *   oc_max_age of type uint16
 *   oc_max_distance of type uint16
 *   oc_max_duration of type uint16
 *   oc_max_velocity of type float32
 *   oc_min_velocity of type float32
 *   vFOV_adjustement_disabled_ASIL of type uint8
 *   voltage_deactivation_threshold_ASIL of type float32
 *   voltage_reactivation_threshold_ASIL of type float32
 * SignalMngr_PuCStateAndMode: Record with elements
 *   puc_state of type Rte_DT_SignalMngr_PuCStateAndMode_0
 *   puc_mode of type Rte_DT_SignalMngr_PuCStateAndMode_1
 *   puc_hilMode of type Rte_DT_SignalMngr_PuCStateAndMode_2
 *   puc_functionalMode of type uint16
 *   puc_omMode of type uint8
 *   puc_omSubMode of type uint8
 *   error_description of type uint32
 *
 *********************************************************************************************************************/


#define ApplicationManager_START_SEC_CODE
#include "ApplicationManager_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_CodingAvailability
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <CODING_AVAILABLE> of ModeDeclarationGroupPrototype <Mode> of PortPrototype <PM_PiCodingAvailabilityMode_ASIL>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PM_PiCodingData_SM_CodingParams(PMGR_CodingParamsType *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_CodingAvailability_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {C5165648-BCEB-4edd-9802-E80433B6B81A}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ApplicationManager_CODE) AppMgr_CodingAvailability(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_CodingAvailability
 *********************************************************************************************************************/
  PMGR_CodingParamsType coding_data;
  (void)Rte_Read_PM_PiCodingData_SM_CodingParams(&coding_data);

  AppMgr_OM_overtravel_time = coding_data.OM_overtravel_time;
  dLogi(TAG, "Idle Mode OM Overtravel Time %d msec", (AppMgr_OM_overtravel_time * ((uint16)APP_M_PROCESS_IDLE_SEC_TO_MSEC)));
#if (STD_ON == DLT_TRACING_STATUS)
  ME_LOG_ID2(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078730,DLT_CSTRING("Idle Mode OM Overtravel Time in msec "), DLT_UINT32((uint32)(AppMgr_OM_overtravel_time * (uint32)APP_M_PROCESS_IDLE_SEC_TO_MSEC)));
  ME_LOG_ID2(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078826,DLT_CSTRING("LastIdleMode : "), DLT_UINT8((LastIdleModeRAM)));
#endif
  AppMgr_OM_overtravel_time = (AppMgr_OM_overtravel_time * (uint16)APP_M_PROCESS_IDLE_SEC_TO_MSEC)  / (uint16)APP_M_PROCESS_IDLE_PERIODICITY ; /* OM overtravel time in msec divided by the periodic funtion periodicity*/

  if (coding_data.enable_IDLE_mode_ASIL == APP_M_TRUE)
  {
    AppMgr_modes.idleModeAllowed = APP_M_TRUE;
    dLogi(TAG, "Idle Mode Allowed");
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078725,DLT_CSTRING("Idle Mode Allowed"));

#endif
  } else
  {
    AppMgr_modes.idleModeAllowed = APP_M_FALSE;
    dLogi(TAG, "Idle Mode Not Allowed");
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078726,DLT_CSTRING("Idle Mode NOT Allowed"));
#endif
  }
  AppMgr_Coding_Data_Avilable = TRUE;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_DID_4177_PucState
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DID_4177_UwbLidarStateA53>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_DID_4177_PucState(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_4177_UwbLidarStateA53_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_4177_PucState_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {D0902C84-6C0B-4360-9A22-EE5A66EA3503}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_DID_4177_PucState(P2VAR(uint8, AUTOMATIC, RTE_APPLICATIONMANAGER_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_4177_PucState (returns application error)
 *********************************************************************************************************************/
  Std_ReturnType RetValue;

  if(Data == NULL_PTR)
  {
    /* Do nothing*/
    RetValue = RTE_E_INVALID;
  }
  else
  {
    *Data = AppMgr_states.curr_pucState;
    RetValue = RTE_E_OK;
  }

  return RetValue;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_DID_4179_OmMode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DID_4179_UwbLidarSystemMode>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_DID_4179_OmMode(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_4179_UwbLidarSystemMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_4179_OmMode_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {76CAFE1E-9321-4f8e-872A-DDE02C6EEBB9}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_DID_4179_OmMode(P2VAR(uint8, AUTOMATIC, RTE_APPLICATIONMANAGER_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_4179_OmMode (returns application error)
 *********************************************************************************************************************/
  Std_ReturnType RetValue;

  if(Data == NULL_PTR)
  {
    /* Do nothing*/
    RetValue = RTE_E_INVALID;
  }
  else
  {
    *Data = AppMgr_modes.curr_OmMode.OmMode;
    RetValue = RTE_E_OK;
  }

  return RetValue;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_DID_417A_OmSubMode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DID_417A_UwbLidarSubSystemMode>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_DID_417A_OmSubMode(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_417A_UwbLidarSubSystemMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_417A_OmSubMode_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {8E14396A-90C8-48e0-8091-A7EDBFFFCB44}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_DID_417A_OmSubMode(P2VAR(uint8, AUTOMATIC, RTE_APPLICATIONMANAGER_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_417A_OmSubMode (returns application error)
 *********************************************************************************************************************/
  Std_ReturnType RetValue;

  if(Data == NULL_PTR)
  {
    /* Do nothing*/
    RetValue = RTE_E_INVALID;
  }
  else
  {
    *Data = AppMgr_modes.curr_OmMode.OmSubmode;
    RetValue = RTE_E_OK;
  }

  return RetValue;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_DID_417D_CucState
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DID_417D_UwbLidarOperatingStateCuc>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_DID_417D_CucState(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_417D_UwbLidarOperatingStateCuc_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_417D_CucState_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {C43646A5-5A86-47ee-B82C-82D10EE0AFE4}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_DID_417D_CucState(P2VAR(uint8, AUTOMATIC, RTE_APPLICATIONMANAGER_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_417D_CucState (returns application error)
 *********************************************************************************************************************/
  Std_ReturnType RetValue;

  if(Data == NULL_PTR)
  {
    /* Do nothing*/
    RetValue = RTE_E_INVALID;
  }
  else
  {
    *Data = AppMgr_states.curr_state;
    RetValue = RTE_E_OK;
  }

  return RetValue;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_DID_417E_CucMode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DID_417E_UwbLidarOperatingModeCuc>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_DID_417E_CucMode(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_417E_UwbLidarOperatingModeCuc_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_417E_CucMode_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {CFDE4673-D88C-4af4-B5E0-830C762AC170}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_DID_417E_CucMode(P2VAR(uint8, AUTOMATIC, RTE_APPLICATIONMANAGER_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_417E_CucMode (returns application error)
 *********************************************************************************************************************/
  Std_ReturnType RetValue = RTE_E_INVALID;

  if(Data == NULL_PTR)
  {
    /* Do nothing*/
  }
  else
  {
    *Data = AppMgr_modes.curr_mode;
    RetValue = RTE_E_OK;
  }

  return RetValue;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_DID_41B4_Hil
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DID_41B4_UwbLidarHilMode>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_DID_41B4_Hil(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_41B4_UwbLidarHilMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_41B4_Hil_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {CBF2D4BF-B946-46c0-9CDA-C812D90F825A}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_DID_41B4_Hil(P2VAR(uint8, AUTOMATIC, RTE_APPLICATIONMANAGER_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_41B4_Hil (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType RetValue;

  if(Data == NULL_PTR)
  {
    /* Do nothing*/
    RetValue = RTE_E_INVALID;
  }
  else
  {
    Data[0] = AppMgr_modes.hilData.hilReadiness;
    Data[1] = AppMgr_modes.hilData.hilMode;
    RetValue = RTE_E_OK;
  }

  return RetValue;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_DID_41B5_EnergySavMode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DID_41B5_UwbLidarVsmOpmode>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_DID_41B5_EnergySavMode(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_41B5_UwbLidarVsmOpmode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_41B5_EnergySavMode_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {27D74323-08CD-4dbd-BF78-EDA63D63D99B}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_DID_41B5_EnergySavMode(P2VAR(uint8, AUTOMATIC, RTE_APPLICATIONMANAGER_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_41B5_EnergySavMode (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType RetValue;

  if(Data == NULL_PTR)
  {
    /* Do nothing */
    RetValue = RTE_E_INVALID;
  }
  else
  {
    *Data = RE_AppMgr_Main_fetraflaMode;
    RetValue = RTE_E_OK;
  }

  return RetValue;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_DID_44F8_PartialResetErrorID
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DID_44F8_UwbLidarErrid058765>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_DID_44F8_PartialResetErrorID(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_44F8_UwbLidarErrid058765_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_44F8_PartialResetErrorID_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {E0003C5A-1ADB-437a-9375-4BD3D727145A}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_DID_44F8_PartialResetErrorID(P2VAR(uint8, AUTOMATIC, RTE_APPLICATIONMANAGER_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DID_44F8_PartialResetErrorID (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType RetValue;

  if(Data == NULL_PTR)
  {
    /* Do nothing */
    RetValue = RTE_E_INVALID;
  }
  else
  {
    /* change endianness for FFD */
    Data[0] = (uint8)(AppMgr_PartialResetErrorID >> APP_MGR_FFD_OFFSET_1BYTE);
    Data[1] = (uint8)(AppMgr_PartialResetErrorID & APP_MGR_FFD_1BYTE);
    RetValue = RTE_E_OK;
  }

  return RetValue;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_DcmReqState
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <AppMgr_Dcm_StateReq> of PortPrototype <AppMgr_DcmStateReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AppMgr_Internal_RspDiagRcv_diagRsp(AppMgr_RspDiagType *data)
 *   Std_ReturnType Rte_Read_OMAuth_InitNegoStatus_InitNego(OMAuth_InitNegoStatusType *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AppMgr_GetDcmIdleStatus_idleStatus(AppMgr_DcmIdleStatusType data)
 *   Std_ReturnType Rte_Write_AppMgr_Internal_ReqDiagSnd_diagReq(AppMgr_FnctReqType data)
 *   Std_ReturnType Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(AppMgr_RspDiagType data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_DcmReqState(AppMgr_DcmOpCodeType opCode, uint8 opStatus, pcuint8 data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK
 *   RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DcmReqState_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {FB5C94B8-D270-4c8f-8877-AEEC40D10649}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_DcmReqState(AppMgr_DcmOpCodeType opCode, uint8 opStatus, pcuint8 data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DcmReqState (returns application error)
 *********************************************************************************************************************/
  Std_ReturnType returnStatus = RTE_E_OK;

  switch (opCode)
  {
    case e_DCM_PartialReset:
    {
        returnStatus = AppMgr_HandleDcmReqPR(opStatus);
    }
      break;
    case e_DCM_IdleState:
    {
        returnStatus = AppMgr_HandleDcmReqIdle(opStatus, data);
    }
      break;
    default:
    {
       /* nothing to do */
    }
      break;
  }

  return returnStatus;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_DltInit
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DltSwcMessageService_8_RegisterContext(const uint8 *AppId, const uint8 *ContextId, const uint8 *AppDescription, uint8 LenAppDescription, const uint8 *ContextDescription, uint8 LenContextDescription)
 *     Argument AppId: uint8* is of type Dlt_ApplicationIDType
 *     Argument ContextId: uint8* is of type Dlt_ContextIDType
 *     Argument AppDescription: uint8* is of type Dlt_Uint8BufferType
 *     Argument ContextDescription: uint8* is of type Dlt_Uint8BufferType
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DltSwcMessageService_DLT_E_CONTEXT_ALREADY_REG, RTE_E_DltSwcMessageService_DLT_E_UNKNOWN_SESSION_ID
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DltInit_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {B2316770-D23A-43fa-8F1F-89D6FE95705B}
* Traceability to source code: Req. -ID: 14071684
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ApplicationManager_CODE) AppMgr_DltInit(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_DltInit
 *********************************************************************************************************************/
  DLT_DECLARE_CONTEXT(APPLMANGR);
  DLT_REGISTER_APP("CuC", "Module application ApplicationManager");
  DLT_REGISTER_CONTEXT_APP(APPLMANGR, "APPM", "CuC", "Module context ApplicationManager");

  (void)Rte_Call_DltSwcMessageService_8_RegisterContext(APPLMANGR.appId, APPLMANGR.contextId, NULL_PTR, 0, NULL_PTR, 0);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_ErrorHandler
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetEvent> of PortPrototype <AppMgr_ErrorMonitor>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void AppMgr_ErrorHandler(uint16 ErrorID)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_ErrorHandler_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {3D715CF5-3C32-4e80-B4FC-F14A805E3574}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ApplicationManager_CODE) AppMgr_ErrorHandler(uint16 ErrorID) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_ErrorHandler
 *********************************************************************************************************************/
  if(EMC_Error_ID_0x280A == ErrorID)
  {
    AppMgr_Process_OM_CoreDump = APP_M_OM_COREDUMP_OK;
  }
  else
  {
    /* Do Nothing */
  }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AppMgr_GetHilMode_HilMode(const AppMgr_HilDataType *data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DltSwcMessageService_8_RegisterContext(const uint8 *AppId, const uint8 *ContextId, const uint8 *AppDescription, uint8 LenAppDescription, const uint8 *ContextDescription, uint8 LenContextDescription)
 *     Argument AppId: uint8* is of type Dlt_ApplicationIDType
 *     Argument ContextId: uint8* is of type Dlt_ContextIDType
 *     Argument AppDescription: uint8* is of type Dlt_Uint8BufferType
 *     Argument ContextDescription: uint8* is of type Dlt_Uint8BufferType
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DltSwcMessageService_DLT_E_CONTEXT_ALREADY_REG, RTE_E_DltSwcMessageService_DLT_E_UNKNOWN_SESSION_ID
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_Init_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {DBB621AF-ED8C-4af8-914E-8ED57BCF551A}
* Traceability to source code: Req. -ID: 8424517
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ApplicationManager_CODE) AppMgr_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_Init
 *********************************************************************************************************************/
  AppMgr_HilDataType hilData;

#if (ME_HILENABLE_BUILD == 1U)
  AppMgr_modes.hilData.hilMode = HIL_ENABLED;
#else
  if (1U == Hil_NvData.hilMode)
  {
    AppMgr_modes.hilData.hilMode = HIL_ENABLED;
  } else {
    AppMgr_modes.hilData.hilMode = HIL_DISABLED;
  }
#endif

  /* Req. -ID: 8424517 */
  dLogi(TAG, "HIL mode changed: %s(%d)", AppMgr_print_R7_Hil[AppMgr_modes.hilData.hilMode].text,
                                         AppMgr_modes.hilData.hilMode);
  hilData.hilMode = AppMgr_modes.hilData.hilMode;
  hilData.hilReadiness = AppMgr_modes.hilData.hilReadiness;
  (void)Rte_Write_AppMgr_GetHilMode_HilMode((const AppMgr_HilDataType *)&hilData);

  AppMgr_states.prev_state = AppMgr_states.curr_state;
  AppMgr_states.curr_state = APP_MGR_STARTUP;
  dLogi(TAG, "CuC state changed: %d to %s(%d)", APP_M_NO_STATE, AppMgr_print_R7_states[APP_MGR_STARTUP].text, APP_MGR_STARTUP);

  (void)AppMgr_StateChanged();

  stRsuDegradation = NvMExt_RSU_DEGRADATION_STAT_RamData;
  dLogi(TAG, "RsuDegradation Status 0x%lx", stRsuDegradation);
#if (STD_ON == DLT_TRACING_STATUS)
  ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078792, DLT_CSTRING("RsuDegradation Status"),
                                                                 DLT_UINT32(stRsuDegradation));
#endif

#ifdef EMC_Error_ID_0x2B01
  (void)Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(EMC_Error_ID_0x2B01, DEM_EVENT_STATUS_PASSED);
#endif
  AppMgr_DynamometerModeInit();
  AppMgr_EolModeInit();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_LifecycleHandlerCvapp
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <AppMgr_LfcHandlerCvapp> of PortPrototype <AppMgr_LifecycleHandlerCvapp>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SysCtrl_GetVbat_VbatVal(uint16 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DegMgr_AppMgrPartialResetReqAllowedIF_DegMgr_AppMgrPartialResetReqAllowed(uint16 errorId, boolean *isAllowed)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(SignalMngr_LfcHandlerR7 req)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DiagnosticMonitor_Partial_Reset_DTC_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void AppMgr_LifecycleHandlerCvapp(const AppMgr_LfcHandlerCvappType *req)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_LifecycleHandlerCvapp_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {9A9BCDF0-3AC8-4c92-A35A-CB32EF56D646}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ApplicationManager_CODE) AppMgr_LifecycleHandlerCvapp(P2CONST(AppMgr_LfcHandlerCvappType, AUTOMATIC, RTE_APPLICATIONMANAGER_APPL_DATA) req) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_LifecycleHandlerCvapp
 *********************************************************************************************************************/
  dLogi(TAG, "Received cvapp req=%d", req->lfcReq);

  switch (req->lfcReq)
  {
    case E_CVAppAllOk:
    {
      dLogi(TAG, "received E_CVAppAllOk");
    }
      break;
    case E_CVAppOMForcedPartialResetACK:
    {
      dLogi(TAG, "received E_CVAppOMForcedPartialResetACK");
      if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_ACK_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_OK;
      }
      else if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_ACK_FORCED_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_OK_ACK;

      }
      else
      {
        /* If received Cvapp Ack without any request do not consider it */
      }
    }
      break;
    case E_CVAppOMForcedPartialResetError:
    {
      dLogi(TAG, "received E_CVAppOMForcedPartialResetError");
      if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_ACK_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_ERROR;
      }
      else if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_ACK_FORCED_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_ERROR;

      }
      else
      {
        /* If received Cvapp Ack without any request do not consider it */
      }
    }
      break;
    case E_CVAppDiagJobPartialResetACK:
    {
      dLogi(TAG, "received E_CVAppDiagJobPartialResetACK");
      if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_ACK_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_OK;
      }
      else
      {
         /* If received Cvapp Ack without any request do not consider it */
      }
    }
      break;
    case E_CVAppDiagJobPartialResetError:
    {
      dLogi(TAG, "received E_CVAppDiagJobPartialResetError");
      if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_ACK_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_ERROR;
      }
      else
      {
         /* If received Cvapp Ack without any request do not consider it */
      }
    }
      break;
    case E_CVAppDetectsOMAliveMonitoringFailedForcedPartialResetNeeded:
    case E_CVAppOMTemperatureOverRangePartialResetNeeded:
    case E_CVAppOMDegradationRecoveryFailedPartialResetNeeded:
    case E_CVAppOMLaserTriggerOffRecoveryFailedPartialResetNeeded:
    case E_CVAppOMLaserPowerSupplyOffRecoveryFailedPartialResetNeeded:
    case E_CVAppDetectsOMSafetyGoalViolationsPartialResetNeeded:
    {
      Std_ReturnType status;
      boolean isAllowedPR, isAllowedNextState;
      uint16 vBatCM ;

      dLogi(TAG, "received CvApp-OM degradation %d", req->lfcReq);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID4(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078777, DLT_CSTRING("PartialReset: Received OM degr"),
                                                                    DLT_UINT16(req->lfcReq),
                                                                    DLT_CSTRING("errorID"),
                                                                    DLT_UINT16(req->errorID));
#endif
      (void)Rte_Read_SysCtrl_GetVbat_VbatVal(&vBatCM); /*PRQA S 3426 */ /* MSRD_3426 */ /*PRQA S 3417 */ /* MSRD_3417 */
      status = Rte_Call_DegMgr_AppMgrPartialResetReqAllowedIF_DegMgr_AppMgrPartialResetReqAllowed(req->errorID, &isAllowedPR);
      isAllowedNextState = AppMgr_AllowedNextState(APP_MGR_PARTIAL_RESET);

      if ((RTE_E_OK == status) &&
          (APP_M_TRUE == isAllowedPR) &&
          (APP_M_TRUE == isAllowedNextState) &&
          (NO_REQ == AppMgr_states.reqInProgress) &&
          (APP_M_PR_ALOWED_VOLTAGE_THRESHOLD < vBatCM))
      {
        if(AppMgr_partialReset == APP_M_PR_NONE)
        {
          AppMgr_states.reqInProgress = PENDING_REQ;
          AppMgr_states.newAppState = APP_MGR_PARTIAL_RESET;
          AppMgr_partialResetReason = APP_M_PR_REASON_CVAPP;
          dLogi(TAG, "Start Partialreset OM degr");
#if (STD_ON == DLT_TRACING_STATUS)
          ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078778, DLT_CSTRING("Start Partialreset OM degr"));
#endif
          AppMgr_PartialResetErrorID = ErrorInfoTable[req->errorID].ErrorID;
        }
        else
        {
          dLogi(TAG, "Partialreset already in progress");
        }
      }
      else
      {
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID10(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078759, DLT_CSTRING("Partialreset Mode change not allowed, status = "), DLT_UINT8(status),
                                                                       DLT_CSTRING("isAllowedPR"), DLT_UINT8(isAllowedPR),
                                                                       DLT_CSTRING("isAllowedNextState"), DLT_UINT8(isAllowedNextState),
                                                                       DLT_CSTRING("reqInProgress"), DLT_UINT8(AppMgr_states.reqInProgress),
                                                                       DLT_CSTRING("vBatCM"), DLT_UINT16(vBatCM));
#endif
        dLoge(TAG, "PartialReset state change not allowed, status %d isAllowedPR %d isAllowedNextState %d reqInProgress %d vBatCM %d", status, isAllowedPR, isAllowedNextState, AppMgr_states.reqInProgress, vBatCM);
        /* Send NACK to CvApp to handle Alowed PR counter */
        (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7ForcedPartialResetRequestedFromCVAppNACK);
      }
    }
      break;

    case E_CVAppShutDownRequestACK:
    {
      /* shutdown ACP */
      dLogi(TAG, "received E_CVAppShutDownRequestACK");
      Rte_Trigger_AppMgr_OMoff_OMoff();
    }
      break;
    case E_CVAppShutDownRequestError:
    {
      dLogi(TAG, "received E_CVAppShutDownRequestError");
    }
      break;
    case E_CVAppForcedIDLEFunctModeEntryRequestError:
    {
      /* Req. -ID: 14184523 */
      dLoge(TAG, "Forced IDLE Mode Req reject By CvApp");
      if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_ACK_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_ERROR;
      }
      else
      {
        /* If received Cvapp Ack without any request do not consider it */
      }
    }
      break;

    case E_CVAppForcedIDLEFunctModeEntryRequestACK:
    {
      /* Req. -ID: 14184523 */
      dLogi(TAG, "Forced IDLE Mode Req Ack by Cvapp");
      if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_ACK_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_OK;
      }
      else
      {
        /* If received Cvapp Ack without any request do not consider it */
      }
    }
      break;
    case E_CVAppForcedIDLEFunctModeExitRequestACK:
    {
      dLogi(TAG, "received E_CVAppForcedIDLEFunctModeExitRequestACK");
      if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_ACK_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_OK;
      }
      else
      {
        /* If received Cvapp Ack without any request do not consider it */
      }
    }
      break;
    case E_CVAppForcedIDLEFunctModeExitRequestError:
    {
      dLogi(TAG, "received E_CVAppForcedIDLEFunctModeExitRequestError");
      if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_ACK_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_ERROR;
      }
      else
      {
        /* If received Cvapp Ack without any request do not consider it */
      }
    }
    break;
    case E_CVAppIDLEFunctModeEntryRequestACK:
    {
      dLogi(TAG, "received E_CVAppIDLEFunctModeEntryRequestACK");
      if((AppMgr_Idle.idleCvappAck == APP_M_CVAPP_WAIT_BIST_DONE) ||
         (AppMgr_Idle.idleCvappAck == APP_M_CVAPP_WAIT_BIST_INPROGR))
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_BIST_DONE_ACK;
      }
      else
      {
        /* If received Cvapp Ack without any request do not consider it */
      }
    }
    break;
    case E_CVAppIDLEFunctModeEntryRequestError:
    {
      dLogi(TAG, "received E_CVAppIDLEFunctModeEntryRequestError");
      if((AppMgr_Idle.idleCvappAck == APP_M_CVAPP_WAIT_BIST_DONE) ||
         (AppMgr_Idle.idleCvappAck == APP_M_CVAPP_WAIT_BIST_INPROGR))
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_ERROR;
      }
      else
      {
        /* If received Cvapp Ack without any request do not consider it */
      }
    }
    break;
    case E_CVAppIDLEStateEntryBISTinProgress:
    {
      dLogi(TAG, "received E_CVAppIDLEStateEntryBISTinProgress");
      if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_WAIT_BIST_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_BIST_IN_PROGRESS_ACK;
      }
      else
      {
        /* If received Cvapp Ack without any request do not consider it */
      }
    }
    break;
    case E_CVAppIDLEStateEntryBISTError:
    {
      dLogi(TAG, "received E_CVAppIDLEStateEntryBISTError");
      if(AppMgr_Idle.idleCvappAck == APP_M_CVAPP_WAIT_BIST_INPROGR)
      {
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_ERROR;
      }
      else
      {
        /* If received Cvapp Ack without any request do not consider it */
      }
    }
    break;
    case E_CVAppIDLEorPartialResetInProgress:
    {
      dLogi(TAG, "received E_CVAppIDLEorPartialResetInProgress");
    }
    break;
    case E_CVAppErrorInTransition:
    case E_CVAppInvalidValue:
    {
      dLogi(TAG, "received E_CVAppInvalid");
    }
      break;

    case E_CVAppDynamometerEntryRequestACK:
    case E_CVAppDynamometerEntryRequestError:
    case E_CVAppDynamometerExitRequestACK:
    case E_CVAppDynamometerExitRequestError:
      (void)AppMgr_NotifyDynamometerAck(req->lfcReq);
    break;

    case E_CVAppEOLEntryRequestACK:
    case E_CVAppEOLEntryRequestError:
    case E_CVAppEOLExitRequestACK:
    case E_CVAppEOLExitRequestError:
      (void)AppMgr_NotifyEolAck(req->lfcReq);
    break;
    case E_CVAppPrepareShutDownRequestACK :
    {
      /* Reset timer and raise flag to continue */
      AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqTimer = APP_M_PREP_SHUTDOWN_REQ_TIMER_STOPPED ;
      AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqCvappAck = APP_M_CVAPP_ACK_OK ;
      dLogi(TAG, "received E_CVAppPrepareShutDownRequestACK");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078764, DLT_CSTRING("received E_CVAppPrepareShutDownRequestACK"));
#endif
    }
      break;
    case E_CVAppPrepareShutDownRequestError :
    {
      /* Not Decided yet will just continue with the sequence */
      /* Ideally should do a full system reset and log DTC Or Call DegradationMgr*/
      AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqTimer = APP_M_PREP_SHUTDOWN_REQ_TIMER_STOPPED ;
      AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqCvappAck = APP_M_CVAPP_ACK_ERROR ;
      dLogi(TAG, "received E_CVAppPrepareShutDownRequestError");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078765, DLT_CSTRING("received E_CVAppPrepareShutDownRequestError"));
#endif
    }
      break;
    case E_CVAppResumeOperationRequestACK :
    {
      dLogi(TAG, "received E_CVAppResumeOperationRequestACK");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078772, DLT_CSTRING("received E_CVAppResumeOperationRequestACK"));
#endif
    }
      break;
    case E_CVAppResumeOperationRequestError :
    {
      /* Not Decided yet will just continue with the sequence */
      /* Ideally should do a full system reset and log DTC Or Call DegradationMgr*/
      dLogi(TAG, "received E_CVAppResumeOperationRequestError");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078787, DLT_CSTRING("received E_CVAppResumeOperationRequestError"));
#endif
    }
      break;
    default:
      break;
  }
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID2(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078724, DLT_CSTRING("A53 LFC Request = "),DLT_UINT16(req->lfcReq));
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_MainFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AppMgr_CvAppAliveness_state(CvAppAliveness *data)
 *   Std_ReturnType Rte_Read_AppMgr_StatusAutonomousDriving_Output_StatusAutonomousDrivingEL(NetSigMonASILB_StatusAutonomousDrivingType *data)
 *   Std_ReturnType Rte_Read_HAM_HamMode_HamMode(HAM_HamModeType *data)
 *   Std_ReturnType Rte_Read_OMAuth_InitNegoStatus_InitNego(OMAuth_InitNegoStatusType *data)
 *   Std_ReturnType Rte_Read_OMProt_SystemModeSubMode_ModeSubMode(OMProt_SystemModeSubModeType *data)
 *   Std_ReturnType Rte_Read_OmProt_OmCurrentFwMode_fwMode(OmProt_OmCurrentFwModeType *data)
 *   Std_ReturnType Rte_Read_SignalMngr_PuCStateMode_PuCStateMode(SignalMngr_PuCStateAndMode *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ApMgr_OMModeSubMode_ModeSubMode(const AppMgr_OMModeSubModeType *data)
 *   Std_ReturnType Rte_Write_AppMgr_GetFunctionalMode_FunctionalMode(AppMgr_FunctionalModeType data)
 *   Std_ReturnType Rte_Write_AppMgr_GetHadMode_hadMode(AppMgr_HadModeType data)
 *   Std_ReturnType Rte_Write_AppMgr_Internal_ReqDegrSnd_degrReq(AppMgr_FnctReqType data)
 *   Std_ReturnType Rte_Write_AppMgr_Internal_ReqOmcSnd_omcReq(AppMgr_FnctReqType data)
 *   Std_ReturnType Rte_Write_AppMgr_PADStatus_Status(AppMgr_PADStatusType data)
 *   Std_ReturnType Rte_Write_AppMgr_PucMode_Mode(AppMgr_PucModeType data)
 *   Std_ReturnType Rte_Write_AppMgr_PucState_State(AppMgr_PucStateType data)
 *   Std_ReturnType Rte_Write_AppMgr_ReqBswMEcuMode_requestedMode(AppMgr_ReqBswMEcuModeType data)
 *
 * Trigger Interfaces:
 * ===================
 *   void Rte_Trigger_AppMgr_CVAppError_NoCoreDump(void)
 *   void Rte_Trigger_AppMgr_OMoff_OMoff(void)
 *   void Rte_Trigger_AppMgr_OMon_OMon(void)
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_AppMgr_DynamoMode_Mode(uint8 mode)
 *   Modes of Rte_ModeType_AppMgr_DynamoModeMDG:
 *   - RTE_MODE_AppMgr_DynamoModeMDG_APP_MGR_DYNAMOMETER_DISABLED
 *   - RTE_MODE_AppMgr_DynamoModeMDG_APP_MGR_DYNAMOMETER_ENABLED
 *   - RTE_MODE_AppMgr_DynamoModeMDG_APP_MGR_DYNAMO_NOMODE
 *   - RTE_TRANSITION_AppMgr_DynamoModeMDG
 *   Std_ReturnType Rte_Switch_AppMgr_EOLMode_Mode(uint8 mode)
 *   Modes of Rte_ModeType_AppMgr_EOLModeMDG:
 *   - RTE_MODE_AppMgr_EOLModeMDG_APP_MGR_EOL_DISABLED
 *   - RTE_MODE_AppMgr_EOLModeMDG_APP_MGR_EOL_ENABLED
 *   - RTE_MODE_AppMgr_EOLModeMDG_APP_MGR_EOL_NOMODE
 *   - RTE_TRANSITION_AppMgr_EOLModeMDG
 *   Std_ReturnType Rte_Switch_AppMgr_RequestMaxR7StackUtilize_Shutdown(uint8 mode)
 *   Modes of Rte_ModeType_AppMgr_MaxStackCalc:
 *   - RTE_MODE_AppMgr_MaxStackCalc_INIT
 *   - RTE_MODE_AppMgr_MaxStackCalc_START
 *   - RTE_TRANSITION_AppMgr_MaxStackCalc
 *   Std_ReturnType Rte_Switch_AppMgr_Request_Full_ComM_Mode(ComM_ModeType mode)
 *   Modes of Rte_ModeType_ComMMode:
 *   - RTE_MODE_ComMMode_COMM_FULL_COMMUNICATION
 *   - RTE_MODE_ComMMode_COMM_NO_COMMUNICATION
 *   - RTE_MODE_ComMMode_COMM_SILENT_COMMUNICATION
 *   - RTE_TRANSITION_ComMMode
 *   Std_ReturnType Rte_Switch_AppMgr_StateChanged_state(AppMgr_SysStateType mode)
 *   Modes of Rte_ModeType_AppMgr_SysStatesMDG:
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_A53_INITIALIZED
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_FAULT
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_HARD_RESET
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_NORMAL
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_OM_FLASH
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_PARTIAL_RESET
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_RESET_BOOTL
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_SAFE_COMM
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_SAFE_SILENT
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_SERDES_TESET
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_STANDBY
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_STARTUP
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_UNUSED_1
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_UNUSED_10
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_UNUSED_2
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_UNUSED_3
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_UNUSED_4
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_UNUSED_5
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_UNUSED_6
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_UNUSED_7
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_UNUSED_8
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_UNUSED_9
 *   - RTE_MODE_AppMgr_SysStatesMDG_APP_MGR_WAIT_CVAPP_INIT
 *   - RTE_TRANSITION_AppMgr_SysStatesMDG
 *   Std_ReturnType Rte_Switch_AppMgr_SysModeChanged_Mode(AppMgr_SysModeType mode)
 *   Modes of Rte_ModeType_AppMgr_Sys_SecureModesMDG:
 *   - RTE_MODE_AppMgr_Sys_SecureModesMDG_APP_MGR_SYS_SecureMode_ENGINEERING
 *   - RTE_MODE_AppMgr_Sys_SecureModesMDG_APP_MGR_SYS_SecureMode_FIELD
 *   - RTE_MODE_AppMgr_Sys_SecureModesMDG_APP_MGR_SYS_SecureMode_PLANT
 *   - RTE_TRANSITION_AppMgr_Sys_SecureModesMDG
 *   uint8 Rte_Mode_AppMgr_BswmNotification_Mode(void)
 *   Modes of Rte_ModeType_AppMgr_BswmNotificationMDG:
 *   - RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_NORMAL_OPER
 *   - RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_OTHER
 *   - RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_RESTART
 *   - RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_SHUTDOWN
 *   - RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_START_CMRESET
 *   - RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_START_CODING
 *   - RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_START_HARDRESET
 *   - RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_START_STANDBY
 *   - RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_UNUSED_1
 *   - RTE_TRANSITION_AppMgr_BswmNotificationMDG
 *   uint8 Rte_Mode_Bs_SecEcuMode_Mode(void)
 *   Modes of Rte_ModeType_SecEcuMode:
 *   - RTE_MODE_SecEcuMode_ENGINEERING
 *   - RTE_MODE_SecEcuMode_FIELD
 *   - RTE_MODE_SecEcuMode_PLANT
 *   - RTE_TRANSITION_SecEcuMode
 *   Omc_OperatingModeType Rte_Mode_OMC_OperatingModeNotification_currentOperatingMode(void)
 *   Modes of Rte_ModeType_OmcOperatingMode:
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_ASSEMBLY
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_BMW_FLASH
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_NORMAL
 *   - RTE_MODE_OmcOperatingMode_OMC_MODE_TRANSPORT
 *   - RTE_TRANSITION_OmcOperatingMode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Bs_SecureFeature_NotifyFeatureExecuted(uint32 featureId)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SecureFeature_E_NOT_OK
 *   Std_ReturnType Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(uint16 ErrorID, Dem_EventStatusType EventStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ErrMgr_DiagnosticMonitorIF_E_NOT_OK, RTE_E_ErrMgr_DiagnosticMonitorIF_E_OK
 *   Std_ReturnType Rte_Call_SerDes_read_States_read_state(tdu8SerDes_GlobalType *SerDesState)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SerDes_read_StatesIF_E_NOT_OK, RTE_E_SerDes_read_StatesIF_E_OK
 *   Std_ReturnType Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(SignalMngr_LfcHandlerR7 req)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SysCtrl_SetShutDown_Set_ShutDown(SysCtrl_RH850ShutDownScenarioType ShutDown)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DltSwcMessageService_8_SendLogMessage(const Dlt_MessageLogInfoType *LogInfo, const uint8 *LogData, uint16 LogDataLength)
 *     Argument LogData: uint8* is of type Dlt_Uint8BufferType
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DltSwcMessageService_DLT_E_MSG_TOO_LARGE, RTE_E_DltSwcMessageService_DLT_E_NO_BUFFER, RTE_E_DltSwcMessageService_DLT_E_UNKNOWN_SESSION_ID
 *   Std_ReturnType Rte_Call_NvmExtService_AppMgr_HilData_Read(uint16 block_Id, dtRef_VOID data_ptr, uint8 index, NvmExt_ReqStatusType *status_ptr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvmExt_ServiceIF_E_NOT_OK, RTE_E_NvmExt_ServiceIF_E_OK
 *   Std_ReturnType Rte_Call_NvmExtService_AppMgr_HilData_Write(uint16 block_Id, dtRef_const_VOID data_ptr, uint8 index, NvmExt_ReqStatusType *status_ptr, boolean is_immediate)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvmExt_ServiceIF_E_NOT_OK, RTE_E_NvmExt_ServiceIF_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_MainFunction_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {4C2DEBDB-978F-430f-8475-5507D4F161DA}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ApplicationManager_CODE) AppMgr_MainFunction(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_MainFunction
 *********************************************************************************************************************/

  /* Step0: Check PuC state/mode change, Rsu Degradation */
  AppMgr_ManageRsuDegradation();
  AppMgr_ManagePuCStateChange();
  AppMgr_ManagePuCModeChange();
  AppMgr_ReadHAMData();

  /* Step1: Check CuC mode change */
  AppMgr_ManageAppMgrStateModeChange();

  /* Step2: Check state pending requests from swc */
  AppMgr_CheckPendingRequests();

  /* Step3: Process BswM State Machine */
  AppMgr_ProcessBswMStateMachine();
  AppMgr_DynamometerModeStateMachine();
  AppMgr_EolModeStateMachine();
  AppMgr_Update_DynamoEOL_FunctionalModes();

  /* Step4: Process actions inside AppMgr State Machine for current state */
  AppMgr_ProcessAppMgrCurrentState();

  /* Step5: Broadcast All Modes and States */
  AppMgr_BroadcastAllModesStates();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_ProcessIdle
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 20ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AppMgr_Internal_ReqDegrRcv_degrReq(AppMgr_FnctReqType *data)
 *   Std_ReturnType Rte_Read_AppMgr_Internal_ReqDiagRcv_diagReq(AppMgr_FnctReqType *data)
 *   Std_ReturnType Rte_Read_AppMgr_Internal_ReqNtwRcv_ntwReq(AppMgr_FnctReqType *data)
 *   Std_ReturnType Rte_Read_AppMgr_Internal_ReqOmcRcv_omcReq(AppMgr_FnctReqType *data)
 *   Std_ReturnType Rte_Read_AppMgr_StatusAutonomousDriving_Output_StatusAutonomousDrivingEL(NetSigMonASILB_StatusAutonomousDrivingType *data)
 *   Std_ReturnType Rte_Read_HAM_HamMode_HamMode(HAM_HamModeType *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AppMgr_IdleModeStatus_idleMode(AppMgr_IdleModeStatusType data)
 *   Std_ReturnType Rte_Write_AppMgr_Internal_ReqDegrSnd_degrReq(AppMgr_FnctReqType data)
 *   Std_ReturnType Rte_Write_AppMgr_Internal_ReqDiagSnd_diagReq(AppMgr_FnctReqType data)
 *   Std_ReturnType Rte_Write_AppMgr_Internal_ReqNtwSnd_ntwReq(AppMgr_FnctReqType data)
 *   Std_ReturnType Rte_Write_AppMgr_Internal_ReqOmcSnd_omcReq(AppMgr_FnctReqType data)
 *   Std_ReturnType Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(AppMgr_RspDiagType data)
 *
 * Trigger Interfaces:
 * ===================
 *   void Rte_Trigger_AppMgr_OMBist_Start(void)
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(SignalMngr_LfcHandlerR7 req)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_ProcessIdle_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {6DA78073-A897-4ba6-AA60-CB3AE1C8CAD2}
* Traceability to source Code : Req. -ID: 18112893, Req. -ID: 18112895, Req. -ID: 18112897,
                                Req. -ID: 18112899, Req. -ID: 18112901, Req. -ID: 18112903,
                                Req. -ID: 18112905, Req. -ID: 18112907, Req. -ID: 18112909,
                                Req. -ID: 18112911, Req. -ID: 18112913, Req. -ID: 18112915,
                                Req. -ID: 18112917, Req. -ID: 18112928, Req. -ID: 18112930,
                                Req. -ID: 18112932, Req. -ID: 18112934, Req. -ID: 18112936,
                                Req. -ID: 18112938, Req. -ID: 18112940, Req. -ID: 18112942,
                                Req. -ID: 18112944, Req. -ID: 18112946, Req. -ID: 18112948,
                                Req. -ID: 18112950, Req. -ID: 18112952
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ApplicationManager_CODE) AppMgr_ProcessIdle(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_ProcessIdle
 *********************************************************************************************************************/
  AppMgr_FnctReqType diagReq = APP_M_REQ_NONE;
  AppMgr_FnctReqType degrReq = APP_M_REQ_NONE;
  HAM_HamModeType HamStatus = HAM_INVALID;
  NetSigMonASILB_StatusAutonomousDrivingType StateAutonomousDriving;


  (void)Rte_Read_HAM_HamMode_HamMode(&HamStatus);
  (void)Rte_Read_AppMgr_StatusAutonomousDriving_Output_StatusAutonomousDrivingEL(&StateAutonomousDriving);
  (void)Rte_Read_AppMgr_Internal_ReqDegrRcv_degrReq(&degrReq);

  if(HAM_ACTIVE != HamStatus)
  {
    /* Process Diag Requests for Partial reset or Idle mode only when HAM is not active */
    (void)Rte_Read_AppMgr_Internal_ReqDiagRcv_diagReq(&diagReq);
  }

  AppMgr_HandleIdleReq_Degr();
  AppMgr_HandleIdleReq_Omc();

  if(((HAM_ACTIVE == HamStatus)|| ((StateAutonomousDriving.StateAutonomousDrivingEnum == StateAutonomousDrivingEnum_Init) && (StateAutonomousDriving.StatusBitflag == VALID_DATA ))\
   || ((StateAutonomousDriving.StateAutonomousDrivingEnum == StateAutonomousDrivingEnum_Ready) && (StateAutonomousDriving.StatusBitflag == VALID_DATA ))) &&
     (APP_M_FALSE == AppMgr_Idle.OMBistNeeded))
  {
    /* When HAM is active Explicitly reset any Idle On requests from Network */
    AppMgr_Idle.idleMask = CLEAR_BIT_IN_MASK8(APP_M_REQ_ID_NTW, AppMgr_Idle.idleMask);

    if((Dlt_printing_flag == DLT_STATUS_HAM_AUTONOMOUS) || (Dlt_printing_flag == DLT_STATUS_FALSE ))
    {
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID4(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078853,
                    DLT_CSTRING("HamStatus : "), DLT_UINT8(HamStatus),
                    DLT_CSTRING("StateAutonomousDrivingEnum : "), DLT_UINT8(StateAutonomousDriving.StateAutonomousDrivingEnum)
                  );
#endif
      Dlt_printing_flag = DLT_STATUS_NTW;
    }
  }
  else
  {
    /* Process Network Requests for Idle mode only when HAM is not active */
    /* Req. -ID: 13938277 */
    if((Dlt_printing_flag == DLT_STATUS_NTW) || (Dlt_printing_flag == DLT_STATUS_FALSE))
    {
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078852,DLT_CSTRING("Handling Idle Request NTW "));
#endif
      Dlt_printing_flag = DLT_STATUS_HAM_AUTONOMOUS;
    }
    AppMgr_HandleIdleReq_Ntw();
  }

  if (AppMgr_Idle.idleStatus == APP_MGR_NO_TRANS)
  {
    if(APP_M_REQ_PR == degrReq)
    {
      /* forced Partial reset from Degradation */
      dLogi(TAG, "AppMgr_ProcessIdle: Degr Forced PR Req %d", degrReq);
      AppMgr_Idle.idleType = degrReq;
      AppMgr_Idle.idleRequester = APP_M_REQ_ID_DEGR;
      AppMgr_Idle.idleStatus = APP_MGR_TRANS_IN_PROGRSS;
      /* once processed, we reset the request */
      (void)Rte_Write_AppMgr_Internal_ReqDegrSnd_degrReq(APP_M_REQ_NONE);
    }
    else if (diagReq != APP_M_REQ_NONE)
    {
      /* Diag request for idle or Partial reset */
      dLogi(TAG, "AppMgr_ProcessIdle: Diag Req %d", diagReq);
      AppMgr_Idle.idleType = diagReq;
      AppMgr_Idle.idleRequester = APP_M_REQ_ID_DIAG;
      AppMgr_Idle.idleStatus = APP_MGR_TRANS_IN_PROGRSS;
      /* once processed, we reset the request */
      (void)Rte_Write_AppMgr_Internal_ReqDiagSnd_diagReq(APP_M_REQ_NONE);
    }
    else
    {
      /* No partial reset or any Diag requests. Process other Idle requests */
      if (AppMgr_dcm.dcm_IdleUserPrio == APP_M_FALSE)
      {
        /* Idle User Prioritization is FALSE. So Process Other Idle requests from Ntw, Omc or Degr */
        if (AppMgr_Idle.idleMask == APP_M_NO_MODE)
        {
          /*  Req. -ID: 14674021 */
          AppMgr_HandleIdleOffRequests();
        }
        else
        {
          if ((AppMgr_modes.idleModeStatus == APP_M_READ_IDLE_OFF) ||
              (AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_INVALID))
          {
            AppMgr_HandleIdleOnRequests();
          }
        }
      }
    }
  }
  else
  {
    /* Idle or PR operation in progress, wait to finish */
  }

  AppMgr_HandleIdle_PR_States();

  if (AppMgr_Idle.timer_started == APP_M_TRUE)
  {
    if (AppMgr_Idle.timer_count < AppMgr_Idle.timer_max)
    {
      AppMgr_Idle.timer_count++;
    }
  }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_ProcessPR
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 20ms
 *
 **********************************************************************************************************************
 *
 * Trigger Interfaces:
 * ===================
 *   void Rte_Trigger_AppMgr_OmDegrPartialReset_OmPartialReset(void)
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(uint16 ErrorID, Dem_EventStatusType EventStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ErrMgr_DiagnosticMonitorIF_E_NOT_OK, RTE_E_ErrMgr_DiagnosticMonitorIF_E_OK
 *   Std_ReturnType Rte_Call_SysCtrl_OmEnLineState_GetVoltageState(uint16 *OmEnLine_Voltage)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SysCtrl_OmEnLineStateIF_E_NOT_OK, RTE_E_SysCtrl_OmEnLineStateIF_E_OK, RTE_E_SysCtrl_OmEnLineStateIF_E_PENDING
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DiagnosticMonitor_Partial_Reset_DTC_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_ProcessPR_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {AF051658-9A89-4db7-B208-9922F472A8B6}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ApplicationManager_CODE) AppMgr_ProcessPR(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_ProcessPR
 *********************************************************************************************************************/

  switch (AppMgr_partialReset)
  {
    case APP_M_PR_OM_WAIT:
    {
      dLogi(TAG, "APP_M_PR_OM_WAIT");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078760, DLT_CSTRING("PartialReset: OM WAIT"));
#endif
      AppMgr_partialReset = APP_M_PR_OM_READY;
    }
      break;
    case APP_M_PR_OM_READY:
    {
      if ((AppMgr_partialResetReason == APP_M_PR_REASON_DEGR) || (AppMgr_partialResetReason == APP_M_PR_REASON_CVAPP))
      {
        (void)Rte_Call_DiagnosticMonitor_Partial_Reset_DTC_SetEventStatus(DEM_EVENT_STATUS_FAILED);
      }
      dLogi(TAG, "APP_M_PR_OM_READY");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078761, DLT_CSTRING("PartialReset: OM READY"));
#endif
      AppMgr_partialReset = APP_M_PR_OM_OFF;
    }
      break;
    case APP_M_PR_OM_OFF:
    {
      dLogi(TAG, "APP_M_PR_OM_OFF");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078762, DLT_CSTRING("PartialReset: OM OFF"));
#endif
      Rte_Trigger_AppMgr_OMoff_OMoff();
      AppMgr_partialReset = APP_M_PR_OM_SHUTDOWN;
    }
      break;
    case APP_M_PR_OM_SHUTDOWN:
    {
      dLogi(TAG, "APP_M_PR_OM_SHUTDOWN then WAIT");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078763, DLT_CSTRING("PartialReset: OM SHUTDOWN"));
#endif
      /* toggle DIO */
      Dio_WriteChannel(DioConf_DioChannel_DC_6_OM_ENABLE, STD_HIGH);
      AppMgr_partialReset = APP_M_PR_OM_OFF_VOLT_CHECK;
    }
      break;
    case APP_M_PR_OM_OFF_VOLT_CHECK:
    {
        uint16 AppMgr_OmEnaVoltage;
        Std_ReturnType status;

        status = Rte_Call_SysCtrl_OmEnLineState_GetVoltageState(&AppMgr_OmEnaVoltage);
        if (status == RTE_E_SysCtrl_OmEnLineStateIF_E_OK)
        {
          AppMgr_partialReset = APP_M_PR_OM_SHUTDOWN_WAIT;
          dLogi(TAG, "APP_M_PR_OM_OFF_VOLT_CHECK OK");
#if (STD_ON == DLT_TRACING_STATUS)
          ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078766, DLT_CSTRING("PartialReset: OM OFF VOLT CHECK OK"));
#endif
          if (AppMgr_states.omReset != APP_M_TRUE)
          {
            dLogi(TAG, "APP_M_PR_OM_SHUTDOWN_WAIT");
#if (STD_ON == DLT_TRACING_STATUS)
            ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078767, DLT_CSTRING("PartialReset: OM SHUTDOWN DONE"));
#endif
          }
        } else if (status == RTE_E_SysCtrl_OmEnLineStateIF_E_NOT_OK)
        {
          dLogw(TAG, "APP_M_PR_OM_OFF_VOLT_CHECK failed. Waiting for fault reset.");
#if (STD_ON == DLT_TRACING_STATUS)
          ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078768, DLT_CSTRING("PartialReset: OM OFF VOLT CHECK FAILED"));
#endif
        } else
        {
          /* pending voltage check */
        }
      }
      break;
    case APP_M_PR_OM_SHUTDOWN_WAIT:
    {
      if (AppMgr_states.omReset == APP_M_TRUE)
      {
        dLogi(TAG, "APP_M_PR_OM_SHUTDOWN_WAIT");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078769, DLT_CSTRING("PartialReset: OM SHUTDOWN DONE"));
#endif
        AppMgr_partialReset = APP_M_PR_OM_STARTUP;
      }
    }
      break;
    case APP_M_PR_OM_STARTUP:
    {
      dLogi(TAG, "APP_M_PR_OM_STARTUP");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078770, DLT_CSTRING("PartialReset: OM STARTUP"));
#endif
      /* toggle DIO */
      Dio_WriteChannel(DioConf_DioChannel_DC_6_OM_ENABLE, STD_LOW);
      AppMgr_partialReset = APP_M_PR_OM_ON_VOLT_CHECK;
    }
      break;
    case APP_M_PR_OM_ON_VOLT_CHECK:
    {
      uint16 AppMgr_OmEnaVoltage;
      Std_ReturnType status;

      status = Rte_Call_SysCtrl_OmEnLineState_GetVoltageState(&AppMgr_OmEnaVoltage);
      if (status == RTE_E_SysCtrl_OmEnLineStateIF_E_OK)
      {
        AppMgr_partialReset = APP_M_PR_OM_ON;
        dLogi(TAG, "APP_M_PR_OM_ON_VOLT_CHECK OK");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078773, DLT_CSTRING("PartialReset: OM ON VOLT CHECK OK"));
#endif
      } else if (status == RTE_E_SysCtrl_OmEnLineStateIF_E_NOT_OK)
      {
        dLogw(TAG, "APP_M_PR_OM_ON_VOLT_CHECK failed. Waiting for fault reset.");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078774, DLT_CSTRING("PartialReset: OM ON VOLT CHECK FAILED"));
#endif
      } else
      {
        /* pending voltage check */
      }
    }
      break;
    case APP_M_PR_OM_ON:
    {
      dLogi(TAG, "APP_M_PR_OM_ON");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078775, DLT_CSTRING("PartialReset: OM ON"));
#endif
      Rte_Trigger_AppMgr_OMon_OMon();
      AppMgr_partialReset = APP_M_PR_DONE;
    }
      break;
    case APP_M_PR_DONE:
    {
      if (AppMgr_modes.curr_OmMode.OmMode != APP_M_OM_DEF_MODE)
      {
        /* exit partial reset phase */
        dLogi(TAG, "APP_M_PR_DONE, OM state %d-%d APPM state %d", AppMgr_modes.curr_OmMode.OmMode, AppMgr_modes.curr_OmMode.OmSubmode, AppMgr_states.curr_state);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078776, DLT_CSTRING("PartialReset: COMPLETED"));
#endif
        if (AppMgr_states.curr_state == APP_MGR_PARTIAL_RESET)
        {
          AppMgr_ChangeState(AppMgr_states.defState);
        }
        AppMgr_partialReset = APP_M_PR_NONE;
        if ((AppMgr_partialResetReason == APP_M_PR_REASON_DEGR) || (AppMgr_partialResetReason == APP_M_PR_REASON_CVAPP))
        {
          (void)Rte_Call_DiagnosticMonitor_Partial_Reset_DTC_SetEventStatus(DEM_EVENT_STATUS_PASSED);
          if(APP_M_OM_COREDUMP_OK == AppMgr_Process_OM_CoreDump)
          {
            /* Report OM CoreDump DTC to ErrMgr */
            (void)Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(EMC_Error_ID_0x280A, DEM_EVENT_STATUS_FAILED);
            AppMgr_Process_OM_CoreDump = APP_M_OM_COREDUMP_NOK;
          }
          else
          {
            /* Do Nothing */
          }
          (void)Rte_Trigger_AppMgr_OmDegrPartialReset_OmPartialReset();
        }
        AppMgr_partialResetReason = APP_M_PR_REASON_NONE;
        if (AppMgr_states.omReset == APP_M_TRUE)
        {
          AppMgr_states.omReset = APP_M_FALSE;

        }
      }
    }
      break;
    default:
    {
      /* nothing to do */
    }
      break;
  }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_ReqStateChange
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <AppMgr_RequestStateChange> of PortPrototype <AppMgr_RequestStateChange>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DegMgr_ErrorId_DegMgr_ErrorIdDE(DegMgr_ErrorIdDt *data)
 *   Std_ReturnType Rte_Read_OMAuth_InitNegoStatus_InitNego(OMAuth_InitNegoStatusType *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AppMgr_Internal_ReqDegrSnd_degrReq(AppMgr_FnctReqType data)
 *   Std_ReturnType Rte_Write_AppMgr_Internal_ReqNtwSnd_ntwReq(AppMgr_FnctReqType data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvmExtService_LastIdleModeStored_Read(uint16 block_Id, dtRef_VOID data_ptr, uint8 index, NvmExt_ReqStatusType *status_ptr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvmExt_ServiceIF_E_NOT_OK, RTE_E_NvmExt_ServiceIF_E_OK
 *   Std_ReturnType Rte_Call_NvmExtService_LastIdleModeStored_Write(uint16 block_Id, dtRef_const_VOID data_ptr, uint8 index, NvmExt_ReqStatusType *status_ptr, boolean is_immediate)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvmExt_ServiceIF_E_NOT_OK, RTE_E_NvmExt_ServiceIF_E_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_ReqStateChange(AppMgr_AppIdType appId, AppMgr_StateReqType reqState)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AppMgr_RequestStateChangeIF_APP_M_STATE_ACCEPTED
 *   RTE_E_AppMgr_RequestStateChangeIF_APP_M_STATE_REJECTED
 *   RTE_E_AppMgr_RequestStateChangeIF_APP_M_STATE_UNDEF
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_ReqStateChange_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {08D90326-25DB-4933-B513-4326E76B5271}
* Traceability to source code: Req. -ID: 14071684
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_ReqStateChange(AppMgr_AppIdType appId, AppMgr_StateReqType reqState) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_ReqStateChange (returns application error)
 *********************************************************************************************************************/
  boolean error;
  uint8 newState = APP_M_NO_STATE;
  Std_ReturnType ret;
  uint8 newStateAllowed;

  switch (appId)
  {
    case DIAG_MGR:
    {
      error = AppMgr_ReqDiagMgrStateChange(reqState, &newState);
    }
      break;
    case DEGRADATION_MGR:
    {
      error = AppMgr_ReqDegradationMgrStateChange(reqState, &newState);
    }
      break;
    case SIGNAL_MON:
    {
      error = AppMgr_ReqSignalMonStateChange(reqState, &newState);
    }
      break;
    case OM_FLASH_PLUGIN:
    {
      error = AppMgr_ReqOMFlashPluginStateChange(reqState, &newState);
    }
      break;
    default:
      error = (boolean)TRUE;
      break;
  }

  if ((APP_M_NO_STATE == newState) && ((boolean)FALSE == error))
  {
    ret = RTE_E_AppMgr_RequestStateChangeIF_APP_M_STATE_ACCEPTED;
  }
  else
  {
    newStateAllowed = AppMgr_AllowedNextState(newState);
    if (((APP_M_TRUE == newStateAllowed) &&
        (APP_MGR_NO_TRANS == AppMgr_states.isTransition) &&
        ((boolean)FALSE == error)) &&
        ((NO_REQ == AppMgr_states.reqInProgress)||
         (Fault_Flag == FAULT_FLAG_SET)))
    {
      AppMgr_states.reqInProgress = PENDING_REQ;
      AppMgr_states.newAppState = newState;
      ret = RTE_E_AppMgr_RequestStateChangeIF_APP_M_STATE_ACCEPTED;
      Fault_Flag = FAULT_FLAG_UNSET;
    } else
    {
      ret = RTE_E_AppMgr_RequestStateChangeIF_APP_M_STATE_REJECTED;
      Fault_Flag = FAULT_FLAG_CLEAR;
    }
  }

  return ret;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_RequestDynamometerModeChange
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Dynamometer> of PortPrototype <AppMgr_RequestModeChange>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_RequestDynamometerModeChange(AppMgr_StateReqType reqMode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AppMgr_RequestModeChangeIF_APP_M_MODE_ACCEPTED
 *   RTE_E_AppMgr_RequestModeChangeIF_APP_M_MODE_REJECTED
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_RequestDynamometerModeChange_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {C19834D9-C128-4f97-A732-FD05193B1FD0}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_RequestDynamometerModeChange(AppMgr_StateReqType reqMode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_RequestDynamometerModeChange (returns application error)
 *********************************************************************************************************************/
  Std_ReturnType ret;

  ret = AppMgr_ProcessReqDynamometerModeChange(reqMode);

  return ret;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_RequestEOLModeChange
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <EndOfLine> of PortPrototype <AppMgr_RequestModeChange>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppMgr_RequestEOLModeChange(AppMgr_StateReqType reqMode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AppMgr_RequestModeChangeIF_APP_M_MODE_ACCEPTED
 *   RTE_E_AppMgr_RequestModeChangeIF_APP_M_MODE_REJECTED
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_RequestEOLModeChange_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {8B4A0666-3EA3-451d-8E1C-B6B978952BD3}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ApplicationManager_CODE) AppMgr_RequestEOLModeChange(AppMgr_StateReqType reqMode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_RequestEOLModeChange (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType ret;

  ret = AppMgr_RequestEolModeChange(reqMode);

  return ret;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_SendDLT
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DltSwcMessageService_8_SendLogMessage(const Dlt_MessageLogInfoType *LogInfo, const uint8 *LogData, uint16 LogDataLength)
 *     Argument LogData: uint8* is of type Dlt_Uint8BufferType
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DltSwcMessageService_DLT_E_MSG_TOO_LARGE, RTE_E_DltSwcMessageService_DLT_E_NO_BUFFER, RTE_E_DltSwcMessageService_DLT_E_UNKNOWN_SESSION_ID
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_SendDLT_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {BAB5972C-B461-4c92-9F9C-A75A500DA49D}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ApplicationManager_CODE) AppMgr_SendDLT(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_SendDLT
 *********************************************************************************************************************/

#if (STD_ON == DLT_TRACING_STATUS)
  /* fill the DLT data for states */
  AppMgr_SendDltData_LogSystemStates.curr_state = AppMgr_states.curr_state;
  AppMgr_SendDltData_LogSystemStates.prev_state = AppMgr_states.prev_state;
  AppMgr_SendDltData_LogSystemStates.pucState = AppMgr_states.curr_pucState;
  AppMgr_SendDltData_LogSystemStates.omMode = AppMgr_modes.curr_OmMode.OmMode;
  AppMgr_SendDltData_LogSystemStates.omSubMode = AppMgr_modes.curr_OmMode.OmSubmode;
  AppMgr_SendStatesToDlt();

  /* fill the DLT data for modes */
  AppMgr_SendDltData_LogSystemModes.curr_mode = AppMgr_modes.curr_mode;
  AppMgr_SendDltData_LogSystemModes.prev_mode = AppMgr_modes.prev_mode;
  AppMgr_SendDltData_LogSystemModes.hamMode = AppMgr_modes.hamData.HamMode;
  AppMgr_SendDltData_LogSystemModes.hilData.hilMode = AppMgr_modes.hilData.hilMode;
  AppMgr_SendDltData_LogSystemModes.hilData.hilReadiness = AppMgr_modes.hilData.hilReadiness;
  (void)AppMgr_GetDynamometerMode(&(AppMgr_SendDltData_LogSystemModes.dynamoMode));
  (void)AppMgr_GetEolMode(&(AppMgr_SendDltData_LogSystemModes.eolMode));
  AppMgr_SendDltData_LogSystemModes.idleMode = AppMgr_modes.idleModeStatus;
  AppMgr_SendModesToDlt();

  /* send BSW info */
  ME_LOG_ID16(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078723,
              DLT_CSTRING("PNC Fahren"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.pncMode[3]),
              DLT_CSTRING("PNC Pruefen_Analyse_Diagnose"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.pncMode[4]),
              DLT_CSTRING("PNC Autonomous_Driving_Ready"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.pncMode[0]),
              DLT_CSTRING("PNC Fahrbereitschaft_beenden"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.pncMode[1]),
              DLT_CSTRING("PNC Fahrbereitschaft_herstellen"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.pncMode[2]),
              DLT_CSTRING("ComM mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.commMode),
              DLT_CSTRING("NM mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.nmMode),
              DLT_CSTRING("BswM mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.bswmMode));
#endif /* STD_ON == DLT_TRACING_STATUS */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppMgr_SetReadyForHil
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <AppMgr_SetReadyForHil> of PortPrototype <AppMgr_SetReadyForHil>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void AppMgr_SetReadyForHil(AppMgr_HilModuleIdType moduleId)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_SetReadyForHil_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {289FA8B9-66F6-425f-AC0A-41791D3A609D}
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ApplicationManager_CODE) AppMgr_SetReadyForHil(AppMgr_HilModuleIdType moduleId) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppMgr_SetReadyForHil
 *********************************************************************************************************************/
  AppMgr_HilDataType hilData;

  hilData.hilMode = AppMgr_modes.hilData.hilMode;
  switch (moduleId)
  {
    case SERDES:
    {
      if (0U == BIT_IN_MASK8(HIL_READY_SERDES, AppMgr_modes.hilData.hilReadiness))
      {
        AppMgr_modes.hilData.hilReadiness = SET_BIT_IN_MASK8(HIL_READY_SERDES, AppMgr_modes.hilData.hilReadiness);
        AppMgr_modes.hilData.hilReadiness = SET_BIT_IN_MASK8(HIL_READY_OM_PROT, AppMgr_modes.hilData.hilReadiness);
        AppMgr_modes.hilData.hilReadiness = SET_BIT_IN_MASK8(HIL_READY_ACP_LIB, AppMgr_modes.hilData.hilReadiness);
        hilData.hilReadiness = AppMgr_modes.hilData.hilReadiness;
        (void)Rte_Write_AppMgr_GetHilMode_HilMode((const AppMgr_HilDataType *)&hilData);
        dLogi(TAG, "CuC HIL changed: readiness mask %d, mode %s(%d)",
                   AppMgr_modes.hilData.hilReadiness,
                   AppMgr_print_R7_Hil[AppMgr_modes.hilData.hilMode].text,
                   AppMgr_modes.hilData.hilMode);
      }
    }
      break;
    case DEM_GATE_KEEPER:
    {
      if (0U == BIT_IN_MASK8(HIL_READY_DGK, AppMgr_modes.hilData.hilReadiness))
      {
        AppMgr_modes.hilData.hilReadiness = SET_BIT_IN_MASK8(HIL_READY_DGK, AppMgr_modes.hilData.hilReadiness);
        hilData.hilReadiness = AppMgr_modes.hilData.hilReadiness;
        (void)Rte_Write_AppMgr_GetHilMode_HilMode((const AppMgr_HilDataType *)&hilData);
        dLogi(TAG, "CuC HIL changed: readiness mask %d, mode %s(%d)",
                   AppMgr_modes.hilData.hilReadiness,
                   AppMgr_print_R7_Hil[AppMgr_modes.hilData.hilMode].text,
                   AppMgr_modes.hilData.hilMode);
      }
    }
      break;
    default:
      break;
  }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define ApplicationManager_STOP_SEC_CODE
#include "ApplicationManager_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* Broadcasts the state change */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {D9B5CE14-2AA4-467c-BB62-930081D1F322}
**********************************************************************************************************************/

static void AppMgr_StateChanged(void)
{
  AppMgr_SysStateType new_state;

  new_state = AppMgr_states.curr_state;
  (void)Rte_Switch_AppMgr_StateChanged_state(new_state);

#if (STD_ON == DLT_TRACING_STATUS)
  /* send DLT message */
  AppMgr_SendDltData_LogSystemStates.curr_state = AppMgr_states.curr_state;
  AppMgr_SendDltData_LogSystemStates.prev_state = AppMgr_states.prev_state;
  AppMgr_SendDltData_LogSystemModes.curr_mode  = AppMgr_modes.curr_mode;
  AppMgr_SendDltData_LogSystemModes.prev_mode  = AppMgr_modes.prev_mode;

  AppMgr_SendStatesModesOnChangeToDlt();
  AppMgr_SendStatesToDlt();
#endif /* STD_ON == DLT_TRACING_STATUS */
}

/* Actions for APP_MGR_STARTUP mode */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {93E2E3A7-F195-435a-8D85-7955CE9C0DCF}
* Traceability to source code: Req. -ID: 13893860, Req. -ID: 13893862, Req. -ID: 13893870, Req. -ID: 13864407,
                               Req. -ID: 13893864, Req. -ID: 14373692, Req. -ID: 8214774, Req. -ID: 8699654,
                               Req. -ID: 13871852, Req. -ID: 14078011, Req. -ID: 14072974
**********************************************************************************************************************/

static void AppMgr_CheckStartup(Rte_ModeType_AppMgr_BswmNotificationMDG bswmNotif)
{
  if (RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_NORMAL_OPER == bswmNotif)
  {
    if (APP_M_NO_STATE != AppMgr_states.curr_pucState)
    {
      AppMgr_ChangeState(APP_MGR_A53_INITIALIZED);
    }
    else
    {
      /* wait and increment A53 Init Timeout timer */
      AppMgr_A53InitTimeout ++;
      if(APP_MGR_A53_INIT_TIMEOUT == AppMgr_A53InitTimeout)
      {
        /* Reset the Timeout */
        AppMgr_A53InitTimeout = 0U ;
        /* Set CvApp Init Timeout Error */



#if (ME_WDGOFF_BUILD == 0U)
#ifdef EMC_Error_ID_0x0705
        (void)Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(EMC_Error_ID_0x0705, DEM_EVENT_STATUS_FAILED);
#endif
        dLogw(TAG, "A53 Init Timeout Error");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078710, DLT_CSTRING("A53 Init Timeout Error"));
#endif
#else
        dLogw(TAG, "A53 Init Timeout Error is suppressed");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078711, DLT_CSTRING("A53 Init Timeout Error suppressed"));
#endif
#endif
     }
    }
  }
}

/* Actions for APP_MGR_RESET_BOOTL mode */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {91897EC1-0236-4bbc-815F-3DE8F35F4AC6}
* Traceability to source code: Req. -ID: 14087733, Req. -ID: 13893302, Req. -ID: 13893492, Req. -ID: 13893727,
                               Req. -ID: 13893895, Req. -ID: 13893912, Req. -ID: 14046683, Req. -ID: 14021929,
                               Req. -ID: 8700047, Req. -ID: 6147421
**********************************************************************************************************************/

static void AppMgr_CheckCMReset(void)
{
  if (APP_MGR_SHUTDOWN_TIMEOUT == AppMgr_shdownTimeout)
  {
    AppMgr_shdownTimeout = 0U;
    /* ready to reset */
    /* Notify BswM about shutdown */
    (void)Rte_Write_AppMgr_ReqBswMEcuMode_requestedMode(ECU_PRGSESS_RESET_REQ);
  } else
  {
    /* increment shutdown wait counter */
    AppMgr_shdownTimeout++;
  }
  /* Trigger R7 Stack and Cpu Utilization at shutdown */
  AppMgr_TriggerR7StackCpuUtilization();
}

/* Actions for APP_MGR_HARD_RESET mode */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {55E3D2A1-D345-42f0-8B71-D034A41FCADA}
* Traceability to source code: Req. -ID: 6049392, Req. -ID: 13893357, Req. -ID: 13893500, Req. -ID: 13893737,
                               Req. -ID: 13893898, Req. -ID: 13881517, Req. -ID: 14046685, Req. -ID: 14047097,
                               Req. -ID: 8288063, Req. -ID: 10349416
**********************************************************************************************************************/

static void AppMgr_CheckHardReset(void)
{
  if (APP_MGR_SHUTDOWN_TIMEOUT == AppMgr_shdownTimeout)
  {
    AppMgr_shdownTimeout = 0U;
    /* ready to reset */
    if (e_ECU_RESET == AppMgr_reqShdown)
    {
      /* Req. -ID: 14619378, Req. -ID: 14619380 */
      (void)Rte_Write_AppMgr_ReqBswMEcuMode_requestedMode(ECU_RESET_REQ);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_WARN, 34078750,DLT_CSTRING("APPM request to BswM: Reset"));
#endif
    } else
    {
      (void)Rte_Write_AppMgr_ReqBswMEcuMode_requestedMode(ECU_SHUTDOWN_REQ);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_WARN, 34078751,DLT_CSTRING("APPM request to BswM: Shutdown"));
#endif
    }
  } else
  {
    /* increment shutdown wait counter */
    AppMgr_shdownTimeout++;
  }
  /* Trigger R7 Stack and Cpu Utilization at shutdown */
  AppMgr_TriggerR7StackCpuUtilization();
}


/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {26F28159-967B-484e-96A7-19E07A5251B6}
* Traceability to source code: Req. -ID: 13939507, Req. -ID: 14047099
**********************************************************************************************************************/

static void AppMgr_CheckFault(void)
{
  if (APP_MGR_SHUTDOWN_TIMEOUT == AppMgr_shdownTimeout)
  {
    AppMgr_shdownTimeout = 0U;
    /* ready to shutdown */
    /* Notify BswM about shutdown */

    /* do the shutdown without waiting. Modify this later. */
    if (APP_M_FALSE == AppMgr_fault_started)
    {
      (void)Rte_Write_AppMgr_ReqBswMEcuMode_requestedMode(ECU_SHUTDOWN_REQ);
      AppMgr_fault_started = APP_M_TRUE;
    }
  }
  else
  {
    /* increment shutdown wait counter */
    AppMgr_shdownTimeout++;
  }
  /* Trigger R7 Stack and Cpu Utilization at shutdown */
  /* Req. -ID: 13867450, Req. -ID: 13868609 */
  AppMgr_TriggerR7StackCpuUtilization();
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {6D999DC3-4522-436f-A6B2-7D8DF0DC635A}
* Traceability to source code: Req. -ID: 13867450
**********************************************************************************************************************/

static void AppMgr_CheckWaitA53(void)
{
  if ((SIGNALMNGR_PUC_MGR_CVAPP_COMM_INIT == AppMgr_states.curr_pucState))
  {
    /* Req. -ID: 13872254, Req. -ID: 13872261 */
    AppMgr_ChangeState(APP_MGR_WAIT_CVAPP_INIT);
  }
  else
  {
    /* wait and increment CvApp Init Timeout timer */
    AppMgr_CvAppInitTimeout ++;

    if(APP_MGR_CVAPP_INIT_TIMEOUT == AppMgr_CvAppInitTimeout)
    {
      /* Reset the Timeout */
      AppMgr_CvAppInitTimeout = 0U ;
      /* Set CvApp Init Timeout Error */
#if (ME_WDGOFF_BUILD == 0U)
#ifdef EMC_Error_ID_0x0705
      (void)Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(EMC_Error_ID_0x0705, DEM_EVENT_STATUS_FAILED);
#endif
      dLogw(TAG, "CvApp Init Timeout Error");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078795, DLT_CSTRING("CvApp Init Timeout Error"));
#endif
#else
      dLogw(TAG, "CvApp Init Timeout Error suppressed ");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078712, DLT_CSTRING("CvApp Init Timeout Error suppressed "));
#endif
#endif
    }
  }

}


/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {1944F16E-A673-4cae-810F-D865A928DA06}
* Traceability to source code: Req. -ID: 13893853, Req. -ID: 13871991, Req. -ID: 10564596, Req. -ID: 10433886
**********************************************************************************************************************/

static void AppMgr_CheckWaitCvApp(void)
{
  switch (AppMgr_states.curr_pucState)
  {
    case SIGNALMNGR_PUC_MGR_NORMAL:
      AppMgr_ChangeState(APP_MGR_NORMAL);
      break;
    default:
      break;
  }
}


/* Functions called in BswM context */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {DAEAD4A3-71D8-454e-82AA-6D3C100A6D8A}
**********************************************************************************************************************/

void AppMgr_SendDltData(const uint8 data[])
{
  if(NULL_PTR != data)
  {
    /* Get PAD Status */
    if(data[APP_MGR_DLT_PAD_STATUS] > APPM_COMM_PNC_PREPARE_SLEEP)
    {
      AppMgr_PADStatus = ACTIVE ;
    }
    else
    {
      AppMgr_PADStatus = NOT_ACTIVE ;
    }
  }
#if (STD_ON == DLT_TRACING_STATUS)
  if (NULL_PTR != data)
  {
    uint8 i;

    /* fill the DLT data for BswM parameters */
    AppMgr_SendDltData_LogSystemStates.bswmMode = data[APP_MGR_DLT_BSWM_MODE];
    for (i = APP_MGR_DLT_BSWM_MODE; i < APP_M_MAX_PNC; i++)
    {
      AppMgr_SendDltData_LogSystemStates.pncMode[i] = data[i+1U];
    }

    AppMgr_SendDltData_LogSystemStates.nmMode = data[APP_MGR_DLT_NM_MODE];
    AppMgr_SendDltData_LogSystemStates.commMode = data[APP_MGR_DLT_COMM_MODE];
  }
#endif /* STD_ON == DLT_TRACING_STATUS */
}

/* Change AppMgr state function */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {DE742887-4A0B-428b-BCBE-A812F051C837}
* Traceability to source code: Req. -ID: 14047169, Req. -ID: 14046839, Req. -ID: 10386893, Req. -ID: 14867223,
                               Req. -ID: 14867229, Req. -ID: 14867231, Req. -ID: 14867233
**********************************************************************************************************************/

static void AppMgr_ChangeState(AppMgr_SysStateType state)
{
  if (AppMgr_states.curr_state != state)
  {
    AppMgr_states.prev_state = AppMgr_states.curr_state;
    AppMgr_states.curr_state = state;
    switch (state)
    {
      case APP_MGR_HARD_RESET:
      case APP_MGR_RESET_BOOTL:
      case APP_MGR_OM_FLASH:
      {
        AppMgr_states.isTransition = APP_MGR_TRANS_IN_PROGRSS;
        (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7ShutDownRequest);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078744,DLT_CSTRING("R7 LFC Request = R7 Shutdown "));
#endif
        dLogi(TAG, "E_R7ShutDownRequest");
      }
        break;
      case APP_MGR_STANDBY:
      {
        AppMgr_states.isTransition = APP_MGR_TRANS_IN_PROGRSS;
        (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7PrepareShutDownRequest);
        /* Start Timer of 100ms */
        AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqTimer = APP_M_PREP_SHUTDOWN_REQ_TIMER_START ;
        AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqCvappAck = APP_M_CVAPP_ACK_INPROGR ;
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078756,DLT_CSTRING("R7 LFC Request = R7 Prepare Shutdown"));
#endif
        dLogi(TAG, "E_R7PrepareShutDownRequest");
      }
        break;
      case APP_MGR_FAULT:
      {
        AppMgr_states.isTransition = APP_MGR_TRANS_IN_PROGRSS;
        (void)Rte_Write_AppMgr_ReqBswMEcuMode_requestedMode(ECU_STOP_BUS_COMM);
        (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7ShutDownRequest);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_ERROR, 34078745,DLT_CSTRING("R7 LFC Request = Shutdown, FAULT state"));
#endif
        dLogi(TAG, "E_R7ShutDownRequest");
      }
        break;
      case APP_MGR_SAFE_SILENT:
      {
        /* Req. -ID: 13939501, Req. -ID: 13962241 */
        (void)Rte_Write_AppMgr_ReqBswMEcuMode_requestedMode(ECU_STOP_BUS_COMM);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_ERROR, 34078754,DLT_CSTRING("APPM Request to BswM= Stop COMM"));
#endif
        dLogi(TAG, "APPM Request to BswM= Stop COMM");
      }
        break;
      case APP_MGR_PARTIAL_RESET:
      {
        if (AppMgr_partialReset == APP_M_PR_NONE)
        {
          AppMgr_partialReset = APP_M_PR_OM_READY;
          AppMgr_states.omReset = APP_M_TRUE;
        } else
        {
          /* nothing to be done */
        }
      }
        break;
      case APP_MGR_SERDES_TEST:
      {
        dLogi(TAG, "Inform Bs SecureFeature.NotifyFeatureExecuted");
        (void)Rte_Call_Bs_SecureFeature_NotifyFeatureExecuted(APPMGR_BS_FeaturesSERDES);
#ifdef EMC_Error_ID_0x2B01
        (void)Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(EMC_Error_ID_0x2B01, DEM_EVENT_STATUS_FAILED);
#endif
      }
        break;
      default:
        break;
    }
    /* broadcast state */
    /* Req. -ID: 8761237 */
    AppMgr_StateChanged();
    /* log the state changed */
    dcLogi(TAG, (APP_M_MAX_STATES >= AppMgr_states.curr_state) && (APP_M_MAX_STATES >= AppMgr_states.prev_state),
                "CuC state changed: %s(%d) to %s(%d)",
                AppMgr_print_R7_states[AppMgr_states.prev_state].text,
                AppMgr_states.prev_state,
                AppMgr_print_R7_states[AppMgr_states.curr_state].text,
                AppMgr_states.curr_state);
    dcLogf(TAG, !((APP_M_MAX_STATES >= AppMgr_states.curr_state) && (APP_M_MAX_STATES >= AppMgr_states.prev_state)),
                "CuC state changed: %d to %d",
                AppMgr_states.prev_state,
                AppMgr_states.curr_state);
  }
}

/* Returns TRUE - Allowed, FALSE - Not allowed */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {29B6D3CE-2905-456e-A668-A70DA72D867C}
**********************************************************************************************************************/

static uint8 AppMgr_AllowedNextState(AppMgr_SysStateType state)
{
  uint8 ret = APP_M_FALSE;

  if ((state <= APP_M_MAX_STATES) && (state > APP_M_NO_STATE))
  {
    if (0U != (MODE_IN_MASK32(state, allowedT[AppMgr_states.curr_state-1U])))
    {
      ret = APP_M_TRUE;
    }
  }

  return ret;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {7AA11393-8382-4eb4-8536-9A8F0D247C8C}
**********************************************************************************************************************/

static boolean AppMgr_ReqDiagMgrStateChange(uint8 reqState, uint8 * newState)
{
  boolean error = (boolean)FALSE;
  uint8 updatedNewState = APP_M_NO_STATE;

  switch (reqState)
  {
    case REQ_START_SERDES_TEST:
    {
      if (APP_MGR_SERDES_TEST != AppMgr_states.curr_state)
      {
        updatedNewState = APP_MGR_SERDES_TEST;
      }
    }
      break;
    case REQ_STOP_SERDES_TEST:
    {
      if (APP_MGR_SERDES_TEST == AppMgr_states.curr_state)
      {
        updatedNewState = APP_MGR_HARD_RESET;
        AppMgr_reqShdown = e_ECU_RESET_SerDesTest;
      }
      else
      {
        error = (boolean)TRUE;
      }
    }
      break;

    default:
      error = (boolean)TRUE;
      break;
  }
  *(newState) = updatedNewState;
  return error;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {AF47E8D0-C2FC-4335-B62E-1724BE0069FD}
* Traceability to source code: Req. -ID: 13893257, Req. -ID: 13893480, Req. -ID: 13893904, Req. -ID: 14047165,
                               Req. -ID: 13872254, Req. -ID: 14046675, Req. -ID: 13893737, Req. -ID: 13881513,
                               Req. -ID: 14867225, Req. -ID: 14867227
**********************************************************************************************************************/

static boolean AppMgr_ReqDegradationMgrStateChange(uint8 reqState, uint8 * newState)
{
  boolean error = (boolean)FALSE;
  boolean IsCvAppValid;
  OMAuth_InitNegoStatusType OmInitNegoStatus;
  uint8 updatedNewState = APP_M_NO_STATE;
  DegMgr_ErrorIdDt DegMgr_ErrorId;

  switch (reqState)
  {
    case REQ_START_SAFE_COMM:
    {
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078789, DLT_CSTRING("Degredation Manager REQ_START_SAFE_COMM"));
#endif
      dLogi(TAG, "Degredation Manager REQ_START_SAFE_COMM");
      if (APP_MGR_SAFE_COMM != AppMgr_states.curr_state)
      {
        AppMgr_states.defStateDegr = APP_MGR_SAFE_COMM;
        AppMgr_states.defState = AppMgr_states.defStateDegr;
        updatedNewState = APP_MGR_SAFE_COMM;
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078825, DLT_CSTRING("Updated New CuC State after REQ_START_SAFE_COMM "), DLT_UINT8(updatedNewState));
#endif
        dLogi(TAG, "Updated New CuC State after REQ_START_SAFE_COM %d", updatedNewState );
      }
    }
      break;
    case REQ_STOP_SAFE_COMM:
    {
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078824, DLT_CSTRING("Degredation Manager REQ_STOP_SAFE_COMM"));
#endif
      dLogi(TAG, "Degredation Manager REQ_STOP_SAFE_COMM");
      if (APP_MGR_SAFE_COMM == AppMgr_states.curr_state)
      {
        AppMgr_states.defStateDegr = APP_M_NO_STATE;
        AppMgr_states.defState = AppMgr_DefaultCuCStateForTransition();
        updatedNewState = AppMgr_states.defState;
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078823, DLT_CSTRING("Updated New CuC State after DGM REQ_STOP_SAFE_COMM "), DLT_UINT8(updatedNewState));
#endif
        dLogi(TAG, "Updated New CuC State after DGM REQ_STOP_SAFE_COMM %d", updatedNewState );
      }
      else if ((APP_MGR_SAFE_COMM == AppMgr_states.defStateDegr) && (AppMgr_states.reqInProgress == PENDING_REQ))
      {
        AppMgr_states.defStateDegr = APP_M_NO_STATE;
        AppMgr_states.newAppState = AppMgr_states.curr_state;
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078820, DLT_CSTRING("REQ_START_SAFE_COMM Canceled, Updated New CuC State after DGM REQ_STOP_SAFE_COMM "), DLT_UINT8(AppMgr_states.newAppState));
#endif
        dLogi(TAG, "REQ_START_SAFE_COMM Canceled, Updated New CuC State after DGM REQ_STOP_SAFE_COMM  %d", AppMgr_states.newAppState );
      }
      else
      {
        /*do nothing*/
      }
    }
      break;


    case REQ_FAULT_RESET:
    {
      if(Fault_Flag == FAULT_FLAG_CLEAR)
      {
        Fault_Flag = FAULT_FLAG_SET;
      }
      if (APP_MGR_FAULT != AppMgr_states.curr_state)
      {
        updatedNewState = APP_MGR_FAULT;
        if (APP_MGR_NO_TRANS == AppMgr_states.isTransition)
        {
            AppMgr_reqShdown = e_Fault_Reset;
        }
      }
    }
      break;
    case REQ_FAULT_BOOTLOADER:
    {
      if (APP_MGR_FAULT != AppMgr_states.curr_state)
      {
        updatedNewState = APP_MGR_FAULT;
        if (APP_MGR_NO_TRANS == AppMgr_states.isTransition)
        {
            AppMgr_reqShdown = e_CM_Reset;
        }
      }
    }
      break;
    case REQ_SAFE_SILENT:
    {
      if (APP_MGR_SAFE_SILENT != AppMgr_states.curr_state)
      {
        AppMgr_states.defStateDegr = APP_MGR_SAFE_SILENT;
        AppMgr_states.defState = AppMgr_states.defStateDegr;
        updatedNewState = APP_MGR_SAFE_SILENT;
      }
    }
      break;
    case REQ_FORCED_PARTIAL_RESET :
    {
      IsCvAppValid = AppMgr_IsCvApp_Valid();

      if ((((boolean)TRUE) == IsCvAppValid) &&\
          (AppMgr_modes.curr_OmMode.OmMode != APP_M_OM_DEF_MODE))
      {
        /* Process Forced partial reset from Degr only if Cvapp is available and OM is powered On */
        if (APP_MGR_PARTIAL_RESET != AppMgr_states.curr_state)
        {
          (void)Rte_Read_DegMgr_ErrorId_DegMgr_ErrorIdDE(&DegMgr_ErrorId);/*PRQA S 3426 */ /* MSRD_3426 */ /*PRQA S 3417 */ /* MSRD_3417 */
          AppMgr_PartialResetErrorID = DegMgr_ErrorId;
          (void)Rte_Write_AppMgr_Internal_ReqDegrSnd_degrReq(APP_M_REQ_PR);
        }
      }
      else
      {
        /* Reject Degr Forced partial reset req */
        error = (boolean)TRUE;
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID5(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078796, DLT_CSTRING("DegrForcedPartialReset: PuC State ="),
                                                                       DLT_UINT8(AppMgr_states.curr_pucState),
                                                                       DLT_CSTRING("Om Mode ="),
                                                                       DLT_UINT8(AppMgr_modes.curr_OmMode.OmMode),
                                                                       DLT_CSTRING("Is Invalid for Forced Partial Reset"));
#endif
        dLoge(TAG, "DegrForcedPartialReset: PuC State = %d, Om Mode = %d.  invalid for forced partial reset",AppMgr_states.curr_pucState, AppMgr_modes.curr_OmMode.OmMode);
      }
    }
      break;
    case REQ_START_IDLE:
    {
      IsCvAppValid = AppMgr_IsCvApp_Valid();
      (void)Rte_Read_OMAuth_InitNegoStatus_InitNego(&OmInitNegoStatus);

      if (((((boolean)TRUE) == IsCvAppValid) &&\
          (AppMgr_modes.curr_OmMode.OmMode != APP_M_OM_DEF_MODE) &&\
          (((OMAuth_InitNegoStatusType)OM_A_INITNEGO_COMPLETE) == OmInitNegoStatus))||\
          ((AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_INVALID)&&(AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_OFF))
         )
      {
        (void)Rte_Write_AppMgr_Internal_ReqDegrSnd_degrReq(APP_M_REQ_IDLEON);
      }
      else
      {
        /* Reject Degr Forced Idle req */
        error = (boolean)TRUE;
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID7(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078807, DLT_CSTRING("DegrForcedIdle: PuC State ="),
                                                                       DLT_UINT8(AppMgr_states.curr_pucState),
                                                                       DLT_CSTRING("Om Mode ="),
                                                                       DLT_UINT8(AppMgr_modes.curr_OmMode.OmMode),
                                                                       DLT_CSTRING("Om Init Nego Status ="),
                                                                       DLT_UINT8(OmInitNegoStatus),
                                                                       DLT_CSTRING("Is Invalid for Forced Idle"));
#endif
        dLoge(TAG, "DegrForcedIdle: PuC State = %d, Om Mode = %d, OmInitNegoStatus = %d.  invalid for forced Idle",AppMgr_states.curr_pucState, AppMgr_modes.curr_OmMode.OmMode, OmInitNegoStatus);
      }
    }
      break;

    default:
      error = (boolean)TRUE;
      break;
  }
  *(newState) = updatedNewState;
  return error;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {38DE761A-E832-495d-9F10-B05FA33B2CB3}
* Traceability to source code: Req. -ID: 14674012, Req. -ID: 14674017, Req. -ID: 17704518,
                               Req. -ID: 17704540, Req. -ID: 18112873
**********************************************************************************************************************/

static boolean AppMgr_ReqSignalMonStateChange(uint8 reqState, uint8 * newState)
{
  boolean error = (boolean)FALSE;
  boolean IsCvAppValid;
  boolean IsCvAppError;
  OMAuth_InitNegoStatusType OmInitNegoStatus;
  uint8 updatedNewState = APP_M_NO_STATE;
  static uint8 prevState = APP_M_NO_STATE;
  static uint8 fn_first_Entry = FALSE;

  if(((reqState == REQ_STOP_IDLE) || (reqState == REQ_LAST_STORED_IDLE_MODE)) && fn_first_Entry == FALSE)
  {
    fn_first_Entry = TRUE;
  }
  else if((reqState == REQ_START_IDLE) && fn_first_Entry == FALSE && (AppMgr_Coding_Data_Avilable == TRUE))
  {
    fn_first_Entry = TRUE ;
    AppMgr_OM_overtravel_time_TimeOut = AppMgr_OM_overtravel_time;
  }
  else
  {
    // Do nothing
  }

  if(REQ_IDLE_ERROR == reqState)
  {
    if(prevState != reqState)
    {
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078856, DLT_CSTRING("Signal Monitor: Idle Request ="), DLT_UINT8(reqState));
#endif
      dLogi(TAG,"Signal Monitor: Idle Request = %d", reqState);
      prevState = reqState ;
    }
  }
  else
  {
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078815, DLT_CSTRING("Signal Monitor: Idle Request ="), DLT_UINT8(reqState));
#endif
    dLogi(TAG,"Signal Monitor: Idle Request = %d", reqState);
    prevState = reqState;
  }

  if (REQ_LAST_STORED_IDLE_MODE == reqState)
  {
    if (APP_M_LAST_IDLE_ON == LastIdleModeRAM)
    {
      reqState = REQ_START_IDLE;
      AppMgr_OM_overtravel_time_TimeOut = AppMgr_OM_overtravel_time; /*Handling Last Stored IdleMode request immediately without waiting for the overtravel time*/
    }
    else
    {
      reqState = REQ_STOP_IDLE;
    }
  }

  switch (reqState)
  {
    case REQ_START_IDLE:
    {
      /* Update LastIdleMode = Idle Start, into NvM */
      if (APP_M_LAST_IDLE_ON != LastIdleModeRAM)
      {
        LastIdleModeRAM = APP_M_LAST_IDLE_ON;
        (void)Rte_Call_NvmExtService_LastIdleModeStored_Write((uint16)NvMConf_NvMBlockDescriptor_NVM_BLOCK_LastIdleModeNvM,
                                                                &LastIdleModeRAM,
                                                                0,
                                                                &ReqlastIdleModeStored_writedelayed,
                                                                FALSE);
      }

      /* Execute Idle ON function */
      if (AppMgr_modes.idleModeAllowed == APP_M_TRUE)
      {
        IsCvAppValid = AppMgr_IsCvApp_Valid();
        (void)Rte_Read_OMAuth_InitNegoStatus_InitNego(&OmInitNegoStatus);

        if ((((boolean)TRUE) == IsCvAppValid) &&\
            (AppMgr_modes.curr_OmMode.OmMode != APP_M_OM_DEF_MODE) &&\
            (((OMAuth_InitNegoStatusType)OM_A_INITNEGO_COMPLETE) == OmInitNegoStatus) &&\
            (APP_M_FALSE == AppMgr_Idle.OMBistNeeded)
           )
        {
          (void)Rte_Write_AppMgr_Internal_ReqNtwSnd_ntwReq(APP_M_REQ_IDLEON);
        }
        else
        {
          /* Reject Degr Forced Idle req */
          error = (boolean)TRUE;
#if (STD_ON == DLT_TRACING_STATUS)
          ME_LOG_ID7(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078808, DLT_CSTRING("NtwForcedIdle: PuC State ="),
                                                                         DLT_UINT8(AppMgr_states.curr_pucState),
                                                                         DLT_CSTRING("Om Mode ="),
                                                                         DLT_UINT8(AppMgr_modes.curr_OmMode.OmMode),
                                                                         DLT_CSTRING("Om Init Nego Status ="),
                                                                         DLT_UINT8(OmInitNegoStatus),
                                                                         DLT_CSTRING("Is Invalid for Forced Idle"));
#endif /* #if (STD_ON == DLT_TRACING_STATUS) */
          // dLoge(TAG, "NtwForcedIdle: PuC State = %d, Om Mode = %d, OmInitNegoStatus = %d.  invalid for forced Idle",AppMgr_states.curr_pucState, AppMgr_modes.curr_OmMode.OmMode, OmInitNegoStatus);
        }
      }
    }
      break;

    case REQ_STOP_IDLE:
    {
      /* Update LastIdleMode = Idle Stop, into NvM */
      if (APP_M_LAST_IDLE_OFF != LastIdleModeRAM)
      {
        LastIdleModeRAM = APP_M_LAST_IDLE_OFF;
        (void)Rte_Call_NvmExtService_LastIdleModeStored_Write((uint16)NvMConf_NvMBlockDescriptor_NVM_BLOCK_LastIdleModeNvM,
                                                                &LastIdleModeRAM,
                                                                0,
                                                                &ReqlastIdleModeStored_writedelayed,
                                                                FALSE);
      }
      /* fall through to execute Idle off */
    }
    case REQ_IDLE_ERROR: /* PRQA S 2003 */ /* MSRD_2003 */
    default:
    {
      /* LastIdleMode should not be updated to NvM incase of IdleSignal Error */
      /* Idle Off functionality is common for both error and Req Idle Stop */
      if (AppMgr_modes.idleModeAllowed == APP_M_TRUE)
      {
        IsCvAppError = AppMgr_IsCvApp_Error();
        if (((boolean)FALSE) == IsCvAppError)
        {
		  AppMgr_OM_overtravel_time_TimeOut = 0;
          (void)Rte_Write_AppMgr_Internal_ReqNtwSnd_ntwReq(APP_M_REQ_IDLEOFF);
        }
        else
        {
          /* Reject Ntw Idle off req */
          error = (boolean)TRUE;
#if (STD_ON == DLT_TRACING_STATUS)
          ME_LOG_ID3(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078814, DLT_CSTRING("NtwForcedIdle: PuC State ="),
                                                                       DLT_UINT8(AppMgr_states.curr_pucState),
                                                                       DLT_CSTRING("Is Invalid for Forced Idle off"));
#endif
          // dLoge(TAG, "NtwForcedIdle: PuC State = %d.  invalid for forced Idle",AppMgr_states.curr_pucState);
        }
      }
    }
      break;
  }

  *(newState) = updatedNewState;

  return error;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {BC98CEE9-43A1-48fd-BF96-5FA7873B12A5}
**********************************************************************************************************************/

static boolean AppMgr_ReqOMFlashPluginStateChange(uint8 reqState, uint8 * newState)
{
  boolean error = (boolean)FALSE;
  uint8 updatedNewState = APP_M_NO_STATE;

  switch (reqState)
  {
    case REQ_START_OM_FLASH:
    {
      if (APP_MGR_OM_FLASH != AppMgr_states.curr_state)
      {
        AppMgr_reqShdown = e_CM_Reset;
        updatedNewState = APP_MGR_OM_FLASH;
      }
    }
      break;
    case REQ_STOP_OM_FLASH:
    {
      if (APP_MGR_OM_FLASH == AppMgr_states.curr_state)
      {
        updatedNewState = AppMgr_states.defState;
      }
    }
      break;
    default:
      error = (boolean)TRUE;
      break;
  }
  *(newState) = updatedNewState;
  return error;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {19E755BD-52FE-4019-9245-01B21F0840D2}
* Traceability to source code: Req. -ID: 13868609, Req. -ID: 13868609
**********************************************************************************************************************/

static void AppMgr_ManagePuCStateChange(void)
{
  uint8 pucStateRte;
  SignalMngr_PuCStateAndMode pucStateModeRte;
  CvAppAliveness cvappaliveness;

  (void)Rte_Read_AppMgr_CvAppAliveness_state(&cvappaliveness);/*PRQA S 3426 */ /* MSRD_3426 */ /*PRQA S 3417 */ /* MSRD_3417 */
  if(CVAPP_ALIVE == cvappaliveness)
  {
    (void)Rte_Read_SignalMngr_PuCStateMode_PuCStateMode(&pucStateModeRte);
    pucStateRte = pucStateModeRte.puc_state;
  }
  else
  {
    pucStateRte = SIGNALMNGR_PUC_MGR_INVALID;
    /* Fault reset will be triggered */
    pucStateModeRte.puc_state = SIGNALMNGR_PUC_MGR_INVALID;
    pucStateModeRte.error_description = APP_M_CVAPP_ERR_THSHLD_FOR_COREDUMP;
  }

  if (pucStateRte != AppMgr_states.curr_pucState)
  {

    dcLogi(TAG, ((APP_M_MAX_PUC_STATES > AppMgr_states.curr_pucState) && (APP_M_MAX_PUC_STATES > pucStateRte)),
                "PuC state changed: %s(%d) to %s(%d)",
                AppMgr_print_PuC_states[AppMgr_states.curr_pucState].text,
                AppMgr_states.curr_pucState,
                AppMgr_print_PuC_states[pucStateRte].text,
                pucStateRte);
    dcLogf(TAG, !((APP_M_MAX_PUC_STATES > AppMgr_states.curr_pucState) && (APP_M_MAX_PUC_STATES > pucStateRte)),
                "PuC state changed: %d to %d",
                AppMgr_states.curr_pucState,
                pucStateRte);
    if( SIGNALMNGR_PUC_MGR_INVALID == AppMgr_states.curr_pucState )
    {
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_ERROR, 34078733,DLT_CSTRING("CvApp Crashed: No Aliveness from A53"));
#endif
    }
    AppMgr_states.curr_pucState = pucStateRte;

    switch (AppMgr_states.curr_pucState)
    {
      case SIGNALMNGR_PUC_MGR_A53_INITIALIZED:
      {
        AppMgr_states.defStatePuc = APP_MGR_A53_INITIALIZED;
      }
        break;
      case SIGNALMNGR_PUC_MGR_CVAPP_INITIALIZED:
      case SIGNALMNGR_PUC_MGR_CVAPP_COMM_INIT:
      {
        AppMgr_states.defStatePuc = APP_MGR_WAIT_CVAPP_INIT;
      }
        break;

      case SIGNALMNGR_PUC_MGR_NORMAL:
      {
        AppMgr_states.defStatePuc = APP_MGR_NORMAL;
      }
        break;
      default:
        break;
    }
#if (STD_ON == DLT_TRACING_STATUS)
  AppMgr_SendDltData_LogSystemStates.pucState = AppMgr_states.curr_pucState;
  AppMgr_SendStatesToDlt();
#endif /* STD_ON == DLT_TRACING_STATUS */

  }
  /* Update PuC State to Rte */
  (void)Rte_Write_AppMgr_PucState_State(AppMgr_states.curr_pucState);

  if (AppMgr_states.defStateDegr == APP_M_NO_STATE)
  {
    if(APP_M_NO_STATE != AppMgr_states.defStatePuc)
    {
      AppMgr_states.defState = AppMgr_states.defStatePuc;
    }
    else
    {
      AppMgr_states.defState = APP_MGR_STARTUP;
    }
  }

  if ((SIGNALMNGR_PUC_MGR_CVAPP_ERROR == pucStateModeRte.puc_state) &&
      (pucStateModeRte.error_description < APP_M_CVAPP_ERR_THSHLD_FOR_COREDUMP))
  {
    /* CvApp state in error and  error description < 100 */
    if (APP_M_FALSE == AppMgr_CVAppErr_NoCoreDump_Trigger)
    {
      /* Trigger information to CDD Dump Handler */
      Rte_Trigger_AppMgr_CVAppError_NoCoreDump();
      AppMgr_CVAppErr_NoCoreDump_Trigger = APP_M_TRUE;
    }
    else
    {
      /* CDD DUmp handler is already triggered. Do Nothing */
    }
  }
  else
  {
    /* Reset the CDD DUmp handler informed flag */
     AppMgr_CVAppErr_NoCoreDump_Trigger = APP_M_FALSE;
  }

  if((AppMgr_states.curr_pucState > APP_M_MAX_PUC_STATES) && (AppMgr_states.curr_pucState !=SIGNALMNGR_PUC_MGR_INVALID))
  {
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_ERROR, 34078731,DLT_CSTRING("Wrong PuC State from ICCOM"));
#endif
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {43D9C774-0ABA-4caa-A649-9EA58D731602}
**********************************************************************************************************************/

static void AppMgr_ManagePuCModeChange(void)
{
  uint8 pucModeRte;
  SignalMngr_PuCStateAndMode pucStateModeRte;

  (void)Rte_Read_SignalMngr_PuCStateMode_PuCStateMode(&pucStateModeRte);
  pucModeRte = pucStateModeRte.puc_mode;
  AppMgr_modes.hilMode_puc = pucStateModeRte.puc_hilMode;
  AppMgr_modes.functionalMode_puc = pucStateModeRte.puc_functionalMode;
  AppMgr_modes.omMode_puc = pucStateModeRte.puc_omMode;
  AppMgr_modes.omSubmode_puc = pucStateModeRte.puc_omSubMode;

  /* Check PuC mode change */
  if (pucModeRte != AppMgr_modes.curr_pucMode)
  {
    AppMgr_modes.prev_pucMode = AppMgr_modes.curr_pucMode;
    AppMgr_modes.curr_pucMode = pucModeRte;

    dcLogi(TAG, ((APP_M_MAX_PUC_MODES > AppMgr_modes.curr_pucMode) && (APP_M_MAX_PUC_MODES > AppMgr_modes.prev_pucMode)),
                "PuC mode changed: %s(%d) to %s(%d)",
                AppMgr_print_PuC_modes[AppMgr_modes.prev_pucMode].text,
                AppMgr_modes.prev_pucMode,
                AppMgr_print_PuC_modes[AppMgr_modes.curr_pucMode].text,
                AppMgr_modes.curr_pucMode);
    dcLogf(TAG, !((APP_M_MAX_PUC_MODES > AppMgr_modes.curr_pucMode) && (APP_M_MAX_PUC_MODES > AppMgr_modes.prev_pucMode)),
                "PuC mode changed: %d to %d",
                AppMgr_modes.prev_pucMode,
                AppMgr_modes.curr_pucMode);
  }

  /* Update PuC Mode to Rte */
  (void)Rte_Write_AppMgr_PucMode_Mode(AppMgr_modes.curr_pucMode);

   if((AppMgr_modes.curr_pucMode > APP_M_MAX_PUC_MODES) && (AppMgr_modes.curr_pucMode !=SIGNALMNGR_PUC_SYS_SecureModes_INVALID))
  {
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_ERROR, 34078732,DLT_CSTRING("Wrong PuC Mode from ICCOM"));
#endif
  }
  /* check for HIL mode */
  if (SIGNALMNGR_PUC_HIL_ENABLED == AppMgr_modes.hilMode_puc)
  {
    AppMgr_HilDataType hilData;
    AppMgr_modes.hilData.hilReadiness = SET_BIT_IN_MASK8(HIL_READY_CVAPP,  AppMgr_modes.hilData.hilReadiness);
    hilData.hilMode = AppMgr_modes.hilData.hilMode;
    hilData.hilReadiness = AppMgr_modes.hilData.hilReadiness;
    (void)Rte_Write_AppMgr_GetHilMode_HilMode((const AppMgr_HilDataType *)&hilData);
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {0035D3F6-5B8E-4008-BCE6-307B63B779B9}
* Traceability to source code: Req. -ID: 8761237, Req. -ID: 14071684
**********************************************************************************************************************/

static void AppMgr_ManageAppMgrStateModeChange(void)
{
  uint8 ecuModeRte;

  ecuModeRte = Rte_Mode_Bs_SecEcuMode_Mode();

  if ((RTE_TRANSITION_SecEcuMode != ecuModeRte) &&
      (AppMgr_modes.curr_mode != ecuModeRte))
  {
    if (APP_M_MAX_MODES > AppMgr_modes.curr_mode)
    {
      /* protect previous mode from corrupting during the initial default setting */
      AppMgr_modes.prev_mode = AppMgr_modes.curr_mode;
    }
    AppMgr_modes.curr_mode = ecuModeRte;

    if((HIL_ENABLED != AppMgr_modes.hilData.hilMode) && (HIL_ACTIVE != AppMgr_modes.hilData.hilMode))
    {
      /* HIL is not enabled or active - propogate the non default mode change to SignalMngr */
      if (AppMgr_modes.prev_mode != AppMgr_modes.curr_mode)
      {
        (void)Rte_Switch_AppMgr_SysModeChanged_Mode((AppMgr_SysModeType)ecuModeRte);
        dLogi(TAG, "ECU mode sent to PuC: %d", AppMgr_print_R7_modes[ecuModeRte].id);
      }
    }
    else
    {
      /* HIL is enabled or Active continue with AppMgrSysmodeStatus 0 HIL */
      if ((RTE_MODE_SecEcuMode_FIELD == AppMgr_modes.curr_mode) || (RTE_MODE_SecEcuMode_PLANT == AppMgr_modes.curr_mode))
      {
        /* if Plant or Field mode is entered and Hil is enabled or active
         * then reset the Hil Nvm block. So that from the next Startup ECU will not be in Hil */
        dLogi(TAG, "Enter Plant or Field Mode. Hil Active or enabled. Clear Hil NvmBlock");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078816,DLT_CSTRING("Enter Plant or Field Mode. Hil Active or enabled. Clear Hil NvmBlock"));
#endif
        AppMgr_ResetHilNvM_SM = APP_M_RESET_HIL_NVM_START;
        if (AppMgr_modes.prev_mode != AppMgr_modes.curr_mode)
        {
          (void)Rte_Switch_AppMgr_SysModeChanged_Mode((AppMgr_SysModeType)ecuModeRte);
          dLogi(TAG, "ECU mode sent to PuC: %d", AppMgr_print_R7_modes[ecuModeRte].id);
        }

      }
      else
      {
        if (AppMgr_modes.prev_mode != AppMgr_modes.curr_mode)
        {
          (void)Rte_Switch_AppMgr_SysModeChanged_Mode((AppMgr_SysModeType)ecuModeRte);
          dLogi(TAG, "ECU mode sent to PuC: %d", AppMgr_print_R7_modes[ecuModeRte].id);
        }

      }
    }
#if (STD_ON == DLT_TRACING_STATUS)
    AppMgr_SendDltData_LogSystemStates.curr_state = AppMgr_states.curr_state;
    AppMgr_SendDltData_LogSystemStates.prev_state = AppMgr_states.prev_state;
    AppMgr_SendDltData_LogSystemModes.curr_mode = AppMgr_modes.curr_mode;
    AppMgr_SendDltData_LogSystemModes.prev_mode = AppMgr_modes.prev_mode;
    AppMgr_SendStatesModesOnChangeToDlt();
    AppMgr_SendModesToDlt();
#endif /* STD_ON == DLT_TRACING_STATUS */

    dcLogi(TAG, ((APP_M_MAX_MODES > AppMgr_modes.curr_mode) && (APP_M_MAX_MODES > AppMgr_modes.prev_mode)),
                "CuC mode changed: %s(%d) to %s(%d)",
                AppMgr_print_R7_modes[AppMgr_modes.prev_mode].text,
                AppMgr_modes.prev_mode,
                AppMgr_print_R7_modes[AppMgr_modes.curr_mode].text,
                AppMgr_modes.curr_mode);
    dcLogf(TAG, !((APP_M_MAX_MODES > AppMgr_modes.curr_mode) && (APP_M_MAX_MODES > AppMgr_modes.prev_mode)),
                "CuC mode changed: %d to %d",
                AppMgr_modes.prev_mode,
                AppMgr_modes.curr_mode);
  }

  if ((HIL_ACTIVE != AppMgr_modes.hilData.hilMode) && (HIL_READY_MASK == AppMgr_modes.hilData.hilReadiness))
  {
    AppMgr_HilDataType hilData;

    AppMgr_modes.hilData.hilMode = HIL_ACTIVE;
    hilData.hilMode = AppMgr_modes.hilData.hilMode;
    hilData.hilReadiness = AppMgr_modes.hilData.hilReadiness;
    (void)Rte_Write_AppMgr_GetHilMode_HilMode((const AppMgr_HilDataType *)&hilData);
    dLogi(TAG, "CuC HIL mode changed to %s(%d), readiness mask %d",
               AppMgr_print_R7_Hil[AppMgr_modes.hilData.hilMode].text,
               AppMgr_modes.hilData.hilMode,
               AppMgr_modes.hilData.hilReadiness);
  }

  /* Handle HilNvm Block erase */
  AppMgr_HandleResetHilNvM();
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {FEEC5DB4-1E14-49c8-BAA2-19A62D1BFB34}
**********************************************************************************************************************/

static void AppMgr_ReadHAMData(void)
{
  HAM_HamModeType hamMode;
  NetSigMonASILB_StatusAutonomousDrivingType StateAutonomousDriving;
  AppMgr_FunctionalModeType HAM_FunctionalMode_CP60_State;

  (void)Rte_Read_AppMgr_StatusAutonomousDriving_Output_StatusAutonomousDrivingEL(&StateAutonomousDriving);
  (void)Rte_Read_HAM_HamMode_HamMode(&hamMode);

  AppMgr_modes.hamData.HamMode = hamMode;

  if(StateAutonomousDriving.StatusBitflag == VALID_DATA)
  {
    switch(StateAutonomousDriving.StateAutonomousDrivingEnum)
    {
      case StateAutonomousDrivingEnum_Off:
        HAM_FunctionalMode_CP60_State = e_HAM_FUNCT_MODE_CP60_STATES_OFF;
      break;

      case StateAutonomousDrivingEnum_Init:
        HAM_FunctionalMode_CP60_State = e_HAM_FUNCT_MODE_CP60_STATES_INIT;
      break;

      case StateAutonomousDrivingEnum_Ready:
        HAM_FunctionalMode_CP60_State = e_HAM_FUNCT_MODE_CP60_STATES_READY;
      break;

      case StateAutonomousDrivingEnum_Preactive:
        HAM_FunctionalMode_CP60_State = e_HAM_FUNCT_MODE_CP60_STATES_PREACTIVE;
      break;

      case StateAutonomousDrivingEnum_Active:
        HAM_FunctionalMode_CP60_State = e_HAM_FUNCT_MODE_CP60_STATES_ACTIVE;
      break;

      default:
        HAM_FunctionalMode_CP60_State = e_HAM_FUNCT_MODE_CP60_STATES_OFF;
      break;
    }
    /* Clear the Bits of HAM Mode CP60 in the functional Mode bit field */
    AppMgr_functionalMode = ((AppMgr_functionalMode) & ((AppMgr_FunctionalModeType)(~((AppMgr_FunctionalModeType)e_HAM_FUNCT_MODE_CP60_STATES_BIT_MASK))));

    /* Bit Shift the HAM Function Mode CP60 State as per the mask in functional mode bit field */
    HAM_FunctionalMode_CP60_State = HAM_FunctionalMode_CP60_State << HAM_FUNCT_MODE_CP60_BIT_SHIFT;

    /* Update the Bit shifted HAM function mode CP60 state in the bit field */
    AppMgr_functionalMode = (AppMgr_functionalMode | HAM_FunctionalMode_CP60_State);
  }
  else
  {
    /*Do nothing*/
  }

}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {7C1A7A69-519B-4dd8-B10C-0AAFE1C0BF2D}
**********************************************************************************************************************/

static void AppMgr_ProcessBswMNotify_Shutdown(void)
{
  if ((APP_MGR_TRANS_IN_PROGRSS == AppMgr_states.isTransition) ||
      (APP_MGR_STANDBY == AppMgr_states.curr_state))
  {
    if ((TRUE == EthDiagMM_MgmtAdapterParallelFlashModeGet()) ||
        (e_CM_Reset == AppMgr_reqShdown))
    {
      /* soft reset */
      Mcu_PerformReset();
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_WARN, 34078740,DLT_CSTRING("Soft Reset"));
#endif
    }
    else
    {
      /* notify SysCtrlManager about shutdown */
      (void)Rte_Call_SysCtrl_SetShutDown_Set_ShutDown(AppMgr_reqShdown);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID2(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_WARN, 34078739,DLT_CSTRING("Shutdown request: "),DLT_UINT8(AppMgr_reqShdown));
#endif
    }
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {FF6F7E20-CB2C-43e1-B845-FB102CD7C2B3}
* Traceability to source code: Req. -ID: 13962043, Req. -ID: 8700047
**********************************************************************************************************************/

static void AppMgr_ProcessBswMNotify_StartCMReset(void)
{
  if (APP_MGR_NO_TRANS == AppMgr_states.isTransition)
  {
    /* start CM_RESET */
    AppMgr_ChangeState(APP_MGR_RESET_BOOTL);
    /* type of request for RH850 */
    AppMgr_reqShdown = e_CM_Reset;
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {AC321733-65CD-4e9e-918A-A829AE965D4D}
* Traceability to source code: Req. -ID: 13961919, Req. -ID: 8700043, Req. -ID: 14619380
**********************************************************************************************************************/

static void AppMgr_ProcessBswMNotify_StartHardReset(void)
{
  if (APP_MGR_NO_TRANS == AppMgr_states.isTransition)
  {
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_WARN, 34078749,DLT_CSTRING("DCM Hard Reset Request"));
#endif
    /* start ECU_RESET */
    AppMgr_ChangeState(APP_MGR_HARD_RESET);
    /* type of request for RH850 */
    AppMgr_reqShdown = e_ECU_RESET;

  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {5265E94A-2B04-4f28-9446-3D41D5D4D46E}
* Traceability to source code: Req. -ID: 13893259, Req. -ID: 13893486, Req. -ID: 13893893, Req. -ID: 14046681
                               Req. -ID: 13960314, Req. -ID: 14046665, Req. -ID: 14070250, Req. -ID: 8761203,
                               Req. -ID: 14046839
**********************************************************************************************************************/

static void AppMgr_ProcessBswMNotify_StartStandby(void)
{
  if (APP_MGR_NO_TRANS == AppMgr_states.isTransition)
  {
    /* notify SysCtrlManager about PreShutDown */
    (void)Rte_Call_SysCtrl_SetShutDown_Set_ShutDown(e_PreShutDown);
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_WARN, 34078736,DLT_CSTRING("Shutdown request: PreShutDown"));
#endif
    /* Changed AppMgr_reqShdown to ShutDown*/
    AppMgr_reqShdown = e_ShutDown;
    /* start STANDBY */
    /* Req. -ID: 13893259, Req. -ID: 13893486, Req. -ID:14046839 */
    AppMgr_ChangeState(APP_MGR_STANDBY);
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {B1D7EE1E-2821-4879-9E15-3169AF7EE5F3}
* Traceability to source code: Req. -ID: 3986605
**********************************************************************************************************************/


/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {596C6106-F72A-4178-8B81-2CB6E210F98E}
* Traceability to source code: Req. -ID: 13880948, Req. -ID: 14046681, Req. -ID: 14046679
**********************************************************************************************************************/

static void AppMgr_ProcessBswMNotify_Normal(void)
{
  if (AppMgr_states.curr_state == APP_MGR_STANDBY)
  {
    /* Notify CVApp about the going back to normal */
    /* Req. -ID: 13880948 */
    (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7ResumeOperationRequest);
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078757,DLT_CSTRING("R7 LFC Request = R7 Resume Operation"));
#endif
    dLogi(TAG, "E_R7ResumeOperationRequest");
    /* Reset the isTransition Flag */
    AppMgr_states.isTransition = APP_MGR_NO_TRANS;
    /* Reset Standby timer */
    AppMgr_shdownTimeout = 0U ;
    /* Reset EcuReqMode */
    (void)Rte_Write_AppMgr_ReqBswMEcuMode_requestedMode(ECU_STARTUP_REQ);

    if (APP_M_TRUE == AppMgr_AllowedNextState(AppMgr_states.prev_state))
    {
      AppMgr_ChangeState(AppMgr_states.prev_state);
    }
    else
    {
      /* Req. -ID: 13939479 */
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID3(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078804, DLT_CSTRING("Prev CuC Sate ="),
                                                                    DLT_UINT8(AppMgr_states.prev_state),
                                                                    DLT_CSTRING("invalid for Return from Standby"));
#endif
      dLogi(TAG, "Prev CuC State = %d invalid for Return from Standby",AppMgr_states.prev_state);
      AppMgr_states.defState = AppMgr_DefaultCuCStateForTransition();
      AppMgr_ChangeState(AppMgr_states.defState);
    }
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {CED2586E-7259-4727-A6FB-057251688DF2}
**********************************************************************************************************************/

static void AppMgr_ProcessBswMNotification(Rte_ModeType_AppMgr_BswmNotificationMDG bswmNotification)
{
  switch (bswmNotification)
  {
    case RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_SHUTDOWN:
    {
      AppMgr_ProcessBswMNotify_Shutdown();
    }
      break;
    case RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_START_CMRESET:
    {
      AppMgr_ProcessBswMNotify_StartCMReset();
    }
      break;
    case RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_START_HARDRESET:
    {
      AppMgr_ProcessBswMNotify_StartHardReset();
    }
      break;
    case RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_START_STANDBY:
    {
      AppMgr_ProcessBswMNotify_StartStandby();
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_WARN, 34078747,DLT_CSTRING("Process STANDBY Notification started"));
#endif
    }
      break;
    case RTE_MODE_AppMgr_BswmNotificationMDG_BSWM_INFO_NORMAL_OPER:
    {
      AppMgr_ProcessBswMNotify_Normal();
    }
      break;
    default:
      /* do nothing */
      break;
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {0EFD65AC-89BD-4330-9E7E-FBC1A6466092}
* Traceability to source code: Req. -ID: 14046663, Req. -ID: 14046668
**********************************************************************************************************************/

static void AppMgr_ProcessBswMStateMachine(void)
{
  RE_AppMgr_Main_newBswmNotif = Rte_Mode_AppMgr_BswmNotification_Mode();

  if (RE_AppMgr_Main_newBswmNotif != RE_AppMgr_Main_bswmNotif)
  {
    RE_AppMgr_Main_bswmNotif = RE_AppMgr_Main_newBswmNotif;
    AppMgr_ProcessBswMNotification(RE_AppMgr_Main_bswmNotif);
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {DEFE038E-9F0F-4da9-9ACA-7794EB2E4F5B}
* Traceability to source code: Req. -ID: 13881511, Req. -ID: 10458792, Req. -ID: 10628270
**********************************************************************************************************************/

static void AppMgr_CheckPendingRequests(void)
{
  uint8 newAppState;
  Std_ReturnType HandleFetraflaSuccess;

  newAppState = AppMgr_states.newAppState;
  if ((PENDING_REQ == AppMgr_states.reqInProgress) && (APP_MGR_NO_TRANS == AppMgr_states.isTransition))
  {
    AppMgr_states.reqInProgress = NO_REQ;

    if (APP_M_TRUE == AppMgr_AllowedNextState(newAppState))
    {
      if ((APP_MGR_PARTIAL_RESET == newAppState) &&
            (APP_M_PR_REASON_CVAPP == AppMgr_partialResetReason))
      {
          /* If Forced Partial reset Triggered by CvApp Then Send back ack to CvApp */
          /* Req. -ID: 14047173 */
          (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7ForcedPartialResetRequestedFromCVAppACK);
      }
      AppMgr_ChangeState(newAppState);
    }
  }

  /* Check OMC-Fetrafla changes */
  /* Req. -ID: 14046671 */
  RE_AppMgr_Main_newFetraflaMode = Rte_Mode_OMC_OperatingModeNotification_currentOperatingMode();
  if (RE_AppMgr_Main_newFetraflaMode != RE_AppMgr_Main_fetraflaMode)
  {
    HandleFetraflaSuccess = AppMgr_Internal_HandleFetraflaReq(RE_AppMgr_Main_newFetraflaMode);
    if (E_OK == HandleFetraflaSuccess)
    {
      RE_AppMgr_Main_fetraflaMode = RE_AppMgr_Main_newFetraflaMode;
    }
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {4F579278-9FED-454f-B610-694BAAF9B15A}
* Traceability to source code: Req. -ID: 13871852, Req. -ID: 14072974
**********************************************************************************************************************/

static void AppMgr_ProcessAppMgrCurrentState(void)
{
  switch (AppMgr_states.curr_state)
  {
    case APP_MGR_STARTUP:
      AppMgr_CheckStartup(RE_AppMgr_Main_bswmNotif);
      break;
    case APP_MGR_RESET_BOOTL:
      AppMgr_CheckCMReset();
      break;
    case APP_MGR_HARD_RESET:
      AppMgr_CheckHardReset();
      break;
    case APP_MGR_FAULT:
      AppMgr_CheckFault();
      break;
    case APP_MGR_A53_INITIALIZED:
      AppMgr_CheckWaitA53();
      break;
    case APP_MGR_WAIT_CVAPP_INIT:
      AppMgr_CheckWaitCvApp();
      break;
    case APP_MGR_OM_FLASH:
      AppMgr_CheckOMFlash();
      break;
    case APP_MGR_STANDBY:
      AppMgr_CheckStandBy();
      break;
    default:
      break;
  }
}

/* Actions for APP_MGR_OM_FLASH state */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {C3A48C96-AACF-42dc-9FB4-7532AB18D302}
**********************************************************************************************************************/

static void AppMgr_CheckOMFlash(void)
{
  if (APP_MGR_SHUTDOWN_TIMEOUT == AppMgr_shdownTimeout)
  {
    AppMgr_shdownTimeout = 0U;
    /* ready to reset */
    /* Notify BswM about shutdown */
    (void)Rte_Write_AppMgr_ReqBswMEcuMode_requestedMode(ECU_SHUTDOWN_REQ);
  } else
  {
    /* increment shutdown wait counter */
    AppMgr_shdownTimeout++;
  }
  /* Trigger R7 Stack and Cpu Utilization at shutdown */
  /* Req. -ID: 8761372 */
  AppMgr_TriggerR7StackCpuUtilization();
}

/* Actions for APP_MGR_STANDBY mode */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {0AB9B4C3-0B57-41b4-8C3D-FF73F7057DFF}
* Traceability to source code: Req. -ID: 13893719, Req. -ID: 14047095, Req. -ID: 13938280, Req. -ID: 14046663,
                               Req. -ID: 14046668
**********************************************************************************************************************/

static void AppMgr_CheckStandBy(void)
{
  /*Increment PrepareshutdownRequest Timer in case it started*/
  if(AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqTimer != APP_M_PREP_SHUTDOWN_REQ_TIMER_STOPPED)
  {
    if(AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqTimer >= APP_M_PREP_SHUTDOWN_REQ_TIMER_EXPIRED)
    {
      AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqTimer = APP_M_PREP_SHUTDOWN_REQ_TIMER_STOPPED ;
      AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqCvappAck = APP_M_CVAPP_ACK_TIMEOUT ;
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078771, DLT_CSTRING("E_CVAppPrepareShutDownRequestAck Timeout"));
#endif
    }
    else
    {
      AppMgr_StandbyPrepareShutdownReq.prepareShutdownReqTimer ++ ;/* increment by 10ms*/
    }
  }

  if (APP_MGR_SHUTDOWN_TIMEOUT == AppMgr_shdownTimeout)
  {
      AppMgr_shdownTimeout = APP_MGR_SHUTDOWN_TIMEOUT_INC ;
      /* ready to perfrom shutdown seq, Notify BswM about standby*/
      (void)Rte_Write_AppMgr_ReqBswMEcuMode_requestedMode(ECU_STANDBY_REQ);
      dLogi(TAG, "AppMgr ShutdownTimeout Expired Notify BswM to proceed shutdowseq");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078803, DLT_CSTRING("AppMgr ShutdownTimeout Expired Notfify BswM to proceed shutdowseq"));
#endif
  }
  else if (AppMgr_shdownTimeout < APP_MGR_SHUTDOWN_TIMEOUT)
  {
      /* increment shutdown wait counter */
      AppMgr_shdownTimeout++;
  }
  else
  {
    /* Do Nothing */
  }
  /* Trigger R7 Stack and Cpu Utilization at shutdown */
  AppMgr_TriggerR7StackCpuUtilization();
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {9B0AD3DE-E6E1-4203-9055-0076CA07CA3C}
**********************************************************************************************************************/

static void  AppMgr_TriggerR7StackCpuUtilization(void)
{
  if(((boolean)FALSE) == AppMgr_R7StackCpuUseTrg)
  {
    (void)Rte_Switch_AppMgr_RequestMaxR7StackUtilize_Shutdown(RTE_MODE_AppMgr_MaxStackCalc_START);
    AppMgr_R7StackCpuUseTrg = ((boolean)TRUE);
  }
}


/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {2456E6AF-0178-498a-9739-55F85CCDDDFA}
* Traceability to source code: Req. -ID: 8761237
**********************************************************************************************************************/

static void AppMgr_BroadcastAllModesStates(void)
{
  OMProt_SystemModeSubModeType RawOMModeSubMode;
  AppMgr_OMModeSubModeType ProcessedOMModeSubMode;
  uint8 serdesState;
  OmProt_OmCurrentFwModeType omFw;
  AppMgr_IdleModeStatusType idleStatus;

  (void)Rte_Write_AppMgr_PADStatus_Status(AppMgr_PADStatus);  /* PRQA S 3417, 3426 */ /* MD_3417, MD_3426 */

  idleStatus = AppMgr_modes.idleModeStatus;
  (void)Rte_Write_AppMgr_IdleModeStatus_idleMode(idleStatus);

  (void)Rte_Call_SerDes_read_States_read_state(&serdesState);
  (void)Rte_Read_OmProt_OmCurrentFwMode_fwMode(&omFw);

  if (serdesState != SERDES_RTE_STATE_LINKCHECK)
  {
    ProcessedOMModeSubMode.Mode = APP_M_OM_DEF_MODE;
    ProcessedOMModeSubMode.SubMode = APP_M_OM_DEF_MODE;
  } else if (omFw == OM_FW_BOOT)
  {
    ProcessedOMModeSubMode.Mode = APP_M_OM_FW_UPGRADE;
    ProcessedOMModeSubMode.SubMode = APP_M_NO_MODE;
  } else {

    /* Read Raw OM Mode and Sub Modes */
    (void)Rte_Read_OMProt_SystemModeSubMode_ModeSubMode(&RawOMModeSubMode);

    /* Update Processed OM Mode and sub mode for Broadcast */
    ProcessedOMModeSubMode.Mode = (Rte_DT_AppMgr_OMModeSubModeType_0)RawOMModeSubMode.Mode;
    ProcessedOMModeSubMode.SubMode = (Rte_DT_AppMgr_OMModeSubModeType_1)RawOMModeSubMode.SubMode;
  }

  if ((AppMgr_modes.curr_OmMode.OmMode != ProcessedOMModeSubMode.Mode) ||
     (AppMgr_modes.curr_OmMode.OmSubmode != ProcessedOMModeSubMode.SubMode))
  {
    dLogi(TAG,  "OM state changed %d %d - %d %d",
                AppMgr_modes.curr_OmMode.OmMode,
                AppMgr_modes.curr_OmMode.OmSubmode,
                ProcessedOMModeSubMode.Mode,
                ProcessedOMModeSubMode.SubMode);
#if (STD_ON == DLT_TRACING_STATUS)
    AppMgr_SendDltData_LogSystemStates.omMode = ProcessedOMModeSubMode.Mode;
    AppMgr_SendDltData_LogSystemStates.omSubMode = ProcessedOMModeSubMode.SubMode;
    AppMgr_SendStatesToDlt();
#endif /* STD_ON == DLT_TRACING_STATUS */
  }

  AppMgr_modes.curr_OmMode.OmMode = ProcessedOMModeSubMode.Mode;
  AppMgr_modes.curr_OmMode.OmSubmode = ProcessedOMModeSubMode.SubMode;

  /* Broadcast OM Mode and Submode */
  (void)Rte_Write_ApMgr_OMModeSubMode_ModeSubMode(&ProcessedOMModeSubMode);

  /* Broadcast Functional Mode */
  if(AppMgr_functionalModePrev != AppMgr_functionalMode)
  {
    /* Write the Functional Mode to SigMgr */
    (void)Rte_Write_AppMgr_GetFunctionalMode_FunctionalMode(AppMgr_functionalMode); /* PRQA S 3417, 3426 */ /* MSRD_3417 */ /* MSRD_3426 */
    /* Print the Functional Mode on change only */
    dLogi(TAG,"AppMgr Functional Mode = " BYTE_TO_BINARY_PATTERN BYTE_TO_BINARY_PATTERN ,BYTE_TO_BINARY((uint8)(AppMgr_functionalMode >> 8U)), BYTE_TO_BINARY((uint8)(AppMgr_functionalMode)));
    AppMgr_functionalModePrev = AppMgr_functionalMode ;
  }
}

/* Manage Partial Reset Diagnostic job */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {B8EA2236-BB49-44f4-9D56-4078AA61D83C}
* Traceability to source code: Req. -ID: 14078011
**********************************************************************************************************************/

static uint8 AppMgr_HandleDcmReqPR(uint8 opStatus)
{
  uint8 result;

  switch (opStatus)
  {
    case DCM_INITIAL:
    {
      if (AppMgr_DcmPRPreconditions() == RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK)
      {
        result = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
      }
      else
      {
        /* Start Partial Reset operation */
        dLogi(TAG, "DCM PartialReset: start operation");
        (void)Rte_Write_AppMgr_Internal_ReqDiagSnd_diagReq(APP_M_REQ_PR);
        result = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
      }
    }
      break;
    case DCM_PENDING:
    {
      AppMgr_RspDiagType diagRsp;
      (void)Rte_Read_AppMgr_Internal_RspDiagRcv_diagRsp(&diagRsp);
      switch (diagRsp)
      {
        case APP_M_RSP_DIAG_OK:
        {
          dLogi(TAG, "DCM PartialReset: return CvApp OK");
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NONE);
          result = DCM_E_OK;
        }
          break;
        case APP_M_RSP_DIAG_NOTOK:
        {
          dLogi(TAG, "DCM PartialReset: return CvApp NOT OK");
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NONE);
          result = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
        }
          break;
        case APP_M_RSP_DIAG_NONE:
        {
          dLogi(TAG, "DCM PartialReset: request again to CvApp");
          (void)Rte_Write_AppMgr_Internal_ReqDiagSnd_diagReq(APP_M_REQ_PR);
          result = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
        }
          break;
        case APP_M_RSP_DIAG_PENDING:
        default:
        {
          /* wait */
          result = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
        }
          break;
      }
    }
      break;
    default:
    {
      dLogi(TAG, "DCM PartialReset: invalid opStatus %d", opStatus);
      result = DCM_E_NOT_OK;
    }
      break;
  }

  return result;
}

/* Manage Idle state Diagnostic job */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {86DA5C23-656D-41a3-B7A5-AAB24CCC3A79}
* Traceability to source code: Req. -ID: 14641344, Req. -ID: 14674030, Req. -ID: 14674044, Req. -ID: 14078526
**********************************************************************************************************************/

static uint8 AppMgr_HandleDcmReqIdle(uint8 opStatus, pcuint8 data)
{
  uint8 status;
  const uint8 request = (const uint8)(*data);

  switch (request)
  {
    case APP_M_DCM_REQ_IDLE_OFF:
    {
      Idle_Requester = APP_M_REQ_ID_NONE;
      status = AppMgr_DcmSetIdleOff(opStatus);
    }
      break;
    case APP_M_DCM_REQ_IDLE_ON:
    {
      status = AppMgr_DcmSetIdleOn(opStatus);
    }
      break;
    case APP_M_DCM_REQ_IDLE_USER_PRIO_RESET:
    {
      AppMgr_dcm.dcm_IdleUserPrio = APP_M_FALSE;
      dLogi(TAG, "DcmIdleResetPrio: OK");
      status = DCM_E_OK;
    }
      break;
    default:
    {
      dLogi(TAG, "DcmIdle: wrong value");
      status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
    }
      break;
  }

  return status;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {C4BCF88E-CC35-4a1c-9F64-3505836B3582}
**********************************************************************************************************************/

static uint8 AppMgr_DcmPRPreconditions(void)
{
  uint8 status = DCM_E_OK;
  boolean IsCvAppValid;
  OMAuth_InitNegoStatusType OmInitNegoStatus;

  IsCvAppValid = AppMgr_IsCvApp_Valid();
  (void)Rte_Read_OMAuth_InitNegoStatus_InitNego(&OmInitNegoStatus);

  if (APP_M_TRUE != AppMgr_AllowedNextState(APP_MGR_PARTIAL_RESET))
  {
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078753, DLT_CSTRING("Partialreset Mode change not allowed "));
#endif
    dLogi(TAG, "DCM PartialReset: state change not allowed");
    status = DCM_E_NOT_OK;
  }
  else if ((AppMgr_partialReset != APP_M_PR_NONE) && (AppMgr_partialReset != APP_M_PR_OM_SHUTDOWN_WAIT))
  {
    dLogi(TAG, "DCM PartialReset: OM reset in progress");
    status = DCM_E_NOT_OK;
  }
  else if (!((((boolean)TRUE) == IsCvAppValid) &&\
             (AppMgr_modes.curr_OmMode.OmMode != APP_M_OM_DEF_MODE) &&\
             (((OMAuth_InitNegoStatusType)OM_A_INITNEGO_COMPLETE) == OmInitNegoStatus)\
            )
          )
  {
    /* Cvapp is not in valid state or OM is not powered on or Om Initial negotiation not complete,
     *  to respond to a partial reset request */
    status = DCM_E_NOT_OK;
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID7(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078809, DLT_CSTRING("DCM PartialReset: PuC State ="),
                                                                   DLT_UINT8(AppMgr_states.curr_pucState),
                                                                   DLT_CSTRING("Om Mode ="),
                                                                   DLT_UINT8(AppMgr_modes.curr_OmMode.OmMode),
                                                                   DLT_CSTRING("Om Init Nego Status ="),
                                                                   DLT_UINT8(OmInitNegoStatus),
                                                                   DLT_CSTRING("Is Invalid for Partial Reset"));
#endif
    dLoge(TAG, "DCM PartialReset: PuC State = %d, Om Mode = %d, OmInitNegoStatus = %d.  invalid for Partial Reset",AppMgr_states.curr_pucState, AppMgr_modes.curr_OmMode.OmMode, OmInitNegoStatus);
  }
  else
  {
    uint8 serdesState = SERDES_RTE_STATE_INIT;

    (void)Rte_Call_SerDes_read_States_read_state(&serdesState);
    if ((serdesState == SERDES_RTE_STATE_INIT) ||
        (serdesState == SERDES_RTE_STATE_DISABLED))
    {
      /* OM not connected or in shutdown */
      dLogi(TAG, "DCM PartialReset: OM not on");
      status = DCM_E_NOT_OK;
    }
  }

  return status;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {838293D8-6048-4caa-95B4-7CC18E0E08C2}
**********************************************************************************************************************/

static uint8 AppMgr_DcmSetIdleOff(uint8 opStatus)
{
  uint8 status;

  switch (opStatus)
  {
    case DCM_INITIAL:
    {
      switch (AppMgr_DcmSetIdleOffPreconditions())
      {
        case DCM_E_OK:
        {
          dLogi(TAG, "IdleOff: 1.Diag Ok");
          AppMgr_ChangeToDiagIdleOff();
          status = DCM_E_OK;
        }
          break;
        case RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING:
        {
          dLogi(TAG, "IdleOff: 1.Start IdleOff op");
          (void)Rte_Write_AppMgr_Internal_ReqDiagSnd_diagReq(APP_M_REQ_IDLEOFF);
          status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
        }
          break;
        case RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK:
        default:
        {
          dLogi(TAG, "IdleOff: 1.Diag Not OK");
          status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
        }
          break;
      }
    }
      break;
    case DCM_PENDING:
    {
      AppMgr_RspDiagType idleRsp;

      (void)Rte_Read_AppMgr_Internal_RspDiagRcv_diagRsp(&idleRsp);
      switch (idleRsp)
      {
        case APP_M_RSP_DIAG_OK:
        {
          dLogi(TAG, "IdleOff: 2.Diag Ok");
          AppMgr_ChangeToDiagIdleOff();
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NONE);
          status = DCM_E_OK;
        }
          break;
        case APP_M_RSP_DIAG_NOTOK:
        {
          dLogi(TAG, "IdleOff: 2.Diag Not OK");
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NONE);
          status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
        }
          break;
        case APP_M_RSP_DIAG_NONE:
        {
          /* start IdleOn operations */
          dLogi(TAG, "IdleOn: 2.Request IdleOff again");
          (void)Rte_Write_AppMgr_Internal_ReqDiagSnd_diagReq(APP_M_REQ_IDLEOFF);
          status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
        }
          break;
        default:
        {
          /* wait */
          status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
        }
          break;
      }
    }
      break;
    default:
    {
      dLogi(TAG, "IdleOff: 3.Diag Not OK,diag status %d", opStatus);
      (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NONE);
      status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
    }
      break;
  }

  return status;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {BC992991-7D6B-4f49-8580-C656BF6453B5}
**********************************************************************************************************************/

static uint8 AppMgr_DcmSetIdleOn(uint8 opStatus)
{
  uint8 status;

  switch (opStatus)
  {
    case DCM_INITIAL:
    {
      switch (AppMgr_DcmSetIdleOnPreconditions())
      {
        case DCM_E_OK:
        {
          dLogi(TAG, "IdleOn: 1.Diag OK");
          AppMgr_ChangeToDiagIdleOn();
          status = DCM_E_OK;
        }
          break;
        case RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING:
        {
          dLogi(TAG, "IdleOn: 1.Diag Start");
          Idle_Requester = APP_M_REQ_ID_DIAG;
          (void)Rte_Write_AppMgr_Internal_ReqDiagSnd_diagReq(APP_M_REQ_IDLEON);
          status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
        }
          break;
        case RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK:
        default:
        {
          dLogi(TAG, "IdleOn: 1.Diag Not OK");
          status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
        }
          break;
      }
    }
      break;
    case DCM_PENDING:
    {
      AppMgr_RspDiagType idleRsp;

      (void)Rte_Read_AppMgr_Internal_RspDiagRcv_diagRsp(&idleRsp);
      switch (idleRsp)
      {
        case APP_M_RSP_DIAG_OK:
        {
          dLogi(TAG, "IdleOn: 2.Diag Ok");
          AppMgr_ChangeToDiagIdleOn();
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NONE);
          status = DCM_E_OK;
        }
          break;
        case APP_M_RSP_DIAG_NOTOK:
        {
          dLogi(TAG, "IdleOn: 2.Diag Not OK");
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NONE);
          status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
        }
          break;
        case APP_M_RSP_DIAG_NONE:
        {
          dLogi(TAG, "IdleOn: 2.Request IdleOn again");
          (void)Rte_Write_AppMgr_Internal_ReqDiagSnd_diagReq(APP_M_REQ_IDLEON);
          status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
        }
          break;
        case APP_M_RSP_DIAG_PENDING:
        default:
        {
          /* wait */
          status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
        }
          break;
      }
    }
      break;
    default:
    {
      dLogi(TAG, "IdleOn: 3.Diag Not OK,diag status %d", opStatus);
     (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NONE);
      status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
    }
      break;
  }

  return status;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {63DC148C-C4B9-43e9-ABE4-DC6732117CD6}
* Traceability to source code: Req. -ID: 14674036, Req. -ID: 14046671, Req. -ID: 14674038, Req. -ID: 14674040, Req. -ID: 14642852,
                               Req. -ID: 14072961
**********************************************************************************************************************/

static Std_ReturnType AppMgr_Internal_HandleFetraflaReq(uint8 type)
{
  uint8 reqType;
  Std_ReturnType ret = E_NOT_OK;
  boolean IsCvAppValid;
  boolean IsCvAppError;
  OMAuth_InitNegoStatusType OmInitNegoStatus;

  switch (type)
  {
    case OMC_MODE_ASSEMBLY:
    case OMC_MODE_TRANSPORT:
    case OMC_MODE_BMW_FLASH:
    {
      IsCvAppValid = AppMgr_IsCvApp_Valid();
      (void)Rte_Read_OMAuth_InitNegoStatus_InitNego(&OmInitNegoStatus);

      if (((((boolean)TRUE) == IsCvAppValid) &&\
          (AppMgr_modes.curr_OmMode.OmMode != APP_M_OM_DEF_MODE) &&\
          (((OMAuth_InitNegoStatusType)OM_A_INITNEGO_COMPLETE) == OmInitNegoStatus))||\
          ((AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_INVALID)&&(AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_OFF))
         )
      {
        reqType = APP_M_REQ_IDLEON;
        ret = E_OK;
      }
      else
      {
        /* Reject FeTraFla Forced Idle req */
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID7(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078811, DLT_CSTRING("FeTraFlaForcedIdle: PuC State ="),
                                                                       DLT_UINT8(AppMgr_states.curr_pucState),
                                                                       DLT_CSTRING("Om Mode ="),
                                                                       DLT_UINT8(AppMgr_modes.curr_OmMode.OmMode),
                                                                       DLT_CSTRING("Om Init Nego Status ="),
                                                                       DLT_UINT8(OmInitNegoStatus),
                                                                       DLT_CSTRING("Is Invalid for Forced Idle"));
#endif
        dLoge(TAG, "FeTraFlaForcedIdle: PuC State = %d, Om Mode = %d, OmInitNegoStatus = %d.  invalid for forced Idle",AppMgr_states.curr_pucState, AppMgr_modes.curr_OmMode.OmMode, OmInitNegoStatus);
      }

    }
      break;
    case OMC_MODE_NORMAL:
    {
      IsCvAppError = AppMgr_IsCvApp_Error();
      if (((boolean)FALSE) == IsCvAppError)
      {
        reqType = APP_M_REQ_IDLEOFF;
        ret = E_OK;
      }
      else
      {
        /* Reject FeTraFla Idle off req */
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID3(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078812, DLT_CSTRING("FeTraFlaForcedIdle: PuC State ="),
                                                                       DLT_UINT8(AppMgr_states.curr_pucState),
                                                                       DLT_CSTRING("Is Invalid for Forced Idle off"));
#endif
        dLoge(TAG, "FeTraFlaForcedIdle: PuC State = %d.  invalid for forced Idle off",AppMgr_states.curr_pucState);
      }
    }
      break;
    default:
    {
      /* should not happen, ignore */
    }
      break;
  }

  if (E_OK == ret)
  {
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078788, DLT_CSTRING("Fetrafla changed type"),
                                                                  DLT_UINT8(type));
#endif
    (void)Rte_Write_AppMgr_Internal_ReqOmcSnd_omcReq(reqType);
  }
  return ret;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {833E345B-5797-43e5-9C88-E9F5F01E67AF}
**********************************************************************************************************************/

static uint8 AppMgr_DcmSetIdleOnPreconditions(void)
{
  uint8 status;
  uint8 serdesState = SERDES_RTE_STATE_INIT;
  boolean IsCvAppValid;
  OMAuth_InitNegoStatusType OmInitNegoStatus;

  IsCvAppValid = AppMgr_IsCvApp_Valid();
  (void)Rte_Read_OMAuth_InitNegoStatus_InitNego(&OmInitNegoStatus);
  (void)Rte_Call_SerDes_read_States_read_state(&serdesState);

  if (AppMgr_modes.idleModeAllowed != APP_M_TRUE)
  {
    dLogi(TAG, "Diag IdleOn reject: NOT allowed from Coding");
    status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
  }
  else if ((AppMgr_modes.idleModeStatus == APP_M_READ_IDLE_ON_INTERNAL) ||\
           (AppMgr_modes.idleModeStatus == APP_M_READ_IDLE_ON_DIAG_JOB) ||\
           (AppMgr_modes.idleModeStatus == APP_M_READ_IDLE_ON_SERV_INT) ||\
           (AppMgr_modes.idleModeStatus == APP_M_READ_IDLE_ON_ENERGIESPARMODE))
  {
    dLogi(TAG, "Diag IdleOn OK: already IdleOn");
    status = DCM_E_OK;
  }
  else if ((serdesState == SERDES_RTE_STATE_INIT) ||
           (serdesState == SERDES_RTE_STATE_DISABLED))
  {
    dLogi(TAG, "Diag IdleOn OK: OM not connected");
    status = DCM_E_OK;
  }
  else if (!((((boolean)TRUE) == IsCvAppValid) &&\
             (AppMgr_modes.curr_OmMode.OmMode != APP_M_OM_DEF_MODE) &&\
             (((OMAuth_InitNegoStatusType)OM_A_INITNEGO_COMPLETE) == OmInitNegoStatus)\
            )
          )
  {
    /* Cvapp is not in valid state or OM is not powered on or Om Initial negotiation not complete,
     *  to respond to a Idle ON request */
    status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID7(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078810, DLT_CSTRING("DCM Idle ON: PuC State ="),
                                                                   DLT_UINT8(AppMgr_states.curr_pucState),
                                                                   DLT_CSTRING("Om Mode ="),
                                                                   DLT_UINT8(AppMgr_modes.curr_OmMode.OmMode),
                                                                   DLT_CSTRING("Om Init Nego Status ="),
                                                                   DLT_UINT8(OmInitNegoStatus),
                                                                   DLT_CSTRING("Is Invalid for Idle ON Req"));
#endif
    dLoge(TAG, "DCM Idle ON: PuC State = %d, Om Mode = %d, OmInitNegoStatus = %d.  invalid for Idle ON Req",AppMgr_states.curr_pucState, AppMgr_modes.curr_OmMode.OmMode, OmInitNegoStatus);
  }
  else
  {
    status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
  }

  return status;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {2D308E74-FEA1-4cba-A51B-5E000D401F8A}
**********************************************************************************************************************/

static uint8 AppMgr_DcmSetIdleOffPreconditions(void)
{
  uint8 status;
  boolean IsCvAppError;

  IsCvAppError = AppMgr_IsCvApp_Error();

  if (AppMgr_modes.idleModeAllowed != APP_M_TRUE)
  {
    dLogi(TAG, "Diag IdleOff reject: NOT allowed from Coding");
    status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
  }
  else if (AppMgr_modes.idleModeStatus == APP_M_READ_IDLE_OFF)
  {
    dLogi(TAG, "Diag IdleOff OK: already IdleOff");
    status = DCM_E_OK;
  }
  else if (((boolean)TRUE) == IsCvAppError)
  {
    /* Reject FeTraFla Idle off req */
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID3(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078813, DLT_CSTRING("DcmForcedIdle: PuC State ="),
                                                                       DLT_UINT8(AppMgr_states.curr_pucState),
                                                                       DLT_CSTRING("Is Invalid for Forced Idle off"));
#endif
    dLoge(TAG, "DcmForcedIdle: PuC State = %d.  invalid for forced Idle off",AppMgr_states.curr_pucState);
    status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_NOT_OK;
  }
  else if (AppMgr_partialReset != APP_M_PR_OM_SHUTDOWN_WAIT)
  {
    dLogi(TAG, "Diag IdleOff OK: OM not in shutdown");
    status = DCM_E_OK;
  }
  else
  {
    status = RTE_E_AppMgr_DcmStateReqIF_DCM_E_PENDING;
  }

  return status;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {DD876C02-3B05-484b-B85D-FE9A8EF75C9F}
**********************************************************************************************************************/

static void AppMgr_ProcessIdleOnWithOMBIST(void)
{
  static uint8 state;
  switch (AppMgr_Idle.idleCvappAck)
  {
    case APP_M_CVAPP_ACK_NONE:
    {
      if (AppMgr_partialReset == APP_M_PR_NONE)
      {
        dLogi(TAG, "IdleOn: Start %d", AppMgr_Idle.idleRequester);
        dLogi(TAG, "IdleON: Send req to CvApp %d", E_R7IDLEFunctModeEntryRequest);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID4(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078830, DLT_CSTRING("Send IdleOn Req : "),
                                                                      DLT_UINT8(E_R7IDLEFunctModeEntryRequest),
                                                                      DLT_CSTRING("IdleOn Requester : "),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester));
#endif
       (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7IDLEFunctModeEntryRequest);
        /* start timer 7 secs*/
        AppMgr_Idle.timer_started = APP_M_TRUE;
        AppMgr_Idle.timer_max = APPM_M_TIMER_OM_BIST;
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_WAIT_BIST_INPROGR;

        AppMgr_Internal_UpdateIdleOnModeStatus();
      }
      else
      {
        dLogi(TAG, "ProcessIdleOnWithOMBIST: Partial Reset or IdleON is in Progress wait until finished");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078831, DLT_CSTRING("ProcessIdleOnWithOMBIST: Partial Reset or IdleON is in Progress wait until finished"));
#endif
      }
    }
    break;

    case APP_M_CVAPP_WAIT_BIST_INPROGR:
    {
      /* wait and check timer */
      if (AppMgr_Idle.timer_count == AppMgr_Idle.timer_max)
      {
        dLogi(TAG, "IdleOnWithBIST: CVAPP_WAIT_BIST_INPROGR Timeout %d", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078832, DLT_CSTRING("IdleOnWithBIST: CVAPP_WAIT_BIST_INPROGR Timeout"),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester));
#endif

#ifdef EMC_Error_ID_0x2B04
        (void)Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(EMC_Error_ID_0x2B04, DEM_EVENT_STATUS_FAILED);
#endif
        /* max retries done, start forced idle On sequence */
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_FORCED_START;
      }
    }
    break;

    case APP_M_CVAPP_BIST_IN_PROGRESS_ACK:
    {
      if (AppMgr_Idle.timer_count == AppMgr_Idle.timer_max)
      {
        dLogi(TAG, "IdleOnWithBIST: CVAPP_BIST_IN_PROGRESS_ACK Timeout %d", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078834, DLT_CSTRING("IdleOnWithBIST: CVAPP_BIST_IN_PROGRESS_ACK Timeout"),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester));
#endif

#ifdef EMC_Error_ID_0x2B04
        (void)Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(EMC_Error_ID_0x2B04, DEM_EVENT_STATUS_FAILED);
#endif
        /* max retries done, start forced idle On sequence */
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_FORCED_START;

      }
      else
      {
        dLogi(TAG, "IdleOnWithBIST: Toggle for OM");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078847, DLT_CSTRING("IdleOnWithBIST: Toggle for OM"));
#endif
        AppMgr_states.omReset = APP_M_TRUE;
        AppMgr_partialReset = APP_M_PR_OM_READY;
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_WAIT_TOGGLE;
      }
    }
    break;

    case APP_M_CVAPP_WAIT_TOGGLE:
    {
      if((AppMgr_partialReset == APP_M_PR_NONE) || (AppMgr_partialReset == APP_M_PR_DONE))
      {
        dLogi(TAG, "OM Toggling finished");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078845, DLT_CSTRING("OM Toggling finished"));
#endif
        /* Inform ACP,ErrMgr,DegradationMgr about idle state*/
        Rte_Trigger_AppMgr_OMBist_Start();
		    AppMgr_Idle.idleCvappAck = APP_M_CVAPP_WAIT_BIST_DONE;
      }
	}
    break;

    case APP_M_CVAPP_WAIT_BIST_DONE:
    {
      /* wait and check timer */
      if (AppMgr_Idle.timer_count == AppMgr_Idle.timer_max)
      {
        dLogi(TAG, "IdleOnWithBIST: CVAPP_WAIT_BIST_DONE Timeout %d", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078833, DLT_CSTRING("IdleOnWithBIST: CVAPP_WAIT_BIST_DONE Timeout"),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester));
#endif

#ifdef EMC_Error_ID_0x2B04
        (void)Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(EMC_Error_ID_0x2B04, DEM_EVENT_STATUS_FAILED);
#endif
        /* max retries done, start forced idle On sequence */
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_FORCED_START;
      }
    }
    break;

    case APP_M_CVAPP_BIST_DONE_ACK:
    {
      dLogi(TAG, "ACK for BIST DONE");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078846, DLT_CSTRING("ACK for BIST DONE"));
#endif
      AppMgr_ResetParamsBist();
      AppMgr_ResetTimerIdle();
    }
    break;

    case APP_M_CVAPP_ACK_ERROR:
    {
      dLogi(TAG, "IdleOnWithBIST: CVAPP_ACK_ERROR %d", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078835, DLT_CSTRING("IdleOnWithBIST: CvAppAckError for Idle On req"));
#endif
      AppMgr_Idle.idleCvappAck = APP_M_CVAPP_FORCED_START;
    }
    break;

    case APP_M_CVAPP_FORCED_START:
    {
      dLogi(TAG, "IdleOnWithBIST: CAVPP No response or NACK. Force execute Idle On");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078836, DLT_CSTRING("IdleOnWithBIST: CAVPP No response or NACK. Force execute Idle On"));
#endif

      AppMgr_ResetParamsBist();
      AppMgr_ResetTimerIdle();
    }
    break;

    default:
    {
      /* should not happen */
    }
    break;
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {7D10ED36-87A4-4da6-8648-E58A4D051848}
* Traceability to source code: Req. -ID: 14184523, Req. -ID: 14674025, Req. -ID: 14184523, Req. -ID: 14674025
**********************************************************************************************************************/
static void AppMgr_ProcessIdleOn(void)
{
  switch (AppMgr_Idle.idleCvappAck)
  {
    case APP_M_CVAPP_ACK_NONE:
    {
      if ((AppMgr_partialReset == APP_M_PR_NONE) || (APP_M_PR_DONE == AppMgr_partialReset) )
      {
        dLogi(TAG, "IdleOn: Start %d", AppMgr_Idle.idleRequester);
        dLogi(TAG, "IdleON: Send req to CvApp %d", E_R7ForcedIDLEFunctModeEntryRequest);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID4(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078799, DLT_CSTRING("Send IdleOn Req : "),
                                                                      DLT_UINT8(E_R7ForcedIDLEFunctModeEntryRequest),
                                                                      DLT_CSTRING("IdleOn Requester : "),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester));
#endif
       (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7ForcedIDLEFunctModeEntryRequest);
        /* start timer */
        AppMgr_Idle.timer_started = APP_M_TRUE;
        AppMgr_Idle.timer_max = APP_M_TIMER_IDLE;
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_PENDING);
        }
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_INPROGR;
      } else
      {
        dLogi(TAG, "IdleOn: Change requester %d", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078779, DLT_CSTRING("IdleOn: Change requester"),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester));
#endif
        AppMgr_Internal_UpdateIdleOnModeStatus();
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NOTOK);
        }
        AppMgr_ResetParamsIdle();
        AppMgr_ResetTimerIdle();
      }
    }
      break;
    case APP_M_CVAPP_ACK_OK:
    {
      if ((APP_MGR_NO_TRANS == AppMgr_states.isTransition) ||
      (APP_MGR_STANDBY == AppMgr_states.curr_state))
      {
        dLogi(TAG, "IdleOn: CVAPP_ACK_OK %d", AppMgr_Idle.idleRequester);
        /* start OM shutdown */
        if (AppMgr_partialReset == APP_M_PR_NONE)
        {
          AppMgr_partialReset = APP_M_PR_OM_READY;
        }
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_OK);
        }
        AppMgr_Internal_UpdateIdleOnModeStatus();
        /* Update Functional Mode status for IDLE ON */
        AppMgr_functionalMode = ((AppMgr_functionalMode) | ((AppMgr_FunctionalModeType)e_IDLE_FUNCT_MODE_BIT_MASK));
      }
      else
      {
        dLogi(TAG, "IdleOn: CVAPP_ACK_OK %d,Shutdown in progr", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078780, DLT_CSTRING("IdleOn: CVAPP_ACK_OK,Shtdwn inPrgrss"),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester));
#endif
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NOTOK);
        }
      }
      AppMgr_ResetParamsIdle();
      AppMgr_ResetTimerIdle();
    }
      break;
    case APP_M_CVAPP_ACK_ERROR:
    {
      dLogi(TAG, "IdleOn: CVAPP_ACK_ERROR %d", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078800, DLT_CSTRING("CvAppAckError for Idle On req"));
#endif
      if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
      {
        (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_PENDING);
      }
      AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_OK;
    }
      break;
    case APP_M_CVAPP_ACK_INPROGR:
    {
      /* wait and check timer */
      if (AppMgr_Idle.timer_count == AppMgr_Idle.timer_max)
      {
        dLogi(TAG, "IdleOn: CVAPP_ACK_TIMEOUT %d", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078781, DLT_CSTRING("IdleOn: CVAPP_ACK_TIMEOUT"),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester));
#endif
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_PENDING);
        }
        /* max retries done, execute idle On forcefully */
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_OK;
      }
    }
      break;
    case APP_M_CVAPP_ACK_FORCED_OK:
    {
      dLogi(TAG, "IdleOn: CAVPP No response or NACK. Force execute Idle On");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078727, DLT_CSTRING("IdleOn: CAVPP No response or NACK. Force execute Idle On"));
#endif
      if ((APP_MGR_NO_TRANS == AppMgr_states.isTransition)|| APP_MGR_STANDBY == AppMgr_states.curr_state)
      {
        dLogi(TAG, "IdleOn: Idle Requestor %d", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078728, DLT_CSTRING("IdleOn: Idle Requester"),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester));
#endif
        /* start OM shutdown */
        if (AppMgr_partialReset == APP_M_PR_NONE)
        {
          AppMgr_partialReset = APP_M_PR_OM_READY;
        }
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_OK);
        }
        AppMgr_Internal_UpdateIdleOnModeStatus();
        /* Update Functional Mode status for IDLE ON */
        AppMgr_functionalMode = ((AppMgr_functionalMode) | ((AppMgr_FunctionalModeType)e_IDLE_FUNCT_MODE_BIT_MASK));
      }
      else
      {
        dLogw(TAG, "IdleOn: IdleRequester %d, Shutdown in progr", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID3(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078729, DLT_CSTRING("IdleOn: IdleRequester"),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester),
                                                                      DLT_CSTRING("System Shutdown in Progress"));
#endif
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NOTOK);
        }
      }
      AppMgr_ResetParamsIdle();
      AppMgr_ResetTimerIdle();
    }
      break;
    default:
    {
      /* should not happen */
    }
      break;
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {F5383C74-7B3D-4e95-998C-06A04162EA61}
* Traceability to source code: Req. -ID: 14674023
**********************************************************************************************************************/

static void AppMgr_ProcessIdleOff(void)
{
  switch (AppMgr_Idle.idleCvappAck)
  {
    case APP_M_CVAPP_ACK_NONE:
    {
      if (AppMgr_partialReset == APP_M_PR_OM_SHUTDOWN_WAIT)
      {
        dLogi(TAG, "IdleOff: Start");
        dLogi(TAG, "IdleOFF: Send req to CvApp %d", E_R7ForcedIDLEFunctModeExitRequest);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078801, DLT_CSTRING("Send IdleOff Req to Cvapp: "),
                                                                      DLT_UINT8(E_R7ForcedIDLEFunctModeExitRequest));
#endif
        (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7ForcedIDLEFunctModeExitRequest);
        /* start timer */
        AppMgr_Idle.timer_started = APP_M_TRUE;
        AppMgr_Idle.timer_max = APP_M_TIMER_IDLE;
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_PENDING);
        }
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_INPROGR;
      } else
      {
        dLogi(TAG, "IdleOff: Error %d", AppMgr_partialReset);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078782, DLT_CSTRING("IdleOff: Error"),
                                                                       DLT_UINT8(AppMgr_Idle.idleRequester));
#endif
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NOTOK);
        }
        AppMgr_ResetParamsIdle();
        AppMgr_ResetTimerIdle();
      }
    }
      break;
    case APP_M_CVAPP_ACK_OK:
    {
      if ((AppMgr_partialReset == APP_M_PR_OM_SHUTDOWN_WAIT) &&
          ((APP_MGR_NO_TRANS == AppMgr_states.isTransition) || (APP_MGR_STANDBY == AppMgr_states.curr_state)))
      {
        dLogi(TAG, "IdleOff: CVAPP_ACK_OK");
        AppMgr_modes.idleModeStatus = APP_M_READ_IDLE_OFF;
        AppMgr_partialReset = APP_M_PR_OM_STARTUP;
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_USER_PRIO_OFF;
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_OK);
        } else
        {
          AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_OFF;
        }
        /* Req. -ID: 14184523 */
        (void)Rte_Write_AppMgr_GetDcmIdleStatus_idleStatus(AppMgr_dcm.dcm_idleStatus);
        /* Update Functional Mode status for IDLE OFF */
        AppMgr_functionalMode =((AppMgr_functionalMode) & ((AppMgr_FunctionalModeType)~((AppMgr_FunctionalModeType)e_IDLE_FUNCT_MODE_BIT_MASK)));
      }
      else
      {
        dLogi(TAG, "IdleOff: CVAPP_ACK_OK,OM reset %d or shutdown in progress", AppMgr_partialReset);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID4(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078783, DLT_CSTRING("IdleOff: CVAPP_ACK_OK"),
                                                                       DLT_UINT8(AppMgr_Idle.idleRequester),
                                                                       DLT_CSTRING("OM PartialReset inPrgrss"),
                                                                       DLT_UINT8(AppMgr_partialReset));
#endif
      }
      AppMgr_ResetParamsIdle();
      AppMgr_ResetTimerIdle();
    }
      break;
    case APP_M_CVAPP_ACK_ERROR:
    {
      dLogi(TAG, "IdleOff: CVAPP_ACK_ERROR");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078802, DLT_CSTRING("CvAppAckError for Idle Off req"));
#endif
      if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
      {
        (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_PENDING);
      }
      /* max retries done, execute Idle off forcefully */
      AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_OK;
    }
      break;
    case APP_M_CVAPP_ACK_INPROGR:
    {
      /* wait and check timer */
      if (AppMgr_Idle.timer_count == AppMgr_Idle.timer_max)
      {
        dLogi(TAG, "IdleOff: CVAPP_ACK_TIMEOUT");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078784, DLT_CSTRING("IdleOff: CVAPP_ACK_TIMEOUT"),
                                                                      DLT_UINT8(AppMgr_Idle.idleRequester));
#endif
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_PENDING);
        }
        /* max retries done, execute Idle off forcefully */
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_OK;
      }
      if(Idle_Requester != APP_M_REQ_ID_NONE)
      {
        Idle_Requester = APP_M_REQ_ID_NONE;
      }
      else
      {

      }
    }
      break;
    case APP_M_CVAPP_ACK_FORCED_OK:
    {
      dLogi(TAG, "IdleOff: CAVPP No response or NACK. Force execute Idle Off");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078743, DLT_CSTRING("IdleOff: CAVPP No response or NACK. Force execute Idle Off"));
#endif
      if ((AppMgr_partialReset == APP_M_PR_OM_SHUTDOWN_WAIT) &&
          ((APP_MGR_NO_TRANS == AppMgr_states.isTransition) || (APP_MGR_STANDBY == AppMgr_states.curr_state)))
      {
        dLogi(TAG, "IdleOff: CVAPP_ACK_OK");
        AppMgr_modes.idleModeStatus = APP_M_READ_IDLE_OFF;
        AppMgr_partialReset = APP_M_PR_OM_STARTUP;
        if (AppMgr_Idle.idleRequester == APP_M_REQ_ID_DIAG)
        {
          AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_USER_PRIO_OFF;
          (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_OK);
        } else
        {
          AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_OFF;
        }
        /* Req. -ID: 14184523 */
        (void)Rte_Write_AppMgr_GetDcmIdleStatus_idleStatus(AppMgr_dcm.dcm_idleStatus);
        /* Update Functional Mode status for IDLE OFF */
        AppMgr_functionalMode =((AppMgr_functionalMode) & ((AppMgr_FunctionalModeType)~((AppMgr_FunctionalModeType)e_IDLE_FUNCT_MODE_BIT_MASK)));
      }
      else
      {
        dLogi(TAG, "IdleOff: CVAPP No Resp or Nack, IdleRequester:%d. OM reset or shutdown in progress", AppMgr_partialReset);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID4(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078752, DLT_CSTRING("IdleOff: CVApp No Resp or Nack. Idle requester:"),
                                                                       DLT_UINT8(AppMgr_Idle.idleRequester),
                                                                       DLT_CSTRING("OM PartialReset in Progress"),
                                                                       DLT_UINT8(AppMgr_partialReset));
#endif
      }
      AppMgr_ResetParamsIdle();
      AppMgr_ResetTimerIdle();
    }
      break;
    default:
    {
      /* should not happen */
    }
      break;
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {A54D39FE-92A8-43d8-BDB7-1763A16CF564}
Traceability to source code: Req. -ID: 14047179
**********************************************************************************************************************/

static void AppMgr_ProcessPartialResetReq(void)
{
  switch(AppMgr_Idle.idleRequester)
  {
    case APP_M_REQ_ID_DIAG:
      AppMgr_ProcessPartialResetDiagReq();
      break;

    case APP_M_REQ_ID_DEGR:
      AppMgr_ProcessForcedPartialResetDegrReq();
      break;

    default:
      break;
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {A7B92564-A640-49cc-916E-CAEDC1F52DB7}
* Traceability to source code: Req. -ID: 13962265, Req. -ID: 14047181
**********************************************************************************************************************/

static void AppMgr_ProcessPartialResetDiagReq(void)
{
  uint8 nextStateAllowed;

  switch (AppMgr_Idle.idleCvappAck)
  {
    case APP_M_CVAPP_ACK_NONE:
    {
      dLogi(TAG, "PartialReset: Send req to CvApp %d",E_R7DiagJobPartialReset);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078742, DLT_CSTRING("R7 LFC Request = DiagJobPartialReset "),
                                                                    DLT_UINT8(E_R7DiagJobPartialReset));
#endif
      (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7DiagJobPartialReset);
      AppMgr_Idle.timer_started = APP_M_TRUE;
      AppMgr_Idle.timer_max = APP_M_TIMER_DIAG_PR;
      (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_PENDING);
      AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_INPROGR;
    }
      break;
    case APP_M_CVAPP_ACK_OK:
    {
      nextStateAllowed = AppMgr_AllowedNextState(APP_MGR_PARTIAL_RESET);
      if ((NO_REQ == AppMgr_states.reqInProgress) &&
          (APP_M_TRUE == nextStateAllowed))
      {
        AppMgr_partialResetReason = APP_M_PR_REASON_DIAG;
        AppMgr_states.reqInProgress = PENDING_REQ;
        AppMgr_states.newAppState = APP_MGR_PARTIAL_RESET;
        (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_OK);
      }
      else
      {
        dLogi(TAG, "PartialReset: CvApp OK but cannot change state");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078785, DLT_CSTRING("PartialReset: CvApp OK but cannot change state"));
#endif
        (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NOTOK);
      }
       /* Req. -ID: 14047183 */
      AppMgr_ResetParamsIdle();
      /* Req. -ID: 14047177 */
      AppMgr_ResetTimerIdle();
    }
      break;
    case APP_M_CVAPP_ACK_ERROR:
    {
      /* do retry */
      dLogi(TAG, "Received CvAppAckError for R7DiagJobPartialReset. %d",E_R7DiagJobPartialReset);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078797, DLT_CSTRING("Received CvAppAckError for R7DiagJobPartialReset."),
                                                                     DLT_UINT8(E_R7DiagJobPartialReset));
#endif
      (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_PENDING);
      /* max retries done, execute partial reset forcefully */
      AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_OK;
    }
      break;
    case APP_M_CVAPP_ACK_INPROGR:
    {
      /* wait and check timer */
      if (AppMgr_Idle.timer_count == AppMgr_Idle.timer_max)
      {
        dLogi(TAG, "PartialReset: Timer %lu ms expired", AppMgr_Idle.timer_max*20);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078786, DLT_CSTRING("PartialReset: Timer expired"));
#endif
        (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_PENDING);
        /* max retries done, execute partial reset forcefully */
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_OK;
      }
    }
      break;

     case APP_M_CVAPP_ACK_FORCED_OK:
    {
           dLogi(TAG, "ForcedPartialReset: Send req to CvApp %d", E_R7ForcedPartialResetRequest);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078865, DLT_CSTRING("R7 LFC Request = ForcedPartialReset "),
                                                                    DLT_UINT8(E_R7ForcedPartialResetRequest));
#endif
      (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7ForcedPartialResetRequest);
      AppMgr_Idle.timer_started = APP_M_TRUE;
      AppMgr_Idle.timer_max = APP_M_TIMER_DIAG_PR;
      AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_INPROGR;
    }
      break;
    case APP_M_CVAPP_ACK_FORCED_OK_ACK:
    {
      nextStateAllowed = AppMgr_AllowedNextState(APP_MGR_PARTIAL_RESET);
      if ((NO_REQ == AppMgr_states.reqInProgress) &&
          (APP_M_TRUE == nextStateAllowed))
      {
        AppMgr_partialResetReason = APP_M_PR_REASON_DIAG;
        AppMgr_states.reqInProgress = PENDING_REQ;
        AppMgr_states.newAppState = APP_MGR_PARTIAL_RESET;
        (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_OK);
      }
      else
      {
        dLogi(TAG, "ForcedPartialReset: CvApp OK but cannot change state");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078866, DLT_CSTRING("ForcedPartialReset: CvApp OK but cannot change state"));
#endif
        (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_NOTOK);
      }
       /* Req. -ID: 14047183 */
      AppMgr_ResetParamsIdle();
      /* Req. -ID: 14047177 */
      AppMgr_ResetTimerIdle();
    }
      break;
    case APP_M_CVAPP_ACK_FORCED_ERROR:
    {
      /* do retry */
      dLogi(TAG, "Received CvAppAckForcedError for R7DiagJobPartialReset. %d",E_R7ForcedPartialResetRequest);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078867, DLT_CSTRING("Received CvAppAckForcedError for R7DiagJobPartialReset."),
                                                                     DLT_UINT8(E_R7ForcedPartialResetRequest));
#endif
      (void)Rte_Write_AppMgr_Internal_RspDiagSnd_diagRsp(APP_M_RSP_DIAG_PENDING);
      /* max retries done, execute partial reset forcefully */
      AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_FORCED;
    }
      break;
    case APP_M_CVAPP_ACK_FORCED_INPROGR:
    {
   if (AppMgr_Idle.timer_count == AppMgr_Idle.timer_max)
      {
        dLogi(TAG, "ForcedPartialReset: Timer %lu ms expired", AppMgr_Idle.timer_max*40);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078868, DLT_CSTRING("ForcedPartialReset: Timer expired"));
#endif
        /* max retries done, execute partial reset forcefully */
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_FORCED;
      }
    }
      break;
    case APP_M_CVAPP_ACK_FORCED_FORCED:
    {
      dLogi(TAG, "ForcedPartialReset: CAVPP No response or NACK. Force execute Partial reset");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078869, DLT_CSTRING("ForcedPartialReset: CAVPP No response or NACK. Force execute Partial reset"));
#endif
      nextStateAllowed = AppMgr_AllowedNextState(APP_MGR_PARTIAL_RESET);
      if ((NO_REQ == AppMgr_states.reqInProgress) &&
          (APP_M_TRUE == nextStateAllowed))
      {
        AppMgr_partialResetReason = APP_M_PR_REASON_DIAG;
        AppMgr_states.reqInProgress = PENDING_REQ;
        AppMgr_states.newAppState = APP_MGR_PARTIAL_RESET;
      }
      else
      {
        dLogi(TAG, "ForcedPartialReset: CvApp No response or NACK. Try force execute partial reset but cannot change state");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078870, DLT_CSTRING("ForcedPartialReset: CvApp No response or NACK. Try force execute partial reset but cannot change state"));
#endif
      }
      AppMgr_ResetParamsIdle();
      AppMgr_ResetTimerIdle();
    }
      break;
    default:
    {
      /* should not happen */
    }
      break;
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {983E5B30-A78A-42ea-AEED-FF036FECD3C9}
**********************************************************************************************************************/

static void AppMgr_ProcessForcedPartialResetDegrReq(void)
{
  uint8 nextStateAllowed;

  switch (AppMgr_Idle.idleCvappAck)
  {
    case APP_M_CVAPP_ACK_NONE:
    {
      dLogi(TAG, "ForcedPartialReset: Send req to CvApp %d", E_R7ForcedPartialResetRequest);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078741, DLT_CSTRING("R7 LFC Request = ForcedPartialReset "),
                                                                    DLT_UINT8(E_R7ForcedPartialResetRequest));
#endif
      (void)Rte_Call_SignalMngr_LifecycleHandlerR7_SignalMngr_LifecycleReq(E_R7ForcedPartialResetRequest);
      AppMgr_Idle.timer_started = APP_M_TRUE;
      AppMgr_Idle.timer_max = APP_M_TIMER_DEGR_PR;
      AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_INPROGR;
    }
      break;
    case APP_M_CVAPP_ACK_OK:
    {
      nextStateAllowed = AppMgr_AllowedNextState(APP_MGR_PARTIAL_RESET);
      if ((NO_REQ == AppMgr_states.reqInProgress) &&
          (APP_M_TRUE == nextStateAllowed))
      {
        AppMgr_partialResetReason = APP_M_PR_REASON_DEGR;
        AppMgr_states.reqInProgress = PENDING_REQ;
        AppMgr_states.newAppState = APP_MGR_PARTIAL_RESET;
      }
      else
      {
        dLogi(TAG, "ForcedPartialReset: CvApp OK but cannot change state");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078790, DLT_CSTRING("ForcedPartialReset: CvApp OK but cannot change state"));
#endif
      }
      AppMgr_ResetParamsIdle();
      AppMgr_ResetTimerIdle();
    }
      break;
    case APP_M_CVAPP_ACK_ERROR:
    {
      /* do retry */
      dLogi(TAG, "Received CvAppAckError. Do forced ok %d", E_R7ForcedPartialResetRequest);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078798, DLT_CSTRING("Received CvAppAckError. Do forced ok"),
                                                                     DLT_UINT8(E_R7ForcedPartialResetRequest));
#endif
      /* max retries done, execute partial reset forcefully */
      AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_OK;
    }
      break;
    case APP_M_CVAPP_ACK_INPROGR:
    {
      /* wait and check timer */
      if (AppMgr_Idle.timer_count == AppMgr_Idle.timer_max)
      {
        dLogi(TAG, "ForcedPartialReset: Timer %lu ms expired", AppMgr_Idle.timer_max*40);
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078791, DLT_CSTRING("ForcedPartialReset: Timer expired"));
#endif
        /* max retries done, execute partial reset forcefully */
        AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_FORCED_OK;
      }
    }
      break;
    case APP_M_CVAPP_ACK_FORCED_OK:
    {
      dLogi(TAG, "ForcedPartialReset: CAVPP No response or NACK. Force execute Partial reset");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078734, DLT_CSTRING("ForcedPartialReset: CAVPP No response or NACK. Force execute Partial reset"));
#endif
      nextStateAllowed = AppMgr_AllowedNextState(APP_MGR_PARTIAL_RESET);
      if ((NO_REQ == AppMgr_states.reqInProgress) &&
          (APP_M_TRUE == nextStateAllowed))
      {
        AppMgr_partialResetReason = APP_M_PR_REASON_DEGR;
        AppMgr_states.reqInProgress = PENDING_REQ;
        AppMgr_states.newAppState = APP_MGR_PARTIAL_RESET;
      }
      else
      {
        dLogi(TAG, "ForcedPartialReset: CvApp No response or NACK. Try force execute partial reset but cannot change state");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078735, DLT_CSTRING("ForcedPartialReset: CvApp No response or NACK. Try force execute partial reset but cannot change state"));
#endif
      }
      AppMgr_ResetParamsIdle();
      AppMgr_ResetTimerIdle();
    }
      break;
    default:
    {
      /* should not happen */
    }
      break;
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {FCA1CF14-5849-464e-AB61-79B727BE2120}
**********************************************************************************************************************/

static void AppMgr_Internal_UpdateIdleOnModeStatus(void)
{
  switch (AppMgr_Idle.idleRequester)
  {
    case APP_M_REQ_ID_DIAG:
    {
      AppMgr_modes.idleModeStatus = APP_M_READ_IDLE_ON_DIAG_JOB;
      AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_USER_PRIO_ON;
    }
      break;
    case APP_M_REQ_ID_DEGR:
    {
      AppMgr_modes.idleModeStatus = APP_M_READ_IDLE_ON_INTERNAL;
      AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_ON;
    }
      break;
    case APP_M_REQ_ID_OMC:
    {
      AppMgr_modes.idleModeStatus = APP_M_READ_IDLE_ON_ENERGIESPARMODE;
      AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_ON;
    }
      break;
    case APP_M_REQ_ID_NTW:
    {
      AppMgr_modes.idleModeStatus = APP_M_READ_IDLE_ON_SERV_INT;
      AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_ON;
    }
      break;
    default:
    {
      /* should not happen */
      dLoge(TAG, "Invalid IdleRequester: %d", AppMgr_Idle.idleRequester);
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_ERROR, 34078748, DLT_CSTRING("Invalid IdleRequester:"),
                                                                     DLT_UINT8(AppMgr_Idle.idleRequester));
#endif
    }
      break;
  }
  (void)Rte_Write_AppMgr_GetDcmIdleStatus_idleStatus(AppMgr_dcm.dcm_idleStatus);
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {48CBBB1E-2EC5-4b04-A3F5-D100AB036332}
* Traceability to source code: Req. -ID: 14674017, Req. -ID: 14674012
**********************************************************************************************************************/

static void AppMgr_ChangeToDiagIdleOn(void)
{
  AppMgr_modes.idleModeStatus = APP_M_READ_IDLE_ON_DIAG_JOB;
  AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_USER_PRIO_ON;
  AppMgr_dcm.dcm_IdleUserPrio = APP_M_TRUE;
  Idle_Requester = APP_M_REQ_ID_DIAG;
  (void)Rte_Write_AppMgr_GetDcmIdleStatus_idleStatus(AppMgr_dcm.dcm_idleStatus);
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {85DC8C3B-05CE-44e8-B52F-07BF91A1D07D}
* Traceability to source code: Req. -ID: 14674017, Req. -ID: 14674012
**********************************************************************************************************************/

static void AppMgr_ChangeToDiagIdleOff(void)
{
  AppMgr_modes.idleModeStatus = APP_M_READ_IDLE_OFF;
  AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_USER_PRIO_OFF;
  AppMgr_dcm.dcm_IdleUserPrio = APP_M_TRUE;
  (void)Rte_Write_AppMgr_GetDcmIdleStatus_idleStatus(AppMgr_dcm.dcm_idleStatus);
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {DAE82E41-8386-4621-9A42-A2063BC9D18B}
**********************************************************************************************************************/

static void AppMgr_ResetTimerIdle(void)
{
  AppMgr_Idle.timer_count = 0U;
  AppMgr_Idle.timer_started = APP_M_FALSE;
  AppMgr_Idle.timer_max = 0U;
  AppMgr_Idle.retry_count = 0U;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {15936AB9-F634-496a-917E-76BAC80C585F}
**********************************************************************************************************************/

static void AppMgr_ResetParamsIdle(void)
{
  AppMgr_Idle.idleType = APP_M_TYPE_NONE;
  AppMgr_Idle.idleRequester = APP_M_REQ_ID_NONE;
  AppMgr_Idle.idleStatus = APP_MGR_NO_TRANS;
  AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_NONE;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {1767459E-15AE-4b5b-AD9D-80AE9005D753}
**********************************************************************************************************************/

static void AppMgr_ResetParamsBist(void)
{
  AppMgr_Idle.idleCvappAck = APP_M_CVAPP_ACK_NONE;
  AppMgr_Idle.OMBistNeeded = APP_M_FALSE ;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {B827EE32-8CC3-4210-822A-A5D92AE85A3F}
**********************************************************************************************************************/

static void AppMgr_HandleIdleReq_Omc(void)
{
  AppMgr_FnctReqType omcReq;
  (void)Rte_Read_AppMgr_Internal_ReqOmcRcv_omcReq(&omcReq);
  if (omcReq != APP_M_REQ_NONE)
  {
    dLogi(TAG, "AppMgr_ProcessIdle: Omc-Fetrafla Req %d", omcReq);
    if (omcReq == APP_M_TYPE_IDLE_ON)
    {
      AppMgr_Idle.idleMask = SET_BIT_IN_MASK8(APP_M_REQ_ID_OMC, AppMgr_Idle.idleMask);
    }
    else if (omcReq == APP_M_TYPE_IDLE_OFF)
    {
      AppMgr_Idle.idleMask = CLEAR_BIT_IN_MASK8(APP_M_REQ_ID_OMC, AppMgr_Idle.idleMask);
    }
    else
    {
      /* No Idle or. Partial Reset which is handled spearately */
    }
    /* once processed, we reset the request */
    (void)Rte_Write_AppMgr_Internal_ReqOmcSnd_omcReq(APP_M_REQ_NONE);
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {05293E7F-E456-427c-8B37-DD3811C07CE3}
**********************************************************************************************************************/

static void AppMgr_HandleIdleReq_Degr(void)
{
  AppMgr_FnctReqType degrReq;
  (void)Rte_Read_AppMgr_Internal_ReqDegrRcv_degrReq(&degrReq);
  if (degrReq != APP_M_REQ_NONE)
  {
    dLogi(TAG, "AppMgr_ProcessIdle: Degradation Req %d", degrReq);
    if (degrReq == APP_M_TYPE_IDLE_ON)
    {
      AppMgr_Idle.idleMask = SET_BIT_IN_MASK8(APP_M_REQ_ID_DEGR, AppMgr_Idle.idleMask);
    }
    else if (degrReq == APP_M_TYPE_IDLE_OFF)
    {
      AppMgr_Idle.idleMask = CLEAR_BIT_IN_MASK8(APP_M_REQ_ID_DEGR, AppMgr_Idle.idleMask);
    }
    else
    {
      /* No Idle or. Partial Reset which is handled spearately */
    }
    /* once processed, we reset the request */
    /* Req. -ID: 13893715 */
    (void)Rte_Write_AppMgr_Internal_ReqDegrSnd_degrReq(APP_M_REQ_NONE);
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {06D982CF-E94E-4846-97A3-0B1A26DBF46B}
* Traceability to source code: Req. -ID: 8761120
**********************************************************************************************************************/

static void AppMgr_HandleIdleReq_Ntw(void)
{
  AppMgr_FnctReqType ntwReq;
  (void)Rte_Read_AppMgr_Internal_ReqNtwRcv_ntwReq(&ntwReq);
  if (ntwReq != APP_M_REQ_NONE)
  {
    /* dLogi(TAG, "AppMgr_ProcessIdle: Network Req %d", ntwReq); */
    if ((ntwReq == APP_M_TYPE_IDLE_ON) && (AppMgr_Coding_Data_Avilable == TRUE))
    {
      if (AppMgr_OM_overtravel_time_TimeOut >= AppMgr_OM_overtravel_time)
      {
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078822, DLT_CSTRING("Idle Mode network request overtravel timer timeout"));
#endif
        dLogi(TAG, "Idle Mode network request overtravel timer timeout");
        AppMgr_Idle.idleMask = SET_BIT_IN_MASK8(APP_M_REQ_ID_NTW, AppMgr_Idle.idleMask);
        AppMgr_OM_overtravel_time_TimeOut = 0u;
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078821, DLT_CSTRING("IdleOn network request, overtravel timer timeout rest to 0"));
#endif
        dLogi(TAG, "IdleOn network request, overtravel timer timeout rest to 0");
        /* once processed, we reset the request */
        (void)Rte_Write_AppMgr_Internal_ReqNtwSnd_ntwReq(APP_M_REQ_NONE);
      }
      else
      {
        AppMgr_OM_overtravel_time_TimeOut++;

        /* Indicate start of OMBist to be handled if IDLE is currently OFF*/
        if((AppMgr_OM_overtravel_time_TimeOut >= AppMgr_OM_overtravel_time) &&
           (AppMgr_modes.idleModeStatus == APP_M_READ_IDLE_OFF))
        {
          AppMgr_Idle.OMBistNeeded = APP_M_TRUE ;

#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078862, DLT_CSTRING("IdleOn network request, OM BIST IS NEEDED OverTravel time expired"));
#endif

        }
        Over_Travel_Time_dlt_cnt++;
        if(Over_Travel_Time_dlt_cnt == 50u)
        {

#if (STD_ON == DLT_TRACING_STATUS)
          ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078851, DLT_CSTRING("AppMgr_ProcessIdle Idle request timer Value in ms "),
                                                                  DLT_UINT32(AppMgr_OM_overtravel_time_TimeOut * (uint32)20u ));
#endif
          Over_Travel_Time_dlt_cnt = 0u;
        }
        dLogi(TAG, "AppMgr_ProcessIdle Idle request timer Value in ms %d", AppMgr_OM_overtravel_time_TimeOut * 20u);
      }
      AppMgr_OM_overtravel_time_TimeOut_PrintingFlag = TRUE;
    }
    else if (ntwReq == APP_M_TYPE_IDLE_OFF)
    {
      AppMgr_Idle.idleMask = CLEAR_BIT_IN_MASK8(APP_M_REQ_ID_NTW, AppMgr_Idle.idleMask);
      AppMgr_OM_overtravel_time_TimeOut = 0u;
      if (AppMgr_OM_overtravel_time_TimeOut_PrintingFlag == TRUE)
      {
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078758, DLT_CSTRING("IdleOff network request, overtravel timer timeout rest to 0"));
#endif
      dLogi(TAG, "IdleOff network request, overtravel timer timeout rest to 0");
      AppMgr_OM_overtravel_time_TimeOut_PrintingFlag = FALSE;
      }
      /* once processed, we reset the request */
      (void)Rte_Write_AppMgr_Internal_ReqNtwSnd_ntwReq(APP_M_REQ_NONE);
    }
    else
    {
      /* No Idle or. Partial Reset which is handled spearately */
    }
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {DF5CCD01-C576-4fa6-9C1E-80B6D1D182E3}
**********************************************************************************************************************/

static void AppMgr_HandleIdle_PR_States(void)
{
  switch (AppMgr_Idle.idleType)
  {
    case APP_M_TYPE_IDLE_ON:
    {
      if(APP_M_TRUE == AppMgr_Idle.OMBistNeeded)
      {
        AppMgr_ProcessIdleOnWithOMBIST();
      }
      else
      {
        AppMgr_ProcessIdleOn();
      }
    }
      break;
    case APP_M_TYPE_IDLE_OFF:
    {
      AppMgr_ProcessIdleOff();
    }
      break;
    case APP_M_TYPE_PR:
    {
      AppMgr_ProcessPartialResetReq();
    }
      break;
    case APP_M_TYPE_NONE:
    default:
    {
      /* do nothing */
    }
      break;
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {EB6C4324-F471-4a4b-8C12-0C4BE3636813}
**********************************************************************************************************************/

static void AppMgr_HandleIdleOnRequests(void)
{
  if ((APP_M_TRUE == AppMgr_Idle.OMBistNeeded) &&
      (BIT_IN_MASK8(APP_M_REQ_ID_NTW, AppMgr_Idle.idleMask) != 0U))
  {
    if( AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_ON_SERV_INT)
    {
      AppMgr_Idle.idleType = APP_M_TYPE_IDLE_ON;
      AppMgr_Idle.idleRequester = APP_M_REQ_ID_NTW;
      Idle_Requester=APP_M_REQ_ID_NTW;
      AppMgr_Idle.idleStatus = APP_MGR_TRANS_IN_PROGRSS;
    }
  }
  else if (BIT_IN_MASK8(APP_M_REQ_ID_DEGR, AppMgr_Idle.idleMask) != 0U)
  {
    if( AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_ON_INTERNAL)
      {
        AppMgr_Idle.idleType = APP_M_TYPE_IDLE_ON;
        AppMgr_Idle.idleRequester = APP_M_REQ_ID_DEGR;
        Idle_Requester=APP_M_REQ_ID_DEGR;
        AppMgr_Idle.idleStatus = APP_MGR_TRANS_IN_PROGRSS;
      }
    }
    else if (BIT_IN_MASK8(APP_M_REQ_ID_OMC, AppMgr_Idle.idleMask) != 0U)
    {
      if( AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_ON_ENERGIESPARMODE)
      {
        AppMgr_Idle.idleType = APP_M_TYPE_IDLE_ON;
        AppMgr_Idle.idleRequester = APP_M_REQ_ID_OMC;
        Idle_Requester=APP_M_REQ_ID_OMC;
        AppMgr_Idle.idleStatus = APP_MGR_TRANS_IN_PROGRSS;
      }
    }
    else if (BIT_IN_MASK8(APP_M_REQ_ID_NTW, AppMgr_Idle.idleMask) != 0U)
    {
      if( AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_ON_SERV_INT)
      {
        AppMgr_Idle.idleType = APP_M_TYPE_IDLE_ON;
        AppMgr_Idle.idleRequester = APP_M_REQ_ID_NTW;
        Idle_Requester=APP_M_REQ_ID_NTW;
        AppMgr_Idle.idleStatus = APP_MGR_TRANS_IN_PROGRSS;
      }
    }
    else
    {
      /* Idle Mode due to Diag. Handled separately. */
    }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {415F9B6A-E951-4ade-B233-283A261D8C06}
* Traceability to source code: Req. -ID: 14073092, Req. -ID: 14072961
**********************************************************************************************************************/

static void AppMgr_HandleIdleOffRequests(void)
{
  if (AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_INVALID)
  {
    /* Valid Idle mode status is present */
    if(AppMgr_modes.idleModeStatus != APP_M_READ_IDLE_OFF)
    {
      /* Current Idle mode status is not Off so process this off request */
      AppMgr_Idle.idleType = APP_M_TYPE_IDLE_OFF;
      AppMgr_Idle.idleStatus = APP_MGR_TRANS_IN_PROGRSS;
    }
    else if ((AppMgr_dcm.dcm_IdleUserPrio == APP_M_FALSE) &&
             (AppMgr_dcm.dcm_idleStatus == APP_M_DCM_IDLE_USER_PRIO_OFF))
    {
      /* Idle mode status already off Dcm User priortiy is reset but dcmIdlestatus is  still Dcm user prio off */
      /* No need to process this Idle off request as Idle is already in off */
      /* Simply reset the dcmIdlestatus */
      AppMgr_dcm.dcm_idleStatus = APP_M_DCM_IDLE_OFF;
      /* Req. -ID: 14073092, Req. -ID: 14072961 */
      (void)Rte_Write_AppMgr_GetDcmIdleStatus_idleStatus(AppMgr_dcm.dcm_idleStatus);
    }
    else
    {
      /* no request */
    }
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {4B71CA3D-48EE-468e-9BD9-19D595BE41C7}
* Traceability to source code: Req. -ID: 13893257, Req. -ID: 13893480, Req. -ID: 13893715, Req. -ID: 13893715,
                               Req. -ID: 13893891
**********************************************************************************************************************/

static void AppMgr_ManageRsuDegradation(void)
{
  if (APP_M_RSU_DEGRADATION_INVALID != stRsuDegradation)
  {
    if (APP_M_RSU_DEGRADATION_DEGRADED == stRsuDegradation)
    {
      /* Qualify Rsu Degradation Fault */
      (void)Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(EMC_Error_ID_0x0704, DEM_EVENT_STATUS_FAILED);
      dLogw(TAG, "Qualify RsuDegradation fault");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078793, DLT_CSTRING("Qualify RsuDegradation fault"));
#endif
    }
    else if (APP_M_RSU_DEGRADATION_NOT_DEGRADED == stRsuDegradation)
    {
      /* Disqualify Rsu Degradation fault */
      (void)Rte_Call_ErrMgr_DiagnosticMonitor_SetEventStatus(EMC_Error_ID_0x0704, DEM_EVENT_STATUS_PASSED);
      dLogi(TAG, "DisQualify RsuDegradation fault");
#if (STD_ON == DLT_TRACING_STATUS)
      ME_LOG_ID1(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078794, DLT_CSTRING("DisQualify RsuDegradation fault"));
#endif
    }
    else
    {
      /* Indeterminate status - do nothing */
    }
    /* reset Rsu Degradation status. To be executed once at every initialization */
    stRsuDegradation = APP_M_RSU_DEGRADATION_INVALID;
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {438F474F-4016-4627-81DC-5BAA54A7281A}
 *********************************************************************************************************************/

static boolean AppMgr_IsCvApp_Valid(void)
{
  boolean ret = ((boolean)FALSE);

  if ((SIGNALMNGR_PUC_MGR_CVAPP_COMM_INIT == AppMgr_states.curr_pucState)||\
      (SIGNALMNGR_PUC_MGR_NORMAL == AppMgr_states.curr_pucState))
  {
    ret = ((boolean)TRUE);
  }

  return ret;
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {EFA5E6C6-6DDE-4a44-9331-5D069F8FF59F}
 *********************************************************************************************************************/

static boolean AppMgr_IsCvApp_Error(void)
{
  boolean ret = ((boolean)FALSE);

  if ((SIGNALMNGR_PUC_MGR_CVAPP_ERROR == AppMgr_states.curr_pucState)||\
      (SIGNALMNGR_PUC_MGR_INVALID == AppMgr_states.curr_pucState))
  {
    ret = ((boolean)TRUE);
  }

  return ret;
}

#if (STD_ON == DLT_TRACING_STATUS)
/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {B9CD7A31-5348-465d-B658-4FE28503141F}
**********************************************************************************************************************/

static void AppMgr_SendStatesToDlt(void)
{
    if((AppMgr_SendDltData_LogSystemStates.omMode == APP_M_OM_DEF_MODE) || (AppMgr_SendDltData_LogSystemStates.omMode == (APP_M_OM_DEF_MODE - (1U)))){
      ME_LOG_ID10(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078721,
                  DLT_CSTRING("CuC current state"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.curr_state),
                  DLT_CSTRING("CuC previous state"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.prev_state),
                  DLT_CSTRING("PuC state"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.pucState),
                  DLT_CSTRING("OM state"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.omMode - Idle_Requester),
                  DLT_CSTRING("OM substate"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.omSubMode));
    }else
    {
      ME_LOG_ID10(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078721,
                  DLT_CSTRING("CuC current state"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.curr_state),
                  DLT_CSTRING("CuC previous state"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.prev_state),
                  DLT_CSTRING("PuC state"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.pucState),
                  DLT_CSTRING("OM state"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.omMode),
                  DLT_CSTRING("OM substate"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.omSubMode));
    }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {4D416675-6E5B-4daf-9F46-9873131569BB}
**********************************************************************************************************************/

static void AppMgr_SendModesToDlt(void)
{
  ME_LOG_ID16(Call_Sendlog_App,APPLMANGR, DLT_LOG_INFO, 34078722,
              DLT_CSTRING("Current secure mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemModes.curr_mode),
              DLT_CSTRING("Previous secure mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemModes.prev_mode),
              DLT_CSTRING("HAM mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemModes.hamMode),
              DLT_CSTRING("HIL mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemModes.hilData.hilMode),
              DLT_CSTRING("HIL readiness"), DLT_UINT8(AppMgr_SendDltData_LogSystemModes.hilData.hilReadiness),
              DLT_CSTRING("Idle mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemModes.idleMode),
              DLT_CSTRING("Dyno mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemModes.dynamoMode),
              DLT_CSTRING("EoL mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemModes.eolMode));
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {A2985C8B-5ADE-4102-8DFC-6CB825A5B3A5}
**********************************************************************************************************************/

static void AppMgr_SendStatesModesOnChangeToDlt(void)
{
  ME_LOG_ID8(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078720,
             DLT_CSTRING("CuC current state"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.curr_state),
             DLT_CSTRING("CuC previous state"), DLT_UINT8(AppMgr_SendDltData_LogSystemStates.prev_state),
             DLT_CSTRING("Current secure mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemModes.curr_mode),
             DLT_CSTRING("Previous secure mode"), DLT_UINT8(AppMgr_SendDltData_LogSystemModes.prev_mode));
}
#endif /* STD_ON == DLT_TRACING_STATUS */

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {966B402A-B4B2-44c5-9CC3-032D4493326C}
 *********************************************************************************************************************/

static uint8 AppMgr_DefaultCuCStateForTransition(void)
{
  uint8 DefaultCuCState;

  if(APP_M_NO_STATE != AppMgr_states.defStatePuc)
  {
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID2(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_INFO, 34078805, DLT_CSTRING("Transition to DefPuCState ="),
                                                                  DLT_UINT8(AppMgr_states.defStatePuc));
#endif
    dLogi(TAG, "Transition to  DefPuCState = %d",AppMgr_states.defStatePuc);
    DefaultCuCState = AppMgr_states.defStatePuc;
  }
  else
  {
#if (STD_ON == DLT_TRACING_STATUS)
    ME_LOG_ID3(DLT_APPMM_CALL, APPLMANGR, DLT_LOG_WARN, 34078806, DLT_CSTRING("Invalid DefPuCState ="),
                                                                DLT_UINT8(AppMgr_states.defStatePuc),
                                                                DLT_CSTRING("Transition to APP_MGR_STARTUP"));
#endif
    dLogw(TAG, "Invalid DefPuCState = %d Transition to APP_MGR_STARTUP",AppMgr_states.defStatePuc);
    DefaultCuCState = APP_MGR_STARTUP;
  }

  return DefaultCuCState;
}


/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {C962069D-678D-437b-B7A4-F73AA544302E}
**********************************************************************************************************************/

static void AppMgr_Update_DynamoEOL_FunctionalModes(void)
{
  uint8 DynamometerMode = RTE_MODE_AppMgr_DynamoModeMDG_APP_MGR_DYNAMO_NOMODE;
  uint8 EolMode = RTE_MODE_AppMgr_EOLModeMDG_APP_MGR_EOL_NOMODE;

  (void)AppMgr_GetDynamometerMode(&DynamometerMode);
  if (RTE_MODE_AppMgr_DynamoModeMDG_APP_MGR_DYNAMOMETER_ENABLED == DynamometerMode)
  {
    /* Update Functional Mode status for Dynamo ON */
    AppMgr_functionalMode = ((AppMgr_functionalMode) | ((AppMgr_FunctionalModeType)e_DYNO_FUNCT_MODE_BIT_MASK));
  }
  else
  {
    /* Update Functional Mode status for Dynamo OFF */
    AppMgr_functionalMode = ((AppMgr_functionalMode) & ((AppMgr_FunctionalModeType)~((AppMgr_FunctionalModeType)e_DYNO_FUNCT_MODE_BIT_MASK)));
  }

  (void)AppMgr_GetEolMode(&EolMode);
  if (RTE_MODE_AppMgr_EOLModeMDG_APP_MGR_EOL_ENABLED == EolMode)
  {
    /* Update Functional Mode status for Eol ON */
    AppMgr_functionalMode = ((AppMgr_functionalMode) | ((AppMgr_FunctionalModeType)e_EOL_FUNCT_MODE_BIT_MASK));
  }
  else
  {
    /* Update Functional Mode status for Eol OFF */
    AppMgr_functionalMode = ((AppMgr_functionalMode) & ((AppMgr_FunctionalModeType)~((AppMgr_FunctionalModeType)e_EOL_FUNCT_MODE_BIT_MASK)));
  }
}

/**********************************************************************************************************************
* Traceability to SDD: DD-ID: {C115C015-D2A7-497e-9244-6FB84CF86BB0}
**********************************************************************************************************************/

static void AppMgr_HandleResetHilNvM(void)
{
  Std_ReturnType retval;
  switch (AppMgr_ResetHilNvM_SM)
  {
    case APP_M_RESET_HIL_NVM_INIT:
    {
      /* do nothing */
    }
      break;

    case APP_M_RESET_HIL_NVM_START:
    {
      if (NVMEXT_REQ_STS_INIT == ReqHilNvmErite_Status)
      {
        /* Trigger Nvm Immediate write if it is not already triggered */
        Hil_NvData.hilMode = 0U;
        retval = Rte_Call_NvmExtService_AppMgr_HilData_Write(((uint16)NvMConf_NvMBlockDescriptor_NVM_BLOCK_AppMgr_HilData), &Hil_NvData, 0U, &ReqHilNvmErite_Status, TRUE);
        if (E_NOT_OK == retval)
        {
          /* Triggering Nvm is unsuccessful. retry */
          ReqHilNvmErite_Status = NVMEXT_REQ_STS_INIT;
          dLoge(TAG, "Hil NvM Block clear Unsuccessful. Try again");
#if (STD_ON == DLT_TRACING_STATUS)
          ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_ERROR, 34078817,DLT_CSTRING("Hil NvM Block clear Unsuccessful. Try again"));
#endif
        }
        else
        {
          /* E_OK or pending. Verify the write status in the next call*/
          AppMgr_ResetHilNvM_SM = APP_M_RESET_HIL_NVM_VERIFY;
        }
      }
      else
      {
        /* Nvm write for the block already in progress.
         * wait till it is over and start the reset.
        */
        dLogw(TAG, "A Hil NvM Block write already in progess. Wait and retry Clear");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_WARN, 34078818,DLT_CSTRING("A Hil NvM Block write already in progess. Wait and retry reset"));
#endif
        AppMgr_ResetHilNvM_SM = APP_M_RESET_HIL_NVM_WAIT_START;
      }
    }
      break;

    case APP_M_RESET_HIL_NVM_VERIFY:
    {
      if (NVMEXT_REQ_STS_PENDING == ReqHilNvmErite_Status)
      {
        /*  wait until status is ok or not ok */
      }
      else if (NVMEXT_REQ_STS_OK == ReqHilNvmErite_Status)
      {
        /* hil Nvm block is cleared successfully. Reset the SM to init */
        dLogi(TAG, "HilNvM Block clear successful");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_INFO, 34078819,DLT_CSTRING("HilNvM Block clear successful"));
#endif
        AppMgr_ResetHilNvM_SM = APP_M_RESET_HIL_NVM_INIT;
        ReqHilNvmErite_Status = NVMEXT_REQ_STS_INIT;
      }
      else
      {
        /* Hil Nvm block Clear is unsuccessful. Try again */
        dLoge(TAG, "Hil NvM Block clear Unsuccessful. Try again");
#if (STD_ON == DLT_TRACING_STATUS)
        ME_LOG_ID1(DLT_APPMM_CALL,APPLMANGR, DLT_LOG_ERROR, 34078817,DLT_CSTRING("Hil NvM Block clear Unsuccessful. Try again"));
#endif
        ReqHilNvmErite_Status = NVMEXT_REQ_STS_INIT;
        AppMgr_ResetHilNvM_SM = APP_M_RESET_HIL_NVM_START;
      }
    }
      break;

    case APP_M_RESET_HIL_NVM_WAIT_START:
    {
      if (NVMEXT_REQ_STS_PENDING == ReqHilNvmErite_Status)
      {
        /*  wait until status is ok or not ok */
      }
      else
      {
        /* Hil Nvm block current write is completed. Start the reset process */
        ReqHilNvmErite_Status = NVMEXT_REQ_STS_INIT;
        AppMgr_ResetHilNvM_SM = APP_M_RESET_HIL_NVM_START;
      }
    }
      break;
    default:
    {
      /* Error case. Reset the SM to init */
      AppMgr_ResetHilNvM_SM = APP_M_RESET_HIL_NVM_INIT;
      ReqHilNvmErite_Status = NVMEXT_REQ_STS_INIT;
    }
      break;
  }
}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/





/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

*/
