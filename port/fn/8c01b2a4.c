#include "../decls.h"
int s_VM_App_Icon_VMI_01b2b2_def
              (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined4 uVar3;
  int *ar7_00;
  int unaff_r8;
  undefined4 ain0;
  int aiStack_24 [2];
  
  ar7_00 = aiStack_24;
  iVar1 = FUN_8c0213bc(0x8c3eb334,"VM_App_Icon.VMI",&DAT_8c12fb29,ar7_00);
  if (iVar1 == 0) {
    unaff_r8 = -1;
  }
  else {
    ain0 = ar5;
    iVar1 = FUN_8c01ab78(ar4,3,ar5,ar7_00);
    if (-1 < iVar1) {
      uVar3 = ar7;
      iVar2 = FUN_8c01b5dc(ar4,ar7,ar5,ar7_00);
      ar4_00 = malloc_thunk(iVar2 << 9,uVar3,ar5,ar7_00);
      if (ar4_00 != 0) {
        memmove(ar4_00,ar6,ar7,ar7_00);
        uVar3 = 0x280;
        memset(ar4_00 + 0x200,0,0x280,ar7_00);
        strcpy(ar4_00 + 0x200,s0,uVar3,ar7_00,ain0);
        strcpy(ar4_00 + 0x210,s4,uVar3,ar7_00,ain0);
        *(undefined2 *)(ar4_00 + 0x240) = 1;
        *(undefined4 *)(ar4_00 + 0x248) = ar7;
        memmove(ar4_00 + 0x260,aiStack_24[0] + 0xa0,0x220,ar7_00);
        *(int *)(iVar1 * 0x28 + ar4 + 0x246c) = iVar2;
        *(int *)(iVar1 * 0x28 + ar4 + 0x2470) = ar4_00;
        unaff_r8 = iVar1;
      }
    }
    FUN_8c021428(0x8c3eb334,"VM_App_Icon.VMI",&DAT_8c12fb29,ar7_00);
  }
  return unaff_r8;
}

__asm__(".globl _s_VM_App_Icon_VMI_01b2b2\n.set _s_VM_App_Icon_VMI_01b2b2, _s_VM_App_Icon_VMI_01b2b2_def\n");
