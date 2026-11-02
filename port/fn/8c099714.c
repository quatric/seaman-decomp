#include "../decls.h"
undefined4 FUN_8c099714_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  undefined4 a5;
  int *piVar2;
  int in_stack_ffffffd8;
  
  piVar2 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13a884 + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c099914(ar4,ar5,ar6,ar7);
    a5 = 1;
    FUN_8c02f404(ar4,1,piVar2,ar7,in_stack_ffffffd8);
  }
  else {
    in_stack_ffffffd8 = *(int *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(&DAT_8c13a884 + in_stack_ffffffd8 * 4 + ar7 * 0xc)
    ;
    a5 = ar5;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 2) {
    FUN_8c02f404(ar4,3,piVar2,ar7,in_stack_ffffffd8);
  }
  else if (iVar1 == 4) {
    if (*(int *)(ar4 + 0x8c) == 1) {
      *(undefined1 *)(ar4 + 0x98) = 7;
      *(undefined4 *)(ar4 + 0x8c) = 0;
    }
    FUN_8c099b0c(ar4,ar5,piVar2,ar7);
  }
  else if (iVar1 == 8) {
    iVar1 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,a5,piVar2,ar7);
    if (iVar1 == 1) {
      iVar1 = *ar6;
      FUN_8c027954(iVar1,a5,piVar2,ar7);
      FUN_8c0c4e2c(iVar1,a5,piVar2,ar7);
    }
  }
  else if ((iVar1 == 0xb) && (*(int *)(ar4 + 0x8c) == 1)) {
    FUN_8c099850(ar6[3],1,piVar2,ar7);
    *(undefined4 *)(ar4 + 0x8c) = 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c099714\n.set _FUN_8c099714, _FUN_8c099714_def\n");
