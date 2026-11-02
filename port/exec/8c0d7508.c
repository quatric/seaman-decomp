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
undefined4 * FUN_8c0d7508_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7508";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  undefined4 ar6_00;
  float fVar3;
  double dVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ((undefined4 *)(fr0_ - 0xc))[0] = 0xffffffff;
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x164));
  if (puVar1 == (undefined4 *)(unsigned)0x0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 16)), rand(ar4,ar5,ar6,ar7));
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0x47000000,(float)iVar2);
    }
    else {
      dVar4 = 5.2386908071071214e-11;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) / F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    puVar1 = ((undefined4 *)(unsigned)0x8c0d7588);
    if (cVar7 == '\0') {
      fVar5 = 0.1;
    }
    else {
      fVar3 = 0.1;
      fVar5 = -1.3200388e-31;
    }
    if (cVar6 != '\0' || fVar3 <= fVar5) {
      ((undefined4 *)(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
      ar6_00 = 0x12;
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0xc))[0],0x12,ar7));
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,((undefined4 *)(fr0_ - 0xc)),ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x164) = 2;
      puVar1 = ((undefined4 *)(unsigned)0x8c0d759c);
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x40400000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c) = 0x4f222fe640400000;
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d7508\n.set _FUN_8c0d7508, _FUN_8c0d7508_def\n");
