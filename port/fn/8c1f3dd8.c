#include "../decls.h"
undefined4 FUN_8c1f3dd8_def(uint ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 *ar4_00;
  undefined4 *ar5_00;
  undefined4 ar6_00;
  undefined4 *puVar2;
  int *piVar3;
  
  _DAT_8c4727b4 = -0x73b8e948;
  ar6_00 = 0x1f;
  uVar1 = ar4;
  if ((_DAT_8c47267c & 0x1f) != 0) {
    uVar1 = _DAT_8c47267c + 0x20 & 0xffffffe0;
  }
  _DAT_8c47267c = uVar1;
  uVar1 = ar6;
  if ((_DAT_8c472680 & 0x1f) != 0) {
    uVar1 = _DAT_8c472680 + 0x20 & 0xffffffe0;
  }
  _DAT_8c472680 = uVar1;
  _DAT_8c47267c = _DAT_8c47267c | 0xa0000000;
  _DAT_8c472680 = _DAT_8c472680 | 0xa0000000;
  g2dma_1f4794(0xa0000000,0xffffffe0,0x1f,ar7);
  ar4_00 = &DAT_8c26c728;
  ar5_00 = &DAT_8c26c728;
  puVar2 = &DAT_8c26c728;
  piVar3 = &DAT_8c26c728;
  do {
    if (*(char *)(_DAT_8c4727b4 + 0xf90 + *piVar3) != '\0') {
      ar4_00 = (undefined4 *)*puVar2;
      FUN_8c1f55e4(ar4_00,ar5_00,ar6_00,ar7);
    }
    piVar3 = piVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (piVar3 < (int *)0x8c26c738);
  FUN_8c1f59c8(ar4_00,ar5_00,ar6_00,ar7);
  *(undefined4 *)(_DAT_8c4727b4 + 0xfc0) = 1;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x8c) = 0x6155404f;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x10) = 0;
  *(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x80) =
       *(uint *)(_DAT_8c4727b4 + 0x10c0) | *(uint *)(_DAT_8c4727b4 + 0x10d0);
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x14) = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f3dd8\n.set _FUN_8c1f3dd8, _FUN_8c1f3dd8_def\n");
