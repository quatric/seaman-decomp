#include "../decls.h"
undefined4 file_load_to_buffer_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c021170(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _file_load_to_buffer\n.set _file_load_to_buffer, _file_load_to_buffer_def\n");
