#include "../decls.h"
undefined4 FUN_8c11dda2_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  sVar3 = *(short *)(ar4 + 0x3e);
  if ((((sVar3 != 0) && (sVar3 != 1)) && (sVar3 != 2)) && (sVar3 != 5)) {
    uVar4 = 7;
override_prt_8c11e12a_7a4d7f16:
    uVar2 = FUN_8c1204c4(ar4 + 0x48,uVar4,ar6_00,ar7);
    return uVar2 & 0xff;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  ar6_00 = 10;
  uVar4 = libgcc_divide_helper_01051c(ar6,10);
  sVar3 = 0x32 - (short)ar6;
  switch((uint)ar5) {
  case 1:
    *(int *)(ar4 + 0x8c) = ar6;
    *(int *)(ar4 + 0xb0) = ar6;
    uVar2 = FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    if ((uVar2 & 0xff) == 0) {
      FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    }
    break;
  case 2:
    *(int *)(ar4 + 0x88) = ar6;
    FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    break;
  case 3:
    *(int *)(ar4 + 0xbc) = ar6;
    FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    break;
  case 4:
    *(undefined4 *)(ar4 + 0x90) = uVar4;
    uVar4 = libgcc_divide_helper_01051c(ar6 << 1,ar6_00);
    *(undefined4 *)(ar4 + 0xb4) = uVar4;
    uVar2 = FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    if ((uVar2 & 0xff) == 0) {
      FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    }
    break;
  case 5:
    *(int *)(ar4 + 0x78) = ar6 * 100;
    break;
  case 6:
    *(int *)(ar4 + 0xa4) = ar6;
    FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    break;
  case 7:
    *(short *)(ar4 + 0xa2) = sVar3;
    FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0);
    break;
  case 8:
    *(short *)(ar4 + 0xa0) = sVar3;
    FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0);
    break;
  case 9:
    *(int *)(ar4 + 0x94) = ar6;
    FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    break;
  case 10:
    *(undefined4 *)(ar4 + 0x98) = uVar4;
    FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    break;
  case 0xb:
    *(int *)(ar4 + 0x7c) = ar6;
    FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0);
    break;
  case 0xc:
    *(int *)(ar4 + 0x80) = ar6;
    FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0);
    break;
  case 0xd:
    *(int *)(ar4 + 0xac) = ar6;
    FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    break;
  case 0xe:
    iVar1 = FUN_8c11cc2c(ar4,ar6,ar6_00,ar7);
    if (iVar1 != 0) {
      uVar4 = 0x14;
      goto override_prt_8c11e12a_7a4d7f16;
    }
    *(int *)(ar4 + 0x9c) = ar6;
    FUN_8c120348(ar4 + 0x48,0x52,ar4 + 0x9c,0);
    break;
  default:
    uVar4 = 10;
    goto override_prt_8c11e12a_7a4d7f16;
  }
  return *(undefined4 *)(ar4 + 0x40);
}

__asm__(".globl _FUN_8c11dda2\n.set _FUN_8c11dda2, _FUN_8c11dda2_def\n");
