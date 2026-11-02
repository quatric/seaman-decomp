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
undefined4 FUN_8c25940c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25940c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar2;
  
  piVar1 = 0x8c4aabbc;
  switch(in_r0) {
  case 0:
    ar5 = 0;
    break;
  case 1:
    ar5 = 1;
    break;
  case 2:
    ar5 = 2;
    break;
  case 3:
    ar5 = 3;
    break;
  case 4:
    ar5 = 4;
    break;
  case 5:
    ar5 = 5;
    break;
  case 6:
    ar5 = 6;
    break;
  case 7:
    ar5 = 7;
    break;
  case 8:
    ar5 = 8;
    break;
  case 9:
    ar5 = 9;
    break;
  case 10:
    ar5 = 10;
    break;
  case 0xb:
    ar5 = 0xb;
  }
  if (ar4 == 0) {
    *(undefined4 *)(unsigned)*(undefined4 *)(unsigned)0x8c4aabbc = 0x40;
    *(undefined4 *)(unsigned)(*piVar1 + 0x2c) = ar5;
  }
  if (ar4 == 1) {
    *(int *)(unsigned)*piVar1 = (int)0x80;
    *(undefined4 *)(unsigned)(*piVar1 + 0x30) = ar5;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f640(*piVar1,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(*piVar1,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c25940c\n.set _FUN_8c25940c, _FUN_8c25940c_def\n");
