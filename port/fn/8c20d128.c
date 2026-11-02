#include "../decls.h"
undefined4 FUN_8c20d128_def(undefined4 *ar4,int ar5,int ar6,uint ar7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = ar7 & 0xff00;
  uVar2 = ar7 & 0xff;
  if ((uVar4 == 0x1000) || (uVar4 == 0x1100)) {
    *ar4 = 3;
  }
  else {
    *ar4 = 2;
  }
  if ((uVar4 == 0x500) || (uVar4 == 0x600)) {
    if (*(int *)(DAT_8c2756b0 + 0xa0) == 3) {
      ar4[1] = 3;
    }
    else {
      ar4[1] = 1;
    }
    uVar1 = 0x28000000;
  }
  else {
    if ((uVar4 != 0x700) && (uVar4 != 0x800)) {
      ar4[1] = 1;
      if (uVar2 == 0) {
        ar4[2] = 0;
        goto LAB_8c20d262;
      }
      if (uVar2 == 1) {
        uVar1 = 0x8000000;
LAB_8c20d22e:
        ar4[2] = uVar1;
      }
      else {
        if (uVar2 == 2) {
          uVar1 = 0x10000000;
        }
        else {
          if (uVar2 == 3) {
            uVar1 = 0x18000000;
            goto LAB_8c20d22e;
          }
          if (uVar2 != 4) {
            uVar3 = 4;
            goto LAB_8c20d262;
          }
          uVar1 = 0x20000000;
        }
        ar4[2] = uVar1;
      }
      goto LAB_8c20d262;
    }
    if (*(int *)(DAT_8c2756b0 + 0xa0) == 3) {
      ar4[1] = 3;
    }
    else {
      ar4[1] = 1;
    }
    uVar1 = 0x30000000;
  }
  ar4[2] = uVar1;
LAB_8c20d262:
  ar4[3] = ar5;
  ar4[4] = ar6;
  if ((((ar5 != 8) && (ar5 != 0x10)) && (ar5 != 0x20)) &&
     (((ar5 != 0x40 && (ar5 != 0x80)) && ((ar5 != 0x100 && ((ar5 != 0x200 && (ar5 != 0x400)))))))) {
    uVar3 = 4;
  }
  if (((((ar6 != 8) && (ar6 != 0x10)) && (ar6 != 0x20)) && ((ar6 != 0x40 && (ar6 != 0x80)))) &&
     ((ar6 != 0x100 && ((ar6 != 0x200 && (ar6 != 0x400)))))) {
    uVar3 = 4;
  }
  if (((((uVar4 != 0x900) && (uVar4 != 0xb00)) && (uVar4 != 0xd00)) &&
      ((uVar4 != 0x500 && (uVar4 != 0x700)))) && (ar5 != ar6)) {
    uVar3 = 4;
  }
  ar4[6] = 0;
  if (((uVar4 == 0xf00) || (uVar4 == 0x200)) ||
     ((uVar4 == 0x400 || (((uVar4 == 0x1100 || (uVar4 == 0x600)) || (uVar4 == 0x800)))))) {
    ar4[6] = ar4[6] | 1;
  }
  if (((uVar4 == 0xe00) || (uVar4 == 0xf00)) ||
     ((uVar4 == 0x100 || ((uVar4 == 0x200 || (uVar4 == 0xd00)))))) {
    ar4[6] = ar4[6] | 4;
  }
  if ((((uVar4 == 0x300) || (uVar4 == 0x400)) || (uVar4 == 0x1000)) || (uVar4 == 0x1100)) {
    ar4[6] = ar4[6] | 0xc;
  }
  if (uVar4 == 0xb00) {
    ar4[6] = ar4[6] | 0x10;
  }
  if (((uVar4 == 0x500) || (uVar4 == 0x600)) || ((uVar4 == 0x700 || (uVar4 == 0x800)))) {
    ar4[6] = ar4[6] | 0x24;
  }
  FUN_8c20d4a6(ar4,ar5,ar6,4);
  return uVar3;
}

__asm__(".globl _FUN_8c20d128\n.set _FUN_8c20d128, _FUN_8c20d128_def\n");
