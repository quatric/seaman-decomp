#include "../decls.h"
undefined4 FUN_8c1f22b2_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  int iVar1;
  undefined4 a5;
  int a7;
  int unaff_r13;
  int a4;
  
  if (unaff_r13 < in_r3) {
    FUN_8c1f175c(0xffffffe0,ar5,ar6,ar7);
  }
  else {
    a4 = DAT_8c2739e0[6];
    a7 = ar5 << 0xb;
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(a4 + 0x4c) == 0) {
        a5 = 0;
        FUN_8c1f21bc(a4,0,unaff_r13,a7);
        FUN_8c1f175c(0,a5,unaff_r13,a7);
        return a4;
      }
      a4 = a4 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,ar5,DAT_8c2739e0,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f22b2\n.set _FUN_8c1f22b2, _FUN_8c1f22b2_def\n");
