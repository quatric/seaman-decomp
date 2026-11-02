#include "../decls.h"
int FUN_8c03679c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (*(code *)(&FUN_8c0feef8))
                      (*(undefined4 *)(0x7d0 + ar5),
                       *(undefined4 *)(0x1134 + ar4 + iVar3 * 4),ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(0x1134 + ar4 + iVar3 * 4) != 0)) {
      uVar2 = (*(code *)(&FUN_8c0feeb0))
                        (*(undefined4 *)(0x7d0 + ar5),ar4 + iVar3 * 4 + 0x1134,ar6,ar7)
      ;
      *(undefined4 *)(0x111c + ar4 + iVar3 * 4) = uVar2;
    }
  }
  iVar3 = (*(code *)(&FUN_8c0feef8))
                    (*(undefined4 *)(0x7d0 + ar5),*(undefined4 *)(0x1148 + ar4),ar6,ar7
                    );
  if ((iVar3 == 1) && (iVar3 = 0, *(int *)(0x1148 + ar4) != 0)) {
    FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7);
    uVar2 = (*(code *)(&FUN_8c0feeb0))
                      (*(undefined4 *)(0x7d0 + ar5),ar4 + 0x1148,ar6,ar7);
    iVar3 = 0x1130;
    *(undefined4 *)(0x1130 + ar4) = uVar2;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c03679c\n.set _FUN_8c03679c, _FUN_8c03679c_def\n");
