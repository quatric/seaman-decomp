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
int FUN_8c25afc0_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25afc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(int *)(fr0_ - 0x10)) = ar4;
  (*(uint *)(fr0_ - 0xc)) = ar5;
  (*(undefined4 *)(fr0_ - 0x8)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c25ae38(&(*(undefined4 *)(fr0_ - 0x18)),&(*(undefined4 *)(fr0_ - 0x14)),&(*(uint *)(fr0_ - 0x1c)),ar6));
  if (iVar1 < 0) {
    return iVar1;
  }
  if (((*(uint *)(fr0_ - 0x1c)) == (int)0xe00) && (((*(uint *)(fr0_ - 0xc)) & 0x400000) != 0)) {
    (*(uint *)(fr0_ - 0x1c)) = (*(uint *)(fr0_ - 0x1c)) & 0xff | (int)0xf00;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2137c0((*(int *)(fr0_ - 0x10)) + 4,(*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x14)),(*(uint *)(fr0_ - 0x1c))));
  if (iVar1 != 0) {
    *(undefined4 *)(unsigned)0x8c4aa6b4 = 6;
    return 0xfffffffa;
  }
  return 1;
}

__asm__(".globl _FUN_8c25afc0\n.set _FUN_8c25afc0, _FUN_8c25afc0_def\n");
