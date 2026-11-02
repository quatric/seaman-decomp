#include "../decls.h"
undefined4 FUN_8c11bb54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(ar4 + 0x38);
  iVar2 = *(int *)(ar4 + 0x54);
  if (puVar1 < puVar1 + iVar2) {
    do {
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 1;
    } while (puVar1 < (undefined4 *)(*(int *)(ar4 + 0x38) + iVar2 * 4));
  }
  puVar1 = *(undefined4 **)(ar4 + 0x34);
  if (puVar1 < puVar1 + iVar2) {
    do {
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 1;
    } while (puVar1 < (undefined4 *)(*(int *)(ar4 + 0x34) + iVar2 * 4));
  }
  *(undefined2 *)(ar4 + 0x28) = 0;
  return 0x28;
}

__asm__(".globl _FUN_8c11bb54\n.set _FUN_8c11bb54, _FUN_8c11bb54_def\n");
