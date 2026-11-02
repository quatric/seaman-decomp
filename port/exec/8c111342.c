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
int FUN_8c111342_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c111342";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
  if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
    do {
      in_r0 = uVar2 * 4;
      if (*(int *)(unsigned)(in_r0 + *(int *)(unsigned)(ar4 + 0x40)) != *(int *)(unsigned)(ar4 + 0x3c)) {
        in_r0 = *(int *)(unsigned)(ar4 + 0x2c);
        iVar1 = uVar2 * 4;
        if (*(int *)(unsigned)(ar4 + 0x24) == *(int *)(unsigned)(in_r0 + iVar1)) {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
          break;
        }
        if (*(uint *)(unsigned)(ar4 + 0x24) < *(uint *)(unsigned)(ar4 + 0x28)) {
          in_r0 = *(int *)(unsigned)(ar4 + 0x2c);
          if ((*(uint *)(unsigned)(in_r0 + iVar1) < *(uint *)(unsigned)(ar4 + 0x28)) &&
             (*(uint *)(unsigned)(ar4 + 0x24) < *(uint *)(unsigned)(in_r0 + iVar1))) {
            in_r0 = *(int *)(unsigned)(ar4 + 0x2c);
            *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(in_r0 + iVar1);
          }
        }
        else {
          in_r0 = *(int *)(unsigned)(ar4 + 0x2c);
          if ((*(uint *)(unsigned)(in_r0 + iVar1) < *(uint *)(unsigned)(ar4 + 0x28)) ||
             (*(uint *)(unsigned)(ar4 + 0x24) < *(uint *)(unsigned)(in_r0 + iVar1))) {
            in_r0 = *(int *)(unsigned)(ar4 + 0x2c);
            *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(in_r0 + iVar1);
          }
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(unsigned)(ar4 + 0x14));
  }
  if (uVar2 == *(uint *)(unsigned)(ar4 + 0x14)) {
    in_r0 = 0x30;
    *(undefined1 *)(unsigned)(ar4 + 0x30) = 0;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c111342\n.set _FUN_8c111342, _FUN_8c111342_def\n");
