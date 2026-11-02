#include "../decls.h"
undefined4 FUN_8c239012_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ushort auStack_14 [2];
  
  puVar1 = (&FUN_8c25a122);
  iVar3 = (int)(int)0xffffefe0;
  do {
    puVar2 = (&FUN_8c259c48);
    iVar4 = FUN_8c259c48(&stack0xfffffff0 + iVar3,4,ar6,ar7);
    if (iVar4 < 0) {
      return 0xffffffff;
    }
    iVar4 = *(int *)(&stack0xfffffff0 + iVar3);
    if ((((iVar4 == 0x4e4c444d) || (iVar4 == 0x564e4f43)) || (iVar4 == 0x494d5650)) ||
       ((iVar4 == 0x43474d49 || (iVar4 == 0x4d4d4f43)))) {
LAB_8c23911c:
      iVar4 = (*(code *)puVar2)((int)auStack_14 + iVar3,4,ar6,ar7);
      if (iVar4 < 0) {
        return 0xffffffff;
      }
      uVar7 = *(undefined4 *)((int)auStack_14 + iVar3);
      iVar4 = ar6;
override_prt_8c23912e_7a4d7f16:
      (*(code *)puVar1)(uVar7,1,iVar4,ar7);
    }
    else {
      if (iVar4 != 0x4c505650) {
        if (iVar4 != 0x54525650) goto LAB_8c23911c;
        uVar7 = 0xfffffffc;
        iVar4 = ar6;
        goto override_prt_8c23912e_7a4d7f16;
      }
      uVar7 = 0xc;
      iVar4 = (*(code *)puVar2)((int)auStack_14 + 0x1014 + iVar3,0xc,ar6,ar7);
      if (iVar4 != 1) {
        return 0xffffffff;
      }
      (*(code *)(&FUN_8c255f88))
                ((uint)*(ushort *)((int)auStack_14 + 0x1018 + iVar3),uVar7,ar6,ar7);
      if (*(short *)((int)auStack_14 + 0x1018 + iVar3) == 6) {
        iVar6 = 4;
      }
      else {
        iVar6 = 2;
      }
      iVar4 = (int)&s0 + iVar3;
      iVar5 = (*(code *)puVar2)(iVar4,*(short *)((int)auStack_14 + 0x101e + iVar3) * iVar6,ar6
                                ,ar7);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      uVar7 = 1;
      iVar6 = (*(int *)((int)auStack_14 + 0x1014 + iVar3) -
              *(short *)((int)auStack_14 + 0x101e + iVar3) * iVar6) + -8;
      *(int *)((int)auStack_14 + iVar3) = iVar6;
      (*(code *)puVar1)(iVar6,1,ar6,ar7);
      (*(code *)(&FUN_8c25603a))
                ((uint)*(ushort *)((int)auStack_14 + 0x1018 + iVar3),uVar7,ar6,ar7);
      (*(code *)(&FUN_8c2560b4))
                ((int)*(short *)((int)auStack_14 + 0x101c + iVar3) +
                 *(short *)((int)auStack_14 + 0x101a + iVar3) * 0x10,
                 (int)*(short *)((int)auStack_14 + 0x101e + iVar3),iVar4,ar7);
    }
    ar6 = iVar4;
    if (*(int *)(&stack0xfffffff0 + iVar3) == 0x54525650) {
      return 1;
    }
  } while( true );
}

__asm__(".globl _FUN_8c239012\n.set _FUN_8c239012, _FUN_8c239012_def\n");
