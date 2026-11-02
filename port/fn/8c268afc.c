#include "../decls.h"
int FUN_8c268afc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x2000;
  *(undefined1 *)(ar4 + 1) = 0;
  *(undefined1 *)(ar4 + 4) = 0;
  *(undefined1 *)(ar4 + 5) = 0;
  *(undefined1 *)(ar4 + 6) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(int *)(ar4 + 0x40) = iVar1;
  *(int *)(ar4 + 0x44) = iVar1;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined4 *)(ar4 + 0x7c) = 0;
  *(undefined4 *)(ar4 + 0x80) = 0;
  *(undefined4 *)(ar4 + 0x8c) = 0;
  *(undefined1 *)(ar4 + 7) = 0;
  iVar1 = (int)0x88;
  *(undefined4 *)(iVar1 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c268afc\n.set _FUN_8c268afc, _FUN_8c268afc_def\n");
