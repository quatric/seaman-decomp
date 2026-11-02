#include "../decls.h"
int FUN_8c10c0b4_def(undefined4 *ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 **a5;
  uint *puVar5;
  uint *puVar6;
  uint *a7;
  uint *puVar7;
  int ar6_00;
  int ar4_00;
  uint *puStack_38;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  a5 = &puStack_2c;
  puStack_38 = (uint *)0x0;
  iVar3 = ar4[1];
  uStack_28 = *(undefined4 *)(iVar3 + 4);
  uStack_24 = ar4[2];
  uVar4 = ar6;
  iStack_30 = FUN_8c10bb9a(ar4,a5,ar6,ar7);
  if (iStack_30 == 0) {
    ar4_00 = *(int *)*puStack_2c;
    iVar1 = FUN_8c10afbe(ar4_00,a5,uVar4,ar7);
    iVar2 = 0x80000000;
    uVar4 = 0;
    ar6_00 = ar6 + *(int *)(0xac + ar4_00) + 1;
    puVar5 = ar5;
    puVar6 = ar5;
    a7 = ar5;
    if (ar6 != 0) {
      do {
        if (ar5[uVar4] < *(uint *)(0x88 + ar4_00)) {
          if ((*(ushort *)(*a7 * 2 + iVar1) & 0x40) != 0) {
            ar6_00 = ar6_00 + -1;
          }
          if (*puVar6 <= *(uint *)(0xac + ar4_00)) {
            ar6_00 = ar6_00 + -1;
          }
        }
        else if ((*(ushort *)
                   ((*puVar5 + *(int *)(0x88 + ar4_00) + 0x80000000) * 2 + iVar1) & 0x40)
                 != 0) {
          ar6_00 = ar6_00 + -1;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
        a7 = a7 + 1;
      } while (uVar4 < ar6);
    }
    if (ar6_00 != 0) {
      puStack_38 = (uint *)(**(code **)(iVar3 + 8))(ar6_00 << 2,&uStack_28,puVar6,a7);
      if (puStack_38 == (uint *)0x0) {
        return 1;
      }
      uVar4 = 0;
      puVar5 = puStack_38;
      puVar6 = ar5;
      a7 = ar5;
      puVar7 = ar5;
      if (ar6 != 0) {
        do {
          if (ar5[uVar4] < *(uint *)(0x88 + ar4_00)) {
            if (((*(ushort *)(ar5[uVar4] * 2 + iVar1) & 0x40) == 0) &&
               (*(uint *)(0xac + ar4_00) < ar5[uVar4])) {
              *puVar5 = *a7;
              puVar5 = puVar5 + 1;
            }
          }
          else if ((*(ushort *)((*puVar6 + *(int *)(0x88 + ar4_00) + iVar2) * 2 + iVar1) &
                   0x40) == 0) {
            *puVar5 = *puVar7 + *(int *)(0x88 + ar4_00) + iVar2;
            puVar5 = puVar5 + 1;
          }
          uVar4 = uVar4 + 1;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          a7 = a7 + 1;
        } while (uVar4 < ar6);
      }
      iVar2 = (int)0xac;
      uVar4 = 0;
      if (*(int *)(iVar2 + ar4_00) != -1) {
        do {
          *puVar5 = uVar4;
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 < *(int *)(iVar2 + ar4_00) + 1U);
      }
    }
    iVar2 = FUN_8c11d6f0(*ar4,puStack_38,ar6_00,a7);
    if (iVar2 != 0) {
      iStack_30 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4,ar6_00,a7);
    }
    if (puStack_38 != (uint *)0x0) {
      (**(code **)(iVar3 + 0xc))(puStack_38,&uStack_28,ar6_00,a7);
    }
  }
  return iStack_30;
}

__asm__(".globl _FUN_8c10c0b4\n.set _FUN_8c10c0b4, _FUN_8c10c0b4_def\n");
