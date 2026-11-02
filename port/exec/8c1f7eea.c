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
undefined4 FUN_8c1f7eea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f7eea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int *in_r2 = 0;
  
  if ((*in_r2 != 0) && ((ar4 == 0 || (ar4 == 1)))) {
    (*(undefined1 *)(unsigned)0x8c00007e) = (undefined1)ar4;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f97b4(2,(*(undefined4 *)(unsigned)(unsigned)0x8c273a18),ar6,ar7));
    if (iVar1 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7eea\n.set _FUN_8c1f7eea, _FUN_8c1f7eea_def\n");
