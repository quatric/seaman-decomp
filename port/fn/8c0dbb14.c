#include "../decls.h"
int s_GRAPHICS_COMMON_0dbb1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar7_00;
  int iVar1;
  undefined **ar5_00;
  uint uVar2;
  
  FUN_8c015ad4(ar4 + 0xc,&DAT_8c162770,ar6,ar7,ar5);
  ar5_00 = &PTR_PTR_8c1622e4;
  (**(code **)(*(int *)(ar4 + 4) + 8))((int *)(ar4 + 4),&PTR_PTR_8c1622e4,ar6,ar7);
  ar7_00 = (int *)get_field_4_0253e4(ar4 + 4,ar5_00,ar6,ar7);
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = FUN_8c020ef0(ar5,&DAT_8c13fd91,s_GRAPHICS_COMMON_8c13f7c0,ar7_00);
  if (iVar1 == -1) {
    iVar1 = report_error_message(s_Failed_to_load_textuer___SHIT__8c13fd96,&DAT_8c13f91d,0,2);
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_COMMON_0dbb1a\n.set _s_GRAPHICS_COMMON_0dbb1a, _s_GRAPHICS_COMMON_0dbb1a_def\n");
