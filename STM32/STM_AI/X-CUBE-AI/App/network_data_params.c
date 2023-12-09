/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Dec  4 23:35:39 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[261] = {
  0x7f7f810000000000U, 0x0U, 0x3fffffc040000000U, 0x40000000U,
  0x217e3fffffc0U, 0xffffe2aeffffe553U, 0x3fffffc000000000U, 0x40000000U,
  0x40000000f0691300U, 0x40000000U, 0x7f810000U, 0x7f000000U,
  0x81007f0000000000U, 0x7f00000000U, 0x0U, 0x7d800003107U,
  0x0U, 0x4000000040000000U, 0x0U, 0xffffdce6c0000000U,
  0x0U, 0x0U, 0x4000000000000000U, 0x0U,
  0x12bf00000000U, 0x2ff400000000U, 0x40000000U, 0x4000000000000000U,
  0xffffdf13U, 0x0U, 0x0U, 0xf800U,
  0x800000000U, 0x80000000000U, 0x0U, 0x0U,
  0x3142000000000000U, 0xb0000000000U, 0xf500000000000000U, 0x272e0000U,
  0x900f50000000000U, 0xf83800000000U, 0xead428000009090aU, 0x250000000b0d00U,
  0x161100000b190000U, 0x190a0000U, 0x2400000000000c00U, 0xf50a00000eU,
  0x0U, 0x0U, 0xf9000000U, 0x0U,
  0x7000000U, 0x0U, 0xdd00d000000e0000U, 0xef000000100e00U,
  0xdc17000016b00000U, 0xe7f00000U, 0xa700180000000000U, 0x10000000U,
  0x0U, 0x0U, 0x8000000000000U, 0x0U,
  0x800000000000000U, 0xf900000000000000U, 0xf90000000000U, 0xf8000000U,
  0x0U, 0x8f9U, 0x0U, 0x0U,
  0x2622cb00000000f3U, 0xd400f000000000U, 0xbb0f080023880000U, 0x800000036280000U,
  0x81001108f9000000U, 0x360d0000f5U, 0xd9c10b0000000000U, 0x16000000000000U,
  0x1300f9000e000000U, 0xe9d60000U, 0x900000007000800U, 0xc300000000U,
  0xd8c2e80000000000U, 0x0U, 0x11000012ec0000U, 0x8000000f00000U,
  0xedf9120000000000U, 0x8d40c070000U, 0x17004a0a000ef70aU, 0xf92d080000000000U,
  0x2ce90000ee51f800U, 0x7000000000ef900U, 0x6800ed0000071200U, 0x8U,
  0x0U, 0xf80000U, 0xf900000000000000U, 0xf80000000000U,
  0x0U, 0x0U, 0xf8U, 0x0U,
  0x0U, 0x0U, 0x0U, 0x0U,
  0x0U, 0x0U, 0x80000U, 0x0U,
  0x0U, 0x0U, 0x0U, 0xf80000000000U,
  0x700f8000000U, 0x0U, 0x8000000U, 0x0U,
  0xe3d51d0b000a0000U, 0x170800000a0800U, 0x1209000000160000U, 0xe000000U,
  0x1200110000000b00U, 0xf900ea0b000000U, 0xb6acd900f8121400U, 0xf00U,
  0x13000010dd0000U, 0x800abab0000U, 0xd1001a0000000900U, 0xa70d00000cU,
  0x2e35000000000000U, 0x0U, 0xf000000000000000U, 0xf9000039350000U,
  0x80000U, 0x2f00000000U, 0x800311100000009U, 0x18000800000b00U,
  0x1f000000f3330000U, 0x800U, 0x4300000000000000U, 0xed0d00000aU,
  0x3e41000000000000U, 0x0U, 0xf700000000000000U, 0x30340000U,
  0x0U, 0x3600000000U, 0x2b40000000090000U, 0xf0000008000000U,
  0xf900000000U, 0x71c2d00f8U, 0x0U, 0x3a0000f900U,
  0xf9U, 0x0U, 0x0U, 0x0U,
  0x0U, 0x0U, 0xf9f7U, 0x0U,
  0x0U, 0x0U, 0xf700U, 0x0U,
  0xf9f8000000000000U, 0xf80000f900U, 0xf900000000U, 0x0U,
  0x0U, 0xf9U, 0xf8000000000000U, 0xf800U,
  0x8000000U, 0x0U, 0xf90000000000U, 0xf8U,
  0x0U, 0x0U, 0x0U, 0x0U,
  0x0U, 0xf8f80000U, 0xd7ebda0d00001000U, 0xf0000000000U,
  0xe516000015ba0000U, 0xc0d30000U, 0xb900180000000c00U, 0xea0c000000U,
  0xb39eed0e000c0909U, 0xb0c00U, 0x12000015ef0000U, 0xf80000c0bc0000U,
  0xe2001000f9000000U, 0xf800a20d000000U, 0x2325ea0000000000U, 0x0U,
  0xf20900000ff20000U, 0x41390000U, 0xf1000e0000000000U, 0x2c00000000U,
  0xceba000800000000U, 0x800000e0000U, 0x18ed0000U, 0xddcc0000U,
  0xe400160000000900U, 0xba0f000000U, 0x2b3b000000000000U, 0xf40000000c0000U,
  0xf600000000000000U, 0x22290000U, 0x0U, 0x3200000000U,
  0x0U, 0xf80000000000U, 0x0U, 0xf800U,
  0x0U, 0x0U, 0xfffffc6fffffffa0U, 0xffffff3900000a14U,
  0x78cU, 0xfffffabc00000000U, 0x2880000078bU, 0xffffff790000094bU,
  0x0U, 0x852ffffff0bU, 0xfffffd5300000c92U, 0x262000009fdU,
  0xfffffe83fffffc09U, 0xfffffedefffffed8U, 0x0U, 0xc8f00000a21U,
  0xb27fffffc56U, 0x8fffffd17U, 0x1500002200ec0000U, 0xdc0000U,
  0xec0037U, 0x1a00231c0000U, 0x310000250000ea00U, 0x0U,
  0xe30000e100U, 0xe600e7002b0000U, 0xe900000000U, 0x0U,
  0xe6000000U, 0xe80000U, 0xa80000d700000000U, 0x0U,
  0xbdU, 0xc8ce0000U, 0xec0000d100000000U, 0xde00U,
  0x81U, 0xe200c6d70000U, 0x136fffffe31U, 0xffffffb3ffffff89U,
  0x42U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

