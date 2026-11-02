#include "../decls.h"
undefined4 FUN_8c0e983c_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0e9890(ar4,(int)*ar5,ar6,ar7);
  FUN_8c0e9888(ar4,(int)ar5[1],ar6,ar7);
  ar4[0x3d] = ar5[2];
  *ar4 = ar5[3];
  ar4[0x3b] = ar5[4];
  return 0x3b;
}

__asm__(".globl _FUN_8c0e983c\n.set _FUN_8c0e983c, _FUN_8c0e983c_def\n");
