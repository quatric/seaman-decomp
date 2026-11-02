#include "../decls.h"
undefined4 FUN_8c11bbec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int in_r0;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int a5;
  int a6;
  uint uVar6;
  int iVar7;
  int unaff_r13;
  int a5_00;
  int *piVar8;
  int unaff_r14;
  undefined1 *puVar9;
  double in_dr0;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar10;
  byte in_FPSCR_DN;
  byte bVar11;
  byte in_FPSCR_PR;
  byte bVar12;
  byte in_FPSCR_SZ;
  byte bVar13;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  puVar1 = (&memmove);
  if (in_FPSCR_SZ == 0) {
    puVar9 = auStack_8;
  }
  else {
    puVar9 = auStack_c;
  }
  *(undefined4 *)(puVar9 + -4) = in_PR;
  uVar6 = *(uint *)(in_r0 + unaff_r14);
  *(short *)(unaff_r14 + 0x28) = (short)*ar4;
  iVar7 = uVar6 * 4;
  *(short *)(unaff_r14 + 0x2a) = (short)ar4[1];
  (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x2c),ar5,iVar7,ar7);
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
  (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x34),unaff_r13 + iVar7,iVar7,ar7);
  a5_00 = unaff_r13 + iVar7 + iVar7;
  uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar13 << 0x14)
          & 0xffe7ffff;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
  a5 = a5_00;
  a6 = iVar7;
  (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x38),a5_00,iVar7,ar7);
  puVar2 = (&thunk_FUN_8c013dfc);
  uVar5 = 0;
  piVar8 = (int *)(a5_00 + iVar7);
  uVar3 = 0;
  iVar7 = 0;
  if (bVar13 == 0) {
    in_fr15 = (float)DAT_8c11bdfc;
  }
  if (uVar6 != 0) {
    do {
      *(int *)(puVar9 + -8) = *(int *)(unaff_r14 + 0x30) + iVar7;
      uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & 0xffe7ffff;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
      (*(code *)puVar2)(uVar5,a5,a6,ar7);
      uVar3 = uVar3 + 1;
      uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & 0xffe7ffff;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
      if (bVar12 == 0) {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * in_fr15,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 * (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar13 == 0) {
        *(int *)*(double **)(puVar9 + -8) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        **(double **)(puVar9 + -8) = in_dr0;
      }
      iVar7 = iVar7 + 4;
    } while (uVar3 < uVar6);
  }
  *(int *)(unaff_r14 + 0x44) = *piVar8 * 4 + *(int *)(unaff_r14 + 0x3c);
  *(int *)(unaff_r14 + 0x48) = piVar8[1] * 4 + *(int *)(unaff_r14 + 0x3c);
  uVar5 = (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x3c),piVar8 + 2,
                            uVar6 * (*(ushort *)(unaff_r14 + 0x4c) + 1) * 4,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c11bbec\n.set _FUN_8c11bbec, _FUN_8c11bbec_def\n");
