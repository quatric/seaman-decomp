#include "../decls.h"
undefined4 aica_ram_2684b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  aica_reg_265278(ar4,ar5,ar6,ar7);
  FUN_8c1f9610((&DATA_8c278598),0xa0800000,4,0x80000,0,1);
  return 0;
}

__asm__(".globl _aica_ram_2684b8\n.set _aica_ram_2684b8, _aica_ram_2684b8_def\n");
