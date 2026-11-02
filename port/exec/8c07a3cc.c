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
uint FUN_8c07a3cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07a3cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  int iVar1;
  int a5;
  undefined4 uVar2;
  undefined4 ar7_00;
  int *ar7_01;
  undefined4 in_fr1 = 0;
  float fVar3;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c031748(ar4,uVar2,ar6,ar7_00));
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), rand_range(ar4,0,100,ar7_00));
    if ((iVar1 < 0x32) || (*(int *)(unsigned)(ar4 + 0x2a0) != 0)) {
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 1;
      goto LAB_8c07a446;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 2;
  }
  else {
    if (iVar1 == 1) {
LAB_8c07a446:
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c031c74(ar4,ar5,ar5,ar7_00));
      uVar2 = 0x13;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c031de8(ar4,0x13,ar5,ar7_00));
      if (iVar1 != 0) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c03c314(ar4,uVar2,ar5,ar7_00));
      iVar1 = *(int *)(unsigned)(ar4 + 0x2a0) + -1;
      *(int *)(unsigned)(ar4 + 0x2a0) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 0;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      return 0;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_8c07a5f4;
    }
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x40400000,in_fr1);
  }
  else {
    dVar4 = 52776566554624.0;
  }
  ar7_01 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c032518(ar4,ar5,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x24)),ar7,ar7_01));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar7,ar7_01));
  a5 = ar4 + 0x54;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x134))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),a5,ar7,ar7_01));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x30)),a5,ar7,ar7_01));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x30)),ar7,ar7_01); });
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x40)),ar7,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar7,ar7_01));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 96)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar7,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x4c)),uVar2,ar7,ar7_01));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); FUN_8c023484(ar4 + 0x80,((undefined1 *)(fr0_ - 0x4c)),ar7,ar7_01); });
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x5c)),ar7,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar7,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 96)), object_dtor_delete(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar7,ar7_01));
    return 1;
  }
  (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x54,ar7,ar7_01));
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x7c));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x7c);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) + F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x58) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
  *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
LAB_8c07a5f4:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0755e0(ar4,ar5,ar4 + 0x54,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c07a3cc\n.set _FUN_8c07a3cc, _FUN_8c07a3cc_def\n");
