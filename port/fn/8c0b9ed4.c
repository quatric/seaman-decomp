#include "../decls.h"
undefined4 FUN_8c0b9ed4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(ar4 + ar5 + 0x44) == '\0') {
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      if (*(int *)(ar4 + iVar2 * 4 + 0x30) == ar5) {
        return 0;
      }
    }
    iVar2 = ar4 + *(int *)(ar4 + 0x40);
    *(char *)(iVar2 + 0x44) = *(char *)(iVar2 + 0x44) + '\x01';
    for (iVar2 = 4; 0 < iVar2; iVar2 = iVar2 + -1) {
      *(undefined4 *)(ar4 + iVar2 * 4 + 0x30) = *(undefined4 *)(ar4 + (iVar2 + -1) * 4 + 0x30);
    }
    *(int *)(ar4 + 0x30) = ar5;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0b9ed4\n.set _FUN_8c0b9ed4, _FUN_8c0b9ed4_def\n");
