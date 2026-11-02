#include "../decls.h"
undefined4 FUN_8c1fda04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 in_PR;
  
  ar4_00 = &DAT_8c4783e0;
  ar6_00 = 0xa40;
  ar5_00 = 0;
  memset(&DAT_8c4783e0,0,0xa40,ar7);
  noop_1fd004(ar4_00,ar5_00,ar6_00,ar7,in_PR);
  return 0;
}

__asm__(".globl _FUN_8c1fda04\n.set _FUN_8c1fda04, _FUN_8c1fda04_def\n");
