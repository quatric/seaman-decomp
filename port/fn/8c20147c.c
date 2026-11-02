#include "../decls.h"
int FUN_8c20147c_def(undefined4 ar4,undefined4 ar5,undefined2 *ar6,undefined4 ar7)

{
  int a5;
  uint uVar1;
  undefined1 *a6;
  int iVar2;
  undefined1 auStack_40 [12];
  uint uStack_34;
  int iStack_18;
  
  a6 = auStack_40;
  a5 = FUN_8c200566(ar4,ar5,a6,ar7);
  if (a5 < 0) {
    a5 = (int)(int)0xffffff05;
  }
  else {
    FUN_8c200a84(ar4,a5,a6,ar7);
    *ar6 = (short)uStack_34;
    for (iVar2 = 0; ar6 = ar6 + 1, iVar2 < iStack_18; iVar2 = iVar2 + 1) {
      uVar1 = FUN_8c2009d0(ar4,uStack_34,a6,ar7);
      uStack_34 = uVar1 & 0xffff;
      *ar6 = (short)uVar1;
    }
    iVar2 = FUN_8c200b10(ar4,ar5,a6,ar7);
    if (iVar2 < 0) {
      a5 = iVar2;
    }
  }
  return a5;
}

__asm__(".globl _FUN_8c20147c\n.set _FUN_8c20147c, _FUN_8c20147c_def\n");
