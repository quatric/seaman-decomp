#include "../decls.h"
undefined4 FUN_8c02ce58_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_8c02ce4c(ar4,*ar5,ar6,ar7);
  FUN_8c02ce40(ar4,ar5[1],ar6,ar7);
  FUN_8c02ce34(ar4,ar5[2],ar6,ar7);
  FUN_8c02ce28(ar4,ar5[3],ar6,ar7);
  FUN_8c028edc(ar4 + 0xa8,ar5[4],ar6,ar7,uVar1);
  FUN_8c028ed4(ar4 + 0xa8,ar5[5],ar6,ar7,uVar1);
  FUN_8c02cbd4(ar4 + 0xa8,ar5[6],ar6,ar7,uVar1);
  FUN_8c02bd68(ar4 + 0xa8,(int)*(short *)(ar5 + 7),ar6,ar7);
  FUN_8c025fbc(ar4 + 0xa8,(int)*(short *)((int)ar5 + 0x1e),ar6,ar7);
  uVar1 = FUN_8c02cb84(ar4 + 0xa8,ar5[8],ar6,ar7,uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c02ce58\n.set _FUN_8c02ce58, _FUN_8c02ce58_def\n");
