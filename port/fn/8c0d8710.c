#include "../decls.h"
undefined4 FUN_8c0d8710_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint ar5_00;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  int iStack_14;
  
  cVar4 = '\0';
  uStack_1c = ar5;
  if (*ar4 == 0) {
    FUN_8c0d8890(ar4,ar5,ar6,ar7);
  }
  ar5_00 = *ar4;
  iVar1 = FUN_8c0d8bf0(ar4,ar5_00,ar6,ar7);
  if (cVar4 == '\0') {
    puVar3 = (undefined8 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44(ar4[0x1b87],(undefined4)uStack_24);
  }
  else {
    uStack_24 = *(undefined8 *)(ar4 + 0x1b87);
    puVar3 = &uStack_24;
  }
  iStack_14 = iVar1;
  FUN_8c0d7b60(ar4 + 0x1e,ar5_00,ar6,ar7);
  FUN_8c0d7cb0(ar4 + 0x1e,ar5_00,ar6,ar7);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    ar4[1] = 0;
  }
  else {
    ar4[1] = 1;
  }
  if (ar4[1] == 0) {
    *(uint **)((int)puVar3 + 8) = ar4;
    **(int **)((int)puVar3 + 8) = **(int **)((int)puVar3 + 8) + 1;
  }
  uVar2 = 72000;
  if (71999 < *ar4) {
    uVar2 = 0;
    *ar4 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d8710\n.set _FUN_8c0d8710, _FUN_8c0d8710_def\n");
