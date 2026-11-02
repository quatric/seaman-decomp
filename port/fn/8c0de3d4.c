#include "../decls.h"
undefined4 Class_12b930_m2_0de3d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    FUN_8c0d7154(ar4 + iVar1 * 0x16c + 0x22d48,ar5_00,ar6_00,ar7);
  }
  FUN_8c0d02c8(ar4 + 0x13b24,ar5_00,ar6_00,ar7);
  iVar1 = ar4 + 0x22eb4;
  FUN_8c0d3c08(ar4 + 0x10ac,iVar1,ar6_00,ar7);
  get_field_a0_035724(ar5,iVar1,ar6_00,ar7);
  pure_virtual_stub(ar4,ar5,ar6_00,ar7);
  Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7);
  FUN_8c0dbd80(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _Class_12b930_m2_0de3d4\n.set _Class_12b930_m2_0de3d4, _Class_12b930_m2_0de3d4_def\n");
