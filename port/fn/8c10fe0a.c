#include "../decls.h"
undefined4 FUN_8c10fe0a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r14;
  float fVar4;
  byte in_FPSCR_CAUSE;
  byte bVar5;
  byte in_FPSCR_DN;
  byte bVar6;
  byte in_FPSCR_PR;
  byte bVar7;
  byte in_FPSCR_SZ;
  byte bVar8;
  
  if (*(int *)(in_r0 + unaff_r14) == 0) {
    return in_r0;
  }
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar5 = 0;
  bVar6 = 0;
  bVar7 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar8 = (byte)((uVar3 & 0x100000) >> 0x14);
  iVar1 = FUN_8c111dfe(**(undefined4 **)(unaff_r14 + 0x10),ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(unaff_r14 + 0x32) == '\0') {
    if (*(int *)(unaff_r14 + 0x28) != 0) {
      uVar3 = ((uint)bVar5 << 0xc | (uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | (uint)bVar8 << 0x14)
              & 0xffe7ffff;
      if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
        fVar4 = *(float *)(unaff_r14 + 0x54);
      }
      else {
        fVar4 = (float)((ulonglong)*(undefined8 *)(unaff_r14 + 0x54) >> 0x20);
      }
      if ((char)((uVar3 & 0x80000) >> 0x13) != '\0' ||
          fVar4 <= (float)*(int *)(0x88 + unaff_r14)) goto LAB_8c10fe62;
    }
    uVar2 = FUN_8c10fd82(unaff_r14,ar5,ar6,ar7);
    *(short *)(unaff_r14 + 0x30) = (short)uVar2;
  }
LAB_8c10fe62:
  (*(code *)(&memmove))
            (iVar1,(*(ushort *)(unaff_r14 + 0x30) - 1) * *(int *)(unaff_r14 + 0x70) * 4 +
                   *(int *)(unaff_r14 + 0x3c),*(int *)(unaff_r14 + 0x70) << 2,ar7);
  iVar1 = *(int *)(unaff_r14 + 0x3c) + *(int *)(0x80 + unaff_r14) * 4;
  *(int *)(unaff_r14 + 0x3c) = iVar1;
  if (iVar1 == *(int *)(unaff_r14 + 0x38)) {
    *(undefined4 *)(unaff_r14 + 0x3c) = *(undefined4 *)(unaff_r14 + 0x34);
  }
  *(int *)(unaff_r14 + 0x48) = *(int *)(unaff_r14 + 0x48) + -1;
  return 0x48;
}

__asm__(".globl _FUN_8c10fe0a\n.set _FUN_8c10fe0a, _FUN_8c10fe0a_def\n");
