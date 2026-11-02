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
int FUN_8c25fa64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined2 *ar7)

{
  ring[rp++ & 255] = "FUN_8c25fa64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  undefined4 *unaff_r13 = 0;
  int iVar10;
  int unaff_r14 = 0;
  
  pbVar9 = (byte *)(unsigned)*unaff_r13;
  if ((*(int *)(unsigned)(unaff_r14 + 4) == 1) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(unaff_r14 + 8),ar5,ar6,ar7)), iVar2 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x88))))
              (*(undefined4 *)(unsigned)(unaff_r14 + 0x8c),unaff_r13 + 8,unaff_r13 + 9,unaff_r13 + 10));
    iVar2 = unaff_r13[6] - unaff_r13[8];
    if ((int)unaff_r13[9] < iVar2) {
      iVar2 = unaff_r13[9];
    }
    iVar6 = unaff_r13[5];
    if ((int)unaff_r13[1] < iVar2) {
      iVar2 = unaff_r13[1];
    }
    puVar8 = (undefined2 *)(unsigned)(unaff_r13[8] * 2 + iVar6);
    if (*(char *)(unsigned)(unaff_r14 + 0xe) == '\x02') {
      iVar3 = unaff_r13[7];
      ar7 = (undefined2 *)(unsigned)0x0;
      iVar4 = unaff_r13[8];
      iVar10 = 0;
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(unsigned)((int)puVar8 + iVar7) =
               *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c277da0) + (uint)pbVar9[(int)ar7] * 2);
          iVar5 = (int)ar7 + 1;
          ar7 = ar7 + 1;
          *(undefined2 *)(unsigned)(iVar7 + (iVar3 + iVar4) * 2 + iVar6) =
               *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c277da0) + (uint)pbVar9[iVar5] * 2);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar2);
      }
    }
    else {
      iVar6 = 0;
      ar7 = puVar8;
      if (0 < iVar2) {
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar6 = iVar6 + 1;
          *ar7 = *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c277da0) + (uint)bVar1 * 2);
          ar7 = ar7 + 1;
        } while (iVar6 < iVar2);
      }
    }
    *(int *)(unsigned)(unaff_r14 + 0xa0) = iVar2;
    *(int *)(unsigned)(unaff_r14 + 0xa4) = iVar2 * *(char *)(unsigned)(unaff_r14 + 0xe);
    *(undefined4 *)(unsigned)(unaff_r14 + 4) = 2;
  }
  iVar2 = *(int *)(unsigned)(unaff_r14 + 4);
  if (iVar2 == 2) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x90))))
                      (*(undefined4 *)(unsigned)(unaff_r14 + 0x94),*(undefined4 *)(unsigned)(unaff_r14 + 0xa4),
                       *(undefined4 *)(unsigned)(unaff_r14 + 0xa0),ar7));
    *(undefined4 *)(unsigned)(unaff_r14 + 4) = 3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c25fa64\n.set _FUN_8c25fa64, _FUN_8c25fa64_def\n");
