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
int FUN_8c25f1f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c25f1f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_r13 = 0;
  int unaff_r14 = 0;
  
  iVar9 = *unaff_r13;
  if ((*(int *)(unsigned)(unaff_r14 + 4) == 1) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(unaff_r14 + 8),ar5,ar6,ar7))
     , iVar2 == 0)) {
    ar7 = unaff_r13 + 10;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + unaff_r14))))
              (*(undefined4 *)(unsigned)(0x88 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,ar7));
    iVar2 = unaff_r13[6] - unaff_r13[8];
    if (unaff_r13[9] < iVar2) {
      iVar2 = unaff_r13[9];
    }
    iVar4 = unaff_r13[5];
    if (unaff_r13[1] < iVar2) {
      iVar2 = unaff_r13[1];
    }
    iVar8 = unaff_r13[8] * 2 + iVar4;
    if (*(char *)(unsigned)(unaff_r14 + 0xe) == '\x02') {
      iVar7 = unaff_r13[7];
      ar7 = (int *)(unsigned)0x0;
      iVar3 = unaff_r13[8];
      iVar5 = 0;
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          uVar1 = *(ushort *)(unsigned)(iVar5 * 2 + iVar9);
          ar7 = (int *)(unsigned)((int)ar7 + 1);
          *(ushort *)(unsigned)(iVar6 + iVar8) = uVar1 << 8 | uVar1 >> 8;
          uVar1 = *(ushort *)(unsigned)((iVar5 + 1) * 2 + iVar9);
          *(ushort *)(unsigned)(iVar6 + (iVar7 + iVar3) * 2 + iVar4) = uVar1 << 8 | uVar1 >> 8;
          iVar5 = iVar5 + 2;
          iVar6 = iVar6 + 2;
        } while ((int)ar7 < iVar2);
      }
    }
    else {
      iVar6 = 0;
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          uVar1 = *(ushort *)(unsigned)(iVar4 + iVar9);
          ar7 = (int *)(unsigned)(uint)uVar1;
          iVar6 = iVar6 + 1;
          *(ushort *)(unsigned)(iVar4 + iVar8) = uVar1 << 8 | uVar1 >> 8;
          iVar4 = iVar4 + 2;
        } while (iVar6 < iVar2);
      }
    }
    *(int *)(unsigned)(0xa0 + unaff_r14) = iVar2;
    *(int *)(unsigned)(0xa4 + unaff_r14) = iVar2 * *(char *)(unsigned)(unaff_r14 + 0xe) * 2;
    *(undefined4 *)(unsigned)(unaff_r14 + 4) = 2;
  }
  iVar9 = *(int *)(unsigned)(unaff_r14 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)0x90;
    iVar9 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar9 + unaff_r14))))
                      (*(undefined4 *)(unsigned)(iVar9 + 4 + unaff_r14),
                       *(undefined4 *)(unsigned)(iVar9 + 0x14 + unaff_r14),
                       *(undefined4 *)(unsigned)(iVar9 + 0x10 + unaff_r14),ar7));
    *(undefined4 *)(unsigned)(unaff_r14 + 4) = 3;
  }
  return iVar9;
}

__asm__(".globl _FUN_8c25f1f4\n.set _FUN_8c25f1f4, _FUN_8c25f1f4_def\n");
