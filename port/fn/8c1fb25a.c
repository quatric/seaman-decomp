#include "../decls.h"
undefined4
FUN_8c1fb25a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            ,undefined4 s8)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 *puVar2;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(UNRECOVERED_JUMPTABLE + (DAT_8c1fb3d4 + -0x200 >> 3) + 0x200) != (code *)0x0) {
    (**(code **)(UNRECOVERED_JUMPTABLE + (DAT_8c1fb3d4 + -0x200 >> 3) + 0x200))
              (DAT_8c1fb3d4,ar5,ar6,ar7);
  }
  DAT_8c1fb3d8 = DAT_8c1fb3d8 + -1;
  puVar2 = &s8;
  if (DAT_8c1fb3d8 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  *(undefined4 *)((int)puVar2 + -4) = in_r0;
  *(undefined4 *)((int)puVar2 + -8) = in_r1;
  if (*(int *)(&DATA_8c1fb3d4) < 0x2 << 8) {
    return *(undefined4 *)((int)puVar2 + -4);
  }
                    
                    
  uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4,in_dr6,in_dr8,in_dr10,ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fb25a\n.set _FUN_8c1fb25a, _FUN_8c1fb25a_def\n");
