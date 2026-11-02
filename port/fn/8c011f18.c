#include "../decls.h"
uint FUN_8c011f18_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  float fVar4;
  longlong in_dr4;
  int ar4_00;
  float fStack_c;
  
  fVar4 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar2 = 0;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar4 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar4) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 4) != 0) {
    return uVar2;
  }
  if (((int)((uint)fVar4 & 0x7f800000) >> 0x17) + -0x7f < 0xf) {
    fVar4 = fVar4 * 1.4426951;
    fStack_c = fVar4;
    if (((uint)fVar4 & 0x7f800000) < 0x4b000000) {
      fStack_c = (float)(int)fVar4;
    }
    fStack_c = (float)((uint)fStack_c | (uint)fVar4 & 0x80000000);
    fVar4 = fVar4 - fStack_c;
    ar4_00 = (int)fStack_c;
    if (-2 < ((int)((uint)fVar4 & 0x7f800000) >> 0x17) + -0x7f) {
      if (((uint)fVar4 & 0x80000000) == 0) {
        ar4_00 = ar4_00 + 1;
        fVar4 = fVar4 + -1.0;
      }
      else {
        fVar4 = fVar4 + 1.0;
        ar4_00 = ar4_00 + -1;
      }
    }
    iVar3 = 6;
    do {
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iVar3 = 6;
    ar6_00 = -0x73edaa58;
    do {
      ar6_00 = ar6_00 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    uVar1 = FUN_8c011d50(ar4_00,iVar3,ar6_00,6,fVar4);
    return uVar1;
  }
  if ((uVar2 & 8) == 0) {
    return (uint)&DAT_8c125800;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c011f18\n.set _FUN_8c011f18, _FUN_8c011f18_def\n");
