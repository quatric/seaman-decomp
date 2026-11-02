#include "../decls.h"
double * FUN_8c223eb8_def(undefined4 ar4,undefined4 ar5,uint ar6,double *ar7)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  short *psVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  double *pdVar14;
  double *a5;
  undefined4 *puVar15;
  int *piVar16;
  double in_dr0;
  float fVar17;
  float fVar18;
  float fVar21;
  double dVar19;
  undefined8 uVar20;
  double in_dr4;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double in_dr6;
  double dVar25;
  undefined4 uVar27;
  double in_dr8;
  undefined4 uVar29;
  double dVar28;
  undefined4 uVar30;
  double in_dr10;
  float fVar31;
  double in_dr12;
  double in_dr14;
  double in_xd0;
  double dVar32;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd10;
  double in_xd12;
  bool bVar33;
  char cVar34;
  char cVar35;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uVar26;
  
  cVar35 = '\0';
  cVar34 = '\0';
  uStack_20 = (int)((ulonglong)in_dr14 >> 0x20);
  uStack_24 = SUB84(in_dr12,0);
  uStack_28 = (int)((ulonglong)in_dr12 >> 0x20);
  piVar16 = &uStack_68;
  uStack_68 = ar4;
  uStack_3c = ar5;
  uStack_64 = (int)((ulonglong)in_dr4 >> 0x20);
  uStack_60 = SUB84(in_dr4,0);
  uStack_5c = (int)((ulonglong)in_dr6 >> 0x20);
  uStack_54 = SUB84(in_dr6,0);
  uStack_4c = (int)((ulonglong)in_dr8 >> 0x20);
  uStack_58 = SUB84(in_dr8,0);
  uStack_50 = (int)((ulonglong)in_dr10 >> 0x20);
  uStack_48 = SUB84(in_dr10,0);
  uStack_38 = ar6 & 0x3fff;
  iVar10 = 0;
  uStack_30 = 0x3f800000;
  iVar11 = 0;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    uStack_30 = 0xbf800000;
  }
  iStack_34 = (ar6 >> 0xe & 3) << 1;
  do {
    psVar12 = (short *)*piVar16;
    *piVar16 = (int)(psVar12 + 1);
    psVar4 = (short *)*piVar16;
    iVar13 = (int)*psVar12;
    *piVar16 = (int)(psVar4 + 1);
    pdVar5 = (double *)(*psVar4 * 0x40 + piVar16[0xb]);
    if (cVar35 == '\0') {
      in_dr14 = (double)CONCAT44(piVar16[0xe],SUB84(in_dr14,0));
    }
    else {
      in_dr14 = *(double *)(piVar16 + 0xe);
    }
    if (iVar13 < 0) {
      if (cVar34 == '\0') {
        in_dr14 = (double)CONCAT44(-(float)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = -in_dr14;
      }
      iVar13 = -iVar13;
    }
    psVar4 = (short *)*piVar16;
    iVar11 = iVar11 + iVar13;
    *piVar16 = (int)(psVar4 + 1);
    sVar1 = *psVar4;
    iVar13 = iVar13 + -2;
    if (cVar35 == '\0') {
      in_dr6 = (double)CONCAT44(piVar16[1],SUB84(in_dr6,0));
    }
    else {
      in_dr6 = *(double *)(piVar16 + 1);
    }
    iVar9 = 0;
    psVar4 = (short *)*piVar16;
    *piVar16 = (int)(psVar4 + 1);
    sVar2 = *psVar4;
    psVar4 = (short *)*piVar16;
    dVar22 = in_xd2;
    if (cVar35 == '\0') {
      dVar22 = (double)CONCAT44((float)(int)sVar1,SUB84(in_dr4,0));
    }
    *piVar16 = (int)(psVar4 + 1);
    fVar21 = (float)((ulonglong)in_dr6 >> 0x20);
    if (cVar34 == '\0') {
      dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * fVar21,SUB84(dVar22,0));
    }
    else {
      dVar22 = dVar22 * in_dr6;
    }
    dVar19 = in_xd2;
    if (cVar35 == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),(float)(int)sVar2);
      dVar19 = in_xd4;
    }
    in_xd4 = dVar19;
    if (cVar34 == '\0') {
      in_dr4 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) * fVar21);
    }
    else {
      in_dr4 = dVar22 * in_dr6;
    }
    a5 = (double *)(*psVar4 * 0x40 + piVar16[0xb]);
    psVar4 = (short *)*piVar16;
    *piVar16 = (int)(psVar4 + 1);
    sVar1 = *psVar4;
    psVar4 = (short *)*piVar16;
    *piVar16 = (int)(psVar4 + 1);
    dVar22 = in_xd2;
    if (cVar35 == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(float)(int)sVar1);
      dVar22 = in_xd12;
    }
    if (cVar34 == '\0') {
      fVar31 = SUB84(in_dr12,0) * fVar21;
    }
    else {
      fVar31 = SUB84(in_dr12 * in_dr6,0);
    }
    dVar19 = in_xd2;
    if (cVar35 == '\0') {
      dVar19 = (double)CONCAT44((float)(int)*psVar4,fVar31);
    }
    dVar25 = in_xd0;
    if (cVar34 == '\0') {
      in_dr12 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * fVar21,SUB84(dVar19,0));
    }
    else {
      in_dr12 = dVar19 * in_dr6;
    }
    do {
      uVar30 = SUB84(in_dr10,0);
      psVar4 = (short *)*piVar16;
      *piVar16 = (int)(psVar4 + 1);
      pdVar14 = (double *)(*psVar4 * 0x40 + piVar16[0xb]);
      psVar4 = (short *)*piVar16;
      *piVar16 = (int)(psVar4 + 1);
      if (cVar35 == '\0') {
        fVar21 = (float)(uint)piVar16[1];
      }
      else {
        fVar21 = (float)((ulonglong)*(undefined8 *)(piVar16 + 1) >> 0x20);
      }
      fVar31 = (float)(int)*psVar4;
      dVar19 = (double)CONCAT44(fVar21,fVar31);
      if (cVar34 == '\0') {
        dVar19 = (double)CONCAT44(fVar21,fVar31 * fVar21);
      }
      else {
        dVar19 = dVar19 * dVar19;
      }
      if (cVar35 == '\0') {
        piVar16[10] = SUB84(dVar19,0);
      }
      else {
        *(double *)(piVar16 + 10) = in_xd2;
      }
      psVar4 = (short *)*piVar16;
      fVar31 = (float)((ulonglong)dVar19 >> 0x20);
      *piVar16 = (int)(psVar4 + 1);
      uVar23 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      fVar21 = (float)(int)*psVar4;
      if (cVar34 == '\0') {
        in_dr0 = (double)CONCAT44(uVar23,fVar21 * fVar31);
      }
      else {
        in_dr0 = (double)CONCAT44(uVar23,fVar21) * (double)CONCAT44(fVar31,0x3f800000);
      }
      if (cVar35 == '\0') {
        piVar16[9] = SUB84(in_dr0,0);
        dVar19 = (double)CONCAT44(*(undefined4 *)pdVar5,0x3f800000);
      }
      else {
        *(double *)(piVar16 + 9) = dVar25;
        dVar19 = *pdVar5;
      }
      bVar3 = false;
      fVar21 = (float)((ulonglong)in_dr14 >> 0x20);
      if (cVar34 != '\0' || (float)((ulonglong)dVar19 >> 0x20) <= SUB84(dVar19,0)) {
LAB_8c22401e:
        bVar3 = true;
        in_dr6 = (double)CONCAT44(0x3f800000,SUB84(in_dr6,0));
        in_xd0 = dVar25;
      }
      else {
        if (cVar35 == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)a5,SUB84(dVar19,0));
        }
        else {
          dVar19 = *a5;
        }
        if (cVar34 != '\0' || (float)((ulonglong)dVar19 >> 0x20) <= SUB84(dVar19,0))
        goto LAB_8c22401e;
        if (cVar35 == '\0') {
          fVar31 = *(float *)pdVar14;
        }
        else {
          fVar31 = (float)((ulonglong)*pdVar14 >> 0x20);
        }
        dVar19 = (double)CONCAT44(fVar31,0x3f800000);
        if (cVar34 != '\0' || fVar31 <= 1.0) goto LAB_8c22401e;
        if (cVar35 == '\0') {
          fVar31 = *(float *)((int)a5 + 4);
          dVar19 = (double)CONCAT44(fVar31,*(undefined4 *)((int)pdVar5 + 4));
          in_dr8 = (double)CONCAT44(fVar31,SUB84(in_dr8,0));
        }
        else {
          dVar19 = *(double *)((int)a5 + 4);
          in_xd2 = *(double *)((int)pdVar5 + 4);
          fVar31 = (float)((ulonglong)dVar19 >> 0x20);
          in_dr8 = dVar19;
        }
        if (cVar34 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        if (cVar35 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(pdVar14 + 1));
          in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(a5 + 1));
        }
        else {
          in_xd2 = pdVar14[1];
          in_xd6 = a5[1];
        }
        fVar18 = SUB84(in_dr6,0);
        if (cVar34 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) - fVar18);
        }
        else {
          dVar19 = dVar19 - in_dr6;
        }
        in_xd0 = in_xd6;
        if (cVar35 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar18);
          in_xd0 = dVar25;
        }
        if (cVar34 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * dVar19;
        }
        if (cVar35 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(pdVar5 + 1));
        }
        else {
          in_xd2 = pdVar5[1];
        }
        if (cVar34 == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar19,0));
        }
        else {
          dVar25 = in_dr0 - dVar19;
        }
        if (cVar35 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                    *(undefined4 *)((int)pdVar14 + 4));
        }
        else {
          in_xd2 = *(double *)((int)pdVar14 + 4);
        }
        if (cVar34 == '\0') {
          fVar31 = SUB84(dVar19,0) - fVar31;
          fVar17 = SUB84(dVar25,0) * fVar31;
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),fVar17);
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - fVar17,fVar31);
        }
        else {
          in_dr0 = dVar25 * (dVar19 - in_dr8);
          dVar19 = (dVar19 - in_dr8) - in_dr0;
        }
        dVar25 = dVar19;
        if (cVar35 == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fVar18);
        }
        if (cVar34 == '\0') {
          in_dr6 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * fVar21,SUB84(dVar25,0));
        }
        else {
          in_dr6 = dVar25 * in_dr14;
        }
      }
      dVar19 = (double)((ulonglong)dVar19 & 0xffffffff00000000);
      if (cVar34 == '\0') {
        bVar33 = (float)((ulonglong)in_dr6 >> 0x20) < 0.0;
      }
      else {
        bVar33 = in_dr6 < dVar19;
      }
      uVar23 = SUB84(in_dr12,0);
      uVar27 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      if (bVar33) {
        if (iVar9 == 0) {
          if (cVar35 == '\0') {
            uVar26 = *(undefined4 *)((int)pdVar5 + 4);
            uVar29 = *(undefined4 *)(pdVar5 + 1);
            dVar19 = (double)CONCAT44(uVar29,SUB84(in_dr8,0));
            uVar24 = *(undefined4 *)((int)pdVar5 + 0xc);
            pdVar6 = pdVar5 + 2;
            *(int *)((int)ar7 + 0x14) = SUB84(in_dr4,0);
            *(int *)(ar7 + 2) = (int)((ulonglong)in_dr4 >> 0x20);
            *(undefined4 *)((int)ar7 + 0xc) = uVar24;
            *(undefined4 *)(ar7 + 1) = uVar29;
            pdVar8 = (double *)((int)ar7 + 4);
            *(undefined4 *)pdVar8 = uVar26;
          }
          else {
            dVar25 = *(double *)((int)pdVar5 + 4);
            dVar19 = *(double *)((int)pdVar5 + 0xc);
            in_xd6 = *(double *)((int)pdVar5 + 0x14);
            pdVar6 = (double *)((int)pdVar5 + 0x1c);
            ar7[2] = in_xd4;
            ar7[1] = in_dr4;
            *ar7 = in_xd6;
            ar7[-1] = dVar19;
            pdVar8 = ar7 + -2;
            *pdVar8 = dVar25;
          }
          uVar24 = SUB84(dVar19,0);
          *(undefined4 *)((int)pdVar8 + -4) = 0xe0000000;
          if (cVar35 == '\0') {
            dVar19 = (double)((ulonglong)*(uint *)pdVar6 << 0x20);
            pdVar6 = (double *)((int)pdVar6 + 4);
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),piVar16[2]);
            uVar30 = piVar16[4];
          }
          else {
            dVar19 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            in_xd0 = *(double *)(piVar16 + 2);
            in_xd10 = *(double *)(piVar16 + 4);
          }
          if (cVar34 == '\0') {
            fVar31 = SUB84(in_dr0,0) * (float)((ulonglong)dVar19 >> 0x20);
          }
          else {
            fVar31 = SUB84(in_dr0 * dVar19,0);
          }
          if (cVar35 == '\0') {
            uVar20 = CONCAT44(piVar16[3],SUB84(dVar19,0));
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar31);
            pdVar6 = (double *)((int)pdVar6 + 4);
            in_dr10 = (double)CONCAT44(piVar16[6],uVar30);
          }
          else {
            uVar20 = *(undefined8 *)(piVar16 + 3);
            dVar19 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            in_dr10 = *(double *)(piVar16 + 6);
          }
          if (cVar34 == '\0') {
            in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),
                                       (float)((ulonglong)dVar19 >> 0x20) *
                                       (float)((ulonglong)uVar20 >> 0x20) + SUB84(in_dr10,0));
          }
          if (cVar35 == '\0') {
            uVar20 = CONCAT44(piVar16[5],(int)uVar20);
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar19,0));
            pdVar6 = (double *)((int)pdVar6 + 4);
            uVar24 = piVar16[8];
          }
          else {
            uVar20 = *(undefined8 *)(piVar16 + 5);
            dVar19 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            in_xd8 = *(double *)(piVar16 + 8);
          }
          if (cVar34 == '\0') {
            in_dr10 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) *
                                       (float)((ulonglong)uVar20 >> 0x20) +
                                       (float)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0));
          }
          if (cVar35 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar19,0));
            pdVar6 = (double *)((int)pdVar6 + 4);
            dVar19 = (double)CONCAT44(piVar16[7],(int)uVar20);
          }
          else {
            in_dr0 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            dVar19 = *(double *)(piVar16 + 7);
          }
          if (cVar35 == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),uVar24);
            pdVar6 = pdVar6 + 3;
          }
          else {
            in_dr8 = *(double *)((int)pdVar6 + 0x14);
            pdVar6 = (double *)((int)pdVar6 + 0x1c);
          }
          if (cVar34 == '\0') {
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                      (float)((ulonglong)in_dr0 >> 0x20) *
                                      (float)((ulonglong)dVar19 >> 0x20) + SUB84(in_dr8,0));
          }
          if (cVar35 == '\0') {
            uVar30 = *(undefined4 *)pdVar6;
            *(undefined4 *)(pdVar8 + 7) = *(undefined4 *)((int)pdVar6 + 4);
            *(undefined4 *)((int)pdVar8 + 0x34) = uVar30;
            *(int *)(pdVar8 + 6) = (int)((ulonglong)in_dr8 >> 0x20);
            *(int *)(pdVar8 + 5) = SUB84(in_dr8,0);
            *(int *)((int)pdVar8 + 0x24) = (int)((ulonglong)in_dr10 >> 0x20);
            *(int *)(pdVar8 + 4) = SUB84(in_dr10,0);
            pdVar8 = (double *)((int)pdVar8 + 0x1c);
            *(int *)pdVar8 = SUB84(in_dr0,0);
          }
          else {
            in_xd6 = *pdVar6;
            *(double *)((int)pdVar8 + 0x34) = pdVar6[1];
            *(double *)((int)pdVar8 + 0x2c) = in_xd6;
            *(double *)((int)pdVar8 + 0x24) = in_dr8;
            pdVar8[3] = in_xd8;
            pdVar8[2] = in_dr10;
            pdVar8[1] = in_xd10;
            *pdVar8 = in_xd0;
          }
          iVar9 = 1;
          ar7 = pdVar8 + 4;
        }
        if (cVar35 == '\0') {
          uVar26 = *(undefined4 *)((int)a5 + 4);
          dVar28 = (double)CONCAT44(uVar26,SUB84(in_dr8,0));
          uVar30 = *(undefined4 *)(a5 + 1);
          uVar24 = *(undefined4 *)((int)a5 + 0xc);
          dVar25 = a5[1];
          pdVar6 = a5 + 2;
          *(undefined4 *)((int)ar7 + 0x14) = uVar27;
          *(undefined4 *)(ar7 + 2) = uVar23;
          *(undefined4 *)((int)ar7 + 0xc) = uVar24;
          *(undefined4 *)(ar7 + 1) = uVar30;
          pdVar8 = (double *)((int)ar7 + 4);
          *(undefined4 *)pdVar8 = uVar26;
        }
        else {
          dVar28 = *(double *)((int)a5 + 4);
          in_xd6 = *(double *)((int)a5 + 0xc);
          dVar25 = *(double *)((int)a5 + 0x14);
          pdVar6 = (double *)((int)a5 + 0x1c);
          ar7[2] = in_dr12;
          ar7[1] = dVar22;
          *ar7 = dVar25;
          ar7[-1] = in_xd6;
          pdVar8 = ar7 + -2;
          *pdVar8 = dVar28;
        }
        fVar31 = SUB84(dVar25,0);
        *(undefined4 *)((int)pdVar8 + -4) = 0xe0000000;
        if (cVar35 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)pdVar6);
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar25 = (double)CONCAT44(piVar16[2],SUB84(in_dr10,0));
          fVar31 = (float)(uint)piVar16[4];
        }
        else {
          in_xd2 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          dVar25 = *(double *)(piVar16 + 2);
          in_xd6 = *(double *)(piVar16 + 4);
        }
        if (cVar34 == '\0') {
          in_dr10 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar19,0),
                                     SUB84(dVar25,0));
        }
        else {
          in_dr10 = dVar25 * dVar19;
        }
        if (cVar35 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),piVar16[3]);
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(in_dr0,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
          in_dr8 = (double)CONCAT44(piVar16[6],SUB84(dVar28,0));
        }
        else {
          in_xd2 = *(double *)(piVar16 + 3);
          dVar25 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_dr8 = *(double *)(piVar16 + 6);
        }
        if (cVar34 == '\0') {
          fVar31 = (float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar19,0) + fVar31;
        }
        if (cVar35 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),piVar16[5]);
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar25,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
          in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),piVar16[8]);
        }
        else {
          in_xd2 = *(double *)(piVar16 + 5);
          dVar25 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_xd8 = *(double *)(piVar16 + 8);
        }
        if (cVar34 == '\0') {
          in_dr8 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar19,0) +
                                    (float)((ulonglong)in_dr8 >> 0x20),SUB84(in_dr8,0));
        }
        if (cVar35 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar25,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),piVar16[7]);
        }
        else {
          in_dr0 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_xd2 = *(double *)(piVar16 + 7);
        }
        if (cVar35 == '\0') {
          in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),
                                     *(undefined4 *)((int)pdVar6 + 0x14));
          pdVar6 = pdVar6 + 3;
        }
        else {
          in_xd10 = *(double *)((int)pdVar6 + 0x14);
          pdVar6 = (double *)((int)pdVar6 + 0x1c);
        }
        fVar18 = (float)((ulonglong)in_dr0 >> 0x20);
        if (cVar34 == '\0') {
          in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                    fVar18 * SUB84(dVar19,0) + SUB84(in_dr8,0));
        }
        if (cVar35 == '\0') {
          uVar30 = *(undefined4 *)pdVar6;
          in_dr0 = (double)CONCAT44(fVar18,uVar30);
          in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),fVar31);
          *(undefined4 *)(pdVar8 + 7) = *(undefined4 *)((int)pdVar6 + 4);
          *(undefined4 *)((int)pdVar8 + 0x34) = uVar30;
          *(int *)(pdVar8 + 6) = SUB84(in_dr10,0);
          *(int *)(pdVar8 + 5) = SUB84(in_dr8,0);
          *(int *)((int)pdVar8 + 0x24) = (int)((ulonglong)in_dr8 >> 0x20);
          *(float *)(pdVar8 + 4) = fVar31;
          pdVar8 = (double *)((int)pdVar8 + 0x1c);
          *(int *)pdVar8 = (int)((ulonglong)in_dr10 >> 0x20);
        }
        else {
          in_xd0 = *pdVar6;
          in_dr6 = pdVar6[1];
          *(double *)((int)pdVar8 + 0x34) = in_dr6;
          *(double *)((int)pdVar8 + 0x2c) = in_xd0;
          *(double *)((int)pdVar8 + 0x24) = in_xd10;
          pdVar8[3] = in_xd8;
          pdVar8[2] = in_dr8;
          pdVar8[1] = in_xd6;
          *pdVar8 = in_dr10;
        }
        ar7 = pdVar8 + 4;
        iVar9 = iVar9 + 1;
      }
      else if (iVar9 != 0) {
        if (cVar35 == '\0') {
          uVar24 = *(undefined4 *)((int)a5 + 4);
          uVar26 = *(undefined4 *)(a5 + 1);
          uVar29 = *(undefined4 *)((int)a5 + 0xc);
          pdVar6 = a5 + 2;
          *(undefined4 *)((int)ar7 + 0x14) = uVar27;
          *(undefined4 *)(ar7 + 2) = uVar23;
          *(undefined4 *)((int)ar7 + 0xc) = uVar29;
          *(undefined4 *)(ar7 + 1) = uVar26;
          pdVar8 = (double *)((int)ar7 + 4);
          *(undefined4 *)pdVar8 = uVar24;
        }
        else {
          in_xd6 = *(double *)((int)a5 + 4);
          dVar19 = *(double *)((int)a5 + 0xc);
          dVar25 = *(double *)((int)a5 + 0x14);
          pdVar6 = (double *)((int)a5 + 0x1c);
          ar7[2] = in_dr12;
          ar7[1] = dVar22;
          *ar7 = dVar25;
          ar7[-1] = dVar19;
          pdVar8 = ar7 + -2;
          *pdVar8 = in_xd6;
        }
        *(undefined4 *)((int)pdVar8 + -4) = 0xf0000000;
        if (cVar35 == '\0') {
          dVar19 = (double)((ulonglong)*(uint *)pdVar6 << 0x20);
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar25 = (double)CONCAT44(piVar16[2],piVar16[4]);
        }
        else {
          dVar19 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          dVar25 = *(double *)(piVar16 + 2);
          in_xd8 = *(double *)(piVar16 + 4);
        }
        if (cVar34 == '\0') {
          in_dr8 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) *
                                    (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar25,0));
        }
        else {
          in_dr8 = dVar25 * dVar19;
        }
        if (cVar35 == '\0') {
          uVar20 = CONCAT44(piVar16[3],SUB84(dVar19,0));
          pdVar7 = (double *)((int)pdVar6 + 4);
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,piVar16[6]);
        }
        else {
          uVar20 = *(undefined8 *)(piVar16 + 3);
          dVar19 = *pdVar6;
          pdVar7 = pdVar6 + 1;
          in_xd0 = *(double *)(piVar16 + 6);
        }
        if (cVar34 == '\0') {
          in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                    (float)((ulonglong)dVar19 >> 0x20) *
                                    (float)((ulonglong)uVar20 >> 0x20) + SUB84(in_dr8,0));
        }
        if (cVar35 == '\0') {
          uVar20 = CONCAT44(piVar16[5],(int)uVar20);
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar19,0));
          pdVar7 = (double *)((int)pdVar7 + 4);
          uVar30 = piVar16[8];
        }
        else {
          uVar20 = *(undefined8 *)(piVar16 + 5);
          dVar19 = *pdVar7;
          pdVar7 = pdVar7 + 1;
          in_xd10 = *(double *)(piVar16 + 8);
        }
        if (cVar34 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                  (float)((ulonglong)uVar20 >> 0x20) + SUB84(dVar19,0));
        }
        if (cVar35 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar19,0));
          pdVar7 = (double *)((int)pdVar7 + 4);
          dVar19 = (double)CONCAT44(piVar16[7],(int)uVar20);
        }
        else {
          in_dr0 = *pdVar7;
          pdVar7 = pdVar7 + 1;
          dVar19 = *(double *)(piVar16 + 7);
        }
        if (cVar35 == '\0') {
          in_dr10 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),uVar30);
          pdVar7 = pdVar7 + 3;
        }
        else {
          in_dr10 = *(double *)((int)pdVar7 + 0x14);
          pdVar7 = (double *)((int)pdVar7 + 0x1c);
        }
        if (cVar34 == '\0') {
          in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),
                                     (float)((ulonglong)in_dr0 >> 0x20) *
                                     (float)((ulonglong)dVar19 >> 0x20) + SUB84(in_dr10,0));
        }
        if (cVar35 == '\0') {
          uVar30 = *(undefined4 *)pdVar7;
          in_dr6 = *pdVar7;
          *(undefined4 *)(pdVar8 + 7) = *(undefined4 *)((int)pdVar7 + 4);
          *(undefined4 *)((int)pdVar8 + 0x34) = uVar30;
          *(int *)(pdVar8 + 6) = (int)((ulonglong)in_dr10 >> 0x20);
          *(int *)(pdVar8 + 5) = SUB84(in_dr10,0);
          *(int *)((int)pdVar8 + 0x24) = SUB84(in_dr0,0);
          *(int *)(pdVar8 + 4) = SUB84(in_dr8,0);
          pdVar8 = (double *)((int)pdVar8 + 0x1c);
          *(int *)pdVar8 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          in_xd6 = *pdVar7;
          in_dr6 = pdVar7[1];
          *(double *)((int)pdVar8 + 0x34) = in_dr6;
          *(double *)((int)pdVar8 + 0x2c) = in_xd6;
          *(double *)((int)pdVar8 + 0x24) = in_dr10;
          pdVar8[3] = in_xd10;
          pdVar8[2] = in_xd0;
          pdVar8[1] = in_xd8;
          *pdVar8 = in_dr8;
        }
        iVar10 = iVar10 + iVar9 + 1;
        iVar9 = 0;
        ar7 = pdVar8 + 4;
      }
      if (bVar3) {
        if (cVar35 == '\0') {
          fVar31 = *(float *)pdVar5;
        }
        else {
          fVar31 = (float)((ulonglong)*pdVar5 >> 0x20);
        }
        dVar19 = (double)CONCAT44(fVar31,0x3f800000);
        if (cVar34 == '\0' && fVar31 < 1.0) {
          if (cVar35 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)a5,0x3f800000);
          }
          else {
            dVar19 = *a5;
          }
          if (cVar34 == '\0' && (float)((ulonglong)dVar19 >> 0x20) < SUB84(dVar19,0)) {
            if (cVar35 == '\0') {
              fVar31 = *(float *)pdVar14;
            }
            else {
              fVar31 = (float)((ulonglong)*pdVar14 >> 0x20);
            }
            dVar19 = (double)CONCAT44(fVar31,0x3f800000);
            if (cVar34 == '\0' && fVar31 < 1.0) goto LAB_8c224246;
          }
        }
        if (cVar35 == '\0') {
          uVar30 = *(undefined4 *)((int)a5 + 0x24);
          in_dr8 = (double)CONCAT44(*(undefined4 *)a5,uVar30);
          in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 0x24),*(undefined4 *)pdVar5);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),uVar30);
        }
        else {
          in_dr8 = *a5;
          in_xd2 = *(double *)((int)a5 + 0x24);
          in_xd6 = *pdVar5;
          in_dr6 = *(double *)((int)pdVar5 + 0x24);
          uVar30 = SUB84(in_dr8,0);
          in_xd8 = in_xd2;
        }
        if (cVar34 == '\0') {
          fVar31 = SUB84(dVar19,0) * SUB84(in_dr6,0);
        }
        else {
          fVar31 = SUB84(dVar19 * in_dr6,0);
        }
        uVar24 = (undefined4)((ulonglong)in_dr8 >> 0x20);
        dVar19 = in_dr8;
        if (cVar35 == '\0') {
          dVar19 = (double)CONCAT44(uVar24,SUB84(in_dr0,0));
        }
        fVar18 = (float)((ulonglong)in_dr6 >> 0x20);
        if (cVar34 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * fVar18,SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * in_dr6;
        }
        if (cVar35 == '\0') {
          in_dr10 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 4),*(undefined4 *)(a5 + 4));
          dVar25 = (double)CONCAT44(uVar24,fVar31);
        }
        else {
          in_xd10 = a5[4];
          in_dr10 = pdVar5[4];
          dVar25 = in_dr8;
        }
        if (cVar34 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar25,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar25;
        }
        dVar28 = in_xd10;
        if (cVar35 == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(in_dr10,0));
          dVar28 = in_xd2;
        }
        fVar31 = (float)((ulonglong)in_dr10 >> 0x20);
        if (cVar34 == '\0') {
          dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * fVar31,SUB84(dVar25,0));
        }
        else {
          dVar25 = dVar25 * in_dr10;
        }
        dVar32 = in_xd8;
        if (cVar35 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),uVar30);
          dVar32 = in_xd0;
        }
        if (cVar34 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) * fVar31);
          fVar31 = SUB84(dVar25,0) * SUB84(in_dr6,0) - (float)((ulonglong)dVar25 >> 0x20);
        }
        else {
          dVar19 = dVar19 * in_dr10;
          fVar31 = SUB84(dVar25 * in_dr6 - dVar25 * in_dr6,0);
        }
        if (cVar35 == '\0') {
          dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 0x24),fVar31);
        }
        else {
          dVar25 = *(double *)((int)pdVar14 + 0x24);
        }
        if (cVar34 == '\0') {
          dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar25,0),
                                    SUB84(dVar25,0));
        }
        else {
          dVar25 = dVar25 * dVar25;
        }
        if (cVar35 == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),*(undefined4 *)(pdVar14 + 4));
        }
        else {
          dVar28 = pdVar14[4];
        }
        if (cVar34 == '\0') {
          dVar25 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar25,0) +
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0));
        }
        in_xd2 = in_xd10;
        if (cVar35 == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(in_dr10,0));
          in_xd2 = dVar28;
        }
        if (cVar34 == '\0') {
          fVar18 = SUB84(dVar25,0) * fVar18;
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),fVar18);
          fVar18 = SUB84(dVar19,0) - fVar18;
        }
        else {
          dVar25 = dVar25 * in_dr6;
          fVar18 = SUB84(dVar19 - dVar25,0);
        }
        if (cVar35 == '\0') {
          in_dr0 = (double)CONCAT44(fVar18,*(undefined4 *)pdVar14);
          in_xd0 = dVar32;
        }
        else {
          in_xd0 = *pdVar14;
          in_dr0 = dVar32;
        }
        if (cVar34 == '\0') {
          fVar21 = ((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr0,0) +
                   (float)((ulonglong)dVar25 >> 0x20)) * fVar21;
        }
        else {
          fVar21 = (float)((ulonglong)(dVar25 * in_dr14) >> 0x20);
        }
        dVar19 = (double)((ulonglong)(uint)fVar21 << 0x20);
        if (cVar34 == '\0' && fVar21 < 0.0) {
          if (cVar35 == '\0') {
            piVar16[-1] = piVar16[8];
            piVar16[-2] = piVar16[6];
            piVar16[-3] = piVar16[4];
            piVar16[-4] = piVar16[7];
            dVar19 = (double)((ulonglong)(uint)piVar16[5] << 0x20);
            puVar15 = piVar16 + -5;
            piVar16[-5] = piVar16[5];
            in_dr10 = (double)(ulonglong)(uint)piVar16[3];
            in_dr8 = (double)(ulonglong)(uint)piVar16[9];
            in_dr6 = (double)CONCAT44(uVar23,uVar27);
          }
          else {
            *(undefined8 *)(piVar16 + -2) = *(undefined8 *)(piVar16 + 8);
            *(undefined8 *)(piVar16 + -4) = *(undefined8 *)(piVar16 + 5);
            *(undefined8 *)(piVar16 + -6) = *(undefined8 *)(piVar16 + 2);
            *(undefined8 *)(piVar16 + -8) = *(undefined8 *)(piVar16 + 4);
            dVar19 = *(double *)(piVar16 + 1);
            puVar15 = piVar16 + -10;
            *(double *)(piVar16 + -10) = dVar19;
            in_xd10 = *(double *)(piVar16 + -2);
            in_dr10 = *(double *)(piVar16 + -3);
            in_xd8 = *(double *)(piVar16 + 4);
            in_dr8 = *(double *)(piVar16 + 5);
            in_dr6 = dVar22;
            in_xd6 = in_dr12;
          }
          ar7 = (double *)FUN_8c225098(pdVar5,a5,pdVar14,ar7);
          piVar16 = (int *)((int)puVar15 + 0x14);
        }
      }
