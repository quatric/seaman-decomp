#include "../decls.h"
undefined4 FUN_8c25f0ea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a7;
  short asStack_14 [2];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined2 *)(ar4 + 2) = 1;
  a7 = ar4 + 0xc;
  uStack_10 = ar5;
  uStack_c = ar6;
  iVar1 = FUN_8c25f052(ar5,ar6,asStack_14,a7);
  if (iVar1 < 0) {
    return 0;
  }
  *(undefined2 *)(ar4 + 0x1c) = 0;
  *(undefined2 *)(ar4 + 0x4a) = 0;
  *(undefined2 *)(ar4 + 0x48) = 0;
  *(undefined2 *)(ar4 + 0x26) = 0;
  *(undefined2 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(int *)(ar4 + 0x58) = (int)*(char *)(ar4 + 0xe);
  *(int *)(ar4 + 0x5c) = (int)*(char *)(ar4 + 0xf);
  *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x10);
  *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x3c);
  *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(ar4 + 0x40);
  *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar4 + 0x44);
  *(undefined2 *)(ar4 + 0x7c) = *(undefined2 *)(ar4 + 0x48);
  *(undefined2 *)(ar4 + 0x7e) = *(undefined2 *)(ar4 + 0x4a);
  *(int *)(ar4 + 0x80) = ar4 + 0x4c;
  *(undefined4 *)(ar4 + 0x9c) = 0;
  *(undefined4 *)(ar4 + 0x98) = 0;
  *(undefined2 *)(ar4 + 0xa8) = 3;
  if (*(char *)(ar4 + 0xd) == '\b') {
    *(undefined2 *)(0xaa + ar4) = 1;
  }
  else {
    *(undefined2 *)(0xaa + ar4) = 0;
  }
  memset(ar4 + 0x4c,0,4,a7);
  return (int)asStack_14[0];
}

__asm__(".globl _FUN_8c25f0ea\n.set _FUN_8c25f0ea, _FUN_8c25f0ea_def\n");
