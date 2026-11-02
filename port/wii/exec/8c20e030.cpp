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
undefined4 FUN_8c20e030_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e030");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint in_r3 = 0;
  undefined4 uVar2;
  uint unaff_r10 = 0;
  int unaff_r12 = 0;
  le<uint>* unaff_r13 = 0;
  uint a5;
  
  uVar2 = 0;
  if (unaff_r10 < in_r3) {
    *unaff_r13 = 0;
    uVar2 = 2;
  }
  else {
    a5 = 0;
    if (unaff_r10 != 0) {
      while (*(le<int>* )(unsigned)(a5 * 4 + unaff_r12) != 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e16a(unaff_r12,a5,unaff_r13,ar7));
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e1e6(unaff_r12,a5,unaff_r13,ar7));
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e272(unaff_r12,a5,unaff_r13,ar7));
        if (iVar1 != 0) {
          return iVar1;
        }
        if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 1) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e300(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e328(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e368(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e3a0(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e400(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 2) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 3)) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e428(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e480(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e608(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e664(unaff_r12,a5,unaff_r13,ar7));
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e6c0(unaff_r12,a5,unaff_r13,ar7));
        if (iVar1 != 0) {
          return iVar1;
        }
        a5 = a5 + 1;
        if (unaff_r10 <= a5) {
          return 0;
        }
      }
      *unaff_r13 = a5;
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c20e030\n.set FUN_8c20e030, FUN_8c20e030_def\n");

}
