#include "../decls.h"
uint FUN_8c21c774_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double in_dr0;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 in_fr5;
  double dVar21;
  float fVar22;
  undefined4 in_fr7;
  double dVar23;
  double dVar24;
  double in_dr8;
  undefined4 uVar25;
  undefined4 in_fr11;
  double dVar26;
  undefined4 uVar29;
  double dVar27;
  double dVar28;
  float fVar30;
  float fVar31;
  double in_dr12;
  undefined4 uVar32;
  float fVar33;
  double in_dr14;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double dVar37;
  double in_xd10;
  double in_xd12;
  double in_xd14;
  bool bVar38;
  char cVar39;
  char cVar40;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  cVar40 = '\0';
  cVar39 = '\0';
  iVar1 = libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6);
  piVar7 = (int *)(iVar1 * 0x10 + ar4);
  piVar9 = (int *)(ar5 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar8 = (int *)(iVar1 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 2,ar6);
  piVar6 = (int *)(iVar1 * 0x10 + ar4);
  fVar16 = (float)*piVar8;
  if (*piVar8 < 0) {
    if (cVar39 == '\0') {
      fVar16 = fVar16 + 4.2949673e+09;
    }
    else {
      fVar16 = SUB84((double)CONCAT44(0x4f800000,fVar16) + (double)CONCAT44(0x4f800000,fVar16),0);
    }
  }
  iVar1 = *piVar9;
  if (cVar39 == '\0') {
    dVar18 = (double)CONCAT44((float)iVar1,fVar16);
  }
  else {
    dVar18 = (double)iVar1;
  }
  if (iVar1 < 0) {
    if (cVar40 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar39 == '\0') {
      dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar18,0)
                               );
    }
    else {
      dVar18 = dVar18 + in_dr0;
    }
  }
  dVar21 = in_xd2;
  if (cVar40 == '\0') {
    dVar21 = (double)CONCAT44(SUB84(dVar18,0),in_fr5);
  }
  fVar16 = (float)((ulonglong)dVar18 >> 0x20);
  if (cVar39 == '\0') {
    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - fVar16,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 - dVar18;
  }
  if (cVar39 == '\0') {
    bVar38 = 0.0 < (float)((ulonglong)dVar21 >> 0x20);
  }
  else {
    bVar38 = (double)((ulonglong)(uint)fVar16 << 0x20) < dVar21;
  }
  dVar26 = (double)CONCAT44(0x3f800000,in_fr11);
  dVar18 = dVar21;
  if ((!bVar38) && (dVar18 = dVar26, cVar40 == '\0')) {
    dVar18 = (double)CONCAT44(0x3f800000,SUB84(dVar21,0));
  }
  fVar16 = (float)*piVar6;
  if (*piVar6 < 0) {
    if (cVar39 == '\0') {
      fVar16 = fVar16 + 4.2949673e+09;
    }
    else {
      fVar16 = SUB84((double)CONCAT44(0x4f800000,fVar16) + (double)CONCAT44(0x4f800000,fVar16),0);
    }
  }
  iVar1 = *piVar8;
  if (cVar39 == '\0') {
    dVar21 = (double)CONCAT44((float)iVar1,fVar16);
  }
  else {
    dVar21 = (double)iVar1;
  }
  if (iVar1 < 0) {
    if (cVar40 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar39 == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar21,0)
                               );
    }
    else {
      dVar21 = dVar21 + in_dr0;
    }
  }
  dVar23 = in_xd2;
  if (cVar40 == '\0') {
    dVar23 = (double)CONCAT44(SUB84(dVar21,0),in_fr7);
  }
  fVar16 = (float)((ulonglong)dVar21 >> 0x20);
  if (cVar39 == '\0') {
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - fVar16,SUB84(dVar23,0));
  }
  else {
    dVar23 = dVar23 - dVar21;
  }
  if (cVar39 == '\0') {
    bVar38 = 0.0 < (float)((ulonglong)dVar23 >> 0x20);
  }
  else {
    bVar38 = (double)((ulonglong)(uint)fVar16 << 0x20) < dVar23;
  }
  dVar21 = dVar23;
  if ((!bVar38) && (dVar21 = dVar26, cVar40 == '\0')) {
    dVar21 = (double)CONCAT44(0x3f800000,SUB84(dVar23,0));
  }
  fVar16 = (float)*piVar9;
  if (*piVar9 < 0) {
    if (cVar39 == '\0') {
      fVar16 = fVar16 + 4.2949673e+09;
    }
    else {
      fVar16 = SUB84((double)CONCAT44(0x4f800000,fVar16) + (double)CONCAT44(0x4f800000,fVar16),0);
    }
  }
  iVar1 = *piVar7;
  if (cVar39 == '\0') {
    dVar23 = (double)CONCAT44((float)iVar1,fVar16);
  }
  else {
    dVar23 = (double)iVar1;
  }
  if (iVar1 < 0) {
    if (cVar40 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar39 == '\0') {
      dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar23,0)
                               );
    }
    else {
      dVar23 = dVar23 + in_dr0;
    }
  }
  dVar19 = in_xd2;
  if (cVar40 == '\0') {
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar23,0));
    dVar19 = in_xd6;
  }
  fVar16 = (float)((ulonglong)dVar23 >> 0x20);
  if (cVar39 == '\0') {
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) - fVar16);
  }
  else {
    dVar21 = dVar21 - dVar23;
  }
  if (cVar39 == '\0') {
    bVar38 = 0.0 < SUB84(dVar21,0);
  }
  else {
    bVar38 = (double)((ulonglong)(uint)fVar16 << 0x20) < dVar21;
  }
  dVar23 = dVar19;
  if ((!bVar38) && (dVar23 = dVar26, cVar40 == '\0')) {
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),0x3f800000);
    dVar23 = dVar19;
  }
  fVar16 = (float)*piVar9;
  if (*piVar9 < 0) {
    if (cVar39 == '\0') {
      fVar16 = fVar16 + 4.2949673e+09;
    }
    else {
      fVar16 = SUB84((double)CONCAT44(0x4f800000,fVar16) + (double)CONCAT44(0x4f800000,fVar16),0);
    }
  }
  fVar17 = (float)((ulonglong)dVar21 >> 0x20);
  dVar19 = dVar21;
  if (cVar40 == '\0') {
    dVar19 = (double)CONCAT44(fVar17,fVar16);
  }
  fVar16 = (float)((ulonglong)dVar18 >> 0x20);
  if (cVar39 == '\0') {
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + fVar16,SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 + dVar18;
  }
  if (cVar40 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),_DAT_8c4aad54);
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),0x3f800000);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4aad58,_DAT_8c4aad54);
    in_xd14 = dVar26;
  }
  if (cVar39 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar19,0));
  }
  else {
    in_dr0 = in_dr0 - dVar19;
  }
  dVar24 = dVar18;
  dVar37 = dVar18;
  if (cVar40 == '\0') {
    in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),fVar16);
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),fVar16);
    dVar24 = in_xd12;
    dVar37 = in_xd8;
  }
  fVar11 = (float)((ulonglong)dVar19 >> 0x20);
  if (cVar39 == '\0') {
    fVar30 = SUB84(in_dr12,0) / fVar11;
  }
  else {
    fVar30 = SUB84(in_dr12 / dVar19,0);
  }
  if (cVar40 == '\0') {
    dVar19 = (double)CONCAT44(fVar11,0x3eaaaa3b);
    dVar18 = (double)CONCAT44(fVar16,fVar16);
    dVar26 = (double)CONCAT44(0x3f800000,SUB84(in_dr0,0));
  }
  else {
    in_xd2 = 32.00000747044802;
    in_xd10 = in_xd0;
    in_xd4 = dVar18;
  }
  fVar16 = (float)((ulonglong)dVar18 >> 0x20);
  if (cVar39 == '\0') {
    dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) / fVar16);
  }
  else {
    dVar26 = dVar26 / dVar18;
  }
  dVar14 = dVar23;
  if (cVar40 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar21,0));
    dVar14 = in_xd0;
  }
  fVar11 = SUB84(dVar26,0);
  if (cVar39 == '\0') {
    fVar10 = SUB84(in_dr0,0) + fVar16;
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar10);
    dVar18 = (double)CONCAT44(fVar16,SUB84(dVar18,0) * SUB84(dVar19,0));
    fVar10 = SUB84(in_dr8,0) / fVar10;
    fVar16 = SUB84(in_dr14,0) - fVar11;
  }
  else {
    in_dr0 = in_dr0 + dVar18;
    dVar18 = dVar18 * dVar19;
    fVar10 = SUB84(in_dr8 / in_dr0,0);
    fVar16 = SUB84(in_dr14 - dVar26,0);
  }
  dVar20 = in_xd10;
  if (cVar40 == '\0') {
    dVar20 = (double)CONCAT44(fVar11,SUB84(dVar19,0));
  }
  if (cVar39 == '\0') {
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar11,SUB84(dVar20,0));
  }
  else {
    dVar20 = dVar20 * dVar26;
  }
  dVar34 = in_xd14;
  dVar19 = in_xd10;
  if (cVar40 == '\0') {
    dVar34 = (double)CONCAT44(fVar16,fVar16);
    dVar19 = (double)CONCAT44(fVar11,fVar30);
  }
  if (cVar39 == '\0') {
    dVar34 = (double)CONCAT44((float)((ulonglong)dVar34 >> 0x20) * SUB84(dVar34,0),SUB84(dVar34,0));
  }
  else {
    dVar34 = dVar34 * dVar34;
  }
  if (cVar40 == '\0') {
    in_xd14 = (double)CONCAT44(SUB84(dVar34,0),fVar10);
  }
  fVar16 = (float)((ulonglong)dVar20 >> 0x20);
  if (cVar39 == '\0') {
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * fVar16,SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 * dVar20;
  }
  fStack_30 = SUB84(dVar20,0);
  if (cVar40 == '\0') {
    dVar20 = (double)CONCAT44(0x40400000,fStack_30);
    fStack_30 = fVar16;
  }
  else {
    dVar20 = 1.4969491268382446e-78;
    fStack_2c = fVar16;
  }
  fVar16 = (float)((ulonglong)dVar34 >> 0x20);
  if (cVar39 == '\0') {
    in_xd14 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) * fVar16,SUB84(in_xd14,0));
    dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),fVar11 * fVar16);
  }
  else {
    in_xd14 = in_xd14 * dVar34;
    dVar26 = dVar26 * dVar34;
  }
  if (cVar40 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fStack_30);
    dVar34 = (double)CONCAT44(SUB84(dVar26,0),SUB84(dVar34,0));
  }
  else {
    dVar14 = (double)CONCAT44(fStack_2c,fStack_30);
    dVar34 = in_xd10;
  }
  fVar16 = (float)((ulonglong)dVar20 >> 0x20);
  if (cVar39 == '\0') {
    dVar35 = (double)CONCAT44((float)((ulonglong)dVar34 >> 0x20) * fVar16,SUB84(dVar34,0));
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) * SUB84(dVar34,0));
  }
  else {
    dVar35 = dVar34 * dVar20;
    in_dr0 = in_dr0 * dVar35;
  }
  uVar5 = 0;
  if (cVar40 == '\0') {
    dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),SUB84(in_dr0,0));
  }
  if (cVar39 == '\0') {
    dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),SUB84(dVar35,0) * fVar16);
  }
  else {
    dVar35 = dVar35 * dVar20;
  }
  fVar16 = (float)((ulonglong)dVar26 >> 0x20);
  dVar34 = dVar26;
  if (cVar40 == '\0') {
    dVar34 = (double)CONCAT44(fVar16,SUB84(dVar20,0));
  }
  fVar11 = SUB84(in_xd14,0);
  if (cVar39 == '\0') {
    dVar34 = (double)CONCAT44((float)((ulonglong)dVar34 >> 0x20) - fVar11,SUB84(dVar34,0));
  }
  else {
    dVar34 = dVar34 - in_xd14;
  }
  fVar30 = (float)((ulonglong)dVar34 >> 0x20);
  uVar29 = SUB84(dVar34,0);
  uStack_58 = uVar29;
  fVar10 = fVar30;
  if (cVar40 == '\0') {
    uStack_58 = fVar30;
    fVar10 = fStack_54;
  }
  fStack_54 = fVar10;
  uVar32 = uStack_58;
  uVar25 = (undefined4)((ulonglong)in_xd14 >> 0x20);
  fVar10 = SUB84(dVar18,0);
  fVar22 = (float)((ulonglong)dVar18 >> 0x20);
  fVar33 = SUB84(dVar35,0);
  uVar36 = (undefined4)((ulonglong)dVar35 >> 0x20);
  if (ar5 == ar6 + -2) {
    dVar23 = dVar37;
    uStack_58 = uVar29;
    if (cVar40 == '\0') {
      dVar23 = (double)CONCAT44(fVar11,uVar29);
      uStack_58 = fVar30;
      fVar30 = fStack_54;
    }
    fStack_54 = fVar30;
    if (cVar39 == '\0') {
      dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + fVar16,SUB84(dVar23,0));
    }
    else {
      dVar23 = dVar23 + dVar26;
    }
    fVar16 = (float)((ulonglong)dVar23 >> 0x20);
    fStack_34 = fVar16;
    if (cVar40 != '\0') {
      fStack_34 = SUB84(dVar23,0);
      fStack_30 = fVar16;
    }
    do {
      uVar2 = uVar5;
      pdVar3 = (double *)((int)piVar8 + uVar2 + 4);
      if (cVar40 == '\0') {
        uVar29 = *(undefined4 *)pdVar3;
        dVar26 = (double)CONCAT44(uVar29,uVar29);
      }
      else {
        dVar26 = *pdVar3;
        in_xd10 = dVar26;
      }
      pdVar3 = (double *)((int)piVar9 + uVar2 + 4);
      pdVar4 = (double *)((int)piVar7 + uVar2 + 4);
      if (cVar40 == '\0') {
        fVar16 = *(float *)pdVar3;
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)pdVar4);
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fVar16);
        dVar21 = (double)CONCAT44(fVar16,SUB84(dVar21,0));
      }
      else {
        dVar24 = *pdVar3;
        in_xd2 = *pdVar4;
        fVar16 = (float)((ulonglong)dVar24 >> 0x20);
        dVar21 = dVar24;
      }
      if (cVar39 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) - fVar16);
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) - SUB84(dVar23,0)
                                 );
      }
      else {
        dVar26 = dVar26 - dVar21;
        dVar19 = dVar19 - dVar23;
      }
      if (cVar40 == '\0') {
        dVar23 = (double)CONCAT44(uStack_58,fVar11);
        dVar14 = in_xd2;
      }
      else {
        dVar23 = (double)CONCAT44(fStack_54,uStack_58);
        dVar14 = dVar37;
      }
      if (cVar39 == '\0') {
        dVar23 = (double)CONCAT44(((float)((ulonglong)dVar23 >> 0x20) * SUB84(dVar26,0)) / fVar22,
                                  (SUB84(dVar23,0) * SUB84(dVar19,0)) / SUB84(dVar21,0));
      }
      else {
        dVar23 = ((dVar23 * dVar26 * dVar19) / dVar18) / dVar21;
      }
      uVar29 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (cVar40 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),uVar29);
        dVar20 = dVar24;
        fStack_38 = SUB84(dVar23,0);
      }
      else {
        fStack_38 = SUB84(dVar14,0);
        fStack_34 = (float)((ulonglong)dVar14 >> 0x20);
        dVar20 = dVar23;
      }
      if (cVar39 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) + SUB84(dVar23,0)
                                 );
      }
      else {
        dVar19 = dVar19 + dVar23;
      }
      if (cVar40 == '\0') {
        dVar23 = (double)CONCAT44(uVar29,fStack_34);
      }
      else {
        dVar14 = (double)CONCAT44(fStack_30,fStack_34);
      }
      if (cVar39 == '\0') {
        fVar17 = (SUB84(dVar23,0) * SUB84(dVar26,0)) / fVar22;
      }
      else {
        fVar17 = SUB84((dVar23 * dVar26) / dVar18,0);
      }
      dVar27 = dVar20;
      dVar34 = dVar21;
      if (cVar40 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),fVar17);
        dVar27 = (double)CONCAT44(SUB84(dVar19,0),SUB84(in_dr0,0));
        dVar34 = dVar14;
        fVar17 = fVar16;
        dVar14 = in_xd10;
      }
      if (cVar39 == '\0') {
        fVar17 = (float)((ulonglong)dVar27 >> 0x20) * fVar10 + fVar17;
      }
      if (cVar40 == '\0') {
        dVar23 = (double)CONCAT44(fStack_38,fVar17);
        dVar27 = (double)((ulonglong)dVar18 & 0xffffffff);
      }
      else {
        dVar23 = (double)CONCAT44(fStack_34,fStack_38);
      }
      fVar17 = (float)((ulonglong)dVar23 >> 0x20);
      if (cVar39 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) - fVar17);
      }
      else {
        dVar26 = dVar26 - dVar23;
      }
      dVar24 = dVar34;
      dVar13 = in_xd14;
      if (cVar40 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar23,0));
        dVar24 = dVar20;
        dVar13 = (double)CONCAT44(uVar25,SUB84(dVar27,0));
      }
      in_xd2 = dVar35;
      if (cVar40 == '\0') {
        dVar23 = (double)CONCAT44(fVar17,uVar36);
        in_xd2 = dVar34;
      }
      if (cVar39 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) * SUB84(dVar19,0)
                                 );
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) * SUB84(dVar26,0)
                                 );
      }
      else {
        dVar23 = dVar23 * dVar19;
        dVar13 = dVar13 * dVar26;
      }
      in_xd10 = dVar26;
      if (cVar40 == '\0') {
        uVar29 = (undefined4)((ulonglong)dVar26 >> 0x20);
        dVar26 = (double)CONCAT44(uVar29,uVar29);
        in_xd10 = dVar14;
      }
      if (cVar39 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                  (float)((ulonglong)dVar13 >> 0x20) * fVar16 + SUB84(dVar23,0));
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) - SUB84(dVar13,0)
                                 );
      }
      else {
        dVar26 = dVar26 - dVar13;
      }
      dVar14 = in_xd10;
      if (cVar40 == '\0') {
        dVar14 = (double)CONCAT44(SUB84(dVar26,0),SUB84(dVar13,0));
      }
      if (cVar39 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                  (float)((ulonglong)dVar14 >> 0x20) * fVar33 + SUB84(dVar23,0));
      }
      in_dr0 = dVar19;
      if (cVar40 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar14,0));
      }
      if (cVar39 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                  (float)((ulonglong)in_dr0 >> 0x20) *
                                  (float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar23,0));
      }
      if (cVar40 == '\0') {
        *(int *)(uVar2 + ar7) = SUB84(dVar23,0);
      }
      else {
        *(double *)(uVar2 + ar7) = in_xd2;
      }
      uVar5 = uVar2 + 4;
    } while (uVar2 + 4 < 0xc);
  }
  else {
    dVar20 = dVar26;
    if (cVar40 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar16);
      dVar20 = dVar14;
    }
    fVar31 = SUB84(dVar19,0);
    if (cVar39 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar31);
    }
    else {
      in_dr0 = in_dr0 - dVar19;
    }
    uStack_58 = (undefined4)((ulonglong)dVar20 >> 0x20);
    uVar29 = uStack_58;
    if (cVar40 == '\0') {
      uStack_58 = uVar32;
    }
    uVar32 = (undefined4)((ulonglong)dVar19 >> 0x20);
    uStack_5c = SUB84(dVar20,0);
    if (ar5 == 0) {
      dVar14 = dVar24;
      if (cVar40 == '\0') {
        dVar34 = (double)CONCAT44(fVar30,fVar31);
        dVar14 = in_xd2;
      }
      if (cVar39 == '\0') {
        dVar34 = (double)(ulonglong)(uint)(SUB84(dVar34,0) + fVar16);
      }
      else {
        dVar34 = dVar34 + dVar26;
      }
      if (cVar40 == '\0') {
        fStack_2c = SUB84(dVar34,0);
        uStack_5c = SUB84(in_dr0,0);
      }
      else {
        fStack_2c = SUB84(dVar14,0);
        fStack_28 = (float)((ulonglong)dVar14 >> 0x20);
        uStack_58 = uVar29;
      }
      do {
        uVar2 = uVar5;
        dVar20 = dVar24;
        if (cVar40 == '\0') {
          dVar20 = (double)CONCAT44(fVar31,SUB84(dVar34,0));
        }
        pdVar4 = (double *)((int)piVar8 + uVar2 + 4);
        pdVar3 = (double *)((int)piVar9 + uVar2 + 4);
        if (cVar40 == '\0') {
          fVar16 = *(float *)pdVar4;
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),fVar16);
          in_xd14 = (double)CONCAT44((int)((ulonglong)in_xd14 >> 0x20),*(undefined4 *)pdVar3);
          dVar26 = (double)CONCAT44(fVar16,SUB84(dVar26,0));
        }
        else {
          dVar26 = *pdVar4;
          dVar37 = *pdVar3;
          fVar16 = SUB84(dVar21,0);
          dVar23 = dVar26;
        }
        fVar17 = SUB84(in_xd14,0);
        if (cVar39 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) - fVar17,SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 - in_xd14;
        }
        if (cVar40 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fStack_2c);
        }
        else {
          dVar14 = (double)CONCAT44(fStack_28,fStack_2c);
        }
        pdVar3 = (double *)((int)piVar6 + uVar2 + 4);
        if (cVar40 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)pdVar3);
        }
        else {
          in_xd10 = *pdVar3;
        }
        fVar11 = (float)((ulonglong)dVar26 >> 0x20);
        if (cVar39 == '\0') {
          fVar30 = SUB84(dVar26,0) - fVar16;
          dVar27 = (double)CONCAT44(fVar11,fVar30);
          dVar26 = (double)CONCAT44(((float)((ulonglong)dVar20 >> 0x20) * fVar30) /
                                    (float)((ulonglong)dVar21 >> 0x20),
                                    (SUB84(dVar20,0) * fVar11) / fVar22);
        }
        else {
          dVar27 = dVar26 - dVar21;
          dVar26 = (((dVar20 * dVar26) / dVar18) * dVar27) / dVar21;
        }
        fStack_28 = SUB84(dVar26,0);
        dVar20 = dVar14;
        if (cVar40 == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),fStack_28);
          dVar20 = in_xd10;
        }
        fVar11 = (float)((ulonglong)dVar26 >> 0x20);
        if (cVar39 == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar11);
        }
        else {
          dVar27 = dVar27 - dVar26;
        }
        if (cVar40 == '\0') {
          dVar26 = (double)CONCAT44(fVar11,uStack_5c);
          fStack_28 = fVar11;
        }
        else {
          dVar14 = (double)CONCAT44(uStack_58,uStack_5c);
        }
        if (cVar39 == '\0') {
          dVar34 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                    (SUB84(dVar26,0) * (float)((ulonglong)dVar27 >> 0x20)) / fVar22)
          ;
        }
        else {
          dVar34 = (dVar26 * dVar27) / dVar18;
        }
        dVar26 = dVar14;
        if (cVar40 == '\0') {
          dVar26 = (double)CONCAT44(SUB84(dVar34,0),SUB84(dVar27,0));
        }
        fVar11 = (float)((ulonglong)dVar34 >> 0x20);
        if (cVar39 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + fVar11,SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar34;
        }
        dVar13 = dVar20;
        dVar27 = dVar37;
        if (cVar40 == '\0') {
          dVar34 = (double)CONCAT44(fVar11,fVar17);
          dVar13 = (double)CONCAT44(SUB84(dVar26,0),SUB84(in_dr0,0));
          dVar27 = dVar14;
        }
        fVar11 = (float)((ulonglong)dVar13 >> 0x20);
        if (cVar39 == '\0') {
          dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),
                                    fVar11 * fVar10 + SUB84(dVar34,0));
        }
        if (cVar40 == '\0') {
          dVar13 = (double)CONCAT44(fVar11,fVar10);
        }
        if (cVar39 == '\0') {
          fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar26 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar13 * dVar26,0);
        }
        dVar28 = dVar23;
        in_xd10 = dVar27;
        dVar13 = in_xd14;
        if (cVar40 == '\0') {
          dVar28 = (double)CONCAT44(fVar16,SUB84(dVar34,0));
          in_xd10 = dVar20;
          dVar13 = (double)CONCAT44((int)((ulonglong)in_xd14 >> 0x20),fVar11);
        }
        dVar14 = dVar35;
        if (cVar40 == '\0') {
          dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),uVar36);
          dVar14 = dVar27;
        }
        if (cVar39 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - SUB84(dVar13,0),
                                    SUB84(dVar28,0));
          dVar34 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar13 >> 0x20) * fVar17 +
                                 SUB84(dVar34,0) * SUB84(dVar28,0));
        }
        else {
          dVar34 = dVar34 * dVar28;
          dVar26 = dVar28 - dVar13;
        }
        dVar20 = dVar26;
        if (cVar40 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar13,0));
        }
        if (cVar39 == '\0') {
          dVar34 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar20 >> 0x20) * fVar33 + SUB84(dVar34,0));
        }
        in_dr0 = dVar19;
        if (cVar40 == '\0') {
          in_dr0 = (double)CONCAT44(uVar32,SUB84(dVar20,0));
        }
        if (cVar39 == '\0') {
          dVar34 = (double)(ulonglong)
                           (uint)((float)((ulonglong)in_dr0 >> 0x20) * fVar16 + SUB84(dVar34,0));
        }
        if (cVar40 == '\0') {
          *(int *)(uVar2 + ar7) = SUB84(dVar34,0);
        }
        else {
          *(double *)(uVar2 + ar7) = dVar14;
        }
        uVar5 = uVar2 + 4;
      } while (uVar2 + 4 < 0xc);
    }
    else {
      uStack_58 = uVar29;
      if (cVar40 == '\0') {
        uStack_5c = SUB84(in_dr0,0);
        uStack_58 = fVar30;
      }
      do {
        uVar2 = uVar5;
        pdVar4 = (double *)((int)piVar8 + uVar2 + 4);
        pdVar3 = (double *)((int)piVar9 + uVar2 + 4);
        if (cVar40 == '\0') {
          fVar16 = *(float *)pdVar4;
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar3,fVar16);
          dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),fVar16);
        }
        else {
          in_xd2 = *pdVar4;
          dVar26 = *pdVar3;
          fVar16 = SUB84(dVar26,0);
          in_xd10 = in_xd2;
        }
        fVar30 = (float)((ulonglong)dVar26 >> 0x20);
        if (cVar39 == '\0') {
          fStack_54 = SUB84(dVar34,0) - fVar30;
        }
        else {
          fStack_54 = SUB84(dVar34 - dVar26,0);
        }
        pdVar3 = (double *)((int)piVar7 + uVar2 + 4);
        if (cVar40 == '\0') {
          dVar23 = (double)CONCAT44(fVar30,*(undefined4 *)pdVar3);
        }
        else {
          fStack_54 = SUB84(in_xd2,0);
          fStack_50 = (float)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = *pdVar3;
          dVar23 = dVar26;
        }
        pdVar3 = (double *)((int)piVar6 + uVar2 + 4);
        if (cVar39 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - SUB84(dVar23,0),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 - dVar23;
        }
        uVar29 = (undefined4)((ulonglong)dVar23 >> 0x20);
        if (cVar40 == '\0') {
          dVar23 = (double)CONCAT44(uVar29,*(undefined4 *)pdVar3);
          uStack_3c = uVar29;
        }
        else {
          uStack_3c = SUB84(dVar23,0);
          in_xd2 = *pdVar3;
          fStack_38 = (float)uVar29;
        }
        if (cVar39 == '\0') {
          fStack_40 = SUB84(dVar23,0) - fVar16;
        }
        else {
          fStack_40 = SUB84(dVar23 - dVar26,0);
        }
        if (cVar40 == '\0') {
          dVar23 = (double)CONCAT44(fStack_54,fStack_40);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uStack_58);
        }
        else {
          fStack_40 = SUB84(in_xd2,0);
          uStack_3c = (undefined4)((ulonglong)in_xd2 >> 0x20);
          dVar23 = (double)CONCAT44(fStack_50,fStack_54);
          dVar20 = (double)CONCAT44(fStack_54,uStack_58);
        }
        fVar15 = (float)((ulonglong)dVar23 >> 0x20);
        if (cVar39 == '\0') {
          fVar12 = SUB84(in_dr0,0) * fVar15;
        }
        else {
          fVar12 = SUB84(in_dr0 * dVar23,0);
        }
        if (cVar40 == '\0') {
          dVar23 = (double)CONCAT44(fVar15,fVar11);
          dVar14 = (double)CONCAT44(uStack_3c,fVar12);
        }
        else {
          dVar14 = (double)CONCAT44(fStack_38,uStack_3c);
          in_xd2 = dVar37;
        }
        if (cVar39 == '\0') {
          fVar15 = (float)((ulonglong)dVar14 >> 0x20);
          dVar14 = (double)CONCAT44(fVar15,SUB84(dVar14,0) / fVar22);
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) * fVar15);
        }
        else {
          dVar14 = dVar14 / dVar18;
          dVar23 = dVar23 * dVar14;
        }
        dVar34 = dVar24;
        if (cVar40 == '\0') {
          dVar34 = (double)CONCAT44(fVar31,SUB84(dVar14,0));
        }
        if (cVar39 == '\0') {
          dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),
                                    SUB84(dVar34,0) + SUB84(dVar23,0) / SUB84(dVar21,0));
        }
        else {
          dVar34 = dVar34 + dVar23 / dVar21;
        }
        if (cVar40 == '\0') {
          fStack_44 = SUB84(dVar34,0);
          dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),fStack_40);
          dVar14 = (double)CONCAT44(uStack_5c,fStack_54);
          dVar23 = dVar20;
        }
        else {
          fStack_44 = SUB84(dVar20,0);
          fStack_40 = (float)((ulonglong)dVar20 >> 0x20);
          in_xd2 = (double)CONCAT44(fStack_50,fStack_54);
          dVar23 = (double)CONCAT44(uStack_3c,fStack_40);
          dVar14 = (double)CONCAT44(uStack_58,uStack_5c);
        }
        if (cVar39 == '\0') {
          dVar34 = (double)CONCAT44((float)((ulonglong)dVar34 >> 0x20) * SUB84(dVar34,0),
                                    SUB84(dVar34,0));
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * SUB84(dVar14,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar34 = dVar34 * dVar34;
          dVar14 = dVar14 * dVar14;
        }
        if (cVar40 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar30);
          dVar26 = in_xd2;
        }
        if (cVar39 == '\0') {
          fVar15 = (float)((ulonglong)dVar34 >> 0x20) / fVar17;
          dVar34 = (double)CONCAT44(fVar15,SUB84(dVar34,0));
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / fVar22 + fVar15,
                                    SUB84(dVar14,0));
        }
        else {
          dVar34 = dVar34 / dVar21;
          dVar14 = dVar14 / dVar18 + dVar34;
        }
        fVar12 = (float)((ulonglong)dVar14 >> 0x20);
        fStack_48 = SUB84(dVar14,0);
        fVar15 = fVar12;
        if (cVar40 == '\0') {
          fStack_48 = fVar12;
          fVar15 = fStack_44;
          fVar12 = SUB84(dVar34,0);
          fStack_40 = fStack_44;
        }
        fStack_44 = fVar15;
        if (cVar39 == '\0') {
          dVar14 = (double)(ulonglong)(uint)(fStack_40 * fVar10 + SUB84(dVar14,0));
        }
        uStack_4c = SUB84(dVar14,0);
        if (cVar40 == '\0') {
          dVar34 = (double)CONCAT44(fStack_48,uStack_4c);
          dVar14 = (double)CONCAT44(fVar10,fVar12);
        }
        else {
          uStack_4c = SUB84(dVar26,0);
          fStack_48 = (float)((ulonglong)dVar26 >> 0x20);
          dVar34 = (double)CONCAT44(fStack_44,fStack_48);
          dVar14 = in_xd4;
        }
        fVar15 = (float)((ulonglong)dVar34 >> 0x20);
        if (cVar39 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * fVar15,SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 * dVar34;
        }
        dVar20 = in_xd10;
        if (cVar40 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar16);
          dVar20 = dVar23;
        }
        if (cVar39 == '\0') {
          fStack_50 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fStack_50 = SUB84(dVar14 - dVar14,0);
        }
        if (cVar40 == '\0') {
          dVar34 = (double)CONCAT44(fVar15,uVar36);
          dVar23 = (double)CONCAT44(uStack_4c,fStack_50);
          in_xd2 = dVar26;
        }
        else {
          fStack_50 = SUB84(dVar20,0);
          uStack_4c = (undefined4)((ulonglong)dVar20 >> 0x20);
          dVar23 = (double)CONCAT44(fStack_48,uStack_4c);
          in_xd2 = dVar35;
        }
        if (cVar39 == '\0') {
          dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),
                                    SUB84(dVar34,0) * (float)((ulonglong)dVar23 >> 0x20));
        }
        else {
          dVar34 = dVar34 * dVar23;
        }
        dVar26 = in_xd14;
        if (cVar40 == '\0') {
          dVar26 = (double)CONCAT44(uVar25,SUB84(dVar23,0));
        }
        if (cVar39 == '\0') {
          dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),
                                    (float)((ulonglong)dVar26 >> 0x20) * fVar30 + SUB84(dVar34,0));
        }
        dVar23 = dVar20;
        if (cVar40 == '\0') {
          dVar23 = (double)CONCAT44(SUB84(dVar26,0),SUB84(dVar26,0));
        }
        if (cVar39 == '\0') {
          dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),
                                    (float)((ulonglong)dVar23 >> 0x20) * fVar33 + SUB84(dVar34,0));
        }
        in_dr0 = dVar19;
        if (cVar40 == '\0') {
          in_dr0 = (double)CONCAT44(uVar32,SUB84(dVar23,0));
        }
        if (cVar39 == '\0') {
          dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),
                                    (float)((ulonglong)in_dr0 >> 0x20) * fVar16 + SUB84(dVar34,0));
        }
        if (cVar40 == '\0') {
          *(int *)(uVar2 + ar7) = SUB84(dVar34,0);
        }
        else {
          *(double *)(uVar2 + ar7) = in_xd2;
        }
        uVar5 = uVar2 + 4;
      } while (uVar2 + 4 < 0xc);
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c21c774\n.set _FUN_8c21c774, _FUN_8c21c774_def\n");
