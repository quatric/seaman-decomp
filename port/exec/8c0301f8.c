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
int FUN_8c0301f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0301f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x2d; iVar2 = iVar2 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                      (0x3e8,*(int *)(unsigned)(ar4 + 0x60) + 1,ar6,ar7));
    if (uVar1 < (uint)(*(int *)(unsigned)(0x77c + ar4) - *(int *)(unsigned)(0x674 + ar4 + iVar2 * 4))) {
      *(undefined4 *)(unsigned)(0x674 + ar4 + iVar2 * 4) = 0;
    }
  }
  *(undefined4 *)(unsigned)(0x708 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x724 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x714 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x710 + ar4) = 0;
  if (*(int *)(unsigned)(0x770 + ar4) == 2) {
    *(undefined4 *)(unsigned)(0x770 + ar4) = 2;
  }
  if (*(int *)(unsigned)(0x770 + ar4) == 3) {
    *(undefined4 *)(unsigned)(0x770 + ar4) = 0;
    *(undefined4 *)(unsigned)(0x674 + ar4 + *(int *)(unsigned)(0x72c + ar4) * 4) =
         *(undefined4 *)(unsigned)(0x77c + ar4);
    *(undefined1 *)(unsigned)(0x774 + ar4) = 0;
    *(undefined4 *)(unsigned)(0x72c + ar4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
  }
  if (*(int *)(unsigned)(0x770 + ar4) == 1) {
    *(undefined4 *)(unsigned)(0x770 + ar4) = 1;
  }
  iVar2 = 0x77c;
  *(int *)(unsigned)(0x77c + ar4) = *(int *)(unsigned)(0x77c + ar4) + 1;
  return iVar2;
}

__asm__(".globl _FUN_8c0301f8\n.set _FUN_8c0301f8, _FUN_8c0301f8_def\n");
