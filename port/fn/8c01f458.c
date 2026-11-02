#include "../decls.h"
undefined4 input_mask_test_word_def(undefined4 ar4,uint ar5,uint *ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (0x80 < ar5) {
    if (0x400 < ar5) {
      uVar1 = 0x20000;
      if (ar5 <= 0x10000) {
        uVar1 = 0x10000;
      }
    }
    else {
      uVar1 = 0x200;
      if (0x400 <= ar5) goto LAB_8c01f4ea;
    }
    if (uVar1 != ar5) {
      return 0xffffffff;
    }
  }
  else if (ar5 < 0x80) {
    if (ar5 < 0x11) {
      if (ar5 < 0x10) {
        if (8 < ar5) {
          return 0xffffffff;
        }
        if (ar5 < 2) {
          return 0xffffffff;
        }
        if (((ar5 != 2) && (ar5 != 4)) && (ar5 != 8)) {
          return 0xffffffff;
        }
      }
    }
    else if (ar5 < 0x21) {
      if (ar5 != 0x20) {
        return 0xffffffff;
      }
    }
    else if (ar5 != 0x40) {
      return 0xffffffff;
    }
  }
LAB_8c01f4ea:
  if ((*ar6 & ar5) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _input_mask_test_word\n.set _input_mask_test_word, _input_mask_test_word_def\n");
