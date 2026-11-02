#include "../decls.h"
undefined4 FUN_8c10ddaa_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *ar4;
  (**(code **)(iVar4 + 0x18))(iVar4,**(undefined4 **)((int)0x134 + (int)ar4),1);
  (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)0x134 + (int)ar4));
  (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)0x120 + (int)ar4));
  FUN_8c10cf6c(ar4,ar4 + 0x1b,(int)0x8c + (int)ar4,0);
  FUN_8c10cf6c(ar4,ar4 + 0x1c,(int)0x8e + (int)ar4,0);
  iVar2 = 0;
  piVar1 = (int *)((int)0xc0 + (int)ar4);
  piVar3 = piVar1;
  do {
    if (*piVar3 != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,*piVar1);
    }
    if (piVar3[1] != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,piVar1[1]);
    }
    if (piVar3[2] != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,piVar1[2]);
    }
    if (piVar3[3] != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,piVar1[3]);
    }
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 4;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 6);
  for (; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (*piVar3 != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,*piVar1);
    }
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)((int)0xac + (int)ar4) != 0) {
    (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)0xac + (int)ar4));
    (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)0xb0 + (int)ar4));
  }
  (**(code **)(iVar4 + 0x18))(iVar4,ar4[3]);
  (**(code **)(iVar4 + 0x18))(iVar4,ar4[4]);
  (**(code **)(iVar4 + 0x18))(iVar4,ar4);
  return 0;
}

__asm__(".globl _FUN_8c10ddaa\n.set _FUN_8c10ddaa, _FUN_8c10ddaa_def\n");
