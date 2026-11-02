#include "../decls.h"
undefined1 * FUN_8c1f5dd0_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int ar4_00;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int ar5_00;
  int ar6_00;
  int a4;
  int ar4_01;
  
  ar4_00 = 0x8c4727c4;
  puVar3 = 0x8c4727b8;
  puVar2 = 0x8c4727bc;
  ar5_00 = 0;
  *(undefined4 *)0x8c472d04 = ar4;
  puVar4 = 0x8c4727c0;
  *puVar2 = 0;
  puVar5 = (&memset);
  ar6_00 = (int)0x4e0;
  *puVar3 = 1;
  *puVar4 = 0;
  (*(code *)puVar5)(ar4_00,0,ar6_00,ar7);
  if ((ar6 != 0) && (ar5 != 0)) {
    *(undefined4 *)0x8c4727bc = 1;
    FUN_8c1ef78c(ar5,ar6,ar6_00,ar7);
    ar5_00 = ar6;
  }
  iVar6 = 0x8c472ca4;
  ar4_01 = 0;
  do {
    a4 = ar4_01 * 0x34 + ar4_00;
    uVar7 = FUN_8c1efd26(ar4_01,ar5_00,ar6_00,ar7);
    *(undefined4 *)(a4 + 0x30) = uVar7;
    s_no_device_1f5f4e(a4,ar5_00,ar6_00,ar7);
    *(undefined4 *)(ar4_01 * 4 + iVar6) = 0;
    *(undefined1 *)(0x8c472d0a + ar4_01) = 0;
    *(undefined1 *)(0x8c472d22 + ar4_01) = 0;
    puVar8 = 0x8c472d09;
    uVar1 = 0xa0;
    ar4_01 = ar4_01 + 1;
  } while (ar4_01 < 0x18);
  *(undefined4 *)0x8c472d08 = (char)0xc0;
  *puVar8 = (char)uVar1;
  return puVar8;
}

__asm__(".globl _FUN_8c1f5dd0\n.set _FUN_8c1f5dd0, _FUN_8c1f5dd0_def\n");
