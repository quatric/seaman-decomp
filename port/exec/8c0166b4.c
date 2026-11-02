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
undefined4 Class_129808_m6_0166b4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129808_m6_0166b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar5_00;
  int iVar2;
  int ar5_01;
  
  iVar2 = ar5;
  ar5_01 = ar6;
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x64)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c01688c(ar4,iVar2,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar5_01); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c015198(((undefined1 *)(fr0_ - 0x64)),ar5_01,ar6,ar7); });
  for (iVar2 = 0; *(char *)(unsigned)(iVar2 + ar5) != '\0'; iVar2 = iVar2 + 1) {
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c01679c(ar4,(int)*(char *)(unsigned)(iVar2 + ar5),((undefined1 *)(fr0_ - 0x50)),ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0168b4(ar4,iVar2,((undefined1 *)(fr0_ - 0x40)),ar7));
    ar7 = 4;
    ar6 = ar4 + 0x1c;
    ({ unsigned long ri0_ = (unsigned long)(ar5_01); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c016318(((undefined1 *)(fr0_ - 0x64)),((undefined1 *)(fr0_ - 0x40)),ar6,4); });
    ar5_00 = ((undefined1 *)(fr0_ - 0x50));
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c016324(((undefined1 *)(fr0_ - 0x64)),ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c016340(((undefined1 *)(fr0_ - 0x64)),ar5_00,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 104)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_129808_m6_0166b4\n.set _Class_129808_m6_0166b4, _Class_129808_m6_0166b4_def\n");
