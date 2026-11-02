#include "../decls.h"
undefined4 FUN_8c259046_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  
  puStack_74 = &uStack_68;
  puStack_70 = &uStack_48;
  uStack_68 = 0xe0000000;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3727c5ac;
  uStack_48 = 0xe0000000;
  puStack_6c = &uStack_28;
  uStack_44 = _DAT_8c4aa4ac;
  uStack_40 = 0;
  uStack_3c = 0x3727c5ac;
  uStack_28 = 0xf0000000;
  uStack_24 = 0;
  uStack_20 = _DAT_8c4aa4b0;
  uStack_1c = 0x3727c5ac;
  uStack_50 = ar4;
  uStack_30 = ar5;
  uStack_10 = ar6;
  uVar1 = FUN_8c20a420(&puStack_74,0,0x20,puStack_74);
  return uVar1;
}

__asm__(".globl _FUN_8c259046\n.set _FUN_8c259046, _FUN_8c259046_def\n");
