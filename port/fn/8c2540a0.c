#include "../decls.h"
uint FUN_8c2540a0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float fVar1;
  float in_fr4;
  
  if (ar4 == (undefined4 *)0x0) {
    _DAT_8c4aad80 = 0;
    _DAT_8c4ab0c0 = 0;
    _DAT_8c4aad82 = 0;
  }
  else {
    fVar1 = (float)(int)ar4[1];
    if ((int)ar4[1] < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if (fVar1 <= in_fr4) {
      return ain0;
    }
    _DAT_8c4aad80 = *(ushort *)((int)ar4 + 10) & 0xff3f;
    _DAT_8c4ab0c0 = (ushort)((*(ushort *)((int)ar4 + 10) & 0xc0) != 0);
    _DAT_8c4aad82 = *(ushort *)(ar4 + 2);
    _DAT_8c4aad48 = *ar4;
    _DAT_8c4aad58 = ar4[1];
  }
  _DAT_8c4aad5c = 0;
  _DAT_8c4aad60 = 0;
  if ((_DAT_8c4aad82 & 1) == 0) {
    _DAT_8c4aad34 = (code *)&LAB_8c2559bc;
  }
  else {
    _DAT_8c4aad34 = FUN_8c254d1a;
  }
  if ((_DAT_8c4aad82 & 2) == 0) {
    _DAT_8c4aad38 = (code *)&LAB_8c2559da;
    _DAT_8c4aad40 = (code *)&LAB_8c2559f4;
  }
  else {
    _DAT_8c4aad38 = FUN_8c254e80;
    _DAT_8c4aad40 = FUN_8c254f1e;
  }
  if ((_DAT_8c4aad82 & 4) == 0) {
    _DAT_8c4aad3c = (code *)&LAB_8c255a0e;
  }
  else {
    _DAT_8c4aad3c = FUN_8c254db0;
  }
  _DAT_8c4aad54 = in_fr4;
  return (uint)_DAT_8c4aad82;
}

__asm__(".globl _FUN_8c2540a0\n.set _FUN_8c2540a0, _FUN_8c2540a0_def\n");
