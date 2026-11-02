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
undefined4 FUN_8c1faa08_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1faa08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a6;
  int iVar2;
  int iVar3;
  int iVar4;
  
  a6 = ar6;
  iVar3 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1fad9a(ar4,ar5,ar6,ar7); });
  iVar2 = iVar3 + ar6;
  iVar4 = iVar3 << 2;
  for (; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fadd0(*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c475ec8) + iVar4),ar5,a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fad9a(((undefined1 *)(unsigned)0x8c26d000),ar5,a6,ar7));
    iVar4 = iVar4 + 4;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fad9a(((undefined1 *)(unsigned)0x8c26cff8),ar5,a6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c1faa08\n.set _FUN_8c1faa08, _FUN_8c1faa08_def\n");
