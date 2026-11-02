#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0d0bd2_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar7_00;
  int iVar1;
  undefined **ar5_00;
  char *ar5_01;
  char *ar6_00;
  uint uVar2;
  
  FUN_8c015ad4(ar4 + 2,&DAT_8c13d9d8,ar6,ar7,ar5);
  ar5_00 = &PTR_PTR_8c13d570;
  (**(code **)(*ar4 + 8))(ar4,&PTR_PTR_8c13d570,ar6,ar7);
  ar7_00 = (int *)get_field_4_0253e4(ar4,ar5_00,ar6,ar7);
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  ar6_00 = s_GRAPHICS_ENV_8c13d47d;
  ar5_01 = s_SPRINKLER_8c13d528;
  iVar1 = FUN_8c020ef0(ar5,s_SPRINKLER_8c13d528,s_GRAPHICS_ENV_8c13d47d,ar7_00);
  if (iVar1 == -1) {
    ar7_00 = (int *)0x2;
    ar6_00 = (char *)0x1;
    ar5_01 = &DAT_8c13d4fb;
    report_error_message(s_Failed_to_load_sprinkler_textuer_8c13d532,&DAT_8c13d4fb,1,2);
  }
  for (uVar2 = 0; uVar2 < 0x15e; uVar2 = uVar2 + 1) {
    FUN_8c014cd4(ar4 + uVar2 * 0x2b + 3,ar5_01,ar6_00,ar7_00);
    ar5_01 = (char *)0x1;
    FUN_8c0d0d0c(ar4 + uVar2 * 0x2b + 3,1,ar6_00,ar7_00);
    FUN_8c0d0ab4(ar4 + uVar2 * 0x2b + 3,ar5_01,ar6_00,ar7_00,ar5);
  }
  return 0x15e;
}

__asm__(".globl _s_GRAPHICS_ENV_0d0bd2\n.set _s_GRAPHICS_ENV_0d0bd2, _s_GRAPHICS_ENV_0d0bd2_def\n");
