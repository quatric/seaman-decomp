#include "../decls.h"
double * FUN_8c2274f8_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  double *ar4_00;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  uint *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  float fVar16;
  double in_dr0;
  double in_dr2;
  double in_dr4;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  double in_dr6;
  float fVar20;
  double in_dr8;
  float fVar21;
  double in_dr10;
  double dVar22;
  double in_dr12;
  undefined8 in_dr14;
  double dVar23;
  undefined8 in_xd4;
  bool bVar24;
  bool bVar25;
  char cVar26;
  char cVar27;
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar27 = '\0';
  cVar26 = '\0';
  uStack_20 = (int)((ulonglong)in_dr12 >> 0x20);
  uStack_24 = SUB84(in_dr12,0);
  uStack_28 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_2c = (int)in_dr14;
  puVar13 = auStack_34;
  auStack_34[0] = _DAT_8c4aa4f0;
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  iVar3 = 0;
  iVar5 = (ar6 >> 0xe & 3) << 1;
  dVar23 = (double)CONCAT44(uStack_28,0x3f800000);
  do {
    iVar6 = (int)*ar4;
    psVar4 = ar4 + 2;
    uVar17 = (undefined4)((ulonglong)in_dr4 >> 0x20);
    in_dr4 = (double)CONCAT44(uVar17,0x3f800000);
    if ((*puVar13 & 0x80000000) != 0) {
      in_dr4 = (double)CONCAT44(uVar17,0xbf800000);
    }
    pdVar7 = (double *)(ar4[1] * 0x20 + ar5);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),-SUB84(in_dr4,0));
    }
    ar4 = ar4 + 3;
    iVar3 = iVar3 + iVar6;
    pdVar9 = (double *)(*psVar4 * 0x20 + ar5);
    iVar6 = iVar6 + -2;
    iVar12 = 0;
    do {
      if (cVar27 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(in_dr0,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(in_dr2,0));
        pdVar8 = pdVar7 + 1;
      }
      else {
        in_dr0 = *pdVar7;
        in_dr2 = pdVar7[1];
        pdVar8 = pdVar7 + 2;
      }
      ar4_00 = pdVar8 + -2;
      psVar4 = ar4 + 1;
      if (cVar27 == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr6,0));
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      else {
        in_dr6 = *pdVar9;
        pdVar9 = pdVar9 + 1;
      }
      pdVar11 = (double *)(*ar4 * 0x20 + ar5);
      if (cVar27 == '\0') {
        in_dr8 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr8,0));
        pdVar10 = (double *)((int)pdVar9 + 4);
      }
      else {
        in_dr8 = *pdVar9;
        pdVar10 = pdVar9 + 1;
      }
      pdVar7 = pdVar10 + -2;
      bVar25 = true;
      if (cVar27 == '\0') {
        dVar22 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr10,0));
        pdVar11 = (double *)((int)pdVar11 + 4);
      }
      else {
        dVar22 = *pdVar11;
        pdVar11 = pdVar11 + 1;
      }
      fVar19 = SUB84(dVar23,0);
      if (cVar26 == '\0') {
        bVar24 = (float)((ulonglong)in_dr0 >> 0x20) < fVar19;
      }
      else {
        bVar24 = in_dr0 < dVar23;
      }
      if (cVar27 == '\0') {
        in_dr12 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr12,0));
        pdVar11 = (double *)((int)pdVar11 + 4);
      }
      else {
        in_dr12 = *pdVar11;
        pdVar11 = pdVar11 + 1;
      }
      pdVar9 = pdVar11 + -2;
      if (cVar26 == '\0') {
        in_dr10 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                   SUB84(dVar22,0) - SUB84(in_dr6,0));
      }
      else {
        in_dr10 = dVar22 - in_dr6;
      }
      fVar16 = SUB84(in_dr0,0);
      fVar18 = (float)((ulonglong)in_dr4 >> 0x20);
      if (bVar24) {
LAB_8c2275fe:
        if (iVar12 != 0) {
          if (cVar27 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,fVar16);
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0xc),SUB84(in_dr2,0));
            dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -1),SUB84(in_dr6,0));
            pdVar10 = (double *)((int)pdVar10 + -4);
          }
          else {
            in_dr0 = *pdVar7;
            in_dr2 = pdVar10[-1];
            dVar22 = *pdVar10;
            pdVar10 = pdVar10 + 1;
          }
          pdVar7 = pdVar10 + -3;
          if (cVar26 == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar18,SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 + in_dr4;
          }
          if (cVar27 == '\0') {
            pdVar8 = (double *)((int)ar7 + 0xc);
            *(int *)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar8 = ar7 + 1;
            *pdVar8 = in_dr2;
          }
          if (cVar26 == '\0') {
            bVar24 = (float)((ulonglong)dVar22 >> 0x20) < fVar18;
          }
          else {
            bVar24 = dVar22 < in_dr4;
          }
          if (cVar27 == '\0') {
            pdVar8 = (double *)((int)pdVar8 + -4);
            *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar8 = pdVar8 + -1;
            *pdVar8 = in_dr0;
          }
          in_dr6 = dVar22;
          if ((bVar24) && (in_dr6 = in_dr4, cVar27 == '\0')) {
            in_dr6 = (double)CONCAT44(fVar18,SUB84(dVar22,0));
          }
          iVar2 = iVar2 + iVar12 + 1;
          *(undefined4 *)pdVar8 = 0xf0000000;
          iVar12 = 0;
          if (cVar27 == '\0') {
            *(int *)(pdVar8 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar8[3] = in_dr6;
          }
          ar7 = pdVar8 + 4;
        }
      }
      else {
        fVar21 = (float)((ulonglong)in_dr8 >> 0x20);
        if (cVar26 == '\0') {
          fVar20 = (float)((ulonglong)in_dr6 >> 0x20);
          in_dr6 = (double)CONCAT44(fVar20,SUB84(in_dr6,0) - fVar16);
          bVar24 = fVar20 < fVar19;
          in_dr12 = (double)CONCAT44((float)((ulonglong)in_dr12 >> 0x20) - fVar21,SUB84(in_dr12,0));
        }
        else {
          in_dr6 = in_dr6 - in_dr0;
          bVar24 = in_dr6 < dVar23;
          in_dr12 = in_dr12 - in_dr8;
        }
        if (bVar24) goto LAB_8c2275fe;
        if (cVar26 == '\0') {
          in_dr8 = (double)CONCAT44(fVar21 - (float)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr8,0));
          bVar24 = (float)((ulonglong)in_dr10 >> 0x20) < fVar19;
          in_dr6 = (double)(ulonglong)(uint)(SUB84(in_dr6,0) * (float)((ulonglong)in_dr12 >> 0x20));
        }
        else {
          in_dr8 = in_dr8 - in_dr2;
          bVar24 = in_dr10 < dVar23;
          in_dr6 = in_dr6 * in_dr12;
        }
        if (bVar24) goto LAB_8c2275fe;
        if (cVar26 == '\0') {
          in_dr8 = (double)CONCAT44((float)((ulonglong)in_dr8 >> 0x20) * SUB84(in_dr10,0),
                                    SUB84(in_dr8,0));
        }
        else {
          in_dr8 = in_dr8 * in_dr10;
        }
        if (cVar26 == '\0') {
          in_dr6 = (double)(ulonglong)
                           (uint)((SUB84(in_dr6,0) - (float)((ulonglong)in_dr8 >> 0x20)) *
                                 SUB84(in_dr4,0));
        }
        else {
          in_dr6 = ((double)((ulonglong)in_dr6 & 0xffffffff) - in_dr8) * in_dr4;
        }
        bVar25 = false;
        if (cVar26 != '\0' || (float)((ulonglong)in_dr6 >> 0x20) <= SUB84(in_dr6,0))
        goto LAB_8c2275fe;
        if (iVar12 == 0) {
          if (cVar27 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,fVar16);
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + -0xc),SUB84(in_dr2,0));
            dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar8 + -1),SUB84(in_dr6,0));
            pdVar8 = (double *)((int)pdVar8 + -4);
          }
          else {
            in_dr0 = *ar4_00;
            in_dr2 = pdVar8[-1];
            dVar22 = *pdVar8;
            pdVar8 = pdVar8 + 1;
          }
          iVar12 = 1;
          ar4_00 = pdVar8 + -3;
          if (cVar26 == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar18,SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 + in_dr4;
          }
          if (cVar27 == '\0') {
            pdVar8 = (double *)((int)ar7 + 0xc);
            *(int *)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar8 = ar7 + 1;
            *pdVar8 = in_dr2;
          }
          if (cVar26 == '\0') {
            bVar24 = (float)((ulonglong)dVar22 >> 0x20) < fVar18;
          }
          else {
            bVar24 = dVar22 < in_dr4;
          }
          if (cVar27 == '\0') {
            pdVar8 = (double *)((int)pdVar8 + -4);
            *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar8 = pdVar8 + -1;
            *pdVar8 = in_dr0;
          }
          in_dr6 = dVar22;
          if ((bVar24) && (in_dr6 = in_dr4, cVar27 == '\0')) {
            in_dr6 = (double)CONCAT44(fVar18,SUB84(dVar22,0));
          }
          *(undefined4 *)pdVar8 = 0xe0000000;
          if (cVar27 == '\0') {
            *(int *)(pdVar8 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar8[3] = in_dr6;
          }
          ar7 = pdVar8 + 4;
        }
        if (cVar27 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(in_dr0,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0xc),SUB84(in_dr2,0));
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar10 + -1),SUB84(in_dr6,0));
          pdVar10 = (double *)((int)pdVar10 + -4);
        }
        else {
          in_dr0 = *pdVar7;
          in_dr2 = pdVar10[-1];
          dVar22 = *pdVar10;
          pdVar10 = pdVar10 + 1;
        }
        iVar12 = iVar12 + 1;
        pdVar7 = pdVar10 + -3;
        if (cVar26 == '\0') {
          dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar18,SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 + in_dr4;
        }
        if (cVar27 == '\0') {
          pdVar8 = (double *)((int)ar7 + 0xc);
          *(int *)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          pdVar8 = ar7 + 1;
          *pdVar8 = in_dr2;
        }
        if (cVar26 == '\0') {
          bVar24 = (float)((ulonglong)dVar22 >> 0x20) < fVar18;
        }
        else {
          bVar24 = dVar22 < in_dr4;
        }
        if (cVar27 == '\0') {
          pdVar8 = (double *)((int)pdVar8 + -4);
          *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar8 = pdVar8 + -1;
          *pdVar8 = in_dr0;
        }
        in_dr6 = dVar22;
        if ((bVar24) && (in_dr6 = in_dr4, cVar27 == '\0')) {
          in_dr6 = (double)CONCAT44(fVar18,SUB84(dVar22,0));
        }
        *(undefined4 *)pdVar8 = 0xe0000000;
        if (cVar27 == '\0') {
          *(int *)(pdVar8 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar8[3] = in_dr6;
        }
        ar7 = pdVar8 + 4;
      }
      if (bVar25) {
        if (cVar27 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(in_dr0,0));
        }
        else {
          dVar22 = *ar4_00;
        }
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),0x3f800000);
        if (cVar26 == '\0') {
          bVar25 = 1.0 < (float)((ulonglong)dVar22 >> 0x20);
        }
        else {
          bVar25 = in_dr2 < dVar22;
        }
        if (cVar27 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar22,0));
        }
        else {
          in_dr0 = *pdVar7;
        }
        if (!bVar25) {
          if (cVar26 == '\0') {
            bVar25 = 1.0 < (float)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            bVar25 = in_dr2 < in_dr0;
          }
          if (cVar27 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
          }
          else {
            in_dr0 = *pdVar9;
          }
          if (!bVar25) {
            if (cVar26 == '\0') {
              bVar25 = 1.0 < (float)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              bVar25 = in_dr2 < in_dr0;
            }
            if (!bVar25) goto LAB_8c227632;
          }
        }
        *(uint *)((int)puVar13 + -4) = uVar1;
        *(int *)((int)puVar13 + -8) = iVar2;
        *(int *)((int)puVar13 + -0xc) = iVar3;
        *(short **)((int)puVar13 + -0x10) = psVar4;
        *(int *)((int)puVar13 + -0x14) = ar5;
        *(int *)((int)puVar13 + -0x18) = iVar5;
        if (cVar27 == '\0') {
          *(float *)((int)puVar13 + -0x1c) = fVar18;
          puVar14 = (undefined8 *)((int)puVar13 + -0x20);
          *(float *)((int)puVar13 + -0x20) = SUB84(in_dr4,0);
        }
        else {
          *(double *)((int)puVar13 + -0x20) = in_dr4;
          puVar14 = (undefined8 *)((int)puVar13 + -0x28);
          *(undefined8 *)((int)puVar13 + -0x28) = in_xd4;
        }
        ar7 = (double *)FUN_8c22b26c(ar4_00,pdVar7,pdVar9,ar7);
        if (cVar27 == '\0') {
          piVar15 = (int *)(puVar14 + 1);
          pdVar8 = (double *)puVar14;
        }
        else {
          in_xd4 = *puVar14;
          pdVar8 = (double *)(puVar14 + 1);
          piVar15 = (int *)(puVar14 + 2);
        }
        in_dr4 = *pdVar8;
        iVar5 = *piVar15;
        ar5 = piVar15[1];
        psVar4 = (short *)piVar15[2];
        iVar3 = piVar15[3];
        iVar2 = piVar15[4];
        uVar1 = piVar15[5];
        puVar13 = (uint *)(piVar15 + 6);
      }
