#include "../decls.h"
int FUN_8c25f742_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a7;
  short asStack_1c [2];
  undefined2 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a7 = ar4 + 0xc;
  *(undefined2 *)(ar4 + 2) = 1;
  uStack_14 = ar5;
  uStack_10 = ar6;
  iVar1 = FUN_8c25f67e(ar5,ar6,asStack_1c,a7);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
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
    *(undefined2 *)(ar4 + 0xa8) = 4;
    *(undefined2 *)(0xaa + ar4) = uStack_18;
    memset(ar4 + 0x4c,0,4,a7);
    iVar1 = (int)asStack_1c[0];
  }
  return iVar1;
}

__asm__(".globl _FUN_8c25f742\n.set _FUN_8c25f742, _FUN_8c25f742_def\n");
