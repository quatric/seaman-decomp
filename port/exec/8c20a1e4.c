#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a1e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20a1e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  float *in_r0 = (float *)(unsigned long)vin0;
  int unaff_r10 = 0;
  int iVar2;
  uint uVar3;
  int unaff_r14 = 0;
  undefined4 in_fr3 = 0;
  double dVar4;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd2 = 0;
  uint uVar6;
  uint uVar7;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  float fVar5;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = *in_r0;
  }
  uVar3 = unaff_r14 + 0x7f;
  if (in_FPSCR_SZ == '\0') {
    in_fr3 = *(undefined4 *)(unsigned)(0x1fc + unaff_r10);
  }
  else {
    in_xd2 = *(double *)(unsigned)(0x1fc + unaff_r10);
  }
  iVar2 = (int)0x200;
  if (in_FPSCR_SZ == '\0') {
    in_xd2 = CONCAT44D(in_fr3,in_fr3);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = F32HI(in_xd2) * in_fr15;
    dVar4 = CONCAT44D(fVar5,SUB84(in_xd2,0));
    uVar6 = (uint)fVar5;
  }
  else {
    dVar4 = in_xd2 * CONCAT44D(in_fr14,in_fr15);
    uVar6 = (uint)dVar4;
  }
  uVar6 = uVar6 & uVar3;
  do {
    unaff_r14 = unaff_r14 + -1;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 * 4 + unaff_r10),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)(unaff_r14 * 4 + unaff_r10);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32HI(dVar4) * in_fr15;
      dVar4 = CONCAT44D(fVar5,SUB84(dVar4,0));
      uVar7 = (uint)fVar5;
    }
    else {
      dVar4 = dVar4 * CONCAT44D(in_fr14,in_fr15);
      uVar7 = (uint)dVar4;
    }
    uVar7 = uVar7 & uVar3;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 * 4 + iVar2,(uVar7 << 8 | uVar6) & 0xffff,ar6,ar7));
    uVar6 = uVar7;
  } while (unaff_r14 != 0);
  return 0;
}

__asm__(".globl _FUN_8c20a1e4\n.set _FUN_8c20a1e4, _FUN_8c20a1e4_def\n");
