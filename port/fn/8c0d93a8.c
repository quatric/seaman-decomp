#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0d93b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  char *ar5_00;
  char *pcVar2;
  undefined4 *puVar3;
  int **ar7_01;
  uint uVar4;
  undefined4 in_stack_ffffffb0;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined4 auStack_18 [2];
  
  auStack_18[0] = 0;
  piStack_1c = (int *)0x0;
  uStack_20 = 0;
  puVar3 = auStack_18;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c0209fc(ar5,s_Ring_Home_nj_8c13fc74,s_GRAPHICS_ENV_8c13f8cb,puVar3);
  if (iVar1 == 0) {
    report_error_message(s_Ring_Home_nj_8c13fc74,s_Read_NJCM_Failed__RING_UNIT__Cre_8c13fc81,0,2);
  }
  else {
    FUN_8c015ad4(ar4 + 0x28,auStack_18[0],pcVar2,puVar3,in_stack_ffffffb0);
  }
  ar7_01 = &piStack_1c;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_Ring_Home_nj_8c13fc74,s_GRAPHICS_ENV_8c13f8cb,ar7_01);
  if (iVar1 == 0) {
    ar7_01 = (int **)0x2;
    pcVar2 = (char *)0x0;
    ar5_00 = s_Read_NJTL_Failed__RING_UNIT__Cre_8c13fcac;
    report_error_message(s_Ring_Home_nj_8c13fc74,s_Read_NJTL_Failed__RING_UNIT__Cre_8c13fcac,0,2);
  }
  else {
    ar5_00 = (char *)piStack_1c;
    (**(code **)(*(int *)(ar4 + 0x20) + 8))((int *)(ar4 + 0x20),piStack_1c,pcVar2,ar7_01);
  }
  piStack_1c = (int *)get_field_4_0253e4(ar4 + 0x20,ar5_00,pcVar2,ar7_01);
  for (uVar4 = 0; uVar4 < (uint)piStack_1c[1]; uVar4 = uVar4 + 1) {
    iVar1 = uVar4 * 0xc + *piStack_1c;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  ar7_00 = get_field_4_0253e4(ar4 + 0x20,ar5_00,pcVar2,ar7_01);
  iVar1 = FUN_8c020ef0(ar5,&DAT_8c13fcd7,s_GRAPHICS_ENV_8c13f8cb,ar7_00);
  if (iVar1 == 0) {
    report_error_message
              (s_Failed_to_load_ring_textuer___8c13fcdc,s_RING_UNIT__CreateModel_8c13fcfa,0,2);
  }
  iVar1 = FUN_8c020ddc(ar5,s_RingMotion_npd_8c13fd11,s_GRAPHICS_ENV_8c13f8cb,ar4);
  if (iVar1 == 0) {
    report_error_message(s_RingMotion_npd_8c13fd11,s_Failed_to_Load_MotionPack__RING__8c13fd20,0,2);
  }
  for (uVar4 = 0; uVar4 < 7; uVar4 = uVar4 + 1) {
    puVar3 = &uStack_20;
    pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
    iVar1 = FUN_8c020bec(ar5,(&PTR_s_Ring_Idle1_njm_8c13f394)[uVar4],s_GRAPHICS_ENV_8c13f8cb,puVar3)
    ;
    if (iVar1 == 0) {
      report_error_message
                ((&PTR_s_Ring_Idle1_njm_8c13f394)[uVar4],s_Read_NMDM_Failed___8c13fd54,0,2);
    }
    else {
      FUN_8c015bb0(ar4 + uVar4 * 4 + 0x2c,uStack_20,pcVar2,puVar3,uVar4);
    }
  }
  return 7;
}

__asm__(".globl _s_GRAPHICS_ENV_0d93b0\n.set _s_GRAPHICS_ENV_0d93b0, _s_GRAPHICS_ENV_0d93b0_def\n");
