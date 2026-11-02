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
undefined4 FUN_8c2199aa_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2199aa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  uint unaff_r13 = 0;
  uint uVar3;
  
  uVar2 = (uint)0x100;
  do {
    uVar3 = *ar4;
    if ((uVar3 & 7) == 7) {
      uVar1 = 7;
      if ((uVar3 & 8) == 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4[1],ar5,ar6,ar7));
      }
      if ((uVar3 & 0x10) == 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2199aa((uint *)(unsigned)(uint)ar4[0xb],ar5,ar6,ar7));
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2563ac(vr4,vr5,vr6,vr7));
      if ((uVar3 & 1) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), noop_25b638(ar4 + 2,vr5,vr6,vr7));
      }
      if ((uVar3 & 2) == 0) {
        unaff_r13 = uVar3 & 0x20;
        ar5 = unaff_r13;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2569e0(ar4 + 5,vr5,vr6,vr7));
      }
      if ((uVar3 & 4) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257098(ar4 + 8,vr5,vr6,vr7));
      }
      if ((uVar3 & 8) == 0) {
        unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4[1],ar5,ar6,ar7));
      }
      if (((uVar3 & 0x10) == 0) && (((uVar3 & uVar2) == 0 || (unaff_r13 == 0)))) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2199aa((uint *)(unsigned)(uint)ar4[0xb],ar5,ar6,ar7));
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(vr4,vr5,vr6,vr7));
    }
    ar4 = (uint *)(unsigned)(uint)ar4[0xc];
  } while (ar4 != (uint *)(unsigned)0x0);
  return uVar1;
}

__asm__(".globl _FUN_8c2199aa\n.set _FUN_8c2199aa, _FUN_8c2199aa_def\n");
