#include "../decls.h"
int FUN_8c0ceff8_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  int iVar2;
  
  if (*ar4 == 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(0x14c + (int)ar4);
    if (iVar1 == 0) {
      if (ar5 == 1) {
        *(short *)(0x144 + (int)ar4) = *(short *)(0x144 + (int)ar4) + 1;
      }
      if (ar5 == 0) {
        iVar1 = FUN_8c0cf144(ar4,0,ar6,ar7);
      }
      else {
        iVar1 = 0x96;
        if (0x96 < *(short *)(0x144 + (int)ar4)) {
          *(undefined2 *)(0x146 + (int)ar4) = 0;
          *(undefined2 *)(0x144 + (int)ar4) = 0;
          *(undefined2 *)(0x148 + (int)ar4) = 0;
          *(undefined4 *)(0x150 + (int)ar4) = 0;
          iVar1 = 0x14c;
          *(undefined4 *)(0x14c + (int)ar4) = 1;
        }
      }
    }
    else {
      if (iVar1 == 1) {
        iVar1 = (*(code *)(&FUN_8c0cf1e4))
                          (ar4,ar4 + *(short *)(0x148 + (int)ar4) * 5 + 1,
                           (int)*(short *)(0x148 + (int)ar4),ar7);
        if (iVar1 == 5) {
          *(short *)(0x148 + (int)ar4) = *(short *)(0x148 + (int)ar4) + 1;
          iVar2 = 0x14c;
          iVar1 = (int)*(short *)(0x148 + (int)ar4);
          if (*(short *)(0x148 + (int)ar4) == 0x10) {
            *(undefined4 *)(0x14c + (int)ar4) = 2;
            iVar1 = iVar2;
          }
        }
        if (ar5 != 0) {
          return iVar1;
        }
        *(undefined4 *)(0x14c + (int)ar4) = 3;
      }
      else {
        if (iVar1 == 2) {
          FUN_8c0cf144(ar4,ar5,ar6,ar7);
          *ar4 = 1;
          return 1;
        }
        if (iVar1 != 3) {
          return iVar1;
        }
      }
      iVar2 = (int)*(short *)(0x148 + (int)ar4);
      ar5_00 = ar4 + *(short *)(0x148 + (int)ar4) * 5 + 1;
      iVar1 = FUN_8c0cf39c(ar4,ar5_00,iVar2,ar7);
      if (iVar1 == 2) {
        iVar1 = FUN_8c0cf144(ar4,ar5_00,iVar2,ar7);
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0ceff8\n.set _FUN_8c0ceff8, _FUN_8c0ceff8_def\n");
