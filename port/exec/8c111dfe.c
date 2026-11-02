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
undefined4 FUN_8c111dfe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c111dfe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(unsigned)(ar4 + 0x30) != '\0') {
    return 0;
  }
  iVar3 = *(int *)(unsigned)(ar4 + 0x24);
  iVar1 = iVar3 + (uint)*(ushort *)(unsigned)(ar4 + 0xc);
  *(int *)(unsigned)(ar4 + 0x24) = iVar1;
  uVar2 = 0;
  if (iVar1 == *(int *)(unsigned)(ar4 + 0x20)) {
    *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  }
  if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
    do {
      if (*(int *)(unsigned)(uVar2 * 4 + *(int *)(unsigned)(ar4 + 0x2c)) == 0) {
        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + uVar2 * 4) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + uVar2 * 4) + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(unsigned)(ar4 + 0x14));
  }
  if ((*(int *)(unsigned)(ar4 + 0x24) == *(int *)(unsigned)(ar4 + 0x28)) && (*(int *)(unsigned)(ar4 + 0x18) != 0)) {
    *(undefined1 *)(unsigned)(ar4 + 0x30) = 1;
  }
  *(int *)(unsigned)(ar4 + 0x3c) = *(int *)(unsigned)(ar4 + 0x3c) + 1;
  return iVar3;
}

__asm__(".globl _FUN_8c111dfe\n.set _FUN_8c111dfe, _FUN_8c111dfe_def\n");
