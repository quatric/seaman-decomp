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
undefined4 FUN_8c2006fa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2006fa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r8 = 0;
  int iVar2;
  undefined4 unaff_r12 = 0;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  
  iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(unaff_r13 + 0x1c) + 0x10);
  if (0 < iVar2) {
    do {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fbc44))))
                        (unaff_r12,*(int *)(unsigned)(*(int *)(unsigned)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,
                         unaff_r14 * 0x200 + *(int *)(unsigned)(unaff_r13 + 0x24),ar7));
      if (iVar1 < 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20099e(unaff_r12,*(int *)(unsigned)(*(int *)(unsigned)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,unaff_r8 + 5,
                     ar7));
        return iVar1;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20099e(unaff_r12,*(int *)(unsigned)(*(int *)(unsigned)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,unaff_r8,ar7));
      unaff_r14 = unaff_r14 + 1;
    } while (unaff_r14 < iVar2);
  }
  return 0;
}

__asm__(".globl _FUN_8c2006fa\n.set _FUN_8c2006fa, _FUN_8c2006fa_def\n");
