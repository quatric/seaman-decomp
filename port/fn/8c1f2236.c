#include "../decls.h"
undefined4 FUN_8c1f2236_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  undefined4 a6;
  int unaff_r13;
  int *piVar2;
  int a4;
  char in_T;
  int iVar3;
  
  a6 = 0;
  if (in_T != '\0') {
    unaff_r13 = DAT_8c2739e0[4];
  }
  a5 = FUN_8c1f2cce(ar4,unaff_r13,0,ar7);
  if (a5 == 0) {
    FUN_8c1f175c(0xfffffff8,0,a6,ar7);
  }
  else {
    iVar3 = (a5 + -1) * 0x2c;
    a4 = DAT_8c2739e0[6];
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(a4 + 0x4c) == 0) {
        piVar2 = (int *)(unaff_r13 + 0x10 + iVar3);
        iVar3 = piVar2[1];
        iVar1 = *piVar2 + 0x96;
        FUN_8c1f21bc(a4,a5,iVar1,iVar3);
        FUN_8c1f175c(0,a5,iVar1,iVar3);
        return a4;
      }
      a4 = a4 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,a5,DAT_8c2739e0,iVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2236\n.set _FUN_8c1f2236, _FUN_8c1f2236_def\n");
