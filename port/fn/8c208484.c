#include "../decls.h"
undefined4 FUN_8c208484_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *a7;
  undefined4 ain0;
  int iStack_14;
  int aiStack_10 [2];
  
  iVar1 = *ar4;
  iStack_14 = ar4[1];
  a7 = aiStack_10;
  aiStack_10[0] = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar1 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar1 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar1 + 0xc);
  _DAT_8c4a9c68 =
       (int)(*(float *)(iVar1 + 0x10) * 255.0) << 0x18 |
       (int)(*(float *)(iVar1 + 0x14) * 255.0) << 0x10 |
       (int)(*(float *)(iVar1 + 0x18) * 255.0) << 8 | (int)(*(float *)(iVar1 + 0x1c) * 255.0);
  _DAT_8c4a9c6c = *(undefined4 *)(iStack_14 + 4);
  _DAT_8c4a9c70 = *(undefined4 *)(iStack_14 + 8);
  _DAT_8c4a9c74 = *(undefined4 *)(iStack_14 + 0xc);
  _DAT_8c4a9c78 =
       (int)(*(float *)(iStack_14 + 0x10) * 255.0) << 0x18 |
       (int)(*(float *)(iStack_14 + 0x14) * 255.0) << 0x10 |
       (int)(*(float *)(iStack_14 + 0x18) * 255.0) << 8 |
       (int)(*(float *)(iStack_14 + 0x1c) * 255.0);
  _DAT_8c4a9c7c = *(undefined4 *)(aiStack_10[0] + 4);
  _DAT_8c4a9c80 = *(undefined4 *)(aiStack_10[0] + 8);
  _DAT_8c4a9c84 = *(undefined4 *)(aiStack_10[0] + 0xc);
  _DAT_8c4a9c88 =
       (int)(*(float *)(aiStack_10[0] + 0x10) * 255.0) << 0x18 |
       (int)(*(float *)(aiStack_10[0] + 0x14) * 255.0) << 0x10 |
       (int)(*(float *)(aiStack_10[0] + 0x18) * 255.0) << 8 |
       (int)(*(float *)(aiStack_10[0] + 0x1c) * 255.0);
  _DAT_8c4a9d48 = 0x3c;
  ain0 = _DAT_8c4a9d50;
  ar4_00 = FUN_8c20820a(_DAT_8c4a9d4c,0x3c,&iStack_14,a7);
  FUN_8c2081e0(ar4_00,0,0,a7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar1 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c208484\n.set _FUN_8c208484, _FUN_8c208484_def\n");
