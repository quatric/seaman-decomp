#include "../decls.h"
undefined4 halt_baddata_wrap_1b939a_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r2;
  
  if (in_r2 <= *(int *)(ar5 + 0x2c)) {
                    
    halt_baddata();
  }
  FUN_8c1b90e4(ar4,ar5,ar6,(int)(*(short *)0x8c1b9432));
                    
  halt_baddata();
}

__asm__(".globl _halt_baddata_wrap_1b939a\n.set _halt_baddata_wrap_1b939a, _halt_baddata_wrap_1b939a_def\n");
