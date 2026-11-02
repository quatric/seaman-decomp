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
undefined4 FUN_8c207fe4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c207fe4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int in_r1 = (int)(unsigned long)vin1;
  int *in_r2 = 0;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int unaff_r14 = 0;
  
  piVar2 = 0x8c4a9bfc;
  puVar1 = ((void *)(unsigned)0x8c20a844);
  uVar8 = 0;
  if (in_r1 < *in_r2 + ar4) {
    if (*(undefined4 *)(unsigned)0x8c4a9bfc != ar4) {
      *(undefined4 *)(unsigned)0x8c4a9bfc = ar4;
      piVar3 = 0x8c4a9eb4;
      *(undefined4 *)(unsigned)0x8c4a9eb4 = *(undefined4 *)(unsigned)0x8c4a9c04 + *piVar2;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xec,*piVar3,ar6,ar7));
    }
  }
  else {
    uVar8 = 0x12;
  }
  puVar4 = 0x8c4a9eb8;
  if ((*(undefined4 *)(unsigned)0x8c4a9c08 + unaff_r14 < 1) && (*(undefined4 *)(unsigned)0x8c4a9c0c + unaff_r14 < 1)) {
    uVar8 = 0x12;
  }
  else if (*(undefined4 *)(unsigned)0x8c4a9c00 != unaff_r14) {
    *(undefined4 *)(unsigned)0x8c4a9eb8 = *(undefined4 *)(unsigned)0x8c4a9c08 + unaff_r14 | (*(undefined4 *)(unsigned)0x8c4a9c0c + unaff_r14) * 0x10000;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xf0,*puVar4,ar6,ar7));
    uVar7 = *(undefined4 *)(unsigned)0x8c4a9e6c & 0xfff003ff;
    if (unaff_r14 < 1) {
      if ((*(undefined4 *)(unsigned)0x8c4a9bcc & 1) == 1) {
        uVar5 = (uint)0x1de;
      }
      else if ((*(undefined4 *)(unsigned)0x8c4a9bcc & 0x42) == 0x42) {
        iVar6 = *(int *)(unsigned)(0x8c4aa084 + *(undefined4 *)(unsigned)0x8c4a9bdc * 4);
        uVar5 = ((int)(iVar6 + (uint)(iVar6 < 0)) >> 1) - 2;
      }
      else {
        uVar5 = (uint)0xee;
      }
    }
    else {
      iVar6 = unaff_r14;
      if (unaff_r14 <= *(undefined4 *)(unsigned)0x8c4a9be8) {
        iVar6 = *(undefined4 *)(unsigned)0x8c4a9be8;
      }
      uVar5 = *(undefined4 *)(unsigned)0x8c4a9bf0 - iVar6;
      if (*(undefined4 *)(unsigned)0x8c4a9bf0 < unaff_r14 + uVar5) {
        uVar5 = *(undefined4 *)(unsigned)0x8c4a9bf0 - *(undefined4 *)(unsigned)0x8c4a9be8;
      }
      if (*(undefined4 *)(unsigned)0x8c4a9bf0 < uVar5) {
        *(undefined4 *)(unsigned)0x8c4a9bf0 = uVar5;
      }
    }
    *(undefined4 *)(unsigned)0x8c4a9c00 = unaff_r14;
    *(undefined4 *)(unsigned)0x8c4a9e6c = (uVar5 & (int)0x3ff) << 10 | uVar7;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,*(undefined4 *)(unsigned)0x8c4a9e74 & 0xfffffffe,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x5c,*(undefined4 *)(unsigned)0x8c4a9e6c,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,*(undefined4 *)(unsigned)0x8c4a9e74,ar6,ar7));
  }
  return uVar8;
}

__asm__(".globl _FUN_8c207fe4\n.set _FUN_8c207fe4, _FUN_8c207fe4_def\n");
