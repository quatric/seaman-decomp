#include "../decls.h"
int FUN_8c0117da_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  char *unaff_r11;
  int iVar3;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  if (iVar2 == 1) {
    iVar2 = memmove(unaff_r14[1],unaff_r11,ar5,ar7);
    unaff_r14[1] = unaff_r14[1] + ar5;
    unaff_r14[2] = unaff_r14[2] + ar5;
  }
  else {
    iVar3 = 0;
    if (0 < ar5) {
      do {
        cVar1 = *unaff_r11;
        unaff_r11 = unaff_r11 + 1;
        iVar2 = (*(code *)unaff_r14[3])((int)cVar1,unaff_r14[1],ar6,ar7);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        unaff_r14[2] = unaff_r14[2] + 1;
      } while (iVar3 < ar5);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0117da\n.set _FUN_8c0117da, _FUN_8c0117da_def\n");
