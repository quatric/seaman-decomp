#include "../decls.h"
uint s_Failed_s_015312_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 auStack_108 [260];
  
  iVar1 = FUN_8c256670(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar1 == -1) {
    (*(code *)(&FUN_8c014334))
              (auStack_108,ar5,ar6,ar7,(&DATA_8c12c550) + 0x7e);
    (*(code *)(&report_error_message))
              (auStack_108,(&DATA_8c12c550) + 0x8a,1,2);
  }
  return (uint)(iVar1 == -1);
}

__asm__(".globl _s_Failed_s_015312\n.set _s_Failed_s_015312, _s_Failed_s_015312_def\n");
