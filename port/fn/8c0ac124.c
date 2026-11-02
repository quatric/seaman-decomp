#include "../decls.h"
int FUN_8c0ac124_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 3) {
    ar5_00 = 0;
    FUN_8c099850(*(undefined4 *)(ar6 + 0xc),0,ar6,ar7);
    iVar1 = FUN_8c02f414(ar4,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      if (*(int *)(ar4 + 0x6c) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                  (*(int *)(ar4 + 0x6c),ar5_00,ar6,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
      iVar1 = 0x88;
      *(undefined4 *)(0x88 + ar4) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0ac124\n.set _FUN_8c0ac124, _FUN_8c0ac124_def\n");
