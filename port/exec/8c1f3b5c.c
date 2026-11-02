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
uint FUN_8c1f3b5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f3b5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd26((uint)(byte)(((undefined1 *)(unsigned)0x8c26c69c))[ar4],ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd26(ar4,ar5,ar6,ar7));
  if ((((ar4 == 2) || (ar4 == 8)) || (ar4 == 0xe)) || (ar4 == 0x14)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return (uint)(byte)(((undefined1 *)(unsigned)0x8c26c674))
                     [(uint)*(byte *)(unsigned)(iVar1 + 0x12 + iVar3) * 4 + (uint)*(byte *)(unsigned)(iVar2 + 0x12)];
}

__asm__(".globl _FUN_8c1f3b5c\n.set _FUN_8c1f3b5c, _FUN_8c1f3b5c_def\n");
