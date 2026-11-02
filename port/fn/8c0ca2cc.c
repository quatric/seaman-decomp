#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0ca2d4_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  undefined4 auStack_18 [2];
  
  uVar4 = 2;
  auStack_18[0] = 0;
  uStack_1c = 0;
  iVar1 = *(int *)(ar5 + 4);
  if (iVar1 == 0) {
    puVar3 = auStack_18;
    pcVar2 = s_GRAPHICS_ENV_8c13d1c2;
    iVar1 = FUN_8c0209b0(0x8c3eb334,s_uzu_nj_8c13d1bb,s_GRAPHICS_ENV_8c13d1c2,puVar3);
    if (iVar1 == 1) {
      FUN_8c015ad4(0x8c437030,auStack_18[0],pcVar2,puVar3,ar4);
      *(undefined4 *)(ar5 + 4) = 1;
    }
    else if (iVar1 == 0) {
      report_error_message(s_uzu_nj_8c13d1bb,s_Failed_NJCM_CGame__LoadForEvent1_8c13d1f0,0,2);
    }
  }
  else if (iVar1 == 1) {
    puVar3 = &uStack_1c;
    pcVar2 = s_GRAPHICS_ENV_8c13d1c2;
    iVar1 = FUN_8c020aa8(0x8c3eb334,s_uzu_nj_8c13d1bb,s_GRAPHICS_ENV_8c13d1c2,puVar3);
    if (iVar1 == 1) {
      Class_129920_m0_015248(0x8c437028,uStack_1c,pcVar2,puVar3,ar4);
      *(undefined4 *)(ar5 + 4) = 2;
    }
    else if (iVar1 == 0) {
      report_error_message(s_uzu_nj_8c13d1bb,s_Failed_NJTL_CGame__LoadForEvent1_8c13d219,0,2);
    }
  }
  else if (iVar1 == 2) {
    ar7_00 = get_field_4_0253e4(0x8c437028,ar5,ar6,ar7);
    iVar1 = FUN_8c020e80(0x8c3eb334,s_SCREW_8c13d242,s_GRAPHICS_ENV_8c13d1c2,ar7_00);
    if (iVar1 == 1) {
      *(undefined4 *)(ar5 + 4) = 3;
      uVar4 = 4;
    }
    else if (iVar1 == 0) {
      report_error_message(s_SCREW_8c13d242,s_Failed_NJTL_CGame__LoadForEvent1_8c13d219,0,2);
    }
  }
  return uVar4;
}

__asm__(".globl _s_GRAPHICS_ENV_0ca2d4\n.set _s_GRAPHICS_ENV_0ca2d4, _s_GRAPHICS_ENV_0ca2d4_def\n");
