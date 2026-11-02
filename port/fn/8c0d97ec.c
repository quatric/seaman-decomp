#include "../decls.h"
int FUN_8c0d97ec_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  uint extraout_fr1;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = *(undefined4 *)(ar4 + 0x1c);
  iVar1 = libgcc_divide_helper_0103d0(*ar5,uVar3,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = get_field_a0_035724(ar5,uVar3,ar6,ar7);
    if ((char)uVar2 == '\x02') {
      *(undefined4 *)(ar4 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(ar4 + 0x10) = 1;
    }
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x14) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x14) = (ulonglong)extraout_fr1;
    }
    uVar3 = rand(ar5,uVar3,ar6,ar7);
    ar5_00 = 3;
    uVar2 = libgcc_divide_helper_01031c(uVar3,3,ar6,ar7);
    *(char *)(ar4 + 0x18) = (char)uVar2;
    *(char *)(ar4 + 0x18) = *(char *)(ar4 + 0x18) + '\x01';
    uVar3 = rand(uVar3,ar5_00,ar6,ar7);
    iVar1 = libgcc_divide_helper_01031c(uVar3,500,ar6,ar7);
    *(int *)(ar4 + 0x1c) = iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d97ec\n.set _FUN_8c0d97ec, _FUN_8c0d97ec_def\n");
