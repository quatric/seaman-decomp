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
int FUN_8c2364b2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2364b2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = 0x8c4aa4f0;
  puVar2 = 0x8c4ab238;
  piVar1 = 0x8c4aabbc;
  iVar5 = (int)0x90;
  *(undefined4 *)(unsigned)(iVar5 + *(undefined4 *)(unsigned)0x8c4aabbc) = *(undefined4 *)(unsigned)0x8c4ab238;
  *(undefined4 *)(unsigned)(iVar5 + 4 + *piVar1) = puVar2[1];
  *(undefined4 *)(unsigned)(iVar5 + 8 + *piVar1) = puVar2[2];
  piVar3 = 0x8c4aabdc;
  *(undefined4 *)(unsigned)(iVar5 + 0xc + *piVar1) = puVar2[3];
  *(undefined4 *)(unsigned)*piVar3 = puVar2[4];
  *(undefined4 *)(unsigned)(*piVar3 + 4) = puVar2[7];
  *(undefined4 *)(unsigned)(*piVar3 + 0xc) = puVar2[8];
  if ((*puVar4 & (int)0x4000) == 0) {
    *(undefined4 *)(unsigned)(*piVar3 + 8) = puVar2[5];
    *(undefined4 *)(unsigned)(*piVar3 + 0x10) = puVar2[6];
  }
  else {
    *(undefined4 *)(unsigned)(*piVar3 + 0x10) = puVar2[5];
    *(undefined4 *)(unsigned)(*piVar3 + 8) = puVar2[6];
  }
  return iVar5 + 0xc;
}

__asm__(".globl _FUN_8c2364b2\n.set _FUN_8c2364b2, _FUN_8c2364b2_def\n");
