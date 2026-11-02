#include "../decls.h"
int FUN_8c267926_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int *in_r3;
  int ar6_00;
  int ar7_00;
  int ar5_00;
  undefined4 in_PR;
  
  ar6_00 = *in_r3;
  ar7_00 = 0xd000001;
  ar5_00 = 0;
  if (ar6_00 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6_00 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    ar7_00 = (int)*(char *)(ar4 + 1);
    if ((char)ar5 == '\x7f') {
      cVar1 = '\0';
    }
    else {
      cVar1 = (char)ar5 * -2 + -1;
    }
    *(char *)((short)*(char *)(ar4 + 1) * 0x2c + ar6_00 + 0xae) = cVar1;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267924,ar5_00,ar6_00,ar7_00,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267926\n.set _FUN_8c267926, _FUN_8c267926_def\n");
