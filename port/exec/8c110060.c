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
undefined4 FUN_8c110060_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110060";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int unaff_r14 = 0;
  
  iVar1 = *(int *)(unsigned)(unaff_r14 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(unaff_r14 + 0x48) == *(int *)(unsigned)(unaff_r14 + 0x7c)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fe04(unaff_r14,ar5,ar6,ar7));
    }
    if (*(uint *)(unsigned)(unaff_r14 + 0x48) < *(uint *)(unsigned)(unaff_r14 + 0x7c)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fc96(unaff_r14,ar5,ar6,ar7));
    }
    if ((float)*(int *)(unsigned)(unaff_r14 + 0x8c) < *(float *)(unsigned)(unaff_r14 + 0x4c)) {
      *(undefined4 *)(unsigned)(unaff_r14 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fe04(unaff_r14,ar5,ar6,ar7));
    if (*(int *)(unsigned)(unaff_r14 + 0x48) == 0) {
      *(undefined4 *)(unsigned)(unaff_r14 + 0x28) = 2;
    }
  }
  else if (iVar1 == 2) {
    if (*(uint *)(unsigned)(unaff_r14 + 0x48) < *(uint *)(unsigned)(unaff_r14 + 0x7c)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fc96(unaff_r14,ar5,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fe04(unaff_r14,ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(unaff_r14 + 0x28) != 1) {
    uVar2 = 0;
    do {
      if ((*(char *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x6c) + uVar2) != '\0') &&
         (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(uVar2 * 8 + *(int *)(unsigned)(unaff_r14 + 0xc)) + 0x40) +
                  *(int *)(unsigned)(uVar2 * 8 + *(int *)(unsigned)(unaff_r14 + 0xc) + 4) * 4) ==
          *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0xc) + uVar2 * 8) + 0x3c))) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(unsigned)(unaff_r14 + 0x78));
  }
  return 1;
}

__asm__(".globl _FUN_8c110060\n.set _FUN_8c110060, _FUN_8c110060_def\n");
