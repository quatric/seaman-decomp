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
undefined4 FUN_8c1f0d38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f0d38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int unaff_r14 = 0;
  
  iVar1 = *(int *)(unsigned)(unaff_r14 + 0x24);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f0c14(unaff_r14,ar5,ar6,ar7));
    if (iVar1 != -10) {
      return iVar1;
    }
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0xfffffffe;
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f0b58(unaff_r14,ar5,ar6,ar7));
      return uVar2;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), syscall_1f98ec(*(undefined4 *)(unsigned)(unaff_r14 + 4),ar5,ar6,ar7));
    if (iVar1 == -1) {
      return 0xfffffffd;
    }
    uVar2 = 2;
  }
  *(undefined4 *)(unsigned)(unaff_r14 + 0x24) = uVar2;
  return 1;
}

__asm__(".globl _FUN_8c1f0d38\n.set _FUN_8c1f0d38, _FUN_8c1f0d38_def\n");
