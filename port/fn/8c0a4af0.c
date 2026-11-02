#include "../decls.h"
undefined4 s_Sp_Home_njd_0a4af0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(iVar1 * 0x124 + -0x73d7ac8c) = &PTR_s_Sp_Creep_njm_8c13b0a4;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7ac88) = &PTR_DAT_8c13b0c8;
    *(undefined **)(iVar1 * 0x124 + -0x73d7ac84) = PTR_s_Sp_Home_njd_8c13b094;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ac80) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7ac7c) = PTR_s_SPIDER_BODY_8c13b09c;
    *(undefined **)(iVar1 * 0x124 + -0x73d7ac78) = PTR_s_Sp_MotionPack_npd_8c13b098;
    *(undefined **)(iVar1 * 0x124 + -0x73d7ac70) = PTR_s_SP_PVM_8c13b0a0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ac6c) = 7;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ac60) = 0x8c2852b0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abdc) = 0x8c28559c;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abd8) = 0x3f000000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abd4) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abc4) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abc0) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abbc) = 0x43e10000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abf0) = 0x8c285310;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7abec) = 9;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abe8) = 0x8c285340;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7abe4) = 9;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7aba0) = 0x43430000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ab9c) = 0x43480000;
    *(float *)(iVar1 * 0x124 + -0x73d7abc8) = *(float *)(iVar1 * 0x124 + -0x73d7abc8) * 0.7;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7aba4) = 0x41700000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ab70) = 0x433e0000;
  }
  _DAT_8c2854a0 = 0xffff;
  _DAT_8c2854a4 = 1;
  _DAT_8c2854a8 = 1;
  _DAT_8c2854ac = 0;
  return 0;
}

__asm__(".globl _s_Sp_Home_njd_0a4af0\n.set _s_Sp_Home_njd_0a4af0, _s_Sp_Home_njd_0a4af0_def\n");
