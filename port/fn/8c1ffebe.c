#include "../decls.h"
undefined4 FUN_8c1ffebe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar1 = 0x8c4783dc;
  uVar5 = 0xfffc;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar4 = 0;
  while( true ) {
    if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar4) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar3 + 0x24),iVar4 << 1,uVar5);
    if (((uVar2 & 0xffff) != 0xfffc) && ((uVar2 & 0xffff) != 0xffff)) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c1ffebe\n.set _FUN_8c1ffebe, _FUN_8c1ffebe_def\n");
