#include "../decls.h"
int FUN_8c200890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = 0x8c4783dc;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x30);
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar4 + 0x24),iVar3 * 2,ar6,ar7);
  } while ((uVar2 & 0xffff) != (uint)(ushort)ar5);
  return iVar3;
}

__asm__(".globl _FUN_8c200890\n.set _FUN_8c200890, _FUN_8c200890_def\n");
