#include "../decls.h"
undefined4 s_CItem_BeNotReference_0f4c7a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(int *)(ar4 + 0x70) = *(int *)(ar4 + 0x70) + -1;
  if (*(int *)(ar4 + 0x70) < 0) {
    (*(code *)(&report_error_message))
              ((&DATA_8c1401e4) + 0x19,
               (&DATA_8c1401e4) + 0x36,1,2);
    *(undefined4 *)(ar4 + 0x70) = 0;
  }
  return *(undefined4 *)(ar4 + 0x70);
}

__asm__(".globl _s_CItem_BeNotReference_0f4c7a\n.set _s_CItem_BeNotReference_0f4c7a, _s_CItem_BeNotReference_0f4c7a_def\n");
