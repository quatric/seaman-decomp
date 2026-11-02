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
undefined4 FUN_8c0e4dd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e4dd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  int iVar2;
  undefined4 in_PR = 0;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  if (cVar3 == '\0') {
    (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x10fc);
    (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 0x1100);
    (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(ar4 + 0x1104);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x10fc);
    (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x1100);
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x1104);
    (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x1104) >> 0x20);
  }
  ar6_00 = ((undefined1 *)(fr0_ - 0x24));
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x18));
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c21279c(0,ar5_00,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c217ebc(uVar1,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c219038(uVar1,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c217ef4(uVar1,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c219070(uVar1,ar5_00,ar6_00,ar7));
  if (*(int *)(unsigned)(ar4 + 0x1024) != 0) {
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0d2028(uVar1,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c016340(ar4 + 0x1028,ar5_00,ar6_00,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x1024) == 2) {
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0d1858(((undefined1 *)(unsigned)0x8c13f450),ar5_00,ar6_00,ar7));
  }
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    if (*(int *)(unsigned)(iVar2 * 0x24 + ar4 + 0x1090) == 1) {
      *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10e8)) = *(undefined4 *)(unsigned)(iVar2 * 0x24 + ar4 + 0x108c);
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01538c(ar4 + 0x10dc,ar5_00,ar6_00,ar7));
      uVar1 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c256328(0,ar5_00,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c019058(uVar1,ar5_00,ar6_00,ar7));
      (*(int *)(fr0_ - 0x44)) = iVar2;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c019198(uVar1,ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c015adc(ar4 + 0x10e4,ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c256210(1,ar5_00,ar6_00,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01538c(ar4 + 0x28,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c015adc(ar4 + 0x30,ar5_00,ar6_00,ar7));
  if (*(int *)(unsigned)(ar4 + 0x15c8) == 1) {
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0d6090(ar4 + 0x15bc,ar5_00,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0da754(ar4,ar5_00,ar6_00,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0e4dd0\n.set _FUN_8c0e4dd0, _FUN_8c0e4dd0_def\n");
