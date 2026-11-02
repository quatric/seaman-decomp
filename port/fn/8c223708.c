#include "../decls.h"
double * FUN_8c223708_def(undefined4 ar4,undefined4 ar5,uint ar6,double *ar7)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  short *psVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  double *pdVar13;
  double *a5;
  double *pdVar14;
  double in_dr0;
  float fVar15;
  float fVar18;
  double dVar16;
  float fVar19;
  double dVar17;
  double in_dr4;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double in_dr6;
  undefined4 uVar23;
  undefined4 uVar24;
  double in_dr8;
  double dVar25;
  undefined8 uVar26;
  undefined4 uVar28;
  double in_dr10;
  double dVar29;
  float fVar30;
  double in_dr12;
  double in_dr14;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd10;
  double in_xd12;
  bool bVar31;
  char cVar32;
  char cVar33;
  double dStack_6c;
  undefined8 uStack_64;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  uint auStack_3c [5];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uVar27;
  
  cVar33 = '\0';
  cVar32 = '\0';
  uStack_20 = (int)((ulonglong)in_dr14 >> 0x20);
  uStack_24 = SUB84(in_dr12,0);
  uStack_28 = (int)((ulonglong)in_dr12 >> 0x20);
  pdVar14 = (double *)auStack_5c;
  (*(uint*)((uchar*)&auStack_5c+0)) = ar4;
  auStack_3c[0] = ar5;
  (*(uint*)((uchar*)&auStack_5c+4)) = (int)((ulonglong)in_dr4 >> 0x20);
  (*(uint*)((uchar*)&auStack_54+0)) = SUB84(in_dr4,0);
  (*(uint*)((uchar*)&auStack_54+4)) = (int)((ulonglong)in_dr6 >> 0x20);
  (*(uint*)((uchar*)&auStack_4c+0)) = SUB84(in_dr6,0);
  (*(uint*)((uchar*)&auStack_4c+4)) = (int)((ulonglong)in_dr8 >> 0x20);
  auStack_3c[1] = ar6 & 0x3fff;
  iVar9 = 0;
  auStack_3c[3] = 0x3f800000;
  iVar10 = 0;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    auStack_3c[3] = 0xbf800000;
  }
  auStack_3c[2] = (ar6 >> 0xe & 3) << 1;
  do {
    psVar11 = *(short **)pdVar14;
    *(short **)pdVar14 = psVar11 + 1;
    psVar4 = *(short **)pdVar14;
    iVar12 = (int)*psVar11;
    *(short **)pdVar14 = psVar4 + 1;
    pdVar5 = (double *)(*psVar4 * 0x40 + *(int *)((int)pdVar14 + 0x20));
    if (cVar33 == '\0') {
      in_dr14 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 0x2c),SUB84(in_dr14,0));
    }
    else {
      in_dr14 = *(double *)((int)pdVar14 + 0x2c);
    }
    if (iVar12 < 0) {
      if (cVar32 == '\0') {
        in_dr14 = (double)CONCAT44(-(float)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = -in_dr14;
      }
      iVar12 = -iVar12;
    }
    psVar4 = *(short **)pdVar14;
    iVar10 = iVar10 + iVar12;
    *(short **)pdVar14 = psVar4 + 1;
    sVar1 = *psVar4;
    iVar12 = iVar12 + -2;
    if (cVar33 == '\0') {
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 4),SUB84(in_dr6,0));
    }
    else {
      in_dr6 = *(double *)((int)pdVar14 + 4);
    }
    iVar8 = 0;
    psVar4 = *(short **)pdVar14;
    *(short **)pdVar14 = psVar4 + 1;
    sVar2 = *psVar4;
    psVar4 = *(short **)pdVar14;
    dVar20 = in_xd2;
    if (cVar33 == '\0') {
      dVar20 = (double)CONCAT44((float)(int)sVar1,SUB84(in_dr4,0));
    }
    *(short **)pdVar14 = psVar4 + 1;
    fVar18 = (float)((ulonglong)in_dr6 >> 0x20);
    if (cVar32 == '\0') {
      dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar18,SUB84(dVar20,0));
    }
    else {
      dVar20 = dVar20 * in_dr6;
    }
    dVar16 = in_xd2;
    if (cVar33 == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),(float)(int)sVar2);
      dVar16 = in_xd4;
    }
    in_xd4 = dVar16;
    if (cVar32 == '\0') {
      in_dr4 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) * fVar18);
    }
    else {
      in_dr4 = dVar20 * in_dr6;
    }
    a5 = (double *)(*psVar4 * 0x40 + *(int *)((int)pdVar14 + 0x20));
    psVar4 = *(short **)pdVar14;
    *(short **)pdVar14 = psVar4 + 1;
    sVar1 = *psVar4;
    psVar4 = *(short **)pdVar14;
    *(short **)pdVar14 = psVar4 + 1;
    dVar20 = in_xd2;
    if (cVar33 == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(float)(int)sVar1);
      dVar20 = in_xd12;
    }
    if (cVar32 == '\0') {
      fVar30 = SUB84(in_dr12,0) * fVar18;
    }
    else {
      fVar30 = SUB84(in_dr12 * in_dr6,0);
    }
    dVar16 = in_xd2;
    if (cVar33 == '\0') {
      dVar16 = (double)CONCAT44((float)(int)*psVar4,fVar30);
    }
    dVar25 = in_xd0;
    if (cVar32 == '\0') {
      in_dr12 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar18,SUB84(dVar16,0));
    }
    else {
      in_dr12 = dVar16 * in_dr6;
    }
    do {
      uVar28 = SUB84(in_dr10,0);
      psVar4 = *(short **)pdVar14;
      *(short **)pdVar14 = psVar4 + 1;
      pdVar13 = (double *)(*psVar4 * 0x40 + *(int *)(pdVar14 + 4));
      psVar4 = *(short **)pdVar14;
      *(short **)pdVar14 = psVar4 + 1;
      if (cVar33 == '\0') {
        fVar18 = *(float *)((int)pdVar14 + 4);
      }
      else {
        fVar18 = (float)((ulonglong)*(undefined8 *)((int)pdVar14 + 4) >> 0x20);
      }
      fVar30 = (float)(int)*psVar4;
      dVar16 = (double)CONCAT44(fVar18,fVar30);
      if (cVar32 == '\0') {
        dVar16 = (double)CONCAT44(fVar18,fVar30 * fVar18);
      }
      else {
        dVar16 = dVar16 * dVar16;
      }
      if (cVar33 == '\0') {
        *(int *)(pdVar14 + 3) = SUB84(dVar16,0);
      }
      else {
        pdVar14[3] = in_xd2;
      }
      psVar4 = *(short **)pdVar14;
      fVar30 = (float)((ulonglong)dVar16 >> 0x20);
      *(short **)pdVar14 = psVar4 + 1;
      uVar21 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      fVar18 = (float)(int)*psVar4;
      if (cVar32 == '\0') {
        in_dr0 = (double)CONCAT44(uVar21,fVar18 * fVar30);
      }
      else {
        in_dr0 = (double)CONCAT44(uVar21,fVar18) * (double)CONCAT44(fVar30,0x3f800000);
      }
      if (cVar33 == '\0') {
        *(int *)((int)pdVar14 + 0x1c) = SUB84(in_dr0,0);
        dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,0x3f800000);
      }
      else {
        *(double *)((int)pdVar14 + 0x1c) = dVar25;
        dVar16 = *pdVar5;
      }
      bVar3 = false;
      fVar30 = (float)((ulonglong)in_dr14 >> 0x20);
      fVar18 = SUB84(in_dr6,0);
      if (cVar32 != '\0' || (float)((ulonglong)dVar16 >> 0x20) <= SUB84(dVar16,0)) {
LAB_8c223862:
        bVar3 = true;
        in_dr6 = (double)CONCAT44(0x3f800000,fVar18);
        in_xd0 = dVar25;
      }
      else {
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)a5,SUB84(dVar16,0));
        }
        else {
          dVar16 = *a5;
        }
        if (cVar32 != '\0' || (float)((ulonglong)dVar16 >> 0x20) <= SUB84(dVar16,0))
        goto LAB_8c223862;
        if (cVar33 == '\0') {
          fVar19 = *(float *)pdVar13;
        }
        else {
          fVar19 = (float)((ulonglong)*pdVar13 >> 0x20);
        }
        dVar16 = (double)CONCAT44(fVar19,0x3f800000);
        if (cVar32 != '\0' || fVar19 <= 1.0) goto LAB_8c223862;
        if (cVar33 == '\0') {
          fVar18 = *(float *)((int)a5 + 4);
          in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),fVar18);
          dVar16 = (double)CONCAT44(fVar18,*(undefined4 *)((int)pdVar5 + 4));
        }
        else {
          dVar16 = *(double *)((int)a5 + 4);
          in_xd2 = *(double *)((int)pdVar5 + 4);
          in_xd6 = dVar16;
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(pdVar13 + 1));
          in_dr8 = (double)CONCAT44(*(undefined4 *)(a5 + 1),SUB84(in_dr8,0));
        }
        else {
          in_xd2 = pdVar13[1];
          in_dr8 = a5[1];
        }
        fVar19 = (float)((ulonglong)in_dr8 >> 0x20);
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) - fVar19);
        }
        else {
          dVar16 = dVar16 - in_dr8;
        }
        in_xd0 = in_dr8;
        if (cVar33 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar19);
          in_xd0 = dVar25;
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar16;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(pdVar5 + 1));
        }
        else {
          in_xd2 = pdVar5[1];
        }
        if (cVar32 == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar16,0));
        }
        else {
          dVar25 = in_dr0 - dVar16;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    *(undefined4 *)((int)pdVar13 + 4));
        }
        else {
          in_xd2 = *(double *)((int)pdVar13 + 4);
        }
        if (cVar32 == '\0') {
          fVar15 = SUB84(dVar16,0) - fVar18;
          fVar19 = SUB84(dVar25,0) * fVar15;
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),fVar19);
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar19,fVar15);
        }
        else {
          in_dr0 = dVar25 * (dVar16 - in_dr6);
          dVar16 = (dVar16 - in_dr6) - in_dr0;
        }
        dVar25 = dVar16;
        if (cVar33 == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),fVar18);
        }
        if (cVar32 == '\0') {
          in_dr6 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * fVar30,SUB84(dVar25,0));
        }
        else {
          in_dr6 = dVar25 * in_dr14;
        }
      }
      dVar16 = (double)((ulonglong)dVar16 & 0xffffffff00000000);
      if (cVar32 == '\0') {
        bVar31 = (float)((ulonglong)in_dr6 >> 0x20) < 0.0;
      }
      else {
        bVar31 = in_dr6 < dVar16;
      }
      uVar21 = SUB84(in_dr12,0);
      uVar24 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      if (bVar31) {
        if (iVar8 == 0) {
          if (cVar33 == '\0') {
            uVar23 = *(undefined4 *)((int)pdVar5 + 4);
            uVar27 = *(undefined4 *)(pdVar5 + 1);
            dVar25 = (double)CONCAT44(uVar27,SUB84(in_dr8,0));
            uVar22 = *(undefined4 *)((int)pdVar5 + 0xc);
            pdVar6 = pdVar5 + 2;
            *(int *)((int)ar7 + 0x14) = SUB84(in_dr4,0);
            *(int *)(ar7 + 2) = (int)((ulonglong)in_dr4 >> 0x20);
            *(undefined4 *)((int)ar7 + 0xc) = uVar22;
            *(undefined4 *)(ar7 + 1) = uVar27;
            pdVar7 = (double *)((int)ar7 + 4);
            *(undefined4 *)pdVar7 = uVar23;
          }
          else {
            dVar16 = *(double *)((int)pdVar5 + 4);
            dVar25 = *(double *)((int)pdVar5 + 0xc);
            in_xd6 = *(double *)((int)pdVar5 + 0x14);
            pdVar6 = (double *)((int)pdVar5 + 0x1c);
            ar7[2] = in_xd4;
            ar7[1] = in_dr4;
            *ar7 = in_xd6;
            uVar27 = (undefined4)((ulonglong)dVar25 >> 0x20);
            ar7[-1] = dVar25;
            pdVar7 = ar7 + -2;
            *pdVar7 = dVar16;
          }
          *(undefined4 *)((int)pdVar7 + -4) = 0xe0000000;
          if (cVar33 == '\0') {
            dVar17 = (double)((ulonglong)*(uint *)pdVar6 << 0x20);
            pdVar6 = (double *)((int)pdVar6 + 4);
            dVar16 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 1),SUB84(in_dr0,0));
            uVar28 = *(undefined4 *)((int)pdVar14 + 0xc);
          }
          else {
            dVar17 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            dVar16 = pdVar14[1];
            in_xd10 = *(double *)((int)pdVar14 + 0xc);
          }
          if (cVar32 == '\0') {
            in_dr0 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) *
                                      (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
          }
          else {
            in_dr0 = dVar16 * dVar17;
          }
          if (cVar33 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar17,0));
            pdVar6 = (double *)((int)pdVar6 + 4);
            dVar17 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 2),uVar28);
          }
          else {
            dVar16 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            dVar17 = pdVar14[2];
          }
          if (cVar32 == '\0') {
            dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                      SUB84(dVar17,0) + (float)((ulonglong)dVar16 >> 0x20));
          }
          else {
            dVar17 = dVar17 + dVar16;
          }
          if (cVar33 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar16,0));
            pdVar6 = (double *)((int)pdVar6 + 4);
            dVar25 = (double)CONCAT44(uVar27,*(undefined4 *)((int)pdVar14 + 0x14));
          }
          else {
            dVar16 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            in_xd8 = *(double *)((int)pdVar14 + 0x14);
          }
          if (cVar32 == '\0') {
            in_dr10 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) +
                                       (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar17,0));
          }
          else {
            in_dr10 = dVar17 + dVar16;
          }
          if (cVar33 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar16,0));
            pdVar6 = (double *)((int)pdVar6 + 4);
          }
          else {
            dVar16 = *pdVar6;
            pdVar6 = pdVar6 + 1;
          }
          if (cVar32 == '\0') {
            fVar18 = SUB84(dVar25,0) + (float)((ulonglong)dVar16 >> 0x20);
          }
          else {
            fVar18 = SUB84(dVar25 + dVar16,0);
          }
          if (cVar33 == '\0') {
            uVar27 = *(undefined4 *)((int)pdVar6 + 0x14);
            uVar28 = *(undefined4 *)(pdVar6 + 3);
            *(undefined4 *)(pdVar7 + 7) = *(undefined4 *)((int)pdVar6 + 0x1c);
            *(undefined4 *)((int)pdVar7 + 0x34) = uVar28;
            *(undefined4 *)(pdVar7 + 6) = uVar27;
            *(float *)(pdVar7 + 5) = fVar18;
            *(int *)((int)pdVar7 + 0x24) = (int)((ulonglong)in_dr10 >> 0x20);
            *(int *)(pdVar7 + 4) = SUB84(in_dr10,0);
            pdVar7 = (double *)((int)pdVar7 + 0x1c);
            *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            uVar26 = *(undefined8 *)((int)pdVar6 + 0x14);
            in_xd6 = *(double *)((int)pdVar6 + 0x1c);
            *(undefined8 *)((int)pdVar7 + 0x34) = *(undefined8 *)((int)pdVar6 + 0x24);
            *(double *)((int)pdVar7 + 0x2c) = in_xd6;
            *(undefined8 *)((int)pdVar7 + 0x24) = uVar26;
            pdVar7[3] = in_xd8;
            pdVar7[2] = in_dr10;
            pdVar7[1] = in_xd10;
            *pdVar7 = in_dr0;
          }
          iVar8 = 1;
          ar7 = pdVar7 + 4;
        }
        if (cVar33 == '\0') {
          uVar28 = *(undefined4 *)((int)a5 + 4);
          uVar27 = *(undefined4 *)(a5 + 1);
          dVar25 = (double)CONCAT44(uVar28,uVar27);
          uVar22 = *(undefined4 *)((int)a5 + 0xc);
          pdVar6 = a5 + 2;
          *(undefined4 *)((int)ar7 + 0x14) = uVar24;
          *(undefined4 *)(ar7 + 2) = uVar21;
          *(undefined4 *)((int)ar7 + 0xc) = uVar22;
          *(undefined4 *)(ar7 + 1) = uVar27;
          pdVar7 = (double *)((int)ar7 + 4);
          *(undefined4 *)pdVar7 = uVar28;
        }
        else {
          dVar25 = *(double *)((int)a5 + 4);
          in_xd6 = *(double *)((int)a5 + 0xc);
          dVar17 = *(double *)((int)a5 + 0x14);
          pdVar6 = (double *)((int)a5 + 0x1c);
          ar7[2] = in_dr12;
          ar7[1] = dVar20;
          *ar7 = dVar17;
          ar7[-1] = in_xd6;
          uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
          pdVar7 = ar7 + -2;
          *pdVar7 = dVar25;
        }
        *(undefined4 *)((int)pdVar7 + -4) = 0xe0000000;
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)pdVar6);
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar17 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 1),*(undefined4 *)((int)pdVar14 + 0xc)
                                   );
        }
        else {
          in_xd2 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          dVar17 = pdVar14[1];
          in_xd8 = *(double *)((int)pdVar14 + 0xc);
        }
        if (cVar32 == '\0') {
          dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar16,0),
                                    SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 * dVar16;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)pdVar6);
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 2),SUB84(in_dr10,0));
        }
        else {
          in_xd2 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          dVar29 = pdVar14[2];
        }
        if (cVar32 == '\0') {
          in_dr8 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0) + SUB84(dVar16,0));
        }
        else {
          in_dr8 = dVar17 + dVar16;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)pdVar6);
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar25 = (double)CONCAT44(uVar28,*(undefined4 *)((int)pdVar14 + 0x14));
        }
        else {
          in_xd2 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_xd6 = *(double *)((int)pdVar14 + 0x14);
        }
        if (cVar32 == '\0') {
          in_dr10 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar16,0),
                                     SUB84(dVar29,0));
        }
        else {
          in_dr10 = dVar29 + dVar16;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)pdVar6);
          pdVar6 = (double *)((int)pdVar6 + 4);
        }
        else {
          in_xd2 = *pdVar6;
          pdVar6 = pdVar6 + 1;
        }
        if (cVar32 == '\0') {
          fVar18 = SUB84(dVar25,0) + SUB84(dVar16,0);
        }
        else {
          fVar18 = SUB84(dVar25 + dVar16,0);
        }
        if (cVar33 == '\0') {
          uVar28 = *(undefined4 *)((int)pdVar6 + 0x14);
          in_dr0 = (double)CONCAT44(uVar28,SUB84(in_dr0,0));
          uVar22 = (undefined4)((ulonglong)in_dr10 >> 0x20);
          uVar27 = *(undefined4 *)(pdVar6 + 3);
          in_dr10 = (double)CONCAT44(uVar22,uVar27);
          in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x1c),fVar18);
          *(undefined4 *)(pdVar7 + 7) = *(undefined4 *)((int)pdVar6 + 0x1c);
          *(undefined4 *)((int)pdVar7 + 0x34) = uVar27;
          *(undefined4 *)(pdVar7 + 6) = uVar28;
          *(float *)(pdVar7 + 5) = fVar18;
          *(undefined4 *)((int)pdVar7 + 0x24) = uVar22;
          *(int *)(pdVar7 + 4) = SUB84(in_dr8,0);
          pdVar7 = (double *)((int)pdVar7 + 0x1c);
          *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          in_dr0 = *(double *)((int)pdVar6 + 0x14);
          in_xd10 = *(double *)((int)pdVar6 + 0x1c);
          in_dr6 = *(double *)((int)pdVar6 + 0x24);
          *(double *)((int)pdVar7 + 0x34) = in_dr6;
          *(double *)((int)pdVar7 + 0x2c) = in_xd10;
          *(double *)((int)pdVar7 + 0x24) = in_dr0;
          pdVar7[3] = in_xd6;
          pdVar7[2] = in_dr10;
          pdVar7[1] = in_xd8;
          *pdVar7 = in_dr8;
        }
        ar7 = pdVar7 + 4;
        iVar8 = iVar8 + 1;
      }
      else if (iVar8 != 0) {
        if (cVar33 == '\0') {
          uVar27 = *(undefined4 *)((int)a5 + 4);
          dVar25 = (double)CONCAT44(uVar27,SUB84(in_dr8,0));
          uVar22 = *(undefined4 *)(a5 + 1);
          uVar23 = *(undefined4 *)((int)a5 + 0xc);
          pdVar6 = a5 + 2;
          *(undefined4 *)((int)ar7 + 0x14) = uVar24;
          *(undefined4 *)(ar7 + 2) = uVar21;
          *(undefined4 *)((int)ar7 + 0xc) = uVar23;
          *(undefined4 *)(ar7 + 1) = uVar22;
          pdVar7 = (double *)((int)ar7 + 4);
          *(undefined4 *)pdVar7 = uVar27;
        }
        else {
          dVar25 = *(double *)((int)a5 + 4);
          in_xd6 = *(double *)((int)a5 + 0xc);
          dVar16 = *(double *)((int)a5 + 0x14);
          pdVar6 = (double *)((int)a5 + 0x1c);
          ar7[2] = in_dr12;
          ar7[1] = dVar20;
          *ar7 = dVar16;
          ar7[-1] = in_xd6;
          uVar27 = (undefined4)((ulonglong)dVar25 >> 0x20);
          pdVar7 = ar7 + -2;
          *pdVar7 = dVar25;
        }
        *(undefined4 *)((int)pdVar7 + -4) = 0xf0000000;
        if (cVar33 == '\0') {
          dVar17 = (double)((ulonglong)*(uint *)pdVar6 << 0x20);
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar16 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 1),SUB84(in_dr0,0));
          uVar28 = *(undefined4 *)((int)pdVar14 + 0xc);
        }
        else {
          dVar17 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          dVar16 = pdVar14[1];
          in_xd10 = *(double *)((int)pdVar14 + 0xc);
        }
        if (cVar32 == '\0') {
          in_dr0 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) *
                                    (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
        }
        else {
          in_dr0 = dVar16 * dVar17;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar17,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar17 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 2),uVar28);
        }
        else {
          dVar16 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          dVar17 = pdVar14[2];
        }
        if (cVar32 == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0) + (float)((ulonglong)dVar16 >> 0x20));
        }
        else {
          dVar17 = dVar17 + dVar16;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar16,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
          dVar25 = (double)CONCAT44(uVar27,*(undefined4 *)((int)pdVar14 + 0x14));
        }
        else {
          dVar16 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_xd8 = *(double *)((int)pdVar14 + 0x14);
        }
        if (cVar32 == '\0') {
          in_dr10 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) +
                                     (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar17,0));
        }
        else {
          in_dr10 = dVar17 + dVar16;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar16,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
        }
        else {
          dVar16 = *pdVar6;
          pdVar6 = pdVar6 + 1;
        }
        if (cVar32 == '\0') {
          fVar18 = SUB84(dVar25,0) + (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          fVar18 = SUB84(dVar25 + dVar16,0);
        }
        if (cVar33 == '\0') {
          uVar27 = *(undefined4 *)((int)pdVar6 + 0x14);
          in_dr8 = (double)CONCAT44(uVar27,fVar18);
          uVar28 = *(undefined4 *)(pdVar6 + 3);
          in_dr6 = pdVar6[3];
          *(undefined4 *)(pdVar7 + 7) = *(undefined4 *)((int)pdVar6 + 0x1c);
          *(undefined4 *)((int)pdVar7 + 0x34) = uVar28;
          *(undefined4 *)(pdVar7 + 6) = uVar27;
          *(float *)(pdVar7 + 5) = fVar18;
          *(int *)((int)pdVar7 + 0x24) = (int)((ulonglong)in_dr10 >> 0x20);
          *(int *)(pdVar7 + 4) = SUB84(in_dr10,0);
          pdVar7 = (double *)((int)pdVar7 + 0x1c);
          *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr8 = *(double *)((int)pdVar6 + 0x14);
          in_xd6 = *(double *)((int)pdVar6 + 0x1c);
          in_dr6 = *(double *)((int)pdVar6 + 0x24);
          *(double *)((int)pdVar7 + 0x34) = in_dr6;
          *(double *)((int)pdVar7 + 0x2c) = in_xd6;
          *(double *)((int)pdVar7 + 0x24) = in_dr8;
          pdVar7[3] = in_xd8;
          pdVar7[2] = in_dr10;
          pdVar7[1] = in_xd10;
          *pdVar7 = in_dr0;
        }
        iVar9 = iVar9 + iVar8 + 1;
        iVar8 = 0;
        ar7 = pdVar7 + 4;
      }
      if (bVar3) {
        if (cVar33 == '\0') {
          fVar18 = *(float *)pdVar5;
        }
        else {
          fVar18 = (float)((ulonglong)*pdVar5 >> 0x20);
        }
        dVar16 = (double)CONCAT44(fVar18,0x3f800000);
        if (cVar32 == '\0' && fVar18 < 1.0) {
          if (cVar33 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)a5,0x3f800000);
          }
          else {
            dVar16 = *a5;
          }
          if (cVar32 == '\0' && (float)((ulonglong)dVar16 >> 0x20) < SUB84(dVar16,0)) {
            if (cVar33 == '\0') {
              fVar18 = *(float *)pdVar13;
            }
            else {
              fVar18 = (float)((ulonglong)*pdVar13 >> 0x20);
            }
            dVar16 = (double)CONCAT44(fVar18,0x3f800000);
            if (cVar32 == '\0' && fVar18 < 1.0) goto LAB_8c223a54;
          }
        }
        if (cVar33 == '\0') {
          uVar28 = *(undefined4 *)((int)a5 + 0x24);
          in_dr10 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)a5);
          in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                    *(undefined4 *)((int)pdVar5 + 0x24));
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),uVar28);
          in_dr6 = (double)CONCAT44(uVar28,SUB84(in_dr6,0));
        }
        else {
          in_xd10 = *a5;
          in_xd2 = *(double *)((int)a5 + 0x24);
          in_dr10 = *pdVar5;
          in_xd8 = *(double *)((int)pdVar5 + 0x24);
          uVar28 = (undefined4)((ulonglong)in_xd2 >> 0x20);
          in_dr6 = in_xd2;
        }
        fVar18 = (float)((ulonglong)in_dr10 >> 0x20);
        if (cVar32 == '\0') {
          fVar19 = SUB84(dVar16,0) * fVar18;
        }
        else {
          fVar19 = SUB84(dVar16 * in_dr10,0);
        }
        dVar16 = in_xd10;
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44(SUB84(in_dr10,0),SUB84(in_dr0,0));
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(in_dr8,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * in_dr8;
        }
        if (cVar33 == '\0') {
          in_dr8 = (double)CONCAT44(*(undefined4 *)(a5 + 4),SUB84(in_dr8,0));
          in_dr6 = (double)CONCAT44(uVar28,*(undefined4 *)(pdVar5 + 4));
          dVar25 = (double)CONCAT44(SUB84(in_dr10,0),fVar19);
        }
        else {
          in_dr8 = a5[4];
          in_xd6 = pdVar5[4];
          dVar25 = in_xd10;
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar25,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar25;
        }
        uVar28 = (undefined4)((ulonglong)in_dr8 >> 0x20);
        dVar17 = in_dr8;
        if (cVar33 == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),uVar28);
          dVar17 = in_xd2;
        }
        if (cVar32 == '\0') {
          dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * SUB84(in_dr6,0),
                                    SUB84(dVar25,0));
        }
        else {
          dVar25 = dVar25 * in_dr6;
        }
        dVar29 = in_dr6;
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    (int)((ulonglong)in_dr6 >> 0x20));
          dVar29 = in_xd0;
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    SUB84(dVar16,0) * SUB84(in_dr6,0));
          fVar18 = SUB84(dVar25,0) * fVar18 - (float)((ulonglong)dVar25 >> 0x20);
        }
        else {
          dVar16 = dVar16 * in_dr6;
          fVar18 = SUB84(dVar25 * in_dr10 - dVar25 * in_dr10,0);
        }
        if (cVar33 == '\0') {
          dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar13 + 0x24),fVar18);
        }
        else {
          dVar25 = *(double *)((int)pdVar13 + 0x24);
        }
        if (cVar32 == '\0') {
          dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar25,0),
                                    SUB84(dVar25,0));
        }
        else {
          dVar25 = dVar25 * dVar25;
        }
        if (cVar33 == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),*(undefined4 *)(pdVar13 + 4));
        }
        else {
          dVar17 = pdVar13[4];
        }
        if (cVar32 == '\0') {
          dVar25 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar25,0) +
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0));
        }
        in_xd2 = in_dr8;
        if (cVar33 == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),uVar28);
          in_xd2 = dVar17;
        }
        if (cVar32 == '\0') {
          fVar18 = SUB84(dVar25,0) * SUB84(in_dr8,0);
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),fVar18);
          fVar18 = SUB84(dVar16,0) - fVar18;
        }
        else {
          dVar25 = dVar25 * in_dr8;
          fVar18 = SUB84(dVar16 - dVar25,0);
        }
        if (cVar33 == '\0') {
          in_dr0 = (double)CONCAT44(fVar18,*(undefined4 *)pdVar13);
          in_xd0 = dVar29;
        }
        else {
          in_xd0 = *pdVar13;
          in_dr0 = dVar29;
        }
        if (cVar32 == '\0') {
          fVar30 = ((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr0,0) +
                   (float)((ulonglong)dVar25 >> 0x20)) * fVar30;
        }
        else {
          fVar30 = (float)((ulonglong)(dVar25 * in_dr14) >> 0x20);
        }
        dVar16 = (double)((ulonglong)(uint)fVar30 << 0x20);
        if (cVar32 == '\0' && fVar30 < 0.0) {
          if (cVar33 == '\0') {
            *(undefined4 *)((int)pdVar14 + -4) = *(undefined4 *)((int)pdVar14 + 0x14);
            dVar16 = (double)((ulonglong)*(uint *)(pdVar14 + 2) << 0x20);
            pdVar6 = pdVar14 + -1;
            *(uint *)(pdVar14 + -1) = *(uint *)(pdVar14 + 2);
            in_dr10 = (double)(ulonglong)*(uint *)((int)pdVar14 + 0xc);
            in_dr8 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 3),
                                      *(undefined4 *)((int)pdVar14 + 0x1c));
            in_dr6 = (double)CONCAT44(uVar21,uVar24);
          }
          else {
            pdVar14[-1] = (double)*(undefined8 *)((int)pdVar14 + 0x14);
            dVar16 = *(double *)((int)pdVar14 + 0xc);
            pdVar6 = pdVar14 + -2;
            pdVar14[-2] = dVar16;
            in_xd10 = *(double *)((int)pdVar14 + 4);
            in_dr10 = *pdVar14;
            in_xd8 = *(double *)((int)pdVar14 + 0x14);
            in_dr8 = pdVar14[2];
            in_dr6 = dVar20;
            in_xd6 = in_dr12;
          }
          ar7 = (double *)FUN_8c226474(pdVar5,a5,pdVar13,ar7);
          pdVar14 = (double *)((int)pdVar6 + 8);
        }
      }
