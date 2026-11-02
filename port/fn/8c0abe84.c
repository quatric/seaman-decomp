#include "../decls.h"
undefined4 FUN_8c0abe84_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  int *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13b2ec + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c0ac068(ar4,ar5,ar6,ar7);
    ar5_00 = 1;
    FUN_8c02f404(ar4,1,ar6_00,ar7,iVar2);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
    FUN_8c0ac1f0(ar4,ar5,ar6_00,ar7);
  }
  else if (iVar1 == 1) {
    FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
  }
  else if (iVar1 == 3) {
    iVar2 = FUN_8c02f414(ar4,ar5_00,ar6_00,ar7);
    if ((iVar2 == 1) && (*(int *)(ar4 + 0x88) == 1)) {
      iVar2 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),ar5_00,ar6_00,ar7);
      FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),iVar2 + -1,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x88) = 0;
    }
  }
  else if ((iVar1 == 4) &&
          (iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,ar5_00,ar6_00,ar7), iVar2 == 1)) {
    iVar2 = *ar6;
    FUN_8c027954(iVar2,ar5_00,ar6_00,ar7);
    FUN_8c0c4e2c(iVar2,ar5_00,ar6_00,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c0abe84\n.set _FUN_8c0abe84, _FUN_8c0abe84_def\n");
