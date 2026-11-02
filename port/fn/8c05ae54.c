#include "../decls.h"
undefined4 FUN_8c05ae54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float in_fr1;
  float fVar3;
  double dVar4;
  undefined4 in_fr4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  float fStack_58;
  int iStack_54;
  undefined8 uStack_4c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  Vec3_ctor_zero(auStack_18,ar5,ar6,ar7);
  FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_28);
  uVar2 = Vec3_length(auStack_28,ar5,ar6,ar7);
  Vec3_assign(auStack_18,uVar2,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  if (cVar6 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x2c);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2c);
  }
  if (cVar5 == '\0') {
    fStack_58 = in_fr1 + 1.0;
  }
  else {
    fStack_58 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  iStack_54 = ar4;
  if (cVar6 != '\0') {
    fStack_58 = (float)in_xd0;
    iStack_54 = (int)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar6 == '\0') {
    *(float *)(iStack_54 + 0x2c) = fStack_58;
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fStack_58);
  }
  else {
    *(ulonglong *)(iStack_54 + 0x2c) = CONCAT44(iStack_54,fStack_58);
    in_xd0 = CONCAT44(iStack_54,fStack_58);
    dVar4 = *(double *)(ar4 + 0x38);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(in_fr4,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(fStack_58,in_fr4);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar6 == '\0') {
    uStack_4c = CONCAT44((*(uint*)((uchar*)&uStack_4c+4)),fVar3);
    uVar1 = uStack_4c;
  }
  uStack_4c = uVar1;
  Vec3_scale(auStack_18,&uStack_4c,ar6,ar7,auStack_38);
  FUN_8c023aa0(ar4 + 0x14,auStack_38,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  Vec3_normalize(ar4 + 0x14,uVar2,ar6,ar7);
  Vec3_assign(ar4 + 0x14,(int)&uStack_4c + 4,ar6,ar7);
  Vec3_dtor((int)&uStack_4c + 4,0xffffffff,ar6,ar7);
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
  uVar2 = Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c05ae54\n.set _FUN_8c05ae54, _FUN_8c05ae54_def\n");
