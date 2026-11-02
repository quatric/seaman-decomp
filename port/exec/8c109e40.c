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
int FUN_8c109e40_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109e40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x874);
  if (iVar1 == 0) {
    *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb7c(*(int *)(unsigned)(ar5 + 4) + 0xa8,0,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cb74(*(int *)(unsigned)(ar5 + 4) + 0xa8,0,ar6,ar7));
    uVar2 = 1;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c035718(*(undefined4 *)(unsigned)(ar5 + 0x10),1,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02c340(*(int *)(unsigned)(ar5 + 4) + 0x90,uVar2,ar6,ar7));
    if (0x5e < iVar1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_02d1e0(*(int *)(unsigned)(ar5 + 4) + 0x90,uVar2,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), libgcc_divide_helper_0101e4(uVar2,10,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cbbc(*(int *)(unsigned)(ar5 + 4) + 0x90,iVar1 * 9,ar6,ar7));
    }
    iVar1 = 0x874;
    *(undefined4 *)(unsigned)(ar4 + 0x874) = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c109e40\n.set _FUN_8c109e40, _FUN_8c109e40_def\n");
