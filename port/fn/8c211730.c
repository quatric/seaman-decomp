#include "../decls.h"
uint FUN_8c211730_def(int ar4,int ar5,int ar6,int ar7,int s0)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  int aiStack_28 [5];
  
  puVar1 = 0x8c4aa014;
  for (piVar3 = aiStack_28; piVar3 < &stack0xffffffec; piVar3 = piVar3 + 1) {
    *piVar3 = 0;
  }
  if (*(undefined4 *)0x8c4a9ef0 == 1) {
    if (*(undefined4 *)0x8c4a9fcc == 0x20) {
      aiStack_28[0] = 1;
    }
    if (*(undefined4 *)0x8c4a9fcc == 0x21) {
      aiStack_28[1] = 1;
    }
    if (*(undefined4 *)0x8c4a9fcc == 0x22) {
      aiStack_28[2] = 1;
    }
    if (*(undefined4 *)0x8c4a9fcc == 0x23) {
      aiStack_28[3] = 1;
    }
    if (*(undefined4 *)0x8c4a9fcc == 0x24) {
      aiStack_28[4] = 1;
    }
  }
  bVar4 = ar4 + aiStack_28[0] != 0;
  *(undefined4 *)0x8c4aa014 = 0;
  if (bVar4) {
    *puVar1 = *puVar1 | 1;
  }
  uVar2 = (uint)bVar4;
  if (ar5 + aiStack_28[1] != 0) {
    *(undefined4 *)0x8c4aa014 = *(undefined4 *)0x8c4aa014 | 2;
    uVar2 = uVar2 + 1;
  }
  if (ar6 + aiStack_28[2] != 0) {
    *(undefined4 *)0x8c4aa014 = *(undefined4 *)0x8c4aa014 | 4;
    uVar2 = uVar2 + 1;
  }
  if (ar7 + aiStack_28[3] != 0) {
    *(undefined4 *)0x8c4aa014 = *(undefined4 *)0x8c4aa014 | 8;
    uVar2 = uVar2 + 1;
  }
  if (s0 + aiStack_28[4] != 0) {
    *(undefined4 *)0x8c4aa014 = *(undefined4 *)0x8c4aa014 | 0x10;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c211730\n.set _FUN_8c211730, _FUN_8c211730_def\n");
