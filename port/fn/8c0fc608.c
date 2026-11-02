#include "../decls.h"
undefined4 FUN_8c0fc608_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(0x88 + ar4);
  iVar1 = FUN_8c0fcd2c(ar4,iVar4 + 0x28,ar6,ar7);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (*(int *)(iVar4 + 0x30) <= iVar1) {
    iVar1 = *(int *)(iVar4 + 0x30) + -1;
  }
  iVar2 = FUN_8c0fcd2c(ar4,iVar4 + 0x2c,ar6,ar7);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (*(int *)(iVar4 + 0x34) <= iVar2) {
    iVar2 = *(int *)(iVar4 + 0x34) + -1;
  }
  uVar3 = (*(code *)(&s_ERROR_0fb0de))
                    (ar4,iVar4 + (iVar2 * *(int *)(iVar4 + 0x30) + iVar1) * 0x20 + 0x38,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c0fc608\n.set _FUN_8c0fc608, _FUN_8c0fc608_def\n");
