#include "../decls.h"
undefined4 FUN_8c01b0a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_ffffffe4;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar2 = (*(code *)(&file_load_to_buffer))
                      (0x8c3eb334,ar5,(&DATA_8c12fb18) + 0x11,auStack_c);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      (*(code *)(&FUN_8c01b144))
                (ar4,ar5,auStack_c[0],uStack_10,ar6,ar7,ar4,ar6,ar7,in_stack_ffffffe4);
      FUN_8c021234(0x8c3eb334,ar5,(&DATA_8c12fb18) + 0x11,1);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b0a8\n.set _FUN_8c01b0a8, _FUN_8c01b0a8_def\n");
