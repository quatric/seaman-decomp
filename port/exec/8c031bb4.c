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
undefined4 FUN_8c031bb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031bb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fr1 = 0;
  float fVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double in_dr4 = 0;
  double in_xd0 = 0;
  undefined8 in_xd14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar3 = F32HI(in_dr4);
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
  uVar4 = (ulonglong)in_fr1;
  uVar1 = ar5;
  uVar2 = ar6;
  if (0.0 < fVar3) {
    *(float *)(unsigned)(ar4 + 0x24) = fVar3;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x24) = (int)(uVar4 >> 0x20);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x24) = uVar4;
    }
  }
  dVar5 = (double)(uVar4 & 0xffffffff);
  if (cVar8 == '\0') {
    bVar7 = 0.0 < SUB84(in_dr4,0);
  }
  else {
    bVar7 = dVar5 < in_dr4;
  }
  if (bVar7) {
    ar6 = uVar1;
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = SUB84(in_dr4,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd14;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022fc0(ar5,ar6,uVar2,ar7));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),(int)(D2U(dVar5) >> 0x20));
      dVar5 = in_xd0;
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar3;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031c64(ar4,ar6,uVar2,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
  return 0x40;
}

__asm__(".globl _FUN_8c031bb4\n.set _FUN_8c031bb4, _FUN_8c031bb4_def\n");
