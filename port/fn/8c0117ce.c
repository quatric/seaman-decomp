#include "../decls.h"
int FUN_8c0117ce_def(char *ar4,int ar5,int *ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *ar6;
  if (iVar2 == 1) {
    iVar2 = memmove(ar6[1],ar4,ar5);
    ar6[1] = ar6[1] + ar5;
    ar6[2] = ar6[2] + ar5;
  }
  else {
    iVar3 = 0;
    if (0 < ar5) {
      do {
        cVar1 = *ar4;
        ar4 = ar4 + 1;
        iVar2 = (*(code *)(uint)ar6[3])((int)cVar1,ar6[1]);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        ar6[2] = ar6[2] + 1;
      } while (iVar3 < ar5);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0117ce\n.set _FUN_8c0117ce, _FUN_8c0117ce_def\n");
