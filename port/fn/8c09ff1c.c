#include "../decls.h"
undefined4 FUN_8c09ff1c_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a5;
  int *ar6_00;
  
  a5 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13adfc + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c0a00f8(ar4,ar5,ar6,ar7);
    a5 = 1;
    FUN_8c02f404(ar4,1,ar6_00,ar7,iVar2);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 2) {
    FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
  }
  else if (iVar1 == 3) {
    if (*(int *)(ar4 + 4) == 0xb) {
      FUN_8c0a0278(ar4,ar5,ar6_00,ar7);
    }
    else {
      FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
      FUN_8c02fdd8(ar4,ar5,ar6_00,ar7);
    }
  }
  else if (iVar1 == 6) {
    iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,a5,ar6_00,ar7);
    if (iVar2 == 1) {
      iVar2 = *ar6;
      FUN_8c027954(iVar2,a5,ar6_00,ar7);
      FUN_8c0c4e2c(iVar2,a5,ar6_00,ar7);
    }
  }
  else if (((iVar1 == 10) && (iVar2 = FUN_8c02c518(ar6[1],a5,ar6_00,ar7), iVar2 != 0)) &&
          (iVar2 == 1)) {
    *(undefined4 *)(ar4 + 0x40) = 0xe;
  }
  return 1;
}

__asm__(".globl _FUN_8c09ff1c\n.set _FUN_8c09ff1c, _FUN_8c09ff1c_def\n");
