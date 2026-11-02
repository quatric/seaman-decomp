#include "../decls.h"
undefined4 FUN_8c206f76_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)0xa05f6908 = 4;
  piVar2 = 0x8c4a9f10;
  iVar1 = 0x8c4aa0b4;
  *(int *)(0x8c4aa0b4 + 0x20) = *(int *)(0x8c4aa0b4 + 0x20) + 1;
  piVar2[*piVar2 + -6] = -3;
  if (*(undefined4 *)0x8c4aa058 == 1) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    FUN_8c206e14(0,ar5,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c206f76\n.set _FUN_8c206f76, _FUN_8c206f76_def\n");
