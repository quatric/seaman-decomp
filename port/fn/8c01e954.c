#include "../decls.h"
undefined4 input_poll_device_state_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1f62cc(*(undefined4 *)(0xa524 + ar4),ar5,ar6,ar7);
  if ((**(uint **)(iVar1 + 0x30) & 1) == 0) {
    *(undefined4 *)(0xa518 + ar4) = 10;
    if (*(int *)(0xa51c + ar4) < 1) {
      *(undefined4 *)(0xa51c + ar4) = 0;
      *(undefined4 *)(0xa510 + ar4) = 1;
      input_update_state_gate(ar4,ar5,ar6,ar7);
      *(undefined4 *)(0xa514 + ar4) = *(undefined4 *)(0xa510 + ar4);
      uVar2 = *(undefined4 *)(0xa510 + ar4);
    }
    else {
      *(int *)(0xa51c + ar4) = *(int *)(0xa51c + ar4) + -1;
      *(undefined4 *)(0xa510 + ar4) = 2;
      uVar2 = *(undefined4 *)(0xa510 + ar4);
    }
  }
  else {
    *(undefined4 *)(0xa540 + ar4) = 0;
    *(undefined4 *)(0xa528 + ar4) = *(undefined4 *)(iVar1 + 8);
    *(uint *)(0xa540 + ar4) = *(uint *)(0xa540 + ar4) | *(uint *)(0xa528 + ar4);
    *(undefined4 *)(0xa52c + ar4) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(0xa530 + ar4) = *(undefined4 *)(iVar1 + 0x10);
    *(uint *)(0xa540 + ar4) = *(uint *)(0xa540 + ar4) | *(uint *)(0xa530 + ar4);
    *(undefined4 *)(0xa534 + ar4) = *(undefined4 *)(iVar1 + 0x14);
    *(uint *)(0xa540 + ar4) = *(uint *)(0xa540 + ar4) | *(uint *)(0xa534 + ar4);
    *(int *)(0xa538 + ar4) = (int)*(short *)(iVar1 + 0x1c);
    *(uint *)(0xa540 + ar4) = *(uint *)(0xa540 + ar4) | *(uint *)(0xa538 + ar4);
    *(int *)(0xa53c + ar4) = (int)*(short *)(iVar1 + 0x1e);
    *(uint *)(0xa540 + ar4) = *(uint *)(0xa540 + ar4) | *(uint *)(0xa53c + ar4);
    *(undefined2 *)(0xa544 + ar4) = *(undefined2 *)(iVar1 + 0x1a);
    *(undefined2 *)(0xa546 + ar4) = *(undefined2 *)(iVar1 + 0x18);
    *(undefined4 *)(0xa51c + ar4) = 0x5a;
    if (*(int *)(0xa518 + ar4) < 1) {
      *(undefined4 *)(0xa518 + ar4) = 0;
      input_update_state_gate(ar4,ar5,ar6,ar7);
      if (((*(int *)(0xa514 + ar4) == 0) || (*(int *)(0xa514 + ar4) == 4)) &&
         (*(int *)(0xa510 + ar4) == 5)) {
        *(undefined4 *)(0xa518 + ar4) = 10;
        uVar2 = 2;
      }
      else {
        *(undefined4 *)(0xa514 + ar4) = *(undefined4 *)(0xa510 + ar4);
        uVar2 = *(undefined4 *)(0xa510 + ar4);
      }
    }
    else {
      input_update_state_gate(ar4,ar5,ar6,ar7);
      *(int *)(0xa518 + ar4) = *(int *)(0xa518 + ar4) + -1;
      *(undefined4 *)(0xa510 + ar4) = 2;
      *(undefined4 *)(0xa514 + ar4) = *(undefined4 *)(0xa510 + ar4);
      uVar2 = 2;
    }
  }
  return uVar2;
}

__asm__(".globl _input_poll_device_state\n.set _input_poll_device_state, _input_poll_device_state_def\n");
