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
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f43d6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_FATAL_ERROR_Cannot_get_semap_1f43d6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  byte bVar1;
  int in_r0 = (int)(unsigned long)vin0;
  int *in_r3 = 0;
  int a4;
  
  a4 = *in_r3;
  if (*(int *)(unsigned)(in_r0 + a4) != 0) {
    return 0xfffffffd;
  }
  if ((*(uint *)(unsigned)(*(int *)(unsigned)(0x10f4 + a4) + 0x18) & 1) != 0) {
    return 0xffffffff;
  }
  bVar1 = *((byte *)(unsigned long)*(unsigned *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a28)));
  *((byte *)(unsigned long)*(unsigned *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a28))) = bVar1 | 0x80;
  if (bVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4570(a4,ar5,ar6,ar7));
    return 0xfffffffe;
  }
  return 0;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f43d6\n.set _s_FATAL_ERROR_Cannot_get_semap_1f43d6, _s_FATAL_ERROR_Cannot_get_semap_1f43d6_def\n");
