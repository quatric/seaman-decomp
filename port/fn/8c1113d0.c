#include "../decls.h"
uint FUN_8c1113d0_def(int *ar4,undefined4 ar5,int ar6,int ar7)

{
  bool bVar1;
  int *piVar2;
  int *extraout_r2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_stack_ffffffdc;
  
  uVar7 = 1;
  uVar10 = 1;
  iVar8 = ar6 * 4;
  if ((char)ar5 == '\x01') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar8) = 0;
      } while (uVar3 < (uint)ar4[5]);
    }
  }
  else if ((char)ar5 == '\x02') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar10 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar8) = 0;
      } while (uVar10 < (uint)ar4[5]);
    }
    uVar10 = FUN_8c1117e4(ar4,(uint)*(ushort *)((int)ar4 + 0xe),1,ar7);
  }
  else if ((char)ar5 == '\x03') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar10 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar8) = 0;
      } while (uVar10 < (uint)ar4[5]);
    }
    uVar10 = FUN_8c1117e4(ar4,ar6,1,ar7);
  }
  else if ((char)ar5 == '\x04') {
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
      } while (uVar3 < (uint)ar4[5]);
    }
    ar4[10] = ar4[9];
    *(undefined1 *)(ar4 + 0xc) = 0;
    ar4[6] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        uVar4 = uVar3 + 1;
        *(undefined4 *)(uVar3 * 4 + ar4[0xb]) = 0;
        uVar3 = uVar4;
      } while (uVar4 < (uint)ar4[5]);
    }
    iVar8 = ar4[0xe];
    while (iVar8 != 0) {
      if (*(int *)(iVar8 + 0xc) != ar6) {
        uVar3 = FUN_8c120948(*(undefined4 *)(iVar8 + 0xc),*ar4,uVar7,ar7);
        uVar10 = uVar10 | uVar3;
      }
      iVar9 = *(int *)(iVar8 + 0x10);
      (**(code **)(*ar4 + 0x18))(*ar4,iVar8,uVar7,ar7);
      iVar8 = iVar9;
    }
    ar4[0xe] = 0;
  }
  else if ((char)ar5 == '\x05') {
    if (*(int *)(ar4[0xb] + iVar8) == 0) {
      *(int *)(ar4[0xb] + iVar8) = ar4[9];
      *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
      if (ar4[6] == 0) {
        ar4[10] = ar4[9];
      }
      ar4[6] = ar4[6] + 1;
    }
  }
  else if ((char)ar5 == '\x06') {
    if ((*(int *)(ar4[0xb] + iVar8) != 0) && (ar4[0xe] == 0)) {
      iVar5 = *(int *)(ar4[0xb] + iVar8);
      *(int *)(ar4[0xb] + iVar8) = 0;
      iVar9 = ar4[6];
      ar4[6] = iVar9 + -1;
      if (iVar9 + -1 == 0) {
        ar4[10] = ar4[9];
      }
      else if (iVar5 == ar4[10]) {
        FUN_8c111342(ar4,iVar5,1,ar7,in_stack_ffffffdc);
      }
      *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
    }
  }
  else if ((char)ar5 == '\a') {
    if (*(int *)(ar4[0xb] + iVar8) == 0) {
      *(int *)(ar4[0xb] + iVar8) = ar4[9];
      *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
      ar4[6] = ar4[6] + 1;
    }
    uVar10 = FUN_8c11189a(ar4,ar6,ar7,ar7);
  }
  else if ((char)ar5 == -8) {
    if ((*(char *)((int)ar4 + 0x31) != '\0') && (ar4[6] != 0)) {
      bVar1 = false;
      iVar9 = ar4[0xe];
      iVar8 = 0;
      while (iVar5 = iVar9, iVar5 != 0) {
        if (*(int *)(iVar5 + 0xc) == ar6) {
          bVar1 = true;
        }
        iVar8 = iVar5;
        iVar9 = *(int *)(iVar5 + 0x10);
      }
      if (!bVar1) {
        *(int *)(ar6 + 4) = *(int *)(ar6 + 4) + 1;
        iVar9 = ar7;
        iVar5 = (**(code **)(*ar4 + 0x10))(*ar4,0x14,1,ar7);
        uVar7 = (**(code **)(*ar4 + 0x10))(*ar4,ar4[5] << 2,uVar7,iVar9);
        uVar6 = 0x80000000;
        *(undefined4 *)(iVar5 + 8) = uVar7;
        uVar3 = 0;
        if (ar4[5] != 0) {
          do {
            if (*(int *)(uVar3 * 4 + ar4[0xb]) == 0) {
              *(undefined4 *)(*(int *)(iVar5 + 8) + uVar3 * 4) = uVar6;
            }
            else if ((*(int *)(ar4[0xb] + uVar3 * 4) == ar4[9]) &&
                    (*(int *)(ar4[0x10] + uVar3 * 4) != ar4[0xf])) {
              *(int *)(*(int *)(iVar5 + 8) + uVar3 * 4) = ar4[2] + ar7;
            }
            else {
              if ((uint)ar4[9] < *(uint *)(ar4[0xb] + uVar3 * 4)) {
                iVar9 = libgcc_divide_helper_010468
                                  ((ar4[9] + ar4[4]) - *(int *)(ar4[0xb] + uVar3 * 4),
                                   (uint)*(ushort *)(ar4 + 3));
                piVar2 = extraout_r2;
              }
              else {
                piVar2 = (int *)(*(int *)(iVar5 + 8) + uVar3 * 4);
                iVar9 = libgcc_divide_helper_010468
                                  (ar4[9] - *(int *)(ar4[0xb] + uVar3 * 4),
                                   (uint)*(ushort *)(ar4 + 3));
              }
              *piVar2 = iVar9 + ar7;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)ar4[5]);
        }
        *(int *)(iVar5 + 4) = ar4[6];
        *(int *)(iVar5 + 0xc) = ar6;
        *(undefined4 *)(iVar5 + 0x10) = 0;
        if (iVar8 == 0) {
          ar4[0xe] = iVar5;
        }
        else {
          *(int *)(iVar8 + 0x10) = iVar5;
        }
      }
    }
  }
  else if ((char)ar5 == -1) {
    iVar8 = ar4[0xe];
    if (ar4[7] != 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[7],1,ar7);
    }
    if (ar4[0xb] != 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0xb],uVar7,ar7);
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0xd],uVar7,ar7);
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0x10],uVar7,ar7);
    }
    while (iVar8 != 0) {
      iVar9 = *(int *)(iVar8 + 0x10);
      (**(code **)(*ar4 + 0x18))(*ar4,iVar8,uVar7,ar7);
      iVar8 = iVar9;
    }
    (**(code **)(*ar4 + 0x18))(*ar4,ar4,uVar7,ar7);
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

__asm__(".globl _FUN_8c1113d0\n.set _FUN_8c1113d0, _FUN_8c1113d0_def\n");
