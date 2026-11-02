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
undefined4 FUN_8c0a61f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a61f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  
  *(undefined ***)(unsigned)(ar4 + 0x1c8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13b27c);
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 6;
  *(undefined4 *)(unsigned)(ar4 + 0x230) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x220) = 2;
  *(undefined4 *)(unsigned)(ar4 + 0x224) = 2;
  *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x219c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2198) = 0;
  (vsp = ((unsigned long)(fr0_ - 24)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), vec3_copy_8c023d8c(ar4 + 0x21a8,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x21b8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x21bc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x21b4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 1;
  return 0x1d0;
}

__asm__(".globl _FUN_8c0a61f8\n.set _FUN_8c0a61f8, _FUN_8c0a61f8_def\n");
