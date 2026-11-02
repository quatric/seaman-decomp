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
uint FUN_8c211730_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c211730";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  
  puVar1 = 0x8c4aa014;
  for (piVar3 = ((int *)(fr0_ - 0x28)); piVar3 < (fr0_ + (int)0xffffffec); piVar3 = piVar3 + 1) {
    *piVar3 = 0;
  }
  if (*(undefined4 *)(unsigned)0x8c4a9ef0 == 1) {
    if (*(undefined4 *)(unsigned)0x8c4a9fcc == 0x20) {
      ((int *)(fr0_ - 0x28))[0] = 1;
    }
    if (*(undefined4 *)(unsigned)0x8c4a9fcc == 0x21) {
      ((int *)(fr0_ - 0x28))[1] = 1;
    }
    if (*(undefined4 *)(unsigned)0x8c4a9fcc == 0x22) {
      ((int *)(fr0_ - 0x28))[2] = 1;
    }
    if (*(undefined4 *)(unsigned)0x8c4a9fcc == 0x23) {
      ((int *)(fr0_ - 0x28))[3] = 1;
    }
    if (*(undefined4 *)(unsigned)0x8c4a9fcc == 0x24) {
      ((int *)(fr0_ - 0x28))[4] = 1;
    }
  }
  bVar4 = ar4 + ((int *)(fr0_ - 0x28))[0] != 0;
  *(undefined4 *)(unsigned)0x8c4aa014 = 0;
  if (bVar4) {
    *puVar1 = *puVar1 | 1;
  }
  uVar2 = (uint)bVar4;
  if (ar5 + ((int *)(fr0_ - 0x28))[1] != 0) {
    *(undefined4 *)(unsigned)0x8c4aa014 = *(undefined4 *)(unsigned)0x8c4aa014 | 2;
    uVar2 = uVar2 + 1;
  }
  if (ar6 + ((int *)(fr0_ - 0x28))[2] != 0) {
    *(undefined4 *)(unsigned)0x8c4aa014 = *(undefined4 *)(unsigned)0x8c4aa014 | 4;
    uVar2 = uVar2 + 1;
  }
  if (ar7 + ((int *)(fr0_ - 0x28))[3] != 0) {
    *(undefined4 *)(unsigned)0x8c4aa014 = *(undefined4 *)(unsigned)0x8c4aa014 | 8;
    uVar2 = uVar2 + 1;
  }
  if (s0 + ((int *)(fr0_ - 0x28))[4] != 0) {
    *(undefined4 *)(unsigned)0x8c4aa014 = *(undefined4 *)(unsigned)0x8c4aa014 | 0x10;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c211730\n.set _FUN_8c211730, _FUN_8c211730_def\n");
