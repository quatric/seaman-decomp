#include "../decls.h"
int Class_12b334_m1_0bf3d4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar5;
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c0bb1bc(*(undefined4 *)(0x7cc + ar5),iVar1,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 8) = 0;
    iVar1 = 0x7dc;
    *(undefined4 *)(0x7dc + ar5) = 0;
  }
  return iVar1;
}

__asm__(".globl _Class_12b334_m1_0bf3d4\n.set _Class_12b334_m1_0bf3d4, _Class_12b334_m1_0bf3d4_def\n");
