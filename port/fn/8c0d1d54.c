#include "../decls.h"
undefined4 FUN_8c0d1d54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(ar4 + 0x1a0) = 0;
  *(undefined4 *)(ar4 + 0x1b0) = 0;
  *(undefined4 *)(ar4 + 0x1a4) = 0;
  *(undefined1 *)(ar4 + 0x1b4) = 1;
  *(undefined4 *)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(ar4 + 0x1a8) = 0;
  *(undefined4 *)(ar4 + 0x1ac) = 0;
  *(undefined4 *)(ar4 + 0x1bc) = 0x446a56b8;
  *(undefined4 *)(ar4 + 0x1c0) = 0x43340000;
  *(undefined4 *)(ar4 + 0x1c4) = 0x43557405;
  *(undefined4 *)(ar4 + 0x1cc) = 0x4475f20c;
  *(undefined4 *)(ar4 + 0x1d0) = 0x43340000;
  *(undefined4 *)(ar4 + 0x1d4) = 0x44390b33;
  *(undefined4 *)(ar4 + 0x1dc) = 0x440a7a8f;
  *(undefined4 *)(ar4 + 0x1e0) = 0x43340000;
  *(undefined4 *)(ar4 + 0x1e4) = 0x44406fa8;
  for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
    ar6 = 0xf0;
    ar5 = 0x8c437b48;
    FUN_8c013fb4(iVar2 * 0xf0 + ar4 + 0x1ec,0x8c437b48,0xf0,ar7);
  }
  uVar1 = s_Nautilus_0ae6a4(ar4 + 0x1ec,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d1d54\n.set _FUN_8c0d1d54, _FUN_8c0d1d54_def\n");
