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
undefined4 FUN_8c016584_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c016584";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  ar4[8] = 0;
  ar4[7] = 0;
  ar4[6] = 0;
  ar4[0xb] = 0;
  ar4[9] = 0;
  ar4[10] = 0x42c80000;
  ar4[0xd] = -1;
  ar4[0xc] = -1;
  *(undefined2 *)(unsigned)((int)ar4 + 0x3e) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0xf) = 0;
  *(undefined2 *)(unsigned)((int)ar4 + 0x3a) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0xe) = 0;
  *ar4 = (int)(ar4 + 6);
  ar4[1] = (int)(ar4 + 0xc);
  ar4[2] = (int)(ar4 + 0xe);
  ar4[4] = 2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016658(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c016584\n.set _FUN_8c016584, _FUN_8c016584_def\n");
