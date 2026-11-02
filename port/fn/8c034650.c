#include "../decls.h"
undefined4 FUN_8c034650_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint in_fr1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr3;
  double dVar7;
  undefined4 in_fr4;
  undefined8 in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar8;
  float in_PR;
  char cVar9;
  char cVar10;
  undefined4 in_stack_00000000;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uStack_10 = 1;
  dVar5 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  fStack_14 = in_PR;
  Vec3_set_xyz(&fStack_20,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    vec3_copy_8c02b5fc(in_stack_00000000,&fStack_20,ar6,ar7);
    object_dtor_delete(&fStack_20,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar9 == '\0') {
      bVar8 = SUB84(dVar5,0) < 0.0;
    }
    else {
      bVar8 = dVar5 < (double)(ulonglong)in_fr1;
    }
    if (bVar8) {
      dVar5 = (double)((ulonglong)dVar5 & 0xffffffff00000000);
    }
    while( true ) {
      fVar2 = (float)*ar5;
      dVar4 = (double)(ulonglong)(uint)fVar2;
      if (cVar9 == '\0' && fVar2 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar2);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar2 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      fVar2 = SUB84(dVar5,0);
      if (cVar9 == '\0') {
        bVar8 = SUB84(dVar4,0) < fVar2;
      }
      else {
        bVar8 = dVar4 < dVar5;
      }
      if (!bVar8) break;
      ar5 = ar5 + 4;
    }
    fVar3 = (float)*ar5;
    if (cVar9 == '\0' && fVar3 < 0.0) {
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x4f800000,fVar3);
      }
      else {
        dVar4 = 1.4411522222084588e+18;
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
    }
    if (fVar3 == fVar2) {
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000,(float)ar5[1]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar5 / dVar5,0);
      }
      fStack_20 = (float)in_xd0;
      fVar3 = fStack_20;
      if (cVar10 == '\0') {
        fStack_20 = fVar2;
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000,(float)ar5[2]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar5 / dVar5,0);
      }
      fStack_1c = fVar3;
      if (cVar10 == '\0') {
        fStack_1c = fVar2;
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000,(float)ar5[3]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fStack_18 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar10 != '\0') {
        fStack_14 = (float)((ulonglong)in_xd0 >> 0x20);
        fStack_18 = fVar3;
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)(ar5[1] - ar5[-3]),in_fr3);
      }
      else {
        dVar4 = (double)(ar5[1] - ar5[-3]);
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000,fVar3);
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) *
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) /
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / SUB84(dVar6,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fStack_20 = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        fStack_20 = (float)((ulonglong)dVar4 >> 0x20);
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)(ar5[2] - ar5[-2]),SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)(ar5[2] - ar5[-2]);
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) *
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) /
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / SUB84(dVar6,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fStack_1c = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        fStack_1c = (float)((ulonglong)dVar4 >> 0x20);
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)(ar5[3] - ar5[-1]),SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)(ar5[3] - ar5[-1]);
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) *
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) /
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / SUB84(dVar6,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)((ulonglong)dVar4 >> 0x20);
      fStack_18 = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        fStack_18 = fVar3;
        fVar3 = fStack_14;
      }
      fStack_14 = fVar3;
      fVar3 = (float)*piVar1;
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      dVar7 = in_xd14;
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(fVar2,SUB84(dVar4,0));
      }
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar6,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 - dVar6;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(fStack_20,SUB84(dVar6,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_1c,fStack_20);
      }
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) *
                                 (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000,(float)ar5[-3]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000,fVar3);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) +
                                 SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar4 / dVar4;
      }
      fVar3 = (float)((ulonglong)dVar7 >> 0x20);
      fStack_20 = SUB84(dVar7,0);
      if (cVar10 == '\0') {
        fStack_20 = fVar3;
        fVar3 = fStack_1c;
      }
      fStack_1c = fVar3;
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      dVar6 = in_xd14;
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(fVar2,SUB84(dVar7,0));
      }
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar4,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(fStack_1c,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_18,fStack_1c);
      }
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) *
                                 (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000,(float)ar5[-2]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000,fVar3);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                                 SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar4 / dVar4;
      }
      fVar3 = (float)((ulonglong)dVar6 >> 0x20);
      fStack_1c = fVar3;
      if (cVar10 != '\0') {
        fStack_1c = SUB84(dVar6,0);
        fStack_18 = fVar3;
      }
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar9 == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),fVar2 - SUB84(dVar4,0));
      }
      else {
        dVar5 = dVar5 - dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(fStack_18,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_14,fStack_18);
      }
      if (cVar9 == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),
                                 SUB84(dVar5,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        dVar5 = dVar5 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000,(float)ar5[-1]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000,fVar2);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fStack_18 = SUB84(dVar5,0) + SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar5 + dVar4 / dVar4,0);
      }
      if (cVar10 != '\0') {
        fStack_18 = SUB84(in_xd14,0);
        fStack_14 = (float)((ulonglong)in_xd14 >> 0x20);
      }
    }
    vec3_copy_8c02b5fc(in_stack_00000000,&fStack_20,ar6,ar7);
    object_dtor_delete(&fStack_20,0xffffffff,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c034650\n.set _FUN_8c034650, _FUN_8c034650_def\n");
