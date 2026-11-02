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
undefined4 s_E1205_Illigal_parameter_MWRN_269aec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_269aec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  char *s0;
  
  if (ar4 == 0) {
    s0 = ((undefined1 *)(unsigned)0x8c2732a0);
  }
  else {
    if (ar5 <= (int)(uint)*(byte *)(unsigned)(ar4 + 2)) {
      *(char *)(unsigned)(ar4 + 3) = (char)ar5;
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x1c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),(int)(char)ar5,ar6,ar7));
      if (ar5 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 100) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 100) = 0xfffffff1;
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0xf;
      }
      (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269c8c(ar4,0,*(undefined4 *)(unsigned)(ar4 + 100),ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269c8c(ar4,1,*(undefined4 *)(unsigned)(ar4 + 0x68),ar7));
      return uVar1;
    }
    s0 = ((undefined1 *)(unsigned)0x8c273370);
  }
  uVar1 = ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 32)) - 8); debug_printf(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269aec\n.set _s_E1205_Illigal_parameter_MWRN_269aec, _s_E1205_Illigal_parameter_MWRN_269aec_def\n");
