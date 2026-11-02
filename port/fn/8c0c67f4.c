#include "../decls.h"
undefined4 FUN_8c0c67f4_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  int iVar3;
  
  ar6_00 = ar6;
  FUN_8c0b9d14(ar5,ar6 + 0x14,ar6,ar7);
  iVar2 = ar6 + 0x1e;
  FUN_8c0b9d14(ar5,iVar2,ar6_00,ar7);
  *(undefined2 *)(ar6 + 0x28) = 0;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined1 *)(ar6 + iVar3 + 0x2a) = 0;
  }
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    *(undefined2 *)(iVar3 * 10 + ar6 + 0x32) = 0;
    *(undefined1 *)(iVar3 * 10 + ar6 + 0x34) = 0;
    *(undefined1 *)(iVar3 * 10 + ar6 + 0x35) = 0;
    *(undefined1 *)(iVar3 * 10 + ar6 + 0x36) = 0;
    *(undefined1 *)(iVar3 * 10 + ar6 + 0x37) = 0;
    *(undefined1 *)(iVar3 * 10 + ar6 + 0x38) = 0;
  }
  *(undefined1 *)(ar6 + 0x50) = 0;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    *(undefined4 *)(ar6 + iVar3 * 4 + 0x54) = 0;
  }
  for (iVar3 = 0; iVar3 < 0x3e; iVar3 = iVar3 + 1) {
    *(undefined1 *)(ar6 + iVar3 + 0x68) = 0;
  }
  *(undefined1 *)(0xa8 + ar6) = *(undefined4 *)0x8c436548;
  *(undefined4 *)(0xac + ar6) = 0;
  *(undefined4 *)(0xc8 + ar6) = 0xffffffff;
  for (iVar3 = 0; iVar3 < 0x14; iVar3 = iVar3 + 1) {
    *(undefined4 *)(0x204 + iVar3 * 0xf0 + ar6) = 0xffffffff;
  }
  for (iVar3 = 0; iVar3 < 0x14; iVar3 = iVar3 + 1) {
    *(undefined4 *)(0x14dc + iVar3 * 0xf0 + ar6) = 0xffffffff;
  }
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    *(undefined4 *)(0x27ac + iVar3 * 0xf0 + ar6) = 0xffffffff;
  }
  FUN_8c0d1d54(ar6,iVar2,ar6_00,ar7);
  FUN_8c0e98f8(ar6 + 0x14ac,iVar2,ar6_00,ar7);
  FUN_8c0d1eb8(ar6,iVar2,ar6_00,ar7);
  FUN_8c0e98f8(ar6 + 0x2784,iVar2,ar6_00,ar7);
  FUN_8c0d1f38(ar6,iVar2,ar6_00,ar7);
  iVar2 = ar6 + 0x30f4;
  FUN_8c0fa2f0(0x8c35468c,iVar2,ar6_00,ar7);
  uVar1 = FUN_8c01f528(0x8c3dd7dc,iVar2,ar6_00,ar7);
  uVar1 = FUN_8c01e028(uVar1,ar6 + 0x4104,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c67f4\n.set _FUN_8c0c67f4, _FUN_8c0c67f4_def\n");
