#include "../decls.h"
uint FUN_8c237124_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint in_r0;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar3 = 0x8c4aabd8;
  puVar2 = 0x8c4ab238;
  uVar5 = *(undefined4 *)0x8c4ab238 & 0xfdffff00 | 0x20000ff & ar4;
  uVar4 = 0x180000 & ar4;
  uVar6 = ((undefined1 *)2)[0x8c4ab238] & 0xffe7ffff;
  puVar1 = 0x8c4ab238 + 1;
  if ((((int)0x400 & *(undefined4 *)0x8c4aa4f0) == 0) &&
     ((in_r0 = (uint)0x1000, (*(undefined4 *)0x8c4aa4f0 & in_r0) == 0 || ((0x2100000 & ar4) != 0)))) {
    uVar5 = uVar5 & (int)(int)0xffffff7f;
  }
  else {
    uVar5 = uVar5 | (int)0x80;
  }
  *(undefined4 *)0x8c4ab238 = uVar5;
  puVar2[1] = *puVar1;
  puVar2[2] = uVar6 | uVar4;
  *(uint *)*puVar3 = ar4;
  return in_r0;
}

__asm__(".globl _FUN_8c237124\n.set _FUN_8c237124, _FUN_8c237124_def\n");
