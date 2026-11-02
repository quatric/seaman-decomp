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
float * FUN_8c227bc4_def(short *ar4,int ar5,uint ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c227bc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  bool bVar1;
  short *psVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  float *ar6_00;
  float *ar5_00;
  float in_fr3 = 0;
  float extraout_fr3 = 0;
  undefined4 in_fr2 = 0;
  undefined4 extraout_fr2 = 0;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar14;
  undefined4 in_fr14 = 0;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  char cVar18;
  char cVar19;
  float fVar13;
  
  cVar19 = '\0';
  cVar18 = '\0';
  fVar14 = 1.0;
  iVar6 = 0;
  iVar7 = 0;
  (*(uint *)(fr0_ - 0x2c)) = ar6 & 0x3fff;
  (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(ar4));
  do {
    psVar8 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) + 1;
    iVar9 = (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34));
    psVar2 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) + 2;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar7 = iVar7 + iVar9;
    iVar5 = 0;
    (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) + 3));
    iVar9 = iVar9 + -2;
    pfVar3 = (float *)(unsigned)(*psVar8 * 0x20 + ar5);
    ar5_00 = (float *)(unsigned)(*psVar2 * 0x20 + ar5);
    do {
      ar6_00 = (float *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) * 0x20 + ar5);
      if (cVar19 == '\0') {
        in_fr3 = *pfVar3;
      }
      if (cVar18 == '\0') {
        bVar17 = fVar14 < in_fr3;
      }
      else {
        bVar17 = CONCAT44D(in_fr14,fVar14) < CONCAT44D(in_fr2,in_fr3);
      }
      bVar1 = false;
      if (bVar17) {
        if (cVar19 == '\0') {
          in_fr3 = *ar5_00;
        }
        if (cVar18 == '\0') {
          bVar17 = fVar14 < in_fr3;
        }
        else {
          bVar17 = CONCAT44D(in_fr14,fVar14) < CONCAT44D(in_fr2,in_fr3);
        }
        if (!bVar17) goto LAB_8c227c6e;
        if (cVar19 == '\0') {
          in_fr3 = *ar6_00;
        }
        if (cVar18 == '\0') {
          bVar17 = fVar14 < in_fr3;
        }
        else {
          bVar17 = CONCAT44D(in_fr14,fVar14) < CONCAT44D(in_fr2,in_fr3);
        }
        if (!bVar17) goto LAB_8c227c6e;
      }
      else {
LAB_8c227c6e:
        bVar1 = true;
      }
      if (bVar1) {
        if (iVar5 != 0) {
          if (cVar19 == '\0') {
            fVar11 = ar5_00[1];
            fVar10 = ar5_00[2];
            fVar13 = ar5_00[3];
            ar7[6] = ar5_00[4];
            ar7[3] = fVar13;
            ar7[2] = fVar10;
            pfVar4 = ar7 + 1;
            *pfVar4 = fVar11;
          }
          else {
            uVar16 = *(undefined8 *)(unsigned)(ar5_00 + 1);
            uVar15 = *(undefined8 *)(unsigned)(ar5_00 + 3);
            uVar12 = *(undefined8 *)(unsigned)(ar5_00 + 5);
            *(undefined8 *)(unsigned)(ar7 + 5) = *(undefined8 *)(unsigned)(ar5_00 + 7);
            *(undefined8 *)(unsigned)(ar7 + 1) = uVar12;
            *(undefined8 *)(unsigned)(ar7 + -1) = uVar15;
            pfVar4 = ar7 + -3;
            *(undefined8 *)(unsigned)pfVar4 = uVar16;
          }
          pfVar4[-1] = -1.5845633e+29;
          iVar6 = iVar6 + iVar5 + 1;
          iVar5 = 0;
          ar7 = pfVar4 + 7;
        }
      }
      else {
        if (iVar5 == 0) {
          if (cVar19 == '\0') {
            fVar11 = pfVar3[1];
            fVar13 = pfVar3[2];
            fVar10 = pfVar3[3];
            ar7[6] = pfVar3[4];
            ar7[3] = fVar10;
            ar7[2] = fVar13;
            pfVar4 = ar7 + 1;
            *pfVar4 = fVar11;
          }
          else {
            uVar16 = *(undefined8 *)(unsigned)(pfVar3 + 1);
            uVar12 = *(undefined8 *)(unsigned)(pfVar3 + 3);
            uVar15 = *(undefined8 *)(unsigned)(pfVar3 + 5);
            *(undefined8 *)(unsigned)(ar7 + 5) = *(undefined8 *)(unsigned)(pfVar3 + 7);
            *(undefined8 *)(unsigned)(ar7 + 1) = uVar15;
            *(undefined8 *)(unsigned)(ar7 + -1) = uVar12;
            pfVar4 = ar7 + -3;
            *(undefined8 *)(unsigned)pfVar4 = uVar16;
          }
          pfVar4[-1] = -3.689349e+19;
          iVar5 = 1;
          ar7 = pfVar4 + 7;
        }
        if (cVar19 == '\0') {
          fVar10 = ar5_00[1];
          fVar11 = ar5_00[2];
          fVar13 = ar5_00[3];
          ar7[6] = ar5_00[4];
          ar7[3] = fVar13;
          ar7[2] = fVar11;
          pfVar4 = ar7 + 1;
          *pfVar4 = fVar10;
        }
        else {
          uVar15 = *(undefined8 *)(unsigned)(ar5_00 + 1);
          uVar16 = *(undefined8 *)(unsigned)(ar5_00 + 3);
          uVar12 = *(undefined8 *)(unsigned)(ar5_00 + 5);
          *(undefined8 *)(unsigned)(ar7 + 5) = *(undefined8 *)(unsigned)(ar5_00 + 7);
          *(undefined8 *)(unsigned)(ar7 + 1) = uVar12;
          *(undefined8 *)(unsigned)(ar7 + -1) = uVar16;
          pfVar4 = ar7 + -3;
          *(undefined8 *)(unsigned)pfVar4 = uVar15;
        }
        pfVar4[-1] = -3.689349e+19;
        ar7 = pfVar4 + 7;
        iVar5 = iVar5 + 1;
      }
      if (bVar1) {
        if (cVar19 == '\0') {
          in_fr3 = *pfVar3;
        }
        if (cVar18 == '\0') {
          bVar17 = fVar14 < in_fr3;
        }
        else {
          bVar17 = CONCAT44D(in_fr14,fVar14) < CONCAT44D(in_fr2,in_fr3);
        }
        if (!bVar17) {
          if (cVar19 == '\0') {
            in_fr3 = *ar5_00;
          }
          if (cVar18 == '\0') {
            bVar17 = fVar14 < in_fr3;
          }
          else {
            bVar17 = CONCAT44D(in_fr14,fVar14) < CONCAT44D(in_fr2,in_fr3);
          }
          if (!bVar17) {
            if (cVar19 == '\0') {
              in_fr3 = *ar6_00;
            }
            if (cVar18 == '\0') {
              bVar17 = fVar14 < in_fr3;
            }
            else {
              bVar17 = CONCAT44D(in_fr14,fVar14) < CONCAT44D(in_fr2,in_fr3);
            }
            if (!bVar17) goto LAB_8c227d10;
          }
        }
        ar7 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), FUN_8c227d94(pfVar3,ar5_00,ar6_00,ar7));
        in_fr3 = extraout_fr3;
        in_fr2 = extraout_fr2;
      }
