#include "../decls.h"
undefined4 FUN_8c101250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xd0) = 0;
  *(undefined4 *)(ar4 + 300) = 0x43a00000;
  *(undefined4 *)(ar4 + 0x130) = 0x43700000;
  *(undefined4 *)(ar4 + 0x140) = 0;
  *(undefined4 *)(ar4 + 0x13c) = 0;
  *(undefined4 *)(ar4 + 0x150) = 0;
  *(undefined4 *)(ar4 + 0x14c) = 0;
  *(undefined4 *)(ar4 + 0x188) = 0;
  uVar1 = *(undefined4 *)(ar4 + 0x188);
  FUN_8c0fffec(ar4 + 0x15c,uVar1,ar6,ar7,0);
  *(undefined2 *)(ar4 + 0x18c) = 0x78;
  *(undefined4 *)(ar4 + 0xd4) = 0;
  *(undefined4 *)(ar4 + 0x128) = 0xffffffff;
  *(undefined2 *)(ar4 + 0x18e) = 0;
  FUN_8c10169c(ar4,uVar1,ar6,ar7);
  FUN_8c101784(ar4,uVar1,ar6,ar7);
  uVar1 = FUN_8c10168c(ar4,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c101250\n.set _FUN_8c101250, _FUN_8c101250_def\n");
