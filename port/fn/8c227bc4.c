#include "../decls.h"
float * FUN_8c227bc4_def(short *ar4,int ar5,uint ar6,float *ar7)

{
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
  float in_fr3;
  float extraout_fr3;
  undefined4 in_fr2;
  undefined4 extraout_fr2;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar14;
  undefined4 in_fr14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  char cVar18;
  char cVar19;
  short *psStack_34;
  uint uStack_2c;
  float fVar13;
  
  cVar19 = '\0';
  cVar18 = '\0';
  fVar14 = 1.0;
  iVar6 = 0;
  iVar7 = 0;
  uStack_2c = ar6 & 0x3fff;
  psStack_34 = ar4;
  do {
    psVar8 = psStack_34 + 1;
    iVar9 = (int)*psStack_34;
    psVar2 = psStack_34 + 2;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar7 = iVar7 + iVar9;
    iVar5 = 0;
    psStack_34 = psStack_34 + 3;
    iVar9 = iVar9 + -2;
    pfVar3 = (float *)(*psVar8 * 0x20 + ar5);
    ar5_00 = (float *)(*psVar2 * 0x20 + ar5);
    do {
      ar6_00 = (float *)(*psStack_34 * 0x20 + ar5);
      if (cVar19 == '\0') {
        in_fr3 = *pfVar3;
      }
      if (cVar18 == '\0') {
        bVar17 = fVar14 < in_fr3;
      }
      else {
        bVar17 = (double)CONCAT44(in_fr14,fVar14) < (double)CONCAT44(in_fr2,in_fr3);
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
          bVar17 = (double)CONCAT44(in_fr14,fVar14) < (double)CONCAT44(in_fr2,in_fr3);
        }
        if (!bVar17) goto LAB_8c227c6e;
        if (cVar19 == '\0') {
          in_fr3 = *ar6_00;
        }
        if (cVar18 == '\0') {
          bVar17 = fVar14 < in_fr3;
        }
        else {
          bVar17 = (double)CONCAT44(in_fr14,fVar14) < (double)CONCAT44(in_fr2,in_fr3);
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
            uVar16 = *(undefined8 *)(ar5_00 + 1);
            uVar15 = *(undefined8 *)(ar5_00 + 3);
            uVar12 = *(undefined8 *)(ar5_00 + 5);
            *(undefined8 *)(ar7 + 5) = *(undefined8 *)(ar5_00 + 7);
            *(undefined8 *)(ar7 + 1) = uVar12;
            *(undefined8 *)(ar7 + -1) = uVar15;
            pfVar4 = ar7 + -3;
            *(undefined8 *)pfVar4 = uVar16;
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
            uVar16 = *(undefined8 *)(pfVar3 + 1);
            uVar12 = *(undefined8 *)(pfVar3 + 3);
            uVar15 = *(undefined8 *)(pfVar3 + 5);
            *(undefined8 *)(ar7 + 5) = *(undefined8 *)(pfVar3 + 7);
            *(undefined8 *)(ar7 + 1) = uVar15;
            *(undefined8 *)(ar7 + -1) = uVar12;
            pfVar4 = ar7 + -3;
            *(undefined8 *)pfVar4 = uVar16;
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
          uVar15 = *(undefined8 *)(ar5_00 + 1);
          uVar16 = *(undefined8 *)(ar5_00 + 3);
          uVar12 = *(undefined8 *)(ar5_00 + 5);
          *(undefined8 *)(ar7 + 5) = *(undefined8 *)(ar5_00 + 7);
          *(undefined8 *)(ar7 + 1) = uVar12;
          *(undefined8 *)(ar7 + -1) = uVar16;
          pfVar4 = ar7 + -3;
          *(undefined8 *)pfVar4 = uVar15;
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
          bVar17 = (double)CONCAT44(in_fr14,fVar14) < (double)CONCAT44(in_fr2,in_fr3);
        }
        if (!bVar17) {
          if (cVar19 == '\0') {
            in_fr3 = *ar5_00;
          }
          if (cVar18 == '\0') {
            bVar17 = fVar14 < in_fr3;
          }
          else {
            bVar17 = (double)CONCAT44(in_fr14,fVar14) < (double)CONCAT44(in_fr2,in_fr3);
          }
          if (!bVar17) {
            if (cVar19 == '\0') {
              in_fr3 = *ar6_00;
            }
            if (cVar18 == '\0') {
              bVar17 = fVar14 < in_fr3;
            }
            else {
              bVar17 = (double)CONCAT44(in_fr14,fVar14) < (double)CONCAT44(in_fr2,in_fr3);
            }
            if (!bVar17) goto LAB_8c227d10;
          }
        }
        ar7 = (float *)FUN_8c227d94(pfVar3,ar5_00,ar6_00,ar7);
        in_fr3 = extraout_fr3;
        in_fr2 = extraout_fr2;
      }
LAB_8c227d10:
      psStack_34 = psStack_34 + (ar6 >> 0xe & 3) + 1;
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
        uVar15 = *(undefined8 *)(ar6_00 + 1);
        uVar16 = *(undefined8 *)(ar6_00 + 3);
        uVar12 = *(undefined8 *)(ar6_00 + 5);
        *(undefined8 *)(ar7 + 5) = *(undefined8 *)(ar6_00 + 7);
        *(undefined8 *)(ar7 + 1) = uVar12;
        *(undefined8 *)(ar7 + -1) = uVar16;
        pfVar3 = ar7 + -3;
        *(undefined8 *)pfVar3 = uVar15;
      }
      pfVar3[-1] = -1.5845633e+29;
      iVar6 = iVar6 + iVar5 + 1;
      ar7 = pfVar3 + 7;
    }
    uStack_2c = uStack_2c - 1;
    if (uStack_2c == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar6;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar7;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c227bc4\n.set _FUN_8c227bc4, _FUN_8c227bc4_def\n");
