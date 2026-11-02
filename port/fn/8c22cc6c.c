#include "../decls.h"
double * FUN_8c22cc6c_def(short *ar4,float ar5,uint ar6,double *ar7)

{
  bool bVar1;
  short *psVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double *ar6_00;
  short *psVar9;
  double *ar5_00;
  float fVar10;
  double in_dr4;
  float fVar12;
  double dVar11;
  double in_dr6;
  float fVar13;
  double dVar14;
  double dVar16;
  double in_dr12;
  float fVar18;
  double in_dr14;
  double in_xd2;
  double in_xd4;
  double dVar19;
  double dVar20;
  double in_xd12;
  double in_xd14;
  char cVar21;
  char cVar22;
  short *psStack_44;
  uint uStack_38;
  float fVar15;
  float fVar17;
  
  cVar22 = '\0';
  cVar21 = '\0';
  fVar12 = (float)((ulonglong)in_dr4 >> 0x20);
  iVar6 = 0;
  iVar7 = 0;
  uStack_38 = ar6 & 0x3fff;
  psStack_44 = ar4;
  do {
    iVar8 = (int)*psStack_44;
    pdVar3 = (double *)(psStack_44[1] * 0x20 + (int)ar5);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    iVar7 = iVar7 + iVar8;
    iVar8 = iVar8 + -2;
    if (cVar22 == '\0') {
      in_dr6 = (double)CONCAT44(fVar12,SUB84(in_dr6,0));
    }
    else {
      in_dr6 = (double)CONCAT44(ar5,fVar12);
    }
    iVar5 = 0;
    dVar11 = in_xd2;
    if (cVar22 == '\0') {
      dVar11 = (double)CONCAT44((float)(int)psStack_44[2],SUB84(in_dr4,0));
    }
    psVar9 = psStack_44 + 5;
    fVar10 = (float)((ulonglong)in_dr6 >> 0x20);
    if (cVar21 == '\0') {
      dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) * fVar10,SUB84(dVar11,0));
    }
    else {
      dVar11 = dVar11 * in_dr6;
    }
    dVar14 = in_xd2;
    if (cVar22 == '\0') {
      dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),(float)(int)psStack_44[3]);
      dVar14 = in_xd4;
    }
    in_xd4 = dVar14;
    if (cVar21 == '\0') {
      in_dr4 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar11,0) * fVar10);
    }
    else {
      in_dr4 = dVar11 * in_dr6;
    }
    ar5_00 = (double *)(psStack_44[4] * 0x20 + (int)ar5);
    psVar2 = psStack_44 + 6;
    psStack_44 = psStack_44 + 7;
    dVar11 = in_xd2;
    if (cVar22 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(float)(int)*psVar9);
      dVar11 = in_xd14;
    }
    if (cVar21 == '\0') {
      fVar18 = SUB84(in_dr14,0) * fVar10;
    }
    else {
      fVar18 = SUB84(in_dr14 * in_dr6,0);
    }
    dVar14 = in_xd2;
    if (cVar22 == '\0') {
      dVar14 = (double)CONCAT44((float)(int)*psVar2,fVar18);
    }
    if (cVar21 == '\0') {
      in_dr14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * fVar10,SUB84(dVar14,0));
    }
    else {
      in_dr14 = dVar14 * in_dr6;
    }
    do {
      ar6_00 = (double *)(*psStack_44 * 0x20 + (int)ar5);
      fVar10 = ar5;
      if (cVar22 == '\0') {
        fVar10 = fVar12;
      }
      dVar14 = in_xd2;
      if (cVar22 == '\0') {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(float)(int)psStack_44[1]);
        dVar14 = in_xd12;
      }
      in_xd12 = dVar14;
      if (cVar21 == '\0') {
        fVar18 = SUB84(in_dr12,0) * fVar10;
      }
      else {
        fVar18 = SUB84(in_dr12 * (double)CONCAT44(fVar10,(float)(int)psStack_44[1]),0);
      }
      dVar16 = (double)CONCAT44(fVar10,(float)(int)psStack_44[2]);
      dVar14 = in_xd2;
      if (cVar22 == '\0') {
        dVar14 = (double)CONCAT44((float)(int)psStack_44[2],fVar18);
      }
      if (cVar21 == '\0') {
        in_dr12 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * fVar10,SUB84(dVar14,0));
      }
      else {
        in_dr12 = dVar14 * dVar16;
      }
      if (cVar22 == '\0') {
        dVar16 = (double)(ulonglong)(uint)*(float *)pdVar3;
      }
      else {
        in_xd2 = *pdVar3;
      }
      fVar10 = SUB84(dVar16,0);
      bVar1 = false;
      if (cVar21 != '\0' || fVar10 <= 1.0) {
LAB_8c22cd96:
        bVar1 = true;
      }
      else {
        if (cVar22 == '\0') {
          fVar10 = *(float *)ar5_00;
        }
        else {
          in_xd2 = *ar5_00;
        }
        if (cVar21 != '\0' || fVar10 <= 1.0) goto LAB_8c22cd96;
        if (cVar22 == '\0') {
          fVar10 = *(float *)ar6_00;
        }
        else {
          fVar10 = (float)((ulonglong)*ar6_00 >> 0x20);
        }
        if (cVar21 != '\0' || fVar10 <= 1.0) goto LAB_8c22cd96;
      }
      fVar10 = (float)((ulonglong)in_dr14 >> 0x20);
      if (bVar1) {
        if (iVar5 != 0) {
          if (cVar22 == '\0') {
            fVar17 = *(float *)((int)ar5_00 + 4);
            fVar13 = *(float *)(ar5_00 + 1);
            fVar18 = *(float *)((int)ar5_00 + 0xc);
            fVar15 = *(float *)(ar5_00 + 2);
            in_dr6 = (double)CONCAT44(*(float *)((int)ar5_00 + 0x14),fVar18);
            *(float *)((int)ar7 + 0x1c) = *(float *)((int)ar5_00 + 0x14);
            *(float *)(ar7 + 3) = fVar15;
            *(float *)((int)ar7 + 0x14) = fVar10;
            *(float *)(ar7 + 2) = SUB84(in_dr14,0);
            *(float *)((int)ar7 + 0xc) = fVar18;
            *(float *)(ar7 + 1) = fVar13;
            pdVar4 = (double *)((int)ar7 + 4);
            *(float *)pdVar4 = fVar17;
          }
          else {
            dVar16 = *(double *)((int)ar5_00 + 4);
            dVar20 = *(double *)((int)ar5_00 + 0xc);
            dVar19 = *(double *)((int)ar5_00 + 0x14);
            dVar14 = *(double *)((int)ar5_00 + 0x1c);
            in_dr6 = *(double *)((int)ar5_00 + 0x24);
            ar7[3] = in_dr6;
            ar7[2] = dVar14;
            ar7[1] = in_dr14;
            *ar7 = dVar11;
            ar7[-1] = dVar19;
            ar7[-2] = dVar20;
            pdVar4 = ar7 + -3;
            *pdVar4 = dVar16;
          }
          *(float *)((int)pdVar4 + -4) = -1.5845633e+29;
          iVar6 = iVar6 + iVar5 + 1;
          iVar5 = 0;
          ar7 = (double *)((int)pdVar4 + 0x1c);
        }
      }
      else {
        if (iVar5 == 0) {
          if (cVar22 == '\0') {
            fVar17 = *(float *)((int)pdVar3 + 4);
            fVar13 = *(float *)(pdVar3 + 1);
            fVar15 = *(float *)((int)pdVar3 + 0xc);
            fVar18 = *(float *)(pdVar3 + 2);
            *(float *)((int)ar7 + 0x1c) = *(float *)((int)pdVar3 + 0x14);
            *(float *)(ar7 + 3) = fVar18;
            *(float *)((int)ar7 + 0x14) = SUB84(in_dr4,0);
            *(float *)(ar7 + 2) = (float)((ulonglong)in_dr4 >> 0x20);
            *(float *)((int)ar7 + 0xc) = fVar15;
            *(float *)(ar7 + 1) = fVar13;
            pdVar4 = (double *)((int)ar7 + 4);
            *(float *)pdVar4 = fVar17;
          }
          else {
            dVar16 = *(double *)((int)pdVar3 + 4);
            dVar20 = *(double *)((int)pdVar3 + 0xc);
            dVar14 = *(double *)((int)pdVar3 + 0x14);
            dVar19 = *(double *)((int)pdVar3 + 0x1c);
            ar7[3] = *(double *)((int)pdVar3 + 0x24);
            ar7[2] = dVar19;
            ar7[1] = in_xd4;
            *ar7 = in_dr4;
            ar7[-1] = dVar14;
            ar7[-2] = dVar20;
            pdVar4 = ar7 + -3;
            *pdVar4 = dVar16;
          }
          *(float *)((int)pdVar4 + -4) = -3.689349e+19;
          iVar5 = 1;
          ar7 = (double *)((int)pdVar4 + 0x1c);
        }
        if (cVar22 == '\0') {
          fVar17 = *(float *)((int)ar5_00 + 4);
          fVar18 = *(float *)(ar5_00 + 1);
          fVar15 = *(float *)((int)ar5_00 + 0xc);
          fVar13 = *(float *)(ar5_00 + 2);
          in_dr6 = (double)CONCAT44(*(float *)((int)ar5_00 + 0x14),fVar18);
          *(float *)((int)ar7 + 0x1c) = *(float *)((int)ar5_00 + 0x14);
          *(float *)(ar7 + 3) = fVar13;
          *(float *)((int)ar7 + 0x14) = fVar10;
          *(float *)(ar7 + 2) = SUB84(in_dr14,0);
          *(float *)((int)ar7 + 0xc) = fVar15;
          *(float *)(ar7 + 1) = fVar18;
          pdVar4 = (double *)((int)ar7 + 4);
          *(float *)pdVar4 = fVar17;
        }
        else {
          dVar16 = *(double *)((int)ar5_00 + 4);
          dVar19 = *(double *)((int)ar5_00 + 0xc);
          dVar14 = *(double *)((int)ar5_00 + 0x14);
          dVar20 = *(double *)((int)ar5_00 + 0x1c);
          in_dr6 = *(double *)((int)ar5_00 + 0x24);
          ar7[3] = in_dr6;
          ar7[2] = dVar20;
          ar7[1] = in_dr14;
          *ar7 = dVar11;
          ar7[-1] = dVar14;
          ar7[-2] = dVar19;
          pdVar4 = ar7 + -3;
          *pdVar4 = dVar16;
        }
        *(float *)((int)pdVar4 + -4) = -3.689349e+19;
        ar7 = (double *)((int)pdVar4 + 0x1c);
        iVar5 = iVar5 + 1;
      }
      if (bVar1) {
        if (cVar22 == '\0') {
          fVar18 = *(float *)pdVar3;
        }
        else {
          fVar18 = (float)((ulonglong)*pdVar3 >> 0x20);
        }
        if (cVar21 != '\0' || fVar18 <= 1.0) {
          if (cVar22 == '\0') {
            dVar14 = (double)CONCAT44(*(float *)ar5_00,0x3f800000);
          }
          else {
            dVar14 = *ar5_00;
          }
          if (cVar21 != '\0' || (float)((ulonglong)dVar14 >> 0x20) <= SUB84(dVar14,0)) {
            if (cVar22 == '\0') {
              fVar18 = *(float *)ar6_00;
            }
            else {
              fVar18 = (float)((ulonglong)*ar6_00 >> 0x20);
            }
            if (cVar21 != '\0' || fVar18 <= 1.0) goto LAB_8c22ce56;
          }
        }
        in_dr6 = dVar11;
        if (cVar22 == '\0') {
          in_dr6 = (double)(ulonglong)(uint)fVar10;
        }
        ar7 = (double *)FUN_8c22cef0(pdVar3,ar5_00,ar6_00,ar7);
      }
