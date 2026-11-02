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
undefined4 FUN_8c0e3f24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3f24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined4 in_PR = 0;
  char cVar3;
  
  cVar3 = '\0';
  ar6_00 = (fr0_ + (int)0xffffffd8);
  iVar1 = ar4;
  (*(undefined4 *)(fr0_ - 0x10)) = in_PR;
  if ((*(int *)(unsigned)(ar4 + 0x22810) == 1) && (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2219a8(ar4,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c214158(iVar1,ar5,ar6,ar7); });
    if (cVar3 == '\0') {
      (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x227f0);
      (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x227f4);
      (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 0x227f8);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f0);
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f4);
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f8);
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x227f8) >> 0x20);
    }
  }
  else if ((*(int *)(unsigned)(ar4 + 0x22810) == 0) && (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2219a8(ar4,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c214158(iVar1,ar5,ar6,ar7); });
    if (cVar3 == '\0') {
      (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x22800);
      (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x22804);
      (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 0x22808);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22800);
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22804);
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22808);
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x22808) >> 0x20);
    }
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2219a8(ar4,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c214158(iVar1,ar5,ar6,ar7); });
    if (cVar3 == '\0') {
      (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x227f0);
      (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x227f4);
      (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 0x227f8);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f0);
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f4);
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f8);
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x227f8) >> 0x20);
    }
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c22194e(iVar1,ar5,ar6,ar7); });
  uVar2 = 1;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c22195c(1,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2140fe(uVar2,ar5,ar6,ar7); });
  uVar2 = 1;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c21410c(1,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2219f6(uVar2,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2141a6(uVar2,ar5,ar6,ar7); });
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x1c));
  uVar2 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c21279c(0,ar5_00,(fr0_ + (int)0xffffffd8),ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c219038(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c21907e(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c219070(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c217ebc(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c217f02(uVar2,ar5_00,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c217ef4(uVar2,ar5_00,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0e3f24\n.set _FUN_8c0e3f24, _FUN_8c0e3f24_def\n");
