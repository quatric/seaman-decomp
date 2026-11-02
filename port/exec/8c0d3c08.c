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
undefined4 FUN_8c0d3c08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d3c08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = 1;
  uVar2 = ar5;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_40_0d3d64(iVar3 * 0x44 + ar4 + 0x470,uVar2,ar6,ar7));
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x5e8);
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d21a0(iVar3 * 0x44 + ar4 + 0x470,uVar2,ar6,ar7));
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x30) == 1) {
    if ((*(int *)(unsigned)(ar4 + 0x61c) < 2) &&
       (*(int *)(unsigned)(ar4 + 0x61c) = *(int *)(unsigned)(ar4 + 0x61c) + 2, 2 < *(int *)(unsigned)(ar4 + 0x61c))) {
      *(undefined4 *)(unsigned)(ar4 + 0x61c) = 2;
    }
    ar5_00 = 9;
  }
  else if ((-0x1e < *(int *)(unsigned)(ar4 + 0x61c)) &&
          (*(int *)(unsigned)(ar4 + 0x61c) = *(int *)(unsigned)(ar4 + 0x61c) + -2, *(int *)(unsigned)(ar4 + 0x61c) < -0x1e)) {
    *(undefined4 *)(unsigned)(ar4 + 0x61c) = 0xffffffe2;
  }
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d59a4(ar4,ar5_00,ar5,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d5ca8(ar4,ar5_00,ar5,ar7));
  *(int *)(unsigned)(ar4 + 0x5e8) = *(int *)(unsigned)(ar4 + 0x5e8) + 1;
  return uVar2;
}

__asm__(".globl _FUN_8c0d3c08\n.set _FUN_8c0d3c08, _FUN_8c0d3c08_def\n");
