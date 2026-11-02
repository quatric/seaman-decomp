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
uint FUN_8c12172e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c12172e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float fVar2;
  undefined8 in_dr4 = 0;
  float fVar3;
  float fVar4;
  undefined8 in_dr6 = 0;
  float fVar5;
  bool bVar6;
  
  fVar5 = F32HI(in_dr6);
  fVar4 = fVar5 + *(float *)(unsigned)(ar4 + 0x60);
  fVar3 = F32HI(in_dr4);
  fVar2 = (float)in_dr4 + -4.0;
  if (fVar2 < fVar5) {
    fVar2 = fVar5;
  }
  if (fVar2 < fVar4) {
    fVar4 = (fVar4 - fVar2) * 0.5 + fVar2;
  }
  if (fVar4 < *(float *)(unsigned)(ar4 + 100)) {
    fVar4 = *(float *)(unsigned)(ar4 + 100);
  }
  if (*(uint *)(unsigned)(ar4 + 0x38) < *(uint *)(unsigned)(ar4 + 0x54)) {
    *(int *)(unsigned)(ar4 + 0x38) = *(int *)(unsigned)(ar4 + 0x38) + 1;
  }
  if (fVar5 <= fVar3) {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  }
  else {
    *(int *)(unsigned)(ar4 + 0x2c) = *(int *)(unsigned)(ar4 + 0x2c) + 1;
  }
  if (*(uint *)(unsigned)(ar4 + 0x58) < *(uint *)(unsigned)(ar4 + 0x2c)) {
    *(int *)(unsigned)(ar4 + 0x38) = *(int *)(unsigned)(ar4 + 0x58) + -1;
  }
  if (fVar4 <= fVar3) {
    *(int *)(unsigned)(ar4 + 0x34) = *(int *)(unsigned)(ar4 + 0x34) + 1;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
  }
  if (*(int *)(unsigned)(ar4 + 0x34) == 4) {
    *(undefined1 *)(unsigned)(ar4 + 0x45) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  }
  else if ((*(char *)(unsigned)(ar4 + 0x45) != '\0') &&
          (uVar1 = *(uint *)(unsigned)(ar4 + 0x48), *(uint *)(unsigned)(ar4 + 0x48) = uVar1 + 1,
          *(uint *)(unsigned)(ar4 + 0x58) < uVar1)) {
    *(undefined1 *)(unsigned)(ar4 + 0x45) = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,0xc,(uint)*(byte *)(unsigned)(ar4 + 4),4));
  }
  bVar6 = *(uint *)(unsigned)(ar4 + 0x50) < *(uint *)(unsigned)(ar4 + 0x34);
  if (bVar6) {
    *(undefined1 *)(unsigned)(ar4 + 0x44) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
    *(undefined1 *)(unsigned)(ar4 + 0x45) = 0;
  }
  return (uint)bVar6;
}

__asm__(".globl _FUN_8c12172e\n.set _FUN_8c12172e, _FUN_8c12172e_def\n");
