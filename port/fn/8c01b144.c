#include "../decls.h"
undefined4
FUN_8c01b144_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,uint ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar5_00;
  uint ar7_00;
  int aiStack_20 [3];
  undefined4 uStack_c;
  
  uStack_c = 1;
  iVar1 = -0x22c;
  *(undefined4 *)((int)aiStack_20 + iVar1 + 8) = ar6;
  ar7_00 = ar7;
  uVar2 = FUN_8c1fc258(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
  *(undefined4 *)((int)&s16 + iVar1) = uVar2;
  if (0xffffff05 != *(int *)((int)&s16 + iVar1)) {
    if (*(int *)((int)&s16 + iVar1) != 0) {
      return 0;
    }
    uVar2 = FUN_8c01bb00(ar4,ar5,ar6,ar7_00);
    *(undefined4 *)((int)&s12 + iVar1) = uVar2;
    if (*(int *)((int)&s12 + iVar1) == 0) {
      return 0;
    }
  }
  uVar3 = 1;
  uVar2 = FUN_8c1fc16a(*(undefined4 *)0x8c2791b4,1,ar6,ar7_00);
  *(undefined4 *)((int)&s8 + iVar1) = uVar2;
  *(undefined4 *)(&stack0xffffffec + iVar1) = *(undefined4 *)((int)&s8 + iVar1);
  if ((int)((*(int *)(&stack0xffffffec + iVar1) * 0x200 - 0x280) - ar7) < 0) {
    uVar2 = FUN_8c01b9e4(ar4,uVar3,ar6,ar7_00);
    *(undefined4 *)((int)&s4 + iVar1) = uVar2;
    if (*(uint *)((int)&s4 + iVar1) < ar7) {
      return 0;
    }
    ar5_00 = (int)&s20 + iVar1;
    uVar2 = FUN_8c1fc682(*(undefined4 *)0x8c2791b4,ar5_00,ar6,ar7_00);
    *(undefined4 *)((int)&s0 + iVar1) = uVar2;
    if (*(int *)((int)&s0 + iVar1) != 0) {
      return 0;
    }
    do {
      uVar2 = FUN_8c1fc5c4(*(undefined4 *)0x8c2791b4,ar5_00,ar6,ar7_00);
      *(undefined4 *)(&stack0xfffffffc + iVar1) = uVar2;
    } while (*(int *)(&stack0xfffffffc + iVar1) == -1);
    uVar2 = FUN_8c1fc5de(*(undefined4 *)0x8c2791b4,ar5_00,ar6,ar7_00);
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar2;
    if (*(int *)(&stack0xfffffff8 + iVar1) != 0) {
      return 0;
    }
  }
  *(undefined4 *)((int)aiStack_20 + iVar1 + 4) =
       *(undefined4 *)((int)aiStack_20 + 0x248 + iVar1 + 8);
  *(undefined4 *)((int)aiStack_20 + iVar1) =
       *(undefined4 *)((int)aiStack_20 + 0x248 + iVar1 + 4);
  uVar3 = *(undefined4 *)((int)aiStack_20 + iVar1 + 8);
  uVar2 = (*(code *)(&s_VM_App_Icon_VMI_01b2b2))
                    (ar4,ar5,uVar3,ar7,*(undefined4 *)((int)aiStack_20 + iVar1),
                     *(undefined4 *)((int)aiStack_20 + iVar1 + 4));
  *(undefined4 *)((int)&stack0xfffffff4 + iVar1) = uVar2;
  if (*(int *)((int)&stack0xfffffff4 + iVar1) < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_8c01acd0(ar4,*(int *)((int)&stack0xfffffff4 + iVar1),uVar3,ar7);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
    uVar2 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01b144\n.set _FUN_8c01b144, _FUN_8c01b144_def\n");
