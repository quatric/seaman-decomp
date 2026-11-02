#include "../decls.h"
int FUN_8c200b10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined1 *a6;
  int iVar3;
  uint a5;
  undefined1 auStack_40 [12];
  uint uStack_34;
  int iStack_18;
  
  a6 = auStack_40;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar1 = FUN_8c200566(ar4,ar5,auStack_40,ar7);
  if (iVar1 < 0) {
    iVar1 = (int)(int)0xffffff05;
  }
  else {
    FUN_8c200a84(ar4,iVar1,a6,ar7);
    if ((int)uStack_34 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
      a5 = uStack_34;
      for (iVar1 = 0; iVar1 < iStack_18; iVar1 = iVar1 + 1) {
        uVar2 = FUN_8c2009d0(ar4,a5,a6,ar7);
        uVar2 = uVar2 & 0xffff;
        if (iVar1 == iStack_18 + -1) {
          if (uVar2 != 0xfffa) goto LAB_8c200b80;
        }
        else if ((((uVar2 == a5) || (uVar2 == 0xfffa)) || (uVar2 == 0xfffc)) ||
                ((uVar2 == 0xffff || (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= (int)uVar2)))
                ) goto LAB_8c200b80;
        a5 = uVar2;
      }
      iVar1 = 0;
    }
    else {
LAB_8c200b80:
      iVar1 = (int)(int)0xffffff41;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c200b10\n.set _FUN_8c200b10, _FUN_8c200b10_def\n");
