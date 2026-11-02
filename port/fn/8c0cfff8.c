#include "../decls.h"
int s_GRAPHICS_ENV_0d0006_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar7_00;
  undefined4 ar5_00;
  char *ar6_00;
  undefined4 *ar7_01;
  uint uVar2;
  undefined4 in_stack_ffffffb8;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  uStack_28 = 0;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Heater_nj_8c13d46c,s_GRAPHICS_ENV_8c13d47d,auStack_24);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_Heater_nj_8c13d46c,s_Failed_NJCM_CHeater__CreateModel_8c13d48a,1,2);
  }
  ar7_01 = &uStack_28;
  ar6_00 = s_GRAPHICS_ENV_8c13d47d;
  iVar1 = FUN_8c020af4(ar5,s_suisou_Heater_nj_8c13d46c,s_GRAPHICS_ENV_8c13d47d,ar7_01);
  if (iVar1 == 0) {
    ar7_01 = (undefined4 *)0x2;
    ar6_00 = (char *)0x1;
    report_error_message
              (s_suisou_Heater_nj_8c13d46c,s_Failed_NJTL_CHeater__CreateModel_8c13d4ad,1,2);
  }
  FUN_8c015ad4(ar4 + 2,auStack_24[0],ar6_00,ar7_01,in_stack_ffffffb8);
  ar5_00 = uStack_28;
  (**(code **)(*ar4 + 8))(ar4,uStack_28,ar6_00,ar7_01);
  ar7_00 = (int *)get_field_4_0253e4(ar4,ar5_00,ar6_00,ar7_01);
  iVar1 = FUN_8c015bb8(ar4 + 2,ar5_00,ar6_00,ar7_01);
  iVar1 = thunk_FUN_8c0151e8(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),0x17,ar6_00,ar7_01);
  ar4[8] = iVar1 + 4;
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = FUN_8c020ef0(ar5,s_HEATER_8c13d4d0,s_GRAPHICS_ENV_8c13d47d,ar7_00);
  if (iVar1 == -1) {
    iVar1 = report_error_message(s_Failed_to_load_water_tank_textue_8c13d4d7,&DAT_8c13d4fb,1,2);
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d0006\n.set _s_GRAPHICS_ENV_0d0006, _s_GRAPHICS_ENV_0d0006_def\n");
