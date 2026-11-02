#include "../decls.h"
int FUN_8c25a4a6_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,int *ar7,int ain0)

{
  int iVar1;
  code *in_r2;
  uint uVar2;
  
  *ar4 = ar5;
  ar4[1] = ar5;
  uVar2 = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  ar4[4] = 0;
  *(undefined2 *)(ain0 + (int)ar4) = 0;
  iVar1 = (*in_r2)((int)ar4 - *ar7,0,ar6,ar7);
  if ((0 < _DAT_8c4aa5a4) && (iVar1 == _DAT_8c4aa5a4 + -1)) {
    while ((0 < _DAT_8c4aa5a4 &&
           (iVar1 = *(int *)((_DAT_8c4aa5a4 + -1) * 0x44 + DAT_8c277b08), iVar1 == -1))) {
      _DAT_8c4aa5a4 = _DAT_8c4aa5a4 + -1;
    }
  }
  for (; (uVar2 < DAT_8c277b0c && (iVar1 = *(int *)(uVar2 * 0x44 + *ar7), iVar1 != -1));
      uVar2 = uVar2 + 1) {
  }
  DAT_8c277cb0 = uVar2;
  return iVar1;
}

__asm__(".globl _FUN_8c25a4a6\n.set _FUN_8c25a4a6, _FUN_8c25a4a6_def\n");
