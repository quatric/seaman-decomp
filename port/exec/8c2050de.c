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
undefined4 FUN_8c2050de_def(undefined4 ar4,int ar5,undefined4 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c2050de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_r8 = 0;
  int unaff_r9 = 0;
  int iVar5;
  undefined4 *ar6_00;
  int iVar6;
  ushort *puVar7;
  undefined4 in_PR = 0;
  
  iVar6 = *unaff_r8;
  puVar7 = (ushort *)(unsigned)*ar6;
  if ((iVar6 == 0) || (puVar7 == (ushort *)(unsigned)0x0)) {
    return 0;
  }
  do {
    uVar1 = *puVar7;
    iVar5 = 0;
    if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((uVar1 & 0x80) != 0 || (((uVar1 & 2) == 0 && ((uVar1 & 0x100) != 0)))))))) {
      iVar5 = 1;
    }
    uVar1 = *puVar7;
    if ((((uVar1 & 0x200) != 0) || ((uVar1 & 0x400) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((uVar1 & 0x800) != 0 || (((uVar1 & 2) == 0 && ((uVar1 & 0x1000) != 0)))))))) {
      iVar5 = 2;
    }
    if (iVar5 == 0) {
      if (iVar6 == 0) {
        return 0;
      }
      if (*(int *)(unsigned)(iVar6 + 0xc) < *(int *)(unsigned)(puVar7 + 6)) {
        do {
          iVar6 = *(int *)(unsigned)(iVar6 + 8);
          if (iVar6 == 0) {
            return 0;
          }
        } while (*(int *)(unsigned)(iVar6 + 0xc) < *(int *)(unsigned)(puVar7 + 6));
      }
      if (iVar6 == 0) {
        return 0;
      }
      if (puVar7 == (ushort *)(unsigned)0x0) {
        return 0;
      }
      if (*(int *)(unsigned)(puVar7 + 6) < *(int *)(unsigned)(iVar6 + 0xc)) {
        do {
          puVar7 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + 4));
          if (puVar7 == (ushort *)(unsigned)0x0) {
            return 0;
          }
        } while (*(int *)(unsigned)(puVar7 + 6) < *(int *)(unsigned)(iVar6 + 0xc));
      }
    }
    else {
      if (*(int *)(unsigned)(iVar6 + 0xc) + *(int *)(unsigned)(iVar6 + 0x10) == *(int *)(unsigned)(puVar7 + 6)) {
        uVar2 = *(uint *)(unsigned)(iVar6 + 0xc);
        if ((int)uVar2 < 0) {
          uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
        }
        else {
          uVar2 = uVar2 & 0x1f;
        }
        if (uVar2 != 0) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204e40((uint)uVar1,ar5,ar6,ar7));
          if (iVar3 == 0) {
            return 3;
          }
          *(undefined4 *)(unsigned)(iVar3 + 0xc) = *(undefined4 *)(unsigned)(iVar6 + 0xc);
          *(uint *)(unsigned)(iVar6 + 0xc) = *(int *)(unsigned)(iVar6 + 0xc) + 0x1fU & 0xffffffe0;
          iVar4 = *(int *)(unsigned)(iVar6 + 0xc) - *(int *)(unsigned)(iVar3 + 0xc);
          *(int *)(unsigned)(iVar3 + 0x10) = iVar4;
          *(int *)(unsigned)(iVar6 + 0x10) = *(int *)(unsigned)(iVar6 + 0x10) - iVar4;
          if (*(int *)(unsigned)(iVar6 + 4) == 0) {
            ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204e92(unaff_r8,unaff_r9,iVar3,ar7); });
          }
          else {
            ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204eb6(unaff_r9,iVar3,*(int *)(unsigned)(iVar6 + 4),ar7); });
          }
        }
        ar5 = *(int *)(unsigned)(puVar7 + 6);
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204f2a(*(undefined4 *)(unsigned)(iVar6 + 0xc),ar5,*(undefined4 *)(unsigned)(puVar7 + 8),ar7));
        iVar4 = *(int *)(unsigned)(puVar7 + 6);
        iVar3 = *(int *)(unsigned)(iVar6 + 0xc);
        *(int *)(unsigned)(puVar7 + 6) = iVar3;
        ar6 = (undefined4 *)(unsigned)(iVar4 - iVar3);
        *(int *)(unsigned)(iVar6 + 0xc) = *(int *)(unsigned)(iVar6 + 0xc) + *(int *)(unsigned)(puVar7 + 8);
        if (iVar5 == 1) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(puVar7 + 10) + 0x1c) = *(undefined4 *)(unsigned)(puVar7 + 6);
        }
        else {
          ar6 = (undefined4 *)(unsigned)((uint)ar6 >> 2);
          ar7 = (int)ar6 * 4;
          ar5 = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(puVar7 + 10) + 8) = *(undefined4 *)(unsigned)(puVar7 + 6);
          uVar2 = 0;
          do {
            if (*(int *)(unsigned)(*(int *)(unsigned)(puVar7 + 10) + 0xc + uVar2) != 0) {
              iVar5 = *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + 10) + 0xc + ar5);
              *(int *)(unsigned)(iVar5 + 0x1c) = *(int *)(unsigned)(iVar5 + 0x1c) + (int)ar6 * -4;
            }
            uVar2 = uVar2 + 4;
            ar5 = ar5 + 4;
          } while (uVar2 < 0x40);
        }
        ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar6 + 8));
        if ((ar6_00 != (undefined4 *)(unsigned)0x0) &&
           (*(int *)(unsigned)(iVar6 + 0xc) + *(int *)(unsigned)(iVar6 + 0x10) == ar6_00[3])) {
          *(int *)(unsigned)(iVar6 + 0x10) = *(int *)(unsigned)(iVar6 + 0x10) + ar6_00[4];
          ar5 = unaff_r9;
          ar6 = ar6_00;
          ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204ed2(unaff_r8,unaff_r9,ar6_00,ar7); });
          ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204e6c(ar6_00,ar5,ar6,ar7); });
        }
      }
      if ((puVar7 != (ushort *)(unsigned)0x0) && (*(int *)(unsigned)(puVar7 + 6) < *(int *)(unsigned)(iVar6 + 0xc))) {
        do {
          puVar7 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + 4));
          if (puVar7 == (ushort *)(unsigned)0x0) break;
        } while (*(int *)(unsigned)(puVar7 + 6) < *(int *)(unsigned)(iVar6 + 0xc));
      }
    }
    if (puVar7 == (ushort *)(unsigned)0x0) {
      return 0;
    }
    if (iVar6 == 0) {
      return 0;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2050de\n.set _FUN_8c2050de, _FUN_8c2050de_def\n");
