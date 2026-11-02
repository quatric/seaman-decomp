#include "../decls.h"
undefined4 FUN_8c2563ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_fr1;
  undefined4 in_fr3;
  undefined4 in_fr5;
  undefined4 in_fr7;
  undefined4 in_fr9;
  undefined4 in_fr11;
  undefined4 in_fr13;
  undefined4 in_fr15;
  
  puVar1 = _DAT_8c4aa4bc;
  if (_DAT_8c4aa5a0 < _DAT_8c4aa59c) {
    _DAT_8c4aa5a0 = _DAT_8c4aa5a0 + 1;
    *_DAT_8c4aa4bc = ain0;
    _DAT_8c4aa4bc[8] = ain0;
    puVar2 = _DAT_8c4aa4bc + 0xf;
    _DAT_8c4aa4bc = _DAT_8c4aa4bc + 0x10;
    *puVar2 = in_fr15;
    puVar1[0xe] = in_fr13;
    puVar1[0xd] = in_fr11;
    puVar1[0xc] = in_fr9;
    puVar1[0xb] = in_fr7;
    puVar1[10] = in_fr5;
    puVar1[9] = in_fr3;
    puVar1[8] = in_fr1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c2563ac\n.set _FUN_8c2563ac, _FUN_8c2563ac_def\n");
