#include "../decls.h"
undefined4 FUN_8c0f5e0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0;
  double dVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  undefined8 uStack_4c;
  undefined1 auStack_48 [68];
  
  cVar6 = '\0';
  cVar5 = '\0';
  FUN_8c0191c8((undefined1 *)((int)register0x0000003c + -0x48),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,(undefined4)uStack_4c);
  uVar1 = 0;
  FUN_8c25b5d0(0,ar5,ar6,ar7,(undefined4)uStack_4c);
  FUN_8c013b3c(uVar1,ar5,ar6,ar7);
  if (cVar6 == '\0') {
    uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    (*(uint*)((uchar*)&uStack_4c+0)) = uVar1;
    dVar3 = (double)CONCAT44(0x47800000,uVar1);
  }
  else {
    dVar3 = 12831.689682006836;
    uStack_4c = in_dr0;
  }
  if (cVar5 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(0x40c90fd8,fVar2);
  }
  else {
    dVar3 = 1.0382059669001045e+34;
  }
  if (cVar5 == '\0') {
    iVar4 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar3 / dVar3);
  }
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(0x46fffe00,(float)iVar4);
  }
  else {
    dVar3 = -3.738952064572566e-250;
  }
  if (cVar5 == '\0') {
    iVar4 = (int)(SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar3 - dVar3);
  }
  FUN_8c256a78(0,iVar4,ar6,ar7,(undefined4)uStack_4c);
  FUN_8c256fec(0,iVar4,ar6,ar7,(undefined4)uStack_4c);
  FUN_8c01538c(ar4 + 0x1b4,iVar4,ar6,ar7);
  uVar1 = 0;
  FUN_8c014a94(ar4 + 0x1b4,0,ar6,ar7);
  FUN_8c016524(ar4 + 0x170,uVar1,ar6,ar7);
  uVar1 = FUN_8c256210(1,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5e0c\n.set _FUN_8c0f5e0c, _FUN_8c0f5e0c_def\n");
