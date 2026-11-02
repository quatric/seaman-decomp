#include "../decls.h"
int FUN_8c266288_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  uint in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c26870c(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8),&stack0xfffffff0,ar6,ar7
                );
    *ar5 = in_stack_fffffff0 & 0xff;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266288,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266288\n.set _FUN_8c266288, _FUN_8c266288_def\n");
