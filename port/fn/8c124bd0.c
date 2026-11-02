#include "../decls.h"
undefined4 FUN_8c124bd0_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  
  iVar7 = *ar4;
  uVar3 = (**(code **)(ar5 + 8))(ar5);
  FUN_8c124f2a(iVar7,ar4,ar6,ar7);
  iVar7 = (**(code **)(iVar7 + 0x10))(iVar7,uVar3 * 0x14);
  ar4[0xc] = iVar7;
  if (iVar7 == 0) {
    uVar4 = FUN_8c1204c4(ar4,2);
    return uVar4;
  }
  uVar6 = 0;
  *(short *)(ar4 + 0xd) = (short)uVar3;
  puVar8 = (undefined1 *)(uint)ar4[0xc];
  if (uVar3 != 0) {
    do {
      uVar4 = (**(code **)(0x84 + ar5))(ar5,uVar6);
      uVar1 = (**(code **)(ar5 + 0x54))(uVar4);
      *puVar8 = uVar1;
      uVar1 = (**(code **)(ar5 + 0x58))(uVar4);
      puVar8[1] = uVar1;
      uVar1 = (**(code **)(ar5 + 0x5c))(uVar4);
      puVar8[2] = uVar1;
      uVar1 = (**(code **)(ar5 + 0x60))(uVar4);
      puVar8[3] = uVar1;
      uVar2 = (**(code **)(ar5 + 100))(uVar4);
      *(ushort *)(puVar8 + 4) = uVar2 & 0xff;
      uVar5 = (**(code **)(0xb4 + ar5))(uVar4);
      *(undefined4 *)(puVar8 + 8) = uVar5;
      uVar5 = (**(code **)(0xb8 + ar5))(uVar4);
      *(undefined4 *)(puVar8 + 0xc) = uVar5;
      uVar4 = (**(code **)(0xbc + ar5))(uVar4);
      uVar6 = uVar6 + 1;
      *(undefined4 *)(puVar8 + 0x10) = uVar4;
      puVar8 = puVar8 + 0x14;
    } while (uVar6 < uVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c124bd0\n.set _FUN_8c124bd0, _FUN_8c124bd0_def\n");
