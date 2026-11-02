#include "../decls.h"
undefined4 FUN_8c09dde4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (*(int *)(ar4 + 0xfd0) != 0) {
    ar5 = 1;
    FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,1,ar6,ar7);
  }
  FUN_8c2219de(2,ar5,ar6,ar7,in_PR);
  FUN_8c2219de(3,ar5,ar6,ar7,in_PR);
  FUN_8c2219de(4,ar5,ar6,ar7,in_PR);
  FUN_8c21418e(2,ar5,ar6,ar7,in_PR);
  FUN_8c21418e(3,ar5,ar6,ar7,in_PR);
  uVar1 = FUN_8c21418e(4,ar5,ar6,ar7,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c09dde4\n.set _FUN_8c09dde4, _FUN_8c09dde4_def\n");
