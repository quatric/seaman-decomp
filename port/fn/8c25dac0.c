#include "../decls.h"
undefined4 FUN_8c25dac0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  uint in_stack_00000034;
  uint in_stack_00000038;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  uint in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  uint in_stack_00000060;
  uint in_stack_00000064;
  uint in_stack_00000068;
  uint in_stack_0000006c;
  byte in_stack_00000070;
  
  uVar2 = (uint)0x7ff;
  *(undefined4 *)0x8c4a9e60 = in_stack_00000058 & uVar2 | (in_stack_00000054 & uVar2) << 0x10;
  *(undefined4 *)0x8c4a9e64 = in_stack_00000060 & uVar2 | (in_stack_0000005c & uVar2) << 0x10;
  *(undefined4 *)0x8c4a9e68 =
       in_stack_00000048 & 0xf | (in_stack_0000004c & 0x1f) << 4 | (in_stack_00000050 & 0xf) << 9;
  *(undefined4 *)0x8c4a9bec = in_stack_00000000;
  *(undefined4 *)0x8c4a9bf0 = in_stack_00000004;
  uVar2 = (uint)0x3ff;
  uVar3 = (in_stack_00000008 & uVar2) << 0x14;
  if (*(undefined4 *)0x8c4a9c00 < 1) {
    *(undefined4 *)0x8c4a9e6c = in_stack_00000000 & uVar2 | (in_stack_00000004 & uVar2) << 10 | uVar3;
  }
  else {
    *(undefined4 *)0x8c4a9e6c =
         in_stack_00000000 & uVar2 | (in_stack_00000004 - *(undefined4 *)0x8c4a9c00 & uVar2) << 10 | uVar3;
  }
  *(undefined4 *)0x8c4a9ea8 = in_stack_00000014 & 0xff | (in_stack_00000018 & 0xff) << 8;
  puVar1 = 0x8c4a9eac;
  *(undefined4 *)0x8c4a9eac =
       in_stack_00000010 & 0xffff | (in_stack_0000000c & 1) << 0x10 |
       (in_stack_0000001c & 1) << 0x12;
  puVar1[-0xf] = in_stack_00000044 & (int)0x1ff;
  *(undefined4 *)0x8c4a9e78 =
       in_stack_00000030 & 7 | (in_stack_0000002c & 1) << 3 | (in_stack_00000034 & 0xff) << 8 |
       (in_stack_00000038 & 0xff) << 0x10;
  *(undefined4 *)0x8c4a9e74 =
       in_stack_00000020 & 1 | (in_stack_00000028 & 1) << 1 | (in_stack_0000003c & 3) << 2 |
       (in_stack_00000040 & 7) << 4 | (uint)in_stack_00000070 << 8 |
       (in_stack_00000068 & 0x1f) << 0x10 | (in_stack_00000064 & 1) << 0x16 |
       (in_stack_0000006c & 1) << 0x17;
  return 0x6c;
}

__asm__(".globl _FUN_8c25dac0\n.set _FUN_8c25dac0, _FUN_8c25dac0_def\n");
