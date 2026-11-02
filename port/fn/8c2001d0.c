#include "../decls.h"
undefined4 FUN_8c2001d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int in_r3;
  int iVar3;
  int a6;
  int iVar4;
  int iVar5;
  int unaff_r11;
  undefined4 unaff_r12;
  uint uVar6;
  
  uVar1 = 0xfffa;
  iVar4 = (int)0x200;
  iVar3 = *(int *)(ar4 + in_r3 + 0x1c);
  iVar5 = *(int *)(iVar3 + 0x18);
  uVar6 = *(uint *)(iVar3 + 0x14);
  iVar3 = *(int *)(ar4 + in_r3 + 0x28);
  if (0 < iVar5) {
    do {
      a6 = iVar3;
      iVar2 = FUN_8c1fbb6c(unaff_r12,uVar6 & 0xffff,iVar3,ar7);
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar6 = FUN_8c2009d0(unaff_r12,uVar6 & 0xffff,a6,ar7);
      if ((uVar6 & 0xffff) == uVar1) {
        return 0;
      }
      unaff_r11 = unaff_r11 + 1;
      iVar3 = iVar3 + iVar4;
    } while (unaff_r11 < iVar5);
  }
  return 0;
}

__asm__(".globl _FUN_8c2001d0\n.set _FUN_8c2001d0, _FUN_8c2001d0_def\n");
