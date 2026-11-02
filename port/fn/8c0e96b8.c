#include "../decls.h"
undefined4 FUN_8c0e96b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined1 *)(ar4 + 0x38) = 0;
  *(undefined1 *)(ar4 + 0x44) = 0;
  *(undefined1 *)(ar4 + 0x45) = 0;
  *(undefined1 *)(ar4 + 0x3a) = 0;
  *(undefined4 *)(ar4 + 0xb0) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined1 *)(ar4 + 0x4d) = 0;
  *(undefined1 *)(ar4 + 0x4e) = 0;
  *(undefined1 *)(ar4 + 0x4f) = 0;
  *(undefined1 *)(ar4 + 0x50) = 0;
  *(undefined1 *)(ar4 + 0xbe) = 0;
  *(undefined4 *)(ar4 + 0xc0) = 0;
  *(undefined4 *)(ar4 + 0xc4) = 0;
  *(undefined4 *)(ar4 + 200) = 0;
  *(undefined4 *)(ar4 + 0xcc) = 0;
  *(undefined4 *)(ar4 + 0xd0) = 0;
  *(undefined4 *)(ar4 + 0xac) = 4;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined1 *)(ar4 + 0xbc) = 0;
  *(undefined1 *)(ar4 + 0xbd) = 0;
  *(undefined1 *)(ar4 + 0x4c) = 0;
  *(undefined4 *)(ar4 + 0xb4) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 0xa4) = 0;
    *(undefined4 *)(ar4 + iVar1 * 4 + 0x9c) = 0;
  }
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      *(undefined4 *)(iVar1 * 0xc + ar4 + iVar2 * 4 + 0x14) = 0x47c35000;
    }
  }
  for (iVar1 = 0; iVar1 < 0x12; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
      *(undefined1 *)(ar4 + iVar1 * 2 + iVar2 + 0x51) = 0;
      *(undefined1 *)(ar4 + iVar1 * 2 + iVar2 + 0x75) = 0;
    }
  }
  return 0x12;
}

__asm__(".globl _FUN_8c0e96b8\n.set _FUN_8c0e96b8, _FUN_8c0e96b8_def\n");
