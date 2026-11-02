#include "../decls.h"
undefined4 FUN_8c10f850_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int a7;
  uint uVar1;
  int a5;
  short sVar2;
  bool bVar4;
  uint uVar3;
  
  a7 = (**(code **)(*(int *)(0x90 + ar4) + 0x6c))(*(int *)(0x90 + ar4),ar5,ar6,ar7);
  a5 = 0;
  uVar3 = 0;
  sVar2 = 0;
  uVar1 = 0;
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      if ((*(uint *)(uVar1 * 8 + a7) & ar5) != 0) {
        a5 = a5 + 1;
        uVar3 = uVar1;
      }
      sVar2 = (short)uVar3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(ar4 + 0x78));
  }
  bVar4 = a5 == 1;
  if (bVar4 != (bool)*(char *)(ar4 + 0x32)) {
    FUN_8c10fa6c(ar4,a5,0,a7);
  }
  if ((bVar4) && (*(short *)(ar4 + 0x30) = sVar2 + 1, *(int *)(ar4 + 0x28) == 0)) {
    *(undefined4 *)(ar4 + 0x28) = 1;
  }
  *(bool *)(ar4 + 0x32) = bVar4;
  *(uint *)(ar4 + 0x2c) = ar5;
  return 0x32;
}

__asm__(".globl _FUN_8c10f850\n.set _FUN_8c10f850, _FUN_8c10f850_def\n");
