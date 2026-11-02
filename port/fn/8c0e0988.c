#include "../decls.h"
undefined4 FUN_8c0e0988_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *ar6_00;
  double dVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 auStack_38 [4];
  undefined1 auStack_28 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  puVar2 = ar5;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_38,puVar2,ar6,ar7);
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44(0x43608ba3,*ar5);
  }
  else {
    dVar3 = 1548112654508776.8;
  }
  if (cVar6 == '\0') {
    iVar4 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar3 / dVar3);
  }
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44(0x43160000,ar5[2]);
  }
  else {
    dVar3 = 2.999234411734574e-309;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar3 / dVar3);
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (10 < iVar4) {
    iVar4 = 10;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (9 < iVar5) {
    iVar5 = 9;
  }
  if ((*(int *)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x2281c) == 0) ||
     (*(int *)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x2281c) == 1)) {
    if (cVar7 != '\0') {
      auStack_38[0] =
           (undefined4)
           ((ulonglong)*(undefined8 *)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x22818) >> 0x20);
    }
    Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
    uVar1 = 0x20;
  }
  else {
    puVar2 = auStack_38;
    ar6_00 = auStack_28;
    FUN_8c0185a4(ar4 + 0x2274c,ar5,ar6_00,puVar2);
    FUN_8c016a20(auStack_28,auStack_38,ar6_00,puVar2);
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,puVar2);
    Vec3_dtor(auStack_28,0xffffffff,ar6_00,puVar2);
    uVar1 = 0x1c;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e0988\n.set _FUN_8c0e0988, _FUN_8c0e0988_def\n");
