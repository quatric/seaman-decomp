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
undefined4 FUN_8c031684_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031684";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  ar7_00 = 0;
  ar6_00 = 0xffffffff;
  ar5_00 = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
  (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ar5_00,ar6_00,ar7_00));
  if (cVar1 == '\0') {
    ar4[10] = 0;
    ar4[9] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 10) = (ulonglong)extraout_fr1;
    *(ulonglong *)(unsigned)(ar4 + 9) = (ulonglong)extraout_fr1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031748(ar4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031700(ar4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x2c))))(ar4,ar5_00,ar6_00,ar7_00));
  ar4[0x1a] = 0;
  return 0x68;
}

__asm__(".globl _FUN_8c031684\n.set _FUN_8c031684, _FUN_8c031684_def\n");
