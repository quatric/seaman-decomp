#include "../decls.h"
undefined4 s_Can_t_Find_File_s_015ce0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_10c [260];
  
  uVar2 = 0;
  while( true ) {
    if (*(uint *)(*(int *)(ar4 + 0x1c) + 4) <= uVar2) {
      return 1;
    }
    iVar1 = FUN_8c25b3a2(*(undefined4 *)(ar4 + 0x1c),ar5,ar6,ar7);
    if (iVar1 == -1) break;
    uVar2 = uVar2 + 1;
  }
  (*(code *)(&FUN_8c014334))
            (auStack_10c,ar5,ar6,ar7,(&DATA_8c12c550) + 0x115);
  (*(code *)(&report_error_message))
            (auStack_10c,(&DATA_8c12c550) + 0x12a,1,2);
  return 0;
}

__asm__(".globl _s_Can_t_Find_File_s_015ce0\n.set _s_Can_t_Find_File_s_015ce0, _s_Can_t_Find_File_s_015ce0_def\n");
