#include "../decls.h"
undefined4 FUN_8c20a482_def(uint ar4,uint ar5,uint ar6,uint ar7)

{
  uint uVar1;
  
  if (((int)ar4 <= (int)ar6) && ((int)ar5 <= (int)ar7)) {
    uVar1 = (uint)0x7ff;
    if ((int)uVar1 < (int)ar6) {
      ar6 = uVar1;
    }
    if ((int)uVar1 < (int)ar7) {
      ar7 = uVar1;
    }
    if (*(undefined4 *)0x8c4a9bd0 == 4) {
      ar6 = ar6 & 0xfffffffe;
      ar7 = ar7 & 0xfffffffe;
      ar4 = ar4 + 1 & 0xfffffffe;
      ar5 = ar5 + 1 & 0xfffffffe;
    }
    *(undefined4 *)0x8c4a9e60 = ar4 & uVar1 | (ar6 & uVar1) << 0x10;
    *(undefined4 *)0x8c4a9e64 = (ar7 & uVar1) << 0x10 | ar5 & uVar1;
    return 0;
  }
  return 0xdddd;
}

__asm__(".globl _FUN_8c20a482\n.set _FUN_8c20a482, _FUN_8c20a482_def\n");
