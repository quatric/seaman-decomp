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
undefined4 * FUN_8c02452c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02452c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint in_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 8,((void *)0x8c024518),((void *)0x8c0247e0),0x14); });
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x12,((void *)0x8c024518),((void *)0x8c0247e0),0x14); });
  uVar3 = 4;
  pcVar2 = ((void *)0x8c016bfc);
  pcVar1 = ((void *)0x8c015ab8);
  ({ unsigned long t0_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1c,((void *)0x8c015ab8),((void *)0x8c016bfc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0x1d,pcVar1,pcVar2,uVar3));
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1e,((void *)0x8c015224),((void *)0x8c0153e4),8); });
  uVar3 = 8;
  pcVar2 = ((void *)0x8c0153e4);
  pcVar1 = ((void *)0x8c015224);
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x22,((void *)0x8c015224),((void *)0x8c0153e4),8); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x26,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b94(ar4 + 0x2c,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x36,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02447c(ar4 + 0x3e,pcVar1,pcVar2,uVar3));
  *ar4 = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[4] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[0x28] = 0;
  ar4[0x2a] = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x2b) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x29) = 0;
  ar4[0x2d] = 0;
  if (cVar4 == '\0') {
    ar4[0x2f] = 0x3f800000;
    ar4[0x2e] = 0x3f800000;
    ar4[0x30] = 0x3c23d70a;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2f) = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(unsigned)(ar4 + 0x2e) = CONCAT44(0x3f800000,in_fr1);
    in_fr1 = 0x3c23d70a;
    *(undefined8 *)(unsigned)(ar4 + 0x30) = 0xc43c23d70a;
  }
  *(undefined2 *)(unsigned)(ar4 + 0x31) = 0;
  if (cVar4 == '\0') {
    ar4[0x32] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x32) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar4 == '\0') {
    ar4[0x33] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x33) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar4 == '\0') {
    ar4[0x34] = 0x3f800000;
    ar4[0x35] = 0x42c80000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x34) = CONCAT44(0x3f800000,in_fr1);
    in_fr1 = 0x42c80000;
    *(undefined8 *)(unsigned)(ar4 + 0x35) = 0xe842c80000;
  }
  if (cVar4 == '\0') {
    ar4[0x3a] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3a) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    ar4[0x3b] = 0x3f800000;
    ar4[0x3c] = 0x43160000;
    ar4[0x3d] = 0x43480000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3b) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(unsigned)(ar4 + 0x3c) = 0xf443160000;
    *(undefined8 *)(unsigned)(ar4 + 0x3d) = 0x4f222fe643480000;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02452c\n.set _FUN_8c02452c, _FUN_8c02452c_def\n");
