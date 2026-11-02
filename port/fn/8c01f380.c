#include "../decls.h"
undefined4 input_get_word_a538_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa538 + ar4);
}

__asm__(".globl _input_get_word_a538\n.set _input_get_word_a538, _input_get_word_a538_def\n");
