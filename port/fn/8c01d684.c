#include "../decls.h"
undefined4 FUN_8c01d684_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (_DAT_8c2791b8 == 4) {
    if (_DAT_8c27924c == 1) {
      *ar5 = _DAT_8c2791bc;
      strcpy(ar5 + 3,&DAT_8c2791c8,ar6,ar7,in_PR);
    }
    else {
      *ar5 = 0;
      *(undefined1 *)(ar5 + 3) = 0;
    }
    uVar1 = _DAT_8c279284;
    _DAT_8c2791bc = 0;
    ar5[2] = _DAT_8c279284;
  }
  else {
    uVar1 = 0;
    *ar5 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01d684\n.set _FUN_8c01d684, _FUN_8c01d684_def\n");
