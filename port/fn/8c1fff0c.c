#include "../decls.h"
int FUN_8c1fff0c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = 0xfffc;
  piVar1 = 0x8c4783dc;
  uVar6 = 0xfffc;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  iVar5 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x30);
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < ar5) {
      return 0xffffffff;
    }
    uVar3 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar4 + 0x24),iVar5 * 2,uVar6);
  } while ((uVar3 & 0xffff) != uVar2);
  return iVar5;
}

__asm__(".globl _FUN_8c1fff0c\n.set _FUN_8c1fff0c, _FUN_8c1fff0c_def\n");
