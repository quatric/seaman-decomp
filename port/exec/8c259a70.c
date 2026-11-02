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
int FUN_8c259a70_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c259a70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);
  undefined4 s8 = *(undefined4 *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  undefined4 s16 = *(undefined4 *)(vsp + 16);
  undefined4 s20 = *(undefined4 *)(vsp + 20);
  undefined4 s24 = *(undefined4 *)(vsp + 24);
  undefined4 s28 = *(undefined4 *)(vsp + 28);
  undefined4 s32 = *(undefined4 *)(vsp + 32);
  undefined4 s36 = *(undefined4 *)(vsp + 36);
  undefined4 s40 = *(undefined4 *)(vsp + 40);
  undefined4 s44 = *(undefined4 *)(vsp + 44);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 208; for (int i_ = 0; i_ < 208; i_++) z_[i_] = 0; }
  float fVar1;
  undefined8 in_dr2 = 0;
  undefined4 uVar3;
  double dVar2;
  undefined4 in_fr5 = 0;
  double dVar4;
  double dVar5;
  undefined4 in_fr7 = 0;
  double dVar7;
  double in_xd2 = 0;
  bool bVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  float fVar6;
  
  uVar3 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  cVar11 = '\0';
  cVar10 = '\0';
  (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c20aacc(((undefined1 *)(fr0_ - 0xd0)),ar5,ar6,ar7));
  *ar4 = (*(undefined4 *)(fr0_ - 0xc4));
  ar4[1] = (*(uint *)(fr0_ - 0xbc));
  if ((uint)ar4[2] < (*(uint *)(fr0_ - 0xbc))) {
    ar4[2] = (*(uint *)(fr0_ - 0xbc));
  }
  (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c23c814(ar4 + 3,((undefined1 *)(fr0_ - 0x50)),0x14,ar7));
  (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c23c814(ar4 + 8,((undefined1 *)(fr0_ - 0x3c)),0x14,ar7));
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x4f000000,in_fr7);
    in_fr5 = 0x3fa3d70a;
  }
  else {
    dVar7 = 0.03875000204425305;
  }
  fVar1 = (float)(*(int *)(fr0_ - 0x28));
  dVar2 = CONCAT44D(uVar3,fVar1);
  if ((*(int *)(fr0_ - 0x28)) < 0) {
    if (cVar10 == '\0') {
      dVar2 = CONCAT44D(0x4f800000,fVar1 + 4.2949673e+09);
    }
    else {
      dVar2 = CONCAT44D(0x4f800000,fVar1) + CONCAT44D(0x4f800000,fVar1);
    }
  }
  dVar4 = in_xd2;
  if (cVar11 == '\0') {
    dVar4 = CONCAT44D(SUB84(dVar2,0),in_fr5);
  }
  fVar1 = F32HI(dVar7);
  if (cVar10 == '\0') {
    fVar6 = F32HI(dVar4) * F32LO(dVar4);
    dVar4 = CONCAT44D(fVar6,SUB84(dVar4,0));
    bVar8 = fVar1 < fVar6;
  }
  else {
    dVar4 = dVar4 * dVar4;
    fVar6 = F32HI(dVar4);
    bVar8 = dVar7 < dVar4;
  }
  dVar5 = dVar4;
  if (bVar8) {
    if (cVar11 == '\0') {
      dVar2 = CONCAT44D(0xcf800000,fVar6);
      dVar5 = in_xd2;
    }
    else {
      dVar2 = -1.803317530245569e-130;
    }
    if (cVar10 == '\0') {
      fVar6 = F32HI(dVar2);
      dVar2 = CONCAT44D(fVar6,F32LO(dVar2) + fVar6);
    }
    else {
      dVar2 = dVar2 + dVar2;
    }
  }
  else if (cVar11 == '\0') {
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),fVar6);
    dVar5 = in_xd2;
  }
  if (cVar10 == '\0') {
    iVar9 = (int)SUB84(dVar2,0);
  }
  else {
    iVar9 = (int)dVar2;
  }
  ar4[0xd] = iVar9;
  fVar6 = (float)(*(int *)(fr0_ - 0x24));
  dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),fVar6);
  if ((*(int *)(fr0_ - 0x24)) < 0) {
    if (cVar10 == '\0') {
      dVar2 = CONCAT44D(0x4f800000,fVar6 + 4.2949673e+09);
    }
    else {
      dVar2 = CONCAT44D(0x4f800000,fVar6) + CONCAT44D(0x4f800000,fVar6);
    }
  }
  if (cVar11 == '\0') {
    dVar5 = CONCAT44D(SUB84(dVar2,0),SUB84(dVar4,0));
  }
  if (cVar10 == '\0') {
    fVar6 = F32HI(dVar5) * F32LO(dVar5);
    bVar8 = fVar1 < fVar6;
  }
  else {
    fVar6 = (float)((ulonglong)(dVar5 * dVar5) >> 0x20);
    bVar8 = dVar7 < dVar5 * dVar5;
  }
  if (bVar8) {
    if (cVar11 == '\0') {
      dVar2 = CONCAT44D(0xcf800000,fVar6);
    }
    else {
      dVar2 = -1.803317530245569e-130;
    }
    if (cVar10 == '\0') {
      fVar1 = F32HI(dVar2);
      dVar2 = CONCAT44D(fVar1,F32LO(dVar2) + fVar1);
    }
    else {
      dVar2 = dVar2 + dVar2;
    }
  }
  else if (cVar11 == '\0') {
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),fVar6);
  }
  if (cVar10 == '\0') {
    iVar9 = (int)SUB84(dVar2,0);
  }
  else {
    iVar9 = (int)dVar2;
  }
  ar4[0xe] = iVar9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa734) = (*(uint *)(fr0_ - 0xa0)) | 0xa5000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa738) = (*(uint *)(fr0_ - 0x9c)) | 0xa5000000;
  ar4[0xf] = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4aabdc) - (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f4);
  ar4[0x10] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aabdc)[1] - (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f8);
  ar4[0x11] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aabdc)[2] - (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4fc);
  ar4[0x12] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aabdc)[3] - (*(undefined4 *)(unsigned)(unsigned)0x8c4aa500);
  iVar9 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aabdc)[4] - (*(undefined4 *)(unsigned)(unsigned)0x8c4aa504);
  ar4[0x13] = iVar9;
  return iVar9;
}

__asm__(".globl _FUN_8c259a70\n.set _FUN_8c259a70, _FUN_8c259a70_def\n");