LAB_8c223a54:
      *(int *)pdVar14 = *(int *)pdVar14 + *(int *)((int)pdVar14 + 0x28);
      if (cVar33 == '\0') {
        dVar25 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),*(int *)((int)pdVar14 + 0x18));
        in_xd12 = dVar20;
        dVar20 = (double)CONCAT44(SUB84(in_dr12,0),SUB84(in_dr4,0));
      }
      else {
        in_xd12 = *(double *)((int)pdVar14 + 0x18);
        dVar25 = in_dr12;
      }
      iVar12 = iVar12 + -1;
      if (cVar32 == '\0') {
        in_dr14 = (double)CONCAT44(-(float)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = -in_dr14;
      }
      if (cVar33 == '\0') {
        in_dr12 = (double)CONCAT44(*(int *)((int)pdVar14 + 0x1c),SUB84(dVar25,0));
        in_dr4 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),(int)((ulonglong)dVar25 >> 0x20))
        ;
      }
      else {
        in_dr12 = *(double *)((int)pdVar14 + 0x1c);
        in_dr4 = dVar20;
        in_xd4 = dVar25;
      }
      pdVar5 = a5;
      a5 = pdVar13;
      dVar25 = in_xd0;
      dVar20 = in_xd12;
    } while (iVar12 != 0);
    if (iVar8 != 0) {
      if (cVar33 == '\0') {
        uVar24 = *(undefined4 *)((int)pdVar13 + 4);
        dVar20 = (double)CONCAT44(uVar24,SUB84(in_dr6,0));
        uVar28 = *(undefined4 *)(pdVar13 + 1);
        uVar21 = *(undefined4 *)((int)pdVar13 + 0xc);
        pdVar13 = pdVar13 + 2;
        *(int *)((int)ar7 + 0x14) = *(int *)((int)pdVar14 + 0x1c);
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(int *)((int)pdVar14 + 0x18));
        *(int *)(ar7 + 2) = *(int *)((int)pdVar14 + 0x18);
        *(undefined4 *)((int)ar7 + 0xc) = uVar21;
        *(undefined4 *)(ar7 + 1) = uVar28;
        pdVar5 = (double *)((int)ar7 + 4);
        *(undefined4 *)pdVar5 = uVar24;
      }
      else {
        dVar20 = *(double *)((int)pdVar13 + 4);
        in_xd4 = *(double *)((int)pdVar13 + 0xc);
        dVar25 = *(double *)((int)pdVar13 + 0x14);
        pdVar13 = (double *)((int)pdVar13 + 0x1c);
        ar7[2] = *(double *)((int)pdVar14 + 0x1c);
        in_xd2 = *(double *)((int)pdVar14 + 0x18);
        ar7[1] = in_xd2;
        *ar7 = dVar25;
        ar7[-1] = in_xd4;
        pdVar5 = ar7 + -2;
        *pdVar5 = dVar20;
      }
      iVar12 = SUB84(dVar20,0);
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)pdVar13);
        pdVar13 = (double *)((int)pdVar13 + 4);
        dVar20 = (double)CONCAT44(*(int *)((int)pdVar14 + 8),SUB84(in_dr10,0));
        iVar12 = *(int *)((int)pdVar14 + 0xc);
      }
      else {
        in_xd2 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        dVar20 = *(double *)((int)pdVar14 + 8);
        in_xd6 = *(double *)((int)pdVar14 + 0xc);
      }
      if (cVar32 == '\0') {
        in_dr10 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar16,0),
                                   SUB84(dVar20,0));
      }
      else {
        in_dr10 = dVar20 * dVar16;
      }
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)pdVar13);
        pdVar13 = (double *)((int)pdVar13 + 4);
        dVar20 = (double)CONCAT44(*(int *)((int)pdVar14 + 0x10),iVar12);
      }
      else {
        in_xd2 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        dVar20 = *(double *)((int)pdVar14 + 0x10);
      }
      if (cVar32 == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) + SUB84(dVar16,0)
                                 );
      }
      else {
        dVar20 = dVar20 + dVar16;
      }
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)pdVar13);
        pdVar13 = (double *)((int)pdVar13 + 4);
        dVar25 = (double)CONCAT44(*(int *)((int)pdVar14 + 0x14),SUB84(in_dr8,0));
      }
      else {
        in_xd2 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        dVar25 = *(double *)((int)pdVar14 + 0x14);
      }
      if (cVar32 == '\0') {
        in_dr6 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar16,0),
                                  SUB84(dVar20,0));
      }
      else {
        in_dr6 = dVar20 + dVar16;
      }
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)pdVar13);
        pdVar13 = (double *)((int)pdVar13 + 4);
      }
      else {
        in_xd2 = *pdVar13;
        pdVar13 = pdVar13 + 1;
      }
      if (cVar32 == '\0') {
        in_dr8 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar16,0),
                                  SUB84(dVar25,0));
      }
      else {
        in_dr8 = dVar25 + dVar16;
      }
      if (cVar33 == '\0') {
        uVar24 = (undefined4)((ulonglong)in_dr8 >> 0x20);
        uVar21 = *(undefined4 *)((int)pdVar13 + 0x14);
        in_dr8 = (double)CONCAT44(uVar24,uVar21);
        uVar28 = *(undefined4 *)(pdVar13 + 3);
        in_dr4 = pdVar13[3];
        *(undefined4 *)(pdVar5 + 7) = *(undefined4 *)((int)pdVar13 + 0x1c);
        *(undefined4 *)((int)pdVar5 + 0x34) = uVar28;
        *(undefined4 *)(pdVar5 + 6) = uVar21;
        *(undefined4 *)(pdVar5 + 5) = uVar24;
        *(int *)((int)pdVar5 + 0x24) = (int)((ulonglong)in_dr6 >> 0x20);
        *(int *)(pdVar5 + 4) = SUB84(in_dr6,0);
        pdVar5 = (double *)((int)pdVar5 + 0x1c);
        *(int *)pdVar5 = (int)((ulonglong)in_dr10 >> 0x20);
      }
      else {
        in_xd8 = *(double *)((int)pdVar13 + 0x14);
        in_xd4 = *(double *)((int)pdVar13 + 0x1c);
        in_dr4 = *(double *)((int)pdVar13 + 0x24);
        *(double *)((int)pdVar5 + 0x34) = in_dr4;
        *(double *)((int)pdVar5 + 0x2c) = in_xd4;
        *(double *)((int)pdVar5 + 0x24) = in_xd8;
        pdVar5[3] = in_dr8;
        pdVar5[2] = in_dr6;
        pdVar5[1] = in_xd6;
        *pdVar5 = in_dr10;
      }
      iVar9 = iVar9 + iVar8 + 1;
      ar7 = pdVar5 + 4;
    }
    iVar12 = *(int *)((int)pdVar14 + 0x24);
    *(int *)((int)pdVar14 + 0x24) = iVar12 + -1;
    if (iVar12 + -1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar9;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar10;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c223708\n.set _FUN_8c223708, _FUN_8c223708_def\n");
