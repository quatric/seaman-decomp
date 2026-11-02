#include "../decls.h"
undefined4 CAnimal_m7_036d7c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a5;
  undefined4 *a6;
  float fVar3;
  double in_dr0;
  double dVar4;
  double dVar5;
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
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_34,ar5_00,ar6,ar7);
  dVar5 = (double)CONCAT44(uVar2,0x3f800000);
  iVar1 = get_field_300_036f50(ar4 + 0xd2c,ar5_00,ar6,ar7);
  if ((iVar1 == 1) && ((**(code **)(*(int *)(ar4 + 8) + 0x170))(ar4,ar5_00,ar6,ar7), cVar9 == '\0'))
  {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
  }
  a6 = &uStack_34;
  a5 = &uStack_24;
  (**(code **)(*ar5 + 0x124))(ar5,a5,a6,ar7);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  fVar6 = SUB84(dVar5,0);
  if (cVar8 == '\0') {
    fVar3 = SUB84(in_dr0,0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar5,0);
  }
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44(uStack_24,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_20,uStack_24);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar8 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x30));
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar5,0);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(uStack_34,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(fStack_30,uStack_34);
    }
    if (cVar8 != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(uStack_34,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_30,uStack_34);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(uStack_24,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(uStack_20,uStack_24);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar4;
    }
  }
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  if (cVar8 == '\0') {
    fVar3 = SUB84(dVar4,0) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar5,0);
  }
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44(uStack_1c,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_18,uStack_1c);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar8 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x38));
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar5,0);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fStack_2c,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_28,fStack_2c);
    }
    if (cVar8 != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(fStack_2c,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(uStack_28,fStack_2c);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(uStack_1c,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(uStack_18,uStack_1c);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar4;
    }
  }
  iVar1 = get_field_338_036f00(ar4 + 0xd2c,a5,a6,ar7);
  uVar2 = SUB84(dVar5,0);
  if (iVar1 != 1) {
    (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,a6,ar7);
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar4,0));
      dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),uVar2);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x34);
    }
    fVar6 = (float)((ulonglong)dVar4 >> 0x20);
    if (cVar8 == '\0') {
      bVar7 = fVar6 < (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      bVar7 = dVar4 < dVar5;
    }
    if (bVar7) {
      fVar6 = fStack_30;
      fVar3 = fStack_2c;
      if (cVar9 == '\0') {
        fVar6 = *(float *)(ar4 + 0x34);
        fVar3 = fStack_30;
      }
      if (cVar8 != '\0' || fVar3 <= fVar6) {
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
      *(double *)(ar4 + 0x34) = dVar4;
    }
  }
  Vec3_dtor(&uStack_34,0xffffffff,a6,ar7);
  uVar2 = Vec3_dtor(&uStack_24,0xffffffff,a6,ar7);
  return uVar2;
}

__asm__(".globl _CAnimal_m7_036d7c\n.set _CAnimal_m7_036d7c, _CAnimal_m7_036d7c_def\n");
