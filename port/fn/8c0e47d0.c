#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0e47de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar7_00;
  undefined4 ar5_00;
  undefined **ar5_01;
  undefined *ar5_02;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 a7;
  uint uVar5;
  uint uVar6;
  undefined4 in_fr1;
  char cVar7;
  uint in_stack_ffffff88;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar7 = '\0';
  uVar3 = ar5;
  Vec3_ctor_zero(&uStack_30,ar5,ar6,ar7);
  Vec3_set_zero(&uStack_3c,uVar3,ar6,ar7);
  uStack_40 = 0;
  uStack_44 = 0;
  iVar1 = FUN_8c0209fc(ar5,s_musikago_nj_8c13ff77,s_GRAPHICS_ENV_8c13f8cb,&uStack_40);
  if (iVar1 == 0) {
    report_error_message(s_musikago_nj_8c13ff77,s_Failed_to_load_CSoilTank__Create_8c13ff83,0,2);
  }
  puVar4 = &uStack_44;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_musikago_nj_8c13ff77,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message(s_musikago_nj_8c13ff77,s_Failed_NJTL_CSoilTank__Create___8c13ffa6,0,2);
  }
  FUN_8c015ad4(ar4 + 0x30,uStack_40,pcVar2,puVar4,in_stack_ffffff88);
  a7 = 8;
  uVar3 = 0x8c4312a8;
  FUN_8c239170(0x8c437598,0x8c4375a0,0x8c4312a8,8);
  for (uVar5 = 0; uVar5 < 8; uVar5 = uVar5 + 1) {
    *(uint *)(uVar5 * 0xc + -0x73bc8a5c) = *(uint *)(uVar5 * 0xc + -0x73bc8a5c) | 0x80000000;
  }
  ar5_00 = 0x8c437598;
  (**(code **)(*(int *)(ar4 + 0x28) + 8))((int *)(ar4 + 0x28),0x8c437598,uVar3,a7);
  get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7);
  uVar3 = get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7);
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c02100c(ar5,s_musikago_pvm_8c13ffc6,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = (char *)0x0;
    report_error_message(s_Failed_to_load_soiltank_textuer__8c13ffd3,&DAT_8c13f91d,0,2);
  }
  s_GRAPHICS_ENV_0d5ee6(ar4 + 0x15bc,ar5,pcVar2,uVar3);
  ar5_01 = &PTR_PTR_8c13f1a4;
  (**(code **)(*(int *)(ar4 + 0x10dc) + 8))((int *)(ar4 + 0x10dc),&PTR_PTR_8c13f1a4,pcVar2,uVar3);
  ar7_00 = (int *)get_field_4_0253e4(ar4 + 0x10dc,ar5_01,pcVar2,uVar3);
  uVar5 = 0;
  while (uVar6 = uVar5, uVar6 < (uint)ar7_00[1]) {
    *(uint *)(uVar6 * 0xc + *ar7_00 + 4) = *(uint *)(uVar6 * 0xc + *ar7_00 + 4) | 0x80000000;
    in_stack_ffffff88 = uVar6;
    uVar5 = uVar6 + 1;
  }
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020ef0(ar5,s_SPRAY_MIST_8c13fff5,s_GRAPHICS_ENV_8c13f8cb,ar7_00);
  if (iVar1 == 0) {
    ar7_00 = (int *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message
              (s_Failed_to_load_mist_textuer___8c140000,s_CSoilTank__Create___8c14001e,0,2);
  }
  ar5_02 = &DAT_8c13f268;
  FUN_8c015ad4(ar4 + 0x10e4,&DAT_8c13f268,pcVar2,ar7_00,in_stack_ffffff88);
  iVar1 = FUN_8c015bb8(ar4 + 0x10e4,ar5_02,pcVar2,ar7_00);
  iVar1 = thunk_FUN_8c0151e8(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),0x17,pcVar2,ar7_00);
  *(int *)(ar4 + 0x10e8) = iVar1 + 4;
  if (cVar7 == '\0') {
    uStack_2c = 0;
    uVar3 = in_fr1;
  }
  else {
    uStack_24 = 0xc2700000;
    uVar3 = 0xc2700000;
    uStack_2c = in_fr1;
  }
  uStack_28 = 0xbf800000;
  uStack_3c = 0xc2700000;
  if (cVar7 == '\0') {
    uStack_34 = 0;
    uStack_30 = uStack_2c;
  }
  else {
    uStack_30 = 0;
    uStack_34 = uVar3;
  }
  uStack_38 = uStack_34;
  FUN_8c0d167c(&uStack_30,ar4 + 0x10fc,&uStack_3c,ar7_00);
  if (cVar7 == '\0') {
    uStack_2c = 0;
    uStack_34 = uVar3;
  }
  else {
    uStack_24 = 0xc2700000;
    uStack_34 = 0xc2700000;
    uStack_2c = uVar3;
  }
  uStack_28 = 0xbf800000;
  uStack_3c = 0xc2700000;
  if (cVar7 == '\0') {
    uStack_34 = 0;
    uStack_30 = uStack_2c;
  }
  else {
    uStack_30 = 0;
  }
  puVar4 = &uStack_3c;
  uStack_38 = uStack_34;
  FUN_8c0d167c(&uStack_30,ar4 + 0x10ec,puVar4,ar7_00);
  object_dtor_delete(&uStack_3c,0xffffffff,puVar4,ar7_00);
  uVar3 = Vec3_dtor(&uStack_30,0xffffffff,puVar4,ar7_00);
  return uVar3;
}

__asm__(".globl _s_GRAPHICS_ENV_0e47de\n.set _s_GRAPHICS_ENV_0e47de, _s_GRAPHICS_ENV_0e47de_def\n");
