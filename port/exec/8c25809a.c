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
undefined1 * FUN_8c25809a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25809a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  undefined4 in_r3 = 0;
  
  puVar1 = ((undefined1 *)(unsigned)0x8c4aa6dc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6dc) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6d4) = in_r3;
  if (((undefined4 *)(unsigned long)*(unsigned *)0x8c277aec) != (code *)0x0) {
    puVar1 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c277aec)))(ar4,ar5,ar6,ar7));
  }
  return puVar1;
}

__asm__(".globl _FUN_8c25809a\n.set _FUN_8c25809a, _FUN_8c25809a_def\n");