LAB_8c22ce56:
      psStack_44 = psStack_44 + (ar6 >> 0xe & 3) + 3;
      dVar14 = in_dr14;
      in_xd14 = in_xd12;
      if (cVar22 == '\0') {
        dVar14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr12,0));
        in_xd14 = dVar11;
        dVar11 = (double)CONCAT44(SUB84(in_dr14,0),SUB84(in_dr4,0));
      }
      iVar8 = iVar8 + -1;
      fVar10 = (float)((ulonglong)in_dr12 >> 0x20);
      in_dr14 = in_dr12;
      in_dr4 = dVar11;
      if (cVar22 == '\0') {
        in_dr14 = (double)CONCAT44(fVar10,SUB84(dVar14,0));
        in_dr4 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),(int)((ulonglong)dVar14 >> 0x20))
        ;
        dVar14 = in_xd4;
      }
      in_xd4 = dVar14;
      pdVar3 = ar5_00;
      ar5_00 = ar6_00;
      dVar11 = in_xd14;
    } while (iVar8 != 0);
    if (iVar5 != 0) {
      if (cVar22 == '\0') {
        fVar15 = *(float *)((int)ar6_00 + 4);
        fVar17 = *(float *)(ar6_00 + 1);
        fVar18 = *(float *)((int)ar6_00 + 0xc);
        fVar13 = *(float *)(ar6_00 + 2);
        in_dr6 = (double)CONCAT44(fVar15,fVar13);
        in_dr4 = (double)CONCAT44(*(float *)((int)ar6_00 + 0x14),fVar18);
        *(float *)((int)ar7 + 0x1c) = *(float *)((int)ar6_00 + 0x14);
        *(float *)(ar7 + 3) = fVar13;
        *(float *)((int)ar7 + 0x14) = fVar10;
        *(float *)(ar7 + 2) = SUB84(in_dr12,0);
        *(float *)((int)ar7 + 0xc) = fVar18;
        *(float *)(ar7 + 1) = fVar17;
        pdVar3 = (double *)((int)ar7 + 4);
        *(float *)pdVar3 = fVar15;
      }
      else {
        in_dr6 = *(double *)((int)ar6_00 + 4);
        dVar11 = *(double *)((int)ar6_00 + 0xc);
        in_xd4 = *(double *)((int)ar6_00 + 0x14);
        dVar14 = *(double *)((int)ar6_00 + 0x1c);
        in_dr4 = *(double *)((int)ar6_00 + 0x24);
        ar7[3] = in_dr4;
        ar7[2] = dVar14;
        ar7[1] = in_dr12;
        *ar7 = in_xd12;
        ar7[-1] = in_xd4;
        ar7[-2] = dVar11;
        pdVar3 = ar7 + -3;
        *pdVar3 = in_dr6;
      }
      *(float *)((int)pdVar3 + -4) = -1.5845633e+29;
      iVar6 = iVar6 + iVar5 + 1;
      ar7 = (double *)((int)pdVar3 + 0x1c);
    }
    uStack_38 = uStack_38 - 1;
    if (uStack_38 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar6;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar7;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c22cc6c\n.set _FUN_8c22cc6c, _FUN_8c22cc6c_def\n");
