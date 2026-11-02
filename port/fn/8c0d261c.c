#include "../decls.h"
undefined4 FUN_8c0d261c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 uVar1;
  undefined4 ar4_00;
  
  uVar1 = ar6;
  ar4_00 = ar5;
  FUN_8c0d2f14(ar4,ar5,ar6,ar7);
  ar5_00 = get_field_4_0253e4(ar4_00,ar5,uVar1,ar7);
  FUN_8c015ccc(ar4 + 0x48,ar5_00,uVar1,ar7,ar4_00);
  FUN_8c015cd4(ar4 + 0x48,ar6,uVar1,ar7,ar4_00);
  uVar1 = FUN_8c0d267c(ar4 + 0x48,ar6,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d261c\n.set _FUN_8c0d261c, _FUN_8c0d261c_def\n");
