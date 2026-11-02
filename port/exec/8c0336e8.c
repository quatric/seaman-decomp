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
undefined4 FUN_8c0336e8_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0336e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c031ab4(ar4,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),*(undefined4 *)(unsigned)ar5);
  }
  else {
    in_xd0 = *ar5;
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 0x158) = fVar2;
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),*(undefined4 *)(unsigned)((int)ar5 + 4));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x158) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)((int)ar5 + 4);
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 0x15c) = fVar2;
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),*(undefined4 *)(unsigned)(ar5 + 1));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x15c) = in_xd0;
    in_xd0 = ar5[1];
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 0x160) = fVar2;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x160) = in_xd0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0336e8\n.set _FUN_8c0336e8, _FUN_8c0336e8_def\n");
