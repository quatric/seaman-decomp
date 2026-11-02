#include "../decls.h"
undefined4 FUN_8c2563f8_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  undefined8 in_dr0;
  float fVar3;
  undefined8 in_dr2;
  uint uVar6;
  double dVar4;
  double dVar5;
  undefined4 in_fr5;
  float fVar7;
  double dVar8;
  undefined4 in_fr7;
  double dVar10;
  float fVar11;
  undefined4 uVar12;
  double in_dr8;
  undefined4 uVar13;
  float fVar14;
  undefined4 in_fr11;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double in_dr12;
  double dVar20;
  undefined8 in_dr14;
  double in_xd0;
  double dVar21;
  double in_xd2;
  double dVar22;
  double in_xd4;
  double dVar23;
  double in_xd6;
  double in_xd8;
  undefined8 in_xd10;
  double in_xd12;
  double dVar24;
  double in_xd14;
  bool bVar25;
  char cVar26;
  char cVar27;
  undefined4 uStack_94;
  undefined4 uStack_90;
  double adStack_50 [8];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  float fVar9;
  
  uVar6 = (uint)((ulonglong)in_dr2 >> 0x20);
  cVar27 = '\0';
  cVar26 = '\0';
  uStack_4 = (undefined4)in_dr14;
  uStack_8 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_c = SUB84(in_dr12,0);
  pdVar2 = adStack_50;
  FUN_8c010794(0x40,adStack_50,&DAT_8c271da8);
  uVar13 = (undefined4)((ulonglong)in_dr8 >> 0x20);
  if (cVar27 == '\0') {
    dVar16 = (double)CONCAT44(*(undefined4 *)ar4,in_fr11);
    uVar1 = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_90 = SUB84(in_dr8,0);
    dVar16 = *ar4;
    uVar1 = uStack_90;
  }
  dVar4 = (double)((ulonglong)uVar6 << 0x20);
  fVar7 = (float)((ulonglong)dVar16 >> 0x20);
  dVar8 = dVar16;
  if (cVar27 == '\0') {
    dVar8 = (double)CONCAT44(fVar7,in_fr5);
  }
  if (cVar26 == '\0') {
    fVar9 = (float)((ulonglong)dVar8 >> 0x20) * fVar7;
    dVar8 = (double)CONCAT44(fVar9,SUB84(dVar8,0));
    bVar25 = 0.0 < fVar9;
  }
  else {
    dVar8 = dVar8 * dVar16;
    fVar9 = (float)((ulonglong)dVar8 >> 0x20);
    bVar25 = dVar4 < dVar8;
  }
  dVar16 = 0.0078125;
  dVar23 = dVar16;
  if (bVar25) {
    if (cVar26 == '\0') {
      bVar25 = fVar9 < 1.0;
    }
    else {
      bVar25 = dVar8 < 0.0078125;
    }
    if (bVar25) {
      if (cVar26 == '\0') {
        dVar4 = (double)((ulonglong)(uint)(1.0 - fVar9) << 0x20);
      }
      else {
        dVar4 = 0.0078125 - dVar8;
      }
      if (cVar27 == '\0') {
        dVar8 = (double)CONCAT44(fVar9,0x3f800000);
        dVar23 = in_xd4;
      }
      if (cVar26 == '\0') {
        dVar4 = (double)CONCAT44(SQRT((float)((ulonglong)dVar4 >> 0x20)),SUB84(dVar4,0));
      }
      else {
        dVar4 = SQRT(dVar4);
      }
      dVar22 = dVar4;
      if (cVar27 == '\0') {
        in_dr8 = (double)CONCAT44(uVar13,(int)((ulonglong)dVar4 >> 0x20));
        dVar22 = in_xd8;
      }
      if (cVar26 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) / SUB84(in_dr8,0));
      }
      else {
        dVar8 = dVar8 / in_dr8;
      }
    }
    else {
      dVar23 = in_xd14;
      dVar22 = in_xd14;
      if (cVar27 == '\0') {
        in_dr8 = 0.0;
        dVar23 = in_xd4;
        dVar22 = in_xd8;
      }
      dVar8 = 0.0078125;
    }
  }
  else {
    dVar22 = dVar16;
    if (cVar27 == '\0') {
      dVar8 = (double)CONCAT44(fVar9,0x3f800000);
      in_dr8 = (double)CONCAT44(uVar13,0x3f800000);
      dVar23 = in_xd4;
      dVar22 = in_xd8;
    }
  }
  fVar9 = SUB84(dVar4,0);
  if (cVar27 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(in_dr8,0));
    in_fr7 = *(undefined4 *)((int)ar4 + 4);
  }
  else {
    dVar4 = ar4[1];
    in_xd6 = *(double *)((int)ar4 + 4);
  }
  if (cVar26 == '\0') {
    dVar17 = (double)CONCAT44(fVar7,0x40000000);
  }
  else {
    dVar17 = (double)CONCAT44(fVar7,0x3f800000) + (double)CONCAT44(fVar7,0x3f800000);
  }
  if (cVar27 == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0xc),in_fr7);
  }
  else {
    dVar10 = *(double *)((int)ar4 + 0xc);
  }
  fVar7 = SUB84(dVar8,0);
  if (cVar26 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar7,SUB84(dVar4,0));
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) * fVar7,SUB84(dVar10,0) * fVar7);
  }
  else {
    dVar4 = dVar4 * dVar8;
    dVar10 = dVar10 * dVar8 * dVar8;
  }
  if (cVar27 == '\0') {
    in_xd10 = CONCAT44(SUB84(dVar17,0),(int)in_dr0);
  }
  if (cVar26 == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar4,0),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar4;
  }
  fVar7 = -1.0;
  if (cVar26 == '\0') {
    fVar7 = (float)((ulonglong)in_xd10 >> 0x20) * (float)((ulonglong)dVar8 >> 0x20) + -1.0;
  }
  fVar14 = SUB84(dVar10,0);
  dVar8 = dVar17;
  if (cVar27 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),0x3f800000);
    in_xd6 = (double)CONCAT44(fVar14,(int)in_xd10);
    dVar8 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fVar7);
    dVar16 = dVar22;
  }
  if (cVar26 == '\0') {
    fVar7 = SUB84(dVar8,0);
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * SUB84(dVar17,0),fVar7);
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),SUB84(dVar4,0) - fVar7);
  }
  else {
    dVar8 = dVar8 * dVar17;
    fVar7 = SUB84(dVar8,0);
    dVar4 = dVar4 - dVar8;
  }
  uVar13 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar21 = dVar8;
  dVar22 = dVar23;
  if (cVar27 == '\0') {
    in_xd6 = (double)CONCAT44((int)((ulonglong)in_xd6 >> 0x20),uVar13);
    dVar21 = in_xd0;
    dVar22 = in_xd2;
    fVar9 = fVar7;
  }
  fVar11 = (float)((ulonglong)dVar10 >> 0x20);
  if (cVar26 == '\0') {
    in_xd6 = (double)CONCAT44((int)((ulonglong)in_xd6 >> 0x20),SUB84(in_xd6,0) * fVar11);
  }
  else {
    in_xd6 = in_xd6 * dVar10;
  }
  uVar12 = SUB84(dVar4,0);
  dVar24 = dVar16;
  if (cVar27 == '\0') {
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),uVar12);
    dVar24 = in_xd12;
  }
  if (cVar26 == '\0') {
    dVar20 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) * fVar14);
  }
  else {
    dVar20 = in_dr12 * dVar10;
  }
  fVar19 = SUB84(dVar20,0);
  dVar5 = dVar24;
  if (cVar27 == '\0') {
    dVar5 = (double)CONCAT44(fVar19,fVar9);
  }
  fVar9 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar26 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar9,
                             (float)((ulonglong)in_xd6 >> 0x20) * fVar19 + SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar4;
  }
  uStack_90 = (undefined4)((ulonglong)dVar5 >> 0x20);
  uStack_94 = SUB84(dVar5,0);
  if (cVar27 == '\0') {
    *(undefined4 *)pdVar2 = uStack_94;
    dVar5 = (double)CONCAT44(uStack_90,uStack_90);
    uStack_94 = uStack_90;
    uStack_90 = uVar1;
  }
  else {
    *pdVar2 = dVar22;
    dVar22 = dVar5;
  }
  if (cVar26 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),SUB84(dVar5,0) - SUB84(in_xd6,0));
  }
  else {
    dVar5 = dVar5 - in_xd6;
  }
  dVar18 = dVar24;
  if (cVar27 == '\0') {
    dVar18 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
  }
  if (cVar26 == '\0') {
    dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) * fVar11,SUB84(dVar18,0));
  }
  else {
    dVar18 = dVar18 * dVar10;
  }
  if (cVar27 == '\0') {
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),uVar13);
  }
  if (cVar26 == '\0') {
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0) * fVar9);
  }
  else {
    dVar18 = dVar18 * dVar4;
  }
  fVar19 = (float)((ulonglong)dVar18 >> 0x20);
  if (cVar27 == '\0') {
    *(int *)(pdVar2 + 2) = SUB84(dVar5,0);
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),fVar19);
    dVar17 = (double)CONCAT44(fVar9,SUB84(in_xd6,0));
  }
  else {
    pdVar2[2] = dVar22;
    dVar22 = dVar18;
    dVar17 = dVar4;
  }
  fVar15 = SUB84(dVar18,0);
  if (cVar26 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),SUB84(dVar5,0) + fVar15);
  }
  else {
    dVar5 = dVar5 + dVar18;
  }
  if (cVar27 == '\0') {
    *(int *)(pdVar2 + 4) = SUB84(dVar5,0);
    *(undefined4 *)(pdVar2 + 6) = 0;
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),uStack_94);
  }
  else {
    pdVar2[4] = dVar22;
    pdVar2[6] = in_xd14;
    dVar22 = (double)CONCAT44(uStack_90,uStack_94);
  }
  if (cVar26 == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) + SUB84(dVar5,0));
  }
  else {
    dVar17 = dVar17 + dVar5;
  }
  if (cVar27 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),fVar7);
    *(int *)((int)pdVar2 + 4) = SUB84(dVar17,0);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar12);
    dVar16 = dVar21;
  }
  else {
    *(double *)((int)pdVar2 + 4) = dVar21;
    dVar22 = dVar23;
  }
  if (cVar26 == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) * fVar9);
  }
  else {
    dVar17 = dVar17 * dVar4;
  }
  dVar4 = dVar8;
  if (cVar27 == '\0') {
    dVar4 = (double)CONCAT44(uVar13,uVar12);
  }
  if (cVar26 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar14,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar10;
  }
  fVar9 = SUB84(dVar17,0);
  if (cVar27 == '\0') {
    dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar9);
    dVar16 = dVar24;
  }
  if (cVar26 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),
                             (float)((ulonglong)dVar17 >> 0x20) * fVar9 + SUB84(dVar5,0));
    dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) * fVar11);
  }
  else {
    dVar20 = dVar20 * dVar10;
  }
  if (cVar27 == '\0') {
    *(int *)((int)pdVar2 + 0x14) = SUB84(dVar5,0);
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),SUB84(dVar20,0));
    dVar16 = dVar22;
  }
  else {
    *(double *)((int)pdVar2 + 0x14) = dVar22;
  }
  fVar14 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar26 == '\0') {
    fVar3 = SUB84(dVar5,0) - fVar14;
    dVar4 = (double)CONCAT44(fVar14,SUB84(dVar4,0) * fVar11);
  }
  else {
    fVar3 = SUB84(dVar5 - dVar4,0);
    dVar4 = dVar4 * dVar10;
  }
  if (cVar27 == '\0') {
    *(float *)((int)pdVar2 + 0x24) = fVar3;
  }
  else {
    *(double *)((int)pdVar2 + 0x24) = dVar16;
  }
  if (cVar26 == '\0') {
    dVar18 = (double)CONCAT44(fVar19 - fVar15,fVar15);
  }
  else {
    dVar18 = dVar18 - dVar18;
  }
  if (cVar27 == '\0') {
    dVar10 = (double)CONCAT44(fVar11,fVar9);
    *(undefined4 *)((int)pdVar2 + 0x34) = 0;
  }
  else {
    *(double *)((int)pdVar2 + 0x34) = in_xd14;
  }
  if (cVar26 == '\0') {
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + SUB84(dVar20,0),SUB84(dVar4,0));
    dVar8 = (double)CONCAT44(uVar13,(float)((ulonglong)dVar10 >> 0x20) * SUB84(dVar4,0) + fVar7);
  }
  else {
    dVar20 = dVar4 + dVar20;
  }
  if (cVar27 == '\0') {
    *(int *)(pdVar2 + 1) = (int)((ulonglong)dVar18 >> 0x20);
    *(int *)(pdVar2 + 3) = (int)((ulonglong)dVar20 >> 0x20);
    *(int *)(pdVar2 + 5) = SUB84(dVar8,0);
    *(undefined4 *)(pdVar2 + 7) = 0;
    *(undefined4 *)((int)pdVar2 + 0xc) = 0;
    *(undefined4 *)((int)pdVar2 + 0x1c) = 0;
    *(undefined4 *)((int)pdVar2 + 0x2c) = 0;
  }
  else {
    pdVar2[1] = dVar18;
    pdVar2[3] = dVar20;
    pdVar2[5] = dVar23;
    pdVar2[7] = in_xd14;
    *(double *)((int)pdVar2 + 0xc) = in_xd14;
    *(double *)((int)pdVar2 + 0x1c) = in_xd14;
    *(double *)((int)pdVar2 + 0x2c) = in_xd14;
  }
  if (cVar27 == '\0') {
    *(undefined4 *)((int)pdVar2 + 0x3c) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)pdVar2 + 0x3c) = 0x3f80000000000000;
  }
                    
                    
                    
                    
  return 0x3c;
}

__asm__(".globl _FUN_8c2563f8\n.set _FUN_8c2563f8, _FUN_8c2563f8_def\n");
