#include "../decls.h"
undefined4 FUN_8c02ea00_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 < 3) {
    if (ar4[1] == 1) {
      FUN_8c02ea98(ar4,ar5,ar6,ar7);
      FUN_8c02eaac(ar4,ar5,ar6,ar7);
      *ar4 = *ar4 + 1;
      *(undefined4 *)0x8c27d49c = 0;
      if (2 < *ar4) {
        *(undefined4 *)0x8c27d49c = 1;
      }
    }
  }
  else if (ar4[2] == 1) {
    *(undefined4 *)0x8c27d49c = 2;
    FUN_8c02ea98(ar4,ar5,ar6,ar7);
    FUN_8c02eaac(ar4,ar5,ar6,ar7);
    if (4 < *ar4) {
      return 1;
    }
    *ar4 = *ar4 + 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02ea00\n.set _FUN_8c02ea00, _FUN_8c02ea00_def\n");
