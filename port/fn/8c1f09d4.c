#include "../decls.h"
undefined4 FUN_8c1f09d4_def(int ar4,undefined1 *ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = ar6 << 6; 0 < iVar2; iVar2 = iVar2 + -1) {
    if (ar4 < 8) {
      if (ar4 < 1) {
        *ar5 = 0xff;
      }
      else {
        iVar1 = 8;
        do {
          ar6 = ar6 << 1;
          if (ar4 < 1) {
            ar6 = ar6 | 1;
          }
          else {
            ar4 = ar4 + -1;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        *ar5 = (char)ar6;
      }
    }
    else {
      *ar5 = 0;
      ar4 = ar4 + -8;
    }
    ar5 = ar5 + 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f09d4\n.set _FUN_8c1f09d4, _FUN_8c1f09d4_def\n");
