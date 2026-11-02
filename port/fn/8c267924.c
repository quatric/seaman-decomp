#include "../decls.h"
int FUN_8c267924_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  int in_r0;
  int ar7_00;
  int ar5_00;
  
  ar6_00 = DAT_8c2784c0;
  ar7_00 = 0xd000001;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    ar7_00 = (int)*(char *)(ar4 + 1);
    if ((char)ar5 == '\x7f') {
      in_r0 = 0;
    }
    else {
      in_r0 = ar5 * -2 + -1;
    }
    *(char *)((short)*(char *)(ar4 + 1) * 0x2c + DAT_8c2784c0 + 0xae) = (char)in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267924,ar5_00,ar6_00,ar7_00,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267924\n.set _FUN_8c267924, _FUN_8c267924_def\n");
