#include "../decls.h"
undefined4 FUN_8c11f5d2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 a4;
  int iVar4;
  
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 != 0) {
    return 1;
  }
  sVar1 = *(short *)(ar4 + 0x3e);
  if (((sVar1 != 6) && (sVar1 != 8)) && (sVar1 != 9)) {
    uVar3 = FUN_8c1204c4(ar4 + 0x48,7,ar6,ar7);
    return uVar3 & 0xff;
  }
  uVar3 = FUN_8c121cc0(ar4,ar5,ar6,ar7);
  if (*(int *)(0x148 + ar4) != 4) {
    iVar2 = (int)0x148;
    iVar4 = (int)0xf4;
    a4 = *(undefined4 *)(iVar2 + ar4);
    *(undefined4 *)(iVar2 + ar4) = 4;
    uVar3 = (**(code **)(iVar2 + -0x7c + ar4))(a4,iVar4 + ar4,ar6,ar7);
  }
  return uVar3 & 0xff;
}

__asm__(".globl _FUN_8c11f5d2\n.set _FUN_8c11f5d2, _FUN_8c11f5d2_def\n");
