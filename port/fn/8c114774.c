#include "../decls.h"
undefined4 FUN_8c114774_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined *puVar2;
  ushort *ar4_00;
  int *a6;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int a5;
  int ar6_00;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int a4;
  
  a4 = *ar4;
  iVar8 = 0;
  puVar7 = *(undefined4 **)((int)0x98 + (int)ar4);
  ar4_00 = (ushort *)(**(code **)(a4 + 0x14))(a4,ar4[0xe] << 1,1,ar7);
  ar6_00 = ar4[0xe] << 1;
  memmove(ar4_00,*(undefined4 *)((int)0xc0 + (int)ar4),ar6_00,ar7);
  uVar1 = *ar4_00;
  while ((uVar1 & 1) == 0) {
    iVar8 = iVar8 + 1;
    uVar1 = ar4_00[iVar8];
  }
  ar4_00[iVar8] = ar4_00[iVar8] & (ushort)0xfffe;
  iVar3 = iVar8 * 4;
  uVar4 = *(undefined4 *)(*(int *)((int)0x98 + (int)ar4) + iVar3);
  uVar9 = *(int *)((iVar8 + 1) * 4 + *(int *)((int)0x90 + (int)ar4)) -
          *(int *)(iVar3 + *(int *)((int)0x90 + (int)ar4));
  a5 = uVar9 * 4;
  a6 = (int *)(**(code **)(a4 + 0x10))(a4,a5,ar6_00,ar7);
  *a6 = iVar8;
  uVar5 = 0;
  do {
    uVar5 = uVar5 + 1;
    *puVar7 = uVar4;
    puVar7 = puVar7 + 1;
  } while (uVar5 <= (uint)ar4[0xe]);
  uVar5 = 0;
  if (uVar9 != 0) {
    do {
      a5 = *(int *)((*(int *)(iVar3 + *(int *)((int)0x90 + (int)ar4)) + uVar5) * 4 +
                   *(int *)((int)0x90 + (int)ar4));
      ar4_00[a5] = ar4_00[a5] | 3;
      uVar6 = uVar5 + 1;
      a6[uVar5] = a5;
      uVar5 = uVar6;
    } while (uVar6 < uVar9);
  }
  puVar2 = (&FUN_8c11617a);
  iVar8 = (int)0x144;
  *(uint *)(iVar8 + (int)ar4) = uVar9;
  *(int **)(iVar8 + 4 + (int)ar4) = a6;
  iVar8 = (int)0xc0;
  *(ushort **)(iVar8 + (int)ar4) = ar4_00;
  *(undefined4 *)(iVar8 + -0xc + (int)ar4) = 0;
  if ((*(undefined **)(iVar8 + 0x70 + (int)ar4) == puVar2) &&
     (uVar5 = FUN_8c1155a0(ar4,a5,a6,ar7), (uVar5 & 0xff) != 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c114774\n.set _FUN_8c114774, _FUN_8c114774_def\n");
