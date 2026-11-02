#include "../decls.h"
undefined4 FUN_8c0d69a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined4 extraout_fr1;
  undefined4 extraout_fr0;
  char cVar1;
  undefined8 uStack_14;
  
  cVar1 = '\0';
  *(undefined4 *)(ar4 + 0x60) = ar5;
  a5 = (int)&uStack_14 + 4;
  (**(code **)(*(int *)(*(int *)(ar4 + 0x60) + 8) + 0x160))(*(int *)(ar4 + 0x60),a5,ar6,ar7);
  if (cVar1 == '\0') {
    uStack_14 = CONCAT44((*(uint*)((uchar*)&uStack_14+4)),extraout_fr0);
  }
  else {
    uStack_14 = CONCAT44(extraout_fr0,extraout_fr1);
  }
  FUN_8c102a7c(ar4 + 0x11c,a5,ar6,ar7);
  *(undefined4 *)(ar4 + 100) = 2;
  return 100;
}

__asm__(".globl _FUN_8c0d69a8\n.set _FUN_8c0d69a8, _FUN_8c0d69a8_def\n");
