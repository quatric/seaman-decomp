#include "../decls.h"
uint FUN_8c11fa1e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int in_r1;
  int a5;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  if (in_r0 == in_r1) {
    (**(code **)(a4 + 0x18))(a4,unaff_r13[0xb],ar6,ar7);
    a5 = unaff_r13[0xf];
    (**(code **)(a4 + 0x18))(a4,a5,ar6,ar7);
    FUN_8c120668(unaff_r13,a5,ar6,ar7);
  }
  return (uint)(in_r0 == in_r1);
}

__asm__(".globl _FUN_8c11fa1e\n.set _FUN_8c11fa1e, _FUN_8c11fa1e_def\n");
