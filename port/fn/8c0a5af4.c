#include "../decls.h"
undefined4 Class_12aeec_m7_0a5af4_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *ar5_00;
  undefined4 *a6;
  float fVar2;
  double in_dr0;
  double dVar3;
  undefined4 uVar5;
  double dVar4;
  float fVar6;
  undefined8 in_dr14;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_34,ar5_00,ar6,ar7);
  dVar4 = (double)CONCAT44(uVar1,0x3f800000);
  a6 = &uStack_34;
  (**(code **)(*ar5 + 0x124))(ar5,&uStack_24,a6,ar7);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  fVar6 = SUB84(dVar4,0);
  if (cVar8 == '\0') {
    fVar2 = SUB84(in_dr0,0) - fVar6;
  }
  else {
    fVar2 = SUB84(in_dr0 - dVar4,0);
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(uStack_24,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(uStack_20,uStack_24);
  }
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar8 == '\0' && fVar2 < SUB84(dVar3,0)) {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(fVar2,*(undefined4 *)(ar4 + 0x30));
    }
    if (cVar8 == '\0') {
      fVar2 = SUB84(dVar3,0) + fVar6;
    }
    else {
      fVar2 = SUB84(dVar3 + dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(uStack_34,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(fStack_30,uStack_34);
    }
    if (cVar8 != '\0' || (float)((ulonglong)dVar3 >> 0x20) <= SUB84(dVar3,0)) {
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(uStack_34,SUB84(dVar3,0));
      }
      else {
        dVar3 = (double)CONCAT44(fStack_30,uStack_34);
      }
      if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) - fVar6,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar3 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar3;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(uStack_24,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(uStack_20,uStack_24);
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar3;
    }
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  if (cVar8 == '\0') {
    fVar2 = SUB84(dVar3,0) - fVar6;
  }
  else {
    fVar2 = SUB84(dVar3 - dVar4,0);
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(uStack_1c,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(uStack_18,uStack_1c);
  }
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar8 == '\0' && fVar2 < SUB84(dVar3,0)) {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(fVar2,*(undefined4 *)(ar4 + 0x38));
    }
    if (cVar8 == '\0') {
      fVar2 = SUB84(dVar3,0) + fVar6;
    }
    else {
      fVar2 = SUB84(dVar3 + dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(fStack_2c,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(uStack_28,fStack_2c);
    }
    if (cVar8 != '\0' || (float)((ulonglong)dVar3 >> 0x20) <= SUB84(dVar3,0)) {
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(fStack_2c,SUB84(dVar3,0));
      }
      else {
        dVar3 = (double)CONCAT44(uStack_28,fStack_2c);
      }
      if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) - fVar6,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar3 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x38) = dVar3;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(uStack_1c,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(uStack_18,uStack_1c);
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar3;
    }
  }
  (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,a6,ar7);
  uVar1 = SUB84(dVar3,0);
  uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(uVar5,SUB84(dVar4,0));
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),uVar1);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x34);
    uStack_34 = uVar5;
  }
  fVar6 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar8 == '\0') {
    bVar7 = fVar6 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar7 = dVar3 < dVar4;
  }
  if (bVar7) {
    fVar6 = fStack_30;
    fVar2 = fStack_2c;
    if (cVar9 == '\0') {
      fVar6 = *(float *)(ar4 + 0x34);
      fVar2 = fStack_30;
    }
    if (cVar8 != '\0' || fVar2 <= fVar6) {
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x34) = fStack_30;
      }
      else {
        *(ulonglong *)(ar4 + 0x34) = CONCAT44(fStack_2c,fStack_30);
      }
    }
  }
  else if (cVar9 == '\0') {
    *(float *)(ar4 + 0x34) = fVar6;
  }
  else {
    *(double *)(ar4 + 0x34) = dVar3;
  }
  Vec3_dtor(&uStack_34,0xffffffff,a6,ar7);
  uVar1 = Vec3_dtor(&uStack_24,0xffffffff,a6,ar7);
  return uVar1;
}

__asm__(".globl _Class_12aeec_m7_0a5af4\n.set _Class_12aeec_m7_0a5af4, _Class_12aeec_m7_0a5af4_def\n");
