#include "../decls.h"
undefined4 list_node_next_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}

__asm__(".globl _list_node_next\n.set _list_node_next, _list_node_next_def\n");
