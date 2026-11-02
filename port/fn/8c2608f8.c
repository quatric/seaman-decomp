#include "../decls.h"
int FUN_8c2608f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
  int iVar10;
  
  iVar9 = *(int *)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar1 = get_field_c_264f82(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar1 == 0)) {
    (**(code **)(0x88 + ar4))
              (*(undefined4 *)(0x88 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar1 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar1) {
      iVar1 = *(int *)(ar4 + 0x74);
    }
    iVar5 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar1) {
      iVar1 = *(int *)(ar4 + 0x54);
    }
    iVar8 = *(int *)(ar4 + 0x70) * 2 + iVar5;
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar2 = *(int *)(ar4 + 0x6c);
      iVar3 = *(int *)(ar4 + 0x70);
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
    *(int *)(0xa0 + ar4) = iVar1;
    *(int *)(0xa4 + ar4) = iVar1 * *(char *)(ar4 + 0xe) * 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar9 = *(int *)(ar4 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)0x90;
    iVar9 = (**(code **)(iVar9 + ar4))
                      (*(undefined4 *)(iVar9 + 4 + ar4),*(undefined4 *)(iVar9 + 0x14 + ar4),
                       *(undefined4 *)(iVar9 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar9;
}

__asm__(".globl _FUN_8c2608f8\n.set _FUN_8c2608f8, _FUN_8c2608f8_def\n");
