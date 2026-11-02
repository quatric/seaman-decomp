#include "../decls.h"
undefined4 FUN_8c262c04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (ar4 != 0) {
    if (*(int *)(ar4 + 4) != 0) {
      FUN_8c25fc5c(*(undefined4 *)(ar4 + 4));
    }
    FUN_8c260ca0();
    memset(ar4,0,(int)0x9c);
    uVar1 = FUN_8c260cc8();
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c262c04\n.set _FUN_8c262c04, _FUN_8c262c04_def\n");
