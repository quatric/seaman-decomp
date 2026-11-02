#include "../decls.h"
undefined4 * FUN_8c068890_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar5;
  
  *ar4 = *ar5;
  uVar1 = ar5[2];
  ar4[1] = ar5[1];
  ar4[2] = uVar1;
  uVar1 = ar5[4];
  ar4[3] = ar5[3];
  ar4[4] = uVar1;
  uVar1 = ar5[6];
  ar4[5] = ar5[5];
  ar4[6] = uVar1;
  uVar1 = ar5[8];
  ar4[7] = ar5[7];
  ar4[8] = uVar1;
  ar4[9] = ar5[9];
  *(undefined2 *)(ar4 + 10) = *(undefined2 *)(ar5 + 10);
  puVar8 = ar4 + 0xb;
  puVar4 = ar5 + 0xb;
  iVar2 = 0xb;
  do {
    puVar5 = puVar4 + 1;
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar8[1] = *puVar5;
    puVar8 = puVar8 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(0x84 + (int)ar4) = *(undefined4 *)(0x84 + (int)ar5);
  *(undefined4 *)(0x88 + (int)ar4) = *(undefined4 *)(0x88 + (int)ar5);
  puVar6 = (undefined2 *)((int)ar4 + 0x8c);
  puVar3 = (undefined2 *)((int)ar5 + 0x8c);
  *puVar6 = *puVar3;
  puVar6[1] = puVar3[1];
  puVar6[2] = puVar3[2];
  puVar6[3] = puVar3[3];
  puVar6[4] = puVar3[4];
  puVar6 = (undefined2 *)((int)ar4 + 0x96);
  puVar3 = (undefined2 *)((int)ar5 + 0x96);
  *puVar6 = *puVar3;
  puVar6[1] = puVar3[1];
  puVar6[2] = puVar3[2];
  puVar6[3] = puVar3[3];
  puVar6[4] = puVar3[4];
  *(undefined1 *)(0xa0 + (int)ar4) = *(undefined1 *)(0xa0 + (int)ar5);
  *(undefined1 *)(0xa1 + (int)ar4) = *(undefined1 *)(0xa1 + (int)ar5);
  *(undefined2 *)(0xa2 + (int)ar4) = *(undefined2 *)(0xa2 + (int)ar5);
  *(undefined2 *)(0xa4 + (int)ar4) = *(undefined2 *)(0xa4 + (int)ar5);
  *(undefined4 *)(0xa8 + (int)ar4) = *(undefined4 *)(0xa8 + (int)ar5);
  FUN_8c068a2c((int)ar4 + 0xac,(int)ar5 + 0xac,ar6,ar7);
  *(undefined4 *)(0xb8 + (int)ar4) = *(undefined4 *)(0xb8 + (int)ar5);
  *(undefined4 *)(0xbc + (int)ar4) = *(undefined4 *)(0xbc + (int)ar5);
  *(undefined4 *)(0xc0 + (int)ar4) = *(undefined4 *)(0xc0 + (int)ar5);
  *(undefined4 *)(0xc4 + (int)ar4) = *(undefined4 *)(0xc4 + (int)ar5);
  *(undefined4 *)(0xc8 + (int)ar4) = *(undefined4 *)(0xc8 + (int)ar5);
  puVar7 = (undefined1 *)((int)ar4 + 0xcc);
  puVar9 = (undefined1 *)((int)ar5 + 0xcc);
  iVar2 = 0x37f;
  do {
    puVar10 = puVar9 + 1;
    *puVar7 = *puVar9;
    puVar9 = puVar9 + 2;
    puVar7[1] = *puVar10;
    puVar7 = puVar7 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return ar4;
}

__asm__(".globl _FUN_8c068890\n.set _FUN_8c068890, _FUN_8c068890_def\n");
