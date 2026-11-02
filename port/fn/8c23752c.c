#include "../decls.h"
uint FUN_8c23752c_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  
  piVar1 = *(int **)(*DAT_8c277b04 + (ar5 & 0x1fff) * 0xc + 8);
  if ((*piVar1 != DAT_8c277b10) || (DAT_8c277b14 != piVar1[1])) {
    DAT_8c277b10 = *piVar1;
    DAT_8c277b14 = piVar1[1];
    _DAT_8c4ab240 = _DAT_8c4ab240 & 0xffffffc0 | piVar1[2] & 0x3fU;
    _DAT_8c4ab244 = piVar1[3];
    DAT_8c277b1c = (uint)piVar1[6] >> 0x10;
  }
  _DAT_8c4ab240 =
       _DAT_8c4ab240 & 0xfff800ff | (ar4 & 0xf000) << 3 | ar4 & 0xf00 | (ar5 & 0x2000) >> 1 |
       (ar5 & 0x4000) >> 1;
  return DAT_8c277b1c;
}

__asm__(".globl _FUN_8c23752c\n.set _FUN_8c23752c, _FUN_8c23752c_def\n");
