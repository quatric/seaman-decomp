#include "../decls.h"
undefined4 FUN_8c124edc_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if ((ar5 & 0xff) == 1) {
    uVar1 = FUN_8c124bd0(ar4,ar6,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      *(undefined **)(ar4 + 0x18) = (&FUN_8c124e28);
    }
    else {
      *(undefined **)(ar4 + 0x18) = (&DATA_8c124e24);
    }
  }
  else {
    if ((ar5 & 0xff) != (int)0xff) {
      return 0;
    }
    FUN_8c124f54(ar4,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c124edc\n.set _FUN_8c124edc, _FUN_8c124edc_def\n");
