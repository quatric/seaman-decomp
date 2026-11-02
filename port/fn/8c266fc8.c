#include "../decls.h"
int FUN_8c266fc8_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined1 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                 0x410,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266fc8,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266fc8\n.set _FUN_8c266fc8, _FUN_8c266fc8_def\n");
