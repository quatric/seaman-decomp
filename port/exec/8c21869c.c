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
undefined4 FUN_8c21869c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21869c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  undefined4 uVar2;
  
  if (((((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x100) == 0) || (in_r0 = 0x14, (float)ar4[5] <= 0.0)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c217e18(ar4,ar5,ar6,ar7)), in_r0 = 0, iVar1 == 0)) {
    uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
    if (*ar4 != 0) {
      in_r0 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c21849c(*ar4,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa510),ar6,ar7));
      ar5 = in_r0;
    }
    if (ar4[1] != 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4ab1d8) = ar5;
      ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c217f12(ar4[1],ar5,(*(undefined4 *)(unsigned)(unsigned)0x8c4c0fa0),uVar2); });
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c21869c\n.set _FUN_8c21869c, _FUN_8c21869c_def\n");
