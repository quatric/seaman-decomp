#include "../decls.h"
undefined4 FUN_8c0e7190_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 *puVar2;
  undefined4 auStack_10 [2];
  
  auStack_10[0] = 0;
  a5 = ar5;
  iVar1 = FUN_8c100ce8(ar5,ar5,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x88))(*(int *)(ar4 + 0x9d4),a5,ar6,ar7);
  }
  FUN_8c0dc61c(ar4,ar5,ar6,ar7);
  FUN_8c0dc8fc(ar4,ar5,ar6,ar7);
  FUN_8c0dc7e8(ar4,ar5,ar6,ar7);
  puVar2 = auStack_10;
  iVar1 = FUN_8c100e4c(ar5,puVar2,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x184))(*(int *)(ar4 + 0x9d4),puVar2,ar6,ar7)
    ;
  }
  else {
    puVar2 = auStack_10;
    iVar1 = FUN_8c100e4c(ar5,puVar2,ar6,ar7);
    if ((iVar1 == 2) && (*(int *)(ar4 + 0x9d4) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x188))
                (*(int *)(ar4 + 0x9d4),puVar2,ar6,ar7);
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0e7190\n.set _FUN_8c0e7190, _FUN_8c0e7190_def\n");
