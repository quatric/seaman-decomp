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
undefined4 FUN_8c1f5506_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f5506";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f59dc(ar4,0,0x1e,ar7));
  *(undefined1 *)(unsigned)(ar4 + 0x14) = 0x28;
  *(undefined1 *)(unsigned)(ar4 + 0x15) = 0x6e;
  *(undefined1 *)(unsigned)(ar4 + 0x16) = 0x6f;
  *(undefined1 *)(unsigned)(ar4 + 0x17) = 0x6e;
  *(undefined1 *)(unsigned)(ar4 + 0x18) = 0x65;
  puVar1 = (undefined1 *)(unsigned)(ar4 + 0x1a);
  *(undefined1 *)(unsigned)(ar4 + 0x19) = 0x29;
  do {
    *puVar1 = 0x20;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined1 *)(unsigned)(ar4 + 0x33));
  *(undefined1 *)(unsigned)(ar4 + 0x33) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f5506\n.set _FUN_8c1f5506, _FUN_8c1f5506_def\n");
