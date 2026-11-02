#include "../decls.h"
undefined4 FUN_8c21869c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 uVar2;
  
  if ((((_DAT_8c4aa4f0 & 0x100) == 0) || (in_r0 = 0x14, (float)ar4[5] <= 0.0)) ||
     (iVar1 = FUN_8c217e18(ar4,ar5,ar6,ar7), in_r0 = 0, iVar1 == 0)) {
    uVar2 = _DAT_8c4aa510;
    if (*ar4 != 0) {
      in_r0 = FUN_8c21849c(*ar4,_DAT_8c4aa510,ar6,ar7);
      ar5 = in_r0;
    }
    if (ar4[1] != 0) {
      _DAT_8c4ab1d8 = ar5;
      FUN_8c217f12(ar4[1],ar5,_DAT_8c4c0fa0,uVar2,in_r0);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c21869c\n.set _FUN_8c21869c, _FUN_8c21869c_def\n");
