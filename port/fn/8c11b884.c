#include "../decls.h"
undefined4 FUN_8c11b884_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (&FUN_8c11237a);
  FUN_8c11237a(*ar4);
  (*(code *)puVar1)(ar4[1],ar5);
  (*(code *)puVar1)(ar4[3],ar5);
  (*(code *)puVar1)(ar4[4],ar5);
  (*(code *)puVar1)(ar4[5],ar5);
  FUN_8c1123da(ar4[6],ar5);
  (*(code *)puVar1)(ar4[2],ar5);
                    
                    
  uVar2 = (**(code **)(ar5 + 0x18))(ar5,ar4);
  return uVar2;
}

__asm__(".globl _FUN_8c11b884\n.set _FUN_8c11b884, _FUN_8c11b884_def\n");
