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
undefined4 FUN_8c212440_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c212440";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  undefined1 *ain0;
  
  ar5_00 = (fr0_ + (int)0xfffffff0);
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f397e(ar4,0,ar6,ar7));
  if (ar4_00 != 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f30ee(ar4_00,(fr0_ + (int)0xfffffff0),ar6,ar7));
    ain0 = ((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
    if ((iVar1 == 1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), malloc_thunk((int)((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) * 0x800 + 8,ar5_00,ar6,ar7)),
       ain0 = ((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x10)), iVar1 != 0)) {
      ar6 = iVar1;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f31c6(ar4_00,((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),iVar1,ar7));
      if (iVar2 == 0) {
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c1f309c(ar4_00,((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),ar6,ar7); });
        return iVar1;
      }
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1fb57c(iVar1,((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x10)),ar6,ar7));
      ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x10));
    }
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c1f309c(ar4_00,ar5_00,ar6,ar7); });
  }
  return 0;
}

__asm__(".globl _FUN_8c212440\n.set _FUN_8c212440, _FUN_8c212440_def\n");
