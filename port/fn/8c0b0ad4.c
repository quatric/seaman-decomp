#include "../decls.h"
undefined4 FUN_8c0b0ad4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float in_fr1;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined8 uStack_90;
  float fStack_58;
  float fStack_54;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = 1;
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    ar6 = 100;
    iVar1 = rand_range(ar4,0,100,ar7);
    if (iVar1 < 0x1e) {
      *(undefined4 *)(ar4 + 0x330) = 0;
    }
    else if (iVar1 < 0x3c) {
      *(undefined4 *)(ar4 + 0x330) = 1;
    }
    else if (iVar1 < 0x46) {
      *(undefined4 *)(ar4 + 0x330) = 2;
    }
    else if (iVar1 < 0x5a) {
      *(undefined4 *)(ar4 + 0x330) = 4;
    }
    else {
      *(undefined4 *)(ar4 + 0x330) = 3;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
LAB_8c0b0b7c:
    uVar2 = *(undefined4 *)(ar4 + 0x330);
    iVar1 = FUN_8c034148(ar4 + 0xb0,uVar2,ar6,ar7);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
    }
    if (cVar6 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0x3d4ccccd;
    }
    else {
      in_fr1 = 0.05;
      *(undefined8 *)(ar4 + 0xa0) = 0x8c03c3143d4ccccd;
    }
    FUN_8c03c314(ar4,uVar2,ar6,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    if (cVar6 == '\0') {
      *(undefined4 *)(ar4 + 0x2d0) = 0x3f800000;
      *(undefined4 *)(ar4 + 0x2cc) = 0x45bb8000;
    }
    else {
      *(undefined8 *)(ar4 + 0x2d0) = CONCAT44(0x3f800000,in_fr1);
      *(undefined8 *)(ar4 + 0x2cc) = 0x8045bb8000;
    }
    FUN_8c0230f0(ar4 + 0x80,uVar2,ar6,ar7,auStack_20);
    uVar2 = Vec3_length(auStack_20,uVar2,ar6,ar7);
    Vec3_assign(ar4 + 700,uVar2,ar6,ar7);
    Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
    return 1;
  }
  if (iVar1 == 1) goto LAB_8c0b0b7c;
  if (iVar1 != 2) {
    return 1;
  }
  iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
  if ((iVar1 < 9) && (2 < iVar1)) {
                    
    switch(iVar1) {
    default:
      iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar1 == 7) {
        uVar2 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      goto LAB_8c0b0dd2;
    case 5:
      break;
    }
  }
  iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7);
  if (iVar1 == 7) {
    uVar2 = 0;
    *(undefined4 *)(ar4 + 300) = 0;
  }
LAB_8c0b0dd2:
  iVar1 = FUN_8c023d04(ar4 + 0x80,ar4 + 700,ar6,ar7);
  if (iVar1 == 0) {
    return uVar2;
  }
  if (cVar6 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x2d0);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2d0);
  }
  if (cVar5 == '\0') {
    in_fr1 = in_fr1 + 1.0;
  }
  else {
    in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  uStack_90 = in_xd0;
  if (cVar6 == '\0') {
    uStack_90 = CONCAT44(ar4,in_fr1);
  }
  if (cVar6 == '\0') {
    *(undefined4 *)((*(uint*)((uchar*)&uStack_90+4)) + 0x2d0) = (undefined4)uStack_90;
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),(undefined4)uStack_90);
  }
  else {
    *(undefined8 *)((*(uint*)((uchar*)&uStack_90+4)) + 0x2d0) = uStack_90;
    dVar4 = *(double *)(ar4 + 0x2cc);
    in_xd0 = uStack_90;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  fStack_54 = fVar3;
  if (cVar6 != '\0') {
    fStack_54 = (float)in_xd0;
    auStack_50[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar5 == '\0') {
    dVar4 = (double)CONCAT44(1.0 - fVar3,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(0x3f800000,fVar3) - (double)CONCAT44(0x3f800000,fVar3);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  fStack_58 = fVar3;
  if (cVar6 != '\0') {
    fStack_58 = SUB84(dVar4,0);
    fStack_54 = fVar3;
  }
  Vec3_scale(ar4 + 0x80,&fStack_58,ar6,ar7,auStack_30);
  Vec3_scale(ar4 + 700,&fStack_54,ar6,ar7,auStack_40);
  Vec3_add(auStack_30,auStack_40,ar6,ar7,auStack_50);
  Vec3_assign(ar4 + 0x80,auStack_50,ar6,ar7);
  Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0b0ad4\n.set _FUN_8c0b0ad4, _FUN_8c0b0ad4_def\n");
