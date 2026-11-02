#include "../decls.h"
undefined4 FUN_8c0dfe2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  FUN_8c0daf3c(ar4,ar5,ar6,ar7);
  ar5_00 = ar5;
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c0dfef4(ar5,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    uVar2 = get_field_cc_0dfee8(ar5,ar5_00,ar6,ar7);
    uVar2 = FUN_8c01f528(uVar2,ar5_00,ar6,ar7);
    FUN_8c01da60(uVar2,ar5_00,ar6,ar7);
  }
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0dfe2c\n.set _FUN_8c0dfe2c, _FUN_8c0dfe2c_def\n");
