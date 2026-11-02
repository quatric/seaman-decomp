#include "../decls.h"
uint FUN_8c02fc8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  
  bVar1 = *(int *)(ar4 + 0x6c) != 0;
  if (bVar1) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  return (uint)bVar1;
}

__asm__(".globl _FUN_8c02fc8c\n.set _FUN_8c02fc8c, _FUN_8c02fc8c_def\n");
