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
uint FUN_8c2540a0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2540a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float in_fr4 = 0;
  
  if (ar4 == (undefined4 *)(unsigned)0x0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c0) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) = 0;
  }
  else {
    fVar1 = (float)(int)ar4[1];
    if ((int)ar4[1] < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if (fVar1 <= in_fr4) {
      return ain0;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) = *(ushort *)(unsigned)((int)ar4 + 10) & 0xff3f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c0) = (ushort)((*(ushort *)(unsigned)((int)ar4 + 10) & 0xc0) != 0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) = *(ushort *)(unsigned)(ar4 + 2);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) = *ar4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad58) = ar4[1];
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad60) = 0;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 1) == 0) {
    *(unsigned *)0x8c4aad34 = (unsigned)(unsigned long)((code *)((void *)(unsigned)0x8c2559bc));
  }
  else {
    *(unsigned *)0x8c4aad34 = (unsigned)(unsigned long)(((void *)0x8c254d1a));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 2) == 0) {
    *(unsigned *)0x8c4aad38 = (unsigned)(unsigned long)((code *)((void *)(unsigned)0x8c2559da));
    *(unsigned *)0x8c4aad40 = (unsigned)(unsigned long)((code *)((void *)(unsigned)0x8c2559f4));
  }
  else {
    *(unsigned *)0x8c4aad38 = (unsigned)(unsigned long)(((void *)0x8c254e80));
    *(unsigned *)0x8c4aad40 = (unsigned)(unsigned long)(((void *)0x8c254f1e));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 4) == 0) {
    *(unsigned *)0x8c4aad3c = (unsigned)(unsigned long)((code *)((void *)(unsigned)0x8c255a0e));
  }
  else {
    *(unsigned *)0x8c4aad3c = (unsigned)(unsigned long)(((void *)0x8c254db0));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) = in_fr4;
  return (uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4aad82);
}

__asm__(".globl _FUN_8c2540a0\n.set _FUN_8c2540a0, _FUN_8c2540a0_def\n");
