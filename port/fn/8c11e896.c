#include "../decls.h"
int FUN_8c11e896_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = (**(code **)(ar4 + 0x14))(*(undefined4 *)(ar5 + 4),ar4 + 8,ar6,ar7);
  if (ar4_00 != 0) {
    memmove(ar4_00,ar5,*(undefined4 *)(ar5 + 4),ar7);
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c11e896\n.set _FUN_8c11e896, _FUN_8c11e896_def\n");
