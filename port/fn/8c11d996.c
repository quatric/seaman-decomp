#include "../decls.h"
uint FUN_8c11d996_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((ar5 == (int *)0x0) || (ar6 == (undefined4 *)0x0)) {
      uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13,ar6_00,ar7);
      uVar2 = uVar2 & 0xff;
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*(int *)(ar4 + 0xfc) + 0x14))(0x38,ar4 + 0xf4);
      if (puVar3 == (undefined4 *)0x0) {
        *ar5 = 0;
        *ar6 = 0;
        uVar4 = FUN_8c11cd02(*(undefined4 *)(ar4 + 0xfc),2,ar6_00,ar7);
        return uVar4;
      }
      *ar6 = 0x38;
      *ar5 = (int)puVar3;
      uVar4 = libgcc_divide_helper_01051c(*(undefined4 *)(ar4 + 0x78),100);
      puVar3[3] = uVar4;
      puVar3[9] = *(undefined4 *)(ar4 + 0x7c);
      puVar3[0xc] = *(undefined4 *)(ar4 + 0x80);
      puVar3[1] = *(undefined4 *)(ar4 + 0x88);
      puVar3[2] = *(int *)(ar4 + 0x90) * 10;
      puVar3[7] = *(undefined4 *)(ar4 + 0x94);
      puVar3[8] = *(int *)(ar4 + 0x98) * 10;
      puVar3[0xd] = *(undefined4 *)(ar4 + 0x9c);
      puVar3[6] = 0x32 - *(short *)(ar4 + 0xa0);
      puVar3[5] = 0x32 - *(short *)(ar4 + 0xa2);
      puVar3[4] = *(undefined4 *)(ar4 + 0xa4);
      puVar3[10] = *(undefined4 *)(ar4 + 0xac);
      *puVar3 = *(undefined4 *)(ar4 + 0xb0);
      uVar2 = 0;
      puVar3[0xb] = *(undefined4 *)(ar4 + 0xbc);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11d996\n.set _FUN_8c11d996, _FUN_8c11d996_def\n");
