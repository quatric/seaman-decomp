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
uint FUN_8c011f18_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c011f18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  float fVar4;
  longlong in_dr4 = 0;
  int ar4_00;
  
  fVar4 = F32HI(in_dr4);
  uVar2 = 0;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar4 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar4) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 4) != 0) {
    return uVar2;
  }
  if (((int)((uint)fVar4 & 0x7f800000) >> 0x17) + -0x7f < 0xf) {
    fVar4 = fVar4 * 1.4426951;
    (*(float *)(fr0_ - 0xc)) = fVar4;
    if (((uint)fVar4 & 0x7f800000) < 0x4b000000) {
      (*(float *)(fr0_ - 0xc)) = (float)(int)fVar4;
    }
    (*(float *)(fr0_ - 0xc)) = (float)((uint)(*(float *)(fr0_ - 0xc)) | (uint)fVar4 & 0x80000000);
    fVar4 = fVar4 - (*(float *)(fr0_ - 0xc));
    ar4_00 = (int)(*(float *)(fr0_ - 0xc));
    if (-2 < ((int)((uint)fVar4 & 0x7f800000) >> 0x17) + -0x7f) {
      if (((uint)fVar4 & 0x80000000) == 0) {
        ar4_00 = ar4_00 + 1;
        fVar4 = fVar4 + -1.0;
      }
      else {
        fVar4 = fVar4 + 1.0;
        ar4_00 = ar4_00 + -1;
      }
    }
    iVar3 = 6;
    do {
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iVar3 = 6;
    ar6_00 = -0x73edaa58;
    do {
      ar6_00 = ar6_00 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(fVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c011d50(ar4_00,iVar3,ar6_00,6); });
    return uVar1;
  }
  if ((uVar2 & 8) == 0) {
    return (uint)((undefined1 *)(unsigned)0x8c125800);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c011f18\n.set _FUN_8c011f18, _FUN_8c011f18_def\n");
