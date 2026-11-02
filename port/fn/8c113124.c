#include "../decls.h"
int FUN_8c113124_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(int *)((int)0x110 + (int)ar4) != 0) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)0x10c + (int)ar4) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)0x110 + (int)ar4));
  }
  if (*(int *)((int)0x10c + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x10c + (int)ar4));
  }
  iVar2 = (int)0x10c;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c113124\n.set _FUN_8c113124, _FUN_8c113124_def\n");
