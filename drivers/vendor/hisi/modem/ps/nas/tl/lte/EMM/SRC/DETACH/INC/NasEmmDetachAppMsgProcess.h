
/******************************************************************************

  Copyright(C)2008,Hisilicon Co. LTD.

 ******************************************************************************
  File Name       : NasEmmDetachAppMsgProcess.h
  Description     : NasEmmDetachAppMsgProcess.h
  History           :
      1.leili 132387       2008-09-09  Draft Enact

******************************************************************************/

#ifndef __NASEMMDETACHAPPMSGPROCESS_H__
#define __NASEMMDETACHAPPMSGPROCESS_H__



/*****************************************************************************
  1 Include Headfile
*****************************************************************************/
#include    "vos.h"
#include    "NasEmmPubUGlobal.h"
#include    "NasEmmAttach.h"
#include    "NasEmmDetach.h"
#include    "AppMmInterface.h"

#if (FEATURE_LPP == FEATURE_ON)
#include    "LmmLcsInterface.h"
#endif


/*****************************************************************************
  1.1 Cplusplus Announce
*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif
/*****************************************************************************
  #pragma pack(*)    设置字节对齐方式
*****************************************************************************/
#if (VOS_OS_VER != VOS_WIN32)
#pragma pack(4)
#else
#pragma pack(push, 4)
#endif

/*****************************************************************************
  2 Macro
*****************************************************************************/





/*****************************************************************************
  3 Massage Declare
*****************************************************************************/



/*****************************************************************************
  4 Enum
*****************************************************************************/




/*****************************************************************************
  5 STRUCT
*****************************************************************************/



/*****************************************************************************
  6 UNION
*****************************************************************************/


/*****************************************************************************
  7 Extern Global Variable
*****************************************************************************/

/*****************************************************************************
  8 Fuction Extern
*****************************************************************************/
extern  VOS_UINT32  NAS_EMM_AppDetachReqMsgChk(const MMC_LMM_DETACH_REQ_STRU *pMsgpMsg);
extern  VOS_VOID    NAS_EMM_EsmSendStatResult(EMM_ESM_ATTACH_STATUS_ENUM_UINT32 ulStatRst);
#if ( FEATURE_LPP == FEATURE_ON )
extern VOS_VOID  NAS_LMM_SndLmmLcsEstCnf
(
    LMM_LCS_EST_RESULT_ENUM_UINT32       ulEstRst,
    VOS_UINT32                          ulOpid
);
#endif





/*****************************************************************************
  9 OTHERS
*****************************************************************************/

#if (VOS_OS_VER != VOS_WIN32)
#pragma pack()
#else
#pragma pack(pop)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif











































