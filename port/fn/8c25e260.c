#include "../decls.h"
undefined4 FUN_8c25e260_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 a5;
  undefined4 uVar6;
  uint uVar7;
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  uint in_stack_00000034;
  uint in_stack_00000038;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  uint in_stack_00000044;
  int in_stack_00000048;
  int in_stack_0000004c;
  uint in_stack_00000050;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000060;
  int in_stack_00000068;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  uint in_stack_00000074;
  uint in_stack_00000078;
  
  iVar3 = (int)0xf8;
  *(undefined4 *)0x8c4a9c04 = *(int *)((int)&stack0x00000000 + iVar3);
  *(undefined4 *)0x8c4a9c08 = *(int *)(&stack0xfffffff8 + iVar3);
  *(undefined4 *)0x8c4a9c0c = *(undefined4 *)(&stack0xfffffffc + iVar3);
  *(undefined4 *)0x8c4a9e8c =
       in_stack_00000054 << 1 | in_stack_00000050 | in_stack_0000005c << 2 | in_stack_00000068 << 3
       | in_stack_00000030 << 4 | in_stack_00000060 << 5 | in_stack_00000028 << 6 |
       in_stack_0000002c << 7 | in_stack_00000048 << 8 | in_stack_0000004c << 9;
  uVar5 = (uint)0x7ff;
  *(undefined4 *)0x8c4a9e98 = in_stack_00000004 & uVar5 | (in_stack_00000000 & uVar5) << 0x10;
  *(undefined4 *)0x8c4a9e90 = (in_stack_00000004 & uVar5) << 0x10;
  *(undefined4 *)0x8c4a9e9c = in_stack_00000008 & uVar5 | (in_stack_00000014 & uVar5) << 0x10;
  *(undefined4 *)0x8c4a9ea0 = in_stack_00000010 & uVar5 | (in_stack_0000000c & uVar5) << 0x10;
  *(undefined4 *)0x8c4a9e94 = in_stack_00000074 & uVar5 | (in_stack_00000078 & uVar5) << 0x10;
  uVar6 = 0x7f;
  uVar7 = (uint)0x3ff;
  *(undefined4 *)0x8c4a9ea4 =
       in_stack_00000018 & 0x7f | (in_stack_0000001c & 0xf) << 8 |
       (in_stack_00000020 & uVar7) << 0xc | (in_stack_00000024 & 0x7f) << 0x16;
  uVar5 = (in_stack_00000044 & 0xf) << 4;
  *(undefined4 *)0x8c4a9eb0 =
       in_stack_00000034 & 1 | (in_stack_00000038 & 1) << 1 | (in_stack_0000003c & 1) << 2 |
       (in_stack_00000040 & 1) << 3 | uVar5 | (in_stack_0000006c & 1) << 8 |
       (in_stack_00000070 & 0x3f) << 0x10;
  piVar1 = 0x8c4a9c04;
  *(undefined4 *)0x8c4a9eb4 = *(undefined4 *)0x8c4a9c04 + *(undefined4 *)0x8c4a9bfc;
  *(undefined4 *)0x8c4a9eb8 = *(undefined4 *)0x8c4a9c08 + *(undefined4 *)0x8c4a9c00 | (((undefined1 *)1)[0x8c4a9c08] + piVar1[-1]) * 0x10000;
  puVar2 = (&pvr_20a876);
  if ((*(undefined4 *)0x8c4aa098 != 1) && ((*(undefined4 *)0x8c4a9bb0 & 2) != 0)) {
    iVar3 = (int)0x10c;
    do {
      uVar4 = (*(code *)puVar2)(iVar3,uVar5,uVar6,ar7);
    } while ((uVar4 & uVar7) == 0);
    do {
      uVar4 = (*(code *)puVar2)(iVar3,uVar5,uVar6,ar7);
    } while ((uVar4 & uVar7) != 0);
  }
  puVar2 = (&pvr_20a844);
  pvr_20a844((int)0xe8,*(undefined4 *)0x8c4a9eb0 | 8,uVar6,ar7);
  a5 = 0x800000;
  if ((*(undefined4 *)0x8c4a9bc8 & 1) == 0) {
    a5 = 0;
  }
  (*(code *)puVar2)(0x44,a5,uVar6,ar7);
  (*(code *)puVar2)(0x5c,0,uVar6,ar7);
  (*(code *)puVar2)((int)0xd0,*(undefined4 *)0x8c4a9e8c,uVar6,ar7);
  (*(code *)puVar2)((int)0xd8,*(undefined4 *)0x8c4a9e9c,uVar6,ar7);
  (*(code *)puVar2)((int)0xcc,*(undefined4 *)0x8c4a9e94,uVar6,ar7);
  (*(code *)puVar2)((int)0xd4,*(undefined4 *)0x8c4a9e98,uVar6,ar7);
  (*(code *)puVar2)((int)0xdc,*(undefined4 *)0x8c4a9ea0,uVar6,ar7);
  (*(code *)puVar2)((int)0xe0,*(undefined4 *)0x8c4a9ea4,uVar6,ar7);
  (*(code *)puVar2)((int)0xec,*(undefined4 *)0x8c4a9eb4,uVar6,ar7);
  (*(code *)puVar2)((int)0xf0,*(undefined4 *)0x8c4a9eb8,uVar6,ar7);
  uVar6 = (*(code *)puVar2)((int)0xc8,*(undefined4 *)0x8c4a9e90,uVar6,ar7);
  return uVar6;
}

__asm__(".globl _FUN_8c25e260\n.set _FUN_8c25e260, _FUN_8c25e260_def\n");
