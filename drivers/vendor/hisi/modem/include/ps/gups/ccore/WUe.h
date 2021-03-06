

#ifndef __WUE_H__
#define __WUE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define WUE_CIPHER_KEY_LEN              16

/*****************************************************************************
  3 枚举定义
*****************************************************************************/
/* CN域标识 */
enum WUE_CN_DOMAIN_TYPE_ENUM
{
    WUE_CS_DOMAIN                       = 0,
    WUE_PS_DOMAIN                       = 1,
    WUE_CN_DOMAIN_TYPE_BUTT
};
typedef VOS_UINT8 WUE_CN_DOMAIN_TYPE_ENUM_UINT8;

/* 标识当前业务类型 */
enum WUE_TRAFFIC_TYPE_ENUM
{
    WUE_TRAFFIC_TYPE_CS_AMR             = 0,
    WUE_TRAFFIC_TYPE_CS_DATA            = 1,

    WUE_TRAFFIC_TYPE_BUTT
};
typedef VOS_UINT8 WUE_TRAFFIC_TYPE_ENUM_UINT8;

/* 对应的RLC的模式 */
enum WUE_RLC_MODE_ENUM
{
    WUE_RLC_AM_MODE                     = 0,
    WUE_RLC_UM_MODE                     = 1,
    WUE_RLC_TM_MODE                     = 2,

    WUE_RLC_MODE_BUTT
};
typedef VOS_UINT8   WUE_RLC_MODE_ENUM_UINT8;



/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/








#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of WUe.h */
