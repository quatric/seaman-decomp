#include "../decls.h"
undefined4 FUN_8c1f7a50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 a4;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    a4 = _DAT_8c4748bc;
    ar4_00 = FUN_8c1f6fc8(_DAT_8c4748bc,ar5,ar6,ar7);
    if (ar4_00 < 0) {
      _DAT_8c4748a8 = 9;
    }
    else {
      DAT_8c4748c5 = (undefined1)ar4;
      if (_DAT_8c4748c0 < 1) {
        FUN_8c1f716c(a4,ar5,ar6,ar7);
      }
      FUN_8c1f6e5e(ar4_00,0x8c4748c4,ar6,ar7);
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7a50\n.set _FUN_8c1f7a50, _FUN_8c1f7a50_def\n");
