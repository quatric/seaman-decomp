#include "../decls.h"
undefined4 FUN_8c119706_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iStack_10 = FUN_8c11b5a0(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1b4) == 0) {
    iStack_18 = 0;
    iStack_14 = *(int *)(ar4 + 300) + 1;
    iStack_24 = (int)*(short *)(ar4 + 0x1b0) + *(int *)(ar4 + 0x1ac);
  }
  else {
    iStack_14 = *(int *)(iStack_10 + 0x14);
    iVar3 = iStack_10;
    for (iVar2 = iStack_10; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if ((*(uint *)(ar4 + 0x1b8) == (*(uint *)(iVar2 + 0x10) & 0xffff)) &&
         (*(int *)(iVar2 + 4) != 0)) {
        iVar3 = iVar2;
      }
    }
    iStack_18 = *(int *)(iVar3 + 0x14);
    iStack_24 = *(int *)(iStack_10 + 0xc) - *(int *)(iVar3 + 0xc);
  }
  iStack_20 = iStack_14 - iStack_18;
  fStack_1c = (float)iStack_24;
  if (iStack_24 < 0) {
    fStack_1c = fStack_1c + 4.2949673e+09;
  }
  fVar4 = (float)iStack_20;
  if (iStack_20 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fStack_1c = fStack_1c / fVar4;
  iStack_28 = (int)*(short *)(ar4 + 0x1b0) + *(int *)(ar4 + 0x1ac);
  uVar1 = FUN_8c120348(ar4,0xc,&iStack_28,2);
  return uVar1;
}

__asm__(".globl _FUN_8c119706\n.set _FUN_8c119706, _FUN_8c119706_def\n");
