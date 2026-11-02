#include "../decls.h"
int FUN_8c265ace_def(undefined4 ar4,int ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_PR;
  
  iVar2 = ar7;
  if (*ar6 == 0) {
    ar7 = 0xd000001;
  }
  else {
    *(undefined4 *)(*ar6 + 0x17c) = ar4;
    *(int *)(*ar6 + 0x180) = ar5;
    *(int *)(*ar6 + 0x184) = ar7;
    *(int *)(*ar6 + 0x188) = ar7;
    *(int *)(*ar6 + 0x18c) = ar7;
    *(int *)(*ar6 + 400) = ar7;
    _DAT_8c4bd408 = *ar6 + 0x17c;
    iVar1 = ar7;
    iVar3 = ar7;
    if (0 < ar5) {
      do {
        FUN_8c010794(0x20,*(int *)(*ar6 + 0x17c) + iVar1,&DAT_8c2784f8);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar3 < ar5);
    }
  }
  if (ar7 != 0) {
    FUN_8c2688a0(FUN_8c265ac8,ar7,ar6,iVar2,in_PR);
  }
  return ar7;
}

__asm__(".globl _FUN_8c265ace\n.set _FUN_8c265ace, _FUN_8c265ace_def\n");
