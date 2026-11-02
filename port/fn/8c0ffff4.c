#include "../decls.h"
uint FUN_8c0ffff4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&get_field_a528_100030))
                    (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  return (uint)((uVar1 & 0x60e) == 0x60e);
}

__asm__(".globl _FUN_8c0ffff4\n.set _FUN_8c0ffff4, _FUN_8c0ffff4_def\n");
