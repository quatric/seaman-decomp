#include "../decls.h"
undefined4 handle_slot_alloc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (2 < iVar2) {
      return 0xffffffff;
    }
    piVar1 = (int *)(ar4 + iVar2 * 0x208e0 + 0x2d150);
    if (*piVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  *piVar1 = 1;
  return iVar2;
}

__asm__(".globl _handle_slot_alloc\n.set _handle_slot_alloc, _handle_slot_alloc_def\n");
