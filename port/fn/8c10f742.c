#include "../decls.h"
undefined4 FUN_8c10f742_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r13;
  int unaff_r14;
  
  uVar1 = (**(code **)(in_r0 + unaff_r13))(unaff_r13,ar5,ar6,ar7);
  uVar2 = (**(code **)(unaff_r13 + 0x54))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x58) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 0x58))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x59) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 0x5c))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x5a) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 0x60))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x5b) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 100))(uVar1,ar5,ar6,ar7);
  *(ushort *)(unaff_r14 + 0x5c) = (ushort)uVar2 & 0xff;
  uVar2 = (**(code **)(0xb4 + unaff_r13))(uVar1,ar5,ar6,ar7);
  *(undefined4 *)(unaff_r14 + 0x60) = uVar2;
  uVar2 = (**(code **)(0xb8 + unaff_r13))(uVar1,ar5,ar6,ar7);
  *(undefined4 *)(unaff_r14 + 100) = uVar2;
  uVar1 = (**(code **)(0xbc + unaff_r13))(uVar1,ar5,ar6,ar7);
  *(undefined4 *)(unaff_r14 + 0x68) = uVar1;
  if ((uint)*(byte *)(unaff_r14 + 0x58) != *(int *)(unaff_r14 + 0x70) - *(int *)(unaff_r14 + 0x74))
  {
    uVar1 = FUN_8c1204c4(0x66);
    return uVar1;
  }
  *(int *)(0x90 + unaff_r14) = unaff_r13;
  return 0;
}

__asm__(".globl _FUN_8c10f742\n.set _FUN_8c10f742, _FUN_8c10f742_def\n");
