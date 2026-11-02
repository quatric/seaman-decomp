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
int FUN_8c10afbe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10afbe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10af94(ar4,ar5,ar6,ar7));
  iVar2 = (int)0xa8;
  return (iVar1 + *(int *)(unsigned)(iVar2 + ar4) * 2 + 3U & 0xfffffffc) +
         (*(int *)(unsigned)(iVar2 + -0x1c + ar4) + 1) * 4 + (*(int *)(unsigned)(iVar2 + -0x14 + ar4) + 1) * 4;
}

__asm__(".globl _FUN_8c10afbe\n.set _FUN_8c10afbe, _FUN_8c10afbe_def\n");
