#include "../decls.h"
undefined4 FUN_8c1f53c2_def(uint *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint *puVar5;
  
  puVar3 = (undefined1 *)(ar6 + 8);
  *ar4 = (uint)*(byte *)(ar6 + 5) << 0x10 | (uint)*(byte *)(ar6 + 6) << 8 |
         (uint)*(byte *)(ar6 + 4) << 0x18 | (uint)*(byte *)(ar6 + 7);
  for (puVar5 = ar4 + 1; puVar5 < ar4 + 2; puVar5 = (uint *)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)puVar5 = uVar1;
  }
  for (puVar5 = ar4 + 2; puVar5 < ar4 + 3; puVar5 = (uint *)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)puVar5 = uVar1;
  }
  for (puVar5 = ar4 + 3; puVar5 < ar4 + 4; puVar5 = (uint *)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)puVar5 = uVar1;
  }
  pbVar4 = puVar3 + 1;
  *(undefined1 *)((int)ar4 + 0x11) = *puVar3;
  if ((char)ar4[4] == '\0') {
    *(undefined *)((int)ar4 + 0x12) = (&DAT_8c273a00)[*pbVar4 & 0xf];
    *(undefined1 *)((int)ar4 + 0x13) = 0;
  }
  else {
    *(byte *)((int)ar4 + 0x12) = *pbVar4 & 3;
    *(byte *)((int)ar4 + 0x13) = *pbVar4 >> 2 & 3;
  }
  if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
    for (puVar5 = ar4 + 5; puVar5 < (uint *)((int)ar4 + 0x33); puVar5 = (uint *)((int)puVar5 + 1)) {
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *(byte *)puVar5 = bVar2;
    }
  }
  else {
    for (puVar5 = ar4 + 5; pbVar4 = pbVar4 + 1, puVar5 < (uint *)((int)ar4 + 0x32);
        puVar5 = (uint *)((int)puVar5 + 1)) {
      *(byte *)puVar5 = *pbVar4;
    }
    *(undefined1 *)((int)ar4 + 0x32) = 0;
  }
  *(undefined1 *)((int)ar4 + 0x33) = 0;
  for (puVar5 = ar4 + 0xd; puVar5 < ar4 + 0x1c; puVar5 = (uint *)((int)puVar5 + 1)) {
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte *)puVar5 = bVar2;
  }
  *(undefined1 *)(ar4 + 0x1c) = 0;
  *(undefined2 *)(ar4 + 0x1d) = *(undefined2 *)pbVar4;
  *(undefined2 *)((int)ar4 + 0x76) = *(undefined2 *)(pbVar4 + 2);
  return 0;
}

__asm__(".globl _FUN_8c1f53c2\n.set _FUN_8c1f53c2, _FUN_8c1f53c2_def\n");
