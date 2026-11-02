#include "../decls.h"
undefined4 FUN_8c124f54_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar4_00;
  
  ar4_00 = *ar4;
  (**(code **)(ar4_00 + 0x18))(ar4_00,ar4[3]);
  (**(code **)(ar4_00 + 0x18))(ar4_00,ar4[4]);
  (**(code **)(ar4_00 + 0x18))(ar4_00,ar4[0xe]);
  FUN_8c124f2a(ar4_00,ar4,ar6,ar7);
                    
                    
  uVar1 = (**(code **)(ar4_00 + 0x18))(ar4_00,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c124f54\n.set _FUN_8c124f54, _FUN_8c124f54_def\n");
