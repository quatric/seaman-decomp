#include "../decls.h"
undefined4 * FUN_8c236d20_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0xe0000000;
  puVar1 = 0x8c4ab238;
  uVar5 = ((undefined1 *)4)[0x8c4ab238];
  uVar3 = 0x3ffffff & uVar5;
  *(undefined4 *)0x8c4ab25c = 0xfc000000 & uVar5;
  puVar2 = 0xff000038;
  puVar4 = (undefined4 *)(uVar3 | uVar6);
  uVar6 = uVar5 >> 0x18 & 0x1c;
  *(undefined4 *)0xff00003c = uVar6;
  *puVar2 = uVar6;
  uVar6 = 0x20080000;
  puVar4[3] = puVar1[3];
  puVar4[2] = puVar1[2] & 0x3efffff | uVar6;
  puVar4[1] = puVar1[1];
  *puVar4 = *puVar1;
  puVar4[0xf] = ar5[3];
  puVar4[0xe] = ar5[2];
  puVar4[0xd] = ar5[1];
  puVar4[0xc] = *ar5;
  puVar4[0xb] = ar4[3];
  puVar4[10] = ar4[2];
  puVar4[9] = ar4[1];
  puVar4[8] = *ar4;
  *(undefined4 *)0x8c4ab260 = (int)(puVar1 + 4);
  return puVar4 + 0x10;
}

__asm__(".globl _FUN_8c236d20\n.set _FUN_8c236d20, _FUN_8c236d20_def\n");
