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
undefined4 FUN_8c0d56dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d56dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0x5c4) = 0x3f4ccccd;
  *(undefined4 *)(unsigned)(ar4 + 0x5c8) = 0x3f4ccccd;
  *(undefined4 *)(unsigned)(ar4 + 0x5cc) = 0x3f4ccccd;
  *(undefined2 *)(unsigned)(ar4 + 4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x5e8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(iVar1 * 0x18 + ar4 + 0x600) != -1) {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(unsigned)(iVar1 * 0x18 + ar4 + 0x600),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021a8c(0x8c2b59d0,iVar1 * 0x18 + ar4 + 0x600,ar6,ar7));
      *(undefined4 *)(unsigned)(iVar1 * 0x18 + ar4 + 0x600) = 0xffffffff;
    }
  }
  *(undefined4 *)(unsigned)(ar4 + 0x61c) = 0xffffffe2;
  (*(undefined1 *)(unsigned)0x8c437843) = 0xff;
  (*(undefined1 *)(unsigned)0x8c437842) = 0x32;
  (*(undefined1 *)(unsigned)0x8c437841) = 0x32;
  (*(undefined1 *)(unsigned)0x8c437840) = 0x1f;
  return 0x1f;
}

__asm__(".globl _FUN_8c0d56dc\n.set _FUN_8c0d56dc, _FUN_8c0d56dc_def\n");
