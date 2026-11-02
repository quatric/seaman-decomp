#include "../decls.h"
undefined4 FUN_8c10f632_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,2,(&FUN_8c10f22a),(&FUN_8c10f41e),(&DATA_8c10f392),0x4c);
  return uVar1;
}

__asm__(".globl _FUN_8c10f632\n.set _FUN_8c10f632, _FUN_8c10f632_def\n");
