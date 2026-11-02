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
undefined4 FUN_8c03c100_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03c100";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x324) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
  *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 800) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x318) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x304) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x220) = 0x41a00000;
    *(undefined4 *)(unsigned)(ar4 + 0x224) = 0x42340000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x220) = 0x22441a00000;
    in_fr1 = 0x42340000;
    *(undefined8 *)(unsigned)(ar4 + 0x224) = 0x2e842340000;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x300) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x2f8) = 0x14;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 600,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
  *(undefined ***)(unsigned)(ar4 + 0x1c8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c1363ec);
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 0x36;
  *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x340) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x340) = CONCAT44(0x3f800000,in_fr1);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
  *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x288) = 0;
  *(undefined4 *)(unsigned)(ar4 + 700) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2f0) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x2f4) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2e4) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2e4) = CONCAT44(0x3f800000,in_fr1);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand_range(ar4,0,100,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x33c) = uVar1;
  *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x32c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x344) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
  return 0x348;
}

__asm__(".globl _FUN_8c03c100\n.set _FUN_8c03c100, _FUN_8c03c100_def\n");
