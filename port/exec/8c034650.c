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
undefined4 FUN_8c034650_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034650";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int *piVar1;
  uint in_fr1 = 0;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr3 = 0;
  double dVar7;
  undefined4 in_fr4 = 0;
  undefined8 in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar8;
  float in_PR = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = 1;
  dVar5 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  (*(float *)(fr0_ - 0x14)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_set_xyz(&(*(float *)(fr0_ - 0x20)),ar5,ar6,ar7));
  if (ar5 == (int *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 36)), vec3_copy_8c02b5fc((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), object_dtor_delete(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  else {
    if (cVar9 == '\0') {
      bVar8 = SUB84(dVar5,0) < 0.0;
    }
    else {
      bVar8 = dVar5 < (double)(ulonglong)in_fr1;
    }
    if (bVar8) {
      dVar5 = (double)(D2U(dVar5) & 0xffffffff00000000);
    }
    while( true ) {
      fVar2 = (float)*ar5;
      dVar4 = (double)(ulonglong)(uint)fVar2;
      if (cVar9 == '\0' && fVar2 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar2);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar2 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar2,F32LO(dVar4) + fVar2);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      fVar2 = F32LO(dVar5);
      if (cVar9 == '\0') {
        bVar8 = SUB84(dVar4,0) < fVar2;
      }
      else {
        bVar8 = dVar4 < dVar5;
      }
      if (!bVar8) break;
      ar5 = ar5 + 4;
    }
    fVar3 = (float)*ar5;
    if (cVar9 == '\0' && fVar3 < 0.0) {
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x4f800000,fVar3);
      }
      else {
        dVar4 = 1.4411522222084588e+18;
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
    }
    if (fVar3 == fVar2) {
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x43b40000,(float)ar5[1]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar2 = SUB84(dVar5 / dVar5,0);
      }
      (*(float *)(fr0_ - 0x20)) = (float)in_xd0;
      fVar3 = (*(float *)(fr0_ - 0x20));
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x20)) = fVar2;
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x43b40000,(float)ar5[2]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar2 = SUB84(dVar5 / dVar5,0);
      }
      (*(float *)(fr0_ - 0x1c)) = fVar3;
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x1c)) = fVar2;
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x43b40000,(float)ar5[3]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        (*(float *)(fr0_ - 0x18)) = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x18)) = SUB84(dVar5 / dVar5,0);
      }
      if (cVar10 != '\0') {
        (*(float *)(fr0_ - 0x14)) = F32HI(in_xd0);
        (*(float *)(fr0_ - 0x18)) = fVar3;
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D((float)(ar5[1] - ar5[-3]),in_fr3);
      }
      else {
        dVar4 = (double)(ar5[1] - ar5[-3]);
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x43b40000,fVar3);
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) *
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) /
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar3,F32LO(dVar6) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) / F32LO(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      (*(float *)(fr0_ - 0x20)) = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x20)) = F32HI(dVar4);
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D((float)(ar5[2] - ar5[-2]),SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)(ar5[2] - ar5[-2]);
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x43b40000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) *
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) /
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar3,F32LO(dVar6) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) / F32LO(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      (*(float *)(fr0_ - 0x1c)) = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x1c)) = F32HI(dVar4);
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D((float)(ar5[3] - ar5[-1]),SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)(ar5[3] - ar5[-1]);
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x43b40000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) *
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) /
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar3,F32LO(dVar6) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) / F32LO(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = F32HI(dVar4);
      (*(float *)(fr0_ - 0x18)) = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x18)) = fVar3;
        fVar3 = (*(float *)(fr0_ - 0x14));
      }
      (*(float *)(fr0_ - 0x14)) = fVar3;
      fVar3 = (float)*piVar1;
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar3,F32LO(dVar6) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      dVar7 = in_xd14;
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(fVar2,SUB84(dVar4,0));
      }
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) - F32LO(dVar6),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 - dVar6;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x20)),SUB84(dVar6,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
      }
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) *
                                 F32HI(dVar4),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x43b40000,(float)ar5[-3]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x47800000,fVar3);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) +
                                 F32LO(dVar4) / F32HI(dVar4),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar4 / dVar4;
      }
      fVar3 = F32HI(dVar7);
      (*(float *)(fr0_ - 0x20)) = SUB84(dVar7,0);
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x20)) = fVar3;
        fVar3 = (*(float *)(fr0_ - 0x1c));
      }
      (*(float *)(fr0_ - 0x1c)) = fVar3;
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      dVar6 = in_xd14;
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(fVar2,SUB84(dVar7,0));
      }
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar4),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
      }
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) *
                                 F32HI(dVar4),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x43b40000,(float)ar5[-2]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x47800000,fVar3);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) +
                                 F32LO(dVar4) / F32HI(dVar4),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar4 / dVar4;
      }
      fVar3 = F32HI(dVar6);
      (*(float *)(fr0_ - 0x1c)) = fVar3;
      if (cVar10 != '\0') {
        (*(float *)(fr0_ - 0x1c)) = SUB84(dVar6,0);
        (*(float *)(fr0_ - 0x18)) = fVar3;
      }
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar9 == '\0') {
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),fVar2 - F32LO(dVar4));
      }
      else {
        dVar5 = dVar5 - dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x18)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      }
      if (cVar9 == '\0') {
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),
                                 F32LO(dVar5) * F32HI(dVar4));
      }
      else {
        dVar5 = dVar5 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x43b40000,(float)ar5[-1]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar2 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x47800000,fVar2);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        (*(float *)(fr0_ - 0x18)) = F32LO(dVar5) + F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x18)) = SUB84(dVar5 + dVar4 / dVar4,0);
      }
      if (cVar10 != '\0') {
        (*(float *)(fr0_ - 0x18)) = SUB84(in_xd14,0);
        (*(float *)(fr0_ - 0x14)) = F32HI(in_xd14);
      }
    }
    (vsp = ((unsigned long)(fr0_ - 36)), vec3_copy_8c02b5fc((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), object_dtor_delete(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c034650\n.set _FUN_8c034650, _FUN_8c034650_def\n");
