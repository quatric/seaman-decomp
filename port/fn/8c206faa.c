#include "../decls.h"
undefined4 FUN_8c206faa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)0xa05f6908 = 8;
  piVar2 = 0x8c4aa058;
  iVar1 = 0x8c4aa0b4;
  *(int *)(0x8c4aa0b4 + 0x1c) = *(int *)(0x8c4aa0b4 + 0x1c) + 1;
  if (*piVar2 == 1) {
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    FUN_8c206e14(1,ar5,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c206faa\n.set _FUN_8c206faa, _FUN_8c206faa_def\n");
