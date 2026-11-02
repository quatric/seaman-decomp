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
uint FUN_8c233d14_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c233d14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr1 = 0;
  double dVar1;
  double dVar2;
  undefined4 in_fr5 = 0;
  bool bVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  dVar1 = CONCAT44D(*(float *)(unsigned)(ar4 + 8) - *(float *)(unsigned)(ar5 + 8),in_fr1);
  ({ unsigned long ri0_ = (unsigned long)(8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c258030(ar4,ar5,ar6,ar7); });
  if (cVar5 == '\0') {
    dVar1 = CONCAT44D((int)(D2U(dVar1) >> 0x20),in_fr5);
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xc),*(undefined4 *)(unsigned)(ar5 + 0xc));
  }
  else {
    dVar2 = *(double *)(unsigned)(ar4 + 0xc);
  }
  if (cVar4 == '\0') {
    bVar3 = F32HI(dVar1) < F32HI(dVar2) + F32LO(dVar2);
  }
  else {
    bVar3 = dVar1 < dVar2 + dVar2;
  }
  return (uint)bVar3;
}

__asm__(".globl _FUN_8c233d14\n.set _FUN_8c233d14, _FUN_8c233d14_def\n");
