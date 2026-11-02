#include "../decls.h"
int FUN_8c260904_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_r13;
  int iVar10;
  int unaff_r14;
  
  iVar9 = *unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar1 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar1 == 0)) {
    (**(code **)(0x88 + unaff_r14))
              (*(undefined4 *)(0x88 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar1 = unaff_r13[6] - unaff_r13[8];
    if (unaff_r13[9] < iVar1) {
      iVar1 = unaff_r13[9];
    }
    iVar5 = unaff_r13[5];
    if (unaff_r13[1] < iVar1) {
      iVar1 = unaff_r13[1];
    }
    iVar8 = unaff_r13[8] * 2 + iVar5;
    ar7 = 0;
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar2 = unaff_r13[7];
      iVar3 = unaff_r13[8];
      iVar10 = 0;
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(iVar7 + iVar8) = *(undefined2 *)(iVar6 * 2 + iVar9);
          iVar4 = iVar6 + 1;
          iVar6 = iVar6 + 2;
          *(undefined2 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(undefined2 *)(iVar4 * 2 + iVar9);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar1);
      }
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(iVar5 + iVar8) = *(undefined2 *)(iVar5 + iVar9);
          iVar5 = iVar5 + 2;
        } while (iVar2 < iVar1);
      }
    }
    *(int *)(0xa0 + unaff_r14) = iVar1;
    *(int *)(0xa4 + unaff_r14) = iVar1 * *(char *)(unaff_r14 + 0xe) * 2;
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar9 = *(int *)(unaff_r14 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)0x90;
    iVar9 = (**(code **)(iVar9 + unaff_r14))
                      (*(undefined4 *)(iVar9 + 4 + unaff_r14),
                       *(undefined4 *)(iVar9 + 0x14 + unaff_r14),
                       *(undefined4 *)(iVar9 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar9;
}

__asm__(".globl _FUN_8c260904\n.set _FUN_8c260904, _FUN_8c260904_def\n");
