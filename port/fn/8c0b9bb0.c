#include "../decls.h"
uint FUN_8c0b9bb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_1c [16];
  
  FUN_8c0b9d14(ar4,auStack_1c,ar6,ar7);
  *(undefined2 *)(ar4 + 0x20) = *(undefined2 *)(ar4 + 0x16);
  *(undefined2 *)(ar4 + 0x22) = *(undefined2 *)(ar4 + 0x18);
  *(undefined2 *)(ar4 + 0x24) = *(undefined2 *)(ar4 + 0x1a);
  *(undefined2 *)(ar4 + 0x26) = *(undefined2 *)(ar4 + 0x1c);
  *(undefined2 *)(ar4 + 0x28) = *(undefined2 *)(ar4 + 0x1e);
  *(undefined2 *)(ar4 + 0x16) = *(undefined2 *)(ar4 + 0xc);
  *(undefined2 *)(ar4 + 0x18) = *(undefined2 *)(ar4 + 0xe);
  *(undefined2 *)(ar4 + 0x1a) = *(undefined2 *)(ar4 + 0x10);
  *(undefined2 *)(ar4 + 0x1c) = *(undefined2 *)(ar4 + 0x12);
  *(undefined2 *)(ar4 + 0x1e) = *(undefined2 *)(ar4 + 0x14);
  iVar3 = ar4 + 0xc;
  FUN_8c0b9d14(ar4,iVar3,ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c0b9afc))
                    (ar4,iVar3,ar6,ar7,*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar4 + 0x10));
  *(undefined4 *)(0xbc + ar4) = uVar1;
  iVar3 = ar4 + *(int *)(0xbc + ar4);
  *(char *)(iVar3 + 4) = *(char *)(iVar3 + 4) + '\x01';
  uVar1 = FUN_8c0b9d30(ar4,auStack_1c,0x8c431a68 + 0x14,ar7);
  *(undefined4 *)(0xc8 + ar4) = uVar1;
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar3 = (uint)*(byte *)(ar4 + iVar4 + 4) + iVar3;
  }
  if (((*(short *)(ar4 + 0xc) == *(short *)(ar4 + 0x16)) &&
      (*(char *)(ar4 + 0xe) == *(char *)(ar4 + 0x18))) &&
     (*(char *)(ar4 + 0xf) == *(char *)(ar4 + 0x19))) {
    *(char *)(ar4 + 0x2c) = *(char *)(ar4 + 0x2c) + '\x01';
  }
  else {
    *(undefined1 *)(ar4 + 0x2c) = 1;
  }
  uVar2 = *(uint *)(0xc8 + ar4);
  if (((uVar2 == 0) && (uVar2 = (uint)*(byte *)(ar4 + 0x2c), uVar2 == 1)) && (uVar2 = 1, iVar3 != 1)
     ) {
    uVar2 = 0x2c;
    *(undefined1 *)(ar4 + 0x2c) = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b9bb0\n.set _FUN_8c0b9bb0, _FUN_8c0b9bb0_def\n");
