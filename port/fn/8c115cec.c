#include "../decls.h"
int FUN_8c115cec_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  if (ar4[0x11] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x11]);
    ar4[0x11] = 0;
  }
  if (ar4[0x12] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x12]);
    ar4[0x12] = 0;
  }
  if (ar4[0x13] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x13]);
    ar4[0x13] = 0;
  }
  if (*(int *)((int)0x148 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x148 + (int)ar4));
    *(undefined4 *)((int)0x148 + (int)ar4) = 0;
  }
  if (*(int *)((int)0x1c0 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x1c0 + (int)ar4));
    *(undefined4 *)((int)0x1c0 + (int)ar4) = 0;
  }
  if ((*(char *)((int)0xc4 + (int)ar4) != '\0') &&
     (*(int *)((int)0xc0 + (int)ar4) != 0)) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xc0 + (int)ar4));
    *(undefined4 *)((int)0xc0 + (int)ar4) = 0;
  }
  if (*(int *)((int)0x98 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x98 + (int)ar4));
    *(undefined4 *)((int)0x98 + (int)ar4) = 0;
  }
  if (*(int *)((int)0x94 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x94 + (int)ar4));
    *(undefined4 *)((int)0x94 + (int)ar4) = 0;
  }
  if (*(int *)((int)0x9c + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x9c + (int)ar4));
    *(undefined4 *)((int)0x9c + (int)ar4) = 0;
  }
  if (*(int *)((int)0xa8 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xa8 + (int)ar4));
    *(undefined4 *)((int)0xa8 + (int)ar4) = 0;
  }
  if (*(int *)((int)0xac + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xac + (int)ar4));
    *(undefined4 *)((int)0xac + (int)ar4) = 0;
  }
  if (*(int *)((int)0xa0 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xa0 + (int)ar4));
    *(undefined4 *)((int)0xa0 + (int)ar4) = 0;
  }
  if (*(int *)((int)0xb0 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xb0 + (int)ar4));
    *(undefined4 *)((int)0xb0 + (int)ar4) = 0;
  }
  if (*(int *)((int)0x104 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x104 + (int)ar4));
    *(undefined4 *)((int)0x104 + (int)ar4) = 0;
  }
  iVar1 = (int)0x1d4;
  if (*(int *)(iVar1 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x1cc + (int)ar4));
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x1d0 + (int)ar4));
    iVar1 = (int)0x1d4;
    *(undefined4 *)(iVar1 + (int)ar4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115cec\n.set _FUN_8c115cec, _FUN_8c115cec_def\n");
