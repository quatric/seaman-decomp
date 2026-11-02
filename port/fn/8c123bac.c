#include "../decls.h"
undefined4 FUN_8c123bac_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *ar5 = *(undefined1 *)(ar4 + 0x28);
  *(undefined4 *)(ar5 + 4) = *(undefined4 *)(ar4 + 0x2c);
  *(undefined4 *)(ar5 + 8) = *(undefined4 *)(ar4 + 0x30);
  *(undefined4 *)(ar5 + 0xc) = *(undefined4 *)(ar4 + 0x34);
  *(undefined4 *)(ar5 + 0x10) = *(undefined4 *)(ar4 + 0x38);
  *(undefined4 *)(ar5 + 0x14) = *(undefined4 *)(ar4 + 0x3c);
  *(undefined4 *)(ar5 + 0x18) = *(undefined4 *)(ar4 + 0x40);
  *(undefined2 *)(ar5 + 0x1c) = *(undefined2 *)(ar4 + 0x44);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined2 *)(ar5 + 0x1e) = *(undefined2 *)(ar4 + 0x46);
  *(undefined2 *)(ar5 + 0x20) = *(undefined2 *)(ar4 + 0x48);
  *(undefined2 *)(ar5 + 0x22) = *(undefined2 *)(ar4 + 0x4a);
  *(undefined4 *)(ar5 + 0x24) = *(undefined4 *)(ar4 + 0x4c);
  *(undefined4 *)(ar5 + 0x28) = *(undefined4 *)(ar4 + 0x50);
  do {
    *(undefined4 *)(ar5 + iVar1 + 0x2c) = *(undefined4 *)(ar4 + 0x54 + iVar1);
    iVar2 = iVar2 + 2;
    *(undefined4 *)(ar5 + iVar1 + 0x30) = *(undefined4 *)(ar4 + iVar1 + 0x58);
    iVar1 = iVar1 + 8;
  } while (iVar2 < 0x14);
  iVar1 = *(int *)(ar4 + 0xa8) - (ar4 + 0x54);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  iVar2 = 0;
  iVar3 = 0;
  *(short *)(ar5 + 0x7c) = (short)(iVar1 >> 2);
  do {
    *(undefined2 *)(ar5 + iVar2 + 0x7e) = *(undefined2 *)(ar4 + 0xac + iVar2);
    *(undefined2 *)(ar5 + iVar2 + 0x80) = *(undefined2 *)(ar4 + iVar2 + 0xae);
    iVar3 = iVar3 + 3;
    *(undefined2 *)(ar5 + iVar2 + 0x82) = *(undefined2 *)(ar4 + iVar2 + 0xb0);
    iVar2 = iVar2 + 6;
  } while (iVar3 < 0x96);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined4 *)(ar5 + 0x1ac) = *(undefined4 *)(ar4 + 0x430);
  do {
    iVar2 = iVar2 + 2;
    *(undefined2 *)(ar5 + iVar1 + 0x1b0) = *(undefined2 *)(ar4 + 0x434 + iVar1);
    *(undefined2 *)(ar5 + iVar1 + 0x1b2) = *(undefined2 *)(ar4 + iVar1 + 0x436);
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x28);
  iVar1 = *(int *)(ar4 + 0x488) - (ar4 + 0x434);
  *(short *)(ar5 + 0x200) = (short)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1);
  return 0x200;
}

__asm__(".globl _FUN_8c123bac\n.set _FUN_8c123bac, _FUN_8c123bac_def\n");
