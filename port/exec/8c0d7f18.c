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
undefined4 * s_66_JUNGLE_RAIN_5_0d7f1a_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_66_JUNGLE_RAIN_5_0d7f1a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  code *ar5_00;
  code *ar6_00;
  undefined4 uVar1;
  uint in_fr1 = 0;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 2,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 6,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102800(ar4 + 0xd,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7688(ar4 + 0x14,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7af8(ar4 + 0x1e,ar4 + 0x2f,500,ar7));
  ({ unsigned long t0_ = (unsigned long)(500); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x2f,((void *)0x8c0d77d8),((void *)0x8c0d8094),0x38); });
  uVar1 = 0x18;
  ar6_00 = ((void *)0x8c0cffc8);
  ar5_00 = ((void *)0x8c02145c);
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1b88,((void *)0x8c02145c),((void *)0x8c0cffc8),0x18); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0153b8(ar4 + 0x1b94,ar5_00,ar6_00,uVar1));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d92b0(ar4,ar5_00,ar6_00,uVar1));
  if (cVar3 == '\0') {
    ar4[6] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 6) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar3 == '\0') {
    ar4[7] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 7) = (ulonglong)in_fr1;
  }
  uVar2 = (ulonglong)in_fr1;
  if (cVar3 == '\0') {
    ar4[8] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 8) = uVar2;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 2,ar4 + 6,ar6_00,uVar1));
  if (cVar3 == '\0') {
    uVar1 = (undefined4)uVar2;
    ar4[0xb] = 0x41700000;
  }
  else {
    uVar1 = 0x41700000;
    *(undefined8 *)(unsigned)(ar4 + 0xb) = 0x3e4ccccd41700000;
  }
  if (cVar3 == '\0') {
    ar4[0xe] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xe) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0xf] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xf) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0x10] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x10) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0x11] = 0x3f800000;
    ar4[0x12] = 0x3e4ccccd;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x11) = CONCAT44(0x3f800000,uVar1);
    *(undefined8 *)(unsigned)(ar4 + 0x12) = 0x8c13f3083e4ccccd;
  }
  *ar4 = 0;
  ar4[0x1b88] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f308);
  ar4[0x1b8e] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f30c);
  ar4[0x1b91] = 0;
  if (cVar3 == '\0') {
    ar4[0x1b87] = 0x41000000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x1b87) = 0x4f222fe641000000;
  }
  return ar4;
}

__asm__(".globl _s_66_JUNGLE_RAIN_5_0d7f1a\n.set _s_66_JUNGLE_RAIN_5_0d7f1a, _s_66_JUNGLE_RAIN_5_0d7f1a_def\n");
