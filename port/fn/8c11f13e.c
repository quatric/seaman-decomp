#include "../decls.h"
undefined4 FUN_8c11f13e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  
  puVar1 = (&FUN_8c120348);
  *(int *)(0x10c + ar4) = ar5;
  puVar3 = (&DATA_8c127c1d);
  puVar2 = (&DATA_8c127c18);
  if (ar5 == 0) {
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 100);
    *(undefined4 *)(0x114 + ar4) = 0;
    if ((*(int *)(0x88 + ar4) == 0) || (*(char *)(0x234 + ar4) != '\0')) {
      cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x34,0);
    }
    else {
      cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x33,0);
    }
  }
  else if (ar5 == 1) {
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x68);
    *(undefined **)(0x114 + ar4) = puVar2;
    cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x2b,0);
  }
  else {
    if (ar5 != 2) {
      return 0x18;
    }
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x6c);
    *(undefined **)(0x114 + ar4) = puVar3;
    cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x2c,0);
  }
  if ((cVar4 == '\0') &&
     (((*(int *)(0x88 + ar4) == 0 || (ar5 == 0)) ||
      (cVar4 = (*(code *)puVar1)(ar4 + 0x48,2,0), cVar4 == '\0')))) {
    *(uint *)(0x110 + ar4) = (uint)*(ushort *)(*(int *)(ar4 + 0x60) + 0xc);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c11f13e\n.set _FUN_8c11f13e, _FUN_8c11f13e_def\n");
