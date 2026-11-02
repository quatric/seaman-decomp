#include "../decls.h"
undefined4 CAnimal_m7_0ade84_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a6;
  float fVar3;
  float fVar4;
  double in_dr0;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_dr12;
  undefined4 in_fr15;
  undefined8 in_xd0;
  double in_xd12;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar10 = '\0';
  cVar9 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_2c,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_3c,ar5_00,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x170))(ar4,ar5_00,ar6,ar7);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar10 == '\0') {
    in_fr15 = uVar2;
    uVar2 = uStack_3c;
  }
  uStack_3c = uVar2;
  (**(code **)(*(int *)(ar4 + 8) + 0x174))(ar4,ar5_00,ar6,ar7);
  dVar7 = in_dr0;
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  iVar1 = get_field_124_027930(ar4 + 0x53c,ar5_00,ar6,ar7);
  if (((iVar1 == 8) || (iVar1 == 5)) || (iVar1 == 6)) {
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff);
  }
  a6 = &uStack_3c;
  (**(code **)(*ar5 + 0x124))(ar5,&uStack_2c,a6,ar7);
  if (cVar10 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x30);
  }
  fVar4 = SUB84(dVar7,0);
  if (cVar9 == '\0') {
    fVar3 = SUB84(in_dr0,0) - fVar4;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar5 = (double)CONCAT44(uStack_2c,fVar3);
  }
  else {
    dVar5 = (double)CONCAT44(uStack_28,uStack_2c);
  }
  fVar3 = (float)((ulonglong)dVar5 >> 0x20);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar5,0)) {
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x30));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(uStack_3c,fVar3);
    }
    else {
      dVar5 = (double)CONCAT44(fStack_38,uStack_3c);
    }
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar9 != '\0' || fVar3 <= SUB84(dVar5,0)) {
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(fVar3,uStack_3c);
      }
      else {
        in_xd0 = CONCAT44(fStack_38,uStack_3c);
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar5,0) - fVar4;
      }
      else {
        fVar3 = SUB84(dVar5 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x30);
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x3dcccccd,fVar3);
      }
      else {
        dVar5 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x30);
      }
      if (cVar9 == '\0') {
        fVar3 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
      if (cVar10 == '\0') {
        *(int *)(ar4 + 0x30) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(fVar3,uStack_2c);
    }
    else {
      in_xd0 = CONCAT44(uStack_28,uStack_2c);
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(0x3dcccccd,fVar3);
    }
    else {
      dVar5 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = (float)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(ar4 + 0x30) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
  }
  if (cVar10 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x38);
  }
  if (cVar9 == '\0') {
    fVar3 = SUB84(dVar5,0) - fVar4;
  }
  else {
    fVar3 = SUB84(dVar5 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar5 = (double)CONCAT44(uStack_24,fVar3);
  }
  else {
    dVar5 = (double)CONCAT44(uStack_20,uStack_24);
  }
  fVar3 = (float)((ulonglong)dVar5 >> 0x20);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar5,0)) {
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(fStack_34,fVar3);
    }
    else {
      dVar5 = (double)CONCAT44(uStack_30,fStack_34);
    }
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar9 != '\0' || fVar3 <= SUB84(dVar5,0)) {
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(fVar3,fStack_34);
      }
      else {
        in_xd0 = CONCAT44(uStack_30,fStack_34);
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) - fVar4;
      }
      else {
        fVar4 = SUB84(dVar5 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar4);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x3dcccccd,fVar4);
      }
      else {
        dVar5 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar4);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
      if (cVar10 == '\0') {
        *(int *)(ar4 + 0x38) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x38) = in_xd0;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(fVar3,uStack_24);
    }
    else {
      in_xd0 = CONCAT44(uStack_20,uStack_24);
    }
    if (cVar9 == '\0') {
      fVar4 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar4 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar4);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(0x3dcccccd,fVar4);
    }
    else {
      dVar5 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar4);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar4 = (float)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(ar4 + 0x38) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x38) = in_xd0;
    }
  }
  (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,a6,ar7);
  if (cVar10 == '\0') {
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(int)((ulonglong)dVar5 >> 0x20));
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar5,0));
    dVar5 = in_xd12;
  }
  else {
    dVar6 = *(double *)(ar4 + 0x34);
  }
  fVar4 = (float)((ulonglong)dVar7 >> 0x20);
  if (cVar9 == '\0') {
    fVar3 = (float)((ulonglong)dVar6 >> 0x20) - fVar4;
    dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0));
    bVar8 = SUB84(in_dr12,0) < fVar3;
  }
  else {
    dVar6 = dVar6 - dVar7;
    bVar8 = in_dr12 < dVar6;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x34);
      fVar3 = fStack_38;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      fVar4 = fStack_38;
      fVar3 = fStack_34;
    }
    if (cVar9 != '\0' || fVar3 <= fVar4) {
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),fStack_38);
      }
      else {
        in_xd0 = CONCAT44(fStack_34,fStack_38);
        dVar7 = *(double *)(ar4 + 0x34);
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(0x3dcccccd,fVar4);
      }
      else {
        dVar7 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar4);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x34);
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x34) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x34) = in_xd0;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) + fVar4);
    }
    else {
      in_dr12 = in_dr12 + dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar6,0));
    }
    else {
      dVar7 = *(double *)(ar4 + 0x34);
    }
    if (cVar9 == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                 SUB84(in_dr12,0) - (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      in_dr12 = in_dr12 - dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x3dcccccd,SUB84(dVar7,0));
    }
    else {
      dVar7 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                 SUB84(in_dr12,0) * (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      in_dr12 = in_dr12 * dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)(ar4 + 0x34);
    }
    if (cVar9 == '\0') {
      fVar4 = SUB84(in_dr12,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar4 = SUB84(in_dr12 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar4 + 0x34) = fVar4;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar5;
    }
  }
  Vec3_dtor(&uStack_3c,0xffffffff,a6,ar7);
  uVar2 = Vec3_dtor(&uStack_2c,0xffffffff,a6,ar7);
  return uVar2;
}

__asm__(".globl _CAnimal_m7_0ade84\n.set _CAnimal_m7_0ade84, _CAnimal_m7_0ade84_def\n");
