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
uint FUN_8c26175c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26175c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2052; for (int i_ = 0; i_ < 2052; i_++) z_[i_] = 0; }
  uint *puVar1;
  uint uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 2052)), FUN_8c2616a8(ar4,ar5,ar6,ar7));
  puVar1 = 0xff00001c;
  *(undefined4 *)(unsigned)0xff00001c = ar4 & (int)(int)0xfffff7ff | (int)0x800;
  uVar2 = *puVar1 & 0xfffffff7 | 8;
  *puVar1 = uVar2;
  return uVar2;
}

__asm__(".globl _FUN_8c26175c\n.set _FUN_8c26175c, _FUN_8c26175c_def\n");
