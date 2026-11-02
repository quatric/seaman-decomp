#include "../decls.h"
undefined4 FUN_8c20408e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  uVar1 = FUN_8c205020(&DAT_8c275400,&DAT_8c275404,ar6,ar7,in_r0);
  uVar1 = FUN_8c205020(&DAT_8c275414,&DAT_8c275418,ar6,ar7,uVar1);
  uVar1 = FUN_8c205020(&DAT_8c275408,&DAT_8c27540c,ar6,ar7,uVar1);
  FUN_8c205020(&DAT_8c27541c,&DAT_8c275420,ar6,ar7,uVar1);
  return 0;
}

__asm__(".globl _FUN_8c20408e\n.set _FUN_8c20408e, _FUN_8c20408e_def\n");
