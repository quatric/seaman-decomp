#include "../decls.h"
undefined4 FUN_8c213a76_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = FUN_8c213de4(ar4,ar5,ar6,ar7);
  }
  else if ((ar4[6] & 8) == 0) {
    if ((ar4[6] & 0x20) == 0) {
      uVar1 = FUN_8c213d0e(ar4,ar5,ar6,ar7);
    }
    else {
      uVar1 = FUN_8c213d8a(ar4,ar5,ar6,ar7);
    }
  }
  else {
    uVar1 = FUN_8c213d3e(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c213a76\n.set _FUN_8c213a76, _FUN_8c213a76_def\n");
