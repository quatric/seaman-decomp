#include "../decls.h"
undefined4 FUN_8c120148_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  undefined4 a7;
  undefined4 uVar2;
  
  uVar2 = 0;
  a6 = ar6;
  a7 = ar7;
  iVar1 = FUN_8c1200f4(ar4,(int)*ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c12011a(ar4,(int)*ar5,a6,a7);
    if (iVar1 != 0) {
      uVar2 = FUN_8c1113d0(iVar1,(int)ar5[1],ar6,ar7);
    }
  }
  else {
    uVar2 = (**(code **)(iVar1 + 0x1c))(iVar1,(int)ar5[1],ar6,ar7);
    if (0xf9 <= (short)(ushort)(byte)ar5[1]) {
      uVar2 = FUN_8c1207e8(iVar1,(int)ar5[1],ar6,ar7);
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c120148\n.set _FUN_8c120148, _FUN_8c120148_def\n");
