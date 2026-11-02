#include "../decls.h"
undefined4 FUN_8c1fffd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int in_r3;
  int iVar2;
  undefined4 unaff_r12;
  int a5;
  int iVar3;
  int in_MACL;
  
  iVar3 = in_MACL + in_r3;
  a5 = 0;
  do {
    if (**(int **)(iVar3 + 0x1c) + 1 <= a5) {
      return 0;
    }
    uVar1 = FUN_8c2009d0(unaff_r12,a5,ar6,ar7);
    uVar1 = uVar1 & 0xffff;
    if (((uVar1 != 0xfffc) && (uVar1 != 0xffff)) && (uVar1 != 0xfffa)) {
      if (a5 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
        iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x30);
      }
      else {
        iVar2 = **(int **)(iVar3 + 0x1c) + 1;
      }
      if (iVar2 <= (int)uVar1) {
        return 0xffffffff;
      }
    }
    a5 = a5 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1fffd8\n.set _FUN_8c1fffd8, _FUN_8c1fffd8_def\n");
