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
undefined4 FUN_8c1f5bb4_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f5bb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  
  (*(int *)(fr0_ - 0x10)) = ar4;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1f5a30(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1f5a5e(((undefined1 *)(fr0_ - 0xc)),ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1f5ac6((*(int *)(fr0_ - 0x10)) + 0x10,ar5,ar6,ar7));
  if (iVar2 < 0) {
    iVar2 = *piVar1;
    piVar1[iVar2 * 2 + 2] = (*(int *)(fr0_ - 0x10));
    ar5 = piVar1 + iVar2 * 2 + 2;
    ar5[1] = 0;
    *piVar1 = *piVar1 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1f5a48(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c1f5bb4\n.set _FUN_8c1f5bb4, _FUN_8c1f5bb4_def\n");
