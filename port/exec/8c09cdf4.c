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
undefined4 * FUN_8c09cdf4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09cdf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined8 in_dr4 = 0;
  float fVar3;
  
  iVar1 = ar4 + ar5 * 0x10;
  fVar3 = F32HI(in_dr4);
  *(float *)(unsigned)(iVar1 + 0x644) =
       (*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c4) - *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x644)) / fVar3 +
       *(float *)(unsigned)(iVar1 + 0x644);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(unsigned)(iVar1 + 0x648) =
       (*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c8) - *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x648)) / fVar3 +
       *(float *)(unsigned)(iVar1 + 0x648);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(unsigned)(iVar1 + 0x64c) =
       (*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5cc) - *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x64c)) / fVar3 +
       *(float *)(unsigned)(iVar1 + 0x64c);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(unsigned)(iVar1 + 0x544) = *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x644) + *(float *)(unsigned)(iVar1 + 0x544);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(unsigned)(iVar1 + 0x548) = *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x648) + *(float *)(unsigned)(iVar1 + 0x548);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(unsigned)(iVar1 + 0x54c) = *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x64c) + *(float *)(unsigned)(iVar1 + 0x54c);
  if ((fVar3 / 3.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x544)) &&
     (0.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c4))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(unsigned)(iVar1 + 0x5c4) = *(float *)(unsigned)(iVar1 + 0x5c4) * -1.0;
  }
  if ((fVar3 / 3.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x548)) &&
     (0.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c8))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(unsigned)(iVar1 + 0x5c8) = *(float *)(unsigned)(iVar1 + 0x5c8) * -1.0;
  }
  if ((fVar3 / 3.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x54c)) &&
     (0.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5cc))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(unsigned)(iVar1 + 0x5cc) = *(float *)(unsigned)(iVar1 + 0x5cc) * -1.0;
  }
  if ((*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x544) < fVar3 / -3.0) &&
     (*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c4) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(unsigned)(iVar1 + 0x5c4) = *(float *)(unsigned)(iVar1 + 0x5c4) * -1.0;
  }
  if ((*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x548) < fVar3 / -3.0) &&
     (*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c8) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(unsigned)(iVar1 + 0x5c8) = *(float *)(unsigned)(iVar1 + 0x5c8) * -1.0;
  }
  puVar2 = ((undefined4 *)(unsigned)0x8c09d2a4);
  if ((*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x54c) < fVar3 / -3.0) &&
     (puVar2 = (undefined4 *)(unsigned)0x5cc, *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5cc) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    puVar2 = ((undefined4 *)(unsigned)0x8c09d29c);
    *(float *)(unsigned)(iVar1 + 0x5cc) = *(float *)(unsigned)(iVar1 + 0x5cc) * -1.0;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c09cdf4\n.set _FUN_8c09cdf4, _FUN_8c09cdf4_def\n");
