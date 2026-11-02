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
undefined4 FUN_8c2567fe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2567fe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *unaff_r13 = 0;
  
  if ((unaff_r13[4] & 2U) == 0) {
    if (((unaff_r13[4] & 1U) != 0) || (*unaff_r13 == -1)) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b4) = 1;
      return 0xffffffff;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c25a1ee((uint)unaff_r13[6] >> 0x10 & 0xff00,ar5,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = *unaff_r13;
      if (1 < *(ushort *)(unsigned)(unaff_r13 + 0x10)) {
        iVar2 = 0;
        uVar4 = 0;
        iVar3 = 0;
        while (uVar4 < (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c)) {
          uVar4 = uVar4 + 1;
          if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3) == iVar1) {
            *(short *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar2 + 0x40) = *(short *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar2 + 0x40) + -1;
          }
          iVar3 = iVar3 + 0x44;
          iVar2 = iVar2 + 0x44;
        }
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c20cf88(unaff_r13 + 6,ar5,ar6,ar7));
      if ((unaff_r13[4] & 1U) != 0) {
        iVar3 = 0;
        iVar2 = 0;
        uVar4 = 0;
        while (uVar4 < (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c)) {
          uVar4 = uVar4 + 1;
          if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3) == iVar1) {
            *(undefined2 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar2 + 0x40) = 0;
            *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar2 + 0x10) =
                 *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar2 + 0x10) & 0xfffffff5;
          }
          iVar3 = iVar3 + 0x44;
          iVar2 = iVar2 + 0x44;
        }
        return 1;
      }
      iVar3 = 0;
      iVar2 = 0;
      for (uVar4 = 0; uVar4 < (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c); uVar4 = uVar4 + 1) {
        if (*(int *)(unsigned)(iVar2 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08)) == iVar1) {
          (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c25a49e(iVar3 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08),ar5,ar6,ar7));
        }
        iVar2 = iVar2 + 0x44;
        iVar3 = iVar3 + 0x44;
      }
      return 1;
    }
    if ((short)unaff_r13[0x10] != 0) {
      *(short *)(unsigned)(unaff_r13 + 0x10) = (short)unaff_r13[0x10] + -1;
    }
    if ((short)unaff_r13[0x10] != 0) {
      return 1;
    }
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c20cf88(unaff_r13 + 6,ar5,ar6,ar7));
    unaff_r13[4] = unaff_r13[4] & 0xfffffffd;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277b10) == *unaff_r13) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c277b10) = -1;
    }
    if ((unaff_r13[4] & 1U) != 0) {
      return 1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c25a49e(unaff_r13,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c2567fe\n.set _FUN_8c2567fe, _FUN_8c2567fe_def\n");
