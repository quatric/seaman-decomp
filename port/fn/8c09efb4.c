#include "../decls.h"
undefined4 FUN_8c09efb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(ar4 + 0xfd0) != 0) {
    _DAT_8c284d80 = _DAT_8c284d80 + -1;
    *(undefined4 *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
    *(undefined4 *)(&DAT_8c13aaf0 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
    FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,1,ar6,ar7);
    FUN_8c2140c6(*(int *)(ar4 + 0xfd0) + 1,1,ar6,ar7);
    uVar1 = 0xfd0;
    *(undefined4 *)(ar4 + 0xfd0) = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c09efb4\n.set _FUN_8c09efb4, _FUN_8c09efb4_def\n");
