#include "../decls.h"
undefined4 FUN_8c0274bc_def(int ar4,ushort *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *ar5_00;
  int iVar4;
  
  ar5_00 = ar5;
  iVar1 = get_field_138_02737c(ar4 + 0x174,ar5,ar6,ar7);
  if (iVar1 != 1) {
    iVar1 = get_field_138_02737c(ar4 + 0x174,ar5_00,ar6,ar7);
    if (iVar1 != 2) goto LAB_8c027550;
  }
  uVar2 = get_field_138_02737c(ar4 + 0x174,ar5_00,ar6,ar7);
  uVar3 = FUN_8c02bef8(ar4 + 0x174,ar5_00,ar6,ar7);
  ar6 = (int)(short)uVar3;
  uVar2 = FUN_8c02775c(ar4,uVar2,ar6,ar7);
  uVar2 = FUN_8c0fa388(0x8c35468c,uVar2,ar6,ar7);
  FUN_8c027374(ar4 + 0x21c,uVar2,ar6,ar7);
  ar5_00 = (ushort *)FUN_8c027364(*(undefined4 *)(0x308 + ar4),uVar2,ar6,ar7);
  FUN_8c02735c(ar4 + 0x21c,ar5_00,ar6,ar7);
LAB_8c027550:
  iVar1 = FUN_8c0fa5b4(0x8c35468c,ar5_00,ar6,ar7);
  iVar4 = (**(code **)(**(int **)(0x308 + ar4) + 0x40))
                    (*(int **)(0x308 + ar4),ar5_00,ar6,ar7);
  if (iVar1 == iVar4) {
    iVar1 = (**(code **)(**(int **)(0x308 + ar4) + 0x40))
                      (*(int **)(0x308 + ar4),ar5_00,ar6,ar7);
    if (0 < iVar1) {
      ar5_00 = (ushort *)0x1;
      FUN_8c02b04c(ar4,1,ar6,ar7);
    }
  }
  if (*ar5 == 0) {
    if ((*ar5 == 0) && (7 < ar5[1])) {
      if (ar5[1] < 0x18) {
        ar5_00 = (ushort *)
                 libgcc_divide_helper_0101e4((uint)ar5[1],8,ar6,ar7);
        FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7);
      }
      else {
        ar5_00 = (ushort *)
                 libgcc_divide_helper_0101e4((uint)ar5[1],0x18,ar6,ar7);
        FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7);
      }
      FUN_8c027344(*(undefined4 *)(0x308 + ar4),ar5_00,ar6,ar7);
    }
  }
  else {
    ar5_00 = (ushort *)(uint)*ar5;
    FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7);
    FUN_8c027344(*(undefined4 *)(0x308 + ar4),ar5_00,ar6,ar7);
  }
  iVar1 = FUN_8c025ff4(ar4 + 0x174,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c02a6f8(ar4,ar5_00,ar6,ar7);
  }
  uVar2 = FUN_8c025f68(ar4 + 0x1ec,ar5_00,ar6,ar7);
  if ((char)uVar2 != '\0') {
    FUN_8c02b190(ar4,ar5_00,ar6,ar7);
  }
  FUN_8c0353bc(ar4 + 0x2dc,ar4 + 0x174,ar6,ar7);
  uVar2 = (**(code **)(**(int **)(0x308 + ar4) + 0x3c))
                    (*(int **)(0x308 + ar4),ar4 + 0x174,ar4 + 0x2dc,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0274bc\n.set _FUN_8c0274bc, _FUN_8c0274bc_def\n");
