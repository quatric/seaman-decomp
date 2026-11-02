#include "../decls.h"
undefined4 input_mask_test_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar6 == 0) {
    uVar1 = input_mask_test_word(ar4,ar5,ar4 + 0xa528,ar7);
  }
  else if (ar6 == 1) {
    uVar1 = input_mask_test_word(ar4,ar5,ar4 + 0xa52c,ar7);
  }
  else if (ar6 == 2) {
    uVar1 = input_mask_test_word(ar4,ar5,ar4 + 0xa530,ar7);
  }
  else if (ar6 == 3) {
    uVar1 = input_mask_test_word(ar4,ar5,ar4 + 0xa534,ar7);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _input_mask_test\n.set _input_mask_test, _input_mask_test_def\n");
