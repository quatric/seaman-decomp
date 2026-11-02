#include "../decls.h"
undefined4 Class_1299f8_m3_019f00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  double dVar3;
  float fVar5;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined8 uStack_6c;
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 auStack_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fVar4;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar2 = ar5;
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_2c,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_3c,ar5,ar6,ar7);
  fVar5 = 0.0;
  Vec3_sub(uVar2,auStack_3c,ar6,ar7,auStack_58);
  Vec3_assign(&uStack_1c,auStack_58,ar6,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  FUN_8c023c30(&uStack_1c,ar4 + 0x80,ar6,ar7,(int)&uStack_6c + 4);
  Vec3_assign(&uStack_2c,(int)&uStack_6c + 4,ar6,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor((int)&uStack_6c + 4,0xffffffff,ar6,ar7);
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(uStack_2c,uStack_1c);
  }
  else {
    in_xd0 = CONCAT44(uStack_18,uStack_1c);
    dVar3 = (double)CONCAT44(uStack_28,uStack_2c);
  }
  if (cVar7 == '\0') {
    fStack_48 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_48 = SUB84(dVar3 - dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(uStack_28,uStack_18);
  }
  else {
    fStack_48 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_14,uStack_18);
    dVar3 = (double)CONCAT44(uStack_24,uStack_28);
  }
  if (cVar7 == '\0') {
    fStack_44 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_44 = SUB84(dVar3 - dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(uStack_24,uStack_14);
  }
  else {
    fStack_44 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_10,uStack_14);
    dVar3 = (double)CONCAT44(uStack_20,uStack_24);
  }
  if (cVar7 == '\0') {
    fVar4 = (float)((ulonglong)dVar3 >> 0x20);
    dVar3 = (double)CONCAT44(fVar4,SUB84(dVar3,0) - fVar4);
  }
  else {
    dVar3 = dVar3 - dVar3;
  }
  if (cVar8 == '\0') {
    uStack_40 = SUB84(dVar3,0);
  }
  else {
    uStack_40 = (undefined4)in_xd0;
    auStack_3c[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  FUN_8c2570d8(&fStack_48,ar5_00,ar6,ar7,uVar2);
  dVar1 = dVar3;
  if (cVar8 == '\0') {
    fVar5 = (float)((ulonglong)dVar3 >> 0x20);
    uStack_6c = (double)CONCAT44((*(uint*)((uchar*)&uStack_6c+4)),fVar5);
    dVar1 = uStack_6c;
  }
  uStack_6c = dVar1;
  FUN_8c25ce48(&fStack_48,ar5_00,ar6,ar7,uVar2);
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x50) = fStack_48;
    *(float *)(ar4 + 0x54) = fStack_44;
    *(undefined4 *)(ar4 + 0x58) = uStack_40;
    dVar3 = (double)CONCAT44(0x43fa0000,SUB84(dVar3,0));
  }
  else {
    *(ulonglong *)(ar4 + 0x50) = CONCAT44(fStack_44,fStack_48);
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(uStack_40,fStack_44);
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(auStack_3c[0],uStack_40);
    dVar3 = 1.6066918595405548e+73;
  }
  if (cVar7 == '\0') {
    bVar6 = fVar5 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,fVar5) < dVar3;
  }
  if (bVar6) {
    Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
    Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
    uVar2 = Vec3_dtor(&uStack_1c,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(uStack_2c,*(undefined4 *)(ar4 + 0x44));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x44);
      dVar3 = (double)CONCAT44(uStack_28,uStack_2c);
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x44) = fVar5;
      dVar3 = (double)CONCAT44(uStack_28,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(undefined8 *)(ar4 + 0x44) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar3 = (double)CONCAT44(uStack_24,uStack_28);
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x48) = fVar5;
      dVar3 = (double)CONCAT44(uStack_24,*(undefined4 *)(ar4 + 0x4c));
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x4c);
      dVar3 = (double)CONCAT44(uStack_20,uStack_24);
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x4c) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x4c) = in_xd0;
    }
    Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
    Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
    uVar2 = Vec3_dtor(&uStack_1c,0xffffffff,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _Class_1299f8_m3_019f00\n.set _Class_1299f8_m3_019f00, _Class_1299f8_m3_019f00_def\n");
