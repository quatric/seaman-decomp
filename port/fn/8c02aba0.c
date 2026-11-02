#include "../decls.h"
undefined4 FUN_8c02aba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int a7;
  undefined8 in_dr0;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined4 in_stack_ffffffac;
  float fStack_4c;
  undefined4 auStack_48 [4];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  a7 = ar4 + 0x5c;
  iVar3 = ar4 + 0x50;
  iVar1 = ar4 + 0x30;
  (**(code **)(**(int **)(ar4 + 0xa4) + 0x10))(*(int **)(ar4 + 0xa4),iVar1,iVar3,a7);
  FUN_8c02ace4(*(undefined4 *)(ar4 + 0x30c),iVar1,iVar3,a7,auStack_28);
  FUN_8c027224(*(undefined4 *)(ar4 + 0x30c),iVar1,iVar3,a7,in_stack_ffffffac);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x40000000,(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar4 = -7.957972504406915e-251;
  }
  if (cVar5 == '\0') {
    fStack_4c = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_4c = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 != '\0') {
    fStack_4c = (float)in_dr0;
    auStack_48[0] = (undefined4)((ulonglong)in_dr0 >> 0x20);
  }
  Vec3_scale(auStack_28,&fStack_4c,iVar3,a7,auStack_38);
  Vec3_add(ar4 + 0x30,auStack_38,iVar3,a7,auStack_48);
  Vec3_ctor_copy(auStack_18,auStack_48,iVar3,a7);
  Vec3_dtor(auStack_48,0xffffffff,iVar3,a7);
  Vec3_dtor(auStack_38,0xffffffff,iVar3,a7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_28,0xffffffff,iVar3,a7);
  FUN_8c027224(*(undefined4 *)(ar4 + 0x30c),uVar2,iVar3,a7,in_stack_ffffffac);
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,iVar3,a7);
  iVar3 = ar4 + 0x5c;
  iVar1 = ar4 + 0x50;
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x10))((int *)(ar4 + 0xa8),auStack_18,iVar1,iVar3);
  uVar2 = Vec3_dtor(auStack_18,0xffffffff,iVar1,iVar3);
  return uVar2;
}

__asm__(".globl _FUN_8c02aba0\n.set _FUN_8c02aba0, _FUN_8c02aba0_def\n");
