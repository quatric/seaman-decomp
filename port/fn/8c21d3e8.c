#include "../decls.h"
undefined4 FUN_8c21d3e8_def(int ar4,int ar5,int ar6,int *ar7)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  double in_dr0;
  double dVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 in_fr5;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  double in_dr6;
  double dVar25;
  float fVar26;
  undefined4 in_fr9;
  double dVar27;
  double in_dr10;
  uint uVar28;
  undefined4 in_fr13;
  double dVar29;
  double in_dr14;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd10;
  double in_xd12;
  double in_xd14;
  bool bVar30;
  undefined4 in_PR;
  char cVar31;
  char cVar32;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fVar20;
  
  cVar32 = '\0';
  cVar31 = '\0';
  iVar2 = libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6);
  piVar6 = (int *)(iVar2 * 0x10 + ar4);
  piVar9 = (int *)(ar5 * 0x10 + ar4);
  iVar2 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar8 = (int *)(iVar2 * 0x10 + ar4);
  iVar2 = libgcc_divide_helper_0106dc(ar5 + 2,ar6);
  piVar7 = (int *)(iVar2 * 0x10 + ar4);
  fVar12 = (float)*piVar8;
  if (*piVar8 < 0) {
    if (cVar31 == '\0') {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    else {
      fVar12 = SUB84((double)CONCAT44(0x4f800000,fVar12) + (double)CONCAT44(0x4f800000,fVar12),0);
    }
  }
  iVar2 = *piVar9;
  if (cVar31 == '\0') {
    dVar14 = (double)CONCAT44((float)iVar2,fVar12);
  }
  else {
    dVar14 = (double)iVar2;
  }
  if (iVar2 < 0) {
    if (cVar32 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar31 == '\0') {
      dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar14,0)
                               );
    }
    else {
      dVar14 = dVar14 + in_dr0;
    }
  }
  dVar15 = in_xd2;
  if (cVar32 == '\0') {
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar14,0));
    dVar15 = in_xd6;
  }
  fVar12 = (float)((ulonglong)dVar14 >> 0x20);
  if (cVar31 == '\0') {
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0) - fVar12);
  }
  else {
    in_dr6 = in_dr6 - dVar14;
  }
  if (cVar31 == '\0') {
    bVar30 = 0.0 < SUB84(in_dr6,0);
  }
  else {
    bVar30 = (double)((ulonglong)(uint)fVar12 << 0x20) < in_dr6;
  }
  dVar27 = (double)CONCAT44(0x3f800000,in_fr9);
  dVar14 = dVar15;
  if ((!bVar30) && (dVar14 = dVar27, cVar32 == '\0')) {
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),0x3f800000);
    dVar14 = dVar15;
  }
  fVar12 = (float)*piVar7;
  if (*piVar7 < 0) {
    if (cVar31 == '\0') {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    else {
      fVar12 = SUB84((double)CONCAT44(0x4f800000,fVar12) + (double)CONCAT44(0x4f800000,fVar12),0);
    }
  }
  iVar2 = *piVar8;
  if (cVar31 == '\0') {
    dVar15 = (double)CONCAT44((float)iVar2,fVar12);
  }
  else {
    dVar15 = (double)iVar2;
  }
  if (iVar2 < 0) {
    if (cVar32 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar31 == '\0') {
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar15,0)
                               );
    }
    else {
      dVar15 = dVar15 + in_dr0;
    }
  }
  dVar16 = in_xd2;
  if (cVar32 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(dVar15,0));
    dVar16 = in_xd14;
  }
  fVar12 = (float)((ulonglong)dVar15 >> 0x20);
  if (cVar31 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0) - fVar12);
  }
  else {
    in_dr14 = in_dr14 - dVar15;
  }
  if (cVar31 == '\0') {
    bVar30 = 0.0 < SUB84(in_dr14,0);
  }
  else {
    bVar30 = (double)((ulonglong)(uint)fVar12 << 0x20) < in_dr14;
  }
  dVar15 = dVar16;
  if ((!bVar30) && (dVar15 = dVar27, cVar32 == '\0')) {
    in_dr14 = 5.26354424712089e-315;
    dVar15 = dVar16;
  }
  fVar12 = (float)*piVar9;
  if (*piVar9 < 0) {
    if (cVar31 == '\0') {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    else {
      fVar12 = SUB84((double)CONCAT44(0x4f800000,fVar12) + (double)CONCAT44(0x4f800000,fVar12),0);
    }
  }
  iVar2 = *piVar6;
  if (cVar31 == '\0') {
    dVar16 = (double)CONCAT44((float)iVar2,fVar12);
  }
  else {
    dVar16 = (double)iVar2;
  }
  if (iVar2 < 0) {
    if (cVar32 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar31 == '\0') {
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar16,0)
                               );
    }
    else {
      dVar16 = dVar16 + in_dr0;
    }
  }
  dVar17 = in_xd2;
  if (cVar32 == '\0') {
    in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),SUB84(dVar16,0));
    dVar17 = in_xd10;
  }
  fVar12 = (float)((ulonglong)dVar16 >> 0x20);
  if (cVar31 == '\0') {
    in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),SUB84(in_dr10,0) - fVar12);
  }
  else {
    in_dr10 = in_dr10 - dVar16;
  }
  if (cVar31 == '\0') {
    bVar30 = 0.0 < SUB84(in_dr10,0);
  }
  else {
    bVar30 = (double)((ulonglong)(uint)fVar12 << 0x20) < in_dr10;
  }
  dVar16 = dVar17;
  if ((!bVar30) && (dVar16 = dVar27, cVar32 == '\0')) {
    in_dr10 = 5.26354424712089e-315;
    dVar16 = dVar17;
  }
  fVar12 = (float)*piVar9;
  if (*piVar9 < 0) {
    if (cVar31 == '\0') {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    else {
      fVar12 = SUB84((double)CONCAT44(0x4f800000,fVar12) + (double)CONCAT44(0x4f800000,fVar12),0);
    }
  }
  dVar17 = dVar15;
  if (cVar32 == '\0') {
    dVar17 = (double)CONCAT44(SUB84(in_dr14,0),fVar12);
  }
  fVar12 = SUB84(in_dr6,0);
  if (cVar31 == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + fVar12,SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 + in_dr6;
  }
  if (cVar32 == '\0') {
    dVar11 = (double)CONCAT44(fVar12,_DAT_8c4aad54);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4aad58,_DAT_8c4aad54);
    dVar11 = dVar14;
  }
  if (cVar31 == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar11,0) - SUB84(dVar17,0));
  }
  else {
    dVar11 = dVar11 - dVar17;
  }
  if (cVar32 == '\0') {
    in_fr5 = 0x3f800000;
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),0x3eaaaa3b);
    dVar27 = (double)CONCAT44(0x3f800000,fVar12);
  }
  else {
    in_xd2 = 32.00000747044802;
    in_xd8 = dVar14;
    in_xd4 = dVar27;
  }
  if (cVar31 == '\0') {
    dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) * SUB84(dVar17,0));
  }
  else {
    dVar27 = dVar27 * dVar17;
  }
  dVar22 = in_xd0;
  if (cVar32 == '\0') {
    dVar22 = (double)CONCAT44(SUB84(dVar11,0),in_fr5);
  }
  if (cVar31 == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) / fVar12,SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 / in_dr6;
  }
  if (cVar32 == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar12);
    dVar14 = in_xd0;
  }
  if (cVar31 == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                              SUB84(dVar11,0) / (float)((ulonglong)dVar17 >> 0x20));
  }
  else {
    dVar11 = dVar11 / dVar17;
  }
  dVar18 = dVar16;
  if (cVar32 == '\0') {
    dVar18 = (double)CONCAT44(SUB84(in_dr10,0),SUB84(dVar17,0));
  }
  if (cVar31 == '\0') {
    fVar20 = (float)((ulonglong)dVar18 >> 0x20) + fVar12;
    dVar18 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) / fVar20,SUB84(dVar11,0));
    fVar23 = (float)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar23,SUB84(dVar22,0) - fVar23);
  }
  else {
    dVar18 = dVar18 + in_dr6;
    fVar20 = (float)((ulonglong)dVar18 >> 0x20);
    dVar11 = dVar11 / dVar18;
    dVar22 = dVar22 - dVar22;
  }
  fVar23 = (float)((ulonglong)dVar22 >> 0x20);
  dVar17 = dVar22;
  if (cVar32 == '\0') {
    dVar17 = (double)CONCAT44(fVar23,SUB84(in_dr10,0));
  }
  if (cVar31 == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * fVar23,SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
  }
  fVar21 = SUB84(dVar22,0);
  fStack_38 = SUB84(dVar11,0);
  if (cVar32 == '\0') {
    dVar25 = (double)CONCAT44(fVar21,fVar12);
    dVar29 = (double)CONCAT44(fVar23,in_fr13);
    fStack_34 = fStack_38;
  }
  else {
    fStack_34 = SUB84(dVar14,0);
    fStack_30 = (float)((ulonglong)dVar14 >> 0x20);
    dVar25 = in_xd4;
    dVar29 = dVar22;
  }
  if (cVar31 == '\0') {
    dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * fVar21,SUB84(dVar25,0));
  }
  else {
    dVar25 = dVar25 * dVar22;
  }
  if (cVar32 == '\0') {
    dVar18 = (double)CONCAT44(fVar20,fVar21);
    in_xd4 = in_xd2;
  }
  fVar12 = (float)((ulonglong)dVar17 >> 0x20);
  if (cVar31 == '\0') {
    dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * fVar12,SUB84(dVar29,0));
  }
  else {
    dVar29 = dVar29 * dVar17;
  }
  fVar10 = (float)((ulonglong)dVar11 >> 0x20);
  fVar20 = fVar10;
  if (cVar32 == '\0') {
    fStack_38 = fVar10;
    fVar20 = fStack_34;
  }
  fStack_34 = fVar20;
  fVar20 = (float)((ulonglong)dVar25 >> 0x20);
  if (cVar31 == '\0') {
    fVar13 = SUB84(dVar18,0) * fVar20;
    dVar22 = (double)CONCAT44(fVar23 * fVar20,fVar21);
  }
  else {
    fVar13 = SUB84(dVar18 * dVar25,0);
    dVar22 = dVar22 * dVar25;
  }
  fStack_3c = fVar13;
  if (cVar32 != '\0') {
    fStack_3c = SUB84(in_xd4,0);
    fStack_38 = (float)((ulonglong)in_xd4 >> 0x20);
  }
  if (cVar31 == '\0') {
    dVar17 = (double)CONCAT44(fVar12 * SUB84(dVar22,0),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
  }
  fVar12 = (float)((ulonglong)dVar27 >> 0x20);
  if (cVar32 == '\0') {
    dVar18 = (double)CONCAT44(0x40400000,SUB84(in_dr14,0));
    dVar19 = (double)CONCAT44(fVar12,fVar13);
  }
  else {
    dVar18 = 1.038459620262114e+34;
    dVar19 = dVar27;
  }
  fVar20 = (float)((ulonglong)dVar18 >> 0x20);
  if (cVar31 == '\0') {
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - fVar10,SUB84(dVar19,0));
    fVar23 = (float)((ulonglong)dVar22 >> 0x20) * fVar20;
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * fVar20,SUB84(dVar17,0));
  }
  else {
    dVar19 = dVar19 - dVar11;
    fVar23 = (float)((ulonglong)(dVar22 * dVar18) >> 0x20);
    dVar17 = dVar17 * dVar18;
  }
  uVar4 = 0;
  fStack_40 = (float)((ulonglong)dVar17 >> 0x20);
  fVar20 = SUB84(dVar19,0);
  fStack_44 = (float)((ulonglong)dVar19 >> 0x20);
  if (cVar32 == '\0') {
    dVar25 = (double)CONCAT44(0x47000000,SUB84(dVar25,0));
    dVar22 = 2.658457962370374e+36;
    fStack_48 = fStack_44;
    fStack_44 = fStack_40;
    fStack_40 = fVar23;
  }
  else {
    dVar25 = -1.0384596463749117e+34;
    dVar22 = -2.633278440589894e-265;
    fStack_48 = fVar20;
    fStack_3c = fVar23;
  }
  fVar23 = fStack_48;
  fVar26 = (float)((ulonglong)dVar25 >> 0x20);
  fVar21 = SUB84(dVar22,0);
  fVar13 = (float)((ulonglong)dVar22 >> 0x20);
  fVar24 = SUB84(dVar25,0);
  if (ar5 == ar6 + -2) {
    if (cVar32 == '\0') {
      dVar14 = (double)CONCAT44(fStack_38,fVar20);
    }
    else {
      dVar14 = (double)CONCAT44(fStack_34,fStack_38);
    }
    if (cVar31 == '\0') {
      dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + fVar12,SUB84(dVar14,0));
    }
    else {
      dVar14 = dVar14 + dVar27;
    }
    uVar3 = (undefined4)((ulonglong)dVar14 >> 0x20);
    uStack_28 = uVar3;
    uStack_24 = in_PR;
    if (cVar32 != '\0') {
      uStack_28 = SUB84(dVar14,0);
      uStack_24 = uVar3;
    }
    do {
      iVar2 = *(int *)((int)piVar9 + uVar4 + 4);
      dVar14 = in_xd4;
      if (cVar32 == '\0') {
        dVar14 = (double)CONCAT44((float)iVar2,SUB84(dVar17,0));
      }
      dVar16 = in_xd4;
      if (cVar32 == '\0') {
        dVar16 = (double)CONCAT44((float)*(int *)((int)piVar8 + uVar4 + 4),SUB84(dVar27,0));
      }
      fVar12 = (float)((ulonglong)dVar14 >> 0x20);
      if (cVar31 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar12,SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 - dVar14;
      }
      fVar20 = (float)((ulonglong)dVar16 >> 0x20);
      if (cVar31 == '\0') {
        bVar30 = fVar26 < fVar20;
      }
      else {
        bVar30 = dVar25 < dVar16;
      }
      dVar27 = in_xd4;
      if (cVar32 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                  (float)(iVar2 - *(int *)((int)piVar6 + uVar4 + 4)));
        dVar27 = dVar15;
      }
      if (bVar30) {
        if (cVar31 == '\0') {
          dVar16 = (double)CONCAT44(fVar20 - fVar13,SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar22;
        }
      }
      else {
        if (cVar31 == '\0') {
          bVar30 = fVar21 < fVar20;
        }
        else {
          bVar30 = dVar22 < dVar16;
        }
        if (!bVar30) {
          if (cVar31 == '\0') {
            dVar16 = (double)CONCAT44(fVar20 + fVar13,SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar22;
          }
        }
      }
      if (cVar31 == '\0') {
        bVar30 = fVar26 < SUB84(dVar18,0);
      }
      else {
        bVar30 = dVar25 < dVar18;
      }
      fVar20 = (float)((ulonglong)dVar16 >> 0x20);
      dVar15 = dVar16;
      if (cVar32 == '\0') {
        dVar15 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
      }
      if (cVar31 == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + fVar12,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar14;
      }
      uVar3 = (undefined4)((ulonglong)dVar15 >> 0x20);
      fVar23 = SUB84(dVar15,0);
      if (bVar30) {
        if (cVar31 == '\0') {
          dVar15 = (double)CONCAT44(uVar3,fVar23 - fVar13);
        }
        else {
          dVar15 = dVar15 - dVar22;
        }
      }
      else {
        if (cVar31 == '\0') {
          bVar30 = fVar21 < fVar23;
        }
        else {
          bVar30 = dVar22 < dVar15;
        }
        if (!bVar30) {
          if (cVar31 == '\0') {
            dVar15 = (double)CONCAT44(uVar3,fVar23 + fVar13);
          }
          else {
            dVar15 = dVar15 + dVar22;
          }
        }
      }
      if (cVar32 == '\0') {
        dVar17 = (double)CONCAT44(fStack_38,fStack_48);
      }
      else {
        in_xd4 = (double)CONCAT44(fStack_44,fStack_48);
        dVar17 = (double)CONCAT44(fStack_34,fStack_38);
      }
      if (cVar31 == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar15,0),
                                  (SUB84(dVar17,0) * fVar20) / fVar24);
      }
      else {
        dVar17 = (dVar17 * dVar16 * dVar15) / dVar25;
      }
      if (cVar32 == '\0') {
        dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),(int)((ulonglong)dVar17 >> 0x20))
        ;
      }
      if (cVar31 == '\0') {
        dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0) / SUB84(dVar14,0)
                                 );
      }
      else {
        dVar29 = dVar29 / dVar14;
      }
      if (cVar32 == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar17,0));
        fVar23 = (float)((ulonglong)dVar27 >> 0x20);
        dVar17 = (double)CONCAT44(SUB84(dVar16,0),uStack_28);
        dVar11 = in_xd4;
      }
      else {
        fVar23 = (float)((ulonglong)in_xd4 >> 0x20);
        dVar11 = (double)CONCAT44(uStack_24,uStack_28);
        dVar17 = in_xd8;
        dVar27 = in_xd4;
      }
      if (cVar31 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) + SUB84(dVar29,0)
                                 );
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) * fVar20);
      }
      else {
        dVar18 = dVar15 + dVar29;
        dVar17 = dVar17 * dVar16;
      }
      if (cVar32 == '\0') {
        fVar23 = SUB84(dVar18,0);
      }
      if (cVar31 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) / fVar24);
      }
      else {
        dVar17 = dVar17 / dVar25;
      }
      dVar19 = dVar11;
      if (cVar32 == '\0') {
        dVar19 = (double)CONCAT44(SUB84(dVar17,0),SUB84(dVar16,0));
      }
      if (cVar31 == '\0') {
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar29,0),
                                  SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 - dVar29;
      }
      dVar15 = dVar14;
      if (cVar32 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fVar12);
        dVar15 = dVar11;
      }
      if (cVar31 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                  fVar23 * SUB84(dVar19,0) + SUB84(dVar17,0));
      }
      dVar16 = dVar14;
      if (cVar32 == '\0') {
        dVar16 = (double)((ulonglong)(uint)fVar12 << 0x20);
      }
      if (cVar31 == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 * dVar19;
      }
      uVar3 = (undefined4)((ulonglong)dVar18 >> 0x20);
      if (cVar32 == '\0') {
        dVar18 = (double)CONCAT44(uVar3,SUB84(dVar17,0));
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fStack_40);
        in_xd4 = dVar15;
        dVar15 = dVar27;
        dVar27 = (double)CONCAT44(uVar3,SUB84(dVar19,0));
      }
      else {
        in_xd4 = (double)CONCAT44(fStack_3c,fStack_40);
        dVar27 = dVar18;
      }
      if (cVar31 == '\0') {
        fVar12 = (float)((ulonglong)dVar17 >> 0x20);
        dVar17 = (double)CONCAT44(fVar12,SUB84(dVar17,0) * SUB84(dVar18,0));
        dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - fVar12,SUB84(dVar27,0));
      }
      else {
        dVar17 = dVar17 * dVar18;
        dVar27 = dVar27 - dVar17;
      }
      fVar12 = fStack_3c;
      fVar20 = fStack_38;
      if (cVar32 == '\0') {
        fVar12 = SUB84(dVar17,0);
        fVar20 = fStack_3c;
      }
      if (cVar31 == '\0') {
        fVar12 = (float)((ulonglong)dVar16 >> 0x20) * fVar20 + fVar12;
      }
      uVar3 = 8;
      if (cVar32 == '\0') {
        dVar17 = (double)CONCAT44(fStack_44,fVar12);
        dVar16 = (double)((ulonglong)dVar27 & 0xffffffff00000000);
      }
      else {
        dVar17 = (double)CONCAT44(fStack_40,fStack_44);
        dVar16 = dVar27;
      }
      uVar4 = uVar4 + 4;
      if (cVar31 == '\0') {
        iVar2 = (int)((float)((ulonglong)dVar18 >> 0x20) * (float)((ulonglong)dVar29 >> 0x20) +
                     (float)((ulonglong)dVar16 >> 0x20) * (float)((ulonglong)dVar17 >> 0x20) +
                     SUB84(dVar17,0));
      }
      else {
        iVar2 = (int)dVar17;
      }
      *ar7 = iVar2;
      ar7 = ar7 + 1;
      dVar17 = dVar14;
    } while (uVar4 < 0xc);
  }
  else {
    if (cVar32 == '\0') {
      dVar11 = (double)CONCAT44(fVar10,fVar12);
      dVar15 = (double)CONCAT44(fStack_34,fVar20);
    }
    else {
      dVar15 = (double)CONCAT44(fStack_30,fStack_34);
      dVar14 = dVar27;
    }
    fVar20 = (float)((ulonglong)dVar15 >> 0x20);
    if (cVar31 == '\0') {
      fVar10 = SUB84(dVar11,0) - fVar20;
    }
    else {
      fVar10 = SUB84(dVar11 - dVar15,0);
    }
    fStack_48 = (float)((ulonglong)dVar14 >> 0x20);
    fVar1 = fStack_48;
    if (cVar32 == '\0') {
      fStack_48 = fVar23;
    }
    fStack_4c = SUB84(dVar14,0);
    if (ar5 == 0) {
      if (cVar31 == '\0') {
        dVar15 = (double)CONCAT44(fVar20 + fVar12,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar27;
      }
      uVar3 = (undefined4)((ulonglong)dVar15 >> 0x20);
      fStack_2c = (float)uVar3;
      if (cVar32 != '\0') {
        fStack_2c = SUB84(dVar15,0);
        fVar10 = fStack_4c;
        fStack_48 = fVar1;
        uStack_28 = uVar3;
      }
      do {
        fStack_4c = fVar10;
        iVar2 = *(int *)((int)piVar8 + uVar4 + 4);
        dVar14 = in_xd4;
        if (cVar32 == '\0') {
          dVar14 = (double)CONCAT44((float)*(int *)((int)piVar9 + uVar4 + 4),SUB84(dVar17,0));
        }
        dVar15 = in_xd4;
        if (cVar32 == '\0') {
          dVar15 = (double)CONCAT44((float)iVar2,SUB84(dVar27,0));
        }
        fVar12 = (float)((ulonglong)dVar14 >> 0x20);
        if (cVar31 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - fVar12,SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 - dVar14;
        }
        fVar20 = (float)((ulonglong)dVar15 >> 0x20);
        if (cVar31 == '\0') {
          bVar30 = fVar26 < fVar20;
        }
        else {
          bVar30 = dVar25 < dVar15;
        }
        dVar27 = in_xd4;
        if (cVar32 == '\0') {
          dVar14 = (double)CONCAT44(fVar12,(float)(*(int *)((int)piVar7 + uVar4 + 4) - iVar2));
          dVar27 = dVar16;
        }
        if (bVar30) {
          if (cVar31 == '\0') {
            dVar15 = (double)CONCAT44(fVar20 - fVar13,SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 - dVar22;
          }
        }
        else {
          if (cVar31 == '\0') {
            bVar30 = fVar21 < fVar20;
          }
          else {
            bVar30 = dVar22 < dVar15;
          }
          if (!bVar30) {
            if (cVar31 == '\0') {
              dVar15 = (double)CONCAT44(fVar20 + fVar13,SUB84(dVar15,0));
            }
            else {
              dVar15 = dVar15 + dVar22;
            }
          }
        }
        fVar12 = SUB84(dVar14,0);
        if (cVar31 == '\0') {
          bVar30 = fVar26 < fVar12;
        }
        else {
          bVar30 = dVar25 < dVar14;
        }
        fVar20 = (float)((ulonglong)dVar15 >> 0x20);
        dVar16 = dVar15;
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
        }
        fVar23 = (float)((ulonglong)dVar14 >> 0x20);
        if (cVar31 == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + fVar23,SUB84(dVar16,0));
        }
        else {
          dVar18 = dVar16 + dVar14;
        }
        if (bVar30) {
          if (cVar31 == '\0') {
            dVar14 = (double)CONCAT44(fVar23,fVar12 - fVar13);
          }
          else {
            dVar14 = dVar14 - dVar22;
          }
        }
        else {
          if (cVar31 == '\0') {
            bVar30 = fVar21 < fVar12;
          }
          else {
            bVar30 = dVar22 < dVar14;
          }
          if (!bVar30) {
            if (cVar31 == '\0') {
              dVar14 = (double)CONCAT44(fVar23,fVar12 + fVar13);
            }
            else {
              dVar14 = dVar14 + dVar22;
            }
          }
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44(fStack_34,fStack_2c);
        }
        else {
          in_xd4 = (double)CONCAT44(uStack_28,fStack_2c);
          dVar16 = (double)CONCAT44(fStack_30,fStack_34);
        }
        if (cVar31 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar14,0),
                                    (SUB84(dVar16,0) * fVar20) / fVar24);
        }
        else {
          dVar16 = (dVar16 * dVar15 * dVar14) / dVar25;
        }
        if (cVar32 == '\0') {
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                    (int)((ulonglong)dVar16 >> 0x20));
        }
        if (cVar31 == '\0') {
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                    SUB84(dVar29,0) / SUB84(dVar18,0));
        }
        else {
          dVar29 = dVar29 / dVar18;
        }
        if (cVar32 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar16,0));
          fVar12 = (float)((ulonglong)dVar27 >> 0x20);
          dVar11 = (double)CONCAT44(SUB84(dVar15,0),fStack_4c);
          dVar19 = in_xd4;
        }
        else {
          fVar12 = (float)((ulonglong)in_xd4 >> 0x20);
          dVar19 = (double)CONCAT44(fStack_48,fStack_4c);
          dVar11 = in_xd8;
          dVar27 = in_xd4;
        }
        if (cVar31 == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                    SUB84(dVar14,0) - SUB84(dVar29,0));
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar11,0) * fVar20);
        }
        else {
          dVar17 = dVar14 - dVar29;
          dVar11 = dVar11 * dVar15;
        }
        if (cVar32 == '\0') {
          fVar12 = SUB84(dVar17,0);
        }
        if (cVar31 == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar11,0) / fVar24);
        }
        else {
          dVar11 = dVar11 / dVar25;
        }
        dVar14 = dVar19;
        if (cVar32 == '\0') {
          dVar14 = (double)CONCAT44(SUB84(dVar11,0),SUB84(dVar15,0));
        }
        if (cVar31 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + SUB84(dVar29,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + dVar29;
        }
        uVar28 = (uint)((ulonglong)dVar17 >> 0x20);
        dVar16 = dVar17;
        if (cVar32 == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),uVar28);
          dVar16 = dVar19;
        }
        if (cVar31 == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                    fVar12 * SUB84(dVar14,0) + SUB84(dVar11,0));
        }
        dVar15 = dVar17;
        if (cVar32 == '\0') {
          dVar15 = (double)((ulonglong)uVar28 << 0x20);
        }
        if (cVar31 == '\0') {
          dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) *
                                    (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 * dVar14;
        }
        fVar12 = (float)((ulonglong)dVar18 >> 0x20);
        if (cVar32 == '\0') {
          dVar17 = (double)CONCAT44(uVar28,SUB84(dVar11,0));
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fStack_40);
          in_xd4 = dVar16;
          dVar16 = dVar27;
          dVar27 = (double)CONCAT44(fVar12,SUB84(dVar14,0));
        }
        else {
          in_xd4 = (double)CONCAT44(fStack_3c,fStack_40);
          dVar27 = dVar18;
        }
        if (cVar31 == '\0') {
          fVar20 = (float)((ulonglong)dVar11 >> 0x20);
          dVar11 = (double)CONCAT44(fVar20,SUB84(dVar11,0) * SUB84(dVar17,0));
          dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - fVar20,SUB84(dVar27,0));
        }
        else {
          dVar11 = dVar11 * dVar17;
          dVar27 = dVar27 - dVar11;
        }
        fVar20 = fStack_3c;
        fVar23 = fStack_38;
        if (cVar32 == '\0') {
          fVar20 = SUB84(dVar11,0);
          fVar23 = fStack_3c;
        }
        if (cVar31 == '\0') {
          fVar20 = (float)((ulonglong)dVar15 >> 0x20) * fVar23 + fVar20;
        }
        dVar14 = dVar27;
        if (cVar32 == '\0') {
          dVar14 = (double)((ulonglong)dVar27 & 0xffffffff00000000);
        }
        uVar3 = 8;
        if (cVar32 == '\0') {
          dVar15 = (double)CONCAT44(fStack_44,fVar20);
        }
        else {
          dVar15 = (double)CONCAT44(fStack_40,fStack_44);
        }
        uVar4 = uVar4 + 4;
        if (cVar31 == '\0') {
          iVar2 = (int)(fVar12 * (float)((ulonglong)dVar29 >> 0x20) +
                       (float)((ulonglong)dVar14 >> 0x20) * (float)((ulonglong)dVar15 >> 0x20) +
                       SUB84(dVar15,0));
        }
        else {
          iVar2 = (int)dVar15;
        }
        *ar7 = iVar2;
        ar7 = ar7 + 1;
        fVar10 = fStack_4c;
      } while (uVar4 < 0xc);
    }
    else {
      if (cVar32 == '\0') {
        fVar1 = fStack_48;
        fStack_4c = fVar10;
      }
      do {
        fStack_48 = fVar1;
        iVar5 = *(int *)((int)piVar9 + uVar4 + 4);
        iVar2 = *(int *)((int)piVar8 + uVar4 + 4);
        dVar14 = in_xd4;
        if (cVar32 == '\0') {
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),(float)iVar5);
          dVar14 = in_xd12;
        }
        dVar16 = in_xd4;
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((float)iVar2,SUB84(dVar27,0));
        }
        fVar12 = SUB84(dVar29,0);
        if (cVar31 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar12,SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar29;
        }
        dVar27 = in_xd4;
        if (cVar32 == '\0') {
          dVar27 = (double)CONCAT44((float)(iVar5 - *(int *)((int)piVar6 + uVar4 + 4)),
                                    SUB84(dVar18,0));
        }
        fVar20 = (float)(*(int *)((int)piVar7 + uVar4 + 4) - iVar2);
        fVar23 = (float)((ulonglong)dVar16 >> 0x20);
        if (cVar31 == '\0') {
          bVar30 = fVar26 < fVar23;
        }
        else {
          bVar30 = dVar25 < dVar16;
        }
        dVar11 = in_xd4;
        if (cVar32 == '\0') {
          dVar11 = (double)CONCAT44(fVar20,SUB84(dVar17,0));
        }
        if (bVar30) {
          if (cVar31 == '\0') {
            dVar16 = (double)CONCAT44(fVar23 - fVar13,SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 - dVar22;
          }
        }
        else {
          if (cVar31 == '\0') {
            bVar30 = fVar21 < fVar23;
          }
          else {
            bVar30 = dVar22 < dVar16;
          }
          if (!bVar30) {
            if (cVar31 == '\0') {
              dVar16 = (double)CONCAT44(fVar23 + fVar13,SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar22;
            }
          }
        }
        fVar23 = (float)((ulonglong)dVar16 >> 0x20);
        dVar18 = dVar16;
        if (cVar32 == '\0') {
          dVar18 = in_xd4;
          fVar20 = fVar23;
        }
        fVar10 = (float)((ulonglong)dVar27 >> 0x20);
        if (cVar31 == '\0') {
          bVar30 = fVar26 < fVar10;
          fStack_30 = fVar20 + fVar12;
        }
        else {
          bVar30 = dVar25 < dVar27;
          fStack_30 = SUB84((double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar20) + dVar29,0);
        }
        if (cVar32 != '\0') {
          fStack_30 = SUB84(dVar18,0);
          fStack_2c = (float)((ulonglong)dVar18 >> 0x20);
        }
        if (bVar30) {
          if (cVar31 == '\0') {
            dVar27 = (double)CONCAT44(fVar10 - fVar13,SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 - dVar22;
          }
        }
        else {
          if (cVar31 == '\0') {
            bVar30 = fVar21 < fVar10;
          }
          else {
            bVar30 = dVar22 < dVar27;
          }
          if (!bVar30) {
            if (cVar31 == '\0') {
              dVar27 = (double)CONCAT44(fVar10 + fVar13,SUB84(dVar27,0));
            }
            else {
              dVar27 = dVar27 + dVar22;
            }
          }
        }
        fVar20 = (float)((ulonglong)dVar11 >> 0x20);
        if (cVar31 == '\0') {
          bVar30 = fVar26 < fVar20;
        }
        else {
          bVar30 = dVar25 < dVar11;
        }
        if (bVar30) {
          if (cVar31 == '\0') {
            dVar11 = (double)CONCAT44(fVar20 - fVar13,SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar22;
          }
        }
        else {
          if (cVar31 == '\0') {
            bVar30 = fVar21 < fVar20;
          }
          else {
            bVar30 = dVar22 < dVar11;
          }
          if (!bVar30) {
            if (cVar31 == '\0') {
              dVar11 = (double)CONCAT44(fVar20 + fVar13,SUB84(dVar11,0));
            }
            else {
              dVar11 = dVar11 + dVar22;
            }
          }
        }
        if (cVar32 == '\0') {
          dVar15 = (double)CONCAT44(fStack_38,fStack_48);
        }
        else {
          dVar18 = (double)CONCAT44(fStack_44,fStack_48);
          dVar15 = (double)CONCAT44(fStack_34,fStack_38);
        }
        if (cVar31 == '\0') {
          dVar15 = (double)CONCAT44(((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar27 >> 0x20)) / SUB84(dVar11,0),
                                    (SUB84(dVar15,0) * fVar23) / fVar24);
        }
        else {
          dVar15 = ((dVar15 * dVar16 * dVar27) / dVar25) / dVar11;
        }
        if (cVar32 == '\0') {
          uVar3 = SUB84(dVar15,0);
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fStack_4c);
          dVar19 = dVar18;
          dVar18 = (double)CONCAT44(uVar3,SUB84(dVar27,0));
        }
        else {
          dVar19 = (double)CONCAT44(fStack_48,fStack_4c);
        }
        if (cVar31 == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) +
                                    (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 + dVar15;
        }
        if (cVar32 == '\0') {
          dVar15 = (double)CONCAT44(fStack_34,SUB84(dVar15,0));
        }
        else {
          dVar15 = (double)CONCAT44(fStack_30,fStack_34);
        }
        if (cVar31 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar15,0) * fVar23);
        }
        else {
          dVar15 = dVar15 * dVar16 * dVar11;
        }
        dVar17 = dVar14;
        if (cVar32 == '\0') {
          dVar17 = (double)CONCAT44(fVar12,SUB84(dVar11,0));
        }
        if (cVar31 == '\0') {
          dVar17 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) * SUB84(dVar16,0) +
                                    (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0));
        }
        dVar11 = dVar14;
        if (cVar32 == '\0') {
          dVar11 = (double)((longlong)dVar29 << 0x20);
        }
        if (cVar31 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar18,0),
                                    SUB84(dVar15,0) / fVar24);
        }
        else {
          dVar15 = (dVar15 / dVar25) / dVar18;
        }
        dVar27 = dVar19;
        if (cVar32 == '\0') {
          dVar27 = (double)CONCAT44(SUB84(dVar15,0),SUB84(dVar16,0));
        }
        fVar12 = (float)((ulonglong)dVar15 >> 0x20);
        if (cVar31 == '\0') {
          dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) + fVar12,SUB84(dVar27,0));
        }
        else {
          dVar27 = dVar27 + dVar15;
        }
        in_xd4 = in_xd8;
        if (cVar32 == '\0') {
          dVar15 = (double)CONCAT44(fVar12,SUB84(dVar27,0));
          in_xd4 = dVar19;
        }
        if (cVar31 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                    SUB84(dVar15,0) * (float)((ulonglong)dVar27 >> 0x20));
        }
        else {
          dVar15 = dVar15 * dVar27;
        }
        if (cVar32 == '\0') {
          dVar27 = (double)CONCAT44(fStack_30,SUB84(dVar27,0));
        }
        else {
          dVar27 = (double)CONCAT44(fStack_2c,fStack_30);
        }
        if (cVar31 == '\0') {
          dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - SUB84(dVar15,0),
                                    SUB84(dVar27,0));
        }
        else {
          dVar27 = dVar27 - dVar15;
        }
        if (cVar32 == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fStack_40);
        }
        else {
          in_xd4 = (double)CONCAT44(fStack_3c,fStack_40);
        }
        if (cVar31 == '\0') {
          fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar15 * dVar17,0);
        }
        fVar20 = fStack_3c;
        fVar23 = fStack_38;
        if (cVar32 == '\0') {
          fVar20 = fVar12;
          fVar23 = fStack_3c;
        }
        uVar4 = uVar4 + 4;
        if (cVar31 == '\0') {
          fVar20 = (float)((ulonglong)dVar11 >> 0x20) * fVar23 + fVar20;
        }
        if (cVar32 == '\0') {
          dVar15 = (double)CONCAT44(fStack_44,fVar20);
          dVar16 = (double)((ulonglong)dVar27 & 0xffffffff00000000);
        }
        else {
          dVar15 = (double)CONCAT44(fStack_40,fStack_44);
          dVar16 = dVar27;
        }
        uVar3 = 0x1c;
        if (cVar31 == '\0') {
          fVar12 = (float)((ulonglong)dVar15 >> 0x20);
          dVar15 = (double)CONCAT44(fVar12,(float)((ulonglong)dVar16 >> 0x20) * fVar12 +
                                           SUB84(dVar15,0));
        }
        fVar12 = fStack_2c;
        if (cVar32 == '\0') {
          fVar12 = fStack_30;
        }
        if (cVar31 == '\0') {
          fVar12 = fVar12 * (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar15,0);
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar12);
          iVar2 = (int)fVar12;
        }
        else {
          iVar2 = (int)dVar15;
        }
        *ar7 = iVar2;
        ar7 = ar7 + 1;
        in_xd12 = dVar14;
        fVar1 = fStack_48;
      } while (uVar4 < 0xc);
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c21d3e8\n.set _FUN_8c21d3e8, _FUN_8c21d3e8_def\n");
