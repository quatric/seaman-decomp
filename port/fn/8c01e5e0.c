#include "../decls.h"
undefined4 input_device_select_and_reset_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  
  auStack_24[0] = *(undefined4 *)(&DATA_8c12fbc8);
  auStack_24[1] = *(undefined4 *)((&DATA_8c12fbc8) + 4);
  auStack_24[2] = *(undefined4 *)((&DATA_8c12fbc8) + 8);
  auStack_24[3] = *(undefined4 *)((&DATA_8c12fbc8) + 0xc);
  uStack_14 = *(undefined4 *)((&DATA_8c12fbc8) + 0x10);
  if (*(int *)(0xa510 + ar4) == 0) {
    return *(undefined4 *)(0xa510 + ar4);
  }
  if (*(int *)(0xa510 + ar4) == 1) {
    *(undefined4 *)(0xa524 + ar4) = *(undefined4 *)(&DATA_8c12fbc8);
    *(undefined4 *)(0xa528 + ar4) = 0;
    *(undefined4 *)(0xa52c + ar4) = 0;
    *(undefined4 *)(0xa530 + ar4) = 0;
    *(undefined4 *)(0xa534 + ar4) = 0;
    *(undefined4 *)(0xa538 + ar4) = 0;
    *(undefined4 *)(0xa53c + ar4) = 0;
    *(undefined4 *)(0xa540 + ar4) = 0;
    if (ar5 == 0) {
      for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
        iVar1 = FUN_8c1f62cc(auStack_24[iVar3],ar5,ar6,ar7);
        iVar2 = FUN_8c1f6338(auStack_24[iVar3],ar5,ar6,ar7);
        if ((iVar2 == 0) && ((**(uint **)(iVar1 + 0x30) & 1) != 0)) break;
      }
      iVar1 = 0;
      if (iVar3 != 0) {
        *(undefined4 *)(0xa524 + ar4) = auStack_24[0];
        return 1;
      }
    }
    else {
      for (iVar1 = 3; -1 < iVar1; iVar1 = iVar1 + -1) {
        iVar3 = FUN_8c1f62cc(auStack_24[iVar1],ar5,ar6,ar7);
        iVar2 = FUN_8c1f6338(auStack_24[iVar1],ar5,ar6,ar7);
        if ((iVar2 == 0) && ((**(uint **)(iVar3 + 0x30) & 1) != 0)) break;
      }
      if (iVar1 != 3) {
        *(undefined4 *)(0xa524 + ar4) = auStack_24[3];
        return 1;
      }
    }
    *(undefined4 *)(0xa524 + ar4) = auStack_24[iVar1];
    *(undefined4 *)(0xa510 + ar4) = 5;
  }
  *(undefined2 *)(0xa546 + ar4) = 0;
  *(undefined2 *)(0xa544 + ar4) = 0;
  input_update_state_gate(ar4,ar5,ar6,ar7);
  return *(undefined4 *)(0xa510 + ar4);
}

__asm__(".globl _input_device_select_and_reset\n.set _input_device_select_and_reset, _input_device_select_and_reset_def\n");
