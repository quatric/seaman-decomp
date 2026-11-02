#include "../decls.h"
uint FUN_8c01d4c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar7_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < 0x10 && (*(int *)(uVar2 * 0x50 + ar4 + 0x5634) != 1))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 0x10) {
    if (*(int *)(ar4 + 0x5630) < 0) {
      *(uint *)(ar4 + 0x5630) = uVar2;
    }
    else {
      iVar1 = *(int *)(ar4 + 0x5630);
      while (-1 < *(int *)(iVar1 * 0x50 + ar4 + 0x5640)) {
        iVar1 = *(int *)(iVar1 * 0x50 + ar4 + 0x5640);
      }
      *(uint *)(iVar1 * 0x50 + ar4 + 0x5640) = uVar2;
    }
    ar7_00 = ar7;
    strcpy(uVar2 * 0x50 + ar4 + 0x5644,ar6,ar6,ar7,ar5);
    strcpy(uVar2 * 0x50 + ar4 + 0x5664,ar7,ar6,ar7_00,ar5);
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x563c) = ar5;
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x5638) = 2;
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x5640) = 0xffffffff;
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x5634) = 0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01d4c4\n.set _FUN_8c01d4c4, _FUN_8c01d4c4_def\n");
