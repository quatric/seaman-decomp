#include "../decls.h"
int FUN_8c11b666_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,ar7,ar7,(&FUN_8c11af7e),(&DATA_8c11494a),(&FUN_8c11b13e),
                     (int)0x1ec);
  if (iVar1 != 0) {
    iVar2 = (int)0x1a8;
    *(undefined **)(iVar2 + iVar1) = (&FUN_8c11346c);
    *(undefined4 *)(iVar2 + -4 + iVar1) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c11b666\n.set _FUN_8c11b666, _FUN_8c11b666_def\n");
