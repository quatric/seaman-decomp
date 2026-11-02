#include "../decls.h"
int FUN_8c26518c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int ar5_01;
  undefined4 in_stack_ffffffdc;
  
  iVar1 = DAT_8c2784c0;
  ar5_00 = &stack0xffffffdc;
  if (DAT_8c2784c0 == 0) {
    ar5_01 = 0xd000001;
  }
  else {
    if (*(int *)(DAT_8c2784c0 + 0x160) != 1) {
      iVar2 = *(int *)(DAT_8c2784c0 + 0x1bc);
      FUN_8c26870c(iVar2,&stack0xffffffdc,ar6,ar7);
      if ((char)in_stack_ffffffdc == '\0') {
        iVar4 = 0;
        iVar5 = *(int *)(DAT_8c2784c0 + 0x168);
        iVar3 = 0;
        if (0 < iVar5) {
          do {
            iVar2 = *(int *)(iVar1 + 0x174);
            *(int *)(iVar1 + 0x174) = iVar2 + 1;
            iVar2 = iVar2 * 0x1c + *(int *)(iVar1 + 0x164);
            if (*(int *)(iVar1 + 0x174) == iVar5) {
              *(undefined4 *)(iVar1 + 0x174) = 0;
            }
            if (*(int *)(iVar2 + 0x14) == 1) {
              ar5_01 = FUN_8c266c48(iVar2,ar5_00,ar6,ar7);
              if (ar5_01 != 0) goto LAB_8c26522c;
              iVar4 = iVar4 + 1;
              if ((iVar4 == 0x20) || (*(int *)(DAT_8c2784c0 + 0x16c) == 0)) break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar5);
        }
        ar5_01 = FUN_8c266b08(iVar2,ar5_00,ar6,ar7);
        goto LAB_8c26522c;
      }
    }
    ar5_01 = 0xb000003;
  }
LAB_8c26522c:
  if (ar5_01 != 0) {
    FUN_8c2688a0(FUN_8c26518c,ar5_01,ar6,ar7,in_stack_ffffffdc);
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c26518c\n.set _FUN_8c26518c, _FUN_8c26518c_def\n");
