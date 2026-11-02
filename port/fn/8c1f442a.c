#include "../decls.h"
undefined4 FUN_8c1f442a_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar4_00;
  int ar4_01;
  
  for (ar4_01 = 0; ar4_01 < 4; ar4_01 = ar4_01 + 1) {
    if (*(char *)((&DAT_8c26c728)[ar4_01] + _DAT_8c4727b4 + 0xf90) != '\0') {
      FUN_8c1f4f82(ar4_01,ar5,ar6,ar7);
      iVar1 = 0;
      iVar2 = ar4_01 * 6;
      ar4_00 = iVar2;
      do {
        if (*(char *)(_DAT_8c4727b4 + 0xf90 + iVar2) != '\0') {
          ar5 = ar4_01;
          FUN_8c1f5048(ar4_00,ar4_01,ar6,ar7);
        }
        iVar1 = iVar1 + 1;
        ar4_00 = ar4_00 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar1 < 6);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f442a\n.set _FUN_8c1f442a, _FUN_8c1f442a_def\n");
