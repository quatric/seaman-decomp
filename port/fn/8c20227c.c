#include "../decls.h"
undefined4 FUN_8c20227c_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  if (((*ar4 != '\0') && (*ar4 != '\x03')) &&
     (ar4_00 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24)),
     *(char *)(ar4_00 + 4) == '\b')) {
    FUN_8c20213e(ar4_00,ar4,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c20227c\n.set _FUN_8c20227c, _FUN_8c20227c_def\n");
