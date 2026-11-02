#include "../decls.h"
int FUN_8c11c914_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = (**(code **)(ar4 + 0x14))(ar5 * ar6,ar7,ar6,ar7);
  if (ar4_00 != 0) {
    memset(ar4_00,0,ar5 * ar6,ar7);
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c11c914\n.set _FUN_8c11c914, _FUN_8c11c914_def\n");
