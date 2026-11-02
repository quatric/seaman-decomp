#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4
FUN_8c01b144_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c01b144");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  undefined4 s20 = *(le<undefined4>* )(vsp + 20);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 284; for (int i_ = 0; i_ < 284; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar5_00;
  uint ar7_00;
  
  (*(le<undefined4>* )(fr0_ - 0xc)) = 1;
  iVar1 = -0x22c;
  *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x20)) + iVar1 + 8) = ar6;
  ar7_00 = ar7;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fc258(*(le<undefined4>* )(unsigned)0x8c2791b4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)((int)&s16 + iVar1) = uVar2;
  if (0xffffff05 != *(le<int>* )(unsigned)((int)&s16 + iVar1)) {
    if (*(le<int>* )(unsigned)((int)&s16 + iVar1) != 0) {
      return 0;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c01bb00(ar4,ar5,ar6,ar7_00));
    *(le<undefined4>* )(unsigned)((int)&s12 + iVar1) = uVar2;
    if (*(le<int>* )(unsigned)((int)&s12 + iVar1) == 0) {
      return 0;
    }
  }
  uVar3 = 1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fc16a(*(le<undefined4>* )(unsigned)0x8c2791b4,1,ar6,ar7_00));
  *(le<undefined4>* )(unsigned)((int)&s8 + iVar1) = uVar2;
  *(le<undefined4>* )(unsigned)((fr0_ + (int)0xffffffec) + iVar1) = *(le<undefined4>* )(unsigned)((int)&s8 + iVar1);
  if ((int)((*(le<int>* )(unsigned)((fr0_ + (int)0xffffffec) + iVar1) * 0x200 - 0x280) - ar7) < 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c01b9e4(ar4,uVar3,ar6,ar7_00));
    *(le<undefined4>* )(unsigned)((int)&s4 + iVar1) = uVar2;
    if (*(le<uint>* )(unsigned)((int)&s4 + iVar1) < ar7) {
      return 0;
    }
    ar5_00 = (int)&s20 + iVar1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fc682(*(le<undefined4>* )(unsigned)0x8c2791b4,ar5_00,ar6,ar7_00));
    *(le<undefined4>* )(unsigned)((int)&s0 + iVar1) = uVar2;
    if (*(le<int>* )(unsigned)((int)&s0 + iVar1) != 0) {
      return 0;
    }
    do {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fc5c4(*(le<undefined4>* )(unsigned)0x8c2791b4,ar5_00,ar6,ar7_00));
      *(le<undefined4>* )(unsigned)((fr0_ + (int)0xfffffffc) + iVar1) = uVar2;
    } while (*(le<int>* )(unsigned)((fr0_ + (int)0xfffffffc) + iVar1) == -1);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fc5de(*(le<undefined4>* )(unsigned)0x8c2791b4,ar5_00,ar6,ar7_00));
    *(le<undefined4>* )(unsigned)((fr0_ + (int)0xfffffff8) + iVar1) = uVar2;
    if (*(le<int>* )(unsigned)((fr0_ + (int)0xfffffff8) + iVar1) != 0) {
      return 0;
    }
  }
  *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x20)) + iVar1 + 4) =
       *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x20)) + 0x248 + iVar1 + 8);
  *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x20)) + iVar1) =
       *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x20)) + 0x248 + iVar1 + 4);
  uVar3 = *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x20)) + iVar1 + 8);
  uVar2 = ({ unsigned long t0_ = (unsigned long)(*(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x20)) + iVar1)); unsigned long t1_ = (unsigned long)(
                     *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x20)) + iVar1 + 4)); *(le<unsigned>* )((((unsigned long)(fr0_ - 284)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 284)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 284)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01b2a4))))
                    (ar4,ar5,uVar3,ar7); });
  *(le<undefined4>* )(unsigned)((int)(fr0_ + (int)0xfffffff4) + iVar1) = uVar2;
  if (*(le<int>* )(unsigned)((int)(fr0_ + (int)0xfffffff4) + iVar1) < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c01acd0(ar4,*(le<int>* )(unsigned)((int)(fr0_ + (int)0xfffffff4) + iVar1),uVar3,ar7));
    *(le<undefined4>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar1) = uVar2;
    uVar2 = *(le<undefined4>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar1);
  }
  return uVar2;
}

__asm__(".globl FUN_8c01b144\n.set FUN_8c01b144, FUN_8c01b144_def\n");

}
