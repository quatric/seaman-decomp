#include "../decls.h"
undefined4
FUN_8c0a98cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20,undefined4 s24,undefined4 s28
            ,undefined4 s32)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  int in_stack_ffffe088;
  undefined4 uStack_1f6c;
  undefined8 uStack_1f68;
  undefined8 *puStack_1f5c;
  undefined4 *puStack_1f58;
  undefined4 uStack_1f54;
  undefined4 uStack_1f50;
  undefined1 auStack_1f4c [8004];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = 0x10;
  FUN_8c010120(auStack_1f4c,Vec3_ctor_zero,Vec3_dtor,0x10,500);
  uStack_1f6c = 0xffffffff;
  puStack_1f5c = &uStack_1f68;
  puStack_1f58 = &uStack_1f6c;
  uStack_1f54 = 0;
  uStack_1f50 = 1;
  for (iVar3 = 0; iVar3 < *(int *)(ar4 + 0x230) + -1; iVar3 = iVar3 + 1) {
    puVar1 = (undefined8 *)(ar4 + iVar3 * 0x10 + 0x234);
    if (cVar7 == '\0') {
      *(undefined4 *)puStack_1f5c = *(undefined4 *)puVar1;
    }
    else {
      *puStack_1f5c = *puVar1;
    }
    puVar1 = (undefined8 *)(ar4 + iVar3 * 0x10 + 0x238);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x41700000,*(undefined4 *)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar5 = 1.21432400688359e-311;
    }
    if (cVar6 == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)((int)puStack_1f5c + 4) = fVar4;
    }
    else {
      *(undefined8 *)((int)puStack_1f5c + 4) = in_xd0;
    }
    puVar1 = (undefined8 *)(ar4 + iVar3 * 0x10 + 0x23c);
    if (cVar7 == '\0') {
      *(undefined4 *)(puStack_1f5c + 1) = *(undefined4 *)puVar1;
    }
    else {
      puStack_1f5c[1] = *puVar1;
    }
    in_stack_ffffe088 = iVar3;
    FUN_8c234fd0(&puStack_1f5c,uStack_1f50,0,uVar2);
  }
  uVar2 = vec_delete_array(auStack_1f4c,Vec3_dtor,0x10,500,in_stack_ffffe088);
  return uVar2;
}

__asm__(".globl _FUN_8c0a98cc\n.set _FUN_8c0a98cc, _FUN_8c0a98cc_def\n");
