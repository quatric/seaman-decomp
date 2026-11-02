#include "../decls.h"
undefined4 FUN_8c0e8840_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
    *(undefined4 *)(iVar2 * 0x80 + ar5) = 0xffffffff;
  }
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      if (*(int *)(0xa4 + ar4 + iVar2 * 0x80 + iVar3 * 0x20) != 0) {
        a4 = *(int *)(0xa4 + ar4 + iVar2 * 0x80 + iVar3 * 0x20);
        (**(code **)(0x15c + *(int *)(a4 + 8)))(a4,ar5 + iVar1 * 0x80,ar6,ar7);
        iVar1 = iVar1 + 1;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0e8840\n.set _FUN_8c0e8840, _FUN_8c0e8840_def\n");
