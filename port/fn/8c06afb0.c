#include "../decls.h"
int FUN_8c06afb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 ar5_00;
  int iVar4;
  
  ar5_00 = ar5;
  uVar1 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
  if (*(short *)(0x264 + ar4) == (short)uVar1) {
    uVar2 = FUN_8c02602c(ar5,ar5_00,ar6,ar7);
    iVar4 = (uVar2 & 0xffff) - (int)*(short *)(0x266 + ar4);
  }
  else {
    uVar2 = FUN_8c02602c(ar5,ar5_00,ar6,ar7);
    uVar3 = FUN_8c028ee4(ar5,ar5_00,ar6,ar7);
    iVar4 = (0x3840 - *(short *)(0x266 + ar4)) +
            (((uVar3 & 0xffff) - (uint)*(ushort *)(0x264 + ar4)) + -1) * 0x3840 +
            (uVar2 & 0xffff);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c06afb0\n.set _FUN_8c06afb0, _FUN_8c06afb0_def\n");
