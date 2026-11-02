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
undefined4 FUN_8c08db9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08db9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 in_fr1 = 0;
  ulonglong uVar1;
  char cVar2;
  
  cVar2 = '\0';
  *(undefined ***)(unsigned)(ar4 + 0x1c8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13a734);
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 0xc;
  *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x25c) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear(ar4 + 0x90,ar5,ar6,ar7));
  if (cVar2 == '\0') {
    uVar1 = CONCAT44(0xbdcccccd,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0xbdcccccd;
  }
  else {
    uVar1 = 0xa4bdcccccd;
    *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0xa4bdcccccd;
  }
  *(undefined4 *)(unsigned)(ar4 + 0xa4) = 1;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,ar5,ar6,ar7));
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x220) = uVar1 & 0xffffffff;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x224) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x224) = uVar1 & 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x228) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x22c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2f0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2f4) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x2f8) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x244) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2fc) = uVar1 & 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x288) = 1;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x304) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x304) = CONCAT44(0x3f800000,(int)uVar1);
  }
  return 0x304;
}

__asm__(".globl _FUN_8c08db9c\n.set _FUN_8c08db9c, _FUN_8c08db9c_def\n");
