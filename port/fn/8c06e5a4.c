#include "../decls.h"
undefined4 FUN_8c06e5a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0x260) = 0;
  *(undefined4 *)(ar4 + 0x220) = 0;
  *(undefined4 *)(ar4 + 0x240) = 0;
  FUN_8c022d04(ar4 + 0x270,ar5,ar6,ar7);
  *(undefined ***)(ar4 + 0x1c8) = &PTR_s_Idle_8c13758c;
  *(undefined4 *)(ar4 + 0x1cc) = 0x22;
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x290) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x294) = 0;
  *(undefined4 *)(ar4 + 0x298) = 1;
  *(undefined4 *)(ar4 + 0x29c) = 0;
  *(undefined4 *)(ar4 + 0x2a4) = 0;
  *(undefined4 *)(ar4 + 0x2a8) = 0;
  *(undefined4 *)(ar4 + 0x2ac) = 0;
  *(undefined4 *)(ar4 + 0x2a0) = 0;
  *(undefined4 *)(ar4 + 0x2b0) = 0;
  *(undefined4 *)(ar4 + 0x2b4) = 0;
  *(undefined4 *)(ar4 + 0x2d4) = 0;
  *(undefined4 *)(ar4 + 0x2d8) = 0;
  uVar1 = FUN_8c03c314(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c06e5a4\n.set _FUN_8c06e5a4, _FUN_8c06e5a4_def\n");
