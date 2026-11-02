#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0d39ea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  char *ar6_00;
  undefined4 a7;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = DAT_8c13f4e8;
  uStack_18 = DAT_8c13f4ec;
  uStack_14 = DAT_8c13f4f0;
  FUN_8c21279c(0,&uStack_1c,ar4 + 0x5d8,ar7,ar6);
  for (iVar3 = 0; iVar3 < 0x19; iVar3 = iVar3 + 1) {
    *(uint *)(iVar3 * 0xc + -0x73bc8950) = *(uint *)(iVar3 * 0xc + -0x73bc8950) | 0x80000000;
  }
  a7 = 0x19;
  uVar2 = 0x8c4312a8;
  FUN_8c239170(0x8c4376a4,0x8c4376ac,0x8c4312a8,0x19);
  uVar1 = 0x8c4376a4;
  (**(code **)(*(int *)(ar4 + 8) + 8))((int *)(ar4 + 8),0x8c4376a4,uVar2,a7);
  uVar1 = get_field_4_0253e4(ar4 + 8,uVar1,uVar2,a7);
  iVar3 = FUN_8c02100c(ar5,ar6,s_GRAPHICS_ENV_8c13f8cb,uVar1);
  if (iVar3 == 0) {
    report_error_message
              (s_Failed_to_load_water_face_textue_8c13fab9,s_WE__CreateStageC___8c13fadd,0,2);
  }
  for (iVar3 = 0; iVar3 < 0x3c; iVar3 = iVar3 + 1) {
    *(uint *)(iVar3 * 0xc + ar4 + 0x164) = *(uint *)(iVar3 * 0xc + ar4 + 0x164) | 0x80000000;
  }
  uVar2 = 0x3c;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x158,ar4 + 0x160,0x8c4312a8,0x3c);
  iVar3 = ar4 + 0x158;
  (**(code **)(*(int *)(ar4 + 0x108) + 8))((int *)(ar4 + 0x108),iVar3,uVar1,uVar2);
  uVar1 = get_field_4_0253e4(ar4 + 0x108,iVar3,uVar1,uVar2);
  ar6_00 = s_GRAPHICS_ENV_8c13f8cb;
  iVar3 = FUN_8c02100c(ar5,s_hamon_pvm_8c13faf0,s_GRAPHICS_ENV_8c13f8cb,uVar1);
  if (iVar3 == 0) {
    uVar1 = 2;
    ar6_00 = (char *)0x0;
    report_error_message
              (s_Failed_to_load_hamon_textuer___8c13fafa,s_WE__CreateStageC___8c13fadd,0,2);
  }
  ar5_00 = &DAT_8c13f164;
  FUN_8c015ad4(ar4 + 0x154,&DAT_8c13f164,ar6_00,uVar1,ar6);
  iVar3 = FUN_8c015bb8(ar4 + 0x1c,ar5_00,ar6_00,uVar1);
  uVar2 = FUN_8c0151fc(*(undefined4 *)(*(int *)(iVar3 + 4) + 4),ar5_00,ar6_00,uVar1);
  *(undefined4 *)(ar4 + 0x2c) = uVar2;
  FUN_8c0d5de0(ar4,ar5_00,ar6_00,uVar1);
  return 1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d39ea\n.set _s_GRAPHICS_ENV_0d39ea, _s_GRAPHICS_ENV_0d39ea_def\n");
