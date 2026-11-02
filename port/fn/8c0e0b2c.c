#include "../decls.h"
undefined4 FUN_8c0e0b2c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar5 == 0) {
    uVar1 = FUN_8c0e0bd0(ar4 + 0x13b24,0,ar6,ar7);
  }
  else if (ar5 == 1) {
    uVar1 = FUN_8c0e0bb8(ar4 + 0x13b70,1,ar6,ar7);
  }
  else if (ar5 == 4) {
    uVar1 = FUN_8c0e0ba8(ar4 + 0x13b8c,4,ar6,ar7);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e0b2c\n.set _FUN_8c0e0b2c, _FUN_8c0e0b2c_def\n");
