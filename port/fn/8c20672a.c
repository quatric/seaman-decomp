#include "../decls.h"
int pvr_20672a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = 0xa05f8008;
  uVar8 = 0;
  puVar6 = 0xa05f8008 + 0x16;
  while ((iVar3 = *(int *)(uVar8 * 4 + 0x8c4a9ef8), iVar3 != 3 || (*(undefined4 *)0x8c4a9db4 != 0))) {
    uVar8 = uVar8 + 1;
    if (3 < (int)uVar8) {
      return iVar3;
    }
  }
  uVar7 = uVar8 & 1;
  if ((uVar7 + 1 & *(undefined4 *)0x8c4a9d6c) != 0) {
    FUN_8c25d0a0(*(undefined4 *)0x8c4aa008,*(undefined4 *)0x8c4aa00c,0,1);
    *(undefined4 *)0x8c4a9d6c = ~(uVar7 + 1) & *(undefined4 *)0x8c4a9d6c & 3;
  }
  *(undefined4 *)0x8c4a9db4 = 1;
  *(undefined4 *)(0x8c4a9ef8 + uVar8 * 4) = 4;
  if ((*(undefined4 *)0x8c4a9bb0 & 0x10) != 0) {
    *puVar1 = 2;
    *puVar1 = 0;
  }
  iVar3 = 0x8c4aa01c;
  *(undefined4 *)0xa05f802c = *(undefined4 *)(0x8c4aa01c + uVar7 * 0x20);
  *(undefined4 *)0xa05f8020 = *(undefined4 *)(iVar3 + 0x14 + uVar7 * 0x20);
  if (*(undefined4 *)0x8c4a9be0 != 1) {
    if (((*(undefined4 *)0x8c4a9bcc & 1) == 1) || ((*(undefined4 *)0x8c4a9bcc & 0x2c) != 0x20)) {
      uVar5 = *(undefined4 *)(0x8c4a9ee0 + uVar7 * 4);
    }
    else {
      uVar5 = *(undefined4 *)(0x8c4a9ee0 + *(undefined4 *)0x8c4aa10c * 4);
    }
    *puVar6 = uVar5;
  }
  puVar6 = 0xa05f808c;
  puVar1 = 0x8c4a9d60;
  *(undefined4 *)0xa05f808c = *(undefined4 *)0x8c4a9d60;
  puVar6[-1] = puVar1[-1] & 0xfffffff0;
  puVar1 = 0xa05f8068;
  *(undefined4 *)0xa05f8068 = *(undefined4 *)0x8c4a9e60;
  puVar1[1] = *(undefined4 *)0x8c4a9e64;
  puVar1[-7] = *(undefined4 *)0x8c4a9e70;
  puVar1[-8] = *(undefined4 *)0x8c4a9e78;
  puVar2 = 0x8c4a9bcc;
  *(undefined4 *)0x8c4aa0b4 = 0;
  if ((*puVar2 & 0xffffffed) == 0x20) {
    if (*(undefined4 *)0x8c4aa10c == 0) {
      uVar4 = *(undefined4 *)0x8c4a9eac;
      uVar7 = 0x20000;
    }
    else {
      uVar4 = *(undefined4 *)0x8c4a9eac;
      uVar7 = 0x60000;
    }
    *(undefined4 *)0xa05f80f4 = uVar4 | uVar7;
  }
  puVar2 = 0x8c4a9f0c;
  *(undefined4 *)0x8c4aa0f4 = *(undefined4 *)0xffd8000c;
  *puVar2 = uVar8;
  puVar1 = 0xa05f8014;
  *(undefined4 *)0x8c4aa108 = 1;
  *puVar1 = 0xffffffff;
  return (int)puVar2;
}

__asm__(".globl _pvr_20672a\n.set _pvr_20672a, _pvr_20672a_def\n");
