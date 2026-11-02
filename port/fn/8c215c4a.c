#include "../decls.h"
double * FUN_8c215c4a_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  int *piVar1;
  undefined4 *puVar2;
  uint in_r1;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int iVar10;
  undefined4 unaff_r11;
  undefined4 *puVar11;
  undefined4 unaff_r12;
  undefined4 *ar5_00;
  undefined4 unaff_r13;
  undefined4 *puVar12;
  undefined4 unaff_r14;
  int iVar13;
  undefined8 *puVar14;
  int *piVar15;
  double *pdVar16;
  double *pdVar17;
  float fVar18;
  double in_dr4;
  float fVar19;
  double in_dr6;
  float fVar20;
  double in_dr8;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 in_fr11;
  double dVar23;
  undefined8 in_dr12;
  double dVar24;
  undefined8 in_dr14;
  undefined8 in_xd6;
  undefined8 uVar25;
  undefined8 in_xd8;
  undefined8 in_xd14;
  bool bVar26;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    
    (*(uint*)((uchar*)&uStack_8+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar14 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar14 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar14 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar14 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar14 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar14 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar14 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar14 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar14 + -0x1c) = unaff_r8;
  piVar15 = (int *)((int)puVar14 + -0x20);
  *(undefined4 *)((int)puVar14 + -0x20) = in_PR;
  uVar5 = ar6 & in_r1;
  iVar7 = (ar6 >> 0xe & 3) << 1;
  iVar3 = 0;
  iVar4 = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(DAT_8c215df8,in_fr11);
    dVar24 = (double)CONCAT44(DAT_8c215dfc,(int)in_dr12);
    piVar15 = (int *)((int)puVar14 + -0x20);
  }
  else {
    dVar23 = (double)CONCAT44(DAT_8c215dfc,DAT_8c215df8);
    dVar24 = (double)CONCAT44(0x8c4aa51c,0x8c4aa520);
  }
  do {
    iVar10 = (int)*ar4;
    psVar6 = ar4 + 2;
    puVar11 = (undefined4 *)(ar4[1] * 0x10 + ar5);
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    iVar4 = iVar4 + iVar10;
    iVar10 = iVar10 + -2;
    iVar13 = 0;
    if (in_FPSCR_SZ == '\0') {
      in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),puVar11[2]);
    }
    ar4 = ar4 + 3;
    ar5_00 = (undefined4 *)(*psVar6 * 0x10 + ar5);
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),ar5_00[2]);
      uVar25 = in_xd6;
    }
    else {
      uVar25 = *(undefined8 *)(ar5_00 + 2);
    }
    do {
      psVar6 = ar4 + 1;
      fVar18 = SUB84(in_dr4,0);
      if (in_FPSCR_PR == '\0') {
        bVar26 = 0.0 < fVar18;
      }
      else {
        bVar26 = 5.26354424712089e-315 < in_dr4;
      }
      puVar12 = (undefined4 *)(*ar4 * 0x10 + ar5);
      if (in_FPSCR_SZ == '\0') {
        in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),puVar12[2]);
      }
      else {
        in_xd8 = *(undefined8 *)(puVar12 + 2);
      }
      fVar19 = SUB84(in_dr6,0);
      fVar20 = SUB84(in_dr8,0);
      uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (bVar26) {
        if (in_FPSCR_PR == '\0') {
          bVar26 = 0.0 < fVar19;
        }
        else {
          bVar26 = 5.26354424712089e-315 < in_dr6;
        }
        if (!bVar26) goto LAB_8c215d10;
        if (in_FPSCR_PR == '\0') {
          bVar26 = 0.0 < fVar20;
        }
        else {
          bVar26 = 5.26354424712089e-315 < in_dr8;
        }
        if (!bVar26) goto LAB_8c215d10;
        if (in_FPSCR_PR == '\0') {
          bVar26 = 1.0 < fVar18;
        }
        else {
          bVar26 = 5.26354424712089e-315 < in_dr4;
        }
        if (bVar26) goto LAB_8c215d10;
        if (in_FPSCR_PR == '\0') {
          bVar26 = 1.0 < fVar19;
        }
        else {
          bVar26 = 5.26354424712089e-315 < in_dr6;
        }
        if (bVar26) goto LAB_8c215d10;
        if (in_FPSCR_PR == '\0') {
          bVar26 = 1.0 < fVar20;
        }
        else {
          bVar26 = 5.26354424712089e-315 < in_dr8;
        }
        if (bVar26) goto LAB_8c215d10;
        iVar8 = (int)ar7 + 0x1c;
        if (iVar13 == 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar23 = (double)CONCAT44(uVar21,*puVar11);
            in_dr4 = (double)CONCAT44(puVar11[1],fVar18);
            puVar11 = puVar11 + 2;
          }
          else {
            in_dr4 = *(double *)(puVar11 + 2);
            puVar11 = puVar11 + 4;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar21 = puVar11[1];
            in_dr8 = (double)CONCAT44(uVar21,fVar20);
            pdVar9 = ar7 + 3;
            *(undefined4 *)pdVar9 = uVar21;
            *(int *)((int)pdVar9 + -0xc) = (int)((ulonglong)in_dr4 >> 0x20);
            pdVar9 = pdVar9 + -2;
            *(int *)pdVar9 = (int)((ulonglong)dVar23 >> 0x20);
          }
          else {
            in_dr8 = *(double *)(puVar11 + 1);
            pdVar9 = (double *)((int)ar7 + 0x14);
            *pdVar9 = in_dr8;
            pdVar9[-2] = in_dr4;
            pdVar9 = pdVar9 + -3;
            *pdVar9 = dVar23;
          }
          iVar13 = 1;
          iVar8 = (int)pdVar9 + 0x3c;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*ar5_00);
          in_dr6 = (double)CONCAT44(ar5_00[1],fVar19);
          puVar11 = ar5_00 + 2;
        }
        else {
          in_dr6 = *(double *)(ar5_00 + 2);
          puVar11 = ar5_00 + 4;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar21 = puVar11[1];
          in_dr8 = (double)CONCAT44(uVar21,SUB84(in_dr8,0));
          *(undefined4 *)(iVar8 + -4) = uVar21;
          *(int *)(iVar8 + -0x10) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar9 = (double *)(iVar8 + -0x14);
          *(int *)pdVar9 = (int)((ulonglong)dVar23 >> 0x20);
        }
        else {
          in_dr8 = *(double *)(puVar11 + 1);
          pdVar9 = (double *)(iVar8 + -8);
          *pdVar9 = in_dr8;
          pdVar9[-2] = in_dr6;
          pdVar9 = pdVar9 + -3;
          *pdVar9 = dVar23;
        }
        iVar13 = iVar13 + 1;
        ar7 = pdVar9 + 4;
      }
      else {
LAB_8c215d10:
        if (iVar13 != 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*ar5_00);
            in_dr6 = (double)CONCAT44(ar5_00[1],fVar19);
            puVar2 = ar5_00 + 2;
          }
          else {
            in_dr6 = *(double *)(ar5_00 + 2);
            puVar2 = ar5_00 + 4;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar22 = puVar2[1];
            in_dr8 = (double)CONCAT44(uVar22,fVar20);
            *(undefined4 *)(ar7 + 3) = uVar22;
            pdVar9 = (double *)((int)(ar7 + 3) + -0xc);
            *(int *)pdVar9 = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            in_dr8 = *(double *)(puVar2 + 1);
            *(double *)((int)ar7 + 0x14) = in_dr8;
            pdVar9 = (double *)((int)ar7 + 0x14) + -2;
            *pdVar9 = in_dr6;
          }
          iVar3 = iVar3 + iVar13;
          iVar13 = 0;
          iVar3 = iVar3 + 1;
          if (in_FPSCR_SZ == '\0') {
            pdVar9 = (double *)((int)pdVar9 + -4);
            *(int *)pdVar9 = (int)((ulonglong)dVar24 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = dVar24;
          }
          ar7 = pdVar9 + 4;
        }
        if (in_FPSCR_PR == '\0') {
          bVar26 = 0.0 < fVar18;
        }
        else {
          bVar26 = 5.26354424712089e-315 < in_dr4;
        }
        fVar19 = SUB84(in_dr6,0);
        fVar20 = SUB84(in_dr8,0);
        if (bVar26) {
          if (in_FPSCR_PR == '\0') {
            bVar26 = fVar18 < 1.0;
          }
          else {
            bVar26 = in_dr4 < 5.26354424712089e-315;
          }
          if (!bVar26) goto LAB_8c215d3e;
LAB_8c215dba:
          *(int *)((int)piVar15 + -4) = iVar7;
          *(int *)((int)piVar15 + -8) = ar5;
          *(short **)((int)piVar15 + -0xc) = psVar6;
          *(uint *)((int)piVar15 + -0x10) = uVar5;
          *(int *)((int)piVar15 + -0x14) = iVar4;
          *(int *)((int)piVar15 + -0x18) = iVar3;
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)piVar15 + -0x1c) = fVar19;
            *(float *)((int)piVar15 + -0x20) = fVar20;
            *(undefined4 *)((int)piVar15 + -0x24) = uVar21;
            pdVar16 = (double *)((int)piVar15 + -0x28);
            *(int *)((int)piVar15 + -0x28) = (int)((ulonglong)dVar24 >> 0x20);
          }
          else {
            *(undefined8 *)((int)piVar15 + -0x20) = uVar25;
            *(undefined8 *)((int)piVar15 + -0x28) = in_xd8;
            *(double *)((int)piVar15 + -0x30) = dVar23;
            pdVar16 = (double *)((int)piVar15 + -0x38);
            *(double *)((int)piVar15 + -0x38) = dVar24;
          }
          ar7 = (double *)FUN_8c215e10(puVar11,ar5_00,puVar12,ar7);
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(*(undefined4 *)pdVar16,SUB84(dVar24,0));
            dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar16 + 4),SUB84(dVar23,0));
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),*(undefined4 *)(pdVar16 + 1))
            ;
            in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                      *(undefined4 *)((int)pdVar16 + 0xc));
            pdVar17 = pdVar16 + 2;
          }
          else {
            dVar24 = *pdVar16;
            dVar23 = pdVar16[1];
            in_xd8 = pdVar16[2];
            uVar25 = pdVar16[3];
            pdVar17 = pdVar16 + 4;
          }
          iVar3 = *(int *)pdVar17;
          iVar4 = *(int *)((int)pdVar17 + 4);
          uVar5 = *(uint *)((int)pdVar17 + 8);
          psVar6 = *(short **)((int)pdVar17 + 0xc);
          ar5 = *(int *)((int)pdVar17 + 0x10);
          iVar7 = *(int *)((int)pdVar17 + 0x14);
          piVar15 = (int *)((int)pdVar17 + 0x18);
        }
        else {
LAB_8c215d3e:
          if (in_FPSCR_PR == '\0') {
            bVar26 = 0.0 < fVar19;
          }
          else {
            bVar26 = 5.26354424712089e-315 < in_dr6;
          }
          if (bVar26) {
            if (in_FPSCR_PR == '\0') {
              bVar26 = fVar19 < 1.0;
            }
            else {
              bVar26 = in_dr6 < 5.26354424712089e-315;
            }
            if (bVar26) goto LAB_8c215dba;
          }
          if (in_FPSCR_PR == '\0') {
            bVar26 = 0.0 < fVar20;
          }
          else {
            bVar26 = 5.26354424712089e-315 < in_dr8;
          }
          if (bVar26) {
            if (in_FPSCR_PR == '\0') {
              bVar26 = fVar20 < 1.0;
            }
            else {
              bVar26 = in_dr8 < 5.26354424712089e-315;
            }
            if (bVar26) goto LAB_8c215dba;
          }
        }
      }
      ar4 = (short *)((int)psVar6 + iVar7);
      in_xd6 = in_xd8;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(in_dr6,0));
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr8,0));
        in_xd6 = uVar25;
      }
      iVar10 = iVar10 + -1;
      puVar11 = ar5_00;
      ar5_00 = puVar12;
      uVar25 = in_xd6;
    } while (iVar10 != 0);
    if (iVar13 != 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*puVar12);
        in_dr8 = (double)CONCAT44(puVar12[1],SUB84(in_dr8,0));
        puVar12 = puVar12 + 2;
      }
      else {
        in_dr8 = *(double *)(puVar12 + 2);
        puVar12 = puVar12 + 4;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar21 = puVar12[1];
        in_dr6 = (double)CONCAT44(uVar21,SUB84(in_dr6,0));
        *(undefined4 *)(ar7 + 3) = uVar21;
        pdVar9 = (double *)((int)(ar7 + 3) + -0xc);
        *(int *)pdVar9 = (int)((ulonglong)in_dr8 >> 0x20);
      }
      else {
        in_dr6 = *(double *)(puVar12 + 1);
        *(double *)((int)ar7 + 0x14) = in_dr6;
        pdVar9 = (double *)((int)ar7 + 0x14) + -2;
        *pdVar9 = in_dr8;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar9 = (double *)((int)pdVar9 + -4);
        *(int *)pdVar9 = (int)((ulonglong)dVar24 >> 0x20);
      }
      else {
        pdVar9 = pdVar9 + -1;
        *pdVar9 = dVar24;
      }
      iVar3 = iVar3 + iVar13 + 1;
      ar7 = pdVar9 + 4;
    }
    piVar1 = 0x8c4aa51c;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) {
      iVar7 = *(undefined4 *)0x8c4aa51c;
      *(undefined4 *)0x8c4aa520 = *(undefined4 *)0x8c4aa520 + iVar3;
      *piVar1 = iVar7 + iVar4;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c215c4a\n.set _FUN_8c215c4a, _FUN_8c215c4a_def\n");
