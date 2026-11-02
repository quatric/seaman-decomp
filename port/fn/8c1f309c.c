#include "../decls.h"
undefined4 FUN_8c1f309c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 in_r0;
  
  if ((ar4 != 0) && (in_r0 = 0x4c, *(short *)(ar4 + 0x4c) != 0)) {
    sVar1 = *(short *)(ar4 + 0x50);
    if ((sVar1 == 2) || ((sVar1 == 3 || (sVar1 == 4)))) {
      FUN_8c1f367a(ar4,ar5,ar6,ar7);
    }
    in_r0 = 0x4c;
    *(undefined2 *)(ar4 + 0x4c) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f309c\n.set _FUN_8c1f309c, _FUN_8c1f309c_def\n");
