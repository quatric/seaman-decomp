#include "../decls.h"
int FUN_8c266694_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  char in_T;
  undefined4 in_PR;
  
  ar5_00 = 0;
  if (in_T == '\0') {
    if (*(int *)(ar4 + 4) != 1) {
      ar5_00 = 0x7000102;
    }
  }
  else {
    ar5_00 = 0x7000103;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266690,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266694\n.set _FUN_8c266694, _FUN_8c266694_def\n");
