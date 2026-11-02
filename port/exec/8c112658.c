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
undefined4 FUN_8c112658_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112658";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  uVar1 = 1;
  fVar3 = *pfVar2;
  if (1 < *(uint *)(unsigned)(ar4 + 8)) {
    do {
      pfVar2 = pfVar2 + 1;
      uVar1 = uVar1 + 1;
      if (fVar3 < *pfVar2) {
        fVar3 = *pfVar2;
      }
    } while (uVar1 < *(uint *)(unsigned)(ar4 + 8));
  }
  return ain0;
}

__asm__(".globl _FUN_8c112658\n.set _FUN_8c112658, _FUN_8c112658_def\n");
