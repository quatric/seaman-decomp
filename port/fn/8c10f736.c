#include "../decls.h"
undefined4 FUN_8c10f736_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = (**(code **)(0x84 + ar5))(ar5,1,1);
  uVar1 = (**(code **)(ar5 + 0x54))(uVar3);
  *(undefined1 *)(ar4 + 0x58) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x58))(uVar3);
  *(undefined1 *)(ar4 + 0x59) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x5c))(uVar3);
  *(undefined1 *)(ar4 + 0x5a) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x60))(uVar3);
  *(undefined1 *)(ar4 + 0x5b) = uVar1;
  uVar2 = (**(code **)(ar5 + 100))(uVar3);
  *(ushort *)(ar4 + 0x5c) = uVar2 & 0xff;
  uVar4 = (**(code **)(0xb4 + ar5))(uVar3);
  *(undefined4 *)(ar4 + 0x60) = uVar4;
  uVar4 = (**(code **)(0xb8 + ar5))(uVar3);
  *(undefined4 *)(ar4 + 100) = uVar4;
  uVar3 = (**(code **)(0xbc + ar5))(uVar3);
  *(undefined4 *)(ar4 + 0x68) = uVar3;
  if ((uint)*(byte *)(ar4 + 0x58) != *(int *)(ar4 + 0x70) - *(int *)(ar4 + 0x74)) {
    uVar3 = FUN_8c1204c4(ar4,0x66);
    return uVar3;
  }
  *(int *)(0x90 + ar4) = ar5;
  return 0;
}

__asm__(".globl _FUN_8c10f736\n.set _FUN_8c10f736, _FUN_8c10f736_def\n");
