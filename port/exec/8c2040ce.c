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
int FUN_8c2040ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2040ce";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2050cc(((undefined4 *)(unsigned)0x8c275408),((undefined4 *)(unsigned)0x8c27540c),((undefined4 *)(unsigned)0x8c275400),((undefined4 *)(unsigned)0x8c275404)));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2050cc(((undefined4 *)(unsigned)0x8c27541c),((undefined4 *)(unsigned)0x8c275420),((undefined4 *)(unsigned)0x8c275414),((undefined4 *)(unsigned)0x8c275418)));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c2040ce\n.set _FUN_8c2040ce, _FUN_8c2040ce_def\n");
