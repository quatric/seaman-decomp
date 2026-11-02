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
undefined4 FUN_8c112a28_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112a28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int unaff_r14 = 0;
  undefined4 extraout_fr1 = 0;
  float extraout_fr0 = 0;
  byte in_FPSCR_CAUSE = 0;
  byte in_FPSCR_DN = 0;
  byte in_FPSCR_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,0x10,ar6,ar7));
  iVar1 = (int)0x138;
  uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13) &
          0xffe7ffff;
  *(uint *)(unsigned)(iVar1 + unaff_r14) = ar5;
  *(uint *)(unsigned)(iVar1 + 8 + unaff_r14) = ar5;
  if ((char)((uVar2 & 0x80000) >> 0x13) == '\0') {
    uVar2 = (uint)extraout_fr0;
  }
  else {
    uVar2 = (uint)CONCAT44D(extraout_fr0,extraout_fr1);
  }
  uVar2 = uVar2 & 0xffff;
  if (*(char *)(unsigned)(iVar1 + -0x3f + unaff_r14) == '\0') {
    if (uVar2 < ar5) {
      uVar2 = ar5;
    }
    *(uint *)(unsigned)(0x13c + unaff_r14) = uVar2;
  }
  else {
    *(undefined4 *)(unsigned)(0x13c + unaff_r14) = 1;
  }
  if ((ar5 < 2) && (*(char *)(unsigned)(0xf8 + unaff_r14) == '\0')) {
    iVar1 = (int)0x130;
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + unaff_r14)) == ((void *)(unsigned)0x8c117bac)) {
      return 0;
    }
    *(unsigned *)(unsigned)(iVar1 + unaff_r14) = ((void *)(unsigned)0x8c117bac);
    *(undefined4 *)(unsigned)(iVar1 + 4 + unaff_r14) = *(undefined4 *)(unsigned)(iVar1 + unaff_r14);
    if (*(int *)(unsigned)(unaff_r14 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(unsigned)(0xb0 + unaff_r14) != 0) {
      return 0;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c115732(unaff_r14,1,ar6,ar7));
  }
  else {
    iVar1 = (int)0x130;
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + unaff_r14)) == ((void *)(unsigned)0x8c11617a)) {
      return 0;
    }
    *(unsigned *)(unsigned)(iVar1 + unaff_r14) = ((void *)(unsigned)0x8c11617a);
    *(undefined4 *)(unsigned)(iVar1 + 4 + unaff_r14) = *(undefined4 *)(unsigned)(iVar1 + unaff_r14);
    if (*(int *)(unsigned)(unaff_r14 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(unsigned)(0xa8 + unaff_r14) != 0) {
      return 0;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1155a0(unaff_r14,1,ar6,ar7));
  }
  if ((uVar2 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c112a28\n.set _FUN_8c112a28, _FUN_8c112a28_def\n");
