#include "../decls.h"
undefined4 FUN_8c124bd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint a5;
  uint a5_00;
  int iVar4;
  int *unaff_r13;
  undefined1 *puVar5;
  int unaff_r14;
  
  iVar4 = *unaff_r13;
  uVar1 = (**(code **)(unaff_r14 + 8))(ar5,ar5,ar6,ar7);
  FUN_8c124f2a(iVar4,unaff_r13,ar6,ar7);
  iVar4 = (**(code **)(iVar4 + 0x10))(iVar4,uVar1 * 0x14,ar6,ar7);
  unaff_r13[0xc] = iVar4;
  if (iVar4 == 0) {
    uVar2 = FUN_8c1204c4(2);
    return uVar2;
  }
  a5_00 = 0;
  *(short *)(unaff_r13 + 0xd) = (short)uVar1;
  puVar5 = (undefined1 *)unaff_r13[0xc];
  if (uVar1 != 0) {
    do {
      a5 = a5_00;
      uVar2 = (**(code **)(0x84 + unaff_r14))(unaff_r14,a5_00,ar6,ar7);
      uVar3 = (**(code **)(unaff_r14 + 0x54))(uVar2,a5,ar6,ar7);
      *puVar5 = (char)uVar3;
      uVar3 = (**(code **)(unaff_r14 + 0x58))(uVar2,a5,ar6,ar7);
      puVar5[1] = (char)uVar3;
      uVar3 = (**(code **)(unaff_r14 + 0x5c))(uVar2,a5,ar6,ar7);
      puVar5[2] = (char)uVar3;
      uVar3 = (**(code **)(unaff_r14 + 0x60))(uVar2,a5,ar6,ar7);
      puVar5[3] = (char)uVar3;
      uVar3 = (**(code **)(unaff_r14 + 100))(uVar2,a5,ar6,ar7);
      *(ushort *)(puVar5 + 4) = (ushort)uVar3 & 0xff;
      uVar3 = (**(code **)(0xb4 + unaff_r14))(uVar2,a5,ar6,ar7);
      *(undefined4 *)(puVar5 + 8) = uVar3;
      uVar3 = (**(code **)(0xb8 + unaff_r14))(uVar2,a5,ar6,ar7);
      *(undefined4 *)(puVar5 + 0xc) = uVar3;
      uVar2 = (**(code **)(0xbc + unaff_r14))(uVar2,a5,ar6,ar7);
      a5_00 = a5_00 + 1;
      *(undefined4 *)(puVar5 + 0x10) = uVar2;
      puVar5 = puVar5 + 0x14;
    } while (a5_00 < uVar1);
  }
  return 0;
}

__asm__(".globl _FUN_8c124bd8\n.set _FUN_8c124bd8, _FUN_8c124bd8_def\n");
