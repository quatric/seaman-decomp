#include "../decls.h"
int FUN_8c1f6f2a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 *ain0,
                undefined4 *ain1)

{
  int iVar1;
  undefined4 *in_r2;
  undefined4 *in_r3;
  undefined4 uVar2;
  undefined4 ar4_00;
  
  *in_r3 = ar4;
  *in_r2 = ar5;
  *ain1 = ar6;
  _DAT_8c4748b8 = ar7;
  *ain0 = 0xffffffff;
  uVar2 = 3;
  FUN_8c1f6dcc(3,ar5,ar6,ar7);
  FUN_8c1f875c(uVar2,ar5,ar6,ar7);
  uVar2 = 1;
  if (DAT_8c273a10 == '\x02') {
    iVar1 = 1;
    DAT_8c273a10 = 1;
  }
  else {
    ar4_00 = 0x8c4749bc;
    DAT_8c273a10 = 1;
    FUN_8c1f7d04(0x8c4749bc,1,ar6,ar7);
    _DAT_8c4748bc = 0x8c4749c4;
    iVar1 = FUN_8c1f7558(ar4_00,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      DAT_8c273a10 = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f6f2a\n.set _FUN_8c1f6f2a, _FUN_8c1f6f2a_def\n");
