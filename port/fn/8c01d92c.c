#include "../decls.h"
undefined4 s_SPEECH_01d92e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0x5638 + *(int *)(0x5630 + ar4) * 0x50 + ar4) = 1;
  FUN_8c01d9ac(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)(&asr_register_strings))
                    (ar4,(&DATA_8c12fb7c) + 0x1d,
                     (&DATA_8c12fb7c) + 0x26,ar7);
  return uVar1;
}

__asm__(".globl _s_SPEECH_01d92e\n.set _s_SPEECH_01d92e, _s_SPEECH_01d92e_def\n");
