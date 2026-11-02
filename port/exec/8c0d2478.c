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
undefined4 FUN_8c0d2478_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2478";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar6_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = ar5;
  uVar4 = ar7;
  uVar5 = ar6;
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar5,ar5,ar6,ar7));
  uVar2 = 0;
  ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,uVar3,ar6,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar2,uVar3,ar6,uVar4));
  uVar4 = 4;
  ar6_00 = ar4 + 0x2c;
  uVar3 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016464(ar7,uVar5,ar6_00,4));
  uVar2 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019198(uVar3,uVar5,ar6_00,uVar4));
  uVar3 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a94(ar5,0,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016524(ar7,uVar3,ar6_00,uVar4));
  uVar5 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x24) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = uVar5;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,uVar3,ar6_00,uVar4));
  return uVar3;
}

__asm__(".globl _FUN_8c0d2478\n.set _FUN_8c0d2478, _FUN_8c0d2478_def\n");
