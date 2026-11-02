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
undefined4 FUN_8c02f2c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f2c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined1 *)(unsigned)(0x91 + ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f3ac(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 4) == 8) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 8;
  }
  if ((*(int *)(unsigned)(ar4 + 0x38) == 2) || (*(int *)(unsigned)(ar4 + 0x38) == 0)) {
    *(undefined1 *)(unsigned)(0x91 + ar4) = 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 4) = uVar2;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 8) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
  }
  else if (*(int *)(unsigned)(ar4 + 0x38) == 3) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,ar6,ar7));
    if (*(int *)(unsigned)(ar4 + 8) < iVar3) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 8) = uVar2;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 4) != iVar3) {
        *(undefined1 *)(unsigned)(0x91 + ar4) = 1;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 4) == 8) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 8;
  }
  return *(undefined4 *)(unsigned)(ar4 + 4);
}

__asm__(".globl _FUN_8c02f2c8\n.set _FUN_8c02f2c8, _FUN_8c02f2c8_def\n");
