#include "../decls.h"
undefined4 FUN_8c11dc7e_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  int *ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  if (ar6 == (int *)0x0) {
    ar5_00 = 0x13;
LAB_8c11dd8c:
    uVar2 = FUN_8c1204c4(ar4 + 0x48,ar5_00,ar6_00,ar7);
    return uVar2 & 0xff;
  }
  switch((uint)ar5) {
  case 1:
    *ar6 = *(int *)(ar4 + 0x8c);
    return 0;
  case 2:
    iVar1 = 0x88;
    goto LAB_8c11dd50;
  case 3:
    iVar1 = 0xbc;
    goto LAB_8c11dd6a;
  case 4:
    iVar1 = *(int *)(ar4 + 0x90) * 10;
    break;
  case 5:
    iVar1 = libgcc_divide_helper_01051c(*(undefined4 *)(ar4 + 0x78),100);
    *ar6 = iVar1;
    return 0;
  case 6:
    iVar1 = 0xa4;
    goto LAB_8c11dd6a;
  case 7:
    iVar1 = 0x32 - *(short *)(ar4 + 0xa2);
    break;
  case 8:
    iVar1 = 0x32 - *(short *)(ar4 + 0xa0);
    goto LAB_8c11dd7a;
  case 9:
    iVar1 = 0x94;
LAB_8c11dd50:
    iVar1 = *(int *)(iVar1 + ar4);
    break;
  case 10:
    iVar1 = *(int *)(ar4 + 0x98) * 10;
    goto LAB_8c11dd7a;
  case 0xb:
    iVar1 = *(int *)(ar4 + 0x7c);
    break;
  case 0xc:
    iVar1 = *(int *)(ar4 + 0x80);
    break;
  case 0xd:
    iVar1 = 0xac;
LAB_8c11dd6a:
    iVar1 = *(int *)(iVar1 + ar4);
LAB_8c11dd7a:
    *ar6 = iVar1;
    return 0;
  case 0xe:
    iVar1 = *(int *)(ar4 + 0x9c);
    goto LAB_8c11dd7a;
  default:
    ar5_00 = 10;
    goto LAB_8c11dd8c;
  }
  *ar6 = iVar1;
  return 0;
}

__asm__(".globl _FUN_8c11dc7e\n.set _FUN_8c11dc7e, _FUN_8c11dc7e_def\n");
