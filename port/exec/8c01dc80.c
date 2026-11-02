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
FUN_8c01dc80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01dc80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined *ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  undefined4 ar5_00;
  
  uVar2 = ar6;
  ar7_00 = ar7;
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d984(ar4,ar5,ar6,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2791bc) = 0;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c279264) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d008(ar4,ar5,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 0)), asr_init_from_model(ar4,ar5,uVar2,ar7_00));
  }
  ar7_01 = ((undefined1 *)(unsigned)0x8c279264);
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10be9c((*(undefined4 *)(unsigned)(unsigned)0x8c279258),ar7,1,((undefined1 *)(unsigned)0x8c279264)));
  *(undefined4 *)(unsigned)(ar4 + 0x5b38) = ar7;
  *(undefined4 *)(unsigned)(ar4 + 0x5b3c) = s0;
  *(undefined4 *)(unsigned)(ar4 + 0x5b40) = s4;
  ({ unsigned long ri0_ = (unsigned long)(ar5_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x5b44,ar5_00,uVar2,ar7_01); });
  ({ unsigned long ri0_ = (unsigned long)(ar5_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x5b65,ar6,uVar2,ar7_01); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ddfc(ar4,ar6,uVar2,ar7_01));
  if (iVar1 == 1) {
    ar6_00 = ((undefined1 *)(unsigned)0x8c279268);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c3de((*(undefined4 *)(unsigned)(unsigned)0x8c279258),*(undefined4 *)(unsigned)(ar4 + 0x5b40),((undefined1 *)(unsigned)0x8c279268),ar7_01));
    if ((iVar1 == 0) && (((undefined4 *)(unsigned long)*(unsigned *)0x8c279288) != (undefined1 *)(unsigned)0x0)) {
      ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c279294)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c122e7c((*(undefined4 *)(unsigned)(unsigned)0x8c279264),(*(undefined4 *)(unsigned)(unsigned)0x8c279268),((undefined1 *)(unsigned)0x8c12fbae),(*(undefined4 *)(unsigned)(unsigned)0x8c279290)); });
      ar6_00 = ((undefined1 *)(unsigned)0x8c12fbae);
      ar7_01 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c279288);
      ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c27928c)); unsigned long t1_ = (unsigned long)(
                   ((undefined1 *)(unsigned)0x8c279290)); unsigned long t2_ = (unsigned long)(((undefined1 *)(unsigned)0x8c279294)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; vsp = (((unsigned long)(fr0_ - 0)) - 16); FUN_8c122664((*(undefined4 *)(unsigned)(unsigned)0x8c279264),(*(undefined4 *)(unsigned)(unsigned)0x8c279268),((undefined1 *)(unsigned)0x8c12fbae),((undefined4 *)(unsigned long)*(unsigned *)0x8c279288)); });
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10b6cc((*(undefined4 *)(unsigned)(unsigned)0x8c27925c),(*(undefined4 *)(unsigned)(unsigned)0x8c279264),ar6_00,ar7_01));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01dc80\n.set _FUN_8c01dc80, _FUN_8c01dc80_def\n");
