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
undefined4 FUN_8c112f40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112f40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x1e4),0x18,vr6,vr7));
  uVar7 = uVar4;
  if (uVar4 < *(uint *)(unsigned)(ar4 + 0x88)) {
    do {
      iVar5 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x84) + uVar7 * 4);
      if (uVar4 != 0) {
        *(int *)(unsigned)(uVar4 + 0x10) = iVar5;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(unsigned)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 * 0x18 + iVar5;
    } while (uVar7 < *(uint *)(unsigned)(ar4 + 0x88));
  }
  if (uVar4 != 0) {
    *(uint *)(unsigned)(uVar4 + 0x10) = uVar6;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x8c) = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x84));
  *(uint *)(unsigned)(ar4 + 0x80) = uVar6;
  return 0;
}

__asm__(".globl _FUN_8c112f40\n.set _FUN_8c112f40, _FUN_8c112f40_def\n");
