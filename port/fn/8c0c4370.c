#include "../decls.h"
undefined4 FUN_8c0c4370_def(int ar4,int ar5,int ar6,int ar7)

{
  char cVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int ar5_00;
  int ar7_00;
  short sVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double in_dr2;
  double dVar10;
  undefined8 in_dr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  float fVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar15;
  char cVar16;
  int in_stack_00000000;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  cVar16 = '\0';
  cVar15 = '\0';
  dVar12 = (double)CONCAT44(in_fr6,(int)((ulonglong)in_dr4 >> 0x20));
  dVar14 = (double)CONCAT44((int)in_dr4,in_fr7);
  ar7_00 = ar7;
  uStack_30 = in_PR;
  FUN_8c01538c(ar4 + 4,ar5,ar6,ar7);
  FUN_8c014a94(ar4 + 4,0,ar6,ar7_00);
  for (iVar7 = 0; *(char *)(iVar7 + ar5) != '\0'; iVar7 = iVar7 + 1) {
    cVar1 = *(char *)(iVar7 + ar5);
    fVar13 = SUB84(dVar14,0);
    fVar11 = SUB84(dVar12,0);
    if (cVar15 == '\0') {
      fVar8 = (float)ar7 * fVar13 * (float)iVar7 + fVar11;
    }
    else {
      fVar8 = SUB84((double)iVar7 * (double)iVar7 + dVar12,0);
    }
    fStack_50 = (float)in_xd0;
    fStack_48 = fStack_50;
    if (cVar16 == '\0') {
      fStack_50 = fVar8;
    }
    if (cVar15 == '\0') {
      fVar8 = (float)ar7 * fVar13 * (float)iVar7 + fVar11;
    }
    else {
      fVar8 = SUB84((double)iVar7 * (double)iVar7 + dVar12,0);
    }
    if (cVar16 == '\0') {
      fStack_48 = fVar8;
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44((float)ar7 * fVar13,SUB84(in_dr2,0));
    }
    else {
      dVar10 = (double)ar7 * dVar14;
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) +
                                (float)ar7 * fVar13 * (float)iVar7 + fVar11,SUB84(dVar10,0));
    }
    else {
      dVar10 = dVar10 + (double)iVar7 * (double)iVar7 + dVar12;
    }
    fStack_40 = SUB84(dVar10,0);
    if (cVar16 == '\0') {
      fStack_40 = (float)((ulonglong)dVar10 >> 0x20);
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44((float)ar7 * fVar13,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)ar7 * dVar14;
    }
    if (cVar15 == '\0') {
      fVar8 = (float)ar7 * fVar13 * (float)iVar7;
      in_dr2 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + fVar8 + fVar11,SUB84(dVar10,0))
      ;
    }
    else {
      dVar9 = (double)iVar7 * (double)iVar7;
      fVar8 = SUB84(dVar9,0);
      in_dr2 = dVar10 + dVar9 + dVar12;
    }
    if (cVar16 == '\0') {
      fStack_38 = (float)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      fStack_38 = SUB84(in_dr2,0);
    }
    fVar11 = (float)((ulonglong)dVar14 >> 0x20);
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44((float)in_stack_00000000 * fVar13 + fVar11,fVar8);
    }
    else {
      dVar10 = (double)in_stack_00000000 * dVar14 + dVar14;
    }
    fVar8 = (float)((ulonglong)dVar10 >> 0x20);
    fStack_4c = SUB84(dVar10,0);
    fVar3 = fVar11;
    fStack_3c = fVar13;
    fVar4 = fVar11;
    if (cVar16 == '\0') {
      fStack_4c = fVar8;
      fVar8 = fStack_48;
      fVar3 = fStack_40;
      fStack_3c = fVar11;
      fVar4 = fStack_38;
    }
    fStack_38 = fVar4;
    fStack_40 = fVar3;
    fStack_48 = fVar8;
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44((float)in_stack_00000000 * fVar13 + fVar11,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)in_stack_00000000 * dVar14 + dVar14;
    }
    uVar5 = (undefined4)((ulonglong)dVar10 >> 0x20);
    uStack_34 = uVar5;
    if (cVar16 != '\0') {
      uStack_34 = SUB84(dVar10,0);
      uStack_30 = uVar5;
    }
    fStack_44 = fStack_3c;
    uVar5 = libgcc_divide_helper_01031c((int)cVar1,0x10,ar6,ar7_00);
    sVar6 = (short)uVar5 * 0x10;
    uVar5 = libgcc_divide_helper_0101e4((int)cVar1,0x10,ar6,ar7_00);
    sVar2 = ((short)uVar5 + -2) * 0x20;
    *(short *)(ar4 + 0x184) = sVar6;
    *(short *)(ar4 + 0x186) = sVar2 + 0x1f;
    *(short *)(ar4 + 0x188) = sVar6;
    *(short *)(ar4 + 0x18a) = sVar2;
    *(short *)(ar4 + 0x18c) = sVar6 + 0xf;
    *(short *)(ar4 + 0x18e) = sVar2;
    *(short *)(ar4 + 400) = sVar6 + 0xf;
    *(short *)(ar4 + 0x192) = sVar2 + 0x1f;
    ar7_00 = 4;
    ar6 = ar4 + 0x154;
    FUN_8c016318(ar4 + 0x20,&fStack_50,ar6,4,ar5);
    ar5_00 = ar4 + 0x184;
    FUN_8c016324(ar4 + 0x20,ar5_00,ar6,ar7_00);
    FUN_8c016340(ar4 + 0x20,ar5_00,ar6,ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c0c4370\n.set _FUN_8c0c4370, _FUN_8c0c4370_def\n");
