#include "../decls.h"
uint FUN_8c23732a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x44;
  puVar1 = (undefined4 *)(DAT_8c277b08 + iVar2);
  DAT_8c277b10 = *puVar1;
  DAT_8c277b14 = puVar1[1];
  _DAT_8c4ab240 = _DAT_8c4ab240 & 0xffffffc0 | puVar1[2] & 0x3f;
  _DAT_8c4ab244 = *(undefined4 *)(DAT_8c277b08 + iVar2 + 0xc);
  DAT_8c277b1c = *(uint *)(iVar2 + DAT_8c277b08 + 0x18) >> 0x10;
  return DAT_8c277b1c;
}

__asm__(".globl _FUN_8c23732a\n.set _FUN_8c23732a, _FUN_8c23732a_def\n");
