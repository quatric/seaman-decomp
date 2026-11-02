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
undefined4 FUN_8c0e0988_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0988";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *ar6_00;
  double dVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  puVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x38)),puVar2,ar6,ar7));
  if (cVar7 == '\0') {
    dVar3 = CONCAT44D(0x43608ba3,*ar5);
  }
  else {
    dVar3 = 1548112654508776.8;
  }
  if (cVar6 == '\0') {
    iVar4 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    iVar4 = (int)(dVar3 / dVar3);
  }
  if (cVar7 == '\0') {
    dVar3 = CONCAT44D(0x43160000,ar5[2]);
  }
  else {
    dVar3 = 2.999234411734574e-309;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    iVar5 = (int)(dVar3 / dVar3);
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (10 < iVar4) {
    iVar4 = 10;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (9 < iVar5) {
    iVar5 = 9;
  }
  if ((*(int *)(unsigned)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x2281c) == 0) ||
     (*(int *)(unsigned)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x2281c) == 1)) {
    if (cVar7 != '\0') {
      ((undefined4 *)(fr0_ - 0x38))[0] =
           (undefined4)
           ((ulonglong)*(undefined8 *)(unsigned)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x22818) >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined4 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
    uVar1 = 0x20;
  }
  else {
    puVar2 = ((undefined4 *)(fr0_ - 0x38));
    ar6_00 = ((undefined1 *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0185a4(ar4 + 0x2274c,ar5,ar6_00,puVar2));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c016a20(((undefined1 *)(fr0_ - 0x28)),((undefined4 *)(fr0_ - 0x38)),ar6_00,puVar2));
    (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined4 *)(fr0_ - 0x38)),0xffffffff,ar6_00,puVar2));
    (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,puVar2));
    uVar1 = 0x1c;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e0988\n.set _FUN_8c0e0988, _FUN_8c0e0988_def\n");
