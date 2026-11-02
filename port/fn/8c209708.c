#include "../decls.h"
undefined4 FUN_8c209708_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *ar7_00;
  undefined4 ain0;
  int iStack_14;
  int aiStack_10 [2];
  
  iVar1 = *ar4;
  ar7_00 = &iStack_14;
  iStack_14 = ar4[1];
  aiStack_10[0] = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar1 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar1 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar1 + 0xc);
  _DAT_8c4a9c68 = (uint)(*(float *)(iVar1 + 0x10) * 255.0);
  _DAT_8c4a9c68 = _DAT_8c4a9c68 << 0x18 | _DAT_8c4a9c68 << 0x10 | _DAT_8c4a9c68 << 8 | _DAT_8c4a9c68
  ;
  _DAT_8c4a9c6c = *(undefined4 *)(iStack_14 + 4);
  _DAT_8c4a9c70 = *(undefined4 *)(iStack_14 + 8);
  _DAT_8c4a9c74 = *(undefined4 *)(iStack_14 + 0xc);
  _DAT_8c4a9c78 = (uint)(*(float *)(iStack_14 + 0x10) * 255.0);
  _DAT_8c4a9c78 = _DAT_8c4a9c78 << 0x18 | _DAT_8c4a9c78 << 0x10 | _DAT_8c4a9c78 << 8 | _DAT_8c4a9c78
  ;
  _DAT_8c4a9c7c = *(undefined4 *)(aiStack_10[0] + 4);
  _DAT_8c4a9c80 = *(undefined4 *)(aiStack_10[0] + 8);
  _DAT_8c4a9c84 = *(undefined4 *)(aiStack_10[0] + 0xc);
  _DAT_8c4a9c88 = (uint)(*(float *)(aiStack_10[0] + 0x10) * 255.0);
  _DAT_8c4a9c88 = _DAT_8c4a9c88 << 0x18 | _DAT_8c4a9c88 << 0x10 | _DAT_8c4a9c88 << 8 | _DAT_8c4a9c88
  ;
  _DAT_8c4a9d48 = 0x3c;
  ain0 = _DAT_8c4a9d50;
  ar4_00 = FUN_8c20820a(_DAT_8c4a9d4c,0x3c,aiStack_10,ar7_00);
  FUN_8c2081e0(ar4_00,0,0,ar7_00,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar1 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c209708\n.set _FUN_8c209708, _FUN_8c209708_def\n");
