#include "../decls.h"
undefined4 FUN_8c06aa04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  double dVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 in_fr4;
  undefined8 in_dr14;
  double dVar11;
  undefined8 in_xd0;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_xd14;
  bool bVar14;
  char cVar15;
  char cVar16;
  undefined4 in_stack_00000000;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  cVar16 = '\0';
  cVar15 = '\0';
  dVar11 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  Vec3_ctor_zero(&fStack_24,ar5,ar6,ar7);
  puVar1 = (undefined4 *)deref_u32(0x8c280954,ar5,ar6,ar7);
  piVar2 = *(int **)*puVar1;
  while( true ) {
    fVar4 = (float)*piVar2;
    dVar6 = (double)(ulonglong)(uint)fVar4;
    if (cVar15 == '\0' && fVar4 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar4 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    fVar4 = SUB84(dVar11,0);
    if (cVar15 == '\0') {
      bVar14 = SUB84(dVar6,0) < fVar4;
    }
    else {
      bVar14 = dVar6 < dVar11;
    }
    if (!bVar14) break;
    piVar2 = piVar2 + 4;
  }
  fVar5 = (float)*piVar2;
  if (cVar15 == '\0' && fVar5 < 0.0) {
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(0x4f800000,fVar5);
    }
    else {
      dVar6 = -7.932371899434731e-251;
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
  }
  if (fVar5 == fVar4) {
    if (cVar16 == '\0') {
      fStack_24 = (float)(uint)piVar2[1];
      fStack_20 = (float)(uint)piVar2[2];
      fStack_1c = (float)(uint)piVar2[3];
    }
    else {
      fStack_24 = (float)*(undefined8 *)(piVar2 + 1);
      fStack_20 = (float)*(undefined8 *)(piVar2 + 2);
      fStack_1c = (float)*(undefined8 *)(piVar2 + 3);
      uStack_18 = (undefined4)((ulonglong)*(undefined8 *)(piVar2 + 3) >> 0x20);
    }
  }
  else {
    piVar3 = piVar2 + -4;
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(piVar2[1],in_fr3);
      dVar7 = (double)CONCAT44(piVar2[-3],fVar5);
    }
    else {
      dVar6 = *(double *)(piVar2 + 1);
      dVar7 = *(double *)(piVar2 + -3);
    }
    if (cVar15 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar7;
    }
    fVar5 = (float)(*piVar2 - *piVar3);
    dVar7 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar5);
      }
      else {
        dVar7 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) + fVar5);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar15 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) / SUB84(dVar7,0),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 / dVar7;
    }
    fStack_24 = SUB84(dVar6,0);
    if (cVar16 == '\0') {
      dVar8 = (double)CONCAT44(piVar2[2],fStack_24);
      dVar7 = (double)CONCAT44(piVar2[-2],SUB84(dVar7,0));
      fStack_24 = (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      dVar8 = *(double *)(piVar2 + 2);
      dVar7 = *(double *)(piVar2 + -2);
    }
    if (cVar15 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar7;
    }
    fVar5 = (float)(*piVar2 - *piVar3);
    dVar6 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = (double)CONCAT44(0x4f800000,fVar5);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) + fVar5);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    if (cVar15 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / SUB84(dVar6,0),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 / dVar6;
    }
    fStack_20 = SUB84(dVar8,0);
    if (cVar16 == '\0') {
      dVar7 = (double)CONCAT44(piVar2[3],fStack_20);
      dVar6 = (double)CONCAT44(piVar2[-1],SUB84(dVar6,0));
      fStack_20 = (float)(int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      dVar7 = *(double *)(piVar2 + 3);
      dVar6 = *(double *)(piVar2 + -1);
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - (float)((ulonglong)dVar6 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar6;
    }
    fVar5 = (float)(*piVar2 - *piVar3);
    dVar6 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = (double)CONCAT44(0x4f800000,fVar5);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) + fVar5);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / SUB84(dVar6,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar6;
    }
    uVar9 = (undefined4)((ulonglong)dVar7 >> 0x20);
    fStack_1c = (float)SUB84(dVar7,0);
    if (cVar16 == '\0') {
      fStack_1c = (float)uVar9;
      uVar9 = uStack_18;
    }
    uStack_18 = uVar9;
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44((float)*piVar3,SUB84(dVar7,0));
    }
    else {
      dVar7 = (double)*piVar3;
    }
    dVar8 = (double)((ulonglong)dVar6 & 0xffffffff);
    fVar5 = (float)((ulonglong)dVar7 >> 0x20);
    if (cVar15 == '\0') {
      bVar14 = fVar5 < 0.0;
    }
    else {
      bVar14 = dVar7 < dVar8;
    }
    if (bVar14) {
      if (cVar16 == '\0') {
        dVar8 = (double)CONCAT44(0x4f800000,SUB84(dVar6,0));
      }
      else {
        dVar8 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(fVar5 + (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar8;
      }
    }
    uVar12 = in_xd14;
    if (cVar16 == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar4);
      uVar12 = in_xd0;
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar8,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar8 - dVar7,0);
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(fStack_24,fVar5);
    }
    else {
      dVar6 = (double)CONCAT44(fStack_20,fStack_24);
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(piVar2[-3],fVar5);
    }
    else {
      dVar6 = *(double *)(piVar2 + -3);
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    fStack_24 = fVar5;
    if (cVar16 != '\0') {
      fStack_24 = (float)uVar12;
      fStack_20 = (float)((ulonglong)uVar12 >> 0x20);
    }
    if (cVar15 == '\0') {
      dVar6 = (double)CONCAT44((float)*piVar3,SUB84(dVar7,0));
    }
    else {
      dVar6 = (double)*piVar3;
    }
    dVar7 = (double)(ulonglong)(uint)fVar5;
    fVar10 = (float)((ulonglong)dVar6 >> 0x20);
    if (cVar15 == '\0') {
      bVar14 = fVar10 < 0.0;
    }
    else {
      bVar14 = dVar6 < dVar7;
    }
    if (bVar14) {
      if (cVar16 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar5);
      }
      else {
        dVar7 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        dVar6 = (double)CONCAT44(fVar10 + (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar7;
      }
    }
    uVar13 = in_xd14;
    if (cVar16 == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar4);
      uVar13 = uVar12;
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar6,0);
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(fStack_20,fVar5);
    }
    else {
      dVar6 = (double)CONCAT44(fStack_1c,fStack_20);
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(piVar2[-2],fVar5);
    }
    else {
      dVar6 = *(double *)(piVar2 + -2);
    }
    if (cVar15 == '\0') {
      fStack_20 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fStack_20 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar16 != '\0') {
      fStack_20 = (float)uVar13;
      fStack_1c = (float)((ulonglong)uVar13 >> 0x20);
    }
    fVar5 = (float)*piVar3;
    dVar6 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = (double)CONCAT44(0x4f800000,fVar5);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) + fVar5);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    if (cVar15 == '\0') {
      dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar4 - SUB84(dVar6,0));
    }
    else {
      dVar11 = dVar11 - dVar6;
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(fStack_1c,SUB84(dVar6,0));
    }
    else {
      dVar6 = (double)CONCAT44(uStack_18,fStack_1c);
    }
    if (cVar15 == '\0') {
      dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                SUB84(dVar11,0) * (float)((ulonglong)dVar6 >> 0x20));
    }
    else {
      dVar11 = dVar11 * dVar6;
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(piVar2[-1],SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(piVar2 + -1);
    }
    if (cVar15 == '\0') {
      fStack_1c = SUB84(dVar11,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fStack_1c = SUB84(dVar11 + dVar6,0);
    }
    if (cVar16 != '\0') {
      fStack_1c = (float)in_xd14;
      uStack_18 = (undefined4)((ulonglong)in_xd14 >> 0x20);
    }
  }
  Vec3_ctor_copy(in_stack_00000000,&fStack_24,ar6,ar7);
  Vec3_dtor(&fStack_24,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c06aa04\n.set _FUN_8c06aa04, _FUN_8c06aa04_def\n");
