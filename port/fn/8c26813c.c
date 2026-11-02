#include "../decls.h"
int FUN_8c26813c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  
  if (DAT_8c2784c0 == 0) {
    iVar1 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar1 = 0x7000103;
  }
  else {
    iVar1 = (int)(char)ar7;
    if ((iVar1 < 0) || (0x1f < iVar1)) {
      iVar1 = 0x3000001;
    }
    else {
      _DAT_8c4bd500 = 0x11;
      DAT_8c4bd504 = *(undefined1 *)(ar4 + 1);
      DAT_8c4bd505 = (undefined1)ar5;
      DAT_8c4bd506 = (undefined1)ar6;
      DAT_8c4bd507 = (undefined1)(iVar1 << 3);
      in_r0 = FUN_8c267fe8(&DAT_8c4bd500,ar5,ar6,ar7);
      iVar1 = in_r0;
    }
  }
  if (iVar1 != 0) {
    FUN_8c2688a0(FUN_8c26813c,iVar1,ar6,ar7,in_r0);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26813c\n.set _FUN_8c26813c, _FUN_8c26813c_def\n");
