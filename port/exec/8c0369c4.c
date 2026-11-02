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
double * FUN_8c0369c4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0369c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr15 = 0;
  double in_xd14 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  *(float *)(unsigned)(ar4 + 0x468) =
       *(float *)(unsigned)(ar4 + 0x468) + (float)(int)*(char *)(unsigned)(ar4 + 0x46c) * 2.3148148e-06 * 8.0;
  fVar4 = *(float *)(unsigned)(ar4 + 0x468);
  iVar3 = ar5;
  if (fVar4 <= 1.0) {
    if (*(float *)(unsigned)(ar4 + 0x468) < 0.0) {
      *(undefined4 *)(unsigned)(ar4 + 0x468) = 0;
    }
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
    (*(undefined4 *)(fr0_ - 0x1c)) = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0x1c)) >> 0x10),(short)uVar1);
    if ((short)uVar1 == 1) {
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x468) = 0x3f8147ae;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x468) = 0x8c256fec3f8147ae;
      }
    }
    else if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x468) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x468) = CONCAT44(0x3f800000,fVar4);
    }
  }
  pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  if (cVar7 == '\0') {
    in_fr15 = *(undefined4 *)(unsigned)pdVar2;
  }
  else {
    in_xd14 = *pdVar2;
  }
  pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  dVar5 = in_xd14;
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr15,*(undefined4 *)(unsigned)(ar4 + 0x468));
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  if (cVar7 == '\0') {
    *(int *)(unsigned)pdVar2 = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *pdVar2 = dVar5;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c256fec(0,iVar3,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02a29c(ar4,*(undefined4 *)(unsigned)(ar5 + 4),ar6,ar7));
  pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  if (cVar7 == '\0') {
    *(undefined4 *)(unsigned)pdVar2 = in_fr15;
  }
  else {
    *pdVar2 = in_xd14;
  }
  return pdVar2;
}

__asm__(".globl _FUN_8c0369c4\n.set _FUN_8c0369c4, _FUN_8c0369c4_def\n");
