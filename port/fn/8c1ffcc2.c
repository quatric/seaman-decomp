#include "../decls.h"
int FUN_8c1ffcc2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)0x148;
  iVar4 = ar4 * iVar3 + 0x8c4783e0;
  if (*(char *)(iVar4 + 2) != '\0') {
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(ar4 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
        pcVar2 = *(char **)(iVar4 + 0x20);
        iVar3 = 0;
        do {
          if (*pcVar2 != 'U') {
            *(undefined1 *)(iVar4 + 0xb) = 0;
            *(undefined1 *)(iVar4 + 0xc) = 0;
            goto LAB_8c1ffd38;
          }
          iVar3 = iVar3 + 1;
          pcVar2 = pcVar2 + 1;
        } while (iVar3 < 0x10);
        if (*(int *)(0x8c478e20 + ar4 * 4) == 0) {
          return 0;
        }
LAB_8c1ffd38:
        return (int)(int)0xffffff03;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ffcc2\n.set _FUN_8c1ffcc2, _FUN_8c1ffcc2_def\n");
