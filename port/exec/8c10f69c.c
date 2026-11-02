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
undefined4 FUN_8c10f69c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f69c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x28);
  ar5[1] = (uint)*(ushort *)(unsigned)(ar4 + 0x30);
  puVar2 = ar5 + 2;
  if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *puVar2 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x44) + iVar1);
      puVar2 = puVar2 + 1;
    } while (uVar3 < *(uint *)(unsigned)(ar4 + 0x78));
  }
  *puVar2 = *(undefined4 *)(unsigned)(ar4 + 0x48);
  puVar2[1] = *(undefined4 *)(unsigned)(ar4 + 0x4c);
  puVar2[2] = *(undefined4 *)(unsigned)(ar4 + 0x50);
  puVar2[3] = *(undefined4 *)(unsigned)(ar4 + 0x54);
  return 0x54;
}

__asm__(".globl _FUN_8c10f69c\n.set _FUN_8c10f69c, _FUN_8c10f69c_def\n");
