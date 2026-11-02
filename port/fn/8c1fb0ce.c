#include "../decls.h"
undefined4 FUN_8c1fb0ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(UNRECOVERED_JUMPTABLE + (*(int *)(&DATA_8c1fb3d4) + -0x200 >> 3) + 0x200) !=
      (code *)0x0) {
    (**(code **)(UNRECOVERED_JUMPTABLE + (*(int *)(&DATA_8c1fb3d4) + -0x200 >> 3) + 0x200))
              (*(int *)(&DATA_8c1fb3d4),ar5,ar6,ar7);
  }
  if (*(int *)(&DATA_8c1fb3d4) < 0x2 << 8) {
    return in_r0;
  }
                    
                    
  uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4,in_dr6,in_dr8,in_dr10,ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fb0ce\n.set _FUN_8c1fb0ce, _FUN_8c1fb0ce_def\n");
