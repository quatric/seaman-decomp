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
int FUN_8c266710_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c266710";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar6_00;
  int iVar2;
  int unaff_r13 = 0;
  undefined4 in_PR = 0;
  
  ar6_00 = 8;
  iVar2 = unaff_r13;
  if (ain0 == 1) {
    iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 8;
    do {
      if (*(int *)(unsigned)(iVar1 + 4) != 1) break;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 8;
    } while (iVar2 < 8);
joined_r0x8c266742:
    if (iVar2 == 8) {
LAB_8c266782:
      iVar1 = unaff_r13;
    }
  }
  else {
    if (ain0 == 2) {
      iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x48;
      do {
        if (*(int *)(unsigned)(iVar1 + 4) != 1) break;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < 8);
      goto joined_r0x8c266742;
    }
    if (ain0 != 3) {
      iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0);
      iVar1 = 0x7fffffff;
      goto LAB_8c2667a0;
    }
    iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x88;
    iVar2 = 4;
    ar6_00 = unaff_r13;
    do {
      if (*(int *)(unsigned)(iVar1 + 4) != 1) break;
      ar6_00 = ar6_00 + 1;
      iVar1 = iVar1 + 8;
    } while (ar6_00 < 4);
    if (ar6_00 == 4) goto LAB_8c266782;
  }
  if (iVar1 == 0) {
    iVar1 = 0x7000101;
    *ar4 = unaff_r13;
  }
  else {
    *ar4 = iVar1;
    *(undefined4 *)(unsigned)(iVar1 + 4) = 1;
    iVar1 = unaff_r13;
  }
LAB_8c2667a0:
  if (iVar1 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c266708),iVar1,ar6_00,iVar2); });
  }
  return iVar1;
}

__asm__(".globl _FUN_8c266710\n.set _FUN_8c266710, _FUN_8c266710_def\n");
