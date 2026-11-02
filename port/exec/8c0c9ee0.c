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
undefined4 FUN_8c0c9ee0_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0c9ee0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  undefined4 a5;
  undefined1 *ar5_00;
  undefined8 in_dr0 = 0;
  char cVar2;
  
  cVar2 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c102748(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c1026ec(((undefined1 *)(fr0_ - 0x54)),ar5_00,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ce70);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13ce74);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13ce78);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c13ce7c);
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ce80);
  (*(undefined4 *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13ce84);
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13ce88);
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13ce8c);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0637d0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0c86d4(*(undefined4 *)(unsigned)(ar4 + 8),((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0c86c0(*(undefined4 *)(unsigned)(ar4 + 8),((undefined1 *)(fr0_ - 0x54)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0c8698(*(undefined4 *)(unsigned)(ar4 + 8),((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
    ar7 = ((undefined1 *)(fr0_ - 0x2c));
    ar6 = ((undefined1 *)(fr0_ - 0x54));
    ar5_00 = ((undefined1 *)(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0fff54(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xb0))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5_00,ar6,ar7));
  if (((*(int *)(unsigned)(ar4 + 0x2d1b0) == 4) && ((*(undefined4 *)(unsigned)(unsigned)0x8c437044) != 0)) && ((*(undefined4 *)(unsigned)(unsigned)0x8c437044) != 3)) {
    a5 = 0x900;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c233da2(0xffffffff,0x900,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),a5,ar6,ar7));
    (*(undefined8 *)(fr0_ - 0x60)) = in_dr0;
    if (cVar2 == '\0') {
      (*(undefined8 *)(fr0_ - 0x60)) = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01538c(0x8c437028,a5,ar6,ar7));
    ar4_00 = 0;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c256328(0,a5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c019058(ar4_00,a5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c019128(ar4_00,a5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c019198(ar4_00,a5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c015adc(0x8c437030,a5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c256210(1,a5,ar6,ar7));
    ar5_00 = (undefined1 *)(unsigned)0x800;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c233da2(0xffffffff,0x800,ar6,ar7); });
  }
  (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x40))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), free_if_nonnull_wrap_10270c(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0c9ee0\n.set _FUN_8c0c9ee0, _FUN_8c0c9ee0_def\n");
