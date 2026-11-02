#include "../decls.h"
undefined4
pack_open_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 uVar2;
  
  *ar4 = 0;
  iVar1 = FUN_8c0221c8(ar4 + 1,ar5,ar6,s4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)(&file_load_to_buffer))
                      (0x8c3eb334,ar7,(&DATA_8c12fc50) + 0x34,
                       (int)ar4 + 0x9ec10);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = (*(code *)(&file_load_to_buffer))
                        (0x8c3eb334,s0,(&DATA_8c12fc50) + 0x34,
                         (int)ar4 + 0x9ec0c);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        *ar4 = 1;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _pack_open\n.set _pack_open, _pack_open_def\n");
