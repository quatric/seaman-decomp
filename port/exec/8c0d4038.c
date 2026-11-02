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
int FUN_8c0d4038_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4038";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d4bdc(ar4,ar5,ar6,ar7));
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7));
  uVar3 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 8,ar5,ar6,ar7));
  uVar3 = 0;
  ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar3,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
  uVar4 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  iVar2 = *piVar1;
  *(undefined4 *)(unsigned)(iVar2 + 8) = uVar4;
  return iVar2;
}

__asm__(".globl _FUN_8c0d4038\n.set _FUN_8c0d4038, _FUN_8c0d4038_def\n");
