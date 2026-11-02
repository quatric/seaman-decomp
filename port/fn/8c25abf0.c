#include "../decls.h"
int * FUN_8c25abf0_def(undefined4 ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = 0x54525650;
  puVar1 = (&FUN_8c23c814);
  *ar5 = -1;
  do {
    iVar4 = *ar6;
    if (iVar4 == 0x54525650) {
      (*(code *)puVar1)(ar4,ar6 + 2,8,ar7);
      ar6 = ar6 + 4;
    }
    else {
      if (iVar4 != 0x58494247) {
        return (int *)0;
      }
      uVar3 = ar6[1];
      *ar5 = ar6[2];
      ar6 = (int *)((int)(ar6 + 2) + (uVar3 & 0xfffffffc));
    }
  } while (iVar4 != iVar2);
  return ar6;
}

__asm__(".globl _FUN_8c25abf0\n.set _FUN_8c25abf0, _FUN_8c25abf0_def\n");
