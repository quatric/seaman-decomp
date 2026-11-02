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
undefined4 FUN_8c12359a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c12359a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int unaff_r14 = 0;
  
  if (*(char *)(unsigned)(in_r0 + unaff_r14) == '\0') {
    if (((ushort)ar5 == 0) || (*(ushort *)(unsigned)(0x4b8 + unaff_r14) == (ushort)ar5)) {
      return (int)*(short *)(unsigned)(0x4b8 + unaff_r14);
    }
    iVar1 = (int)0x4bc;
    *(undefined1 *)(unsigned)(iVar1 + unaff_r14) = 1;
    *(undefined2 *)(unsigned)(iVar1 + 2 + unaff_r14) = 0x32;
    *(undefined2 *)(unsigned)(iVar1 + -4 + unaff_r14) = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(unaff_r14,0xb,(uint)(ushort)ar5,0));
  }
  return 0;
}

__asm__(".globl _FUN_8c12359a\n.set _FUN_8c12359a, _FUN_8c12359a_def\n");
