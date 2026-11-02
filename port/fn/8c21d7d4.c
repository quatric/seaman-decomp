#include "../decls.h"
undefined4 FUN_8c21d7d4_def(uint ar4,uint *ar5,float *ar6,float *ar7,float *s0)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  
  uVar4 = (ar4 & 0xff) - 0x10;
  if ((uVar4 & 1) != 0) {
    uVar2 = *ar5;
    ar5 = ar5 + 1;
    if ((_DAT_8c4aa4f0 & 0x10) == 0) {
      if (ar6 != (float *)0x0) {
        if ((_DAT_8c4aa4f0 & 0x20) == 0) {
          pfVar3 = ar6 + 2;
          *ar6 = (float)(uVar2 >> 0x18) * 0.00392157;
          ar6[1] = (float)(uVar2 >> 0x10 & 0xff) * 0.00392157;
          ar6 = ar6 + 3;
          *pfVar3 = (float)(uVar2 >> 8 & 0xff) * 0.00392157;
          *ar6 = (float)(uVar2 & 0xff) * 0.00392157;
        }
        else {
          pfVar3 = ar6 + 2;
          *ar6 = (float)(uVar2 >> 0x18) * 0.00392157 + _DAT_8c4aa52c;
          ar6[1] = (float)(uVar2 >> 0x10 & 0xff) * 0.00392157 + _DAT_8c4aa530;
          ar6 = ar6 + 3;
          *pfVar3 = (float)(uVar2 >> 8 & 0xff) * 0.00392157 + _DAT_8c4aa534;
          *ar6 = (float)(uVar2 & 0xff) * 0.00392157 + _DAT_8c4aa538;
        }
      }
    }
    else {
      *ar6 = _DAT_8c4aa52c;
      ar6[1] = _DAT_8c4aa530;
      ar6[2] = _DAT_8c4aa534;
      ar6 = ar6 + 3;
      *ar6 = _DAT_8c4aa538;
    }
  }
  if ((uVar4 & 2) != 0) {
    ar6 = (float *)*ar5;
    ar5 = ar5 + 1;
    if (ar7 != (float *)0x0) {
      pfVar3 = ar7 + 2;
      *ar7 = (float)((uint)ar6 >> 0x18) * 0.00392157;
      uVar2 = (uint)ar6 >> 8;
      ar7[1] = (float)((uint)ar6 >> 0x10 & 0xff) * 0.00392157;
      ar7 = ar7 + 3;
      ar6 = (float *)((uint)ar6 & 0xff);
      *pfVar3 = (float)(uVar2 & 0xff) * 0.00392157;
      *ar7 = (float)(int)ar6 * 0.00392157;
    }
  }
  if (((uVar4 & 4) != 0) && (ar5 = (uint *)*ar5, s0 != (float *)0x0)) {
    *s0 = (float)((uint)ar5 >> 0x18) * 0.00392157;
    uVar4 = (uint)ar5 >> 8;
    s0[1] = (float)((uint)ar5 >> 0x10 & 0xff) * 0.00392157;
    ar5 = (uint *)((uint)ar5 & 0xff);
    s0[2] = (float)(uVar4 & 0xff) * 0.00392157;
    s0[3] = (float)(int)ar5 * 0.00392157;
  }
  uVar1 = FUN_8c2375ae(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c21d7d4\n.set _FUN_8c21d7d4, _FUN_8c21d7d4_def\n");
