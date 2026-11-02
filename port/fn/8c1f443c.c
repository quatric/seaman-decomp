#include "../decls.h"
undefined4 FUN_8c1f443c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int unaff_r8;
  int unaff_r9;
  int iVar1;
  int iVar2;
  int ar4_00;
  int ar4_01;
  
  for (ar4_01 = unaff_r8; ar4_01 < 4; ar4_01 = ar4_01 + 1) {
    if (*(char *)((&DAT_8c26c728)[ar4_01] + _DAT_8c4727b4 + 0xf90) != '\0') {
      FUN_8c1f4f82(ar4_01,ar5,ar6,ar7);
      iVar2 = ar4_01 * 6;
      iVar1 = unaff_r8;
      ar4_00 = iVar2;
      do {
        if (*(char *)(_DAT_8c4727b4 + 0xf90 + iVar2) != '\0') {
          ar5 = ar4_01;
          FUN_8c1f5048(ar4_00,ar4_01,ar6,ar7);
        }
        iVar1 = iVar1 + 1;
        ar4_00 = ar4_00 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar1 < unaff_r9);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f443c\n.set _FUN_8c1f443c, _FUN_8c1f443c_def\n");
