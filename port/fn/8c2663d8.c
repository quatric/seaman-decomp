#include "../decls.h"
undefined4 FUN_8c2663d8_def(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

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
    aica_ram_268618(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 8,&stack0xfffffff0,
                    ar6,ar7);
    *ar5 = (short)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2663d8,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return 0;
}

__asm__(".globl _FUN_8c2663d8\n.set _FUN_8c2663d8, _FUN_8c2663d8_def\n");
