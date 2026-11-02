#include "../decls.h"
undefined4 FUN_8c1f71b6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_stack_ffffffe8;
  
  uVar1 = 1;
  FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7);
  FUN_8c1f826c(0x8c4749f2,&stack0xffffffe8,ar6,ar7);
  if (_DAT_8c474986 == -1) {
    _DAT_8c474986 = (short)in_stack_ffffffe8 - (short)_DAT_8c474a00;
  }
  else {
    FUN_8c1f7134(&DAT_8c474986,in_stack_ffffffe8 - _DAT_8c474a00,ar6,ar7,in_stack_ffffffe8);
  }
  if (1 < _DAT_8c4748c0) {
    uVar1 = FUN_8c1f6e5e(ar4 + 3,&DAT_8c474978,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f71b6\n.set _FUN_8c1f71b6, _FUN_8c1f71b6_def\n");
