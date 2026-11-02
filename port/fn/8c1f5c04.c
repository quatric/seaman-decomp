#include "../decls.h"
undefined4 FUN_8c1f5c04_def(undefined4 ar4,undefined4 ar5,int *ar6,int *ar7)

{
  int iVar1;
  int *piVar2;
  int a5;
  undefined4 uVar3;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  uStack_c = ar4;
  FUN_8c1f5a30(auStack_14,ar5,ar6,ar7);
  piVar2 = (int *)FUN_8c1f5a5e(auStack_10,ar5,ar6,ar7);
  a5 = FUN_8c1f5a86(uStack_c,ar5,ar6,ar7);
  if (a5 < 0) {
    uVar3 = 0xfffffffe;
  }
  else {
    *piVar2 = *piVar2 + -1;
    for (; a5 < *piVar2; a5 = a5 + 1) {
      ar7 = piVar2 + 2;
      piVar2[a5 * 2 + 2] = piVar2[(a5 + 1) * 2 + 2];
      ar7[a5 * 2 + 1] = ar7[(a5 + 1) * 2 + 1];
    }
    iVar1 = a5 * 2;
    ar6 = piVar2 + a5 * 2 + 2;
    a5 = 0;
    piVar2[iVar1 + 2] = 0;
    ar6[1] = 0;
    uVar3 = 0;
  }
  FUN_8c1f5a48(auStack_14,a5,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c1f5c04\n.set _FUN_8c1f5c04, _FUN_8c1f5c04_def\n");
