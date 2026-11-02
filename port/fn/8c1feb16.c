#include "../decls.h"
int FUN_8c1feb16_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  if (ar4 == 0) {
    iVar1 = (int)(int)0xffffff00;
  }
  else if (*(char *)(*(int *)(ar4 + 0x28) * (int)0x148 + 0x8c4783e0 + 2) == '\0') {
    iVar1 = (int)(int)0xffffff01;
  }
  else {
    pcVar4 = (code *)(&FUN_8c1febd6);
    if ((*(int *)(ar4 + 4) == 1) || (pcVar4 = (code *)(&FUN_8c1fecf2), *(int *)(ar4 + 4) == 2)) {
      iVar3 = (int)0x200;
      iVar1 = 0x8c4783e0 + *(int *)(ar4 + 0x28) * (int)0x148;
      *(undefined4 *)(iVar1 + 0x30) = 1;
      *(int *)(iVar1 + 0x34) = ar6;
      iVar1 = 0;
      if (0 < ar6) {
        do {
          iVar2 = (*pcVar4)(ar4,ar5);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          ar5 = ar5 + iVar3;
        } while (iVar1 < ar6);
      }
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(int)0xffffff0b;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1feb16\n.set _FUN_8c1feb16, _FUN_8c1feb16_def\n");