LAB_8c224246:
      *piVar16 = *piVar16 + piVar16[0xd];
      if (cVar35 == '\0') {
        dVar25 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),piVar16[10]);
        in_xd12 = dVar22;
        dVar22 = (double)CONCAT44(SUB84(in_dr12,0),SUB84(in_dr4,0));
      }
      else {
        in_xd12 = *(double *)(piVar16 + 10);
        dVar25 = in_dr12;
      }
      iVar13 = iVar13 + -1;
      if (cVar34 == '\0') {
        in_dr14 = (double)CONCAT44(-(float)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = -in_dr14;
      }
      if (cVar35 == '\0') {
        in_dr12 = (double)CONCAT44(piVar16[9],SUB84(dVar25,0));
        in_dr4 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),(int)((ulonglong)dVar25 >> 0x20))
        ;
      }
      else {
        in_dr12 = *(double *)(piVar16 + 9);
        in_dr4 = dVar22;
        in_xd4 = dVar25;
      }
      pdVar5 = a5;
      a5 = pdVar14;
      dVar25 = in_xd0;
      dVar22 = in_xd12;
    } while (iVar13 != 0);
    if (iVar9 != 0) {
      pdVar5 = (double *)((int)pdVar14 + 4);
      if (cVar35 == '\0') {
        uVar30 = *(undefined4 *)pdVar5;
        uVar23 = *(undefined4 *)(pdVar14 + 1);
        dVar25 = *pdVar5;
        uVar27 = *(undefined4 *)((int)pdVar14 + 0xc);
        dVar22 = (double)CONCAT44(uVar27,SUB84(in_dr6,0));
        pdVar14 = pdVar14 + 2;
        *(int *)((int)ar7 + 0x14) = piVar16[9];
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),piVar16[10]);
        *(int *)(ar7 + 2) = piVar16[10];
        *(undefined4 *)((int)ar7 + 0xc) = uVar27;
        *(undefined4 *)(ar7 + 1) = uVar23;
        pdVar5 = (double *)((int)ar7 + 4);
        *(undefined4 *)pdVar5 = uVar30;
      }
      else {
        in_xd4 = *pdVar5;
        dVar25 = *(double *)((int)pdVar14 + 0xc);
        dVar22 = *(double *)((int)pdVar14 + 0x14);
        pdVar14 = (double *)((int)pdVar14 + 0x1c);
        ar7[2] = *(double *)(piVar16 + 9);
        in_xd2 = *(double *)(piVar16 + 10);
        ar7[1] = in_xd2;
        *ar7 = dVar22;
        ar7[-1] = dVar25;
        pdVar5 = ar7 + -2;
        *pdVar5 = in_xd4;
      }
      fVar31 = SUB84(dVar25,0);
      fVar21 = SUB84(dVar22,0);
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      if (cVar35 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)pdVar14);
        pdVar14 = (double *)((int)pdVar14 + 4);
        dVar22 = (double)CONCAT44(piVar16[2],SUB84(in_dr8,0));
        fVar21 = (float)(uint)piVar16[4];
      }
      else {
        in_xd2 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        dVar22 = *(double *)(piVar16 + 2);
        in_xd6 = *(double *)(piVar16 + 4);
      }
      fVar18 = SUB84(dVar19,0);
      if (cVar34 == '\0') {
        in_dr8 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * fVar18,SUB84(dVar22,0));
      }
      else {
        in_dr8 = dVar22 * dVar19;
      }
      if (cVar35 == '\0') {
        fVar18 = (float)(uint)piVar16[3];
        fVar17 = *(float *)pdVar14;
        pdVar14 = (double *)((int)pdVar14 + 4);
        fVar31 = (float)(uint)piVar16[6];
      }
      else {
        in_xd2 = *(double *)(piVar16 + 3);
        fVar17 = (float)((ulonglong)*pdVar14 >> 0x20);
        pdVar14 = pdVar14 + 1;
        in_xd4 = *(double *)(piVar16 + 6);
      }
      if (cVar34 == '\0') {
        fVar21 = fVar17 * fVar18 + fVar21;
      }
      if (cVar35 == '\0') {
        fVar18 = (float)(uint)piVar16[5];
        fVar17 = *(float *)pdVar14;
        pdVar14 = (double *)((int)pdVar14 + 4);
        in_dr10 = (double)CONCAT44(piVar16[8],SUB84(in_dr10,0));
      }
      else {
        in_xd2 = *(double *)(piVar16 + 5);
        fVar17 = (float)((ulonglong)*pdVar14 >> 0x20);
        pdVar14 = pdVar14 + 1;
        in_dr10 = *(double *)(piVar16 + 8);
      }
      if (cVar34 == '\0') {
        fVar31 = fVar17 * fVar18 + fVar31;
      }
      if (cVar35 == '\0') {
        in_dr0 = (double)((ulonglong)*(uint *)pdVar14 << 0x20);
        pdVar14 = (double *)((int)pdVar14 + 4);
        fVar18 = (float)(uint)piVar16[7];
      }
      else {
        in_dr0 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        in_xd2 = *(double *)(piVar16 + 7);
      }
      if (cVar35 == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 0x14),fVar21);
        pdVar14 = pdVar14 + 3;
      }
      else {
        in_dr6 = *(double *)((int)pdVar14 + 0x14);
        pdVar14 = (double *)((int)pdVar14 + 0x1c);
      }
      if (cVar34 == '\0') {
        in_dr10 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * fVar18 +
                                   (float)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0));
      }
      if (cVar35 == '\0') {
        uVar23 = (undefined4)((ulonglong)in_dr8 >> 0x20);
        uVar30 = *(undefined4 *)pdVar14;
        in_dr8 = (double)CONCAT44(uVar23,uVar30);
        in_dr4 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 4),fVar31);
        *(undefined4 *)(pdVar5 + 7) = *(undefined4 *)((int)pdVar14 + 4);
        *(undefined4 *)((int)pdVar5 + 0x34) = uVar30;
        *(int *)(pdVar5 + 6) = (int)((ulonglong)in_dr6 >> 0x20);
        *(int *)(pdVar5 + 5) = (int)((ulonglong)in_dr10 >> 0x20);
        *(float *)((int)pdVar5 + 0x24) = fVar31;
        *(int *)(pdVar5 + 4) = SUB84(in_dr6,0);
        pdVar5 = (double *)((int)pdVar5 + 0x1c);
        *(undefined4 *)pdVar5 = uVar23;
      }
      else {
        in_xd8 = *pdVar14;
        in_dr4 = pdVar14[1];
        *(double *)((int)pdVar5 + 0x34) = in_dr4;
        *(double *)((int)pdVar5 + 0x2c) = in_xd8;
        *(double *)((int)pdVar5 + 0x24) = in_dr6;
        pdVar5[3] = in_dr10;
        pdVar5[2] = in_xd4;
        pdVar5[1] = in_xd6;
        *pdVar5 = in_dr8;
      }
      iVar10 = iVar10 + iVar9 + 1;
      ar7 = pdVar5 + 4;
    }
    iVar13 = piVar16[0xc];
    piVar16[0xc] = iVar13 + -1;
    if (iVar13 + -1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar10;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar11;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c223eb8\n.set _FUN_8c223eb8, _FUN_8c223eb8_def\n");
