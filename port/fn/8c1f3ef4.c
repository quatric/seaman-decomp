#include "../decls.h"
undefined4 FUN_8c1f3ef4_def(int *ar4,uint *ar5,uint ar6,int ar7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *a4;
  undefined4 *a5;
  undefined4 a6;
  undefined4 a7;
  undefined4 *puVar6;
  int *piVar7;
  uint *puStack_28;
  int *piStack_24;
  
  _DAT_8c4727b4 = -0x73b8e948;
  uVar5 = ar6;
  if ((_DAT_8c47267c & 0x1f) != 0) {
    uVar5 = _DAT_8c47267c + 0x20 & 0xffffffe0;
  }
  _DAT_8c47267c = uVar5;
  puVar1 = ar5;
  if (((uint)_DAT_8c472680 & 0x1f) != 0) {
    puVar1 = (uint *)((int)_DAT_8c472680 + 0x20U & 0xffffffe0);
  }
  _DAT_8c472680 = puVar1;
  _DAT_8c47267c = _DAT_8c47267c | 0xa0000000;
  _DAT_8c472680 = (uint *)((uint)_DAT_8c472680 | 0xa0000000);
  g2dma_1f4794(0x8c4716b8,ar5,ar6,ar7);
  uVar5 = 0;
  do {
    *(undefined4 *)(_DAT_8c4727b4 + 0xfe8 + uVar5) = 0;
    iVar3 = _DAT_8c4727b4 + uVar5;
    uVar5 = uVar5 + 4;
    *(undefined4 *)(iVar3 + 0x1048) = 0;
  } while (uVar5 < 0x60);
  iVar3 = 0;
  puStack_28 = ar5;
  piStack_24 = ar4;
  if (0 < ar7) {
    do {
      uVar5 = *puStack_28;
      if ((uVar5 & 0x1f) != 0) {
        uVar5 = uVar5 + 0x20 & 0xffffffe0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = *piStack_24;
      *(uint *)(_DAT_8c4727b4 + 0xfe8 + iVar2 * 4) = uVar5 | 0xa0000000;
      *(uint *)(iVar2 * 4 + _DAT_8c4727b4 + 0x1048) = (uVar5 | 0xa0000000) + 0x400;
      puStack_28 = puStack_28 + 1;
      piStack_24 = piStack_24 + 1;
    } while (iVar3 < ar7);
  }
  iVar3 = 0;
  *(undefined4 *)(_DAT_8c4727b4 + 0x10a8) = *(undefined4 *)(_DAT_8c4727b4 + 0xfc4);
  *(int *)(_DAT_8c4727b4 + 0x10ac) = ar7 * 0x400 + *(int *)(_DAT_8c4727b4 + 0xfc4);
  *(undefined4 *)(_DAT_8c4727b4 + 0xfcc) = *(undefined4 *)(_DAT_8c4727b4 + 0x10a8);
  do {
    puVar4 = (undefined1 *)(_DAT_8c4727b4 + 0xf90 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar4 = 0;
  } while (iVar3 < 0x18);
  a7 = 0x65;
  iVar3 = 0;
  a6 = 0x72;
  if (0 < ar7) {
    do {
      iVar2 = *ar4;
      ar4 = ar4 + 1;
      if ((((iVar2 == 0) || (iVar2 == 6)) || (iVar2 == 0xc)) || (iVar2 == 0x12)) {
        *(undefined1 *)(iVar2 + _DAT_8c4727b4 + 0xf90) = 0x72;
      }
      else {
        *(undefined1 *)(iVar2 + _DAT_8c4727b4 + 0xf90) = 0x65;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < ar7);
  }
  a4 = &DAT_8c26c728;
  a5 = &DAT_8c26c728;
  puVar6 = &DAT_8c26c728;
  piVar7 = &DAT_8c26c728;
  do {
    if (*(char *)(_DAT_8c4727b4 + 0xf90 + *piVar7) != '\0') {
      a4 = (undefined4 *)*puVar6;
      FUN_8c1f55e4(a4,a5,a6,a7);
    }
    piVar7 = piVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (piVar7 < (int *)0x8c26c738);
  FUN_8c1f59c8(a4,a5,a6,a7);
  *(undefined4 *)(_DAT_8c4727b4 + 0xfc0) = 1;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x8c) = 0x6155404f;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x10) = 0;
  *(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x80) =
       *(uint *)(_DAT_8c4727b4 + 0x10c0) | *(uint *)(_DAT_8c4727b4 + 0x10d0);
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x14) = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f3ef4\n.set _FUN_8c1f3ef4, _FUN_8c1f3ef4_def\n");
