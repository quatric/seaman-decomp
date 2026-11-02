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
undefined8 * FUN_8c25b650_def(undefined4 *ar4,int ar5,undefined8 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c25b650";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined4 *ar6_00;
  undefined4 *ar5_00;
  undefined8 in_dr2 = 0;
  double dVar10;
  float fVar11;
  double in_dr4 = 0;
  float fVar12;
  undefined8 in_dr14 = 0;
  double dVar13;
  bool bVar14;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  iVar3 = 0;
  iVar6 = 0;
  bVar9 = false;
  if (ar7 < 1) {
    uVar7 = 0xe0000000;
    iVar5 = ar5;
    do {
      puVar4 = ar4 + iVar3 * 4;
      *(undefined4 *)(unsigned)(ar6 + 3) = *puVar4;
      *(undefined4 *)(unsigned)((int)ar6 + 0xc) = puVar4[1];
      *(undefined4 *)(unsigned)(ar6 + 1) = puVar4[2];
      *(undefined4 *)(unsigned)((int)ar6 + 4) = puVar4[3];
      *(undefined4 *)(unsigned)ar6 = uVar7;
      bVar9 = (bool)(bVar9 ^ 1);
      ar6 = ar6 + 4;
      if (bVar9) {
        iVar3 = iVar5 + -1;
        iVar5 = iVar3;
      }
      else {
        iVar3 = iVar6 + 1;
        iVar6 = iVar3;
      }
      ar5 = ar5 + -1;
      if (ar5 == 0) {
        uVar7 = 0xf0000000;
      }
    } while (-1 < ar5);
    return ar6;
  }
                    
  bVar9 = false;
  (*(int *)(fr0_ - 0x28)) = 1;
  (*(int *)(fr0_ - 0x2c)) = ar5 + -1;
  bVar2 = false;
  iVar6 = 1;
  (*(int *)(fr0_ - 0x38)) = ar5 + -2;
  dVar10 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
  dVar13 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),1.0 / (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
  puVar4 = ar4;
  ar5_00 = ar4 + (*(int *)(fr0_ - 0x2c)) * 4;
  do {
    dVar10 = (double)(D2U(dVar10) & 0xffffffff00000000);
    if (cVar16 == '\0') {
      in_dr4 = CONCAT44D(puVar4[1],SUB84(in_dr4,0));
    }
    else {
      in_dr4 = *(double *)(unsigned)(puVar4 + 1);
    }
    fVar11 = F32HI(in_dr4);
    if (cVar15 == '\0') {
      bVar14 = 0.0 < fVar11;
    }
    else {
      bVar14 = dVar10 < in_dr4;
    }
    ar6_00 = ar4 + iVar6 * 4;
    bVar1 = false;
    fVar12 = F32LO(dVar13);
    if (bVar14) {
      if (cVar15 == '\0') {
        bVar14 = fVar11 < fVar12;
      }
      else {
        bVar14 = in_dr4 < dVar13;
      }
      if (!bVar14) goto LAB_8c25b742;
      if (cVar16 == '\0') {
        dVar10 = (double)((ulonglong)(uint)ar5_00[1] << 0x20);
      }
      else {
        dVar10 = *(double *)(unsigned)(ar5_00 + 1);
      }
      fVar11 = F32HI(dVar10);
      if (cVar15 != '\0' || fVar11 <= SUB84(dVar10,0)) goto LAB_8c25b742;
      if (cVar16 == '\0') {
        dVar10 = CONCAT44D(fVar11,ar5_00[1]);
      }
      if (cVar15 == '\0') {
        bVar14 = SUB84(dVar10,0) < fVar12;
      }
      else {
        bVar14 = dVar10 < dVar13;
      }
      if (!bVar14) goto LAB_8c25b742;
      if (cVar16 == '\0') {
        fVar11 = (float)ar6_00[1];
      }
      else {
        fVar11 = (float)((ulonglong)*(undefined8 *)(unsigned)(ar6_00 + 1) >> 0x20);
      }
      dVar10 = (double)((ulonglong)(uint)fVar11 << 0x20);
      if (cVar15 != '\0' || fVar11 <= 0.0) goto LAB_8c25b742;
      if (cVar16 == '\0') {
        dVar10 = CONCAT44D(fVar11,ar6_00[1]);
      }
      if (cVar15 == '\0') {
        bVar14 = SUB84(dVar10,0) < fVar12;
      }
      else {
        bVar14 = dVar10 < dVar13;
      }
      if (!bVar14) goto LAB_8c25b742;
    }
    else {
LAB_8c25b742:
      bVar1 = true;
    }
    uVar7 = (undefined4)(D2U(dVar10) >> 0x20);
    if (bVar1) {
      if (bVar9) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *ar5_00;
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = ar5_00[1];
          *(undefined4 *)(unsigned)(ar6 + 1) = ar5_00[2];
          dVar10 = CONCAT44D(uVar7,ar5_00[3]);
          puVar8 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar8 = ar5_00[3];
        }
        else {
          ar6[1] = *(undefined8 *)(unsigned)(ar5_00 + 1);
          *ar6 = *(undefined8 *)(unsigned)(ar5_00 + 2);
          puVar8 = ar6 + -1;
          *puVar8 = *(undefined8 *)(unsigned)(ar5_00 + 3);
        }
        *(undefined4 *)(unsigned)((int)puVar8 + -4) = 0xf0000000;
        bVar9 = false;
        ar6 = (undefined8 *)(unsigned)((int)puVar8 + 0x1c);
      }
      dVar10 = (double)(D2U(dVar10) & 0xffffffff00000000);
      if (cVar16 == '\0') {
        in_dr4 = CONCAT44D(puVar4[1],SUB84(in_dr4,0));
      }
      else {
        in_dr4 = *(double *)(unsigned)(puVar4 + 1);
      }
      fVar11 = F32HI(in_dr4);
      if (cVar15 == '\0') {
        bVar14 = 0.0 < fVar11;
      }
      else {
        bVar14 = dVar10 < in_dr4;
      }
      if (bVar14) {
        if (cVar15 == '\0') {
          bVar14 = fVar11 < fVar12;
        }
        else {
          bVar14 = in_dr4 < dVar13;
        }
        if (!bVar14) goto LAB_8c25b7c2;
LAB_8c25b7de:
        ar6 = (undefined8 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25b858(puVar4,ar5_00,ar6_00,ar6));
      }
      else {
LAB_8c25b7c2:
        if (cVar16 == '\0') {
          fVar11 = (float)ar5_00[1];
        }
        else {
          fVar11 = (float)((ulonglong)*(undefined8 *)(unsigned)(ar5_00 + 1) >> 0x20);
        }
        if (cVar15 == '\0' && 0.0 < fVar11) {
          if (cVar16 == '\0') {
            dVar10 = (double)((ulonglong)(uint)ar5_00[1] << 0x20);
          }
          else {
            dVar10 = *(double *)(unsigned)(ar5_00 + 1);
          }
          if (cVar15 == '\0') {
            bVar14 = F32HI(dVar10) < fVar12;
          }
          else {
            bVar14 = dVar10 < dVar13;
          }
          if (bVar14) goto LAB_8c25b7de;
        }
        if (cVar16 == '\0') {
          fVar11 = (float)ar6_00[1];
        }
        else {
          fVar11 = (float)((ulonglong)*(undefined8 *)(unsigned)(ar6_00 + 1) >> 0x20);
        }
        dVar10 = (double)((ulonglong)(uint)fVar11 << 0x20);
        if (cVar15 == '\0' && 0.0 < fVar11) {
          if (cVar16 == '\0') {
            dVar10 = (double)((ulonglong)(uint)ar6_00[1] << 0x20);
          }
          else {
            dVar10 = *(double *)(unsigned)(ar6_00 + 1);
          }
          if (cVar15 == '\0') {
            bVar14 = F32HI(dVar10) < fVar12;
          }
          else {
            bVar14 = dVar10 < dVar13;
          }
          if (bVar14) goto LAB_8c25b7de;
        }
      }
    }
    else {
      if (!bVar9) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *puVar4;
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = puVar4[1];
          *(undefined4 *)(unsigned)(ar6 + 1) = puVar4[2];
          dVar10 = CONCAT44D(uVar7,puVar4[3]);
          puVar8 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar8 = puVar4[3];
        }
        else {
          ar6[1] = *(undefined8 *)(unsigned)(puVar4 + 1);
          *ar6 = *(undefined8 *)(unsigned)(puVar4 + 2);
          puVar8 = ar6 + -1;
          *puVar8 = *(undefined8 *)(unsigned)(puVar4 + 3);
        }
        *(undefined4 *)(unsigned)((int)puVar8 + -4) = 0xe0000000;
        bVar9 = true;
        ar6 = (undefined8 *)(unsigned)((int)puVar8 + 0x1c);
      }
      *(undefined4 *)(unsigned)(ar6 + 3) = *ar5_00;
      if (cVar16 == '\0') {
        *(undefined4 *)(unsigned)((int)ar6 + 0xc) = ar5_00[1];
        *(undefined4 *)(unsigned)(ar6 + 1) = ar5_00[2];
        dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),ar5_00[3]);
        puVar8 = (undefined8 *)(unsigned)((int)ar6 + 4);
        *(undefined4 *)(unsigned)puVar8 = ar5_00[3];
      }
      else {
        ar6[1] = *(undefined8 *)(unsigned)(ar5_00 + 1);
        *ar6 = *(undefined8 *)(unsigned)(ar5_00 + 2);
        puVar8 = ar6 + -1;
        *puVar8 = *(undefined8 *)(unsigned)(ar5_00 + 3);
      }
      *(undefined4 *)(unsigned)((int)puVar8 + -4) = 0xe0000000;
      ar6 = (undefined8 *)(unsigned)((int)puVar8 + 0x1c);
    }
    bVar2 = (bool)(bVar2 ^ 1);
    if (bVar2) {
      iVar6 = (*(int *)(fr0_ - 0x2c)) + -1;
      (*(int *)(fr0_ - 0x2c)) = iVar6;
    }
    else {
      iVar6 = (*(int *)(fr0_ - 0x28)) + 1;
      (*(int *)(fr0_ - 0x28)) = iVar6;
    }
    (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + -1;
    puVar4 = ar5_00;
    ar5_00 = ar6_00;
    if ((*(int *)(fr0_ - 0x38)) < 1) {
      if (bVar9) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *ar6_00;
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = ar6_00[1];
          *(undefined4 *)(unsigned)(ar6 + 1) = ar6_00[2];
          puVar8 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar8 = ar6_00[3];
        }
        else {
          ar6[1] = *(undefined8 *)(unsigned)(ar6_00 + 1);
          *ar6 = *(undefined8 *)(unsigned)(ar6_00 + 2);
          puVar8 = ar6 + -1;
          *puVar8 = *(undefined8 *)(unsigned)(ar6_00 + 3);
        }
        *(undefined4 *)(unsigned)((int)puVar8 + -4) = 0xf0000000;
        ar6 = (undefined8 *)(unsigned)((int)puVar8 + 0x1c);
      }
      return ar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25b650\n.set _FUN_8c25b650, _FUN_8c25b650_def\n");
