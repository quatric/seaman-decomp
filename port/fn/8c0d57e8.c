#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0d57ee_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  undefined4 ar5_01;
  char *pcVar3;
  undefined4 in_stack_ffffffdc;
  undefined4 auStack_14 [2];
  
  uVar2 = CONCAT31((int3)((uint)in_stack_ffffffdc >> 8),(char)ar6);
  auStack_14[0] = 0;
  ar5_00 = ar5;
  while( true ) {
    iVar1 = get_field_d0_0d3f70(ar4 + 0x34,ar5_00,ar6,ar7);
    if (iVar1 == 0) break;
    iVar1 = get_field_d0_0d3f70(ar4 + 0x34,ar5_00,ar6,ar7);
    auStack_14[0] = s_CWaterSnowList_GetWaterSnowO_0fe76c(ar4 + 0x34,iVar1 + -1,ar6,ar7);
    s_CWaterSnowList_TakeOut_0fe694(ar4 + 0x34,auStack_14[0],ar6,ar7);
    ar5_00 = auStack_14;
    FUN_8c0fec4c(0x8c3e7d30,ar5_00,ar6,ar7);
  }
  FUN_8c0fe7f4(ar4 + 0x34,ar5_00,ar6,ar7);
  if ((char)uVar2 == '\x02') {
    FUN_8c020a70(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,ar4);
    pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
    iVar1 = ar4;
    FUN_8c020b68(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,ar4);
    FUN_8c015ad4(ar4 + 0x10,0,pcVar3,iVar1,uVar2);
    FUN_8c020a70(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,ar4);
    pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
    iVar1 = ar4;
    FUN_8c020b68(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,ar4);
    uVar2 = FUN_8c015ad4(ar4 + 0x1c,0,pcVar3,iVar1,uVar2);
  }
  else {
    FUN_8c020a70(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,ar4);
    pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
    iVar1 = ar4;
    FUN_8c020b68(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,ar4);
    FUN_8c015ad4(ar4 + 0x10,0,pcVar3,iVar1,uVar2);
    FUN_8c020a70(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,ar4);
    pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
    iVar1 = ar4;
    FUN_8c020b68(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,ar4);
    ar5_01 = 0;
    FUN_8c015ad4(ar4 + 0x1c,0,pcVar3,iVar1,uVar2);
    uVar2 = s_Failed_s_015312(ar4 + 0x12a5c,ar5_01,pcVar3,iVar1);
  }
  return uVar2;
}

__asm__(".globl _s_GRAPHICS_ENV_0d57ee\n.set _s_GRAPHICS_ENV_0d57ee, _s_GRAPHICS_ENV_0d57ee_def\n");
