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
undefined4 FUN_8c0d2264_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2264";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined4 uVar3;
  
  uVar2 = ar6;
  uVar3 = ar5;
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar5,ar5,ar6,ar7));
  ar4_00 = 0;
  ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,uVar2,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(ar4_00,ar5,uVar2,ar7));
  uVar3 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(unsigned)(*piVar1 + 0xf8);
  *(undefined4 *)(unsigned)(*piVar1 + 0xf8) =
       *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(unsigned)(*piVar1 + 0x1e8);
  ar4_01 = *piVar1;
  *(undefined4 *)(unsigned)(ar4_01 + 0x1e8) =
       *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019198(ar4_01,ar5,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar6,ar5,uVar2,ar7));
  uVar3 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8) =
       *(undefined4 *)(unsigned)(*piVar1 + 0xf8);
  *(undefined4 *)(unsigned)(*piVar1 + 0xf8) = uVar3;
  uVar3 = *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(short *)(unsigned)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8) =
       *(undefined4 *)(unsigned)(*piVar1 + 0x1e8);
  *(undefined4 *)(unsigned)(*piVar1 + 0x1e8) = uVar3;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,uVar2,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d2264\n.set _FUN_8c0d2264, _FUN_8c0d2264_def\n");
