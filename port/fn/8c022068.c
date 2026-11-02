#include "../decls.h"
undefined4 pack_find_by_name_buffered_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*ar4 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined1 *)(ar4 + 0x27b05) = 0;
    strcpy(ar4 + 0x27b05,ar5,ar6,ar7,ar5);
    uVar1 = pack_find_entry_by_name(ar4,ar4 + 0x27b05,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _pack_find_by_name_buffered\n.set _pack_find_by_name_buffered, _pack_find_by_name_buffered_def\n");
