#include "../decls.h"
uint FUN_8c20af20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined *ar5_00;
  
  ar5_00 = &DAT_8c275714;
  _DAT_ff000038 = *_DAT_8c4aa21c >> 0x18;
  iVar1 = 4;
  uVar2 = *_DAT_8c4aa21c & 0x3ffffff | 0xe0000000;
  _DAT_ff00003c = _DAT_ff000038;
  do {
    FUN_8c207300(uVar2,ar5_00,0x20,ar7);
    iVar1 = iVar1 + -1;
    uVar2 = uVar2 + 0x20;
    ar5_00 = ar5_00 + 0x20;
  } while (iVar1 != 0);
  uVar2 = *_DAT_8c4aa21c;
  *_DAT_8c4aa21c = uVar2 + 0x80;
  return uVar2 + 0x80;
}

__asm__(".globl _FUN_8c20af20\n.set _FUN_8c20af20, _FUN_8c20af20_def\n");
