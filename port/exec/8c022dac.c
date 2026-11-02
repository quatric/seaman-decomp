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
undefined4 FUN_8c022dac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022dac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined8 in_dr0 = 0;
  double dVar2;
  undefined4 in_fr15 = 0;
  double dVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c022d14(ar4,ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 != '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_length_sq(ar4,ar5_00,ar6,ar7));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x20)) = uVar1;
  if (cVar6 != '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr0;
    (*(undefined4 *)(fr0_ - 0x1c)) = uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_length_sq(ar5,ar5_00,ar6,ar7));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),in_fr15);
    (*(undefined4 *)(fr0_ - 0x24)) = uVar1;
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),uVar1);
    (*(undefined4 *)(fr0_ - 0x24)) = (int)in_dr0;
    (*(undefined4 *)(fr0_ - 0x20)) = uVar1;
  }
  uVar1 = 8;
  if (cVar6 == '\0') {
    dVar2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(int)in_dr0);
  }
  else {
    dVar2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(F32HI(dVar3) * F32HI(dVar2),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar2;
  }
  if (cVar5 == '\0') {
    bVar4 = 0.0 < F32HI(dVar3);
  }
  else {
    bVar4 = (double)(D2U(dVar2) & 0xffffffff) < dVar3;
  }
  if (bVar4) {
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c013aec(ar5,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c022e5c(ar5,ar5_00,ar6,ar7));
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022dac\n.set _FUN_8c022dac, _FUN_8c022dac_def\n");
