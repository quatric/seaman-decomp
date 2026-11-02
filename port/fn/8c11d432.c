#include "../decls.h"
uint FUN_8c11d432_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 *puStack_c;
  
  if (ar5 == 0) {
    ar5_00 = 6;
    puStack_c = *(undefined4 **)(ar4 + 0x54);
    ar6_00 = puStack_c[1];
  }
  else {
    puStack_c = *(undefined4 **)(ar4 + 0x54);
    ar6_00 = puStack_c[1];
    ar5_00 = 5;
  }
  uVar1 = FUN_8c1113d0(*puStack_c,ar5_00,ar6_00,0);
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c11d432\n.set _FUN_8c11d432, _FUN_8c11d432_def\n");
