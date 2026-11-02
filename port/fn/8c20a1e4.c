#include "../decls.h"
undefined4 FUN_8c20a1e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  float *in_r0;
  int unaff_r10;
  int iVar2;
  uint uVar3;
  int unaff_r14;
  undefined4 in_fr3;
  double dVar4;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd2;
  uint uVar6;
  uint uVar7;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  float fVar5;
  
  puVar1 = (&pvr_20a844);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = *in_r0;
  }
  uVar3 = unaff_r14 + 0x7f;
  if (in_FPSCR_SZ == '\0') {
    in_fr3 = *(undefined4 *)(0x1fc + unaff_r10);
  }
  else {
    in_xd2 = *(double *)(0x1fc + unaff_r10);
  }
  iVar2 = (int)0x200;
  if (in_FPSCR_SZ == '\0') {
    in_xd2 = (double)CONCAT44(in_fr3,in_fr3);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)((ulonglong)in_xd2 >> 0x20) * in_fr15;
    dVar4 = (double)CONCAT44(fVar5,SUB84(in_xd2,0));
    uVar6 = (uint)fVar5;
  }
  else {
    dVar4 = in_xd2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)dVar4;
  }
  uVar6 = uVar6 & uVar3;
  do {
    unaff_r14 = unaff_r14 + -1;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(unaff_r14 * 4 + unaff_r10),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unaff_r14 * 4 + unaff_r10);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)((ulonglong)dVar4 >> 0x20) * in_fr15;
      dVar4 = (double)CONCAT44(fVar5,SUB84(dVar4,0));
      uVar7 = (uint)fVar5;
    }
    else {
      dVar4 = dVar4 * (double)CONCAT44(in_fr14,in_fr15);
      uVar7 = (uint)dVar4;
    }
    uVar7 = uVar7 & uVar3;
    (*(code *)puVar1)(unaff_r14 * 4 + iVar2,(uVar7 << 8 | uVar6) & 0xffff,ar6,ar7);
    uVar6 = uVar7;
  } while (unaff_r14 != 0);
  return 0;
}

__asm__(".globl _FUN_8c20a1e4\n.set _FUN_8c20a1e4, _FUN_8c20a1e4_def\n");
