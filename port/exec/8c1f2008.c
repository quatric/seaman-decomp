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
int FUN_8c1f2008_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2008";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  undefined4 ar6_00;
  int ar7_00;
  char *unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  char in_T = 0;
  undefined4 in_PR = 0;
  
  if (in_T != '\0') {
    unaff_r13 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10);
  }
  if ((*unaff_r12 == '/') || (*unaff_r12 == '\\')) {
    if (*((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) == 1) {
      iVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) + 4); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12)) - 8); FUN_8c1f2e3e((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x80,*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 4),
                           *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 8),unaff_r12); });
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f2d3e((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x80,*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 4),
                           *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 8),unaff_r12));
    }
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    ar7_00 = 0x800;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f2cce(unaff_r12,*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10),0,ar7));
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    piVar3 = (int *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
    if ((*(byte *)(unsigned)(piVar3 + 2) & 2) == 0) {
      return 0xfffffff5;
    }
    iVar1 = *piVar3;
    ar7_00 = piVar3[1];
  }
  iVar1 = iVar1 + 0x96;
  ar5_00 = iVar1;
  ar6_00 = unaff_r13;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f2bfe((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x40,iVar1,unaff_r13,ar7_00));
  if (((*((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) == 1) && (*(int *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c470f90) + 2) == iVar1)) &&
     ((iVar2 == 0 || (iVar2 == -0xc)))) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c1f1a52(unaff_r13,ar5_00,ar6_00,ar7_00); });
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f2008\n.set _FUN_8c1f2008, _FUN_8c1f2008_def\n");
