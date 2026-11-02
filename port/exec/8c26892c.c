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
uint FUN_8c26892c_def(undefined4 ar4,undefined4 ar5,undefined *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26892c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint unaff_r12 = 0;
  uint unaff_r13 = 0;
  int *unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  if (*unaff_r14 == 0) {
    unaff_r13 = 0xd000001;
  }
  else {
    *(undefined4 *)(unsigned)(*unaff_r14 + 0x164) = ar4;
    *(uint *)(unsigned)(*unaff_r14 + 0x168) = unaff_r12;
    *(uint *)(unsigned)(*unaff_r14 + 0x174) = unaff_r13;
    *(uint *)(unsigned)(*unaff_r14 + 0x170) = unaff_r13;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd578) = ar4;
    (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4,0,unaff_r12 * 0x1c,ar7));
    ar6 = ((undefined1 *)(unsigned)0x8c2785a8);
    uVar1 = unaff_r13;
    uVar2 = unaff_r13;
    if (unaff_r12 != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0107a0(0x1c,*(int *)(unsigned)(*unaff_r14 + 0x164) + uVar1,ar6,vr7));
        uVar2 = uVar2 + 1;
        uVar1 = uVar1 + 0x1c;
      } while (uVar2 < unaff_r12);
    }
  }
  if (unaff_r13 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c268920),unaff_r13,ar6,ar7); });
  }
  return unaff_r13 = 0;
}

__asm__(".globl _FUN_8c26892c\n.set _FUN_8c26892c, _FUN_8c26892c_def\n");
