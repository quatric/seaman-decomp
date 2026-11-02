#include "../decls.h"
uint FUN_8c022494_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 *ar7_00;
  undefined4 auStack_10 [2];
  
  ar7_00 = auStack_10;
  ar6_00 = ar6;
  iVar1 = file_load_to_buffer(0x8c3eb334,ar5,ar6,ar7_00);
  if (iVar1 != 0) {
    FUN_8c022504(ar4,auStack_10[0],ar6_00,ar7_00);
    FUN_8c021234(0x8c3eb334,ar5,ar6,1);
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c022494\n.set _FUN_8c022494, _FUN_8c022494_def\n");
