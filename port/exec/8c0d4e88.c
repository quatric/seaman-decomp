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
undefined1 * FUN_8c0d4e88_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4e88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar5_00;
  float fVar1;
  undefined8 in_dr0 = 0;
  undefined4 uVar3;
  undefined1 *puVar4;
  double dVar2;
  float fVar5;
  undefined4 in_fr3 = 0;
  double dVar6;
  double in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12c394_m0_102b04(0x8c437a78,ar5,ar6,ar7));
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar8 == '\0') {
    fVar1 = *(float *)(unsigned)(ar5 + 8);
    puVar4 = (undefined1 *)(unsigned)0x44bb8000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c78) = uVar3;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c78) = (undefined4)in_dr0;
    in_xd0 = *(double *)(unsigned)(ar5 + 8);
    fVar1 = 1500.0;
    puVar4 = ((undefined1 *)(unsigned)0x8c437844);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = uVar3;
  }
  if (cVar7 != '\0' || fVar1 <= (float)(uint)puVar4) {
    if (cVar8 == '\0') {
      dVar2 = CONCAT44D(0x44bb8000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c78));
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c7c),(*(undefined4 *)(unsigned)(unsigned)0x8c437c78));
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      fVar1 = F32HI(dVar2);
      dVar2 = CONCAT44D(fVar1,F32LO(dVar2) * fVar1);
    }
    else {
      dVar2 = dVar2 * dVar2;
    }
    if (cVar8 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437844) = SUB84(dVar2,0);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437844) = SUB84(in_xd0,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437848) = F32HI(in_xd0);
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 8),in_fr3);
      dVar2 = CONCAT44D(0x44bb8000,fVar1);
    }
    else {
      dVar6 = *(double *)(unsigned)(ar5 + 8);
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) - F32HI(dVar2)
                               ,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar2;
    }
    if (cVar8 == '\0') {
      dVar2 = CONCAT44D(0x44bb8000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c78));
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c7c),(*(undefined4 *)(unsigned)(unsigned)0x8c437c78));
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      fVar5 = F32HI(dVar2);
      fVar1 = F32LO(dVar2) * fVar5;
      dVar2 = CONCAT44D(fVar5,fVar1);
      dVar6 = CONCAT44D(F32HI(dVar6) + fVar1,SUB84(dVar6,0));
    }
    else {
      dVar2 = dVar2 * dVar2;
      dVar6 = dVar6 + dVar2;
    }
    fVar1 = F32HI(dVar6);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437844) = fVar1;
    if (cVar8 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437844) = SUB84(dVar6,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437848) = fVar1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12c394_m0_102b04(0x8c437aa4,ar5_00,ar6,ar7));
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(0x44bb8000,(int)(D2U(dVar2) >> 0x20));
    dVar2 = in_xd0;
  }
  else {
    dVar6 = -1.3596743611313892e-249;
  }
  if (cVar7 == '\0') {
    fVar1 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar1 = SUB84(dVar6 * dVar6,0);
  }
  fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437844);
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c74) = fVar1;
  if (cVar8 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c74) = SUB84(dVar2,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c78) = (undefined4)(D2U(dVar2) >> 0x20);
    dVar2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437848),(*(undefined4 *)(unsigned)(unsigned)0x8c437844));
    fVar5 = fVar1;
  }
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c74),fVar5);
  }
  else {
    dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c78),(*(undefined4 *)(unsigned)(unsigned)0x8c437c74));
  }
  if (cVar7 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437848) = F32LO(dVar6) + F32HI(dVar6);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437848) = SUB84(dVar6 + dVar6,0);
  }
  if (cVar8 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437848) = SUB84(dVar2,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c43784c) = (undefined4)(D2U(dVar2) >> 0x20);
  }
  return ((undefined1 *)(unsigned)0x8c437c74);
}

__asm__(".globl _FUN_8c0d4e88\n.set _FUN_8c0d4e88, _FUN_8c0d4e88_def\n");
