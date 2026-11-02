#include "../decls.h"
undefined4 FUN_8c1219f4_def(int ar4,uint ar5,uint *ar6,undefined4 ar7,float *ain0)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *ain0;
  uVar1 = ar5 & 0xff;
  if (uVar1 == 1) {
    FUN_8c121710(ar4,ar5,ar6,ar7);
    if (*(char *)(ar4 + 0x4c) == '\0') {
      if (*(char *)(ar4 + 0x4d) == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 2;
        uVar1 = FUN_8c120798(ar4,ar5,ar6,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x28) = 1;
        uVar1 = FUN_8c1207c6(ar4,0,ar6,ar7);
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x28) = 0;
      uVar1 = FUN_8c1207c6(ar4,0,ar6,ar7);
    }
    if ((uVar1 & 0xff) != 0) {
      return 0;
    }
  }
  else if (uVar1 == 2) {
    *(char *)(ar4 + 0x4c) = (char)*ar6;
    *(char *)(ar4 + 0x4d) = (char)ar6[1];
    *(uint *)(ar4 + 0x5c) = ar6[2];
    fVar2 = (float)(int)ar6[3];
    if ((int)ar6[3] < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(ar4 + 0x60) = fVar2 * fVar3;
    *(uint *)(ar4 + 0x50) = ar6[4];
  }
  else if (uVar1 == 3) {
    *ar6 = (uint)*(byte *)(ar4 + 0x4c);
    ar6[1] = (uint)*(byte *)(ar4 + 0x4d);
    ar6[2] = *(uint *)(ar4 + 0x5c);
    fVar3 = *(float *)(ar4 + 0x60) / fVar3;
    if (2.1474836e+09 < fVar3) {
      fVar3 = fVar3 + -4.2949673e+09;
    }
    ar6[3] = (int)fVar3;
    ar6[4] = *(uint *)(ar4 + 0x50);
  }
  else if (uVar1 == 4) {
    *ar6 = ar4 + 0x3c;
  }
  else {
    if (uVar1 != 0xff) {
      return 0;
    }
    FUN_8c120668(ar4,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c1219f4\n.set _FUN_8c1219f4, _FUN_8c1219f4_def\n");
