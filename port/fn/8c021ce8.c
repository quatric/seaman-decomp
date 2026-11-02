#include "../decls.h"
int pack_release_entry_handle_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    *(undefined4 *)((int)ar4 + 0x9ec98 + ar5 * 8) = 0xffffffff;
    FUN_8c02296c(ar4 + 1,ar5,ar6,ar7);
    iVar1 = handle_slot_free(ar4 + 1,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _pack_release_entry_handle\n.set _pack_release_entry_handle, _pack_release_entry_handle_def\n");
