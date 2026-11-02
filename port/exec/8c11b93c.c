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
undefined4 FUN_8c11b93c_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11b93c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ain0;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint *ar7_00;
  undefined4 *puVar7;
  uint uVar8;
  float *pfVar9;
  int *piVar10;
  int ar4_00;
  int *piVar11;
  int *ar4_01;
  int *ar4_02;
  float fVar12;
  ulonglong in_dr2 = 0;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 in_xd2 = 0;
  char cVar16;
  
  uVar3 = ar4[1];
  piVar10 = (int *)(unsigned)*ar4;
  ain0 = ar4[3];
  ar4_02 = (int *)(unsigned)(uint)ar4[2];
  ar4_00 = ar4[6];
  piVar11 = (int *)(unsigned)(uint)ar4[5];
  ar4_01 = (int *)(unsigned)(uint)ar4[4];
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1129e4(ar4_02,uVar3,ar6,ar7); });
  ar4_01[3] = ar5;
  ar4_01[4] = ar4_01[2] * 4 + ar5;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c112658(ar4_01,uVar3,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112680(ar4_01,uVar3,ar6,ar7));
  cVar16 = '\0';
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112958(ar4_02,ain0,ar4_01,ar7));
  if (iVar2 == 0) {
    iVar2 = *(int *)(unsigned)(ar4_00 + 4);
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)(unsigned)(*(int *)(unsigned)(ar4_00 + 0xc) + iVar2 * 4) = iVar2;
    }
    do {
      uVar8 = ar4_02[1];
      pfVar5 = (float *)(unsigned)(*piVar11 * 4 + piVar11[3]);
      pfVar6 = (float *)(unsigned)(*ar4_02 * uVar8 * 4 + ar4_02[3]);
      ar7_00 = (uint *)(unsigned)(*ar4_01 * 4 + ar4_01[3] + (*ar4_01 - uVar8) * -4);
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        ar7_00 = ar7_00 + -1;
        if (cVar16 == '\0') {
          in_dr2 = (ulonglong)*ar7_00;
        }
        else {
          in_xd2 = *(undefined8 *)(unsigned)ar7_00;
        }
        pfVar4 = (float *)(unsigned)((uVar8 - 1) * *ar4_02 * 4 + ar4_02[3] + uVar8 * 4 + -4);
        if (cVar16 == '\0') {
          fVar15 = *pfVar4;
          pfVar5 = pfVar5 + -1;
          *pfVar5 = (float)in_dr2;
        }
        else {
          fVar15 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar4 >> 0x20);
          pfVar5 = pfVar5 + -2;
          *(undefined8 *)(unsigned)pfVar5 = in_xd2;
        }
        pfVar9 = pfVar5;
        for (pfVar4 = pfVar4 + *ar4_02; fVar12 = (float)in_dr2, pfVar4 < pfVar6;
            pfVar4 = pfVar4 + *ar4_02) {
          pfVar9 = pfVar9 + 1;
          if (cVar16 == '\0') {
            uVar13 = CONCAT44(*pfVar4,*pfVar9);
          }
          else {
            in_xd2 = *(undefined8 *)(unsigned)pfVar9;
            uVar13 = *(undefined8 *)(unsigned)pfVar4;
          }
          cVar16 = '\0';
          fVar14 = F32HI(uVar13) * (float)uVar13;
          fVar12 = *pfVar5 - fVar14;
          in_dr2 = CONCAT44(fVar14,fVar12);
          *pfVar5 = fVar12;
        }
        if (cVar16 == '\0') {
          fVar12 = *pfVar5;
        }
        else {
          in_xd2 = *(undefined8 *)(unsigned)pfVar5;
        }
        cVar16 = '\0';
        *pfVar5 = fVar12 / fVar15;
        in_dr2 = 0;
        if ((0.0 < *pfVar5) && (2 < uVar8)) break;
        cVar16 = '\0';
      }
      if (uVar8 != 0) {
        pfVar5 = (float *)(unsigned)(uVar8 - 1);
        pfVar6 = pfVar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112734(ar4_02,ar4_01,pfVar5,ar7_00));
        if (iVar2 != 0) goto LAB_8c11ba88;
        *piVar11 = *piVar11 + -1;
        cVar16 = '\0';
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1125e8(ar4_00,pfVar5,pfVar6,ar7_00); });
      }
    } while (2 < uVar8);
    cVar16 = '\0';
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c112a02(ar4_01,pfVar5,pfVar6,ar7_00); });
    pfVar5 = (float *)(unsigned)piVar11[3];
    pfVar6 = pfVar5 + *piVar11;
    piVar1 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4_00 + 0xc));
    for (; pfVar5 < pfVar6; pfVar5 = pfVar5 + 1) {
      pfVar4 = (float *)(unsigned)ar4_01[3];
      puVar7 = (undefined4 *)(unsigned)(*piVar10 * *piVar1 * 4 + piVar10[3]);
      uVar8 = 0;
      if (ar4_01[2] != 0) {
        do {
          uVar8 = uVar8 + 1;
          if (cVar16 == '\0') {
            fVar15 = *pfVar5;
            uVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            uVar13 = CONCAT44(*pfVar4,uVar3);
          }
          else {
            fVar15 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar5 >> 0x20);
            puVar7 = puVar7 + 2;
            uVar13 = *(undefined8 *)(unsigned)pfVar4;
          }
          cVar16 = '\0';
          *pfVar4 = fVar15 * (float)uVar13 + F32HI(uVar13);
          pfVar4 = pfVar4 + 1;
        } while (uVar8 < (uint)ar4_01[2]);
      }
      piVar1 = piVar1 + 1;
    }
    iVar2 = piVar10[1];
    uVar3 = 0;
    ar4_02[1] = iVar2;
    *piVar11 = iVar2;
    *(int *)(unsigned)(ar4_00 + 4) = iVar2;
  }
  else {
LAB_8c11ba88:
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11b93c\n.set _FUN_8c11b93c, _FUN_8c11b93c_def\n");
