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
undefined4 FUN_8c06aa04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c06aa04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3 = 0;
  double dVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 in_fr4 = 0;
  undefined8 in_dr14 = 0;
  double dVar11;
  undefined8 in_xd0 = 0;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_xd14 = 0;
  bool bVar14;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  dVar11 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x24)),ar5,ar6,ar7));
  puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), deref_u32(0x8c280954,ar5,ar6,ar7));
  piVar2 = *(int **)(unsigned)*puVar1;
  while( true ) {
    fVar4 = (float)*piVar2;
    dVar6 = (double)(ulonglong)(uint)fVar4;
    if (cVar15 == '\0' && fVar4 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = CONCAT44D(0x4f800000,fVar4);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar4 = F32HI(dVar6);
        dVar6 = CONCAT44D(fVar4,F32LO(dVar6) + fVar4);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    fVar4 = F32LO(dVar11);
    if (cVar15 == '\0') {
      bVar14 = SUB84(dVar6,0) < fVar4;
    }
    else {
      bVar14 = dVar6 < dVar11;
    }
    if (!bVar14) break;
    piVar2 = piVar2 + 4;
  }
  fVar5 = (float)*piVar2;
  if (cVar15 == '\0' && fVar5 < 0.0) {
    if (cVar16 == '\0') {
      dVar6 = CONCAT44D(0x4f800000,fVar5);
    }
    else {
      dVar6 = -7.932371899434731e-251;
    }
    if (cVar15 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
  }
  if (fVar5 == fVar4) {
    if (cVar16 == '\0') {
      (*(float *)(fr0_ - 0x24)) = (float)(uint)piVar2[1];
      (*(float *)(fr0_ - 0x20)) = (float)(uint)piVar2[2];
      (*(float *)(fr0_ - 0x1c)) = (float)(uint)piVar2[3];
    }
    else {
      (*(float *)(fr0_ - 0x24)) = (float)*(undefined8 *)(unsigned)(piVar2 + 1);
      (*(float *)(fr0_ - 0x20)) = (float)*(undefined8 *)(unsigned)(piVar2 + 2);
      (*(float *)(fr0_ - 0x1c)) = (float)*(undefined8 *)(unsigned)(piVar2 + 3);
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(piVar2 + 3) >> 0x20);
    }
  }
  else {
    piVar3 = piVar2 + -4;
    if (cVar16 == '\0') {
      dVar6 = CONCAT44D(piVar2[1],in_fr3);
      dVar7 = CONCAT44D(piVar2[-3],fVar5);
    }
    else {
      dVar6 = *(double *)(unsigned)(piVar2 + 1);
      dVar7 = *(double *)(unsigned)(piVar2 + -3);
    }
    if (cVar15 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) - F32HI(dVar7)
                               ,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar7;
    }
    fVar5 = (float)(*piVar2 - *piVar3);
    dVar7 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar7 = CONCAT44D(0x4f800000,fVar5);
      }
      else {
        dVar7 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = F32HI(dVar7);
        dVar7 = CONCAT44D(fVar5,F32LO(dVar7) + fVar5);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar15 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) / F32LO(dVar7),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 / dVar7;
    }
    (*(float *)(fr0_ - 0x24)) = SUB84(dVar6,0);
    if (cVar16 == '\0') {
      dVar8 = CONCAT44D(piVar2[2],(*(float *)(fr0_ - 0x24)));
      dVar7 = CONCAT44D(piVar2[-2],SUB84(dVar7,0));
      (*(float *)(fr0_ - 0x24)) = F32HI(dVar6);
    }
    else {
      dVar8 = *(double *)(unsigned)(piVar2 + 2);
      dVar7 = *(double *)(unsigned)(piVar2 + -2);
    }
    if (cVar15 == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) - F32HI(dVar7)
                               ,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar7;
    }
    fVar5 = (float)(*piVar2 - *piVar3);
    dVar6 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = CONCAT44D(0x4f800000,fVar5);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = F32HI(dVar6);
        dVar6 = CONCAT44D(fVar5,F32LO(dVar6) + fVar5);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    if (cVar15 == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) / F32LO(dVar6),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 / dVar6;
    }
    (*(float *)(fr0_ - 0x20)) = SUB84(dVar8,0);
    if (cVar16 == '\0') {
      dVar7 = CONCAT44D(piVar2[3],(*(float *)(fr0_ - 0x20)));
      dVar6 = CONCAT44D(piVar2[-1],SUB84(dVar6,0));
      (*(float *)(fr0_ - 0x20)) = (float)(int)(D2U(dVar8) >> 0x20);
    }
    else {
      dVar7 = *(double *)(unsigned)(piVar2 + 3);
      dVar6 = *(double *)(unsigned)(piVar2 + -1);
    }
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) - F32HI(dVar6)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar6;
    }
    fVar5 = (float)(*piVar2 - *piVar3);
    dVar6 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = CONCAT44D(0x4f800000,fVar5);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = F32HI(dVar6);
        dVar6 = CONCAT44D(fVar5,F32LO(dVar6) + fVar5);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) / F32LO(dVar6),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar6;
    }
    uVar9 = (undefined4)(D2U(dVar7) >> 0x20);
    (*(float *)(fr0_ - 0x1c)) = (float)SUB84(dVar7,0);
    if (cVar16 == '\0') {
      (*(float *)(fr0_ - 0x1c)) = (float)uVar9;
      uVar9 = (*(undefined4 *)(fr0_ - 0x18));
    }
    (*(undefined4 *)(fr0_ - 0x18)) = uVar9;
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D((float)*piVar3,SUB84(dVar7,0));
    }
    else {
      dVar7 = (double)*piVar3;
    }
    dVar8 = (double)(D2U(dVar6) & 0xffffffff);
    fVar5 = F32HI(dVar7);
    if (cVar15 == '\0') {
      bVar14 = fVar5 < 0.0;
    }
    else {
      bVar14 = dVar7 < dVar8;
    }
    if (bVar14) {
      if (cVar16 == '\0') {
        dVar8 = CONCAT44D(0x4f800000,SUB84(dVar6,0));
      }
      else {
        dVar8 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(fVar5 + F32HI(dVar8),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar8;
      }
    }
    uVar12 = in_xd14;
    if (cVar16 == '\0') {
      dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar4);
      uVar12 = in_xd0;
    }
    if (cVar15 == '\0') {
      fVar5 = F32LO(dVar8) - F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar8 - dVar7,0);
    }
    if (cVar16 == '\0') {
      dVar6 = CONCAT44D((*(float *)(fr0_ - 0x24)),fVar5);
    }
    else {
      dVar6 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
    }
    if (cVar15 == '\0') {
      fVar5 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar16 == '\0') {
      dVar6 = CONCAT44D(piVar2[-3],fVar5);
    }
    else {
      dVar6 = *(double *)(unsigned)(piVar2 + -3);
    }
    if (cVar15 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    (*(float *)(fr0_ - 0x24)) = fVar5;
    if (cVar16 != '\0') {
      (*(float *)(fr0_ - 0x24)) = (float)uVar12;
      (*(float *)(fr0_ - 0x20)) = F32HI(uVar12);
    }
    if (cVar15 == '\0') {
      dVar6 = CONCAT44D((float)*piVar3,SUB84(dVar7,0));
    }
    else {
      dVar6 = (double)*piVar3;
    }
    dVar7 = (double)(ulonglong)(uint)fVar5;
    fVar10 = F32HI(dVar6);
    if (cVar15 == '\0') {
      bVar14 = fVar10 < 0.0;
    }
    else {
      bVar14 = dVar6 < dVar7;
    }
    if (bVar14) {
      if (cVar16 == '\0') {
        dVar7 = CONCAT44D(0x4f800000,fVar5);
      }
      else {
        dVar7 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        dVar6 = CONCAT44D(fVar10 + F32HI(dVar7),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar7;
      }
    }
    uVar13 = in_xd14;
    if (cVar16 == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar4);
      uVar13 = uVar12;
    }
    if (cVar15 == '\0') {
      fVar5 = F32LO(dVar7) - F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar6,0);
    }
    if (cVar16 == '\0') {
      dVar6 = CONCAT44D((*(float *)(fr0_ - 0x20)),fVar5);
    }
    else {
      dVar6 = CONCAT44D((*(float *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
    }
    if (cVar15 == '\0') {
      fVar5 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar16 == '\0') {
      dVar6 = CONCAT44D(piVar2[-2],fVar5);
    }
    else {
      dVar6 = *(double *)(unsigned)(piVar2 + -2);
    }
    if (cVar15 == '\0') {
      (*(float *)(fr0_ - 0x20)) = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      (*(float *)(fr0_ - 0x20)) = SUB84(dVar6 + dVar6,0);
    }
    if (cVar16 != '\0') {
      (*(float *)(fr0_ - 0x20)) = (float)uVar13;
      (*(float *)(fr0_ - 0x1c)) = F32HI(uVar13);
    }
    fVar5 = (float)*piVar3;
    dVar6 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = CONCAT44D(0x4f800000,fVar5);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = F32HI(dVar6);
        dVar6 = CONCAT44D(fVar5,F32LO(dVar6) + fVar5);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    if (cVar15 == '\0') {
      dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),fVar4 - F32LO(dVar6));
    }
    else {
      dVar11 = dVar11 - dVar6;
    }
    if (cVar16 == '\0') {
      dVar6 = CONCAT44D((*(float *)(fr0_ - 0x1c)),SUB84(dVar6,0));
    }
    else {
      dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
    }
    if (cVar15 == '\0') {
      dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                F32LO(dVar11) * F32HI(dVar6));
    }
    else {
      dVar11 = dVar11 * dVar6;
    }
    if (cVar16 == '\0') {
      dVar6 = CONCAT44D(piVar2[-1],SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(unsigned)(piVar2 + -1);
    }
    if (cVar15 == '\0') {
      (*(float *)(fr0_ - 0x1c)) = F32LO(dVar11) + F32HI(dVar6);
    }
    else {
      (*(float *)(fr0_ - 0x1c)) = SUB84(dVar11 + dVar6,0);
    }
    if (cVar16 != '\0') {
      (*(float *)(fr0_ - 0x1c)) = (float)in_xd14;
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)in_xd14 >> 0x20);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x24)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_dtor(&(*(float *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c06aa04\n.set _FUN_8c06aa04, _FUN_8c06aa04_def\n");
