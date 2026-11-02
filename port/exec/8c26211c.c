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
int FUN_8c26211c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26211c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if (*(int *)(unsigned)(ar4 + 4) != 0) {
    ain0 = ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c263446(*(undefined4 *)(unsigned)(ar4 + 4),ar5,ar6,ar7); });
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  }
  if ((*(int *)(unsigned)(ar4 + 8) != 0) && (ain0 = (int)*(char *)(unsigned)(ar4 + 2), ain0 == 0)) {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4b4220) == 1) {
      ar5 = *(undefined4 *)(unsigned)(ar4 + 0x2c);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c261786(*(undefined4 *)(unsigned)(ar4 + 0x28),ar5,ar6,ar7); });
    }
    ain0 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26211c\n.set _FUN_8c26211c, _FUN_8c26211c_def\n");
