#include "../decls.h"
int FUN_8c2665b0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    aica_ram_2686d4(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x14,
                    &stack0xfffffff0,ar6,ar7);
    *ar5 = in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2665b0,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2665b0\n.set _FUN_8c2665b0, _FUN_8c2665b0_def\n");
