#include "../decls.h"
int pack_acquire_entry_handle_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  int iVar1;
  
  if (*ar4 == 0) {
    ar5_00 = -1;
  }
  else {
    ar5_00 = handle_slot_alloc(ar4 + 1,ar5,ar6,ar7);
    if (ar5_00 == -1) {
      ar5_00 = -1;
    }
    else {
      iVar1 = pack_find_entry_by_name(ar4,ar5,ar6,ar7);
      if (iVar1 == -1) {
        handle_slot_free(ar4 + 1,ar5_00,ar6,ar7);
        ar5_00 = -1;
      }
      else {
        *(int *)((int)ar4 + 0x9ec98 + ar5_00 * 8) = ar5_00;
        *(int *)((int)ar4 + 0x9ec9c + ar5_00 * 8) = iVar1;
      }
    }
  }
  return ar5_00;
}

__asm__(".globl _pack_acquire_entry_handle\n.set _pack_acquire_entry_handle, _pack_acquire_entry_handle_def\n");
