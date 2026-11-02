#include "../decls.h"
undefined4 FUN_8c2137c0_def(uint *ar4,uint ar5,uint ar6,uint ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = ar7 & 0xff;
  uVar5 = 0;
  uVar3 = (uint)0x1000;
  uVar4 = 0xff00 & ar7;
  *ar4 = ar7 << 0x10;
  if ((uVar4 == uVar3) || (uVar4 == (int)0x1100)) {
    uVar3 = *ar4 | 3;
  }
  else {
    uVar3 = *ar4 | 2;
  }
  uVar1 = (uint)0x500;
  *ar4 = uVar3;
  ar4[1] = 1;
  uVar3 = 0x28000000;
  if ((uVar4 == uVar1) || (uVar4 == (int)0x600)) goto LAB_8c21384c;
  uVar3 = 0x30000000;
  if ((uVar4 == (int)0x700) || (uVar4 == (int)0x800)) goto LAB_8c213852;
  if (uVar2 == 0) {
    ar4[2] = 0;
    goto LAB_8c213882;
  }
  uVar3 = 0x8000000;
  if (uVar2 == 1) {
LAB_8c21384c:
    ar4[2] = uVar3;
  }
  else {
    uVar3 = 0x10000000;
    if (uVar2 != 2) {
      uVar3 = 0x18000000;
      if (uVar2 == 3) goto LAB_8c21384c;
      uVar3 = 0x20000000;
      if (uVar2 != 4) {
        uVar5 = 4;
        goto LAB_8c213882;
      }
    }
LAB_8c213852:
    ar4[2] = uVar3;
  }
LAB_8c213882:
  ar4[3] = ar5;
  ar4[4] = ar6;
  if ((((ar5 != 8) && (ar5 != 0x10)) && (ar5 != 0x20)) &&
     (((ar5 != 0x40 && (ar5 != (int)0x80)) &&
      ((ar5 != (int)0x100 && ((ar5 != (int)0x200 && (ar5 != (int)0x400))))))))
  {
    uVar5 = 4;
  }
  if (((((ar6 != 8) && (ar6 != 0x10)) && (ar6 != 0x20)) &&
      ((ar6 != 0x40 && (ar6 != (int)0x80)))) &&
     ((ar6 != (int)0x100 && ((ar6 != (int)0x200 && (ar6 != (int)0x400)))))) {
    uVar5 = 4;
  }
  if (((((uVar4 != (int)0x900) && (uVar4 != (int)0xb00)) &&
       (uVar4 != (int)0xd00)) &&
      ((uVar4 != (int)0x500 && (uVar4 != (int)0x700)))) && (ar5 != ar6)) {
    uVar5 = 4;
  }
  uVar2 = (uint)0xf00;
  ar4[6] = 0;
  if (((uVar4 == uVar2) || (uVar4 == (int)0x200)) ||
     ((uVar4 == (int)0x400 ||
      (((uVar4 == (int)0x1100 || (uVar4 == (int)0x600)) || (uVar4 == (int)0x800)
       ))))) {
    ar4[6] = ar4[6] | 1;
  }
  if (((uVar4 == (int)0xe00) || (uVar4 == (int)0xf00)) ||
     ((uVar4 == (int)0x100 || ((uVar4 == (int)0x200 || (uVar4 == (int)0xd00))))
     )) {
    ar4[6] = ar4[6] | 4;
  }
  if ((((uVar4 == (int)0x300) || (uVar4 == (int)0x400)) ||
      (uVar4 == (int)0x1000)) || (uVar4 == (int)0x1100)) {
    ar4[6] = ar4[6] | 0xc;
  }
  if (uVar4 == (int)0xb00) {
    ar4[6] = ar4[6] | 0x10;
  }
  if (((uVar4 == (int)0x500) || (uVar4 == (int)0x600)) ||
     ((uVar4 == (int)0x700 || (uVar4 == (int)0x800)))) {
    ar4[6] = ar4[6] | 0x24;
  }
  if (uVar4 == (int)0x1200) {
    ar4[6] = ar4[6] | 5;
  }
  uVar2 = FUN_8c213a76(ar4,ar5,ar6,4);
  ar4[5] = uVar2;
  return uVar5;
}

__asm__(".globl _FUN_8c2137c0\n.set _FUN_8c2137c0, _FUN_8c2137c0_def\n");
