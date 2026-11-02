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
undefined4 FUN_8c200e1e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c200e1e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  
  iVar2 = ar4 * 0x148;
  *(undefined4 *)(unsigned)(iVar2 + -0x73b87bf0) = 1;
  *(undefined4 *)(unsigned)(iVar2 + -0x73b87bec) =
       *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c273ab4) + *(int *)(unsigned)(iVar2 + -0x73b87c1c) * 0x50);
  ar5_00 = 0;
  while( true ) {
    if (*((int *)(unsigned long)*(unsigned *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar2)) + 1 <= ar5_00) {
      return 0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fbc44(ar4,ar5_00,ar5,ar7));
    if (iVar1 < 0) break;
    ar5_00 = ar5_00 + 1;
    ar5 = ar5 + 0x200;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c200e1e\n.set _FUN_8c200e1e, _FUN_8c200e1e_def\n");
