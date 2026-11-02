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
int FUN_8c01dea4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01dea4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 164; for (int i_ = 0; i_ < 164; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 164)); strcpy(((undefined1 *)(fr0_ - 0x88)),*(int *)(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(unsigned)0x8c12fba9),ar6,ar7));
  ar7_00 = 10;
  ar6_00 = *(int *)(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664;
  (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c021338(0x8c3eb334,((undefined1 *)(fr0_ - 0x88)),ar6_00,10));
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c01dfc0(*(int *)(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar4 + 0x5b44,ar6_00,ar7_00));
  if (iVar1 == 0) {
    ar5_00 = ar4 + 0x5b65;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c01dfc0(*(int *)(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c01d984(ar4,ar5_00,ar6_00,ar7_00));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01dea4\n.set _FUN_8c01dea4, _FUN_8c01dea4_def\n");
