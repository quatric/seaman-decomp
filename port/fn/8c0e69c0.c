#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0e69c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 a7;
  uint uVar5;
  undefined4 in_fr1;
  char cVar6;
  undefined4 in_stack_ffffffac;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar6 = '\0';
  uVar3 = ar5;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  Vec3_set_zero(&uStack_30,uVar3,ar6,ar7);
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = FUN_8c0209fc(ar5,s_amazon_nj_8c140048,s_GRAPHICS_ENV_8c13f8cb,&uStack_34);
  if (iVar1 == 0) {
    report_error_message(s_amazon_nj_8c140048,s_Failed_to_load_COutside__Create__8c140052,0,2);
  }
  puVar4 = &uStack_38;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_amazon_nj_8c140048,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message(s_amazon_nj_8c140048,s_Failed_NJTL_COutside__Create___8c140074,0,2);
  }
  FUN_8c015ad4(ar4 + 0x30,uStack_34,pcVar2,puVar4,in_stack_ffffffac);
  a7 = 0xd;
  uVar3 = 0x8c4312a8;
  FUN_8c239170(0x8c437600,0x8c437608,0x8c4312a8,0xd);
  for (uVar5 = 0; uVar5 < 0xd; uVar5 = uVar5 + 1) {
    *(uint *)(uVar5 * 0xc + -0x73bc89f4) = *(uint *)(uVar5 * 0xc + -0x73bc89f4) | 0x80000000;
  }
  ar5_00 = 0x8c437600;
  (**(code **)(*(int *)(ar4 + 0x28) + 8))((int *)(ar4 + 0x28),0x8c437600,uVar3,a7);
  get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7);
  uVar3 = get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7);
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c02100c(ar5,s_amazon_pvm_8c140093,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = (char *)0x0;
    report_error_message(s_Failed_to_load_outside_pvm_textu_8c14009e,&DAT_8c13f91d,0,2);
  }
  s_GRAPHICS_COMMON_0dbb1a(ar4,ar5,pcVar2,uVar3);
  if (cVar6 == '\0') {
    uStack_20 = 0;
    uStack_28 = in_fr1;
  }
  else {
    uStack_18 = 0xc2700000;
    uStack_28 = 0xc2700000;
    uStack_20 = in_fr1;
  }
  uStack_1c = 0xbf800000;
  uStack_30 = 0xc2700000;
  if (cVar6 == '\0') {
    uStack_28 = 0;
    uStack_24 = uStack_20;
  }
  else {
    uStack_24 = 0;
  }
  puVar4 = &uStack_30;
  uStack_2c = uStack_28;
  FUN_8c0d167c(&uStack_24,ar4 + 0x10cc,puVar4,uVar3);
  object_dtor_delete(&uStack_30,0xffffffff,puVar4,uVar3);
  uVar3 = Vec3_dtor(&uStack_24,0xffffffff,puVar4,uVar3);
  return uVar3;
}

__asm__(".globl _s_GRAPHICS_ENV_0e69c8\n.set _s_GRAPHICS_ENV_0e69c8, _s_GRAPHICS_ENV_0e69c8_def\n");
