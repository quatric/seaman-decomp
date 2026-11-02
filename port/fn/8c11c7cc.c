#include "../decls.h"
undefined4 FUN_8c11c7cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int unaff_r8;
  int iVar2;
  int *unaff_r10;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_r14;
  
  piVar5 = (int *)unaff_r10[1];
  iVar2 = unaff_r8;
  if (0 < *unaff_r10) {
    do {
      iVar3 = piVar5[5];
      iVar4 = unaff_r8;
      if (0 < *piVar5) {
        do {
          (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))
                    (*(undefined4 *)(iVar3 + 0xc),0xf4 + unaff_r14,ar6,ar7);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < *piVar5);
      }
      (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))
                (piVar5[5],0xf4 + unaff_r14,ar6,ar7);
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar2 < *unaff_r10);
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))
              (unaff_r10[1],0xf4 + unaff_r14,ar6,ar7);
  }
                    
                    
  uVar1 = (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))(0xf4 + unaff_r14);
  return uVar1;
}

__asm__(".globl _FUN_8c11c7cc\n.set _FUN_8c11c7cc, _FUN_8c11c7cc_def\n");
