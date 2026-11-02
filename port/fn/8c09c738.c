#include "../decls.h"
undefined4
Class_12a990_m5_09c738_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iVar1 = -0x7d0;
  *(undefined4 *)((int)&iStack_4 + iVar1) = ar4;
  FUN_8c0b7a54((int)&s0 + iVar1,ar5,ar6,ar7);
  (**(code **)(*(int *)(*(int *)((int)&iStack_4 + iVar1) + 8) + 0x20))
            (*(int *)((int)&iStack_4 + iVar1),(int)&s0 + iVar1,ar6,ar7);
  uVar2 = FUN_8c068818((int)&s0 + iVar1,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _Class_12a990_m5_09c738\n.set _Class_12a990_m5_09c738, _Class_12a990_m5_09c738_def\n");
