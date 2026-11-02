#include "../decls.h"
undefined4 FUN_8c2650ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar5_00;
  uint ar4_00;
  undefined4 uVar2;
  
  puVar1 = (&DATA_8c2784c0);
  ar5_00 = (int)0x100;
  *(uint *)(&DATA_8c2784c0) = 0x8c4ba677 & 0xffffffe0;
  ar4_00 = 0x8c4bb603 & 0xffffffe0;
  FUN_8c265ac8(0x8c4babe4,0x40,ar6,ar7);
  uVar2 = 0x40;
  FUN_8c265ba8(0x8c4bb3e4,0x40,ar6,ar7);
  FUN_8c266bd4(ar4_00,uVar2,ar6,ar7);
  uVar2 = 0x8c4bb804;
  FUN_8c268920(0x8c4bb804,ar5_00,ar6,ar7);
  FUN_8c2667cc(uVar2,ar5_00,ar6,ar7);
  *(undefined4 *)((int)0x1a8 + *(int *)puVar1) = 0;
  FUN_8c1f8d98(*(int *)puVar1 + (int)0x1ac,0,ar6,ar7);
  *(undefined4 *)0x8c4ba648 = *(undefined4 *)((int)0x1ac + *(int *)puVar1);
  return 0;
}

__asm__(".globl _FUN_8c2650ec\n.set _FUN_8c2650ec, _FUN_8c2650ec_def\n");