LAB_8c227d10:
      (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) + (ar6 >> 0xe & 3) + 1));
      iVar9 = iVar9 + -1;
      pfVar3 = ar5_00;
      ar5_00 = ar6_00;
    } while (iVar9 != 0);
    if (iVar5 != 0) {
      if (cVar19 == '\0') {
        fVar10 = ar6_00[1];
        fVar11 = ar6_00[2];
        fVar13 = ar6_00[3];
        ar7[6] = ar6_00[4];
        ar7[3] = fVar13;
        ar7[2] = fVar11;
        pfVar3 = ar7 + 1;
        *pfVar3 = fVar10;
      }
      else {
        uVar15 = *(undefined8 *)(unsigned)(ar6_00 + 1);
        uVar16 = *(undefined8 *)(unsigned)(ar6_00 + 3);
        uVar12 = *(undefined8 *)(unsigned)(ar6_00 + 5);
        *(undefined8 *)(unsigned)(ar7 + 5) = *(undefined8 *)(unsigned)(ar6_00 + 7);
        *(undefined8 *)(unsigned)(ar7 + 1) = uVar12;
        *(undefined8 *)(unsigned)(ar7 + -1) = uVar16;
        pfVar3 = ar7 + -3;
        *(undefined8 *)(unsigned)pfVar3 = uVar15;
      }
      pfVar3[-1] = -1.5845633e+29;
      iVar6 = iVar6 + iVar5 + 1;
      ar7 = pfVar3 + 7;
    }
    (*(uint *)(fr0_ - 0x2c)) = (*(uint *)(fr0_ - 0x2c)) - 1;
    if ((*(uint *)(fr0_ - 0x2c)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar6;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar7;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c227bc4\n.set _FUN_8c227bc4, _FUN_8c227bc4_def\n");
