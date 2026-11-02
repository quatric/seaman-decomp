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
int FUN_8c0d2fd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2fd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  uint in_fr1 = 0;
  ulonglong uVar5;
  char cVar6;
  
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015224(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015ab8(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015ab8(ar4 + 0x1c,ar5,ar6,ar7));
  uVar4 = 4;
  pcVar3 = ((void *)0x8c016bfc);
  pcVar1 = ((void *)0x8c015ab8);
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c010120(ar4 + 0x20,((void *)0x8c015ab8),((void *)0x8c016bfc),4); });
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0d33bc(ar4 + 0x34,pcVar1,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015224(ar4 + 0x108,pcVar1,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c016410(ar4 + 0x110,pcVar1,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015ab8(ar4 + 0x154,pcVar1,pcVar3,uVar4));
  ({ unsigned long t0_ = (unsigned long)(5); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c010120(ar4 + 0x470,((void *)0x8c0d2050),((void *)0x8c0d336c),0x44); });
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c010120(ar4 + 0x5fc,((void *)0x8c02145c),((void *)0x8c0cffc8),0x18); });
  uVar4 = 0x88;
  pcVar3 = ((void *)0x8c0d3304);
  pcVar1 = ((void *)0x8c0d25b4);
  ({ unsigned long t0_ = (unsigned long)(0x226); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c010120(ar4 + 0x62c,((void *)0x8c0d25b4),((void *)0x8c0d3304),0x88); });
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0153b8(ar4 + 0x12a5c,pcVar1,pcVar3,uVar4));
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x18) = 0x3ec8c155;
  }
  else {
    in_fr1 = 0x3ec8c155;
    *(undefined8 *)(unsigned)(ar4 + 0x18) = 0x8c13e7803ec8c155;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c015ad4(ar4 + 0x20,((undefined1 *)(unsigned)0x8c13e780),pcVar3,uVar4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c015ad4(ar4 + 0x24,((undefined1 *)(unsigned)0x8c13ea48),pcVar3,uVar4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c015ad4(ar4 + 0x28,((undefined1 *)(unsigned)0x8c13ed20),pcVar3,uVar4); });
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x430) = 0xc3960000;
  }
  else {
    in_fr1 = 0xc3960000;
    *(undefined8 *)(unsigned)(ar4 + 0x430) = 0x434c3960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x434) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x438) = 0xc3960000;
    *(undefined4 *)(unsigned)(ar4 + 0x43c) = 0xc3960000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x434) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x438) = 0x434c3960000;
    in_fr1 = 0xc3960000;
    *(undefined8 *)(unsigned)(ar4 + 0x43c) = 0x434c3960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x440) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x444) = 0x43960000;
    *(undefined4 *)(unsigned)(ar4 + 0x448) = 0x43960000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x440) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x444) = 0x44843960000;
    in_fr1 = 0x43960000;
    *(undefined8 *)(unsigned)(ar4 + 0x448) = 0x44843960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x44c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x450) = 0x43960000;
    uVar5 = CONCAT44(0x43960000,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x454) = 0x43960000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x44c) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x450) = 0x44843960000;
    uVar5 = 0x44843960000;
    *(undefined8 *)(unsigned)(ar4 + 0x454) = 0x44843960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0xc3960000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x458) = uVar5 & 0xffffffff;
    *(undefined8 *)(unsigned)(ar4 + 0x45c) = 0x434c3960000;
  }
  *(undefined2 *)(unsigned)(ar4 + 0x460) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x462) = 0xff;
  *(undefined2 *)(unsigned)(ar4 + 0x464) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x466) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x468) = 0xff;
  *(undefined2 *)(unsigned)(ar4 + 0x46a) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x46c) = 0xff;
  *(undefined2 *)(unsigned)(ar4 + 0x46e) = 0xff;
  ar7_00 = 4;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c016464(ar4 + 0x110,ar4 + 0x430,0,4));
  uVar4 = 4;
  iVar2 = ar4 + 0x460;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0164c8(ar4 + 0x110,iVar2,4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c014790(ar4 + 0x110,iVar2,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c014764(ar4 + 0x110,iVar2,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c014a64(ar4 + 0x110,iVar2,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0d56dc(ar4,iVar2,uVar4,ar7_00));
  for (iVar2 = 0; iVar2 < 0x226; iVar2 = iVar2 + 1) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0d261c(iVar2 * 0x88 + ar4 + 0x62c,ar4 + 0x12a5c,((undefined1 *)(unsigned)0x8c13f344),ar7_00));
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d2fd8\n.set _FUN_8c0d2fd8, _FUN_8c0d2fd8_def\n");
