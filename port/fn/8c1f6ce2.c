#include "../decls.h"
undefined4 s_SEGA_FH01_OK_1f6ce4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 in_PR;
  
  ar5_00 = 0xff;
  ar6_00 = 0x3c;
  memset(ar5,0xff,0x3c,ar7);
  if (ar4 == 0) {
    ar4_00 = "SEGA_FH01_OK";
  }
  else if (ar4 == 1) {
    ar4_00 = "SEGA_FH01_EXIST";
  }
  else if (ar4 == 2) {
    ar4_00 = "SEGA_FH01_PROCESS1";
  }
  else {
    if (ar4 != 3) {
      return 0xffffffff;
    }
    ar4_00 = "SEGA_FH01_PROCESS2";
  }
  FUN_8c010998(ar4_00,ar5_00,ar6_00,ar7,ar4,in_PR);
  iVar1 = FUN_8c1f884c(0x3fc,ar5,ar6_00,ar7);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  return iVar1;
}

__asm__(".globl _s_SEGA_FH01_OK_1f6ce4\n.set _s_SEGA_FH01_OK_1f6ce4, _s_SEGA_FH01_OK_1f6ce4_def\n");
