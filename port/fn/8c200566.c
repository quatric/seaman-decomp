#include "../decls.h"
undefined4 FUN_8c200566_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  int iVar2;
  int iVar3;
  byte *a4;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  a4 = *(byte **)(iVar2 + 0x28);
  iVar3 = 0;
  a6 = ar6;
  while( true ) {
    if (*(int *)(*(int *)(iVar2 + 0x1c) + 0x30) <= iVar3) {
      return 0xffffffff;
    }
    if (((*a4 == 0x33) || (*a4 == 0xcc)) &&
       (iVar1 = FUN_8c2004a0(ar5,a4 + 4,a6,ar7), iVar1 != 0)) break;
    a4 = a4 + 0x20;
    iVar3 = iVar3 + 1;
  }
  FUN_8c2004ea(a4,ar6,a6,ar7);
  return iVar3;
}

__asm__(".globl _FUN_8c200566\n.set _FUN_8c200566, _FUN_8c200566_def\n");
