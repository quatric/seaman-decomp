#include "../decls.h"
undefined4 FUN_8c0348ac_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint in_fr1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined4 in_fr3;
  double dVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_fr4;
  undefined8 in_dr14;
  double dVar9;
  undefined8 in_xd0;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_xd14;
  bool bVar12;
  undefined4 in_PR;
  char cVar13;
  char cVar14;
  undefined4 in_stack_00000000;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  dVar9 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  uStack_14 = in_PR;
  FUN_8c023de0(&fStack_20,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    FUN_8c023e24(in_stack_00000000,&fStack_20,ar6,ar7);
    free_if_nonnull_wrap_016ac4(&fStack_20,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar13 == '\0') {
      bVar12 = SUB84(dVar9,0) < 0.0;
    }
    else {
      bVar12 = dVar9 < (double)(ulonglong)in_fr1;
    }
    if (bVar12) {
      dVar9 = (double)((ulonglong)dVar9 & 0xffffffff00000000);
    }
    while( true ) {
      fVar2 = (float)*ar5;
      dVar4 = (double)(ulonglong)(uint)fVar2;
      if (cVar13 == '\0' && fVar2 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar2);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar2 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      fVar2 = SUB84(dVar9,0);
      if (cVar13 == '\0') {
        bVar12 = SUB84(dVar4,0) < fVar2;
      }
      else {
        bVar12 = dVar4 < dVar9;
      }
      if (!bVar12) break;
      ar5 = ar5 + 4;
    }
    fVar3 = (float)*ar5;
    if (cVar13 == '\0' && fVar3 < 0.0) {
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(0x4f800000,fVar3);
      }
      else {
        dVar4 = 2.9939313207017074e-78;
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
    }
    if (fVar3 == fVar2) {
      if (cVar14 == '\0') {
        fStack_20 = (float)ar5[1];
        fStack_1c = (float)ar5[2];
        fStack_18 = (float)ar5[3];
      }
      else {
        fStack_20 = (float)*(undefined8 *)(ar5 + 1);
        fStack_1c = (float)*(undefined8 *)(ar5 + 2);
        fStack_18 = (float)*(undefined8 *)(ar5 + 3);
        uStack_14 = (undefined4)((ulonglong)*(undefined8 *)(ar5 + 3) >> 0x20);
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[1],in_fr3);
        dVar5 = (double)CONCAT44(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(ar5 + 1);
        dVar5 = *(double *)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) -
                                 (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar5 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar5 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / SUB84(dVar5,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar5;
      }
      fStack_20 = SUB84(dVar4,0);
      if (cVar14 == '\0') {
        dVar6 = (double)CONCAT44(ar5[2],fStack_20);
        dVar5 = (double)CONCAT44(ar5[-2],SUB84(dVar5,0));
        fStack_20 = (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        dVar6 = *(double *)(ar5 + 2);
        dVar5 = *(double *)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                                 (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) / SUB84(dVar4,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 / dVar4;
      }
      fStack_1c = SUB84(dVar6,0);
      if (cVar14 == '\0') {
        dVar5 = (double)CONCAT44(ar5[3],fStack_1c);
        dVar4 = (double)CONCAT44(ar5[-1],SUB84(dVar4,0));
        fStack_1c = (float)(int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        dVar5 = *(double *)(ar5 + 3);
        dVar4 = *(double *)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                                 (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar4;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar4,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar4;
      }
      uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
      fStack_18 = (float)SUB84(dVar5,0);
      if (cVar14 == '\0') {
        fStack_18 = (float)uVar7;
        uVar7 = uStack_14;
      }
      uStack_14 = uVar7;
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)*piVar1;
      }
      dVar6 = (double)((ulonglong)dVar4 & 0xffffffff);
      fVar3 = (float)((ulonglong)dVar5 >> 0x20);
      if (cVar13 == '\0') {
        bVar12 = fVar3 < 0.0;
      }
      else {
        bVar12 = dVar5 < dVar6;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,SUB84(dVar4,0));
        }
        else {
          dVar6 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar5 = (double)CONCAT44(fVar3 + (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 + dVar6;
        }
      }
      uVar10 = in_xd14;
      if (cVar14 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar2);
        uVar10 = in_xd0;
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(fStack_20,fVar3);
      }
      else {
        dVar4 = (double)CONCAT44(fStack_1c,fStack_20);
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      fStack_20 = fVar3;
      if (cVar14 != '\0') {
        fStack_20 = (float)uVar10;
        fStack_1c = (float)((ulonglong)uVar10 >> 0x20);
      }
      if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar4 = (double)*piVar1;
      }
      dVar5 = (double)(ulonglong)(uint)fVar3;
      fVar8 = (float)((ulonglong)dVar4 >> 0x20);
      if (cVar13 == '\0') {
        bVar12 = fVar8 < 0.0;
      }
      else {
        bVar12 = dVar4 < dVar5;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar5 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar4 = (double)CONCAT44(fVar8 + (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar4,0));
        }
        else {
          dVar4 = dVar4 + dVar5;
        }
      }
      uVar11 = in_xd14;
      if (cVar14 == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),fVar2);
        uVar11 = uVar10;
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(fStack_1c,fVar3);
      }
      else {
        dVar4 = (double)CONCAT44(fStack_18,fStack_1c);
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[-2],fVar3);
      }
      else {
        dVar4 = *(double *)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        fStack_1c = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_1c = SUB84(dVar4 + dVar4,0);
      }
      if (cVar14 != '\0') {
        fStack_1c = (float)uVar11;
        fStack_18 = (float)((ulonglong)uVar11 >> 0x20);
      }
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar2 - SUB84(dVar4,0));
      }
      else {
        dVar9 = dVar9 - dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(fStack_18,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(uStack_14,fStack_18);
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                 SUB84(dVar9,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        dVar9 = dVar9 * dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[-1],SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        fStack_18 = SUB84(dVar9,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar9 + dVar4,0);
      }
      if (cVar14 != '\0') {
        fStack_18 = (float)in_xd14;
        uStack_14 = (undefined4)((ulonglong)in_xd14 >> 0x20);
      }
    }
    FUN_8c023e24(in_stack_00000000,&fStack_20,ar6,ar7);
    free_if_nonnull_wrap_016ac4(&fStack_20,0xffffffff,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c0348ac\n.set _FUN_8c0348ac, _FUN_8c0348ac_def\n");
