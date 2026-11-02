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
undefined4 Class_1297f4_m0_014cf0_def(float ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_1297f4_m0_014cf0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float in_fr1 = 0;
  float fVar2;
  float fVar3;
  float in_fr4 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  *(short *)(unsigned)((int)ar4 + 0x6c) = *(short *)(unsigned)((int)ar4 + 0x6c) + 1;
  if (cVar5 == '\0') {
    in_fr1 = *(float *)(unsigned)((int)ar4 + 8);
  }
  uVar1 = 0;
  fVar2 = in_fr4;
  fVar3 = ar4;
  if (cVar5 == '\0') {
    fVar2 = in_fr1;
    fVar3 = in_fr4;
  }
  if (cVar4 == '\0' && fVar2 < fVar3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014d90(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _Class_1297f4_m0_014cf0\n.set _Class_1297f4_m0_014cf0, _Class_1297f4_m0_014cf0_def\n");