LAB_8c227632:
      fVar19 = (float)((ulonglong)in_dr4 >> 0x20);
      in_dr4 = (double)CONCAT44(fVar19,-SUB84(in_dr4,0));
      iVar6 = iVar6 + -1;
      ar4 = (short *)((int)psVar4 + iVar5);
    } while (iVar6 != 0);
    if (iVar12 != 0) {
      if (cVar27 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
        pdVar11 = (double *)((int)pdVar11 + -0xc);
      }
      else {
        in_dr0 = *pdVar9;
        pdVar11 = pdVar11 + -1;
      }
      if (cVar27 == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr2,0));
        dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr6,0));
      }
      else {
        in_dr2 = *pdVar11;
        dVar22 = pdVar11[1];
      }
      if (cVar26 == '\0') {
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + fVar19,SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 + in_dr4;
      }
      if (cVar27 == '\0') {
        pdVar7 = (double *)((int)ar7 + 0xc);
        *(int *)pdVar7 = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        pdVar7 = ar7 + 1;
        *pdVar7 = in_dr2;
      }
      if (cVar26 == '\0') {
        bVar25 = (float)((ulonglong)dVar22 >> 0x20) < fVar19;
      }
      else {
        bVar25 = dVar22 < in_dr4;
      }
      if (cVar27 == '\0') {
        pdVar7 = (double *)((int)pdVar7 + -4);
        *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar7 = pdVar7 + -1;
        *pdVar7 = in_dr0;
      }
      in_dr6 = dVar22;
      if ((bVar25) && (in_dr6 = in_dr4, cVar27 == '\0')) {
        in_dr6 = (double)CONCAT44(fVar19,SUB84(dVar22,0));
      }
      iVar2 = iVar2 + iVar12 + 1;
      *(undefined4 *)pdVar7 = 0xf0000000;
      if (cVar27 == '\0') {
        *(int *)(pdVar7 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar7[3] = in_dr6;
      }
      ar7 = pdVar7 + 4;
    }
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar2;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar3;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2274f8\n.set _FUN_8c2274f8, _FUN_8c2274f8_def\n");
