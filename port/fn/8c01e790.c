#include "../decls.h"
int input_update_state_gate_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0xa510;
  if (*(int *)(0xa520 + ar4) == 0) {
    iVar2 = 1;
    if (*(int *)(0xa510 + ar4) != 1) {
      *(undefined4 *)(0xa510 + ar4) = 0;
      iVar2 = iVar1;
    }
  }
  else {
    iVar2 = input_peripheral_state_machine(ar4,ar5,ar6,ar7);
  }
  return iVar2;
}

__asm__(".globl _input_update_state_gate\n.set _input_update_state_gate, _input_update_state_gate_def\n");
