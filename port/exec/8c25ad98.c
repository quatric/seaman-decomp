#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c25ad98_def(uint *ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25ad98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = (uint)ar4 | (uint)ar5 | ar6;
  if ((uVar1 & 0x1f) == 0) {
    uVar3 = ar6 >> 5;
    do {
      uVar4 = *ar5;
      uVar5 = ar5[1];
      uVar6 = ar5[2];
      uVar7 = ar5[3];
      ar5 = ar5 + 4;
      *ar4 = uVar1;
      ar4[7] = uVar7;
      ar4[6] = uVar6;
      ar4[5] = uVar5;
      ar4[4] = uVar4;
      uVar3 = uVar3 - 1;
      ar4 = ar4 + 0xc;
    } while (uVar3 != 0);
    return uVar1;
  }
  if ((uVar1 & 0xf) == 0) {
    uVar3 = ar6 >> 4;
    do {
      uVar4 = *ar5;
      puVar2 = ar5 + 1;
      ar5 = ar5 + 2;
      uVar3 = uVar3 - 1;
      ar4[3] = *puVar2;
      ar4[2] = uVar4;
      ar4 = ar4 + 6;
    } while (uVar3 != 0);
    return uVar1;
  }
  if ((uVar1 & 7) == 0) {
    uVar3 = ar6 >> 3;
    do {
      uVar4 = *ar5;
      ar5 = ar5 + 1;
      uVar3 = uVar3 - 1;
      *ar4 = uVar4;
      ar4 = ar4 + 2;
    } while (uVar3 != 0);
    return uVar1;
  }
  if ((uVar1 & 3) == 0) {
    uVar1 = ar6 >> 2;
    do {
      uVar3 = *ar5;
      ar5 = ar5 + 1;
      uVar1 = uVar1 - 1;
      *ar4 = uVar3;
      ar4 = ar4 + 1;
    } while (uVar1 != 0);
    return uVar3;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = ar6 >> 1;
    do {
      uVar3 = *ar5;
      ar5 = (uint *)(unsigned)((int)ar5 + 2);
      uVar1 = uVar1 - 1;
      *(short *)(unsigned)ar4 = (short)uVar3;
      ar4 = (uint *)(unsigned)((int)ar4 + 2);
    } while (uVar1 != 0);
    return (int)(short)uVar3;
  }
  do {
    uVar1 = *ar5;
    ar5 = (uint *)(unsigned)((int)ar5 + 1);
    ar6 = ar6 - 1;
    *(char *)(unsigned)ar4 = (char)uVar1;
    ar4 = (uint *)(unsigned)((int)ar4 + 1);
  } while (ar6 != 0);
  return (int)(char)uVar1;
}

__asm__(".globl _FUN_8c25ad98\n.set _FUN_8c25ad98, _FUN_8c25ad98_def\n");
