#include "../decls.h"
uint FUN_8c11e3ea_def(int ar4,int ar5,undefined4 *ar6,undefined4 *ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 a5;
  undefined4 *a6;
  undefined4 *ar7_00;
  
  a6 = ar6;
  ar7_00 = ar7;
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar1 = (&FUN_8c1204c4);
  if (iVar2 == 0) {
    if ((ar6 == (undefined4 *)0x0) || (ar7 == (undefined4 *)0x0)) {
      a5 = 0x13;
    }
    else if (ar5 == 4) {
      if ((*(short *)(ar4 + 0x3e) == 2) || (*(short *)(ar4 + 0x3e) == 1)) {
        uVar3 = FUN_8c11d14c(ar4,ar6,ar7,ar7_00);
        if ((uVar3 & 0xff) == 0) {
          return 0;
        }
        goto LAB_8c11e476;
      }
      a5 = 7;
      *ar6 = 0;
      *ar7 = 0;
    }
    else {
      a5 = 0xd;
      *ar6 = 0;
      *ar7 = 0;
    }
    uVar3 = (*(code *)puVar1)(ar4 + 0x48,a5,a6,ar7_00);
    uVar3 = uVar3 & 0xff;
  }
  else {
LAB_8c11e476:
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11e3ea\n.set _FUN_8c11e3ea, _FUN_8c11e3ea_def\n");
