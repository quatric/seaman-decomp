#include "../decls.h"
undefined4 FUN_8c010838_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 *in_r1;
  undefined4 *in_r2;
  undefined4 *puVar2;
  
                    
  switch(in_r0) {
  case 0:
    return in_r0;
  default:
    puVar2 = (undefined4 *)((int)in_r2 + in_r0);
  }
  while( true ) {
    if (puVar2 < in_r2 + 1) {
      return *in_r2;
    }
    *in_r1 = *in_r2;
    uVar1 = in_r2[1];
    in_r2 = in_r2 + 2;
    if (puVar2 < in_r2) break;
    in_r1[1] = uVar1;
    in_r1 = in_r1 + 2;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c010838\n.set _FUN_8c010838, _FUN_8c010838_def\n");
