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
undefined8 * FUN_8c019508_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c019508";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  char cVar1;
  
  cVar1 = '\0';
  (*(undefined4 *)(fr0_ - 0x14)) = *ar5;
  (*(undefined4 *)(fr0_ - 0x10)) = ar5[1];
  (*(undefined4 *)(fr0_ - 0xc)) = ar5[2];
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c256294(0,&(*(undefined4 *)(fr0_ - 0x14)),&(*(undefined4 *)(fr0_ - 0x1c)),ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)ar6 = (*(undefined4 *)(fr0_ - 0x1c));
    *(undefined4 *)(unsigned)ar7 = (*(undefined4 *)(fr0_ - 0x18));
  }
  else {
    *ar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    *ar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
  }
  return ar7;
}

__asm__(".globl _FUN_8c019508\n.set _FUN_8c019508, _FUN_8c019508_def\n");
