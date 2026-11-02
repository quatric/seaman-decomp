#include "../decls.h"
int FUN_8c1f11ea_def(undefined4 ar4,int ar5,uint ar6,int ar7)

{
  int iVar1;
  undefined4 ar4_00;
  uint ar6_00;
  undefined4 uStack_1c;
  int iStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0;
  ar6_00 = ar6 & 0x1fffffff;
  if (ar7 == 1) {
    ar4_00 = 0x11;
  }
  else {
    if (ar7 != 0) {
      return 0xffffffee;
    }
    ar4_00 = 0x10;
    ar6_00 = ar6_00 | 0xa0000000;
  }
  uStack_1c = ar4;
  iStack_18 = ar5;
  uStack_14 = ar6_00;
  iVar1 = syscall_1f10d8(ar4_00,&uStack_1c,ar6_00,ar7);
  if ((iVar1 != 0) && (((int)ar6 >> 0x1c & 0xeU) != 10)) {
    if ((ar6 & 0x1f) == 0) {
      FUN_8c1f9980(ar6,ar5 << 0xb,ar6_00,ar7,ar5);
    }
    else {
      FUN_8c1f9bde(ar6,ar5 << 0xb,ar6_00,ar7,ar5);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f11ea\n.set _FUN_8c1f11ea, _FUN_8c1f11ea_def\n");
