#include "../decls.h"
undefined1 * FUN_8c1f5ea8_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7,int s0)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int ar4_00;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int ar5_00;
  int ar6_00;
  int ar7_00;
  int a4;
  int ar4_01;
  
  ar4_00 = 0x8c4727c4;
  puVar3 = 0x8c4727b8;
  puVar2 = 0x8c4727bc;
  ar5_00 = 0;
  ar6_00 = (int)0x4e0;
  *(undefined4 *)0x8c472d04 = ar4;
  *puVar2 = 0;
  puVar4 = (&memset);
  puVar2 = 0x8c4727c0;
  *puVar3 = 1;
  *puVar2 = 0;
  ar7_00 = ar7;
  (*(code *)puVar4)(ar4_00,0,ar6_00,ar7);
  if ((ar7 != 0) && (ar6 != 0)) {
    *(undefined4 *)0x8c4727bc = 1;
    FUN_8c1ef7e6(ar5,ar6,ar7,s0);
    ar5_00 = ar6;
    ar6_00 = ar7;
    ar7_00 = s0;
  }
  iVar5 = 0x8c472d0a;
  ar4_01 = 0;
  do {
    a4 = ar4_01 * 0x34 + ar4_00;
    uVar6 = FUN_8c1efd26(ar4_01,ar5_00,ar6_00,ar7_00);
    *(undefined4 *)(a4 + 0x30) = uVar6;
    s_no_device_1f5f4e(a4,ar5_00,ar6_00,ar7_00);
    *(undefined4 *)(0x8c472ca4 + ar4_01 * 4) = 0;
    *(undefined1 *)(ar4_01 + iVar5) = 0;
    *(undefined1 *)(0x8c472d22 + ar4_01) = 0;
    puVar7 = 0x8c472d09;
    uVar1 = 0xa0;
    ar4_01 = ar4_01 + 1;
  } while (ar4_01 < 0x18);
  *(undefined4 *)0x8c472d08 = (char)0xc0;
  *puVar7 = (char)uVar1;
  return puVar7;
}

__asm__(".globl _FUN_8c1f5ea8\n.set _FUN_8c1f5ea8, _FUN_8c1f5ea8_def\n");
