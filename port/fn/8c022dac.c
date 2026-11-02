#include "../decls.h"
undefined4 FUN_8c022dac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined8 in_dr0;
  double dVar2;
  undefined4 in_fr15;
  double dVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar5_00 = ar5;
  FUN_8c022d14(ar4,ar5,ar6,ar7);
  uStack_1c = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 != '\0') {
    uStack_1c = (undefined4)in_dr0;
  }
  Vec3_length_sq(ar4,ar5_00,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_20 = uVar1;
  if (cVar6 != '\0') {
    uStack_20 = (undefined4)in_dr0;
    uStack_1c = uVar1;
  }
  Vec3_length_sq(ar5,ar5_00,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(uStack_20,in_fr15);
    uStack_24 = uVar1;
  }
  else {
    dVar3 = (double)CONCAT44(uStack_1c,uVar1);
    uStack_24 = (int)in_dr0;
    uStack_20 = uVar1;
  }
  uVar1 = 8;
  if (cVar6 == '\0') {
    dVar2 = (double)CONCAT44(uStack_24,(int)in_dr0);
  }
  else {
    dVar2 = (double)CONCAT44(uStack_20,uStack_24);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * (float)((ulonglong)dVar2 >> 0x20),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar2;
  }
  if (cVar5 == '\0') {
    bVar4 = 0.0 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar4 = (double)((ulonglong)dVar2 & 0xffffffff) < dVar3;
  }
  if (bVar4) {
    FUN_8c013aec(ar5,ar5_00,ar6,ar7);
    FUN_8c022e5c(ar5,ar5_00,ar6,ar7);
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022dac\n.set _FUN_8c022dac, _FUN_8c022dac_def\n");
