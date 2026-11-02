#include "../decls.h"
int FUN_8c11a634_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *a7;
  int ar5_00;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  iVar3 = ar4[0x15];
  ar5_00 = 0;
  uVar4 = 0;
  if ((short)ar4[0x14] != 0) {
    do {
      if (((**(ushort **)(iVar3 + 0xc) & 1) != 0) &&
         (uStack_28 = CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4),
                               *(undefined2 *)(*(int *)(iVar3 + 0xc) + 2)),
         (*(ushort *)(*(int *)((int)0xc0 + (int)ar4) + uStack_28 * 2) & 2) != 0)) {
        ar5_00 = ar5_00 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar3 + 0x18);
    } while (uVar4 < *(ushort *)(ar4 + 0x14));
  }
  if (ar5_00 == 0) {
    *ar5 = 0;
  }
  else {
    uVar1 = (**(code **)(*ar4 + 0x10))(*ar4,ar5_00 << 2,ar6,ar7);
    *ar5 = uVar1;
    iVar3 = ar4[0x15];
    piStack_24 = (int *)*ar5;
    if (*(undefined **)((int)0x134 + (int)ar4) == (&FUN_8c11617a)) {
      uStack_34 = 0;
      if ((short)ar4[0x14] != 0) {
        do {
          if ((**(ushort **)(iVar3 + 0xc) & 1) == 0) {
            iVar2 = **(int **)(iVar3 + 8) + -1;
            **(int **)(iVar3 + 8) = iVar2;
            if (iVar2 < 1) {
              FUN_8c115f18(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
            }
            *(undefined4 *)(iVar3 + 8) = 0;
          }
          else {
            uStack_30 = CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4),
                                 *(undefined2 *)(*(int *)(iVar3 + 0xc) + 2));
            if ((*(ushort *)(*(int *)((int)0xc0 + (int)ar4) + uStack_30 * 2) & 2) == 0) {
              iVar2 = **(int **)(iVar3 + 8) + -1;
              **(int **)(iVar3 + 8) = iVar2;
              if (iVar2 < 1) {
                FUN_8c115f18(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
              }
              *(undefined4 *)(iVar3 + 8) = 0;
            }
            else {
              *piStack_24 = iVar3;
              piStack_24 = piStack_24 + 1;
            }
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uStack_34 = uStack_34 + 1;
        } while (uStack_34 < *(ushort *)(ar4 + 0x14));
      }
    }
    else {
      uStack_34 = 0;
      if ((short)ar4[0x14] != 0) {
        do {
          if ((**(ushort **)(iVar3 + 0xc) & 1) == 0) {
            iVar2 = **(int **)(iVar3 + 8) + -1;
            **(int **)(iVar3 + 8) = iVar2;
            if (iVar2 < 1) {
              FUN_8c115ed8(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
            }
            *(undefined4 *)(iVar3 + 8) = 0;
          }
          else {
            uStack_2c = CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4),
                                 *(undefined2 *)(*(int *)(iVar3 + 0xc) + 2));
            if ((*(ushort *)(*(int *)((int)0xc0 + (int)ar4) + uStack_2c * 2) & 2) == 0) {
              iVar2 = **(int **)(iVar3 + 8) + -1;
              **(int **)(iVar3 + 8) = iVar2;
              if (iVar2 < 1) {
                FUN_8c115ed8(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
              }
              *(undefined4 *)(iVar3 + 8) = 0;
            }
            else {
              *piStack_24 = iVar3;
              piStack_24 = piStack_24 + 1;
            }
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uStack_34 = uStack_34 + 1;
        } while (uStack_34 < *(ushort *)(ar4 + 0x14));
      }
    }
    a7 = (&DATA_8c11a5f6);
    FUN_8c0140b4(*ar5,ar5_00,4,(&DATA_8c11a5f6));
    uVar1 = FUN_8c11a588(ar4,*ar5,ar5_00,a7);
    *(short *)((int)0x1da + (int)ar4) = (short)uVar1;
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c11a634\n.set _FUN_8c11a634, _FUN_8c11a634_def\n");
