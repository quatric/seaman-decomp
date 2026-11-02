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
undefined4
FUN_8c02077c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02077c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 * s4 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 4);
  undefined4 * s8 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  undefined4 s16 = *(undefined4 *)(vsp + 16);
  undefined4 s20 = *(undefined4 *)(vsp + 20);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(ar4,ar5,*(undefined4 *)(unsigned)(ar4 + 0x20),ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(ar4,ar5,*(undefined4 *)(unsigned)(ar4 + 0x24),ar7));
    if (iVar1 == 0) {
      uVar2 = ar7;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(ar4,ar5,ar6,ar7));
      if (iVar1 == 0) {
        if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
          iVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c02000c(ar4,ar5,ar7,s0); });
          if (iVar1 == 0) {
            return 0;
          }
          *(undefined4 *)(unsigned)(iVar1 + 8) = *s4;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar4 + 0x20,iVar1,s0));
        }
        else {
          iVar1 = ({ unsigned long t0_ = (unsigned long)(s12); unsigned long t1_ = (unsigned long)(s16); unsigned long t2_ = (unsigned long)(s20); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; vsp = (((unsigned long)(fr0_ - 0)) - 16); FUN_8c01ffa0(ar4,ar5,ar7,s0); });
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar2 = 2;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0206b8(ar4,iVar1,s20,uVar2));
        *s4 = *(undefined4 *)(unsigned)(iVar1 + 8);
        *s8 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
        uVar2 = 1;
      }
    }
    else {
      ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)(s20); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,ar5,ar4 + 0x24,ar7); });
      uVar2 = 0;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0206b8(ar4,iVar1,s20,uVar2));
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02077c\n.set _FUN_8c02077c, _FUN_8c02077c_def\n");
