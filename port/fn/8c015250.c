#include "../decls.h"
undefined4 s_Failed_to_set_texture_s_015252_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_108 [260];
  
  iVar1 = FUN_8c25b3ec(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar1 == -1) {
    (*(code *)(&FUN_8c014334))
              (auStack_108,ar5,ar6,ar7,(&DATA_8c12c550) + 0x2a);
    (*(code *)(&report_error_message))
              (auStack_108,(&DATA_8c12c550) + 0x45,1,2);
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_8c2377e4(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    if (iVar1 == -1) {
      (*(code *)(&FUN_8c014334))
                (auStack_108,ar5,ar6,ar7,(&DATA_8c12c550) + 0x5f);
      (*(code *)(&report_error_message))
                (auStack_108,(&DATA_8c12c550) + 0x45,1,2);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl _s_Failed_to_set_texture_s_015252\n.set _s_Failed_to_set_texture_s_015252, _s_Failed_to_set_texture_s_015252_def\n");
