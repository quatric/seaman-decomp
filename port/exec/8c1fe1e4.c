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
undefined4 FUN_8c1fe1e4_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1fe1e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int *piVar1;
  uint uVar2;
  int a6;
  int a7;
  int iVar3;
  
  piVar1 = 0x8c4783dc;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  a6 = ar6;
  a7 = ar7;
  while( true ) {
    if (ar7 < ar6) {
      return 0xffffffff;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar1 + 0xc))))(*(undefined4 *)(unsigned)(iVar3 + 0x24),ar7 << 1,a6,a7));
    if ((uVar2 & 0xffff) == (uint)(ushort)ar5) break;
    ar7 = ar7 + -1;
  }
  return ar7;
}

__asm__(".globl _FUN_8c1fe1e4\n.set _FUN_8c1fe1e4, _FUN_8c1fe1e4_def\n");
