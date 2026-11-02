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
undefined4 FUN_8c2050cc_def(int *ar4,int ar5,undefined4 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c2050cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *ar6_00;
  int iVar8;
  ushort *puVar9;
  
  iVar8 = *ar4;
  puVar9 = (ushort *)(unsigned)*ar6;
  if ((iVar8 == 0) || (iVar3 = ar5, puVar9 == (ushort *)(unsigned)0x0)) {
    return 0;
  }
  do {
    uVar1 = *puVar9;
    iVar7 = 0;
    if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((0x80 & uVar1) != 0 || (((uVar1 & 2) == 0 && ((0x100 & uVar1) != 0))))))))
    {
      iVar7 = 1;
    }
    uVar1 = *puVar9;
    uVar5 = (uint)uVar1;
    if (((((int)0x200 & uVar5) != 0) || (((int)0x400 & uVar5) != 0)) ||
       (((uVar1 & 2) == 0 &&
        ((((int)0x800 & uVar5) != 0 ||
         (((uVar1 & 2) == 0 && (((int)0x1000 & uVar5) != 0)))))))) {
      iVar7 = 2;
    }
    if (iVar7 == 0) {
      if (iVar8 == 0) {
        return 0;
      }
      if (*(int *)(unsigned)(iVar8 + 0xc) < *(int *)(unsigned)(puVar9 + 6)) {
        do {
          iVar8 = *(int *)(unsigned)(iVar8 + 8);
          if (iVar8 == 0) {
            return 0;
          }
        } while (*(int *)(unsigned)(iVar8 + 0xc) < *(int *)(unsigned)(puVar9 + 6));
      }
      if (iVar8 == 0) {
        return 0;
      }
      if (puVar9 == (ushort *)(unsigned)0x0) {
        return 0;
      }
      if (*(int *)(unsigned)(puVar9 + 6) < *(int *)(unsigned)(iVar8 + 0xc)) {
        do {
          puVar9 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(puVar9 + 4));
          if (puVar9 == (ushort *)(unsigned)0x0) {
            return 0;
          }
        } while (*(int *)(unsigned)(puVar9 + 6) < *(int *)(unsigned)(iVar8 + 0xc));
      }
    }
    else {
      if (*(int *)(unsigned)(iVar8 + 0xc) + *(int *)(unsigned)(iVar8 + 0x10) == *(int *)(unsigned)(puVar9 + 6)) {
        uVar2 = *(uint *)(unsigned)(iVar8 + 0xc);
        if ((int)uVar2 < 0) {
          uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
        }
        else {
          uVar2 = uVar2 & 0x1f;
        }
        if (uVar2 != 0) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204e40(uVar5,iVar3,ar6,ar7));
          if (iVar3 == 0) {
            return 3;
          }
          *(undefined4 *)(unsigned)(iVar3 + 0xc) = *(undefined4 *)(unsigned)(iVar8 + 0xc);
          *(uint *)(unsigned)(iVar8 + 0xc) = *(int *)(unsigned)(iVar8 + 0xc) + 0x1fU & 0xffffffe0;
          iVar4 = *(int *)(unsigned)(iVar8 + 0xc) - *(int *)(unsigned)(iVar3 + 0xc);
          *(int *)(unsigned)(iVar3 + 0x10) = iVar4;
          *(int *)(unsigned)(iVar8 + 0x10) = *(int *)(unsigned)(iVar8 + 0x10) - iVar4;
          if (*(int *)(unsigned)(iVar8 + 4) == 0) {
            (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204e92(ar4,ar5,iVar3,ar7));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204eb6(ar5,iVar3,*(int *)(unsigned)(iVar8 + 4),ar7));
          }
        }
        iVar3 = *(int *)(unsigned)(puVar9 + 6);
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204f2a(*(undefined4 *)(unsigned)(iVar8 + 0xc),iVar3,*(undefined4 *)(unsigned)(puVar9 + 8),ar7));
        iVar6 = *(int *)(unsigned)(puVar9 + 6);
        iVar4 = *(int *)(unsigned)(iVar8 + 0xc);
        *(int *)(unsigned)(puVar9 + 6) = iVar4;
        ar6 = (undefined4 *)(unsigned)(iVar6 - iVar4);
        *(int *)(unsigned)(iVar8 + 0xc) = *(int *)(unsigned)(iVar8 + 0xc) + *(int *)(unsigned)(puVar9 + 8);
        if (iVar7 == 1) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(puVar9 + 10) + 0x1c) = *(undefined4 *)(unsigned)(puVar9 + 6);
        }
        else {
          ar6 = (undefined4 *)(unsigned)((uint)ar6 >> 2);
          ar7 = (int)ar6 * 4;
          iVar3 = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(puVar9 + 10) + 8) = *(undefined4 *)(unsigned)(puVar9 + 6);
          uVar5 = 0;
          do {
            if (*(int *)(unsigned)(*(int *)(unsigned)(puVar9 + 10) + 0xc + uVar5) != 0) {
              iVar7 = *(int *)(unsigned)(*(int *)(unsigned)(puVar9 + 10) + 0xc + iVar3);
              *(int *)(unsigned)(iVar7 + 0x1c) = *(int *)(unsigned)(iVar7 + 0x1c) + (int)ar6 * -4;
            }
            uVar5 = uVar5 + 4;
            iVar3 = iVar3 + 4;
          } while (uVar5 < 0x40);
        }
        ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar8 + 8));
        if ((ar6_00 != (undefined4 *)(unsigned)0x0) &&
           (*(int *)(unsigned)(iVar8 + 0xc) + *(int *)(unsigned)(iVar8 + 0x10) == ar6_00[3])) {
          *(int *)(unsigned)(iVar8 + 0x10) = *(int *)(unsigned)(iVar8 + 0x10) + ar6_00[4];
          iVar3 = ar5;
          ar6 = ar6_00;
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204ed2(ar4,ar5,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204e6c(ar6_00,iVar3,ar6,ar7));
        }
      }
      if ((puVar9 != (ushort *)(unsigned)0x0) && (*(int *)(unsigned)(puVar9 + 6) < *(int *)(unsigned)(iVar8 + 0xc))) {
        do {
          puVar9 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(puVar9 + 4));
          if (puVar9 == (ushort *)(unsigned)0x0) break;
        } while (*(int *)(unsigned)(puVar9 + 6) < *(int *)(unsigned)(iVar8 + 0xc));
      }
    }
    if (puVar9 == (ushort *)(unsigned)0x0) {
      return 0;
    }
    if (iVar8 == 0) {
      return 0;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2050cc\n.set _FUN_8c2050cc, _FUN_8c2050cc_def\n");
