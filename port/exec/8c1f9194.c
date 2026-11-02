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
undefined4 FUN_8c1f9194_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f9194";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = (int *)(unsigned)(*((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + *ar4 * 0x20);
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c1f8d48(ar4,(fr0_ + (int)0xffffffe4),ar6,ar7));
  if ((*(int *)(fr0_ - 0x1c)) == 1) {
    uVar2 = 0x90180;
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); FUN_8c1f9e32(ar4[2] & 0x1fffffffU | 0xa0000000,ar4[3] & 0x7fffffe0,ar6,ar7); });
    piVar3[5] = 0;
    *piVar3 = ar4[1];
    piVar3[1] = ar4[2];
    piVar3[2] = ar4[3];
    piVar3[3] = ar4[4];
    if (ar5 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
    piVar3[4] = uVar1 | ar4[5];
    piVar3[5] = 1;
    ar4[0xb] = 1;
    ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[*ar4 + 0x37] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[*ar4 + 0x37] + 1;
    piVar3[6] = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f9194\n.set _FUN_8c1f9194, _FUN_8c1f9194_def\n");
