#include "../decls.h"
undefined4 g2dma_1f4794_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *ar4_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  
  iVar5 = 0x6000;
  iVar7 = 0;
  _DAT_8c4727b4[0x42d] = 0;
  _DAT_8c4727b4[0x42e] = 0;
  uVar9 = 0;
  do {
    *(int *)((int)_DAT_8c4727b4 + uVar9 + 0xfe8) = _DAT_8c4727b4[0x3f2] + iVar7;
    uVar2 = uVar9 + 4;
    *(int *)((int)_DAT_8c4727b4 + uVar9 + 0x1048) = _DAT_8c4727b4[0x3f2] + iVar5;
    iVar5 = iVar5 + 0x400;
    iVar7 = iVar7 + 0x400;
    uVar9 = uVar2;
  } while (uVar2 < 0x60);
  _DAT_8c4727b4[0x42a] = _DAT_8c4727b4[0x3f1];
  _DAT_8c4727b4[0x42b] = _DAT_8c4727b4[0x3f1] + 0x3000;
  _DAT_8c4727b4[0x3f3] = _DAT_8c4727b4[0x42a];
  FUN_8c1f59dc(_DAT_8c4727b4 + 1,0,8,iVar7);
  uVar4 = 0;
  uVar6 = 0x108;
  FUN_8c1f59dc(_DAT_8c4727b4 + 10,0,0x108,iVar7);
  uVar9 = 0;
  do {
    FUN_8c1f5506((int)_DAT_8c4727b4 + uVar9 + 0x44c,uVar4,uVar6,iVar7);
    uVar9 = uVar9 + 0x78;
  } while (uVar9 < 0xb40);
  iVar5 = 0;
  do {
    iVar1 = iVar5 + 0xf90;
    iVar5 = iVar5 + 1;
    *(undefined1 *)((int)_DAT_8c4727b4 + iVar1) = 0;
  } while (iVar5 < 0x18);
  ar4_00 = &stack0xffffffdc;
  FUN_8c010960(ar4_00,0x18,uVar6,iVar7,in_stack_ffffffd8,in_stack_ffffffdc);
  iVar5 = 0;
  if ((_DAT_a05f689c & 0xff) < 2) {
    bVar8 = 7;
  }
  else {
    bVar8 = 0xf;
  }
  pbVar3 = ar4_00 + 4;
  uVar4 = 5;
  iVar7 = 0;
  do {
    if ((*ar4_00 & bVar8) != 0) {
      iVar10 = 0;
      *(undefined1 *)((int)_DAT_8c4727b4 + iVar7 + 0xf90) = 0x52;
      iVar1 = iVar5;
      do {
        iVar10 = iVar10 + 1;
        *(undefined1 *)((int)_DAT_8c4727b4 + iVar1 + 0xf91) = 0x45;
        iVar1 = iVar1 + 1;
      } while (iVar10 < 5);
    }
    ar4_00 = ar4_00 + 1;
    iVar5 = iVar5 + 6;
    iVar7 = iVar7 + 6;
  } while (ar4_00 < pbVar3);
  _DAT_8c4727b4[0x430] = 0xc3500000;
  _DAT_8c4727b4[0x3f7] = 0;
  _DAT_8c4727b4[0x3f6] = 0;
  _DAT_8c4727b4[0x3f8] = 1;
  _DAT_8c4727b4[0x432] = 0;
  _DAT_8c4727b4[0x43b] = 0;
  _DAT_8c4727b4[0x43a] = 0;
  _DAT_8c4727b4[0x433] = 5;
  _DAT_8c4727b4[0x434] = 0;
  _DAT_8c4727b4[0x436] = 10;
  _DAT_8c4727b4[0x437] = 5;
  _DAT_8c4727b4[0x438] = 0;
  _DAT_8c4727b4[0x439] = 0;
  _DAT_8c4727b4[0x3eb] = 0;
  _DAT_8c4727b4[0x3ec] = 0;
  _DAT_8c4727b4[0x3ef] = 0;
  *_DAT_8c4727b4 = 0x54524f50;
  _DAT_8c4727b4[9] = 0x20564544;
  _DAT_8c4727b4[0x112] = 0x4f464e49;
  _DAT_8c4727b4[0x3e3] = 0x4c424e45;
  _DAT_8c4727b4[0x3ea] = 0x54415453;
  _DAT_8c4727b4[0x3f9] = 0x52444152;
  _DAT_8c4727b4[0x42f] = 0x54554f54;
  _DAT_8c4727b4[0x435] = 0x43515244;
  _DAT_8c4727b4[0x43c] = 0x434e5546;
  _DAT_8c4727b4[0x43e] = 0x20444e45;
  uVar6 = 0;
  FUN_8c1f4672(0,ar4_00,5,iVar7);
  uVar4 = FUN_8c1f59fc(uVar6,ar4_00,uVar4,iVar7);
  return uVar4;
}

__asm__(".globl _g2dma_1f4794\n.set _g2dma_1f4794, _g2dma_1f4794_def\n");
