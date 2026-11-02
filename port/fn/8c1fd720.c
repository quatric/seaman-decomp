#include "../decls.h"
int FUN_8c1fd720_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(undefined4 *)0x8c4783dc;
  if (ar4 == 0xf) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  else {
    if (ar4 == 0x21) {
      uVar1 = 1;
    }
    else {
      if (ar4 == 0x41) {
        *(undefined4 *)(iVar2 + 4) = 2;
        return 0;
      }
      if (ar4 != 0x7a) {
        return (int)(int)0xffffff00;
      }
      uVar1 = 3;
    }
    *(undefined4 *)(iVar2 + 4) = uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1fd720\n.set _FUN_8c1fd720, _FUN_8c1fd720_def\n");
