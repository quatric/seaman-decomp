#include "../decls.h"
undefined4 FUN_8c02a6f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  
  FUN_8c02a758(ar4 + 0x174,ar5,ar6,ar7);
  ar5_00 = FUN_8c02a758(ar4 + 0x174,ar5,ar6,ar7);
  FUN_8c02c758(ar4 + 0x174,ar5_00,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xfffffff7;
  return 0x74;
}

__asm__(".globl _FUN_8c02a6f8\n.set _FUN_8c02a6f8, _FUN_8c02a6f8_def\n");
