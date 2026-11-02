#include "../decls.h"
int FUN_8c260b08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int *unaff_r13;
  int iVar12;
  int unaff_r14;
  
  iVar11 = *unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar2 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar2 == 0)) {
    (**(code **)(0x88 + unaff_r14))
              (*(undefined4 *)(0x88 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar2 = unaff_r13[6] - unaff_r13[8];
    if (unaff_r13[9] < iVar2) {
      iVar2 = unaff_r13[9];
    }
    iVar6 = unaff_r13[5];
    if (unaff_r13[1] < iVar2) {
      iVar2 = unaff_r13[1];
    }
    puVar10 = (undefined2 *)(unaff_r13[8] * 2 + iVar6);
    ar7 = 0;
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar9 = unaff_r13[7];
      iVar4 = unaff_r13[8];
      iVar12 = 0;
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)puVar10 + iVar8) =
               CONCAT11(*(undefined1 *)(iVar7 + 2 + iVar11),*(undefined1 *)(iVar11 + iVar7));
          iVar5 = iVar7 + 3;
          iVar3 = iVar7 + 1;
          iVar12 = iVar12 + 1;
          iVar7 = iVar7 + 4;
          *(ushort *)(iVar8 + (iVar9 + iVar4) * 2 + iVar6) =
               CONCAT11(*(undefined1 *)(iVar5 + iVar11),*(undefined1 *)(iVar3 + iVar11));
          iVar8 = iVar8 + 2;
        } while (iVar12 < iVar2);
      }
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          iVar7 = iVar6 + 1;
          iVar4 = iVar4 + 1;
          puVar1 = (undefined1 *)(iVar6 + iVar11);
          iVar6 = iVar6 + 2;
          *puVar10 = CONCAT11(*(undefined1 *)(iVar7 + iVar11),*puVar1);
          puVar10 = puVar10 + 1;
        } while (iVar4 < iVar2);
      }
    }
    *(int *)(0xa0 + unaff_r14) = iVar2;
    *(int *)(0xa4 + unaff_r14) = iVar2 * *(char *)(unaff_r14 + 0xe) * 2;
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar11 = *(int *)(unaff_r14 + 4);
  if (iVar11 == 2) {
    iVar11 = (int)0x90;
    iVar11 = (**(code **)(iVar11 + unaff_r14))
                       (*(undefined4 *)(iVar11 + 4 + unaff_r14),
                        *(undefined4 *)(iVar11 + 0x14 + unaff_r14),
                        *(undefined4 *)(iVar11 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar11;
}

__asm__(".globl _FUN_8c260b08\n.set _FUN_8c260b08, _FUN_8c260b08_def\n");
