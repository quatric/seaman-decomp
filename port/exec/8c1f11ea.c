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
int FUN_8c1f11ea_def(undefined4 ar4,int ar5,uint ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1f11ea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  uint ar6_00;
  
  (*(undefined4 *)(fr0_ - 0x10)) = 0;
  ar6_00 = ar6 & 0x1fffffff;
  if (ar7 == 1) {
    ar4_00 = 0x11;
  }
  else {
    if (ar7 != 0) {
      return 0xffffffee;
    }
    ar4_00 = 0x10;
    ar6_00 = ar6_00 | 0xa0000000;
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = ar4;
  (*(int *)(fr0_ - 0x18)) = ar5;
  (*(uint *)(fr0_ - 0x14)) = ar6_00;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), syscall_1f10d8(ar4_00,&(*(undefined4 *)(fr0_ - 0x1c)),ar6_00,ar7));
  if ((iVar1 != 0) && (((int)ar6 >> 0x1c & 0xeU) != 10)) {
    if ((ar6 & 0x1f) == 0) {
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c1f9980(ar6,ar5 << 0xb,ar6_00,ar7); });
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c1f9bde(ar6,ar5 << 0xb,ar6_00,ar7); });
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f11ea\n.set _FUN_8c1f11ea, _FUN_8c1f11ea_def\n");
