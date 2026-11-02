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
undefined8 * FUN_8c25bc88_def(undefined4 *ar4,int ar5,undefined8 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c25bc88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined4 *ar6_00;
  undefined4 *ar5_00;
  undefined8 in_dr2 = 0;
  double dVar9;
  float fVar10;
  double in_dr4 = 0;
  float fVar11;
  undefined8 in_dr14 = 0;
  double dVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  iVar2 = 0;
  iVar4 = 0;
  bVar8 = false;
  if (ar7 < 1) {
    uVar6 = 0xe0000000;
    iVar5 = ar5;
    do {
      puVar3 = ar4 + iVar2 * 6;
      *(undefined4 *)(unsigned)(ar6 + 3) = *puVar3;
      *(undefined4 *)(unsigned)((int)ar6 + 0x14) = puVar3[1];
      *(undefined4 *)(unsigned)(ar6 + 2) = puVar3[2];
      *(undefined4 *)(unsigned)((int)ar6 + 0xc) = puVar3[3];
      *(undefined4 *)(unsigned)(ar6 + 1) = puVar3[4];
      *(undefined4 *)(unsigned)((int)ar6 + 4) = puVar3[5];
      *(undefined4 *)(unsigned)ar6 = uVar6;
      bVar8 = (bool)(bVar8 ^ 1);
      ar6 = ar6 + 4;
      if (bVar8) {
        iVar2 = iVar5 + -1;
        iVar5 = iVar2;
      }
      else {
        iVar2 = iVar4 + 1;
        iVar4 = iVar2;
      }
      ar5 = ar5 + -1;
      if (ar5 == 0) {
        uVar6 = 0xf0000000;
      }
    } while (-1 < ar5);
    return ar6;
  }
                    
  bVar8 = false;
  (*(int *)(fr0_ - 0x28)) = 1;
  (*(int *)(fr0_ - 0x2c)) = ar5 + -1;
  bVar1 = false;
  (*(int *)(fr0_ - 0x38)) = ar5 + -2;
  iVar4 = 1;
  dVar9 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
  dVar12 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),1.0 / (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
  puVar3 = ar4;
  ar5_00 = ar4 + (*(int *)(fr0_ - 0x2c)) * 6;
  do {
    dVar9 = (double)(D2U(dVar9) & 0xffffffff00000000);
    if (cVar16 == '\0') {
      in_dr4 = CONCAT44D(puVar3[3],SUB84(in_dr4,0));
    }
    else {
      in_dr4 = *(double *)(unsigned)(puVar3 + 3);
    }
    bVar14 = false;
    fVar10 = F32HI(in_dr4);
    if (cVar15 == '\0') {
      bVar13 = 0.0 < fVar10;
    }
    else {
      bVar13 = dVar9 < in_dr4;
    }
    ar6_00 = ar4 + iVar4 * 6;
    fVar11 = F32LO(dVar12);
    if (bVar13) {
      if (cVar15 == '\0') {
        bVar13 = fVar10 < fVar11;
      }
      else {
        bVar13 = in_dr4 < dVar12;
      }
      if (!bVar13) goto LAB_8c25bd92;
      if (cVar16 == '\0') {
        dVar9 = (double)((ulonglong)(uint)ar5_00[3] << 0x20);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar5_00 + 3);
      }
      fVar10 = F32HI(dVar9);
      if (cVar15 != '\0' || fVar10 <= SUB84(dVar9,0)) goto LAB_8c25bd92;
      if (cVar16 == '\0') {
        dVar9 = CONCAT44D(fVar10,ar5_00[3]);
      }
      if (cVar15 == '\0') {
        bVar13 = SUB84(dVar9,0) < fVar11;
      }
      else {
        bVar13 = dVar9 < dVar12;
      }
      if (!bVar13) goto LAB_8c25bd92;
      if (cVar16 == '\0') {
        fVar10 = (float)ar6_00[3];
      }
      else {
        fVar10 = (float)((ulonglong)*(undefined8 *)(unsigned)(ar6_00 + 3) >> 0x20);
      }
      dVar9 = (double)((ulonglong)(uint)fVar10 << 0x20);
      if (cVar15 != '\0' || fVar10 <= 0.0) goto LAB_8c25bd92;
      if (cVar16 == '\0') {
        dVar9 = CONCAT44D(fVar10,ar6_00[3]);
      }
      if (cVar15 == '\0') {
        bVar13 = SUB84(dVar9,0) < fVar11;
      }
      else {
        bVar13 = dVar9 < dVar12;
      }
      if (!bVar13) goto LAB_8c25bd92;
    }
    else {
LAB_8c25bd92:
      bVar14 = true;
    }
    uVar6 = (undefined4)(D2U(dVar9) >> 0x20);
    if (bVar14) {
      if (bVar8) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *ar5_00;
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0x14) = ar5_00[1];
          *(undefined4 *)(unsigned)(ar6 + 2) = ar5_00[2];
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = ar5_00[3];
          *(undefined4 *)(unsigned)(ar6 + 1) = ar5_00[4];
          dVar9 = CONCAT44D(uVar6,ar5_00[5]);
          puVar7 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar7 = ar5_00[5];
        }
        else {
          ar6[2] = *(undefined8 *)(unsigned)(ar5_00 + 1);
          ar6[1] = *(undefined8 *)(unsigned)(ar5_00 + 2);
          *ar6 = *(undefined8 *)(unsigned)(ar5_00 + 3);
          ar6[-1] = *(undefined8 *)(unsigned)(ar5_00 + 4);
          puVar7 = ar6 + -2;
          *puVar7 = *(undefined8 *)(unsigned)(ar5_00 + 5);
        }
        *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xf0000000;
        bVar8 = false;
        ar6 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      }
      dVar9 = (double)(D2U(dVar9) & 0xffffffff00000000);
      if (cVar16 == '\0') {
        in_dr4 = CONCAT44D(puVar3[3],SUB84(in_dr4,0));
      }
      else {
        in_dr4 = *(double *)(unsigned)(puVar3 + 3);
      }
      fVar10 = F32HI(in_dr4);
      if (cVar15 == '\0') {
        bVar14 = 0.0 < fVar10;
      }
      else {
        bVar14 = dVar9 < in_dr4;
      }
      if (bVar14) {
        if (cVar15 == '\0') {
          bVar14 = fVar10 < fVar11;
        }
        else {
          bVar14 = in_dr4 < dVar12;
        }
        if (!bVar14) goto LAB_8c25be34;
LAB_8c25be50:
        ar6 = (undefined8 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25bed8(puVar3,ar5_00,ar6_00,ar6));
      }
      else {
LAB_8c25be34:
        if (cVar16 == '\0') {
          fVar10 = (float)ar5_00[3];
        }
        else {
          fVar10 = (float)((ulonglong)*(undefined8 *)(unsigned)(ar5_00 + 3) >> 0x20);
        }
        if (cVar15 == '\0' && 0.0 < fVar10) {
          if (cVar16 == '\0') {
            dVar9 = (double)((ulonglong)(uint)ar5_00[3] << 0x20);
          }
          else {
            dVar9 = *(double *)(unsigned)(ar5_00 + 3);
          }
          if (cVar15 == '\0') {
            bVar14 = F32HI(dVar9) < fVar11;
          }
          else {
            bVar14 = dVar9 < dVar12;
          }
          if (bVar14) goto LAB_8c25be50;
        }
        if (cVar16 == '\0') {
          fVar10 = (float)ar6_00[3];
        }
        else {
          fVar10 = (float)((ulonglong)*(undefined8 *)(unsigned)(ar6_00 + 3) >> 0x20);
        }
        dVar9 = (double)((ulonglong)(uint)fVar10 << 0x20);
        if (cVar15 == '\0' && 0.0 < fVar10) {
          if (cVar16 == '\0') {
            dVar9 = (double)((ulonglong)(uint)ar6_00[3] << 0x20);
          }
          else {
            dVar9 = *(double *)(unsigned)(ar6_00 + 3);
          }
          if (cVar15 == '\0') {
            bVar14 = F32HI(dVar9) < fVar11;
          }
          else {
            bVar14 = dVar9 < dVar12;
          }
          if (bVar14) goto LAB_8c25be50;
        }
      }
    }
    else {
      if (!bVar8) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *puVar3;
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0x14) = puVar3[1];
          *(undefined4 *)(unsigned)(ar6 + 2) = puVar3[2];
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = puVar3[3];
          *(undefined4 *)(unsigned)(ar6 + 1) = puVar3[4];
          dVar9 = CONCAT44D(uVar6,puVar3[5]);
          puVar7 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar7 = puVar3[5];
        }
        else {
          ar6[2] = *(undefined8 *)(unsigned)(puVar3 + 1);
          ar6[1] = *(undefined8 *)(unsigned)(puVar3 + 2);
          *ar6 = *(undefined8 *)(unsigned)(puVar3 + 3);
          ar6[-1] = *(undefined8 *)(unsigned)(puVar3 + 4);
          puVar7 = ar6 + -2;
          *puVar7 = *(undefined8 *)(unsigned)(puVar3 + 5);
        }
        *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
        bVar8 = true;
        ar6 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      }
      *(undefined4 *)(unsigned)(ar6 + 3) = *ar5_00;
      if (cVar16 == '\0') {
        *(undefined4 *)(unsigned)((int)ar6 + 0x14) = ar5_00[1];
        *(undefined4 *)(unsigned)(ar6 + 2) = ar5_00[2];
        *(undefined4 *)(unsigned)((int)ar6 + 0xc) = ar5_00[3];
        *(undefined4 *)(unsigned)(ar6 + 1) = ar5_00[4];
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),ar5_00[5]);
        puVar7 = (undefined8 *)(unsigned)((int)ar6 + 4);
        *(undefined4 *)(unsigned)puVar7 = ar5_00[5];
      }
      else {
        ar6[2] = *(undefined8 *)(unsigned)(ar5_00 + 1);
        ar6[1] = *(undefined8 *)(unsigned)(ar5_00 + 2);
        *ar6 = *(undefined8 *)(unsigned)(ar5_00 + 3);
        ar6[-1] = *(undefined8 *)(unsigned)(ar5_00 + 4);
        puVar7 = ar6 + -2;
        *puVar7 = *(undefined8 *)(unsigned)(ar5_00 + 5);
      }
      *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
      ar6 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
    }
    bVar1 = (bool)(bVar1 ^ 1);
    if (bVar1) {
      iVar4 = (*(int *)(fr0_ - 0x2c)) + -1;
      (*(int *)(fr0_ - 0x2c)) = iVar4;
    }
    else {
      iVar4 = (*(int *)(fr0_ - 0x28)) + 1;
      (*(int *)(fr0_ - 0x28)) = iVar4;
    }
    (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + -1;
    puVar3 = ar5_00;
    ar5_00 = ar6_00;
    if ((*(int *)(fr0_ - 0x38)) < 1) {
      if (bVar8) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *ar6_00;
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0x14) = ar6_00[1];
          *(undefined4 *)(unsigned)(ar6 + 2) = ar6_00[2];
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = ar6_00[3];
          *(undefined4 *)(unsigned)(ar6 + 1) = ar6_00[4];
          puVar7 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar7 = ar6_00[5];
        }
        else {
          ar6[2] = *(undefined8 *)(unsigned)(ar6_00 + 1);
          ar6[1] = *(undefined8 *)(unsigned)(ar6_00 + 2);
          *ar6 = *(undefined8 *)(unsigned)(ar6_00 + 3);
          ar6[-1] = *(undefined8 *)(unsigned)(ar6_00 + 4);
          puVar7 = ar6 + -2;
          *puVar7 = *(undefined8 *)(unsigned)(ar6_00 + 5);
        }
        *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xf0000000;
        ar6 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      }
      return ar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25bc88\n.set _FUN_8c25bc88, _FUN_8c25bc88_def\n");
