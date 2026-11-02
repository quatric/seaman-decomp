#include "../decls.h"
int FUN_8c01679c_def(int ar4,undefined4 ar5,short *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  short *ar6_00;
  int iVar2;
  
  iVar2 = (char)ar5 + -0x20;
  ar6_00 = ar6;
  uVar1 = libgcc_divide_helper_01031c(iVar2,0x10,ar6,ar7);
  *ar6 = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7);
  ar6[1] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18) + (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7);
  ar6[2] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7);
  ar6[3] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7);
  ar6[4] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14) + (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7);
  ar6[5] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7);
  ar6[6] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14) + (short)*(undefined4 *)(ar4 + 0x14);
  iVar2 = libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7);
  iVar2 = iVar2 * *(int *)(ar4 + 0x18) + *(int *)(ar4 + 0x18);
  ar6[7] = (short)iVar2;
  return iVar2;
}

__asm__(".globl _FUN_8c01679c\n.set _FUN_8c01679c, _FUN_8c01679c_def\n");
