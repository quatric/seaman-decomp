#include "../decls.h"
int FUN_8c25f830_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = *(int *)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar2 = get_field_c_264f82(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar2 == 0)) {
    (**(code **)(0x88 + ar4))
              (*(undefined4 *)(0x88 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar2 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x74);
    }
    iVar4 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x54);
    }
    iVar9 = *(int *)(ar4 + 0x70) * 2 + iVar4;
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar8 = *(int *)(ar4 + 0x6c);
      iVar7 = 0;
      iVar3 = *(int *)(ar4 + 0x70);
      iVar5 = 0;
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          uVar1 = *(ushort *)(iVar5 * 2 + iVar10);
          iVar7 = iVar7 + 1;
          *(ushort *)(iVar6 + iVar9) = uVar1 << 8 | uVar1 >> 8;
          uVar1 = *(ushort *)((iVar5 + 1) * 2 + iVar10);
          *(ushort *)(iVar6 + (iVar8 + iVar3) * 2 + iVar4) = uVar1 << 8 | uVar1 >> 8;
          iVar5 = iVar5 + 2;
          iVar6 = iVar6 + 2;
        } while (iVar7 < iVar2);
      }
    }
    else {
      iVar6 = 0;
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          iVar6 = iVar6 + 1;
          *(ushort *)(iVar4 + iVar9) =
               *(ushort *)(iVar4 + iVar10) << 8 | *(ushort *)(iVar4 + iVar10) >> 8;
          iVar4 = iVar4 + 2;
        } while (iVar6 < iVar2);
      }
    }
    *(int *)(0xa0 + ar4) = iVar2;
    *(int *)(0xa4 + ar4) = iVar2 * *(char *)(ar4 + 0xe) * 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar10 = *(int *)(ar4 + 4);
  if (iVar10 == 2) {
    iVar10 = (int)0x90;
    iVar10 = (**(code **)(iVar10 + ar4))
                       (*(undefined4 *)(iVar10 + 4 + ar4),*(undefined4 *)(iVar10 + 0x14 + ar4),
                        *(undefined4 *)(iVar10 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar10;
}

__asm__(".globl _FUN_8c25f830\n.set _FUN_8c25f830, _FUN_8c25f830_def\n");
