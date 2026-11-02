#include "../decls.h"
int FUN_8c0f69ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 in_fr1;
  undefined4 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 in_fr4;
  char cVar6;
  char cVar7;
  undefined4 uStack_24;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = ar6;
  Vec3_assign(ar4,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = in_fr4;
    *(undefined4 *)(ar4 + 0x20) = in_fr4;
    uVar4 = CONCAT44(in_fr4,in_fr1);
    *(undefined4 *)(ar4 + 0x1c) = in_fr4;
  }
  else {
    *(ulonglong *)(ar4 + 0x24) = CONCAT44(uStack_24,in_fr4);
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uStack_24,in_fr4);
    uVar4 = CONCAT44(uStack_24,in_fr4);
    *(undefined8 *)(ar4 + 0x1c) = uVar4;
  }
  Vec3_length_sq(ar6,ar5,ar6_00,ar7);
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x30) = (int)((ulonglong)uVar4 >> 0x20);
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = uVar4;
  }
  uVar3 = (undefined4)uVar4;
  uVar1 = Vec3_length(ar6,ar5,ar6_00,ar7);
  iVar2 = ar4 + 0x34;
  Vec3_assign(iVar2,uVar1,ar6_00,ar7);
  *(undefined4 *)(ar4 + 0x2c) = 2;
  uVar1 = rand(iVar2,uVar1,ar6_00,ar7);
  iVar2 = libgcc_divide_helper_01031c(uVar1,0x28,ar6_00,ar7);
  iVar2 = iVar2 + -0x14;
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)iVar2,uVar3);
  }
  else {
    dVar5 = (double)iVar2;
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x18) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x18) = dVar5;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0f69ec\n.set _FUN_8c0f69ec, _FUN_8c0f69ec_def\n");
