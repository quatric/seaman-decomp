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
undefined4 FUN_8c10f168_def(int ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f168";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(uint *)(unsigned)(ar4 + 0x2c);
  pfVar2 = ar5 + uVar1;
  iVar3 = *(int *)(unsigned)(ar4 + 0x34);
  pfVar6 = ar6 + *(int *)(unsigned)(ar4 + 0x30);
  *ar6 = *ar5 * *ar5;
  pfVar4 = ar6 + iVar3;
  pfVar5 = ar6 + (uVar1 >> 1);
  if (ar6 == pfVar6) {
    pfVar6 = pfVar6 + 1;
  }
  while( true ) {
    ar6 = ar6 + 1;
    pfVar2 = pfVar2 + -1;
    ar5 = ar5 + 1;
    if (pfVar6 <= ar6) break;
    *ar6 = *ar5 * *ar5 + *pfVar2 * *pfVar2;
  }
  for (; ar6 <= pfVar4; ar6 = ar6 + 1) {
    fVar8 = *pfVar2;
    pfVar2 = pfVar2 + -1;
    fVar7 = *ar5;
    ar5 = ar5 + 1;
    *ar6 = fVar7 * fVar7 + fVar8 * fVar8;
  }
  for (; ar6 < pfVar5; ar6 = ar6 + 1) {
    fVar7 = *ar5;
    ar5 = ar5 + 1;
    *ar6 = fVar7 * fVar7 + *pfVar2 * *pfVar2;
    pfVar2 = pfVar2 + -1;
  }
  *ar6 = *ar5 * *ar5;
  return 0x38;
}

__asm__(".globl _FUN_8c10f168\n.set _FUN_8c10f168, _FUN_8c10f168_def\n");
