#include "../decls.h"
undefined4 FUN_8c11c2b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r14;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr1_01;
  undefined4 extraout_fr1_02;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  int extraout_fr0_02;
  int extraout_fr0_03;
  int extraout_fr0_04;
  int extraout_fr0_05;
  int a5;
  char cVar7;
  
  iVar5 = *unaff_r14;
  FUN_8c120550(ar4,8,ar6,ar7);
  uVar6 = (int)extraout_fr0 & 0xffff;
  unaff_r14[0x15] = uVar6;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = 4;
  uVar1 = (undefined2)(uVar6 << 2);
  *(undefined2 *)(*(int *)(unaff_r14[4] + 4) + 0xc) = uVar1;
  *(undefined2 *)(*(int *)(unaff_r14[4] + 8) + 0xc) = uVar1;
  FUN_8c120550(unaff_r14,6,ar6,ar7);
  *(short *)(unaff_r14 + 0x16) = (short)(int)extraout_fr0_00 + -1;
  FUN_8c120550(unaff_r14,1,ar6,ar7);
  cVar7 = '\0';
  *(short *)(unaff_r14 + 0x13) = (short)(int)extraout_fr0_01;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x1b] = extraout_fr0_02;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x1b) = CONCAT44(extraout_fr0_02,extraout_fr1);
  }
  cVar7 = '\0';
  FUN_8c120550(unaff_r14,3,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x1a] = extraout_fr0_03;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x1a) = CONCAT44(extraout_fr0_03,extraout_fr1_00);
  }
  cVar7 = '\0';
  FUN_8c120550(unaff_r14,4,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x18] = extraout_fr0_04;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x18) = CONCAT44(extraout_fr0_04,extraout_fr1_01);
  }
  cVar7 = '\0';
  FUN_8c120550(unaff_r14,7,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x17] = extraout_fr0_05;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x17) = CONCAT44(extraout_fr0_05,extraout_fr1_02);
  }
  uVar4 = 4;
  a5 = uVar6 * (*(ushort *)(unaff_r14 + 0x13) + 6);
  iVar5 = (**(code **)(iVar5 + 0x14))(iVar5,a5,4,ar7);
  unaff_r14[0xf] = iVar5;
  unaff_r14[0x11] = iVar5;
  iVar3 = uVar6 * 4;
  iVar5 = uVar6 * (*(ushort *)(unaff_r14 + 0x13) + 1) * 4 + unaff_r14[0xf];
  unaff_r14[0x10] = iVar5;
  unaff_r14[0xb] = iVar5;
  iVar2 = iVar5 + iVar3 + iVar3;
  unaff_r14[0xc] = iVar5 + iVar3;
  iVar5 = iVar2 + iVar3;
  unaff_r14[0xd] = iVar2;
  unaff_r14[0xe] = iVar5;
  unaff_r14[0x14] = iVar3 + iVar5;
  if (unaff_r14[0xf] != 0) {
    FUN_8c11bb94(unaff_r14,a5,uVar4,ar7);
    return 0;
  }
  uVar4 = FUN_8c1204c4(unaff_r14,0x66,uVar4,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c11c2b8\n.set _FUN_8c11c2b8, _FUN_8c11c2b8_def\n");
