#include "../decls.h"
undefined4 FUN_8c262168_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  
  ar5_00 = 0;
  ar7_00 = 0xffffffff;
  ar6_00 = ar4;
  uVar1 = FUN_8c261a4c(3,0,ar4,0xffffffff,0xffffffff);
  if (ar4 != 0) {
    FUN_8c260ca0();
    if (*(char *)(ar4 + 1) == '\x02') {
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,ar5_00,ar6_00,ar7_00);
    }
    memset(ar4,0,0x30);
    FUN_8c260cc8();
    uVar1 = FUN_8c261a4c(3,1,ar4,0xffffffff,0xffffffff);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c262168\n.set _FUN_8c262168, _FUN_8c262168_def\n");
