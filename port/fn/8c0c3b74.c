#include "../decls.h"
undefined4 FUN_8c0c3b74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  undefined8 in_dr4;
  ushort in_stack_00000000;
  byte in_stack_00000002;
  byte in_stack_00000003;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 ain0;
  float afStack_118 [65];
  
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      afStack_118[iVar3 * 8 + iVar2 * 2] =
           *(float *)(ar4 + iVar3 * 0x20 + iVar2 * 8 + 0x54) + (float)((ulonglong)in_dr4 >> 0x20);
      afStack_118[iVar3 * 8 + iVar2 * 2 + 1] =
           *(float *)(ar4 + iVar3 * 0x20 + iVar2 * 8 + 0x58) + (float)in_dr4;
    }
  }
  uVar1 = libgcc_divide_helper_0101e4((uint)in_stack_00000002,10,ar6,ar7);
  uVar4 = (undefined1)uVar1;
  uVar1 = libgcc_divide_helper_01031c((uint)in_stack_00000002,10,ar6,ar7);
  uVar5 = CONCAT11((char)uVar1,uVar4);
  uVar1 = libgcc_divide_helper_0101e4((uint)in_stack_00000003,10,ar6,ar7);
  uVar6 = (uint)CONCAT12((char)uVar1,uVar5);
  uVar1 = libgcc_divide_helper_01031c((uint)in_stack_00000003,10,ar6,ar7);
  ain0 = CONCAT13((char)uVar1,(int3)uVar6);
  libgcc_divide_helper_0101e4((uint)in_stack_00000000,1000,ar6,ar7);
  uVar1 = libgcc_divide_helper_01031c((uint)in_stack_00000000,1000,ar6,ar7);
  libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7);
  uVar1 = libgcc_divide_helper_01031c((uint)in_stack_00000000,100,ar6,ar7);
  libgcc_divide_helper_0101e4(uVar1,10,ar6,ar7);
  libgcc_divide_helper_01031c((uint)in_stack_00000000,10,ar6,ar7);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    if (((iVar3 != 0) || ((char)ain0 != '\0')) &&
       ((iVar3 != 2 || ((char)((uint)ain0 >> 0x10) != '\0')))) {
      *(ushort *)(ar4 + 0x184) = (ushort)(byte)(&stack0xfffffe84)[iVar3] << 4;
      *(undefined2 *)(ar4 + 0x186) = 0x3f;
      *(ushort *)(ar4 + 0x188) = (ushort)(byte)(&stack0xfffffe84)[iVar3] << 4;
      *(undefined2 *)(ar4 + 0x18a) = 0x20;
      *(ushort *)(ar4 + 0x18c) = (ushort)(byte)(&stack0xfffffe84)[iVar3] * 0x10 + 0xf;
      *(undefined2 *)(ar4 + 0x18e) = 0x20;
      *(ushort *)(ar4 + 400) = (ushort)(byte)(&stack0xfffffe84)[iVar3] * 0x10 + 0xf;
      *(undefined2 *)(ar4 + 0x192) = 0x3f;
      ar7_00 = 4;
      ar6_00 = ar4 + 0x164;
      FUN_8c016318(ar4 + 0x20,afStack_118 + iVar3 * 8,ar6_00,4,ain0);
      iVar2 = ar4 + 0x184;
      FUN_8c016324(ar4 + 0x20,iVar2,ar6_00,ar7_00);
      FUN_8c01538c(ar4 + 4,iVar2,ar6_00,ar7_00);
      uVar1 = 0;
      FUN_8c014a94(ar4 + 4,0,ar6_00,ar7_00);
      FUN_8c016340(ar4 + 0x20,uVar1,ar6_00,ar7_00);
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c0c3b74\n.set _FUN_8c0c3b74, _FUN_8c0c3b74_def\n");
