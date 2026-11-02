#include "../decls.h"
undefined8 * FUN_8c08b798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong in_dr0;
  char cVar3;
  
  cVar3 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  if ((short)uVar1 == 2) {
    *(undefined4 *)(ar4 + 0x478) = 0;
  }
  else if (*(int *)(ar4 + 0x460) == 2) {
    *(undefined4 *)(ar4 + 0x478) = 1;
  }
  FUN_8c02702c(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  if ((short)uVar1 < 2) {
    puVar2 = &DAT_8c08b828;
    if (cVar3 == '\0') {
      *(undefined4 *)(ar4 + 0x334) = 0x40800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x334) = 0x2fd62fe640800000;
    }
  }
  else {
    puVar2 = (undefined8 *)0x334;
    if (cVar3 == '\0') {
      *(undefined4 *)(ar4 + 0x334) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x334) = in_dr0 & 0xffffffff;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c08b798\n.set _FUN_8c08b798, _FUN_8c08b798_def\n");
