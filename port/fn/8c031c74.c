#include "../decls.h"
undefined4 FUN_8c031c74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(ar4 + 0x40) != 0) {
    if (*(int *)(ar4 + 0x40) != 4) {
      *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
      if (*(float *)(ar4 + 0x38) == 0.0) {
        *(undefined4 *)(ar4 + 0x3c) = 0x3f800000;
      }
      else {
        *(float *)(ar4 + 0x3c) = *(float *)(ar4 + 0x28) / *(float *)(ar4 + 0x38);
      }
      *(undefined4 *)(ar4 + 0x40) = 4;
    }
    uVar1 = FUN_8c031764(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c031c74\n.set _FUN_8c031c74, _FUN_8c031c74_def\n");
