#include "../decls.h"
uint FUN_8c101a4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(0xb0 + ar4) == 0) {
    for (bVar2 = 0; bVar2 < 5; bVar2 = bVar2 + 1) {
      uVar3 = *(int *)(ar4 + (uint)bVar2 * 8 + 4) + uVar3;
    }
    uVar3 = uVar3 >> 2;
    uVar1 = 0x16e360;
    if ((uVar3 < 0x16e360) && (uVar1 = 0xc350, 0xc350 < uVar3)) {
      uVar1 = FUN_8c101b5c(ar4,uVar3,ar6,ar7);
    }
  }
  else {
    if (*(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) == 0) {
      uVar3 = *(uint *)(0xbc + ar4);
    }
    else {
      uVar3 = *(uint *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4);
    }
    if ((uVar3 < 0x16e360) && (0xc350 < uVar3)) {
      uVar1 = 0x186a0;
      if (*(uint *)(0xbc + ar4) < uVar3) {
        if (0x186a0 < uVar3 - *(int *)(0xbc + ar4)) {
          uVar1 = FUN_8c101c10(ar4,uVar3,ar6,ar7);
        }
      }
      else if (0x186a0 < *(int *)(0xbc + ar4) - uVar3) {
        uVar1 = FUN_8c101c10(ar4,uVar3,ar6,ar7);
      }
    }
    else {
      uVar1 = FUN_8c101c64(ar4,ar5,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c101a4c\n.set _FUN_8c101a4c, _FUN_8c101a4c_def\n");
