#include "../decls.h"
undefined4 handle_slot_free_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  
  piVar1 = (int *)(ar4 + ar5 * 0x208e0 + 0x2d150);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return 0;
}

__asm__(".globl _handle_slot_free\n.set _handle_slot_free, _handle_slot_free_def\n");
