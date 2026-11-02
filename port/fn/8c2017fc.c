#include "../decls.h"
undefined4 FUN_8c2017fc_def(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  if ((((*(short *)(ar5 + 0x40) != 0) && (*(ushort *)(ar5 + 0x40) < 4)) &&
      (*(ushort *)(ar5 + 0x44) < 4)) && (*(uint *)(ar5 + 0x48) < 0xe1001)) {
    iVar3 = *(int *)(&DAT_8c273bb8 + (uint)*(ushort *)(ar5 + 0x40) * 4);
    iVar6 = *(int *)(&DAT_8c273bc8 + (uint)*(ushort *)(ar5 + 0x44) * 4);
    uVar8 = iVar3 + iVar6 + *(int *)(ar5 + 0x48) + 0x80;
    if (uVar8 < 0xe1001) {
      puVar5 = ar4;
      puVar7 = ar5;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      puVar7 = ar5 + 0x10;
      *puVar5 = 0;
      puVar5 = ar4 + 0x12;
      for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      puVar7 = ar5 + 0x30;
      puVar5 = ar4 + 0x34;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      *(undefined2 *)(ar4 + 0x4e) = *(undefined2 *)(ar5 + 0x42);
      *(undefined2 *)(ar4 + 0x4c) = *(undefined2 *)(ar5 + 0x40);
      *(undefined1 **)(ar4 + 0x44) = ar5 + 0x60;
      *(undefined1 **)(ar4 + 0x48) = ar5 + 0x80;
      puVar7 = ar5 + 0x80 + iVar3;
      *(undefined2 *)(ar4 + 0x54) = *(undefined2 *)(ar5 + 0x44);
      if (*(short *)(ar5 + 0x44) == 0) {
        *(undefined4 *)(ar4 + 0x50) = 0;
      }
      else {
        *(undefined1 **)(ar4 + 0x50) = puVar7;
        puVar7 = puVar7 + iVar6;
      }
      *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 0x48);
      if (*(int *)(ar5 + 0x48) == 0) {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(undefined1 **)(ar4 + 0x58) = puVar7;
      }
      uVar2 = *(ushort *)(ar5 + 0x46);
      *(undefined2 *)(ar5 + 0x46) = 0;
      uVar8 = FUN_8c201948(ar5,uVar8,puVar7,puVar5);
      *(ushort *)(ar5 + 0x46) = uVar2;
      if ((uVar8 & 0xffff) != (uint)uVar2) {
        return 0xffffff20;
      }
      return 0;
    }
  }
  return 0xffffff21;
}

__asm__(".globl _FUN_8c2017fc\n.set _FUN_8c2017fc, _FUN_8c2017fc_def\n");
