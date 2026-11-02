#include "../decls.h"
int FUN_8c20af22_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *in_r3;
  int iVar1;
  uint ar4_00;
  undefined *ar5_00;
  
  ar5_00 = &DAT_8c275714;
  _DAT_ff000038 = *(uint *)*in_r3 >> 0x18;
  iVar1 = 4;
  ar4_00 = *(uint *)*in_r3 & 0x3ffffff | 0xe0000000;
  _DAT_ff00003c = _DAT_ff000038;
  do {
    FUN_8c207300(ar4_00,ar5_00,0x20,ar7);
    iVar1 = iVar1 + -1;
    ar4_00 = ar4_00 + 0x20;
    ar5_00 = ar5_00 + 0x20;
  } while (iVar1 != 0);
  iVar1 = *_DAT_8c4aa21c;
  *_DAT_8c4aa21c = iVar1 + 0x80;
  return iVar1 + 0x80;
}

__asm__(".globl _FUN_8c20af22\n.set _FUN_8c20af22, _FUN_8c20af22_def\n");
