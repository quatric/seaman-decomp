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
int FUN_8c1f6f2a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f6f2a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 * ain0 = (undefined4 *)(unsigned long)vin0;
  undefined4 * ain1 = (undefined4 *)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *in_r2 = 0;
  undefined4 *in_r3 = 0;
  undefined4 uVar2;
  undefined4 ar4_00;
  
  *in_r3 = ar4;
  *in_r2 = ar5;
  *ain1 = ar6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4748b8) = ar7;
  *ain0 = 0xffffffff;
  uVar2 = 3;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f6dcc(3,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f875c(uVar2,ar5,ar6,ar7));
  uVar2 = 1;
  if ((*(undefined1 *)(unsigned)0x8c273a10) == '\x02') {
    iVar1 = 1;
    (*(undefined1 *)(unsigned)0x8c273a10) = 1;
  }
  else {
    ar4_00 = 0x8c4749bc;
    (*(undefined1 *)(unsigned)0x8c273a10) = 1;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f7d04(0x8c4749bc,1,ar6,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4748bc) = 0x8c4749c4;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f7558(ar4_00,uVar2,ar6,ar7));
    if (iVar1 == 0) {
      (*(undefined1 *)(unsigned)0x8c273a10) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f6f2a\n.set _FUN_8c1f6f2a, _FUN_8c1f6f2a_def\n");
