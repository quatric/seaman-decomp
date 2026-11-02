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
uint sh4_tmu_1f88c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "sh4_tmu_1f88c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  byte *pbVar2;
  uint uVar3;
  
  puVar1 = 0xffd80000;
  *(undefined4 *)(unsigned)0xffd80000 = 0;
  pbVar2 = 0xffd80004;
  *(undefined4 *)(unsigned)0xffd80004 = *(undefined4 *)(unsigned)0xffd80004 & 0xfe;
  *(undefined4 *)(unsigned)0xffd80010 = 2;
  *(undefined4 *)(unsigned)0xffd80008 = 0xffffffff;
  *(undefined4 *)(unsigned)(puVar1 + 0xc) = 0xffffffff;
  uVar3 = (int)(char)*pbVar2 | 1;
  *pbVar2 = (byte)uVar3;
  return uVar3;
}

__asm__(".globl _sh4_tmu_1f88c0\n.set _sh4_tmu_1f88c0, _sh4_tmu_1f88c0_def\n");
