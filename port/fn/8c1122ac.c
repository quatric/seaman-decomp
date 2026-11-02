#include "../decls.h"
int * FUN_8c1122ac_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a6;
  int iStack_18;
  undefined1 uStack_14;
  
  a6 = 0x44;
  piVar1 = (int *)(**(code **)(ar4 + 0x14))(ar4,1,0x44,ar7);
  if (piVar1 == (int *)0x0) {
    iStack_18 = ar4;
    uStack_14 = (undefined1)ar5;
    FUN_8c1204c4(&iStack_18,2,a6,ar7);
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = (**(code **)(ar4 + 0x10))(ar4,ar6 << 2,a6,ar7);
    piVar1[0xb] = iVar2;
    iVar2 = (**(code **)(ar4 + 0x14))(ar4,ar6,4,ar7);
    piVar1[0xd] = iVar2;
    iVar2 = (**(code **)(ar4 + 0x14))(ar4,ar6,4,ar7);
    piVar1[0x10] = iVar2;
    piVar1[5] = ar6;
    *(undefined1 *)(piVar1 + 1) = (undefined1)ar5;
    *piVar1 = ar4;
    piVar1[2] = 1;
  }
  return piVar1;
}

__asm__(".globl _FUN_8c1122ac\n.set _FUN_8c1122ac, _FUN_8c1122ac_def\n");
