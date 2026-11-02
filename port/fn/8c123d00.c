#include "../decls.h"
undefined4 FUN_8c123d00_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(ar4 + 0x28) = *ar5;
  *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar5 + 4);
  *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(ar5 + 8);
  *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar5 + 0xc);
  *(undefined4 *)(ar4 + 0x38) = *(undefined4 *)(ar5 + 0x10);
  *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar5 + 0x14);
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar5 + 0x18);
  *(undefined2 *)(ar4 + 0x44) = *(undefined2 *)(ar5 + 0x1c);
  *(undefined2 *)(ar4 + 0x46) = *(undefined2 *)(ar5 + 0x1e);
  *(undefined2 *)(ar4 + 0x48) = *(undefined2 *)(ar5 + 0x20);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined2 *)(ar4 + 0x4a) = *(undefined2 *)(ar5 + 0x22);
  *(undefined4 *)(ar4 + 0x4c) = *(undefined4 *)(ar5 + 0x24);
  *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar5 + 0x28);
  do {
    *(undefined4 *)(ar4 + 0x54 + iVar1) = *(undefined4 *)(ar5 + iVar1 + 0x2c);
    iVar2 = iVar2 + 2;
    *(undefined4 *)(ar4 + iVar1 + 0x58) = *(undefined4 *)(ar5 + iVar1 + 0x30);
    iVar1 = iVar1 + 8;
  } while (iVar2 < 0x14);
  iVar1 = 0;
  iVar2 = 0;
  *(uint *)(ar4 + 0xa8) = (uint)*(ushort *)(ar5 + 0x7c) * 4 + ar4 + 0x54;
  do {
    *(undefined2 *)(ar4 + 0xac + iVar1) = *(undefined2 *)(ar5 + iVar1 + 0x7e);
    *(undefined2 *)(ar4 + iVar1 + 0xae) = *(undefined2 *)(ar5 + iVar1 + 0x80);
    iVar2 = iVar2 + 3;
    *(undefined2 *)(ar4 + iVar1 + 0xb0) = *(undefined2 *)(ar5 + iVar1 + 0x82);
    iVar1 = iVar1 + 6;
  } while (iVar2 < 0x96);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined4 *)(ar4 + 0x430) = *(undefined4 *)(ar5 + 0x1ac);
  do {
    iVar2 = iVar2 + 2;
    *(undefined2 *)(ar4 + 0x434 + iVar1) = *(undefined2 *)(ar5 + iVar1 + 0x1b0);
    *(undefined2 *)(ar4 + iVar1 + 0x436) = *(undefined2 *)(ar5 + iVar1 + 0x1b2);
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x28);
  *(uint *)(ar4 + 0x488) = (uint)*(ushort *)(ar5 + 0x200) * 2 + ar4 + 0x434;
  return 0x488;
}

__asm__(".globl _FUN_8c123d00\n.set _FUN_8c123d00, _FUN_8c123d00_def\n");
