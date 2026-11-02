#include "../decls.h"
undefined4 * FUN_8c236510_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar2 = 0xe0000000;
  puVar1 = 0x8c4ab238;
  uVar6 = ((undefined1 *)4)[0x8c4ab238];
  uVar4 = 0x3ffffff & uVar6;
  *(undefined4 *)0x8c4ab25c = 0xfc000000 & uVar6;
  puVar3 = 0xff000038;
  puVar5 = (undefined4 *)(uVar4 | uVar2);
  uVar4 = uVar6 >> 0x18 & 0x1c;
  *(undefined4 *)0xff00003c = uVar4;
  uVar2 = 0x3efffff;
  *puVar3 = uVar4;
  puVar5[2] = puVar1[2] & uVar2 | 0x20080000;
  puVar5[1] = puVar1[1];
  *puVar5 = *puVar1;
  *(undefined4 *)0x8c4ab260 = (int)(puVar1 + 4);
  return puVar5 + 8;
}

__asm__(".globl _FUN_8c236510\n.set _FUN_8c236510, _FUN_8c236510_def\n");
