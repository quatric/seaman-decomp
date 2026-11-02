#include "../decls.h"
undefined4 FUN_8c06abb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  double dVar8;
  undefined4 in_fr4;
  undefined8 in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar9;
  float in_PR;
  char cVar10;
  char cVar11;
  undefined4 in_stack_00000000;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  cVar11 = '\0';
  cVar10 = '\0';
  dVar6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  fStack_14 = in_PR;
  Vec3_set_zero(&fStack_20,ar5,ar6,ar7);
  piVar1 = (int *)deref_u32(0x8c280954,ar5,ar6,ar7);
  piVar1 = *(int **)(*piVar1 + 4);
  while( true ) {
    fVar3 = (float)*piVar1;
    dVar5 = (double)(ulonglong)(uint)fVar3;
    if (cVar10 == '\0' && fVar3 < 0.0) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(0x4f800000,fVar3);
      }
      else {
        dVar5 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar3 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
    }
    fVar3 = SUB84(dVar6,0);
    if (cVar10 == '\0') {
      bVar9 = SUB84(dVar5,0) < fVar3;
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (!bVar9) break;
    piVar1 = piVar1 + 4;
  }
  fVar4 = (float)*piVar1;
  if (cVar10 == '\0' && fVar4 < 0.0) {
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x4f800000,fVar4);
    }
    else {
      dVar5 = 1.4411522222084588e+18;
    }
    if (cVar10 == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
  }
  if (fVar4 == fVar3) {
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[1]);
    }
    else {
      dVar6 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x47800000,fVar3);
    }
    else {
      dVar6 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    fStack_20 = (float)in_xd0;
    fVar4 = fStack_20;
    if (cVar11 == '\0') {
      fStack_20 = fVar3;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[2]);
    }
    else {
      dVar6 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x47800000,fVar3);
    }
    else {
      dVar6 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    fStack_1c = fVar4;
    if (cVar11 == '\0') {
      fStack_1c = fVar3;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[3]);
    }
    else {
      dVar6 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x47800000,fVar3);
    }
    else {
      dVar6 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      fStack_18 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar11 != '\0') {
      fStack_14 = (float)((ulonglong)in_xd0 >> 0x20);
      fStack_18 = fVar4;
    }
  }
  else {
    piVar2 = piVar1 + -4;
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)(piVar1[1] - piVar1[-3]),in_fr3);
    }
    else {
      dVar5 = (double)(piVar1[1] - piVar1[-3]);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar4);
    }
    else {
      dVar7 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar7;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
    }
    else {
      dVar7 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)(*piVar1 - *piVar2);
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar7,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fStack_20 = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      fStack_20 = (float)((ulonglong)dVar5 >> 0x20);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)(piVar1[2] - piVar1[-2]),SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)(piVar1[2] - piVar1[-2]);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,SUB84(dVar7,0));
    }
    else {
      dVar7 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar7;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
    }
    else {
      dVar7 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)(*piVar1 - *piVar2);
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar7,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fStack_1c = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      fStack_1c = (float)((ulonglong)dVar5 >> 0x20);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)(piVar1[3] - piVar1[-1]),SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)(piVar1[3] - piVar1[-1]);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,SUB84(dVar7,0));
    }
    else {
      dVar7 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar7;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
    }
    else {
      dVar7 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)(*piVar1 - *piVar2);
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar7,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)((ulonglong)dVar5 >> 0x20);
    fStack_18 = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      fStack_18 = fVar4;
      fVar4 = fStack_14;
    }
    fStack_14 = fVar4;
    fVar4 = (float)*piVar2;
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    dVar8 = in_xd14;
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44(fVar3,SUB84(dVar5,0));
    }
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar7,0),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar7;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(fStack_20,SUB84(dVar7,0));
    }
    else {
      dVar5 = (double)CONCAT44(fStack_1c,fStack_20);
    }
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20)
                               ,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 * dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[-3]);
    }
    else {
      dVar5 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x47800000,fVar4);
    }
    else {
      dVar5 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) +
                               SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 + dVar5 / dVar5;
    }
    fVar4 = (float)((ulonglong)dVar8 >> 0x20);
    fStack_20 = SUB84(dVar8,0);
    if (cVar11 == '\0') {
      fStack_20 = fVar4;
      fVar4 = fStack_1c;
    }
    fStack_1c = fVar4;
    fVar4 = (float)*piVar2;
    dVar5 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar5 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
    }
    dVar7 = in_xd14;
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(fVar3,SUB84(dVar8,0));
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar5,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(fStack_1c,SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)CONCAT44(fStack_18,fStack_1c);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 * dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[-2]);
    }
    else {
      dVar5 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x47800000,fVar4);
    }
    else {
      dVar5 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) +
                               SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + dVar5 / dVar5;
    }
    fVar4 = (float)((ulonglong)dVar7 >> 0x20);
    fStack_1c = fVar4;
    if (cVar11 != '\0') {
      fStack_1c = SUB84(dVar7,0);
      fStack_18 = fVar4;
    }
    fVar4 = (float)*piVar2;
    dVar5 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar5 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
    }
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar3 - SUB84(dVar5,0));
    }
    else {
      dVar6 = dVar6 - dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(fStack_18,SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)CONCAT44(fStack_14,fStack_18);
    }
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                               SUB84(dVar6,0) * (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      dVar6 = dVar6 * dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[-1]);
    }
    else {
      dVar5 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x47800000,fVar3);
    }
    else {
      dVar5 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      fStack_18 = SUB84(dVar6,0) + SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar6 + dVar5 / dVar5,0);
    }
    if (cVar11 != '\0') {
      fStack_18 = SUB84(in_xd14,0);
      fStack_14 = (float)((ulonglong)in_xd14 >> 0x20);
    }
  }
  vec3_copy_8c02b5fc(in_stack_00000000,&fStack_20,ar6,ar7);
  object_dtor_delete(&fStack_20,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c06abb8\n.set _FUN_8c06abb8, _FUN_8c06abb8_def\n");
