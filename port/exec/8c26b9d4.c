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
undefined4 FUN_8c26b9d4_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26b9d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain1 = (int)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *a4;
  
  iVar1 = 0;
  do {
    if (*(char *)(unsigned)(iVar1 * 0x30 + -0x73b3ff44) == '\0') break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < ain1);
  if (iVar1 == 0x40) {
    return 0;
  }
  iVar1 = iVar1 * 0x30;
  a4 = (undefined4 *)(unsigned)(iVar1 + -0x73b3ff48);
  *(undefined1 *)(unsigned)(iVar1 + -0x73b3ff44) = 1;
  *(undefined1 *)(unsigned)(iVar1 + -0x73b3ff43) = (undefined1)ar4;
  *a4 = ((undefined1 *)(unsigned)0x8c2786d0);
  *(undefined1 *)(unsigned)(iVar1 + -0x73b3ff43) = (undefined1)ar4;
  *(unsigned *)(unsigned)(iVar1 + -0x73b3ff40) = ((undefined1 *)(unsigned)0x8c2739c8);
  *(undefined4 *)(unsigned)(iVar1 + -0x73b3ff3c) = ar5;
  *(uint *)(unsigned)(iVar1 + -0x73b3ff38) = ar6 >> 4;
  *(unsigned *)(unsigned)(iVar1 + -0x73b3ff20) = ((undefined1 *)(unsigned)0x8c26b98e);
  *(unsigned *)(unsigned)(iVar1 + -0x73b3ff1c) = a4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26ba62(a4,ar5,ar6 >> 4,iVar1));
  return a4;
}

__asm__(".globl _FUN_8c26b9d4\n.set _FUN_8c26b9d4, _FUN_8c26b9d4_def\n");
