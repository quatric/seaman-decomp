#include "../decls.h"
undefined4 FUN_8c205020_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int ar6_00;
  undefined4 in_stack_ffffffdc;
  int iVar5;
  
  if (*ar4 != 0) {
    iVar1 = *ar4;
    iVar3 = 0;
    iVar5 = iVar1;
    do {
      iVar4 = iVar3;
      if (*(int *)(iVar5 + 0xc) < *(int *)(iVar1 + 0xc)) {
        iVar5 = iVar1;
      }
      iVar1 = *(int *)(iVar1 + 8);
      iVar3 = iVar4 + 1;
    } while (iVar1 != 0);
    if (1 < iVar3) {
      if (*ar5 != iVar5) {
        FUN_8c204ed2(ar4,ar5,iVar5,ar7,in_stack_ffffffdc);
        ain0 = FUN_8c204eb6(ar5,iVar5,*ar5,ar7,in_stack_ffffffdc);
      }
      iVar4 = iVar4 + -1;
      iVar5 = 0;
      iVar3 = iVar4;
      if (0 < iVar4) {
        do {
          iVar1 = *ar4;
          iVar2 = 0;
          ar6_00 = iVar1;
          if (0 < iVar3) {
            do {
              ar6_00 = *(int *)(ar6_00 + 8);
              iVar2 = iVar2 + 1;
              if (*(int *)(iVar1 + 0xc) < *(int *)(ar6_00 + 0xc)) {
                iVar1 = ar6_00;
              }
            } while (iVar2 < iVar3);
          }
          if (ar6_00 != iVar1) {
            FUN_8c204ed2(ar4,ar5,iVar1,ar7,iVar5);
            ain0 = FUN_8c204eb6(ar5,iVar1,ar6_00,ar7,iVar5);
          }
          iVar3 = iVar3 + -1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c205020\n.set _FUN_8c205020, _FUN_8c205020_def\n");
