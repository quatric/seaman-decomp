#include "../decls.h"
int FUN_8c267e54_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  undefined1 uVar1;
  uint uVar2;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    uVar2 = (uint)(char)ar5;
    ar6 = (char)ar6 + 0x80;
    _DAT_8c4bd4d0 = 0x25;
    DAT_8c4bd4d4 = (&DAT_8c278590)[uVar2 & 3] | *(byte *)(ar4 + 1);
    uVar1 = (undefined1)((uint)ar7 >> 8);
    if ((uVar2 == 0) || (uVar2 == 0xffffffff)) {
      DAT_8c4bd4d5 = (char)ar6;
      DAT_8c4bd4d6 = (char)ar7;
      DAT_8c4bd4d7 = uVar1;
    }
    if ((uVar2 == 1) || (uVar2 == 0xffffffff)) {
      DAT_8c4bd4d9 = (char)ar6;
      DAT_8c4bd4da = (char)ar7;
      DAT_8c4bd4db = uVar1;
    }
    in_r0 = FUN_8c267fe8(&DAT_8c4bd4d0,ar7,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267e54,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267e54\n.set _FUN_8c267e54, _FUN_8c267e54_def\n");
