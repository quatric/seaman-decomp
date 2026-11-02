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
undefined4 FUN_8c20d9ce_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20d9ce";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 ar6_01;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  if (ar6 < 3) {
    ar6_00 = (undefined1 *)(unsigned)0x8;
    ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x1c));
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x1c)),ar5_00,8,ar7));
    if (ar6 == 1) {
      (*(undefined1 *)(fr0_ - 0x19)) = *ar5;
    }
    else {
      ar6_00 = ((undefined1 *)(fr0_ - 0x14));
      puVar3 = ((undefined1 *)(fr0_ - 0x18));
      ar5_00 = ar5;
      do {
        uVar1 = *ar5_00;
        ar5_00 = ar5_00 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < ar6_00);
    }
    iVar2 = *(int *)(unsigned)(ar4 + 0x1c);
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c20732e(((undefined1 *)(fr0_ - 0x1c)),ar5_00,ar6_00,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c20732e(&s4,ar5_00,ar6_00,ar7); });
    ar6_01 = 8;
    ar5 = ((undefined1 *)(fr0_ - 0x1c));
  }
  else {
    ar6_01 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c26d5b4) + iVar2 * 4);
    iVar2 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c26d588) + iVar2 * 4) + *(int *)(unsigned)(ar4 + 0x1c);
  }
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c20a8e0(iVar2,ar5,ar6_01,ar7));
  return 0;
}

__asm__(".globl _FUN_8c20d9ce\n.set _FUN_8c20d9ce, _FUN_8c20d9ce_def\n");
