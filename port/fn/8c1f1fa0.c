#include "../decls.h"
undefined4
FUN_8c1f1fa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0,int *ain1)

{
  int *a4;
  int iVar1;
  
  if (*ain1 != 0) {
    ain0 = FUN_8c1fa54c(*ain1,ar5,ar6,ar7);
  }
  if (DAT_8c2739e8 != 0) {
    ain0 = FUN_8c1fa54c(DAT_8c2739e8,ar5,ar6,ar7);
  }
  DAT_8c2739e4 = 0;
  DAT_8c2739e8 = 0;
  a4 = DAT_8c2739e0 + 0x420;
  for (iVar1 = 0; iVar1 < *DAT_8c2739e0 + 1; iVar1 = iVar1 + 1) {
    ain0 = FUN_8c1f309c(a4,ar5,ar6,ar7);
    a4 = a4 + 0x15;
  }
  DAT_8c2739e0 = (int *)0x0;
  return ain0;
}

__asm__(".globl _FUN_8c1f1fa0\n.set _FUN_8c1f1fa0, _FUN_8c1f1fa0_def\n");
