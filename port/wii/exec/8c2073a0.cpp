#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2073a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2073a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<undefined4>* puVar2;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  puVar1 = 0x8c4a9e58;
  *(le<undefined4>* )(unsigned)0x8c4a9e58 = 0;
  puVar2 = 0x8c4a9ddc;
  *(le<undefined4>* )(unsigned)0x8c4a9ddc = (&(*(undefined1 *)(unsigned)0x8c2078f2));
  puVar2[1] = 0;
  puVar1[-0x1d] = (&(*(undefined1 *)(unsigned)0x8c2078f6));
  puVar1[-0x1c] = 0;
  puVar2[4] = (&(*(undefined1 *)(unsigned)0x8c2078fa));
  puVar2[5] = 0;
  puVar1[-0x19] = (&(*(undefined1 *)(unsigned)0x8c207920));
  puVar1[-0x18] = 0;
  puVar2[8] = (&(*(undefined1 *)(unsigned)0x8c207924));
  puVar2[9] = 0;
  puVar1[-0x15] = (&(*(undefined1 *)(unsigned)0x8c207928));
  puVar1[-0x14] = 0;
  puVar2[0xc] = (&(*(undefined1 *)(unsigned)0x8c20792c));
  puVar2[0xd] = 0;
  puVar1[-0x11] = (&(*(undefined1 *)(unsigned)0x8c207930));
  puVar1[-0x10] = 0;
  puVar2[0x10] = (&(*(undefined1 *)(unsigned)0x8c207934));
  puVar2[0x11] = 0;
  puVar1[-0xd] = (&(*(undefined1 *)(unsigned)0x8c207972));
  puVar1[-0xc] = 0;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2073a0\n.set FUN_8c2073a0, FUN_8c2073a0_def\n");

}
