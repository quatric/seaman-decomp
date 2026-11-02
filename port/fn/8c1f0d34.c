#include "../decls.h"
undefined4 FUN_8c1f0d34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(ar4 + 0x24);
  if (iVar1 == 0) {
    iVar1 = FUN_8c1f0c14(ar4,ar5,ar6,ar7);
    if (iVar1 != -10) {
      return iVar1;
    }
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0xfffffffe;
      }
      uVar2 = FUN_8c1f0b58(ar4,ar5,ar6,ar7);
      return uVar2;
    }
    iVar1 = syscall_1f98ec(*(undefined4 *)(ar4 + 4));
    if (iVar1 == -1) {
      return 0xfffffffd;
    }
    uVar2 = 2;
  }
  *(undefined4 *)(ar4 + 0x24) = uVar2;
  return 1;
}

__asm__(".globl _FUN_8c1f0d34\n.set _FUN_8c1f0d34, _FUN_8c1f0d34_def\n");
