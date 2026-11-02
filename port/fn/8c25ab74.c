#include "../decls.h"
undefined4 FUN_8c25ab74_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint ar4_00;
  uint ar6_00;
  
  if ((*ar4 & 0xffff) == 3) {
    FUN_8c25aa80(ar4,ar5,ar6,ar7);
  }
  else {
    if ((*ar4 >> 0x10 & 0xff00) == 0x200) {
      iVar1 = FUN_8c213a04(ar4[3],ar4[4],ar6,ar7);
      ar6_00 = *(int *)(&DAT_8c277d50 + iVar1 * 4) + 4;
      ar4_00 = ar4[7] + 4;
    }
    else {
      ar4_00 = ar4[7];
      ar6_00 = ar4[5];
    }
    FUN_8c20a8e0(ar4_00,ar5,ar6_00,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c25ab74\n.set _FUN_8c25ab74, _FUN_8c25ab74_def\n");
