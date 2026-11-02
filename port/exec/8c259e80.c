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
undefined4 FUN_8c259e80_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c259e80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 ar4_00;
  int ar6_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((ar5 != 0) && (ar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) <= (*(undefined4 *)(unsigned)(unsigned)0x8c277c9c))) {
    iVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0);
    uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c277c8c);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468((*(undefined4 *)(unsigned)(unsigned)0x8c277ca0),(*(undefined4 *)(unsigned)(unsigned)0x8c277c8c),vr6,vr7));
    uVar6 = iVar4 - uVar6 * iVar1;
    iVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c277c90);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468((*(undefined4 *)(unsigned)(unsigned)0x8c277c94),(*(undefined4 *)(unsigned)(unsigned)0x8c277c90),vr6,vr7));
    if ((iVar1 == iVar2) && (iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c277c94), (*(undefined4 *)(unsigned)(unsigned)0x8c277ca8) != 0)) {
LAB_8c259f6a:
      (*(undefined4 *)(unsigned)(unsigned)0x8c277c94) = iVar2;
      if (uVar6 != (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4) = uVar6;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c277ca8) = (*(undefined4 *)(unsigned)(unsigned)0x8c277c8c) - (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4);
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c277ca8) < ar5) {
        uVar6 = 0;
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277ca8) != 0) {
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c23c814(ar4,(*(undefined4 *)(unsigned)(unsigned)0x8c277c88) + (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4),(*(undefined4 *)(unsigned)(unsigned)0x8c277ca8),ar7));
          (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) = (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) + (*(undefined4 *)(unsigned)(unsigned)0x8c277ca8);
          uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c277ca8);
        }
        iVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c277c88);
        iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c277c90);
        ar4_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4b3338);
        if (ar5 - uVar6 < (*(undefined4 *)(unsigned)(unsigned)0x8c277c9c) - (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0)) {
          for (; (*(undefined4 *)(unsigned)(unsigned)0x8c277c88) = iVar4, (*(undefined4 *)(unsigned)(unsigned)0x8c277c90) = iVar1, (*(undefined4 *)(unsigned)(unsigned)0x8c4b3338) = ar4_00, uVar6 < ar5;
              uVar6 = uVar6 + uVar7) {
            uVar7 = ar5 - uVar6;
            if ((*(undefined4 *)(unsigned)(unsigned)0x8c277c8c) < uVar7) {
              iVar4 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01051c(uVar7,(*(undefined4 *)(unsigned)(unsigned)0x8c277c8c),vr6,vr7));
              iVar1 = iVar1 * iVar4;
              iVar5 = ar4 + uVar6;
              iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6(ar4_00,iVar1,iVar5,ar7));
              if (iVar2 != 0) {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b8) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f364c((*(undefined4 *)(unsigned)(unsigned)0x8c4b3338),iVar1,iVar5,ar7));
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6bc) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f37a8((*(undefined4 *)(unsigned)(unsigned)0x8c4b3338),iVar1,iVar5,ar7));
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b4) = 5;
                return 0xffffffff;
              }
              uVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c277c8c) * iVar4;
              (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) = (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) + uVar7;
              (*(undefined4 *)(unsigned)(unsigned)0x8c277c94) = (*(undefined4 *)(unsigned)(unsigned)0x8c277c94) + (*(undefined4 *)(unsigned)(unsigned)0x8c277c90) * iVar4;
              (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4) = 0;
            }
            else {
              iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6(ar4_00,iVar1,iVar4,ar7));
              if (iVar2 != 0) {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b8) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f364c((*(undefined4 *)(unsigned)(unsigned)0x8c4b3338),iVar1,iVar4,ar7));
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6bc) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f37a8((*(undefined4 *)(unsigned)(unsigned)0x8c4b3338),iVar1,iVar4,ar7));
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b4) = 5;
                return 0xffffffff;
              }
              (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c23c814(ar4 + uVar6,(*(undefined4 *)(unsigned)(unsigned)0x8c277c88),uVar7,ar7));
              (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) = (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) + uVar7;
              (*(undefined4 *)(unsigned)(unsigned)0x8c277c94) = (*(undefined4 *)(unsigned)(unsigned)0x8c277c94) + (*(undefined4 *)(unsigned)(unsigned)0x8c277c90);
              (*(undefined4 *)(unsigned)(unsigned)0x8c277ca8) = (*(undefined4 *)(unsigned)(unsigned)0x8c277c8c) - uVar7;
              (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4) = uVar7;
            }
            iVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c277c88);
            iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c277c90);
            ar4_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4b3338);
          }
        }
        else {
          uVar7 = (ar5 - uVar6) + 0x7ff >> 0xb;
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6((*(undefined4 *)(unsigned)(unsigned)0x8c4b3338),uVar7,ar4 + uVar6,ar7));
          (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) = (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) + uVar7 * 0x800;
          (*(undefined4 *)(unsigned)(unsigned)0x8c277c94) = 0;
          (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4) = 0;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c23c814(ar4,(*(undefined4 *)(unsigned)(unsigned)0x8c277c88) + (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4),ar5,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4) = (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4) + ar5;
        (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) = (*(undefined4 *)(unsigned)(unsigned)0x8c277ca0) + ar5;
        (*(undefined4 *)(unsigned)(unsigned)0x8c277ca8) = (*(undefined4 *)(unsigned)(unsigned)0x8c277c8c) - (*(undefined4 *)(unsigned)(unsigned)0x8c277ca4);
      }
      return 1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f3122((*(undefined4 *)(unsigned)(unsigned)0x8c4b3338),iVar1 * iVar4,0,ar7));
    if (iVar2 == 0) {
      iVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c277c90);
      ar6_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c277c88);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6((*(undefined4 *)(unsigned)(unsigned)0x8c4b3338),(*(undefined4 *)(unsigned)(unsigned)0x8c277c90),(*(undefined4 *)(unsigned)(unsigned)0x8c277c88),ar7));
      iVar2 = iVar1 * iVar4;
      if (iVar3 == 0) goto LAB_8c259f6a;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b8) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f364c((*(undefined4 *)(unsigned)(unsigned)0x8c4b3338),iVar5,ar6_00,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6bc) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f37a8((*(undefined4 *)(unsigned)(unsigned)0x8c4b3338),iVar5,ar6_00,ar7));
    }
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b4) = 5;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c259e80\n.set _FUN_8c259e80, _FUN_8c259e80_def\n");
