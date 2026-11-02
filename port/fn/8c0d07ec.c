#include "../decls.h"
int s_GRAPHICS_ENV_0d07f2_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar7_00;
  int iVar1;
  undefined **ar5_00;
  uint uVar2;
  
  FUN_8c015ad4(ar4 + 2,&DAT_8c13d9d8,ar6,ar7,ar5);
  ar5_00 = &PTR_PTR_8c13d570;
  (**(code **)(*ar4 + 8))(ar4,&PTR_PTR_8c13d570,ar6,ar7);
  ar7_00 = (int *)get_field_4_0253e4(ar4,ar5_00,ar6,ar7);
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = FUN_8c020ef0(ar5,s_O2SUPPLY_8c13d4fc,s_GRAPHICS_ENV_8c13d47d,ar7_00);
  if (iVar1 == -1) {
    iVar1 = report_error_message(s_Failed_to_load_o2_supply_textuer_8c13d505,&DAT_8c13d4fb,1,2);
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d07f2\n.set _s_GRAPHICS_ENV_0d07f2, _s_GRAPHICS_ENV_0d07f2_def\n");
