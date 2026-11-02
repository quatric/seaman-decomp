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
undefined4 FUN_8c205644_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c205644";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r14 = 0;
  
  iVar1 = *(int *)(unsigned)(ar5 + 0xc);
  iVar3 = unaff_r14 + 0x7f;
  if (iVar1 == 8) {
    if ((unaff_r14 & *(uint *)(unsigned)(ar5 + 0x18)) == 0) {
      *ar4 = 0x1000;
      ar4[1] = iVar3;
      ar4[2] = 0x20;
      ar4[3] = 0xf90;
    }
    else {
      *ar4 = 0x2000;
      ar4[1] = iVar3;
      ar4[2] = 0x20;
      ar4[3] = 4000;
    }
  }
  else if (iVar1 == 0x10) {
    if ((unaff_r14 & *(uint *)(unsigned)(ar5 + 0x18)) == 0) {
      uVar2 = 0xfc0;
      *ar4 = 0x3000;
      ar4[1] = iVar3;
      ar4[2] = 0x40;
    }
    else {
      *ar4 = 0x4000;
      uVar2 = 0xfe0;
      ar4[1] = iVar3;
      ar4[2] = 0x60;
    }
    ar4[3] = uVar2;
  }
  else {
    if (iVar1 == 0x20) {
      if ((unaff_r14 & *(uint *)(unsigned)(ar5 + 0x18)) == 0) {
        *ar4 = 0x5000;
        ar4[1] = 0x100;
        ar4[2] = 0x100;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x6000;
      ar4[1] = 0x200;
      uVar2 = 0xf60;
      ar4[2] = 0x160;
    }
    else {
      if (iVar1 != 0x40) {
        return 0;
      }
      if ((unaff_r14 & *(uint *)(unsigned)(ar5 + 0x18)) == 0) {
        *ar4 = 0x7000;
        ar4[1] = 0x400;
        ar4[2] = 0x400;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x8000;
      ar4[1] = 0x800;
      uVar2 = 0xd60;
      ar4[2] = 0x560;
    }
    ar4[3] = uVar2;
  }
LAB_8c205756:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(0x800,ar4[1],vr6,vr7));
  ar4[4] = uVar2;
  return 1;
}

__asm__(".globl _FUN_8c205644\n.set _FUN_8c205644, _FUN_8c205644_def\n");
