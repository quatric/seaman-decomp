#include "../decls.h"
undefined4 FUN_8c2219ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  uint uVar2;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  iVar1 = (ar4 + -1) * 0xc;
  *(undefined4 *)(iVar1 + -0x73b3f180) = in_fr4;
  *(undefined4 *)(iVar1 + -0x73b3f17c) = in_fr5;
  *(undefined4 *)(iVar1 + -0x73b3f178) = in_fr6;
  uVar2 = (ar4 + -1) * 3;
  if ((int)uVar2 < 0) {
    uVar2 = 2 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar2 = 2 << (uVar2 & 0x1f);
  }
  _DAT_8c4c0ed0 = uVar2 | _DAT_8c4c0ed0;
  return ain0;
}

__asm__(".globl _FUN_8c2219ac\n.set _FUN_8c2219ac, _FUN_8c2219ac_def\n");
