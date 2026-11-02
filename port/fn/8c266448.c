#include "../decls.h"
int FUN_8c266448_def(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 4,&stack0xfffffff0,
                    ar6,ar7);
    iVar1 = in_stack_fffffff0;
    if (in_stack_fffffff0 < 0) {
      iVar1 = in_stack_fffffff0 + 3;
    }
    *ar5 = (short)(iVar1 >> 2);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266448,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266448\n.set _FUN_8c266448, _FUN_8c266448_def\n");
