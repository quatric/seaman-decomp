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
undefined4 FUN_8c111e72_def(int ar4,int ar5,int ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c111e72";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int ar6_00;
  uint ar5_00;
  int iVar5;
  
  iVar4 = ar5 * 4;
  ar5_00 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4);
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar4) == *(int *)(unsigned)(ar4 + 0x3c)) {
    if ((*(int *)(unsigned)(ar4 + 0x38) != 0) && (ar5_00 != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(ar4,ar5,0,ar7));
    }
  }
  else if (ar7 <= *(uint *)(unsigned)(ar4 + 8)) {
    iVar5 = ar7 * *(ushort *)(unsigned)(ar4 + 0xc);
    uVar1 = ar5_00;
    iVar2 = iVar5;
    uVar3 = ar7;
    if (ar5_00 < *(uint *)(unsigned)(ar4 + 0x24)) {
      if (iVar5 + ar5_00 <= *(uint *)(unsigned)(ar4 + 0x24)) {
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar6,ar5_00,iVar5,ar7));
        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) + iVar5;
LAB_8c111f76:
        *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar4) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar4) + ar7;
        if (*(uint *)(unsigned)(ar4 + 0x28) == ar5_00) {
          ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c111342(ar4,uVar1,iVar2,uVar3); });
        }
        if (*(int *)(unsigned)(ar4 + 0x38) != 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(ar4,ar5,ar7,uVar3));
        }
        return 1;
      }
    }
    else if ((ar5_00 + iVar5) - *(int *)(unsigned)(ar4 + 0x10) <= *(uint *)(unsigned)(ar4 + 0x24)) {
      if (*(uint *)(unsigned)(ar4 + 0x20) < iVar5 + ar5_00) {
        ar6_00 = *(int *)(unsigned)(ar4 + 0x20) - ar5_00;
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar6,ar5_00,ar6_00,ar7));
        iVar5 = iVar5 - ar6_00;
        uVar1 = *(uint *)(unsigned)(ar4 + 0x1c);
        iVar2 = iVar5;
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar6 + ar6_00,uVar1,iVar5,uVar3));
        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) = iVar5 + *(int *)(unsigned)(ar4 + 0x1c);
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar6,ar5_00,iVar5,ar7));
        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) + iVar5;
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) == *(int *)(unsigned)(ar4 + 0x20)) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
        }
      }
      goto LAB_8c111f76;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c111e72\n.set _FUN_8c111e72, _FUN_8c111e72_def\n");
