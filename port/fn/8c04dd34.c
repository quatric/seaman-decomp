#include "../decls.h"
undefined4 FUN_8c04dd34_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0;
  double dVar3;
  double in_dr14;
  undefined8 in_xd14;
  char cVar4;
  char cVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [5];
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7,auStack_20);
  FUN_8c022dac(ar4 + 0x80,auStack_20,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar5 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar1);
    uStack_24 = uVar1;
  }
  else {
    uStack_24 = (undefined4)in_dr0;
    in_xd14 = in_dr0;
    auStack_20[0] = uVar1;
  }
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  fVar2 = (float)in_dr0;
  if (cVar5 == '\0') {
    fVar2 = *(float *)(ar4 + 0x84);
  }
  dVar3 = (double)(ulonglong)(uint)fVar2;
  if (cVar4 == '\0' && 0.0 < fVar2) {
    if (cVar5 == '\0') {
      dVar3 = (double)CONCAT44(0xbf800000,fVar2);
    }
    else {
      dVar3 = -7.94252464057912e-251;
    }
    if (cVar4 == '\0') {
      in_dr14 = (double)(ulonglong)(uint)(SUB84(in_dr14,0) * (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 * dVar3;
    }
  }
  if (cVar5 == '\0') {
    *(int *)ar5 = SUB84(in_dr14,0);
  }
  else {
    *ar5 = in_xd14;
  }
  FUN_8c02327c(ar4 + 0x80,uVar1,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)dVar3 >> 0x20);
  uStack_28 = uVar1;
  if (cVar5 != '\0') {
    uStack_28 = SUB84(dVar3,0);
    uStack_24 = uVar1;
  }
  if (cVar5 == '\0') {
    *(undefined4 *)((int)ar5 + 4) = uStack_28;
  }
  else {
    *(undefined8 *)((int)ar5 + 4) = CONCAT44(uStack_24,uStack_28);
  }
  return 0;
}

__asm__(".globl _FUN_8c04dd34\n.set _FUN_8c04dd34, _FUN_8c04dd34_def\n");
