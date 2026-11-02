#include "../decls.h"
undefined8 * FUN_8c224b00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined8 *ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  double *pdVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar15;
  longlong lVar14;
  undefined4 uVar16;
  double in_dr2;
  float fVar22;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar23;
  undefined4 uVar24;
  ulonglong uVar21;
  double in_dr4;
  undefined4 uVar25;
  longlong in_dr6;
  uint uVar26;
  undefined4 uVar27;
  double in_dr8;
  double in_dr10;
  float fVar28;
  undefined4 uVar29;
  undefined8 in_dr12;
  double dVar30;
  float fVar31;
  double in_dr14;
  double dVar32;
  double in_xd2;
  longlong in_xd4;
  undefined8 uVar33;
  longlong in_xd6;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 in_xd8;
  undefined8 uVar36;
  double in_xd10;
  double in_xd12;
  double dVar37;
  double in_xd14;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  int aiStack_48 [3];
  undefined1 auStack_3c [16];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  float fStack_20;
  
  fVar31 = SUB84(in_dr14,0);
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44(fVar31,uStack_24);
    puVar12 = &uStack_2c;
    uStack_2c = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar12 = (undefined8 *)auStack_3c;
  }
  if ((_DAT_8c4aa4f0 & 0x10000) == 0) {
    uVar24 = (undefined4)((ulonglong)in_dr10 >> 0x20);
    if ((_DAT_8c4aa4f0 & 0x20000) == 0) {
      if (in_FPSCR_SZ == '\0') {
        fVar31 = 0.5;
        in_dr10 = (double)CONCAT44(uVar24,0x3f000000);
      }
      else {
        in_xd10 = -4.0993800778166205e-250;
        in_xd14 = in_xd10;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),0x3f000000);
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),DAT_8c277af8);
      }
      else {
        in_xd2 = -4.0993800778166205e-250;
        in_xd14 = (double)CONCAT44(DAT_8c277afc,DAT_8c277af8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar31 = SUB84(in_dr14,0) + SUB84(in_dr2,0);
      }
      else {
        fVar31 = SUB84(in_dr14 + in_dr2,0);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr10 = (double)CONCAT44(uVar24,DAT_8c277afc);
      }
      else {
        in_xd10 = (double)CONCAT44((*(uint *)0x8c277b00),DAT_8c277afc);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),
                                   SUB84(in_dr10,0) + SUB84(in_dr2,0));
      }
      else {
        in_dr10 = in_dr10 + in_dr2;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(_DAT_8c4aa4e0,SUB84(in_dr2,0));
      dVar30 = (double)CONCAT44(_DAT_8c4aa4a8,_DAT_8c4aa4a8);
    }
    else {
      dVar30 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
      dVar20 = (double)CONCAT44(_DAT_8c4aa4e4,_DAT_8c4aa4e0);
      in_xd12 = dVar30;
    }
    fVar22 = (float)((ulonglong)dVar20 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar22,SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 * dVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(fVar22,_DAT_8c4aa4dc);
      uVar24 = SUB84(dVar30,0);
      dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),_DAT_8c4aa4b4);
      dVar37 = in_xd12;
      in_xd12 = (double)CONCAT44(uVar24,fVar31);
    }
    else {
      in_xd2 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
      dVar37 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
    }
    puVar1 = (undefined4 *)((int)puVar12 + -0xc);
    if (in_FPSCR_PR == '\0') {
      dVar32 = (double)CONCAT44((float)((ulonglong)in_xd12 >> 0x20) * SUB84(dVar20,0),
                                SUB84(in_xd12,0));
    }
    else {
      dVar32 = in_xd12 * dVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),_DAT_8c4aa4b8);
      *(undefined4 *)((int)puVar12 + -0xd0) = _DAT_8c4aa4b8;
    }
    else {
      in_xd2 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
      *(double *)((int)puVar12 + -0xd0) = in_xd2;
    }
    *puVar1 = ar4;
    *(undefined4 *)((int)puVar12 + -8) = ar5;
    *(undefined4 *)((int)puVar12 + -4) = ar6;
    iVar11 = 0;
    iVar2 = 0;
    iVar7 = 2;
    while( true ) {
      iVar3 = iVar2;
      uVar25 = SUB84(in_dr10,0);
      fVar28 = (float)((ulonglong)in_dr10 >> 0x20);
      uVar24 = SUB84(in_dr8,0);
      fVar22 = (float)((ulonglong)in_dr8 >> 0x20);
      uVar26 = (uint)((ulonglong)in_dr6 >> 0x20);
      fVar31 = (float)((ulonglong)in_dr4 >> 0x20);
      if (2 < iVar3) break;
      piVar6 = puVar1 + iVar7;
      piVar9 = puVar1 + iVar3;
      if (in_FPSCR_SZ == '\0') {
        uVar17 = CONCAT44(*(undefined4 *)*piVar6,0x3f800000);
      }
      else {
        uVar17 = *(undefined8 *)*piVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)*piVar9,(float)uVar17);
      }
      else {
        uVar18 = *(undefined8 *)*piVar9;
      }
      fVar13 = (float)uVar18;
      if (((in_FPSCR_PR == '\0' && (float)uVar17 < (float)((ulonglong)uVar17 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar13 < (float)((ulonglong)uVar18 >> 0x20)) - 1)) {
        pdVar10 = (double *)*piVar6;
        if (in_FPSCR_SZ == '\0') {
          fVar13 = *(float *)pdVar10;
          *(float *)((int)puVar12 + -0xdc) = fVar13;
        }
        else {
          in_xd2 = *pdVar10;
          *(double *)((int)puVar12 + -0xdc) = in_xd2;
        }
        pdVar4 = (double *)*piVar9;
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)pdVar4,*(undefined4 *)((int)puVar12 + -0xdc));
        }
        else {
          dVar20 = *pdVar4;
        }
        dVar19 = (double)CONCAT44(0x3f800000,-fVar13);
        if (in_FPSCR_PR == '\0') {
          fVar15 = (float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar20,0);
          dVar20 = (double)CONCAT44(fVar15,SUB84(dVar20,0));
          fVar15 = (-fVar13 + 1.0) / fVar15;
        }
        else {
          dVar20 = dVar20 - dVar20;
          fVar15 = SUB84((dVar19 + dVar19) / dVar20,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar12 + -0x130) = fVar15;
          uVar23 = *(undefined4 *)(pdVar10 + 4);
          *(undefined4 *)((int)puVar12 + -0xe0) = uVar23;
          dVar19 = (double)CONCAT44(*(undefined4 *)(pdVar4 + 4),uVar23);
          dVar20 = (double)CONCAT44(uVar23,SUB84(dVar20,0));
        }
        else {
          *(double *)((int)puVar12 + -0x130) = in_xd2;
          dVar20 = pdVar10[4];
          *(double *)((int)puVar12 + -0xe0) = dVar20;
          dVar19 = pdVar4[4];
          uVar23 = SUB84(dVar19,0);
          in_xd2 = dVar20;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                    (float)((ulonglong)dVar20 >> 0x20),uVar23);
        }
        else {
          dVar19 = dVar19 - dVar20;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x130),SUB84(dVar20,0));
        }
        else {
          uVar17 = *(undefined8 *)((int)puVar12 + -0x130);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)uVar17 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar12 + -0xd4) = SUB84(dVar19,0);
          uVar23 = *(undefined4 *)((int)pdVar10 + 0x24);
          *(undefined4 *)((int)puVar12 + -0xe4) = uVar23;
          dVar20 = (double)CONCAT44(uVar23,(int)uVar17);
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0x24),uVar23);
        }
        else {
          *(double *)((int)puVar12 + -0xd4) = in_xd2;
          dVar20 = *(double *)((int)pdVar10 + 0x24);
          *(double *)((int)puVar12 + -0xe4) = dVar20;
          dVar19 = *(double *)((int)pdVar4 + 0x24);
          in_xd2 = dVar20;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                    (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar20;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x130),SUB84(dVar20,0));
        }
        else {
          uVar17 = *(undefined8 *)((int)puVar12 + -0x130);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)uVar17 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        fVar13 = SUB84(dVar19,0);
        pdVar10 = (double *)((int)puVar12 + iVar11 * 0x30 + -0xcc);
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar12 + -0xd8) = fVar13;
          uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0xd4),(int)uVar17);
          fVar13 = SUB84(dVar30,0);
        }
        else {
          *(double *)((int)puVar12 + -0xd8) = in_xd2;
          uVar17 = *(undefined8 *)((int)puVar12 + -0xd4);
          in_xd2 = dVar37;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = (float)((ulonglong)uVar17 >> 0x20) * (float)((ulonglong)dVar32 >> 0x20) + fVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)pdVar10 = fVar13;
          fVar13 = *(float *)((int)puVar12 + -0xd0);
          uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0xd8),(int)uVar17);
        }
        else {
          *pdVar10 = in_xd2;
          in_xd2 = *(double *)((int)puVar12 + -0xd0);
          uVar17 = *(undefined8 *)((int)puVar12 + -0xd8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = (float)((ulonglong)uVar17 >> 0x20) * (float)((ulonglong)dVar30 >> 0x20) + fVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar10 + 4) = fVar13;
        }
        else {
          *(double *)((int)pdVar10 + 4) = in_xd2;
        }
        uVar23 = 0x3f800000;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(pdVar10 + 1) = 0x3f800000;
        }
        else {
          pdVar10[1] = in_xd2;
        }
        iVar2 = *piVar6;
        *(int *)((int)puVar12 + -0x10c) = iVar2;
        if (in_FPSCR_SZ == '\0') {
          uVar23 = *(undefined4 *)(iVar2 + 0x28);
          *(undefined4 *)((int)puVar12 + -0x100) = uVar23;
        }
        else {
          in_xd2 = *(double *)(iVar2 + 0x28);
          *(double *)((int)puVar12 + -0x100) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar9 + 0x28),uVar23);
          dVar20 = (double)CONCAT44(uVar23,(int)uVar17);
        }
        else {
          dVar19 = *(double *)(*piVar9 + 0x28);
          dVar20 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                    (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar20;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x130),SUB84(dVar20,0));
        }
        else {
          uVar17 = *(undefined8 *)((int)puVar12 + -0x130);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)uVar17 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          uVar23 = (undefined4)uVar17;
          fVar13 = 0.5;
          dVar20 = (double)CONCAT44(SUB84(dVar32,0),SUB84(dVar19,0));
        }
        else {
          uVar23 = 0x3f000000;
          fVar13 = -3.4151213e-25;
          dVar20 = in_xd14;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44(fVar13 * SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20),
                                    SUB84(dVar20,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + 0xc) = (int)((ulonglong)dVar20 >> 0x20);
        }
        else {
          *(double *)((int)pdVar10 + 0xc) = dVar20;
        }
        iVar2 = *piVar6;
        *(int *)((int)puVar12 + -0x110) = iVar2;
        if (in_FPSCR_SZ == '\0') {
          uVar16 = *(undefined4 *)(iVar2 + 0x2c);
          *(undefined4 *)((int)puVar12 + -0x104) = uVar16;
        }
        else {
          in_xd2 = *(double *)(iVar2 + 0x2c);
          uVar16 = SUB84(dVar20,0);
          *(double *)((int)puVar12 + -0x104) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar9 + 0x2c),uVar16);
          dVar20 = (double)CONCAT44(uVar16,uVar23);
        }
        else {
          dVar19 = *(double *)(*piVar9 + 0x2c);
          dVar20 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                    (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar20;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x130),SUB84(dVar20,0));
        }
        else {
          uVar17 = *(undefined8 *)((int)puVar12 + -0x130);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)uVar17 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          uVar23 = (undefined4)uVar17;
          fVar13 = 0.5;
          dVar20 = (double)CONCAT44(uVar25,SUB84(dVar19,0));
        }
        else {
          uVar23 = 0x3f000000;
          fVar13 = -3.4151213e-25;
          dVar20 = in_xd10;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44(fVar13 * SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20),
                                    SUB84(dVar20,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(pdVar10 + 2) = (int)((ulonglong)dVar20 >> 0x20);
        }
        else {
          pdVar10[2] = dVar20;
        }
        if (DAT_8c277acc == 0) {
          piVar6 = puVar1 + iVar7;
          iVar2 = *piVar6;
          piVar9 = puVar1 + iVar3;
          *(int *)((int)puVar12 + -0x114) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(iVar2 + 0x10);
            *(undefined4 *)((int)puVar12 + -0x108) = uVar16;
          }
          else {
            in_xd2 = *(double *)(iVar2 + 0x10);
            uVar16 = SUB84(dVar20,0);
            *(double *)((int)puVar12 + -0x108) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar9 + 0x10),uVar16);
            dVar20 = (double)CONCAT44(uVar16,uVar23);
          }
          else {
            dVar19 = *(double *)(*piVar9 + 0x10);
            dVar20 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 - dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x130),SUB84(dVar20,0));
          }
          else {
            uVar17 = *(undefined8 *)((int)puVar12 + -0x130);
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = ((float)((ulonglong)uVar17 >> 0x20) * (float)((ulonglong)dVar19 >> 0x20) +
                     SUB84(dVar19,0)) * fVar31;
          }
          else {
            fVar13 = SUB84(dVar19 * in_dr4,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)pdVar10 + 0x14) = fVar13;
          }
          else {
            *(double *)((int)pdVar10 + 0x14) = in_xd2;
          }
          iVar2 = *piVar6;
          *(int *)((int)puVar12 + -0x118) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)(iVar2 + 0x14);
            *(float *)((int)puVar12 + -0xf4) = fVar13;
          }
          else {
            in_xd2 = *(double *)(iVar2 + 0x14);
            *(double *)((int)puVar12 + -0xf4) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar9 + 0x14),fVar13);
            dVar20 = (double)CONCAT44(fVar13,(int)uVar17);
          }
          else {
            dVar19 = *(double *)(*piVar9 + 0x14);
            dVar20 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 - dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x130),SUB84(dVar20,0));
          }
          else {
            uVar17 = *(undefined8 *)((int)puVar12 + -0x130);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)(ulonglong)
                             (uint)((float)((ulonglong)uVar17 >> 0x20) *
                                    (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
          }
          dVar20 = in_dr8;
          lVar14 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = (double)CONCAT44(fVar22,SUB84(dVar19,0));
            lVar14 = CONCAT44(SUB84(in_dr4,0),(int)uVar17);
          }
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)lVar14 >> 0x20) * SUB84(dVar20,0) +
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar10 + 3) = (int)((ulonglong)dVar20 >> 0x20);
          }
          else {
            pdVar10[3] = dVar20;
          }
          iVar2 = *piVar6;
          *(int *)((int)puVar12 + -0x11c) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            uVar23 = *(undefined4 *)(iVar2 + 0x18);
            *(undefined4 *)((int)puVar12 + -0xf8) = uVar23;
          }
          else {
            in_xd2 = *(double *)(iVar2 + 0x18);
            uVar23 = SUB84(dVar20,0);
            *(double *)((int)puVar12 + -0xf8) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar9 + 0x18),uVar23);
            dVar20 = (double)CONCAT44(uVar23,(int)lVar14);
          }
          else {
            dVar19 = *(double *)(*piVar9 + 0x18);
            dVar20 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 - dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x130),SUB84(dVar20,0));
          }
          else {
            uVar17 = *(undefined8 *)((int)puVar12 + -0x130);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)(ulonglong)
                             (uint)((float)((ulonglong)uVar17 >> 0x20) *
                                    (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
          }
          uVar18 = in_xd8;
          lVar14 = in_dr6;
          if (in_FPSCR_SZ == '\0') {
            uVar18 = CONCAT44(uVar24,SUB84(dVar19,0));
            lVar14 = CONCAT44(uVar26,(int)uVar17);
          }
          if (in_FPSCR_PR == '\0') {
            uVar18 = CONCAT44((float)((ulonglong)lVar14 >> 0x20) * (float)uVar18 +
                              (float)((ulonglong)uVar18 >> 0x20),(float)uVar18);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar10 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
          }
          else {
            *(undefined8 *)((int)pdVar10 + 0x1c) = uVar18;
          }
          iVar2 = *piVar6;
          *(int *)((int)puVar12 + -0x120) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            uVar23 = *(undefined4 *)(iVar2 + 0x1c);
            *(undefined4 *)((int)puVar12 + -0xfc) = uVar23;
          }
          else {
            in_xd2 = *(double *)(iVar2 + 0x1c);
            uVar23 = (undefined4)uVar18;
            *(double *)((int)puVar12 + -0xfc) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar9 + 0x1c),uVar23);
            dVar20 = (double)CONCAT44(uVar23,(int)lVar14);
          }
          else {
            dVar19 = *(double *)(*piVar9 + 0x1c);
            dVar20 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 - dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x130),SUB84(dVar20,0));
          }
          else {
            uVar17 = *(undefined8 *)((int)puVar12 + -0x130);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)(ulonglong)
                             (uint)((float)((ulonglong)uVar17 >> 0x20) *
                                    (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
          }
          dVar20 = in_dr10;
          lVar14 = in_xd6;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = (double)CONCAT44(fVar28,SUB84(dVar19,0));
            lVar14 = CONCAT44((int)in_dr6,(int)uVar17);
          }
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)lVar14 >> 0x20) * SUB84(dVar20,0) +
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar10 + 4) = (int)((ulonglong)dVar20 >> 0x20);
          }
          else {
            pdVar10[4] = dVar20;
          }
          iVar2 = *piVar6;
          *(int *)((int)puVar12 + -0x124) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            uVar23 = *(undefined4 *)(iVar2 + 0x34);
            *(undefined4 *)((int)puVar12 + -0xe8) = uVar23;
          }
          else {
            in_xd2 = *(double *)(iVar2 + 0x34);
            uVar23 = SUB84(dVar20,0);
            *(double *)((int)puVar12 + -0xe8) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar9 + 0x34),uVar23);
            dVar20 = (double)CONCAT44(uVar23,(int)lVar14);
          }
          else {
            dVar19 = *(double *)(*piVar9 + 0x34);
            dVar20 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 - dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x130),SUB84(dVar20,0));
          }
          else {
            uVar17 = *(undefined8 *)((int)puVar12 + -0x130);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)(ulonglong)
                             (uint)((float)((ulonglong)uVar17 >> 0x20) *
                                    (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
          }
          uVar23 = SUB84(dVar19,0);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)pdVar10 + 0x24) = uVar23;
          }
          else {
            *(double *)((int)pdVar10 + 0x24) = in_xd2;
          }
          iVar2 = *piVar6;
          *(int *)((int)puVar12 + -0x128) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            uVar23 = *(undefined4 *)(iVar2 + 0x38);
            *(undefined4 *)((int)puVar12 + -0xec) = uVar23;
          }
          else {
            in_xd2 = *(double *)(iVar2 + 0x38);
            *(double *)((int)puVar12 + -0xec) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar9 + 0x38),uVar23);
            dVar20 = (double)CONCAT44(uVar23,(int)uVar17);
          }
          else {
            dVar19 = *(double *)(*piVar9 + 0x38);
            dVar20 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 - dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x130),SUB84(dVar20,0));
          }
          else {
            uVar17 = *(undefined8 *)((int)puVar12 + -0x130);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)(ulonglong)
                             (uint)((float)((ulonglong)uVar17 >> 0x20) *
                                    (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
          }
          uVar23 = SUB84(dVar19,0);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar10 + 5) = uVar23;
          }
          else {
            pdVar10[5] = in_xd2;
          }
          iVar2 = *piVar6;
          *(int *)((int)puVar12 + -300) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            uVar23 = *(undefined4 *)(iVar2 + 0x3c);
            *(undefined4 *)((int)puVar12 + -0xf0) = uVar23;
          }
          else {
            in_xd2 = *(double *)(iVar2 + 0x3c);
            *(double *)((int)puVar12 + -0xf0) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*piVar9 + 0x3c),uVar23);
            dVar20 = (double)CONCAT44(uVar23,(int)uVar17);
          }
          else {
            dVar19 = *(double *)(*piVar9 + 0x3c);
            dVar20 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 - dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)((int)puVar12 + -0x130);
          }
          else {
            fVar13 = (float)((ulonglong)*(undefined8 *)((int)puVar12 + -0x130) >> 0x20);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)(ulonglong)
                             (uint)(fVar13 * (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar10 + 0x2c) = SUB84(dVar19,0);
          }
          else {
            *(double *)((int)pdVar10 + 0x2c) = in_xd2;
          }
        }
        iVar11 = iVar11 + 1;
      }
      piVar6 = puVar1 + iVar3;
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)*piVar6,0x3f800000);
      }
      else {
        dVar20 = *(double *)*piVar6;
      }
      if (in_FPSCR_PR == '\0' && SUB84(dVar20,0) < (float)((ulonglong)dVar20 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          uVar17 = CONCAT44(*(undefined4 *)(*piVar6 + 4),SUB84(dVar20,0));
        }
        else {
          uVar17 = *(undefined8 *)(*piVar6 + 4);
        }
        puVar5 = (undefined8 *)((int)puVar12 + iVar11 * 0x30 + -0xcc);
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar5 = (int)((ulonglong)uVar17 >> 0x20);
        }
        else {
          *puVar5 = uVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar23 = *(undefined4 *)(*piVar6 + 8);
          uVar17 = CONCAT44(uVar23,(int)uVar17);
          *(undefined4 *)((int)puVar5 + 4) = uVar23;
        }
        else {
          uVar17 = *(undefined8 *)(*piVar6 + 8);
          *(undefined8 *)((int)puVar5 + 4) = uVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar23 = *(undefined4 *)(*piVar6 + 0xc);
          uVar17 = CONCAT44(uVar23,(int)uVar17);
          *(undefined4 *)(puVar5 + 1) = uVar23;
        }
        else {
          uVar17 = *(undefined8 *)(*piVar6 + 0xc);
          puVar5[1] = uVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar15 = 0.5;
          fVar13 = *(float *)(*piVar6 + 0x28);
          dVar19 = (double)CONCAT44(SUB84(dVar32,0),(int)uVar17);
        }
        else {
          fVar13 = 0.5;
          fVar15 = -3.4151213e-25;
          dVar19 = in_xd14;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44(fVar15 * fVar13 + (float)((ulonglong)dVar19 >> 0x20),
                                    SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar5 + 0xc) = (int)((ulonglong)dVar19 >> 0x20);
        }
        else {
          *(double *)((int)puVar5 + 0xc) = dVar19;
        }
        dVar20 = in_xd10;
        if (in_FPSCR_SZ == '\0') {
          fVar13 = *(float *)(*piVar6 + 0x2c);
          dVar20 = (double)CONCAT44(uVar25,SUB84(dVar19,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44(fVar15 * fVar13 + (float)((ulonglong)dVar20 >> 0x20),
                                    SUB84(dVar20,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar5 + 2) = (int)((ulonglong)dVar20 >> 0x20);
        }
        else {
          puVar5[2] = dVar20;
        }
        if (DAT_8c277acc == 0) {
          piVar6 = puVar1 + iVar3;
          lVar14 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            lVar14 = CONCAT44(SUB84(in_dr4,0),fVar13);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)(*piVar6 + 0x10),SUB84(dVar20,0));
          }
          else {
            dVar20 = *(double *)(*piVar6 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar31,SUB84(dVar20,0));
          }
          else {
            dVar20 = dVar20 * in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar5 + 0x14) = (int)((ulonglong)dVar20 >> 0x20);
          }
          else {
            *(double *)((int)puVar5 + 0x14) = dVar20;
          }
          dVar19 = in_dr8;
          if (in_FPSCR_SZ == '\0') {
            lVar14 = CONCAT44((int)((ulonglong)lVar14 >> 0x20),*(undefined4 *)(*piVar6 + 0x14));
            dVar19 = (double)CONCAT44(fVar22,SUB84(dVar20,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)lVar14 >> 0x20) * (float)lVar14 +
                                      (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar5 + 3) = (int)((ulonglong)dVar19 >> 0x20);
            lVar14 = CONCAT44(uVar26,(float)lVar14);
          }
          else {
            puVar5[3] = dVar19;
            lVar14 = in_dr6;
          }
          uVar17 = in_xd8;
          if (in_FPSCR_SZ == '\0') {
            lVar14 = CONCAT44((int)((ulonglong)lVar14 >> 0x20),*(undefined4 *)(*piVar6 + 0x18));
            uVar17 = CONCAT44(uVar24,SUB84(dVar19,0));
          }
          if (in_FPSCR_PR == '\0') {
            uVar17 = CONCAT44((float)((ulonglong)lVar14 >> 0x20) * (float)lVar14 +
                              (float)((ulonglong)uVar17 >> 0x20),(int)uVar17);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar5 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
            lVar14 = CONCAT44((int)in_dr6,(float)lVar14);
          }
          else {
            *(undefined8 *)((int)puVar5 + 0x1c) = uVar17;
            lVar14 = in_xd6;
          }
          dVar20 = in_dr10;
          if (in_FPSCR_SZ == '\0') {
            lVar14 = CONCAT44((int)((ulonglong)lVar14 >> 0x20),*(undefined4 *)(*piVar6 + 0x1c));
            dVar20 = (double)CONCAT44(fVar28,(int)uVar17);
          }
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)lVar14 >> 0x20) * (float)lVar14 +
                                      (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar5 + 4) = (int)((ulonglong)dVar20 >> 0x20);
          }
          else {
            puVar5[4] = dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar24 = *(undefined4 *)(*piVar6 + 0x34);
            uVar17 = CONCAT44(uVar24,SUB84(dVar20,0));
            *(undefined4 *)((int)puVar5 + 0x24) = uVar24;
          }
          else {
            uVar17 = *(undefined8 *)(*piVar6 + 0x34);
            *(undefined8 *)((int)puVar5 + 0x24) = uVar17;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar24 = *(undefined4 *)(*piVar6 + 0x38);
            uVar17 = CONCAT44(uVar24,(int)uVar17);
            *(undefined4 *)(puVar5 + 5) = uVar24;
          }
          else {
            uVar17 = *(undefined8 *)(*piVar6 + 0x38);
            puVar5[5] = uVar17;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar24 = *(undefined4 *)(*piVar6 + 0x3c);
            dVar20 = (double)CONCAT44(uVar24,(int)uVar17);
            *(undefined4 *)((int)puVar5 + 0x2c) = uVar24;
          }
          else {
            dVar20 = *(double *)(*piVar6 + 0x3c);
            *(double *)((int)puVar5 + 0x2c) = dVar20;
          }
        }
        iVar11 = iVar11 + 1;
      }
      iVar2 = iVar3 + 1;
      iVar7 = iVar3;
    }
    if (DAT_8c277acc != 0) {
      piVar6 = (int *)((int)puVar12 + -4);
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(*piVar6 + 0x10));
        lVar14 = (longlong)in_dr4 << 0x20;
      }
      else {
        in_xd2 = *(double *)(*piVar6 + 0x10);
        lVar14 = in_xd4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar20,0) * fVar31;
      }
      else {
        fVar13 = SUB84(dVar20 * in_dr4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar12 + -0x58) = fVar13;
      }
      else {
        *(double *)((int)puVar12 + -0x58) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar21 = CONCAT44(*(undefined4 *)(*piVar6 + 0x14),fVar22);
      }
      else {
        uVar21 = *(ulonglong *)(*piVar6 + 0x14);
        in_xd2 = in_dr8;
      }
      if (in_FPSCR_PR == '\0') {
        uVar21 = (ulonglong)
                 (uint)((float)((ulonglong)lVar14 >> 0x20) * (float)(uVar21 >> 0x20) + (float)uVar21
                       );
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar12 + -0x54) = (int)uVar21;
        lVar14 = (ulonglong)uVar26 << 0x20;
      }
      else {
        *(double *)((int)puVar12 + -0x54) = in_xd2;
        lVar14 = in_dr6;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar21 = CONCAT44(*(undefined4 *)(*piVar6 + 0x18),fVar28);
      }
      else {
        uVar21 = *(ulonglong *)(*piVar6 + 0x18);
        in_xd2 = in_dr10;
      }
      if (in_FPSCR_PR == '\0') {
        uVar21 = (ulonglong)
                 (uint)((float)((ulonglong)lVar14 >> 0x20) * (float)(uVar21 >> 0x20) + (float)uVar21
                       );
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar12 + -0x50) = (int)uVar21;
        lVar14 = in_dr6 << 0x20;
      }
      else {
        *(double *)((int)puVar12 + -0x50) = in_xd2;
        lVar14 = in_xd6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)(*piVar6 + 0x1c),fVar28);
      }
      else {
        dVar20 = *(double *)(*piVar6 + 0x1c);
        in_xd2 = in_dr10;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = (float)((ulonglong)dVar20 >> 0x20);
        dVar20 = (double)CONCAT44(fVar13,(float)((ulonglong)lVar14 >> 0x20) * fVar13 +
                                         SUB84(dVar20,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar12 + -0x4c) = SUB84(dVar20,0);
      }
      else {
        *(double *)((int)puVar12 + -0x4c) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar23 = *(undefined4 *)(*piVar6 + 0x34);
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),uVar23);
        *(undefined4 *)((int)puVar12 + -0x48) = uVar23;
      }
      else {
        in_xd2 = *(double *)(*piVar6 + 0x34);
        *(double *)((int)puVar12 + -0x48) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar23 = *(undefined4 *)(*piVar6 + 0x38);
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),uVar23);
        *(undefined4 *)((int)puVar12 + -0x44) = uVar23;
      }
      else {
        in_xd2 = *(double *)(*piVar6 + 0x38);
        *(double *)((int)puVar12 + -0x44) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(*piVar6 + 0x3c));
      }
      else {
        in_xd2 = *(double *)(*piVar6 + 0x3c);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar12 + -0x40) = SUB84(dVar20,0);
      }
      else {
        *(double *)((int)puVar12 + -0x40) = in_xd2;
      }
      if (iVar11 != 3) {
        piVar6 = (int *)((int)puVar12 + -4);
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(*piVar6 + 0x10)
                                   );
          in_xd4 = (longlong)in_dr4 << 0x20;
        }
        else {
          in_xd2 = *(double *)(*piVar6 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          fVar31 = SUB84(dVar20,0) * fVar31;
        }
        else {
          fVar31 = SUB84(dVar20 * in_dr4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar12 + -0x28) = fVar31;
        }
        else {
          *(double *)((int)puVar12 + -0x28) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar31 = *(float *)(*piVar6 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = (double)CONCAT44((float)((ulonglong)in_xd4 >> 0x20) * fVar31 + fVar22,uVar24);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar12 + -0x24) = (int)((ulonglong)in_dr8 >> 0x20);
          lVar14 = (ulonglong)uVar26 << 0x20;
        }
        else {
          *(double *)((int)puVar12 + -0x24) = in_dr8;
          lVar14 = in_dr6;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar31 = *(float *)(*piVar6 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = (double)(ulonglong)
                           (uint)((float)((ulonglong)lVar14 >> 0x20) * fVar31 + SUB84(in_dr8,0));
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd6 = in_dr6 << 0x20;
          *(int *)((int)puVar12 + -0x20) = SUB84(in_dr8,0);
        }
        else {
          *(undefined8 *)((int)puVar12 + -0x20) = in_xd8;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar31 = *(float *)(*piVar6 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr10 = (double)CONCAT44((float)((ulonglong)in_xd6 >> 0x20) * fVar31 + fVar28,uVar25);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar12 + -0x1c) = (int)((ulonglong)in_dr10 >> 0x20);
        }
        else {
          *(double *)((int)puVar12 + -0x1c) = in_dr10;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar12 + -0x18) = *(undefined4 *)(*piVar6 + 0x34);
        }
        else {
          *(undefined8 *)((int)puVar12 + -0x18) = *(undefined8 *)(*piVar6 + 0x34);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar12 + -0x14) = *(undefined4 *)(*piVar6 + 0x38);
        }
        else {
          *(undefined8 *)((int)puVar12 + -0x14) = *(undefined8 *)(*piVar6 + 0x38);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar12 + -0x10) = *(undefined4 *)(*piVar6 + 0x3c);
        }
        else {
          *(undefined8 *)((int)puVar12 + -0x10) = *(undefined8 *)(*piVar6 + 0x3c);
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar23 = *(undefined4 *)((int)puVar12 + -0xcc);
      uVar16 = *(undefined4 *)((int)puVar12 + -200);
      uVar25 = *(undefined4 *)((int)puVar12 + -0xc4);
      uVar24 = *(undefined4 *)((int)puVar12 + -0xc0);
      puVar5 = (undefined8 *)((int)puVar12 + -0xb8);
      *(undefined4 *)((int)ar7 + 0x14) = *(undefined4 *)((int)puVar12 + -0xbc);
      *(undefined4 *)(ar7 + 2) = uVar24;
      *(undefined4 *)((int)ar7 + 0xc) = uVar25;
      *(undefined4 *)(ar7 + 1) = uVar16;
      puVar8 = (undefined8 *)((int)ar7 + 4);
      *(undefined4 *)puVar8 = uVar23;
    }
    else {
      uVar17 = *(undefined8 *)((int)puVar12 + -0xcc);
      uVar18 = *(undefined8 *)((int)puVar12 + -0xc4);
      uVar34 = *(undefined8 *)((int)puVar12 + -0xbc);
      uVar33 = *(undefined8 *)((int)puVar12 + -0xb4);
      puVar5 = (undefined8 *)((int)puVar12 + -0xa4);
      ar7[2] = *(undefined8 *)((int)puVar12 + -0xac);
      ar7[1] = uVar33;
      *ar7 = uVar34;
      ar7[-1] = uVar18;
      puVar8 = ar7 + -2;
      *puVar8 = uVar17;
    }
    *(undefined4 *)((int)puVar8 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)puVar5;
      uVar24 = *(undefined4 *)((int)puVar5 + 4);
      uVar16 = *(undefined4 *)(puVar5 + 1);
      uVar23 = *(undefined4 *)((int)puVar5 + 0xc);
      uVar27 = *(undefined4 *)(puVar5 + 2);
      uVar29 = *(undefined4 *)((int)puVar5 + 0x14);
      *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar5 + 3);
      *(undefined4 *)((int)puVar8 + 0x34) = uVar29;
      *(undefined4 *)(puVar8 + 6) = uVar27;
      *(undefined4 *)(puVar8 + 5) = uVar23;
      *(undefined4 *)((int)puVar8 + 0x24) = uVar16;
      *(undefined4 *)(puVar8 + 4) = uVar24;
      *(undefined4 *)((int)puVar8 + 0x1c) = uVar25;
      uVar25 = *(undefined4 *)((int)puVar12 + -0x9c);
      uVar24 = *(undefined4 *)((int)puVar12 + -0x98);
      uVar16 = *(undefined4 *)((int)puVar12 + -0x94);
      uVar23 = *(undefined4 *)((int)puVar12 + -0x90);
      puVar5 = (undefined8 *)((int)puVar12 + -0x88);
      *(undefined4 *)(puVar8 + 10) = *(undefined4 *)((int)puVar12 + -0x8c);
      *(undefined4 *)((int)puVar8 + 0x4c) = uVar23;
      *(undefined4 *)(puVar8 + 9) = uVar16;
      *(undefined4 *)((int)puVar8 + 0x44) = uVar24;
      puVar8 = puVar8 + 8;
      *(undefined4 *)puVar8 = uVar25;
    }
    else {
      uVar17 = *puVar5;
      uVar34 = puVar5[1];
      uVar18 = puVar5[2];
      uVar35 = puVar5[3];
      uVar36 = puVar5[4];
      uVar33 = puVar5[5];
      *(undefined8 *)((int)puVar8 + 0x34) = puVar5[6];
      *(undefined8 *)((int)puVar8 + 0x2c) = uVar33;
      *(undefined8 *)((int)puVar8 + 0x24) = uVar36;
      puVar8[3] = uVar35;
      puVar8[2] = uVar18;
      puVar8[1] = uVar34;
      *puVar8 = uVar17;
      uVar17 = *(undefined8 *)((int)puVar12 + -0x9c);
      uVar33 = *(undefined8 *)((int)puVar12 + -0x94);
      uVar18 = *(undefined8 *)((int)puVar12 + -0x8c);
      uVar34 = *(undefined8 *)((int)puVar12 + -0x84);
      puVar5 = (undefined8 *)((int)puVar12 + -0x74);
      puVar8[6] = *(undefined8 *)((int)puVar12 + -0x7c);
      puVar8[5] = uVar34;
      puVar8[4] = uVar18;
      puVar8[3] = uVar33;
      puVar8 = puVar8 + 2;
      *puVar8 = uVar17;
    }
    *(undefined4 *)((int)puVar8 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)puVar5;
      uVar24 = *(undefined4 *)((int)puVar5 + 4);
      uVar16 = *(undefined4 *)(puVar5 + 1);
      uVar23 = *(undefined4 *)((int)puVar5 + 0xc);
      uVar27 = *(undefined4 *)(puVar5 + 2);
      uVar29 = *(undefined4 *)((int)puVar5 + 0x14);
      *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar5 + 3);
      *(undefined4 *)((int)puVar8 + 0x34) = uVar29;
      *(undefined4 *)(puVar8 + 6) = uVar27;
      *(undefined4 *)(puVar8 + 5) = uVar23;
      *(undefined4 *)((int)puVar8 + 0x24) = uVar16;
      *(undefined4 *)(puVar8 + 4) = uVar24;
      puVar8 = (undefined8 *)((int)puVar8 + 0x1c);
      *(undefined4 *)puVar8 = uVar25;
    }
    else {
      uVar17 = *puVar5;
      uVar34 = puVar5[1];
      uVar18 = puVar5[2];
      uVar35 = puVar5[3];
      uVar36 = puVar5[4];
      uVar33 = puVar5[5];
      *(undefined8 *)((int)puVar8 + 0x34) = puVar5[6];
      *(undefined8 *)((int)puVar8 + 0x2c) = uVar33;
      *(undefined8 *)((int)puVar8 + 0x24) = uVar36;
      puVar8[3] = uVar35;
      puVar8[2] = uVar18;
      puVar8[1] = uVar34;
      *puVar8 = uVar17;
    }
    if (iVar11 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar16 = *(undefined4 *)((int)puVar12 + -0x3c);
        uVar25 = *(undefined4 *)((int)puVar12 + -0x38);
        uVar23 = *(undefined4 *)((int)puVar12 + -0x34);
        uVar24 = *(undefined4 *)((int)puVar12 + -0x30);
        puVar5 = (undefined8 *)((int)puVar12 + -0x28);
        *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)((int)puVar12 + -0x2c);
        *(undefined4 *)(puVar8 + 6) = uVar24;
        *(undefined4 *)((int)puVar8 + 0x2c) = uVar23;
        *(undefined4 *)(puVar8 + 5) = uVar25;
        puVar8 = (undefined8 *)((int)puVar8 + 0x24);
        *(undefined4 *)puVar8 = uVar16;
      }
      else {
        uVar18 = *(undefined8 *)((int)puVar12 + -0x3c);
        uVar34 = *(undefined8 *)((int)puVar12 + -0x34);
        uVar17 = *(undefined8 *)((int)puVar12 + -0x2c);
        uVar33 = *(undefined8 *)((int)puVar12 + -0x24);
        puVar5 = (undefined8 *)((int)puVar12 + -0x14);
        puVar8[6] = *(undefined8 *)((int)puVar12 + -0x1c);
        puVar8[5] = uVar33;
        puVar8[4] = uVar17;
        puVar8[3] = uVar34;
        puVar8 = puVar8 + 2;
        *puVar8 = uVar18;
      }
      *(undefined4 *)((int)puVar8 + -4) = 0xe0000000;
      if (in_FPSCR_SZ == '\0') {
        uVar25 = *(undefined4 *)puVar5;
        uVar24 = *(undefined4 *)((int)puVar5 + 4);
        uVar16 = *(undefined4 *)(puVar5 + 1);
        uVar23 = *(undefined4 *)((int)puVar5 + 0xc);
        uVar27 = *(undefined4 *)(puVar5 + 2);
        uVar29 = *(undefined4 *)((int)puVar5 + 0x14);
        *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar5 + 3);
        *(undefined4 *)((int)puVar8 + 0x34) = uVar29;
        *(undefined4 *)(puVar8 + 6) = uVar27;
        *(undefined4 *)(puVar8 + 5) = uVar23;
        *(undefined4 *)((int)puVar8 + 0x24) = uVar16;
        *(undefined4 *)(puVar8 + 4) = uVar24;
        puVar8 = (undefined8 *)((int)puVar8 + 0x1c);
        *(undefined4 *)puVar8 = uVar25;
      }
      else {
        uVar17 = *puVar5;
        uVar34 = puVar5[1];
        uVar18 = puVar5[2];
        uVar35 = puVar5[3];
        uVar36 = puVar5[4];
        uVar33 = puVar5[5];
        *(undefined8 *)((int)puVar8 + 0x34) = puVar5[6];
        *(undefined8 *)((int)puVar8 + 0x2c) = uVar33;
        *(undefined8 *)((int)puVar8 + 0x24) = uVar36;
        puVar8[3] = uVar35;
        puVar8[2] = uVar18;
        puVar8[1] = uVar34;
        *puVar8 = uVar17;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar24 = *(undefined4 *)((int)puVar12 + -0x6c);
      uVar16 = *(undefined4 *)((int)puVar12 + -0x68);
      uVar23 = *(undefined4 *)((int)puVar12 + -100);
      uVar25 = *(undefined4 *)((int)puVar12 + -0x60);
      puVar5 = (undefined8 *)((int)puVar12 + -0x58);
      *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)((int)puVar12 + -0x5c);
      *(undefined4 *)(puVar8 + 6) = uVar25;
      *(undefined4 *)((int)puVar8 + 0x2c) = uVar23;
      *(undefined4 *)(puVar8 + 5) = uVar16;
      puVar8 = (undefined8 *)((int)puVar8 + 0x24);
      *(undefined4 *)puVar8 = uVar24;
    }
    else {
      uVar17 = *(undefined8 *)((int)puVar12 + -0x6c);
      uVar33 = *(undefined8 *)((int)puVar12 + -100);
      uVar18 = *(undefined8 *)((int)puVar12 + -0x5c);
      uVar34 = *(undefined8 *)((int)puVar12 + -0x54);
      puVar5 = (undefined8 *)((int)puVar12 + -0x44);
      puVar8[6] = *(undefined8 *)((int)puVar12 + -0x4c);
      puVar8[5] = uVar34;
      puVar8[4] = uVar18;
      puVar8[3] = uVar33;
      puVar8 = puVar8 + 2;
      *puVar8 = uVar17;
    }
    *(undefined4 *)((int)puVar8 + -4) = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)puVar5;
      uVar24 = *(undefined4 *)((int)puVar5 + 4);
      uVar16 = *(undefined4 *)(puVar5 + 1);
      uVar23 = *(undefined4 *)((int)puVar5 + 0xc);
      uVar27 = *(undefined4 *)(puVar5 + 2);
      uVar29 = *(undefined4 *)((int)puVar5 + 0x14);
      *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar5 + 3);
      *(undefined4 *)((int)puVar8 + 0x34) = uVar29;
      *(undefined4 *)(puVar8 + 6) = uVar27;
      *(undefined4 *)(puVar8 + 5) = uVar23;
      *(undefined4 *)((int)puVar8 + 0x24) = uVar16;
      *(undefined4 *)(puVar8 + 4) = uVar24;
      puVar8 = (undefined8 *)((int)puVar8 + 0x1c);
      *(undefined4 *)puVar8 = uVar25;
    }
    else {
      uVar17 = *puVar5;
      uVar34 = puVar5[1];
      uVar18 = puVar5[2];
      uVar35 = puVar5[3];
      uVar36 = puVar5[4];
      uVar33 = puVar5[5];
      *(undefined8 *)((int)puVar8 + 0x34) = puVar5[6];
      *(undefined8 *)((int)puVar8 + 0x2c) = uVar33;
      *(undefined8 *)((int)puVar8 + 0x24) = uVar36;
      puVar8[3] = uVar35;
      puVar8[2] = uVar18;
      puVar8[1] = uVar34;
      *puVar8 = uVar17;
    }
    ar7 = puVar8 + 4;
    _DAT_8c4aa520 = _DAT_8c4aa520 + iVar11;
  }
  return ar7;
}

__asm__(".globl _FUN_8c224b00\n.set _FUN_8c224b00, _FUN_8c224b00_def\n");
