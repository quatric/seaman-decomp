#include "../decls.h"
int FUN_8c265bae_def(undefined4 ar4,int ar5,int *ar6,int ar7)

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
    *(undefined4 *)(*ar6 + 0x194) = ar4;
    *(int *)(*ar6 + 0x198) = ar5;
    *(int *)(*ar6 + 0x19c) = ar7;
    *(int *)(*ar6 + 0x1a0) = ar7;
    *(int *)(*ar6 + 0x1a4) = ar7;
    _DAT_8c4bd418 = *ar6 + 0x194;
    iVar1 = ar7;
    iVar3 = ar7;
    _DAT_8c4bd410 = ar4;
    _DAT_8c4bd414 = ar5;
    if (0 < ar5) {
      do {
        FUN_8c010794(8,*(int *)(*ar6 + 0x194) + iVar1,&DAT_8c278518);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar3 < ar5);
    }
  }
  if (ar7 != 0) {
    FUN_8c2688a0(FUN_8c265ba8,ar7,ar6,iVar2,in_PR);
  }
  return ar7;
}

__asm__(".globl _FUN_8c265bae\n.set _FUN_8c265bae, _FUN_8c265bae_def\n");
