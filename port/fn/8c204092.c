#include "../decls.h"
undefined4 FUN_8c204092_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int unaff_r14;
  undefined4 in_PR;
  
  FUN_8c205020(unaff_r14,unaff_r14 + 4,ar6,ar7,in_PR);
  FUN_8c205020(&DAT_8c275414,&DAT_8c275418,ar6,ar7,in_PR);
  FUN_8c205020(unaff_r14 + 8,unaff_r14 + 0xc,ar6,ar7,in_PR);
  FUN_8c205020(&DAT_8c27541c,&DAT_8c275420,ar6,ar7,in_PR);
  return 0;
}

__asm__(".globl _FUN_8c204092\n.set _FUN_8c204092, _FUN_8c204092_def\n");
