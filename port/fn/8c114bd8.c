#include "../decls.h"
undefined4 FUN_8c114bd8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float extraout_fr0;
  
  uVar1 = (**(code **)(ar5 + 0x2c))(ar5);
  *(undefined2 *)(ar4 + 0xdc) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x30))(ar5);
  *(undefined2 *)(ar4 + 0xde) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x34))(ar5);
  *(undefined2 *)(ar4 + 0xe0) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x38))(ar5);
  *(undefined2 *)(ar4 + 0xe2) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x34))(ar5);
  *(undefined2 *)(ar4 + 0x1c6) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x20))(ar5);
  *(undefined2 *)(ar4 + 0xe4) = uVar1;
  uVar2 = (**(code **)(ar5 + 0x44))(ar5);
  *(undefined4 *)(ar4 + 0xf4) = uVar2;
  uVar1 = (**(code **)(ar5 + 0x48))(ar5);
  *(undefined2 *)(ar4 + 0xe6) = uVar1;
  uVar2 = (**(code **)(ar5 + 0x88))(ar5);
  *(undefined4 *)(ar4 + 0xe8) = uVar2;
  FUN_8c120550(ar4,0x15,ar6,ar7);
  *(char *)(ar4 + 0xf8) = (char)(int)extraout_fr0;
  if (*(char *)(ar4 + 0xf8) != '\0') {
    uVar2 = (**(code **)(ar5 + 0x8c))(ar5);
    uVar3 = (**(code **)(ar5 + 0xcc))(uVar2);
    *(undefined4 *)(ar4 + 0xec) = uVar3;
    uVar2 = (**(code **)(ar5 + 0xd0))(uVar2);
    *(undefined4 *)(ar4 + 0xf0) = uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c114bd8\n.set _FUN_8c114bd8, _FUN_8c114bd8_def\n");
