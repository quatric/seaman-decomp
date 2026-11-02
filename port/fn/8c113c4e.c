#include "../decls.h"
int FUN_8c113c4e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(in_r0 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,unaff_r13[0x11],ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xc0 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x1c0 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x98 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x9c + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x148 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x100 + (int)unaff_r13),ar6,ar7);
  if (*(undefined **)((int)0x130 + (int)unaff_r13) == (&FUN_8c11617a)) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xa0 + (int)unaff_r13),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xac + (int)unaff_r13),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xa8 + (int)unaff_r13),ar6,ar7);
  }
  if (*(undefined **)((int)0x130 + (int)unaff_r13) == (&FUN_8c117bac)) {
                    
                    
    uVar1 = (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xb0 + (int)unaff_r13));
    return uVar1;
  }
  return (int)0x130;
}

__asm__(".globl _FUN_8c113c4e\n.set _FUN_8c113c4e, _FUN_8c113c4e_def\n");
