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
undefined4 CAnimal_m1_0f41c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m1_0f41c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined8 in_dr8 = 0;
  undefined8 in_dr10 = 0;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)((ulonglong)in_dr4 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)in_dr4;
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_dr6 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr6;
  (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)in_dr8 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)in_dr8;
  (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_dr10 >> 0x20);
  (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)in_dr10;
  (*(undefined8 *)(fr0_ - 0x34)) = CONCAT44(ar5,((undefined1 *)(unsigned)0x8c1401fa));
  (*(undefined4 *)(fr0_ - 0x2c)) = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1401fa)); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c014334(ar4 + 0xc,ar5,ar6,ar7); });
  if (cVar3 == '\0') {
    puVar2 = &(*(undefined4 *)(fr0_ - 0x30));
    (*(undefined8 *)(fr0_ - 0x34)) = CONCAT44((*(undefined4 *)(fr0_ + 0x00000000)),(undefined4)(*(undefined8 *)(fr0_ - 0x34)));
  }
  else {
    (*(undefined8 *)(fr0_ - 0x34)) = CONCAT44((*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000)));
    puVar2 = (undefined4 *)(unsigned)(fr0_ + (int)0xffffffcc);
  }
  uVar1 = ({ unsigned long t0_ = (unsigned long)(*puVar2); unsigned long t1_ = (unsigned long)(puVar2[1]); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0f528c(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _CAnimal_m1_0f41c8\n.set _CAnimal_m1_0f41c8, _CAnimal_m1_0f41c8_def\n");
