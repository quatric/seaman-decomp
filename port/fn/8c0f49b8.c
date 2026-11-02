#include "../decls.h"
undefined4 CAnimal_m7_0f49b8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a6;
  float fVar3;
  double in_dr0;
  double dVar4;
  double dVar5;
  float fVar6;
  double in_dr12;
  undefined4 in_fr15;
  double dVar7;
  double in_xd12;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_38,ar5_00,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x170))(ar4,ar5_00,ar6,ar7);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar10 == '\0') {
    in_fr15 = uVar2;
    uVar2 = uStack_38;
  }
  uStack_38 = uVar2;
  (**(code **)(*(int *)(ar4 + 8) + 0x174))(ar4,ar5_00,ar6,ar7);
  dVar7 = in_dr0;
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  iVar1 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,ar5_00,ar6,ar7);
  if (iVar1 == 0) {
    dVar7 = (double)CONCAT44(0x3f800000,SUB84(dVar7,0));
  }
  a6 = &uStack_38;
  (**(code **)(*ar5 + 0x124))(ar5,&uStack_28,a6,ar7);
  if (cVar10 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  fVar6 = SUB84(dVar7,0);
  if (cVar9 == '\0') {
    fVar3 = SUB84(in_dr0,0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar4 = (double)CONCAT44(uStack_28,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_24,uStack_28);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x30));
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(uStack_38,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(fStack_34,uStack_38);
    }
    if (cVar9 != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(uStack_38,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_34,uStack_38);
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar7;
      }
      if (cVar10 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(uStack_28,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(uStack_24,uStack_28);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    if (cVar10 == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar4;
    }
  }
  if (cVar10 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  if (cVar9 == '\0') {
    fVar3 = SUB84(dVar4,0) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar4 = (double)CONCAT44(uStack_20,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_1c,uStack_20);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x38));
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(fStack_30,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_2c,fStack_30);
    }
    if (cVar9 != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(fStack_30,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(uStack_2c,fStack_30);
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar7;
      }
      if (cVar10 == '\0') {
        *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(uStack_20,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(uStack_1c,uStack_20);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    if (cVar10 == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar4;
    }
  }
  (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,a6,ar7);
  if (cVar10 == '\0') {
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(int)((ulonglong)dVar4 >> 0x20));
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar4,0));
    dVar4 = in_xd12;
  }
  else {
    dVar5 = *(double *)(ar4 + 0x34);
  }
  fVar6 = (float)((ulonglong)dVar7 >> 0x20);
  if (cVar9 == '\0') {
    bVar8 = SUB84(in_dr12,0) < (float)((ulonglong)dVar5 >> 0x20) - fVar6;
  }
  else {
    bVar8 = in_dr12 < dVar5 - dVar7;
  }
  if (bVar8) {
    fVar6 = fStack_34;
    fVar3 = fStack_30;
    if (cVar10 == '\0') {
      fVar6 = *(float *)(ar4 + 0x34);
      fVar3 = fStack_34;
    }
    if (cVar9 != '\0' || fVar3 <= fVar6) {
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x34) = fStack_34;
      }
      else {
        *(ulonglong *)(ar4 + 0x34) = CONCAT44(fStack_30,fStack_34);
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      fVar6 = SUB84(in_dr12,0) + fVar6;
    }
    else {
      fVar6 = SUB84(in_dr12 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar4 + 0x34) = fVar6;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar4;
    }
  }
  Vec3_dtor(&uStack_38,0xffffffff,a6,ar7);
  uVar2 = Vec3_dtor(&uStack_28,0xffffffff,a6,ar7);
  return uVar2;
}

__asm__(".globl _CAnimal_m7_0f49b8\n.set _CAnimal_m7_0f49b8, _CAnimal_m7_0f49b8_def\n");
