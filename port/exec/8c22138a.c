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
int FUN_8c22138a_def(int ar4,int ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c22138a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x14)),((undefined1 *)(unsigned)0x8c26d7c0),vr7));
  piVar4 = (int *)(unsigned)(ar5 * 8 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar2 = (int *)(unsigned)(ar4 + iVar1 * 8);
  iVar3 = *piVar4;
  iVar1 = *piVar2;
  *ar7 = piVar4[1];
  ar7[1] = piVar2[1];
  return (uint)(0 < iVar1 - iVar3) << 2;
}

__asm__(".globl _FUN_8c22138a\n.set _FUN_8c22138a, _FUN_8c22138a_def\n");
