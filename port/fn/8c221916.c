#include "../decls.h"
uint FUN_8c221916_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint auStack_20 [8];
  
  FUN_8c0107a0(0x1c,auStack_20,&DAT_8c26d804);
  if (ar5 == 0) {
    _DAT_8c4c0ed0 = _DAT_8c4c0ed0 & ~auStack_20[ar4];
  }
  else {
    _DAT_8c4c0ed0 = _DAT_8c4c0ed0 | auStack_20[ar4];
  }
  return _DAT_8c4c0ed0;
}

__asm__(".globl _FUN_8c221916\n.set _FUN_8c221916, _FUN_8c221916_def\n");
