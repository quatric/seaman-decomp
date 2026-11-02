#include "../decls.h"
int FUN_8c02c518_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = -1;
  iVar2 = -1;
  for (iVar4 = 0; iVar4 < 6; iVar4 = iVar4 + 1) {
    uVar1 = FUN_8c025f68(iVar4 * 0x18 + ar4,ar5,ar6,ar7);
    if (((char)uVar1 == '\x01') && (iVar4 != 5)) {
      uVar1 = FUN_8c02c5ac(iVar4 * 0x18 + ar4,ar5,ar6,ar7);
      if (cVar3 < (char)uVar1) {
        iVar2 = iVar4;
        cVar3 = (char)uVar1;
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c02c518\n.set _FUN_8c02c518, _FUN_8c02c518_def\n");
