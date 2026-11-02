#include "../decls.h"
undefined4 FUN_8c0fc44c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0xf; 0 < iVar2; iVar2 = iVar2 + -1) {
    strcpy(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + iVar2 * 0x20 + 200,
           *(int *)(*(int *)(ar4 + 0x10) + 0x40) + (iVar2 + -1) * 0x20 + 200,ar6,ar7,ar5);
  }
  uVar1 = strcpy(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 200,ar5,ar6,ar7,ar5);
  return uVar1;
}

__asm__(".globl _FUN_8c0fc44c\n.set _FUN_8c0fc44c, _FUN_8c0fc44c_def\n");
