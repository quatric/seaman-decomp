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
undefined4 FUN_8c203cd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c203cd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint unaff_r11 = 0;
  ushort *ar5_00;
  
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c205640((fr0_ + (int)0xffffffd4),ar4,ar6,ar7));
  uVar7 = 0;
  ar5_00 = (ushort *)(unsigned)0x0;
  puVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c275428);
  while (puVar4 != (ushort *)(unsigned)0x0) {
    if (((*puVar4 & 0xf000) == (*(uint *)(fr0_ - 0x2c))) && (uVar5 = 0, puVar3 = puVar4, (*(uint *)(fr0_ - 0x1c)) != 0)) {
      do {
        puVar4 = puVar3;
        uVar6 = uVar5;
        if ((*(int *)(unsigned)(puVar3 + uVar5 * 2 + 6) != 0) &&
           (uVar5 * ((*(uint *)(fr0_ - 0x28)) >> 2) * 4 + *(int *)(unsigned)(puVar3 + 4) == *(int *)(unsigned)(ar4 + 0x1c))) {
          puVar4 = (ushort *)(unsigned)0x0;
          uVar6 = (*(uint *)(fr0_ - 0x1c));
          unaff_r11 = uVar5;
          ar5_00 = puVar3;
        }
        uVar5 = uVar6 + 1;
        puVar3 = puVar4;
      } while (uVar5 < (*(uint *)(fr0_ - 0x1c)));
    }
    if (ar5_00 == (ushort *)(unsigned)0x0) {
      puVar4 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(puVar4 + 2));
    }
  }
  if (ar5_00 == (ushort *)(unsigned)0x0) {
    uVar7 = 7;
  }
  else {
    bVar1 = false;
    uVar5 = 0;
    (ar5_00 + unaff_r11 * 2 + 6)[0] = 0;
    (ar5_00 + unaff_r11 * 2 + 6)[1] = 0;
    if ((*(uint *)(fr0_ - 0x1c)) != 0) {
      do {
        iVar2 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        if (*(int *)(unsigned)(ar5_00 + iVar2 + 6) != 0) {
          bVar1 = true;
        }
      } while (uVar5 < (*(uint *)(fr0_ - 0x1c)));
    }
    if (!bVar1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c203bda(*(undefined4 *)(unsigned)(ar5_00 + 4),1,0,(*(uint *)(fr0_ - 0x1c))));
      if (iVar2 != 0) {
        return iVar2;
      }
      puVar4 = ar5_00;
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c2057f8(((undefined4 *)(unsigned)0x8c275428),ar5_00,uVar7,(*(uint *)(fr0_ - 0x1c))));
      ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c2057c0(ar5_00,puVar4,uVar7,(*(uint *)(fr0_ - 0x1c))); });
    }
    uVar7 = 0;
  }
  return uVar7;
}

__asm__(".globl _FUN_8c203cd0\n.set _FUN_8c203cd0, _FUN_8c203cd0_def\n");
