#include "../decls.h"
undefined4 sh4_dmac_202c60_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint auStack_1c [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auStack_1c[0] = *(uint *)(&DATA_8c26d268);
  auStack_1c[1] = *(undefined4 *)((&DATA_8c26d268) + 4);
  auStack_1c[2] = *(undefined4 *)((&DATA_8c26d268) + 8);
  auStack_1c[3] = *(undefined4 *)((&DATA_8c26d268) + 0xc);
  uStack_c = *(undefined4 *)((&DATA_8c26d268) + 0x10);
  uStack_8 = *(undefined4 *)((&DATA_8c26d268) + 0x14);
  sVar1 = 0x280;
  if ((*(undefined4 *)0x8c4a9bc8 != 1) && ((*(undefined4 *)0x8c4a9bcc & 0x10) == 0)) {
    sVar1 = 0x140;
  }
  if (ar5 == 1) {
    uVar3 = ar6 + 0x1fU & 0xffffffe0;
    *(undefined4 *)0x8c4a9e74 = *(undefined4 *)0x8c4a9e74 & 0xffa0ffff | 0x400000 | (ar6 + 0x1fU >> 5 & 0x1f) << 0x10;
  }
  else if (*(undefined4 *)0x8c4a9bc8 == 1) {
    uVar3 = (uint)0x1e0;
  }
  else if (((*(undefined4 *)0x8c4a9bcc & 1) == 1) || ((*(undefined4 *)0x8c4a9bcc & 0x2c) != 0x20)) {
    if ((*(undefined4 *)0x8c4a9bcc & 0x20) == 0) {
      if ((*(undefined4 *)0x8c4a9bcc & 0x62) == 0x42) {
        iVar4 = *(int *)(0x8c4aa084 + *(undefined4 *)0x8c4a9bdc * 4);
        uVar3 = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
      }
      else {
        uVar3 = (uint)0xf0;
      }
    }
    else if ((*(undefined4 *)0x8c4a9bcc & 0x42) == 0x42) {
      uVar3 = *(uint *)(0x8c4aa084 + *(undefined4 *)0x8c4a9bdc * 4);
    }
    else {
      uVar3 = (uint)0x1e0;
    }
  }
  else {
    uVar3 = (uint)0xf0;
  }
  iVar4 = 0x8c4aa1a0;
  iVar2 = (int)0xff;
  *(int *)(0x8c4aa1a0 + 0x48) = (int)sVar1;
  *(uint *)(iVar4 + 0x4c) = uVar3;
  if (ar4 == iVar2) {
    ar4 = *(undefined4 *)0x8c4a9bd0;
  }
  *(uint *)(iVar4 + 0x50) = auStack_1c[ar4] >> 3;
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x48) * *(int *)(iVar4 + 0x4c) * *(int *)(iVar4 + 0x50);
  return 0x60;
}

__asm__(".globl _sh4_dmac_202c60\n.set _sh4_dmac_202c60, _sh4_dmac_202c60_def\n");
