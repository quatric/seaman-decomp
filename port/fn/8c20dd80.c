#include "../decls.h"
undefined4 FUN_8c20dd80_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7,int s0,undefined4 s4)

{
  undefined4 uVar1;
  
  if ((s0 < 8) || (0x400 < s0)) {
LAB_8c20de00:
    uVar1 = 4;
  }
  else {
    if ((char)s4 == '\0') {
      uVar1 = 0;
    }
    else if ((char)s4 == '\x01') {
      uVar1 = 0x8000000;
    }
    else {
      if ((char)s4 != '\x02') goto LAB_8c20de00;
      uVar1 = 0x10000000;
    }
    if (ar6 == 1) {
      FUN_8c20e8c6(ar4,ar5,ar7,s0);
    }
    else {
      if (ar7 == 1) {
        FUN_8c20e9ae(ar5,s0,s0,uVar1);
      }
      s_UUUU_t_20ed60(ar4,ar5,s0,uVar1,ar7);
    }
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c20dd80\n.set _FUN_8c20dd80, _FUN_8c20dd80_def\n");
