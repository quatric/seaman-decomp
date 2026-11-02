#include "../decls.h"
undefined4 FUN_8c11bbd4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int ar6_00;
  int iVar6;
  undefined4 *ar5_00;
  int *piVar7;
  longlong in_dr0;
  float fVar8;
  float in_fr15;
  char cVar9;
  
  puVar3 = ar5 + 2;
  uVar5 = *(uint *)(ar4 + 0x54);
  *(short *)(ar4 + 0x28) = (short)*ar5;
  ar6_00 = uVar5 * 4;
  *(short *)(ar4 + 0x2a) = (short)ar5[1];
  memmove(*(undefined4 *)(ar4 + 0x2c),puVar3,ar6_00,ar7);
  memmove(*(undefined4 *)(ar4 + 0x34),puVar3 + uVar5,ar6_00,ar7);
  ar5_00 = puVar3 + uVar5 + uVar5;
  cVar9 = '\0';
  puVar3 = ar5_00;
  memmove(*(undefined4 *)(ar4 + 0x38),ar5_00,ar6_00,ar7);
  uVar2 = 0;
  piVar7 = ar5_00 + uVar5;
  uVar4 = 0;
  iVar6 = 0;
  if (cVar9 == '\0') {
    in_fr15 = 0.5;
  }
  if (uVar5 != 0) {
    do {
      fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar1 = *(int *)(ar4 + 0x30);
      thunk_FUN_8c013dfc(uVar2,puVar3,ar6_00,ar7);
      uVar4 = uVar4 + 1;
      in_dr0 = (ulonglong)(uint)(fVar8 * in_fr15) << 0x20;
      *(float *)(iVar1 + iVar6) = fVar8 * in_fr15;
      iVar6 = iVar6 + 4;
    } while (uVar4 < uVar5);
  }
  *(int *)(ar4 + 0x44) = *piVar7 * 4 + *(int *)(ar4 + 0x3c);
  *(int *)(ar4 + 0x48) = piVar7[1] * 4 + *(int *)(ar4 + 0x3c);
  uVar2 = memmove(*(undefined4 *)(ar4 + 0x3c),piVar7 + 2,uVar5 * (*(ushort *)(ar4 + 0x4c) + 1) * 4,
                  ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c11bbd4\n.set _FUN_8c11bbd4, _FUN_8c11bbd4_def\n");
