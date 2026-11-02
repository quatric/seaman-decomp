#include "../decls.h"
undefined4 FUN_8c1f5d6c_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined4 uStack_c;
  
  uStack_c = ar4;
  iVar1 = FUN_8c1f6494(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  uStack_10 = *ar5;
  uStack_f = ar5[1];
  uStack_e = ar5[2];
  uStack_d = ar5[3];
  iVar1 = FUN_8c1eff58(uStack_c,8,&uStack_10,1);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f5d6c\n.set _FUN_8c1f5d6c, _FUN_8c1f5d6c_def\n");
