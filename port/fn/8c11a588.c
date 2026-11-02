#include "../decls.h"
int FUN_8c11a588_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_c;
  
  if (ar6 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    iVar1 = *(int *)(*ar5 + 8);
    while (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar1 = 0;
      }
      else {
        if (((**(ushort **)(iVar1 + 0x10) & 1) != 0) &&
           (uStack_c = CONCAT22(*(undefined2 *)(*(int *)(iVar1 + 0x10) + 4),
                                *(undefined2 *)(*(int *)(iVar1 + 0x10) + 2)),
           (*(ushort *)(*(int *)(0xc0 + ar4) + uStack_c * 2) & 0x80) != 0)) {
          iVar2 = iVar2 + 1;
        }
        iVar1 = *(int *)(iVar1 + 4);
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c11a588\n.set _FUN_8c11a588, _FUN_8c11a588_def\n");
