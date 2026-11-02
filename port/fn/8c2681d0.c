#include "../decls.h"
int FUN_8c2681d0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int ar5_00;
  
  iVar1 = ar6;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd518 = 0x16;
    DAT_8c4bd51c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd51d = (undefined1)((char)ar5 + 0x80);
    DAT_8c4bd51e = (undefined1)ar6;
    iVar1 = ar6 >> 8;
    DAT_8c4bd51f = (undefined1)((uint)ar6 >> 8);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd518,(char)ar5 + 0x80,iVar1,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2681d0,ar5_00,iVar1,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2681d0\n.set _FUN_8c2681d0, _FUN_8c2681d0_def\n");
