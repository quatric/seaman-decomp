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
int FUN_8c113dfa_def(int *ar4,int *ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c113dfa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int a6;
  int a4;
  undefined4 *puVar2;
  
  uVar1 = *(ushort *)(unsigned)(ar4 + 1);
  a4 = *ar6;
  a6 = (uint)uVar1 * 2;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(a4,*ar4 * 2 + ar7,a6,ar7));
  puVar2 = (undefined4 *)(unsigned)(a4 + a6);
  *(ushort *)(unsigned)((int)puVar2 + -2) = *(ushort *)(unsigned)((int)puVar2 + -2) | 1;
  *puVar2 = s0;
  *ar5 = *ar5 + uVar1 + 2;
  *ar6 = (int)(puVar2 + 1);
  return (int)(*(uint*)((uchar*)&s0+2));
}

__asm__(".globl _FUN_8c113dfa\n.set _FUN_8c113dfa, _FUN_8c113dfa_def\n");
