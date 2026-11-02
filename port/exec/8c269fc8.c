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
undefined4 s_E1205_Illigal_parameter_MWRN_269fcc_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_269fcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *a6;
  undefined1 *a7;
  undefined4 *a7_00;
  int *piVar3;
  
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)((undefined4 *)(unsigned)ar5));
  if (ar4 == 0) {
    uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2732a0)); unsigned long t1_ = (unsigned long)(ar6); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 52)) - 8); debug_printf(0,ar5,ar6,ar7); });
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),4,ar5,0));
    uVar2 = 4;
    a7 = ((undefined1 *)(fr0_ - 0x1c));
    piVar3 = ar6;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x48))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),4,ar6,a7));
    if (0 < *piVar3) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x30))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),uVar2,ar6,a7));
      (*(undefined4 *)(fr0_ - 0x18)) = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x28))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),uVar2,ar6,a7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x38))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),uVar2,ar6,a7));
      (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x14))));
      (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38))));
      (*(undefined4 *)(fr0_ - 0x14)) = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x20)) + 0x40))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x20)),0,ar6,a7));
      (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(((undefined4 *)(fr0_ - 0x10))));
      ((undefined4 *)(fr0_ - 0x10))[0] = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x40))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),1,ar6,a7));
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x48))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),0,&(*(undefined4 *)(fr0_ - 0x2c)),&(*(undefined4 *)(fr0_ - 0x28))));
      a6 = &(*(undefined4 *)(fr0_ - 0x34));
      a7_00 = &(*(undefined4 *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x48))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),3,a6,a7_00));
      (vsp = ((unsigned long)(fr0_ - 52)), s_E1205_Illigal_parameter_MWRN_269b92(ar4,uVar1,a6,a7_00));
      (vsp = ((unsigned long)(fr0_ - 52)), s_E1205_Illigal_parameter_MWRN_269c06(ar4,(*(undefined4 *)(fr0_ - 0x18)),a6,a7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x60) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 100) = *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
      *(int *)(unsigned)(ar4 + 0x68) = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x20));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = (*(undefined4 *)(fr0_ - 0x2c));
      *(undefined4 *)(unsigned)(ar4 + 0x70) = (*(undefined4 *)(fr0_ - 0x28));
      *(undefined4 *)(unsigned)(ar4 + 0x7c) = (*(undefined4 *)(fr0_ - 0x34));
      uVar1 = 0x80;
      *(undefined4 *)(unsigned)(ar4 + 0x80) = (*(undefined4 *)(fr0_ - 0x30));
    }
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269fcc\n.set _s_E1205_Illigal_parameter_MWRN_269fcc, _s_E1205_Illigal_parameter_MWRN_269fcc_def\n");
