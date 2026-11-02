#include "../decls.h"
int FUN_8c20080e_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int *piVar1;
  int a6;
  int iVar2;
  int in_r3;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_r12;
  int unaff_r13;
  int unaff_r14;
  int iVar3;
  
  a6 = 0xfffa;
  piVar1 = 0x8c4783dc;
  iVar3 = unaff_r14 + in_r3;
  while( true ) {
    iVar2 = FUN_8c2006dc(unaff_r12,ar5,ar6,ar7);
    if (iVar2 == (int)0xffffff01) {
      return (int)(int)0xffffff01;
    }
    if (iVar2 != (int)0xffffff40) break;
    ar6 = FUN_8c20075a(unaff_r12,ar5,ar6,ar7);
    if (ar6 < 0) {
      return (int)(int)0xffffff40;
    }
    ar5 = 0x46;
    *(int *)(*(int *)(iVar3 + 0x1c) + 0xc) = ar6;
    (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(iVar3 + 0x20),0x46,ar6,ar7);
    for (iVar2 = unaff_r10; unaff_r13 = unaff_r9, iVar2 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x10);
        iVar2 = iVar2 + 1) {
      ar5 = *(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar2;
      ar6 = a6;
      FUN_8c20099e(unaff_r12,ar5,a6,ar7);
    }
  }
  if (unaff_r13 != 0) {
    FUN_8c20065a(unaff_r12,ar5,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c20080e\n.set _FUN_8c20080e, _FUN_8c20080e_def\n");
