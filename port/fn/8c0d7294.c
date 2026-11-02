#include "../decls.h"
int FUN_8c0d7294_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(0x160 + ar4);
  if (iVar1 == 0) {
LAB_8c0d72c0:
    iVar2 = FUN_8c0d75a0(ar4,ar5,ar6,ar7);
    iVar1 = 0x160;
    if (iVar2 == 1) {
      *(undefined4 *)(0x160 + ar4) = 1;
      iVar2 = iVar1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) goto LAB_8c0d72c0;
      if (iVar1 != 3) {
        return iVar1;
      }
    }
    iVar2 = FUN_8c0d75a0(ar4,ar5,ar6,ar7);
    iVar1 = 0x160;
    if (iVar2 == 0) {
      *(undefined4 *)(0x160 + ar4) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0d7294\n.set _FUN_8c0d7294, _FUN_8c0d7294_def\n");
