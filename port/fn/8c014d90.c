#include "../decls.h"
undefined4 FUN_8c014d90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0xc + ar4 + 0xc) = 0;
    *(undefined4 *)(iVar1 * 0xc + ar4 + 8) = 0;
    *(undefined4 *)(iVar1 * 0xc + ar4 + 4) = 0;
  }
  *(undefined4 *)(ar4 + 100) = 0;
  vec3_clear(ar4 + 0x54,ar5,ar6,ar7);
  *(undefined2 *)(ar4 + 0x6c) = 0;
  return 0x6c;
}

__asm__(".globl _FUN_8c014d90\n.set _FUN_8c014d90, _FUN_8c014d90_def\n");
