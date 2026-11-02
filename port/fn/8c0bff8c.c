#include "../decls.h"
int * FUN_8c0bff8c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_8c0ba8e4(ar4 + 3,ar5,ar6,ar7);
  FUN_8c0c5340((int)ar4 + 0x17c,ar5,ar6,ar7);
  FUN_8c0bf338((int)ar4 + 0x2d578,ar5,ar6,ar7);
  FUN_8c0ba2cc((int)ar4 + 0x2d59c,ar5,ar6,ar7);
  FUN_8c016410((int)ar4 + 0x2ddc4,ar5,ar6,ar7);
  FUN_8c0ffb98((int)ar4 + 0x2de08,ar5,ar6,ar7);
  FUN_8c0fed18((int)ar4 + 0x2e3a8,ar5,ar6,ar7);
  FUN_8c015224((int)ar4 + 0x2e64c,ar5,ar6,ar7);
  FUN_8c0bf478((int)ar4 + 0x2e710,ar5,ar6,ar7);
  puVar1 = (&DATA_8c13bee8);
  puVar3 = (undefined4 *)((int)ar4 + 0x2dd88);
  uVar2 = *(undefined4 *)((&DATA_8c13bee8) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13bee8);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13bef4);
  puVar3 = (undefined4 *)((int)ar4 + 0x2dd94);
  uVar2 = *(undefined4 *)((&DATA_8c13bef4) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13bef4);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13bf00);
  puVar3 = (undefined4 *)((int)ar4 + 0x2dda0);
  uVar2 = *(undefined4 *)((&DATA_8c13bf00) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13bf00);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13bf0c);
  puVar3 = (undefined4 *)((int)ar4 + 0x2ddac);
  uVar2 = *(undefined4 *)((&DATA_8c13bf0c) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13bf0c);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13bf18);
  puVar3 = (undefined4 *)((int)ar4 + 0x2ddb8);
  uVar2 = *(undefined4 *)((&DATA_8c13bf18) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13bf18);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  *ar4 = (int)(ar4 + 3);
  ar4[1] = (int)ar4 + 0x17c;
  ar4[2] = (int)ar4 + 0x2d578;
  *(int *)(0x2dd68 + (int)ar4) = (int)ar4 + 0x2de08;
  *(int *)(0x2dd6c + (int)ar4) = (int)ar4 + 0x2e3a8;
  *(int *)(0x2dd74 + (int)ar4) = (int)ar4 + 0x17c;
  *(undefined4 *)(0x2dd7c + (int)ar4) = 0;
  *(undefined4 *)(0x2e75c + (int)ar4) = 0;
  *(undefined4 *)(0x2dd84 + (int)ar4) = 0;
  *(undefined4 *)(0x2dd78 + (int)ar4) = 0;
  *(undefined4 *)(0x2dd80 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0bff8c\n.set _FUN_8c0bff8c, _FUN_8c0bff8c_def\n");
