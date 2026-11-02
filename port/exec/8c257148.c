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
undefined4 FUN_8c257148_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c257148";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  double in_dr0 = 0;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 in_PR = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c259bd8(ar4 >> 1,ar5,ar6,ar7); });
  fVar2 = F32HI(in_dr0);
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),fVar2);
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac));
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(F32HI(dVar3) / (fVar2 + F32LO(dVar3)),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 / (in_dr0 + dVar3);
  }
  uVar4 = (undefined4)(D2U(dVar3) >> 0x20);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8) = uVar4;
  if (cVar6 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8) = SUB84(dVar3,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac) = uVar4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c257148\n.set _FUN_8c257148, _FUN_8c257148_def\n");
