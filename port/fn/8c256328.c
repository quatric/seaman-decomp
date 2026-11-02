#include "../decls.h"
undefined4 FUN_8c256328_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 *puVar1;
  undefined4 in_fr1;
  undefined4 in_fr3;
  undefined4 in_fr5;
  undefined4 in_fr7;
  undefined4 in_fr9;
  undefined4 in_fr11;
  undefined4 in_fr13;
  undefined4 in_fr15;
  
  puVar1 = _DAT_8c4aa4bc;
  if (_DAT_8c4aa59c <= _DAT_8c4aa5a0) {
    return 0;
  }
  _DAT_8c4aa5a0 = _DAT_8c4aa5a0 + 1;
  *_DAT_8c4aa4bc = ain0;
  _DAT_8c4aa4bc[8] = ain0;
  _DAT_8c4aa4bc[0xf] = in_fr15;
  _DAT_8c4aa4bc[0xe] = in_fr13;
  _DAT_8c4aa4bc[0xd] = in_fr11;
  _DAT_8c4aa4bc[0xc] = in_fr9;
  _DAT_8c4aa4bc[0xb] = in_fr7;
  _DAT_8c4aa4bc[10] = in_fr5;
  _DAT_8c4aa4bc[9] = in_fr3;
  _DAT_8c4aa4bc[8] = in_fr1;
  _DAT_8c4aa4bc = _DAT_8c4aa4bc + 0x18;
  if (ar4 != 0) {
    return 1;
  }
  *_DAT_8c4aa4bc = ain0;
  puVar1[0x20] = ain0;
  puVar1[0x27] = in_fr15;
  puVar1[0x26] = in_fr13;
  puVar1[0x25] = in_fr11;
  puVar1[0x24] = in_fr9;
  puVar1[0x23] = in_fr7;
  puVar1[0x22] = in_fr5;
  puVar1[0x21] = in_fr3;
  puVar1[0x20] = in_fr1;
  return 1;
}

__asm__(".globl _FUN_8c256328\n.set _FUN_8c256328, _FUN_8c256328_def\n");
