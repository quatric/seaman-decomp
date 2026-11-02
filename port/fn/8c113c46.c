#include "../decls.h"
int FUN_8c113c46_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x12]);
  (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x11]);
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xc0 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x1c0 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x98 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x9c + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x148 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x100 + (int)ar4));
  if (*(undefined **)((int)0x130 + (int)ar4) == (&FUN_8c11617a)) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xa0 + (int)ar4));
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xac + (int)ar4));
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xa8 + (int)ar4));
  }
  if (*(undefined **)((int)0x130 + (int)ar4) == (&FUN_8c117bac)) {
                    
                    
    uVar1 = (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xb0 + (int)ar4));
    return uVar1;
  }
  return (int)0x130;
}

__asm__(".globl _FUN_8c113c46\n.set _FUN_8c113c46, _FUN_8c113c46_def\n");
