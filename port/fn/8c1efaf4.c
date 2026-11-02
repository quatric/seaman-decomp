#include "../decls.h"
int pvr_1efaf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int a7;
  int iVar5;
  undefined4 a7_00;
  code *pcVar6;
  int iVar7;
  int a5;
  undefined4 a5_00;
  undefined4 *puVar8;
  
  iVar2 = 0x8c470be0;
  piVar1 = 0x8c4727b4;
  a7 = FUN_8c1f43d2(ar4,ar5,ar6,ar7);
  if (a7 == -2) {
    *(undefined4 *)((int)0x10e8 + *piVar1) = 1;
  }
  else if (a7 < 0) {
    if ((code *)*(undefined4 *)0x8c470c18 != (code *)0x0) {
      (*(code *)*(undefined4 *)0x8c470c18)(2,0xfffffff8,*(undefined4 *)(iVar2 + 8),a7);
    }
  }
  else {
    FUN_8c1f442a(ar4,ar5,ar6,ar7);
    a5 = (int)(short)0x3ff;
    iVar7 = *(undefined4 *)0x8c470e64 * 2;
    *(ushort *)(iVar2 + 0x30 + iVar7) =
         ((ushort)*(undefined4 *)0xa05f810c & 0x3ff) +
         *(short *)(iVar2 + 0x34 + iVar7) * ((ushort)*(undefined4 *)0xa05f80dc & 0x3ff);
    FUN_8c1ef640(iVar7,a5,ar6,ar7);
    FUN_8c1f4414(iVar7,a5,ar6,ar7);
    iVar5 = FUN_8c1f4734(iVar7,a5,ar6,ar7);
    if (iVar5 != 0) {
      if (((code *)*(undefined4 *)0x8c470c1c == (code *)0x0) ||
         (iVar5 = (*(code *)*(undefined4 *)0x8c470c1c)(iVar7,a5,ar6,ar7), iVar5 != 0)) {
        iVar5 = FUN_8c1efa2a(iVar7,a5,ar6,ar7);
        *(undefined4 *)0x8c470e70 = iVar5;
      }
      puVar8 = 0xa05f8040;
      if ((*(int *)((int)0xfbc + *piVar1) != 0) && (*(undefined4 *)0x8c470e70 != 0)) {
        *(undefined4 *)0x8c470e68 = *(undefined4 *)0xa05f8040;
        *puVar8 = *(undefined4 *)(*piVar1 + (int)0xfbc);
        *(undefined4 *)0xa05f80e8 = *(undefined4 *)0xa05f80e8 | 8;
        piVar3 = 0x8c470e8c;
        *(undefined4 *)0x8c470e6c = 1;
        *piVar3 = *piVar3 + 1;
      }
    }
    puVar8 = 0x8c470c20;
    for (iVar5 = 0; puVar4 = 0x8c470e64, iVar5 < 0x30; iVar5 = iVar5 + 1) {
      a7_00 = ar7;
      if (puVar8[2] != 0) {
        a5_00 = puVar8[1];
        iVar7 = thunk_FUN_8c1f461c(*puVar8,a5_00,ar6,ar7);
        a7_00 = ar7;
        if (iVar7 != 0) {
          pcVar6 = (code *)puVar8[2];
          puVar8[2] = 0;
          a7_00 = FUN_8c1efd26(*puVar8,a5_00,ar6,ar7);
          ar6 = FUN_8c1efd14(*puVar8,a5_00,ar6,ar7);
          (*pcVar6)(*puVar8,puVar8[1],ar6,a7_00);
        }
      }
      puVar8 = puVar8 + 3;
      ar7 = a7_00;
    }
    *(undefined4 *)((int)0x10e8 + *piVar1) = 0;
    *puVar4 = *puVar4 ^ 1;
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  return a7;
}

__asm__(".globl _pvr_1efaf4\n.set _pvr_1efaf4, _pvr_1efaf4_def\n");
