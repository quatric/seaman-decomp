#include "../decls.h"
double * FUN_8c215c48_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *ar5_00;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  double *pdVar14;
  double *pdVar15;
  float fVar16;
  double in_dr4;
  float fVar17;
  double in_dr6;
  float fVar18;
  double in_dr8;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 in_fr11;
  double dVar21;
  undefined4 in_fr13;
  double dVar22;
  undefined8 in_xd6;
  undefined8 uVar23;
  undefined8 in_xd8;
  bool bVar24;
  char cVar25;
  char cVar26;
  undefined1 auStack_30 [4];
  
  cVar26 = '\0';
  cVar25 = '\0';
  piVar13 = (int *)auStack_30;
  uVar4 = ar6 & 0x3fff;
  iVar6 = (ar6 >> 0xe & 3) << 1;
  iVar2 = 0;
  iVar3 = 0;
  dVar21 = (double)CONCAT44(0xe0000000,in_fr11);
  dVar22 = (double)CONCAT44(0xf0000000,in_fr13);
  do {
    iVar9 = (int)*ar4;
    psVar5 = ar4 + 2;
    puVar10 = (undefined4 *)(ar4[1] * 0x10 + ar5);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar3 = iVar3 + iVar9;
    iVar9 = iVar9 + -2;
    iVar12 = 0;
    if (cVar26 == '\0') {
      in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),puVar10[2]);
    }
    ar4 = ar4 + 3;
    ar5_00 = (undefined4 *)(*psVar5 * 0x10 + ar5);
    if (cVar26 == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),ar5_00[2]);
      uVar23 = in_xd6;
    }
    else {
      uVar23 = *(undefined8 *)(ar5_00 + 2);
    }
    do {
      psVar5 = ar4 + 1;
      fVar16 = SUB84(in_dr4,0);
      if (cVar25 == '\0') {
        bVar24 = 0.0 < fVar16;
      }
      else {
        bVar24 = 5.26354424712089e-315 < in_dr4;
      }
      puVar11 = (undefined4 *)(*ar4 * 0x10 + ar5);
      if (cVar26 == '\0') {
        in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),puVar11[2]);
      }
      else {
        in_xd8 = *(undefined8 *)(puVar11 + 2);
      }
      fVar17 = SUB84(in_dr6,0);
      fVar18 = SUB84(in_dr8,0);
      uVar19 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (bVar24) {
        if (cVar25 == '\0') {
          bVar24 = 0.0 < fVar17;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr6;
        }
        if (!bVar24) goto LAB_8c215d10;
        if (cVar25 == '\0') {
          bVar24 = 0.0 < fVar18;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr8;
        }
        if (!bVar24) goto LAB_8c215d10;
        if (cVar25 == '\0') {
          bVar24 = 1.0 < fVar16;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr4;
        }
        if (bVar24) goto LAB_8c215d10;
        if (cVar25 == '\0') {
          bVar24 = 1.0 < fVar17;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr6;
        }
        if (bVar24) goto LAB_8c215d10;
        if (cVar25 == '\0') {
          bVar24 = 1.0 < fVar18;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr8;
        }
        if (bVar24) goto LAB_8c215d10;
        iVar7 = (int)ar7 + 0x1c;
        if (iVar12 == 0) {
          if (cVar26 == '\0') {
            dVar21 = (double)CONCAT44(uVar19,*puVar10);
            in_dr4 = (double)CONCAT44(puVar10[1],fVar16);
            puVar10 = puVar10 + 2;
          }
          else {
            in_dr4 = *(double *)(puVar10 + 2);
            puVar10 = puVar10 + 4;
          }
          if (cVar26 == '\0') {
            uVar19 = puVar10[1];
            in_dr8 = (double)CONCAT44(uVar19,fVar18);
            pdVar8 = ar7 + 3;
            *(undefined4 *)pdVar8 = uVar19;
            *(int *)((int)pdVar8 + -0xc) = (int)((ulonglong)in_dr4 >> 0x20);
            pdVar8 = pdVar8 + -2;
            *(int *)pdVar8 = (int)((ulonglong)dVar21 >> 0x20);
          }
          else {
            in_dr8 = *(double *)(puVar10 + 1);
            pdVar8 = (double *)((int)ar7 + 0x14);
            *pdVar8 = in_dr8;
            pdVar8[-2] = in_dr4;
            pdVar8 = pdVar8 + -3;
            *pdVar8 = dVar21;
          }
          iVar12 = 1;
          iVar7 = (int)pdVar8 + 0x3c;
        }
        if (cVar26 == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*ar5_00);
          in_dr6 = (double)CONCAT44(ar5_00[1],fVar17);
          puVar10 = ar5_00 + 2;
        }
        else {
          in_dr6 = *(double *)(ar5_00 + 2);
          puVar10 = ar5_00 + 4;
        }
        if (cVar26 == '\0') {
          uVar19 = puVar10[1];
          in_dr8 = (double)CONCAT44(uVar19,SUB84(in_dr8,0));
          *(undefined4 *)(iVar7 + -4) = uVar19;
          *(int *)(iVar7 + -0x10) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar8 = (double *)(iVar7 + -0x14);
          *(int *)pdVar8 = (int)((ulonglong)dVar21 >> 0x20);
        }
        else {
          in_dr8 = *(double *)(puVar10 + 1);
          pdVar8 = (double *)(iVar7 + -8);
          *pdVar8 = in_dr8;
          pdVar8[-2] = in_dr6;
          pdVar8 = pdVar8 + -3;
          *pdVar8 = dVar21;
        }
        iVar12 = iVar12 + 1;
        ar7 = pdVar8 + 4;
      }
      else {
LAB_8c215d10:
        if (iVar12 != 0) {
          if (cVar26 == '\0') {
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*ar5_00);
            in_dr6 = (double)CONCAT44(ar5_00[1],fVar17);
            puVar1 = ar5_00 + 2;
          }
          else {
            in_dr6 = *(double *)(ar5_00 + 2);
            puVar1 = ar5_00 + 4;
          }
          if (cVar26 == '\0') {
            uVar20 = puVar1[1];
            in_dr8 = (double)CONCAT44(uVar20,fVar18);
            *(undefined4 *)(ar7 + 3) = uVar20;
            pdVar8 = (double *)((int)(ar7 + 3) + -0xc);
            *(int *)pdVar8 = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            in_dr8 = *(double *)(puVar1 + 1);
            *(double *)((int)ar7 + 0x14) = in_dr8;
            pdVar8 = (double *)((int)ar7 + 0x14) + -2;
            *pdVar8 = in_dr6;
          }
          iVar2 = iVar2 + iVar12;
          iVar12 = 0;
          iVar2 = iVar2 + 1;
          if (cVar26 == '\0') {
            pdVar8 = (double *)((int)pdVar8 + -4);
            *(int *)pdVar8 = (int)((ulonglong)dVar22 >> 0x20);
          }
          else {
            pdVar8 = pdVar8 + -1;
            *pdVar8 = dVar22;
          }
          ar7 = pdVar8 + 4;
        }
        if (cVar25 == '\0') {
          bVar24 = 0.0 < fVar16;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr4;
        }
        fVar17 = SUB84(in_dr6,0);
        fVar18 = SUB84(in_dr8,0);
        if (bVar24) {
          if (cVar25 == '\0') {
            bVar24 = fVar16 < 1.0;
          }
          else {
            bVar24 = in_dr4 < 5.26354424712089e-315;
          }
          if (!bVar24) goto LAB_8c215d3e;
LAB_8c215dba:
          *(int *)((int)piVar13 + -4) = iVar6;
          *(int *)((int)piVar13 + -8) = ar5;
          *(short **)((int)piVar13 + -0xc) = psVar5;
          *(uint *)((int)piVar13 + -0x10) = uVar4;
          *(int *)((int)piVar13 + -0x14) = iVar3;
          *(int *)((int)piVar13 + -0x18) = iVar2;
          if (cVar26 == '\0') {
            *(float *)((int)piVar13 + -0x1c) = fVar17;
            *(float *)((int)piVar13 + -0x20) = fVar18;
            *(undefined4 *)((int)piVar13 + -0x24) = uVar19;
            pdVar14 = (double *)((int)piVar13 + -0x28);
            *(int *)((int)piVar13 + -0x28) = (int)((ulonglong)dVar22 >> 0x20);
          }
          else {
            *(undefined8 *)((int)piVar13 + -0x20) = uVar23;
            *(undefined8 *)((int)piVar13 + -0x28) = in_xd8;
            *(double *)((int)piVar13 + -0x30) = dVar21;
            pdVar14 = (double *)((int)piVar13 + -0x38);
            *(double *)((int)piVar13 + -0x38) = dVar22;
          }
          ar7 = (double *)FUN_8c215e10(puVar10,ar5_00,puVar11,ar7);
          if (cVar26 == '\0') {
            dVar22 = (double)CONCAT44(*(undefined4 *)pdVar14,SUB84(dVar22,0));
            dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 4),SUB84(dVar21,0));
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),*(undefined4 *)(pdVar14 + 1))
            ;
            in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                      *(undefined4 *)((int)pdVar14 + 0xc));
            pdVar15 = pdVar14 + 2;
          }
          else {
            dVar22 = *pdVar14;
            dVar21 = pdVar14[1];
            in_xd8 = pdVar14[2];
            uVar23 = pdVar14[3];
            pdVar15 = pdVar14 + 4;
          }
          iVar2 = *(int *)pdVar15;
          iVar3 = *(int *)((int)pdVar15 + 4);
          uVar4 = *(uint *)((int)pdVar15 + 8);
          psVar5 = *(short **)((int)pdVar15 + 0xc);
          ar5 = *(int *)((int)pdVar15 + 0x10);
          iVar6 = *(int *)((int)pdVar15 + 0x14);
          piVar13 = (int *)((int)pdVar15 + 0x18);
        }
        else {
LAB_8c215d3e:
          if (cVar25 == '\0') {
            bVar24 = 0.0 < fVar17;
          }
          else {
            bVar24 = 5.26354424712089e-315 < in_dr6;
          }
          if (bVar24) {
            if (cVar25 == '\0') {
              bVar24 = fVar17 < 1.0;
            }
            else {
              bVar24 = in_dr6 < 5.26354424712089e-315;
            }
            if (bVar24) goto LAB_8c215dba;
          }
          if (cVar25 == '\0') {
            bVar24 = 0.0 < fVar18;
          }
          else {
            bVar24 = 5.26354424712089e-315 < in_dr8;
          }
          if (bVar24) {
            if (cVar25 == '\0') {
              bVar24 = fVar18 < 1.0;
            }
            else {
              bVar24 = in_dr8 < 5.26354424712089e-315;
            }
            if (bVar24) goto LAB_8c215dba;
          }
        }
      }
      ar4 = (short *)((int)psVar5 + iVar6);
      in_xd6 = in_xd8;
      if (cVar26 == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(in_dr6,0));
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr8,0));
        in_xd6 = uVar23;
      }
      iVar9 = iVar9 + -1;
      puVar10 = ar5_00;
      ar5_00 = puVar11;
      uVar23 = in_xd6;
    } while (iVar9 != 0);
    if (iVar12 != 0) {
      if (cVar26 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*puVar11);
        in_dr8 = (double)CONCAT44(puVar11[1],SUB84(in_dr8,0));
        puVar11 = puVar11 + 2;
      }
      else {
        in_dr8 = *(double *)(puVar11 + 2);
        puVar11 = puVar11 + 4;
      }
      if (cVar26 == '\0') {
        uVar19 = puVar11[1];
        in_dr6 = (double)CONCAT44(uVar19,SUB84(in_dr6,0));
        *(undefined4 *)(ar7 + 3) = uVar19;
        pdVar8 = (double *)((int)(ar7 + 3) + -0xc);
        *(int *)pdVar8 = (int)((ulonglong)in_dr8 >> 0x20);
      }
      else {
        in_dr6 = *(double *)(puVar11 + 1);
        *(double *)((int)ar7 + 0x14) = in_dr6;
        pdVar8 = (double *)((int)ar7 + 0x14) + -2;
        *pdVar8 = in_dr8;
      }
      if (cVar26 == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(int *)pdVar8 = (int)((ulonglong)dVar22 >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = dVar22;
      }
      iVar2 = iVar2 + iVar12 + 1;
      ar7 = pdVar8 + 4;
    }
    uVar4 = uVar4 - 1;
    if (uVar4 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar2;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar3;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c215c48\n.set _FUN_8c215c48, _FUN_8c215c48_def\n");
