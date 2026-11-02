#include "../decls.h"
int FUN_8c2007f0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int *piVar2;
  int ar6_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  ar6_00 = 0xfffa;
  piVar2 = 0x8c4783dc;
  uVar5 = 0;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  bVar1 = false;
  while( true ) {
    iVar3 = FUN_8c2006dc(ar4,ar5,ar6,ar7);
    if (iVar3 == (int)0xffffff01) {
      return (int)(int)0xffffff01;
    }
    if (iVar3 != (int)0xffffff40) break;
    ar6 = FUN_8c20075a(ar4,ar5,ar6,ar7);
    if (ar6 < 0) {
      return (int)(int)0xffffff40;
    }
    ar5 = 0x46;
    *(int *)(*(int *)(iVar4 + 0x1c) + 0xc) = ar6;
    (**(code **)(*piVar2 + 0x10))(*(undefined4 *)(iVar4 + 0x20),uVar5);
    for (iVar3 = 0; bVar1 = true, iVar3 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x10); iVar3 = iVar3 + 1
        ) {
      ar5 = *(int *)(*(int *)(iVar4 + 0x1c) + 0xc) + iVar3;
      ar6 = ar6_00;
      FUN_8c20099e(ar4,ar5,ar6_00,ar7);
    }
  }
  if (bVar1) {
    FUN_8c20065a(ar4,ar5,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c2007f0\n.set _FUN_8c2007f0, _FUN_8c2007f0_def\n");
