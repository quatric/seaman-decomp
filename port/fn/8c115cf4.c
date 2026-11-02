#include "../decls.h"
int FUN_8c115cf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int a4;
  int *unaff_r14;
  
  a4 = *unaff_r14;
  if (*(int *)(in_r0 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(in_r0 + (int)unaff_r14),ar6,ar7);
    unaff_r14[0x11] = 0;
  }
  if (unaff_r14[0x12] != 0) {
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0x12],ar6,ar7);
    unaff_r14[0x12] = 0;
  }
  if (unaff_r14[0x13] != 0) {
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0x13],ar6,ar7);
    unaff_r14[0x13] = 0;
  }
  if (*(int *)((int)0x148 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x148 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x148 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0x1c0 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x1c0 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x1c0 + (int)unaff_r14) = 0;
  }
  if ((*(char *)((int)0xc4 + (int)unaff_r14) != '\0') &&
     (*(int *)((int)0xc0 + (int)unaff_r14) != 0)) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xc0 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0xc0 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0x98 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x98 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x98 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0x94 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x94 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x94 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0x9c + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x9c + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x9c + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0xa8 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xa8 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0xa8 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0xac + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xac + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0xac + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0xa0 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xa0 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0xa0 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0xb0 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xb0 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0xb0 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0x104 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x104 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x104 + (int)unaff_r14) = 0;
  }
  iVar1 = (int)0x1d4;
  if (*(int *)(iVar1 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x1cc + (int)unaff_r14),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x1d0 + (int)unaff_r14),ar6,ar7);
    iVar1 = (int)0x1d4;
    *(undefined4 *)(iVar1 + (int)unaff_r14) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115cf4\n.set _FUN_8c115cf4, _FUN_8c115cf4_def\n");
