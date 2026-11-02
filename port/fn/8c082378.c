#include "../decls.h"
undefined4 FUN_8c082378_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr4;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined8 uStack_4c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = ar5;
  Vec3_ctor_zero(auStack_18,ar5,ar6,ar7);
  Vec3_normalize(ar5,uVar3,ar6,ar7);
  Vec3_assign(auStack_18,auStack_28,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x2b4);
  *(int *)(ar4 + 0x2b4) = iVar2 + 1;
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),(float)(iVar2 + 1));
  }
  else {
    dVar5 = *(double *)(ar4 + 0x38);
  }
  if (cVar6 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr4,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(iVar2,in_fr4);
  }
  if (cVar6 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  uVar1 = in_xd0;
  if (cVar7 == '\0') {
    uStack_4c = CONCAT44((*(uint*)((uchar*)&uStack_4c+4)),fVar4);
    uVar1 = uStack_4c;
  }
  uStack_4c = uVar1;
  Vec3_scale(auStack_18,&uStack_4c,ar6,ar7,auStack_38);
  FUN_8c023aa0(ar4 + 0x14,auStack_38,ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  Vec3_normalize(ar4 + 0x14,uVar3,ar6,ar7);
  Vec3_assign(ar4 + 0x14,(int)&uStack_4c + 4,ar6,ar7);
  Vec3_dtor((int)&uStack_4c + 4,0xffffffff,ar6,ar7);
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
  uVar3 = Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c082378\n.set _FUN_8c082378, _FUN_8c082378_def\n");
