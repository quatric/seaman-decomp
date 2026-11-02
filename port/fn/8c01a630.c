#include "../decls.h"
undefined4 FUN_8c01a630_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  bool bVar3;
  
  ar5_00 = (int *)(uint)ar4[9];
  uVar1 = 0x600;
  memmove(ar4 + 0xb,ar5_00,0x600,ar7);
  bVar3 = ar4[8] == 1;
  if (bVar3) {
    ar4[8] = 0;
  }
  if (0 < ar4[7]) {
    ar4[7] = ar4[7] + -1;
    if (ar4[7] < 1) {
      if (ar4[6] == 0) {
        bVar3 = true;
      }
    }
    else {
      ar5_00 = (int *)(uint)ar4[10];
      uVar1 = 0x600;
      memmove(ar4 + 0xb,ar5_00,0x600,ar7);
      bVar3 = true;
    }
  }
  if (0 < ar4[6]) {
    if ((ar4[6] == 0x1e) || (bVar3)) {
      ar5_00 = (int *)(&DATA_8c12f900);
      uVar1 = 0x210;
      memmove((int)ar4 + 0x41c,(&DATA_8c12f900),0x210,ar7);
      bVar3 = true;
    }
    ar4[6] = ar4[6] + -1;
    if (ar4[6] < 1) {
      bVar3 = true;
    }
  }
  if (bVar3) {
    ar5_00 = ar4 + 0xb;
    FUN_8c01c8c8(ar4,ar5_00,uVar1,ar7);
  }
  if (*ar4 < 0) {
    uVar1 = *(undefined4 *)0x8c2791b0;
  }
  else {
    iVar2 = *(int *)((int)ar4 + 0x2450 + *ar4 * 0x28);
    if (iVar2 == 2) {
      FUN_8c01a760(ar4,ar5_00,uVar1,ar7);
    }
    else if (iVar2 == 3) {
      FUN_8c01a900(ar4,ar5_00,uVar1,ar7);
    }
    else {
      FUN_8c01a98c(ar4,ar5_00,uVar1,ar7);
    }
    uVar1 = *(undefined4 *)0x8c2791b0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01a630\n.set _FUN_8c01a630, _FUN_8c01a630_def\n");
