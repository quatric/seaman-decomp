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
undefined4 FUN_8c114bd8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c114bd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float extraout_fr0 = 0;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x2c))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xdc) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x30))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xde) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x34))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xe0) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x38))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xe2) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x34))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0x1c6) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x20))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xe4) = uVar1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x44))))(ar5,vr5,vr6,vr7));
  *(undefined4 *)(unsigned)(ar4 + 0xf4) = uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x48))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xe6) = uVar1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x88))))(ar5,vr5,vr6,vr7));
  *(undefined4 *)(unsigned)(ar4 + 0xe8) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,0x15,ar6,ar7));
  *(char *)(unsigned)(ar4 + 0xf8) = (char)(int)extraout_fr0;
  if (*(char *)(unsigned)(ar4 + 0xf8) != '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x8c))))(ar5,vr5,vr6,vr7));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0xcc))))(uVar2,vr5,vr6,vr7));
    *(undefined4 *)(unsigned)(ar4 + 0xec) = uVar3;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0xd0))))(uVar2,vr5,vr6,vr7));
    *(undefined4 *)(unsigned)(ar4 + 0xf0) = uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c114bd8\n.set _FUN_8c114bd8, _FUN_8c114bd8_def\n");
