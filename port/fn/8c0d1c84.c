#include "../decls.h"
int FUN_8c0d1c84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a4;
  uint a5;
  
  if (*(undefined4 *)0x8c437c5c == '\0') {
    *(undefined4 *)0x8c437c58 = 0;
    *(undefined4 *)0x8c437c5c = '\x01';
  }
  iVar1 = 0;
  if ((*(undefined4 *)0x8c43785c != 0) && (iVar1 = 0, *(undefined4 *)0x8c437860 != 0)) {
    FUN_8c016340(0x8c431294,ar5,ar6,ar7);
    do {
    } while (*(undefined4 *)0x8c431a50 != 1);
    if (*(undefined4 *)0x8c437c58 < 1) {
      iVar1 = *(undefined4 *)0x8c437c58 + 1;
      *(undefined4 *)0x8c437c58 = iVar1;
    }
    else {
      a5 = (uint)*(undefined4 *)0x8c437864;
      a4 = (int *)*(undefined4 *)0x8c43785c;
      (**(code **)(0x9c + *a4))(a4,a5,ar6,ar7);
      FUN_8c0f7ea0(a4,a5,ar6,ar7);
      (**(code **)(0x98 + *(int *)*(undefined4 *)0x8c437860))
                ((int *)*(undefined4 *)0x8c437860,(uint)*(undefined4 *)0x8c437864,ar6,ar7);
      *(undefined4 *)0x8c43785c = 0;
      *(undefined4 *)0x8c437860 = 0;
      iVar1 = 0;
      *(undefined4 *)0x8c437c58 = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d1c84\n.set _FUN_8c0d1c84, _FUN_8c0d1c84_def\n");
