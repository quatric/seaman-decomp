#include "../decls.h"
undefined8 * FUN_8c226474_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined8 *ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  double in_dr0;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  double in_dr4;
  float fVar21;
  undefined8 in_dr6;
  double dVar22;
  undefined8 uVar23;
  undefined8 in_dr8;
  undefined8 uVar25;
  undefined4 uVar27;
  double in_dr10;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  double in_dr12;
  double dVar31;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double dVar32;
  double in_xd6;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 in_xd8;
  undefined8 uVar35;
  bool bVar36;
  bool bVar37;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_34 [12];
  undefined4 auStack_28 [3];
  undefined4 uVar24;
  undefined4 uVar26;
  
  if (in_FPSCR_SZ == '\0') {
    puVar12 = auStack_28;
    stack0xffffffd4 = CONCAT44(SUB84(in_dr12,0),(*(uint*)((uchar*)&auStack_34+8)));
  }
  else {
    puVar12 = (undefined4 *)auStack_34;
  }
  if ((_DAT_8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),_DAT_8c4aa4a8);
      dVar31 = (double)CONCAT44(_DAT_8c4aa4b4,_DAT_8c4aa4a8);
      in_dr0 = (double)(ulonglong)_DAT_8c4aa4b8;
      dVar19 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
    }
    else {
      dVar31 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
      in_xd0 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
      dVar19 = (double)CONCAT44(_DAT_8c4aa4e4,_DAT_8c4aa4e0);
      in_xd2 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
    }
    puVar1 = (undefined4 *)((int)puVar12 + -0x24);
    *puVar1 = ar4;
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar12 + -0x20) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)((int)puVar12 + -0x1c) = SUB84(in_dr4,0);
    }
    else {
      *(double *)((int)puVar12 + -0x20) = in_dr4;
      *(double *)((int)puVar12 + -0x1c) = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * SUB84(dVar19,0));
    }
    else {
      dVar31 = dVar31 * dVar19;
    }
    *(undefined4 *)((int)puVar12 + -0x18) = ar5;
    if (in_FPSCR_PR == '\0') {
      fVar30 = SUB84(in_dr12,0) * (float)((ulonglong)dVar19 >> 0x20);
    }
    else {
      fVar30 = SUB84(in_dr12 * dVar19,0);
    }
    uVar14 = (undefined4)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar12 + -0x14) = uVar14;
      *(int *)((int)puVar12 + -0x10) = (int)in_dr6;
    }
    else {
      *(undefined8 *)((int)puVar12 + -0x14) = in_dr6;
      *(double *)((int)puVar12 + -0x10) = in_xd6;
    }
    *(undefined4 *)((int)puVar12 + -0xc) = ar6;
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar12 + -8) = (int)((ulonglong)in_dr8 >> 0x20);
      *(int *)((int)puVar12 + -4) = (int)in_dr8;
    }
    else {
      *(undefined8 *)((int)puVar12 + -8) = in_dr8;
      *(undefined8 *)((int)puVar12 + -4) = in_xd8;
    }
    iVar11 = 0;
    dVar18 = (double)CONCAT44(uVar14,0x3f800000);
    iVar2 = 0;
    iVar6 = 2;
    while( true ) {
      iVar3 = iVar2;
      uVar14 = (undefined4)((ulonglong)dVar19 >> 0x20);
      fVar15 = SUB84(in_dr10,0);
      fVar28 = (float)((ulonglong)in_dr10 >> 0x20);
      if (2 < iVar3) break;
      puVar8 = puVar1 + iVar6 * 3;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(uVar14,*(undefined4 *)*puVar8);
      }
      else {
        in_xd2 = *(double *)*puVar8;
      }
      piVar5 = puVar1 + iVar3 * 3;
      fVar20 = SUB84(dVar18,0);
      if (in_FPSCR_PR == '\0') {
        bVar36 = fVar20 < SUB84(dVar19,0);
      }
      else {
        bVar36 = dVar18 < dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)*piVar5);
      }
      else {
        in_xd2 = *(double *)*piVar5;
      }
      if (in_FPSCR_PR == '\0') {
        bVar37 = fVar20 < SUB84(dVar19,0);
      }
      else {
        bVar37 = dVar18 < dVar19;
      }
      if ((bVar36 ^ 1) != -(bVar37 - 1)) {
        pdVar4 = (double *)*puVar8;
        puVar10 = (undefined8 *)*piVar5;
        if (in_FPSCR_SZ == '\0') {
          fVar21 = *(float *)pdVar4;
          uVar17 = CONCAT44(*(undefined4 *)puVar10,fVar21);
          dVar19 = (double)CONCAT44(fVar21,SUB84(in_dr4,0));
        }
        else {
          in_xd2 = *pdVar4;
          uVar17 = *puVar10;
          fVar21 = (float)((ulonglong)in_xd2 >> 0x20);
          dVar19 = in_xd2;
        }
        fVar13 = (float)((ulonglong)uVar17 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44(fVar13 - fVar21,-(float)uVar17 + fVar20);
        }
        else {
          dVar19 = ((double)CONCAT44(fVar13,-(float)uVar17) + dVar18) - dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44(SUB84(dVar19,0),*(float *)(pdVar4 + 4));
        }
        else {
          in_xd4 = pdVar4[4];
          dVar18 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr4 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) /
                                    (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar18,0));
        }
        else {
          in_dr4 = dVar18 / dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(SUB84(in_dr4,0),*(undefined4 *)(puVar10 + 4));
        }
        else {
          in_xd2 = (double)puVar10[4];
          dVar19 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                    SUB84(dVar19,0) - SUB84(in_dr4,0));
        }
        else {
          dVar19 = dVar19 - in_dr4;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44(*(float *)((int)pdVar4 + 0x24),fVar20);
        }
        else {
          dVar22 = *(double *)((int)pdVar4 + 0x24);
        }
        uVar14 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        dVar32 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          dVar32 = (double)CONCAT44(uVar14,SUB84(in_dr0,0));
        }
        fVar20 = (float)((ulonglong)dVar32 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44(fVar20 * SUB84(dVar19,0) + (float)((ulonglong)dVar19 >> 0x20),
                                    SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                    *(undefined4 *)((int)puVar10 + 0x24));
        }
        else {
          in_xd2 = *(double *)((int)puVar10 + 0x24);
        }
        fVar21 = (float)((ulonglong)dVar22 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) - fVar21);
        }
        else {
          dVar19 = dVar19 - dVar22;
        }
        dVar18 = dVar22;
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = (double)CONCAT44(uVar14,(int)((ulonglong)dVar19 >> 0x20));
          dVar18 = (double)CONCAT44(fVar21,SUB84(dVar19,0));
          dVar19 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44(fVar20 * SUB84(dVar18,0) + (float)((ulonglong)dVar18 >> 0x20),
                                    SUB84(dVar18,0));
        }
        fVar20 = SUB84(in_dr4,0);
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar22,0));
          fVar21 = (float)((ulonglong)dVar31 >> 0x20);
          dVar22 = (double)CONCAT44(fVar20,SUB84(dVar32,0));
        }
        else {
          fVar21 = SUB84(dVar18,0);
          dVar22 = dVar19;
          in_xd2 = dVar31;
        }
        if (in_FPSCR_PR == '\0') {
          fVar21 = (float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar31,0) + fVar21;
        }
        pdVar4 = (double *)((int)puVar12 + iVar11 * 0x30 + -0xe4);
        if (in_FPSCR_SZ == '\0') {
          fVar13 = SUB84(dVar22,0);
          *(float *)pdVar4 = fVar21;
          fVar21 = fVar13;
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),fVar13);
        }
        else {
          *pdVar4 = in_xd2;
          in_xd2 = in_xd0;
          fVar13 = SUB84(dVar18,0);
          dVar22 = dVar18;
        }
        if (in_FPSCR_PR == '\0') {
          fVar21 = (float)((ulonglong)dVar22 >> 0x20) * fVar30 + fVar21;
        }
        uVar14 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar4 + 4) = fVar21;
          *(float *)(pdVar4 + 1) = SUB84(dVar18,0);
          fVar20 = (float)(uint)puVar8[1];
          in_dr4 = (double)CONCAT44(uVar14,fVar20);
          dVar32 = (double)CONCAT44(fVar20,piVar5[1]);
          in_xd4 = dVar19;
          dVar22 = (double)CONCAT44(uVar14,fVar13);
        }
        else {
          *(double *)((int)pdVar4 + 4) = in_xd2;
          pdVar4[1] = in_xd6;
          dVar32 = *(double *)(puVar8 + 1);
          in_xd2 = *(double *)(piVar5 + 1);
          in_xd4 = dVar32;
          dVar22 = in_dr4;
        }
        fVar21 = (float)((ulonglong)dVar22 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar20 = SUB84(dVar32,0) - fVar20;
          dVar32 = (double)CONCAT44(fVar21 * fVar20 + (float)((ulonglong)dVar32 >> 0x20),fVar20);
        }
        else {
          dVar32 = dVar32 - in_dr4;
        }
        uVar14 = (undefined4)((ulonglong)dVar32 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)pdVar4 + 0xc) = uVar14;
          dVar32 = (double)CONCAT44(uVar14,piVar5[2]);
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),puVar8[2]);
        }
        else {
          *(double *)((int)pdVar4 + 0xc) = dVar32;
          in_xd2 = *(double *)(piVar5 + 2);
          in_xd4 = *(double *)(puVar8 + 2);
        }
        fVar20 = SUB84(in_dr4,0);
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar32,0) - fVar20;
        }
        else {
          fVar13 = SUB84(dVar32 - in_dr4,0);
        }
        dVar19 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(fVar20,fVar13);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44(fVar21 * SUB84(dVar19,0) + (float)((ulonglong)dVar19 >> 0x20),
                                    SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(pdVar4 + 2) = (int)((ulonglong)dVar19 >> 0x20);
        }
        else {
          pdVar4[2] = dVar19;
        }
        in_dr0 = dVar22;
        if (DAT_8c277acc == 0) {
          piVar5 = puVar1 + iVar6 * 3;
          uVar14 = (undefined4)((ulonglong)in_dr4 >> 0x20);
          in_dr0 = in_dr4;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(uVar14,SUB84(dVar22,0));
          }
          iVar2 = *piVar5;
          *(int *)((int)puVar12 + -0xe8) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar20 = *(float *)(iVar2 + 0x10);
            in_dr4 = (double)CONCAT44(uVar14,fVar20);
            dVar19 = (double)CONCAT44(fVar20,SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(iVar2 + 0x10);
            in_xd4 = dVar19;
          }
          piVar9 = puVar1 + iVar3 * 3;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                      *(undefined4 *)(*piVar9 + 0x10));
          }
          else {
            in_xd2 = *(double *)(*piVar9 + 0x10);
          }
          fVar21 = (float)((ulonglong)in_dr0 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            fVar20 = SUB84(dVar19,0) - fVar20;
            dVar19 = (double)CONCAT44((fVar21 * fVar20 + (float)((ulonglong)dVar19 >> 0x20)) *
                                      fVar28,fVar20);
          }
          else {
            dVar19 = (dVar19 - in_dr4) * in_dr10;
          }
          uVar14 = (undefined4)((ulonglong)dVar19 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)pdVar4 + 0x14) = uVar14;
          }
          else {
            *(double *)((int)pdVar4 + 0x14) = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)((int)puVar12 + -0xec) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(iVar2 + 0x14)
                                     );
          }
          else {
            in_xd4 = *(double *)(iVar2 + 0x14);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(uVar14,*(undefined4 *)(*piVar9 + 0x14));
          }
          else {
            in_xd2 = *(double *)(*piVar9 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = SUB84(dVar19,0) - SUB84(in_dr4,0);
          }
          else {
            fVar20 = SUB84(dVar19 - in_dr4,0);
          }
          dVar19 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(SUB84(in_dr4,0),fVar20);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44(fVar21 * SUB84(dVar19,0) + (float)((ulonglong)dVar19 >> 0x20)
                                      + fVar15,SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + in_dr10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar4 + 3) = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            pdVar4[3] = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)((int)puVar12 + -0xf0) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(iVar2 + 0x18)
                                     );
          }
          else {
            in_xd4 = *(double *)(iVar2 + 0x18);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(SUB84(in_dr4,0),*(undefined4 *)(*piVar9 + 0x18));
          }
          else {
            in_xd2 = *(double *)(*piVar9 + 0x18);
            dVar19 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = SUB84(dVar19,0) - SUB84(in_dr4,0);
            dVar19 = (double)CONCAT44(fVar21 * fVar20 + (float)((ulonglong)dVar19 >> 0x20),fVar20);
          }
          else {
            dVar19 = dVar19 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                      *(undefined4 *)((int)puVar12 + 0x28));
          }
          else {
            in_xd2 = *(double *)((int)puVar12 + 0x28);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar4 + 0x1c) = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            *(double *)((int)pdVar4 + 0x1c) = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)((int)puVar12 + -0xf4) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(iVar2 + 0x1c)
                                     );
          }
          else {
            in_xd4 = *(double *)(iVar2 + 0x1c);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(SUB84(in_dr4,0),*(undefined4 *)(*piVar9 + 0x1c));
          }
          else {
            in_xd2 = *(double *)(*piVar9 + 0x1c);
            dVar19 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = SUB84(dVar19,0) - SUB84(in_dr4,0);
            dVar19 = (double)CONCAT44(fVar21 * fVar20 + (float)((ulonglong)dVar19 >> 0x20),fVar20);
          }
          else {
            dVar19 = dVar19 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                      *(undefined4 *)((int)puVar12 + 0x2c));
          }
          else {
            in_xd2 = *(double *)((int)puVar12 + 0x2c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar4 + 4) = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            pdVar4[4] = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)((int)puVar12 + -0xf8) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(iVar2 + 0x34)
                                     );
          }
          else {
            in_xd4 = *(double *)(iVar2 + 0x34);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(SUB84(in_dr4,0),*(undefined4 *)(*piVar9 + 0x34));
          }
          else {
            in_xd2 = *(double *)(*piVar9 + 0x34);
            dVar19 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = SUB84(dVar19,0) - SUB84(in_dr4,0);
            dVar19 = (double)CONCAT44(fVar21 * fVar20 + (float)((ulonglong)dVar19 >> 0x20),fVar20);
          }
          else {
            dVar19 = dVar19 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar4 + 0x24) = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            *(double *)((int)pdVar4 + 0x24) = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)((int)puVar12 + -0xfc) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(iVar2 + 0x38)
                                     );
          }
          else {
            in_xd4 = *(double *)(iVar2 + 0x38);
          }
          fVar20 = SUB84(in_dr4,0);
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(fVar20,*(undefined4 *)(*piVar9 + 0x38));
          }
          else {
            in_xd2 = *(double *)(*piVar9 + 0x38);
            dVar19 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar19,0) - fVar20;
            dVar19 = (double)CONCAT44(fVar21 * fVar13 + (float)((ulonglong)dVar19 >> 0x20),fVar13);
          }
          else {
            dVar19 = dVar19 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar4 + 5) = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            pdVar4[5] = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)((int)puVar12 + -0x100) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar20 = *(float *)(iVar2 + 0x3c);
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar20);
            dVar19 = (double)CONCAT44(fVar20,*(undefined4 *)(*piVar9 + 0x3c));
          }
          else {
            dVar19 = *(double *)(iVar2 + 0x3c);
            in_xd2 = *(double *)(*piVar9 + 0x3c);
            in_xd4 = dVar19;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = SUB84(dVar19,0) - fVar20;
            dVar19 = (double)CONCAT44(fVar21 * fVar20 + (float)((ulonglong)dVar19 >> 0x20),fVar20);
          }
          else {
            dVar19 = dVar19 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar4 + 0x2c) = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            *(double *)((int)pdVar4 + 0x2c) = dVar19;
          }
        }
        iVar11 = iVar11 + 1;
      }
      piVar5 = puVar1 + iVar3 * 3;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)*piVar5);
      }
      else {
        in_xd2 = *(double *)*piVar5;
      }
      if (in_FPSCR_PR == '\0') {
        bVar36 = SUB84(dVar18,0) < SUB84(dVar19,0);
      }
      else {
        bVar36 = dVar18 < dVar19;
      }
      if (bVar36) {
        pdVar4 = (double *)((int)puVar12 + iVar11 * 0x30 + -0xe4);
        if (in_FPSCR_SZ == '\0') {
          uVar14 = *(undefined4 *)(*piVar5 + 4);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),uVar14);
          *(undefined4 *)pdVar4 = uVar14;
        }
        else {
          in_xd2 = *(double *)(*piVar5 + 4);
          *pdVar4 = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar14 = *(undefined4 *)(*piVar5 + 8);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),uVar14);
          *(undefined4 *)((int)pdVar4 + 4) = uVar14;
        }
        else {
          in_xd2 = *(double *)(*piVar5 + 8);
          *(double *)((int)pdVar4 + 4) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(pdVar4 + 1) = *(undefined4 *)(*piVar5 + 0xc);
          *(int *)((int)pdVar4 + 0xc) = piVar5[1];
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),piVar5[2]);
          *(int *)(pdVar4 + 2) = piVar5[2];
        }
        else {
          pdVar4[1] = *(double *)(*piVar5 + 0xc);
          *(undefined8 *)((int)pdVar4 + 0xc) = *(undefined8 *)(piVar5 + 1);
          in_xd2 = *(double *)(piVar5 + 2);
          pdVar4[2] = in_xd2;
        }
        if (DAT_8c277acc == 0) {
          piVar5 = puVar1 + iVar3 * 3;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                      *(undefined4 *)(*piVar5 + 0x10));
          }
          else {
            in_xd2 = *(double *)(*piVar5 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) * fVar28);
          }
          else {
            dVar19 = dVar19 * in_dr10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar4 + 0x14) = SUB84(dVar19,0);
          }
          else {
            *(double *)((int)pdVar4 + 0x14) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                      *(undefined4 *)(*piVar5 + 0x14));
          }
          else {
            in_xd2 = *(double *)(*piVar5 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = SUB84(dVar19,0) + fVar15;
          }
          else {
            fVar15 = SUB84(dVar19 + in_dr10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(pdVar4 + 3) = fVar15;
            fVar15 = *(float *)((int)puVar12 + 0x28);
          }
          else {
            pdVar4[3] = in_xd2;
            in_xd2 = *(double *)((int)puVar12 + 0x28);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar5 + 0x18),fVar15);
          }
          else {
            dVar19 = *(double *)(*piVar5 + 0x18);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar4 + 0x1c) = (int)((ulonglong)dVar19 >> 0x20);
            dVar19 = (double)(ulonglong)*(uint *)((int)puVar12 + 0x2c);
          }
          else {
            *(double *)((int)pdVar4 + 0x1c) = dVar19;
            in_xd2 = *(double *)((int)puVar12 + 0x2c);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar5 + 0x1c),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(*piVar5 + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          uVar14 = (undefined4)((ulonglong)dVar19 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar4 + 4) = uVar14;
          }
          else {
            pdVar4[4] = dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(*piVar5 + 0x34);
            dVar19 = (double)CONCAT44(uVar14,uVar16);
            *(undefined4 *)((int)pdVar4 + 0x24) = uVar16;
          }
          else {
            in_xd2 = *(double *)(*piVar5 + 0x34);
            *(double *)((int)pdVar4 + 0x24) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar14 = *(undefined4 *)(*piVar5 + 0x38);
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),uVar14);
            *(undefined4 *)(pdVar4 + 5) = uVar14;
          }
          else {
            in_xd2 = *(double *)(*piVar5 + 0x38);
            pdVar4[5] = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar14 = *(undefined4 *)(*piVar5 + 0x3c);
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),uVar14);
            *(undefined4 *)((int)pdVar4 + 0x2c) = uVar14;
          }
          else {
            in_xd2 = *(double *)(*piVar5 + 0x3c);
            *(double *)((int)pdVar4 + 0x2c) = in_xd2;
          }
        }
        iVar11 = iVar11 + 1;
      }
      iVar2 = iVar3 + 1;
      iVar6 = iVar3;
    }
    if (DAT_8c277acc != 0) {
      piVar5 = (int *)((int)puVar12 + -0xc);
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(uVar14,*(undefined4 *)(*piVar5 + 0x10));
      }
      else {
        in_xd2 = *(double *)(*piVar5 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) * fVar28);
      }
      else {
        dVar19 = dVar19 * in_dr10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar12 + -0x70) = SUB84(dVar19,0);
      }
      else {
        *(double *)((int)puVar12 + -0x70) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(*piVar5 + 0x14));
      }
      else {
        in_xd2 = *(double *)(*piVar5 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar30 = SUB84(dVar19,0) + fVar15;
      }
      else {
        fVar30 = SUB84(dVar19 + in_dr10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar12 + -0x6c) = fVar30;
        fVar30 = *(float *)((int)puVar12 + 0x28);
      }
      else {
        *(double *)((int)puVar12 + -0x6c) = in_xd2;
        in_xd2 = *(double *)((int)puVar12 + 0x28);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar31 = (double)CONCAT44(*(undefined4 *)(*piVar5 + 0x18),fVar30);
      }
      else {
        dVar31 = *(double *)(*piVar5 + 0x18);
      }
      if (in_FPSCR_PR == '\0') {
        dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 + dVar31;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar12 + -0x68) = (int)((ulonglong)dVar31 >> 0x20);
      }
      else {
        *(double *)((int)puVar12 + -0x68) = dVar31;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar31 = (double)CONCAT44(*(undefined4 *)(*piVar5 + 0x1c),
                                  *(undefined4 *)((int)puVar12 + 0x2c));
      }
      else {
        in_xd2 = *(double *)((int)puVar12 + 0x2c);
        dVar31 = *(double *)(*piVar5 + 0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 + dVar31;
      }
      uVar14 = (undefined4)((ulonglong)dVar31 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar12 + -100) = uVar14;
      }
      else {
        *(double *)((int)puVar12 + -100) = dVar31;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar16 = *(undefined4 *)(*piVar5 + 0x34);
        dVar31 = (double)CONCAT44(uVar14,uVar16);
        *(undefined4 *)((int)puVar12 + -0x60) = uVar16;
      }
      else {
        in_xd2 = *(double *)(*piVar5 + 0x34);
        *(double *)((int)puVar12 + -0x60) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar14 = *(undefined4 *)(*piVar5 + 0x38);
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),uVar14);
        *(undefined4 *)((int)puVar12 + -0x5c) = uVar14;
      }
      else {
        in_xd2 = *(double *)(*piVar5 + 0x38);
        *(double *)((int)puVar12 + -0x5c) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(*piVar5 + 0x3c));
      }
      else {
        in_xd2 = *(double *)(*piVar5 + 0x3c);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar12 + -0x58) = SUB84(dVar31,0);
      }
      else {
        *(double *)((int)puVar12 + -0x58) = in_xd2;
      }
      if (iVar11 != 3) {
        piVar5 = (int *)((int)puVar12 + -0xc);
        if (in_FPSCR_SZ == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(*piVar5 + 0x10)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar5 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * fVar28);
        }
        else {
          dVar31 = dVar31 * in_dr10;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar12 + -0x40) = SUB84(dVar31,0);
        }
        else {
          *(double *)((int)puVar12 + -0x40) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(*piVar5 + 0x14)
                                   );
        }
        else {
          in_xd2 = *(double *)(*piVar5 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = SUB84(dVar31,0) + fVar15;
        }
        else {
          fVar15 = SUB84(dVar31 + in_dr10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar12 + -0x3c) = fVar15;
          fVar15 = *(float *)((int)puVar12 + 0x28);
        }
        else {
          *(double *)((int)puVar12 + -0x3c) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar31 = (double)CONCAT44(*(undefined4 *)(*piVar5 + 0x18),fVar15);
        }
        else {
          dVar31 = *(double *)(*piVar5 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar12 + -0x38) = (int)((ulonglong)dVar31 >> 0x20);
          dVar31 = (double)(ulonglong)*(uint *)((int)puVar12 + 0x2c);
        }
        else {
          *(double *)((int)puVar12 + -0x38) = dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar31 = (double)CONCAT44(*(undefined4 *)(*piVar5 + 0x1c),SUB84(dVar31,0));
        }
        else {
          dVar31 = *(double *)(*piVar5 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar12 + -0x34) = (int)((ulonglong)dVar31 >> 0x20);
        }
        else {
          *(double *)((int)puVar12 + -0x34) = dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar12 + -0x30) = *(undefined4 *)(*piVar5 + 0x34);
        }
        else {
          *(undefined8 *)((int)puVar12 + -0x30) = *(undefined8 *)(*piVar5 + 0x34);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar12 + -0x2c) = *(undefined4 *)(*piVar5 + 0x38);
        }
        else {
          *(undefined8 *)((int)puVar12 + -0x2c) = *(undefined8 *)(*piVar5 + 0x38);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar12 + -0x28) = *(undefined4 *)(*piVar5 + 0x3c);
        }
        else {
          *(undefined8 *)((int)puVar12 + -0x28) = *(undefined8 *)(*piVar5 + 0x3c);
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar26 = *(undefined4 *)((int)puVar12 + -0xe4);
      uVar14 = *(undefined4 *)((int)puVar12 + -0xe0);
      uVar16 = *(undefined4 *)((int)puVar12 + -0xdc);
      uVar24 = *(undefined4 *)((int)puVar12 + -0xd8);
      puVar10 = (undefined8 *)((int)puVar12 + -0xd0);
      *(undefined4 *)((int)ar7 + 0x14) = *(undefined4 *)((int)puVar12 + -0xd4);
      *(undefined4 *)(ar7 + 2) = uVar24;
      *(undefined4 *)((int)ar7 + 0xc) = uVar16;
      *(undefined4 *)(ar7 + 1) = uVar14;
      puVar7 = (undefined8 *)((int)ar7 + 4);
      *(undefined4 *)puVar7 = uVar26;
    }
    else {
      uVar25 = *(undefined8 *)((int)puVar12 + -0xe4);
      uVar17 = *(undefined8 *)((int)puVar12 + -0xdc);
      uVar33 = *(undefined8 *)((int)puVar12 + -0xd4);
      uVar23 = *(undefined8 *)((int)puVar12 + -0xcc);
      puVar10 = (undefined8 *)((int)puVar12 + -0xbc);
      ar7[2] = *(undefined8 *)((int)puVar12 + -0xc4);
      ar7[1] = uVar23;
      *ar7 = uVar33;
      ar7[-1] = uVar17;
      puVar7 = ar7 + -2;
      *puVar7 = uVar25;
    }
    *(undefined4 *)((int)puVar7 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar29 = *(undefined4 *)puVar10;
      uVar27 = *(undefined4 *)((int)puVar10 + 4);
      uVar26 = *(undefined4 *)(puVar10 + 1);
      uVar16 = *(undefined4 *)((int)puVar10 + 0xc);
      uVar24 = *(undefined4 *)(puVar10 + 2);
      uVar14 = *(undefined4 *)((int)puVar10 + 0x14);
      *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar10 + 3);
      *(undefined4 *)((int)puVar7 + 0x34) = uVar14;
      *(undefined4 *)(puVar7 + 6) = uVar24;
      *(undefined4 *)(puVar7 + 5) = uVar16;
      *(undefined4 *)((int)puVar7 + 0x24) = uVar26;
      *(undefined4 *)(puVar7 + 4) = uVar27;
      *(undefined4 *)((int)puVar7 + 0x1c) = uVar29;
      uVar14 = *(undefined4 *)((int)puVar12 + -0xb4);
      uVar26 = *(undefined4 *)((int)puVar12 + -0xb0);
      uVar16 = *(undefined4 *)((int)puVar12 + -0xac);
      uVar24 = *(undefined4 *)((int)puVar12 + -0xa8);
      puVar10 = (undefined8 *)((int)puVar12 + -0xa0);
      *(undefined4 *)(puVar7 + 10) = *(undefined4 *)((int)puVar12 + -0xa4);
      *(undefined4 *)((int)puVar7 + 0x4c) = uVar24;
      *(undefined4 *)(puVar7 + 9) = uVar16;
      *(undefined4 *)((int)puVar7 + 0x44) = uVar26;
      puVar7 = puVar7 + 8;
      *(undefined4 *)puVar7 = uVar14;
    }
    else {
      uVar25 = *puVar10;
      uVar35 = puVar10[1];
      uVar23 = puVar10[2];
      uVar34 = puVar10[3];
      uVar17 = puVar10[4];
      uVar33 = puVar10[5];
      *(undefined8 *)((int)puVar7 + 0x34) = puVar10[6];
      *(undefined8 *)((int)puVar7 + 0x2c) = uVar33;
      *(undefined8 *)((int)puVar7 + 0x24) = uVar17;
      puVar7[3] = uVar34;
      puVar7[2] = uVar23;
      puVar7[1] = uVar35;
      *puVar7 = uVar25;
      uVar17 = *(undefined8 *)((int)puVar12 + -0xb4);
      uVar25 = *(undefined8 *)((int)puVar12 + -0xac);
      uVar33 = *(undefined8 *)((int)puVar12 + -0xa4);
      uVar23 = *(undefined8 *)((int)puVar12 + -0x9c);
      puVar10 = (undefined8 *)((int)puVar12 + -0x8c);
      puVar7[6] = *(undefined8 *)((int)puVar12 + -0x94);
      puVar7[5] = uVar23;
      puVar7[4] = uVar33;
      puVar7[3] = uVar25;
      puVar7 = puVar7 + 2;
      *puVar7 = uVar17;
    }
    *(undefined4 *)((int)puVar7 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar29 = *(undefined4 *)puVar10;
      uVar27 = *(undefined4 *)((int)puVar10 + 4);
      uVar16 = *(undefined4 *)(puVar10 + 1);
      uVar26 = *(undefined4 *)((int)puVar10 + 0xc);
      uVar14 = *(undefined4 *)(puVar10 + 2);
      uVar24 = *(undefined4 *)((int)puVar10 + 0x14);
      *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar10 + 3);
      *(undefined4 *)((int)puVar7 + 0x34) = uVar24;
      *(undefined4 *)(puVar7 + 6) = uVar14;
      *(undefined4 *)(puVar7 + 5) = uVar26;
      *(undefined4 *)((int)puVar7 + 0x24) = uVar16;
      *(undefined4 *)(puVar7 + 4) = uVar27;
      puVar7 = (undefined8 *)((int)puVar7 + 0x1c);
      *(undefined4 *)puVar7 = uVar29;
    }
    else {
      uVar25 = *puVar10;
      uVar35 = puVar10[1];
      uVar34 = puVar10[2];
      uVar23 = puVar10[3];
      uVar33 = puVar10[4];
      uVar17 = puVar10[5];
      *(undefined8 *)((int)puVar7 + 0x34) = puVar10[6];
      *(undefined8 *)((int)puVar7 + 0x2c) = uVar17;
      *(undefined8 *)((int)puVar7 + 0x24) = uVar33;
      puVar7[3] = uVar23;
      puVar7[2] = uVar34;
      puVar7[1] = uVar35;
      *puVar7 = uVar25;
    }
    if (iVar11 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar24 = *(undefined4 *)((int)puVar12 + -0x54);
        uVar26 = *(undefined4 *)((int)puVar12 + -0x50);
        uVar14 = *(undefined4 *)((int)puVar12 + -0x4c);
        uVar16 = *(undefined4 *)((int)puVar12 + -0x48);
        puVar10 = (undefined8 *)((int)puVar12 + -0x40);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)((int)puVar12 + -0x44);
        *(undefined4 *)(puVar7 + 6) = uVar16;
        *(undefined4 *)((int)puVar7 + 0x2c) = uVar14;
        *(undefined4 *)(puVar7 + 5) = uVar26;
        puVar7 = (undefined8 *)((int)puVar7 + 0x24);
        *(undefined4 *)puVar7 = uVar24;
      }
      else {
        uVar33 = *(undefined8 *)((int)puVar12 + -0x54);
        uVar23 = *(undefined8 *)((int)puVar12 + -0x4c);
        uVar25 = *(undefined8 *)((int)puVar12 + -0x44);
        uVar17 = *(undefined8 *)((int)puVar12 + -0x3c);
        puVar10 = (undefined8 *)((int)puVar12 + -0x2c);
        puVar7[6] = *(undefined8 *)((int)puVar12 + -0x34);
        puVar7[5] = uVar17;
        puVar7[4] = uVar25;
        puVar7[3] = uVar23;
        puVar7 = puVar7 + 2;
        *puVar7 = uVar33;
      }
      *(undefined4 *)((int)puVar7 + -4) = 0xe0000000;
      if (in_FPSCR_SZ == '\0') {
        uVar29 = *(undefined4 *)puVar10;
        uVar27 = *(undefined4 *)((int)puVar10 + 4);
        uVar26 = *(undefined4 *)(puVar10 + 1);
        uVar16 = *(undefined4 *)((int)puVar10 + 0xc);
        uVar24 = *(undefined4 *)(puVar10 + 2);
        uVar14 = *(undefined4 *)((int)puVar10 + 0x14);
        *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar10 + 3);
        *(undefined4 *)((int)puVar7 + 0x34) = uVar14;
        *(undefined4 *)(puVar7 + 6) = uVar24;
        *(undefined4 *)(puVar7 + 5) = uVar16;
        *(undefined4 *)((int)puVar7 + 0x24) = uVar26;
        *(undefined4 *)(puVar7 + 4) = uVar27;
        puVar7 = (undefined8 *)((int)puVar7 + 0x1c);
        *(undefined4 *)puVar7 = uVar29;
      }
      else {
        uVar25 = *puVar10;
        uVar35 = puVar10[1];
        uVar23 = puVar10[2];
        uVar34 = puVar10[3];
        uVar17 = puVar10[4];
        uVar33 = puVar10[5];
        *(undefined8 *)((int)puVar7 + 0x34) = puVar10[6];
        *(undefined8 *)((int)puVar7 + 0x2c) = uVar33;
        *(undefined8 *)((int)puVar7 + 0x24) = uVar17;
        puVar7[3] = uVar34;
        puVar7[2] = uVar23;
        puVar7[1] = uVar35;
        *puVar7 = uVar25;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar26 = *(undefined4 *)((int)puVar12 + -0x84);
      uVar14 = *(undefined4 *)((int)puVar12 + -0x80);
      uVar24 = *(undefined4 *)((int)puVar12 + -0x7c);
      uVar16 = *(undefined4 *)((int)puVar12 + -0x78);
      puVar10 = (undefined8 *)((int)puVar12 + -0x70);
      *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)((int)puVar12 + -0x74);
      *(undefined4 *)(puVar7 + 6) = uVar16;
      *(undefined4 *)((int)puVar7 + 0x2c) = uVar24;
      *(undefined4 *)(puVar7 + 5) = uVar14;
      puVar7 = (undefined8 *)((int)puVar7 + 0x24);
      *(undefined4 *)puVar7 = uVar26;
    }
    else {
      uVar23 = *(undefined8 *)((int)puVar12 + -0x84);
      uVar25 = *(undefined8 *)((int)puVar12 + -0x7c);
      uVar17 = *(undefined8 *)((int)puVar12 + -0x74);
      uVar33 = *(undefined8 *)((int)puVar12 + -0x6c);
      puVar10 = (undefined8 *)((int)puVar12 + -0x5c);
      puVar7[6] = *(undefined8 *)((int)puVar12 + -100);
      puVar7[5] = uVar33;
      puVar7[4] = uVar17;
      puVar7[3] = uVar25;
      puVar7 = puVar7 + 2;
      *puVar7 = uVar23;
    }
    *(undefined4 *)((int)puVar7 + -4) = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar29 = *(undefined4 *)puVar10;
      uVar27 = *(undefined4 *)((int)puVar10 + 4);
      uVar26 = *(undefined4 *)(puVar10 + 1);
      uVar16 = *(undefined4 *)((int)puVar10 + 0xc);
      uVar14 = *(undefined4 *)(puVar10 + 2);
      uVar24 = *(undefined4 *)((int)puVar10 + 0x14);
      *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar10 + 3);
      *(undefined4 *)((int)puVar7 + 0x34) = uVar24;
      *(undefined4 *)(puVar7 + 6) = uVar14;
      *(undefined4 *)(puVar7 + 5) = uVar16;
      *(undefined4 *)((int)puVar7 + 0x24) = uVar26;
      *(undefined4 *)(puVar7 + 4) = uVar27;
      puVar7 = (undefined8 *)((int)puVar7 + 0x1c);
      *(undefined4 *)puVar7 = uVar29;
    }
    else {
      uVar25 = *puVar10;
      uVar35 = puVar10[1];
      uVar23 = puVar10[2];
      uVar34 = puVar10[3];
      uVar33 = puVar10[4];
      uVar17 = puVar10[5];
      *(undefined8 *)((int)puVar7 + 0x34) = puVar10[6];
      *(undefined8 *)((int)puVar7 + 0x2c) = uVar17;
      *(undefined8 *)((int)puVar7 + 0x24) = uVar33;
      puVar7[3] = uVar34;
      puVar7[2] = uVar23;
      puVar7[1] = uVar35;
      *puVar7 = uVar25;
    }
    ar7 = puVar7 + 4;
    _DAT_8c4aa520 = _DAT_8c4aa520 + iVar11;
  }
  return ar7;
}

__asm__(".globl _FUN_8c226474\n.set _FUN_8c226474, _FUN_8c226474_def\n");
