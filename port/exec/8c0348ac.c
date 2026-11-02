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
undefined4 FUN_8c0348ac_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0348ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int *piVar1;
  uint in_fr1 = 0;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined4 in_fr3 = 0;
  double dVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_fr4 = 0;
  undefined8 in_dr14 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_xd14 = 0;
  bool bVar12;
  undefined4 in_PR = 0;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  dVar9 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  (*(undefined4 *)(fr0_ - 0x14)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c023de0(&(*(float *)(fr0_ - 0x20)),ar5,ar6,ar7));
  if (ar5 == (int *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c023e24((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), free_if_nonnull_wrap_016ac4(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  else {
    if (cVar13 == '\0') {
      bVar12 = SUB84(dVar9,0) < 0.0;
    }
    else {
      bVar12 = dVar9 < (double)(ulonglong)in_fr1;
    }
    if (bVar12) {
      dVar9 = (double)(D2U(dVar9) & 0xffffffff00000000);
    }
    while( true ) {
      fVar2 = (float)*ar5;
      dVar4 = (double)(ulonglong)(uint)fVar2;
      if (cVar13 == '\0' && fVar2 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar2);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar2 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar2,F32LO(dVar4) + fVar2);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      fVar2 = F32LO(dVar9);
      if (cVar13 == '\0') {
        bVar12 = SUB84(dVar4,0) < fVar2;
      }
      else {
        bVar12 = dVar4 < dVar9;
      }
      if (!bVar12) break;
      ar5 = ar5 + 4;
    }
    fVar3 = (float)*ar5;
    if (cVar13 == '\0' && fVar3 < 0.0) {
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(0x4f800000,fVar3);
      }
      else {
        dVar4 = 2.9939313207017074e-78;
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
    }
    if (fVar3 == fVar2) {
      if (cVar14 == '\0') {
        (*(float *)(fr0_ - 0x20)) = (float)ar5[1];
        (*(float *)(fr0_ - 0x1c)) = (float)ar5[2];
        (*(float *)(fr0_ - 0x18)) = (float)ar5[3];
      }
      else {
        (*(float *)(fr0_ - 0x20)) = (float)*(undefined8 *)(unsigned)(ar5 + 1);
        (*(float *)(fr0_ - 0x1c)) = (float)*(undefined8 *)(unsigned)(ar5 + 2);
        (*(float *)(fr0_ - 0x18)) = (float)*(undefined8 *)(unsigned)(ar5 + 3);
        (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar5 + 3) >> 0x20);
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[1],in_fr3);
        dVar5 = CONCAT44D(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + 1);
        dVar5 = *(double *)(unsigned)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) -
                                 F32HI(dVar5),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar5 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar5 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar5);
          dVar5 = CONCAT44D(fVar3,F32LO(dVar5) + fVar3);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      if (cVar13 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) / F32LO(dVar5),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar5;
      }
      (*(float *)(fr0_ - 0x20)) = SUB84(dVar4,0);
      if (cVar14 == '\0') {
        dVar6 = CONCAT44D(ar5[2],(*(float *)(fr0_ - 0x20)));
        dVar5 = CONCAT44D(ar5[-2],SUB84(dVar5,0));
        (*(float *)(fr0_ - 0x20)) = F32HI(dVar4);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar5 + 2);
        dVar5 = *(double *)(unsigned)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) -
                                 F32HI(dVar5),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) / F32LO(dVar4),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 / dVar4;
      }
      (*(float *)(fr0_ - 0x1c)) = SUB84(dVar6,0);
      if (cVar14 == '\0') {
        dVar5 = CONCAT44D(ar5[3],(*(float *)(fr0_ - 0x1c)));
        dVar4 = CONCAT44D(ar5[-1],SUB84(dVar4,0));
        (*(float *)(fr0_ - 0x1c)) = (float)(int)(D2U(dVar6) >> 0x20);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar5 + 3);
        dVar4 = *(double *)(unsigned)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        dVar5 = CONCAT44D(F32HI(dVar5) -
                                 F32HI(dVar4),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar4;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar5 = CONCAT44D(F32HI(dVar5) / F32LO(dVar4),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar4;
      }
      uVar7 = (undefined4)(D2U(dVar5) >> 0x20);
      (*(float *)(fr0_ - 0x18)) = (float)SUB84(dVar5,0);
      if (cVar14 == '\0') {
        (*(float *)(fr0_ - 0x18)) = (float)uVar7;
        uVar7 = (*(undefined4 *)(fr0_ - 0x14));
      }
      (*(undefined4 *)(fr0_ - 0x14)) = uVar7;
      if (cVar13 == '\0') {
        dVar5 = CONCAT44D((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)*piVar1;
      }
      dVar6 = (double)(D2U(dVar4) & 0xffffffff);
      fVar3 = F32HI(dVar5);
      if (cVar13 == '\0') {
        bVar12 = fVar3 < 0.0;
      }
      else {
        bVar12 = dVar5 < dVar6;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,SUB84(dVar4,0));
        }
        else {
          dVar6 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar5 = CONCAT44D(fVar3 + F32HI(dVar6),SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 + dVar6;
        }
      }
      uVar10 = in_xd14;
      if (cVar14 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),fVar2);
        uVar10 = in_xd0;
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar6) - F32HI(dVar5);
      }
      else {
        fVar3 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x20)),fVar3);
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      (*(float *)(fr0_ - 0x20)) = fVar3;
      if (cVar14 != '\0') {
        (*(float *)(fr0_ - 0x20)) = (float)uVar10;
        (*(float *)(fr0_ - 0x1c)) = F32HI(uVar10);
      }
      if (cVar13 == '\0') {
        dVar4 = CONCAT44D((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar4 = (double)*piVar1;
      }
      dVar5 = (double)(ulonglong)(uint)fVar3;
      fVar8 = F32HI(dVar4);
      if (cVar13 == '\0') {
        bVar12 = fVar8 < 0.0;
      }
      else {
        bVar12 = dVar4 < dVar5;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar5 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar4 = CONCAT44D(fVar8 + F32HI(dVar5),SUB84(dVar4,0));
        }
        else {
          dVar4 = dVar4 + dVar5;
        }
      }
      uVar11 = in_xd14;
      if (cVar14 == '\0') {
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),fVar2);
        uVar11 = uVar10;
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar5) - F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),fVar3);
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[-2],fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x1c)) = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x1c)) = SUB84(dVar4 + dVar4,0);
      }
      if (cVar14 != '\0') {
        (*(float *)(fr0_ - 0x1c)) = (float)uVar11;
        (*(float *)(fr0_ - 0x18)) = F32HI(uVar11);
      }
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),fVar2 - F32LO(dVar4));
      }
      else {
        dVar9 = dVar9 - dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x18)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),
                                 F32LO(dVar9) * F32HI(dVar4));
      }
      else {
        dVar9 = dVar9 * dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[-1],SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x18)) = F32LO(dVar9) + F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x18)) = SUB84(dVar9 + dVar4,0);
      }
      if (cVar14 != '\0') {
        (*(float *)(fr0_ - 0x18)) = (float)in_xd14;
        (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)in_xd14 >> 0x20);
      }
    }
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c023e24((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), free_if_nonnull_wrap_016ac4(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c0348ac\n.set _FUN_8c0348ac, _FUN_8c0348ac_def\n");
