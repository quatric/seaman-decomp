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
int FUN_8c2609fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c2609fc";
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
  int iVar8;
  short *psVar9;
  byte *pbVar10;
  undefined4 *unaff_r13 = 0;
  int unaff_r14 = 0;
  
  pbVar10 = (byte *)(unsigned)*unaff_r13;
  if ((*(int *)(unsigned)(unaff_r14 + 4) == 1) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(unaff_r14 + 8),ar5,ar6,ar7))
     , iVar2 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + unaff_r14))))
              (*(undefined4 *)(unsigned)(0x88 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10));
    iVar2 = unaff_r13[6] - unaff_r13[8];
    if ((int)unaff_r13[9] < iVar2) {
      iVar2 = unaff_r13[9];
    }
    iVar6 = unaff_r13[5];
    if ((int)unaff_r13[1] < iVar2) {
      iVar2 = unaff_r13[1];
    }
    psVar9 = (short *)(unsigned)(unaff_r13[8] * 2 + iVar6);
    if (*(char *)(unsigned)(unaff_r14 + 0xe) == '\x02') {
      iVar3 = unaff_r13[7];
      ar7 = 0;
      iVar4 = unaff_r13[8];
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)(unsigned)((int)psVar9 + iVar8) = (pbVar10[iVar7] - 0x80) * 0x100;
          iVar5 = iVar7 + 1;
          ar7 = ar7 + 1;
          iVar7 = iVar7 + 2;
          *(ushort *)(unsigned)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (pbVar10[iVar5] - 0x80) * 0x100;
          iVar8 = iVar8 + 2;
        } while (ar7 < iVar2);
      }
    }
    else {
      ar7 = 0;
      if (0 < iVar2) {
        do {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          ar7 = ar7 + 1;
          *psVar9 = (bVar1 - 0x80) * 0x100;
          psVar9 = psVar9 + 1;
        } while (ar7 < iVar2);
      }
    }
    *(int *)(unsigned)(0xa0 + unaff_r14) = iVar2;
    *(int *)(unsigned)(0xa4 + unaff_r14) = iVar2 * *(char *)(unsigned)(unaff_r14 + 0xe);
    *(undefined4 *)(unsigned)(unaff_r14 + 4) = 2;
  }
  iVar2 = *(int *)(unsigned)(unaff_r14 + 4);
  if (iVar2 == 2) {
    iVar2 = (int)0x90;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + unaff_r14))))
                      (*(undefined4 *)(unsigned)(iVar2 + 4 + unaff_r14),
                       *(undefined4 *)(unsigned)(iVar2 + 0x14 + unaff_r14),
                       *(undefined4 *)(unsigned)(iVar2 + 0x10 + unaff_r14),ar7));
    *(undefined4 *)(unsigned)(unaff_r14 + 4) = 3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2609fc\n.set _FUN_8c2609fc, _FUN_8c2609fc_def\n");
