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
undefined4 FUN_8c0db5c4_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db5c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  double *ar5_00;
  undefined1 *puVar2;
  int ar5_01;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double in_dr0 = 0;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined4 in_fr12 = 0;
  undefined4 in_fr15 = 0;
  double dVar9;
  double in_xd14 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  uVar3 = 0;
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),ar5_00,ar6,ar7));
  fVar8 = 0.0;
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x47435000,in_fr15);
  }
  else {
    dVar9 = -7.932638084811958e-251;
  }
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
    uVar3 = 0;
  }
  else {
    ar7_00 = ((undefined1 *)(fr0_ - 0x3c));
    ar6_00 = ((undefined1 *)(fr0_ - 0x40));
    puVar2 = ((undefined1 *)(fr0_ - 0x44));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0db5a8(ar4 + 0x9e8,puVar2,ar6_00,ar7_00));
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0da588(ar4 + 0xa4,puVar2,ar6_00,ar7_00));
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      ar7_00 = ((undefined1 *)(fr0_ - 0x2c));
      ar6_00 = ((undefined1 *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0507a4(ar4_00,((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7_00));
      ar5_01 = ar4 + 0xa68;
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c023b4c(((undefined1 *)(fr0_ - 0x34)),ar5_01,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x34)),ar5_01,ar6_00,ar7_00));
      dVar6 = in_dr0;
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
        dVar6 = in_xd14;
      }
      in_xd14 = dVar6;
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_length(((undefined1 *)(fr0_ - 0x34)),ar5_01,ar6_00,ar7_00));
      fVar5 = F32HI(in_dr0);
      puVar2 = ((undefined1 *)(fr0_ - 0x34));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x44)),puVar2,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0xba4));
        fVar8 = fVar5;
      }
      else {
        dVar6 = -1.2765500855395165e-250;
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar6) / F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        in_dr0 = CONCAT44D(0x40000000,fVar5);
      }
      else {
        in_dr0 = -1.2765500855395165e-250;
      }
      if (cVar11 == '\0') {
        fVar7 = F32HI(in_dr0);
        fVar5 = F32LO(in_dr0) + fVar7;
        in_dr0 = CONCAT44D(fVar7,fVar5);
        bVar10 = fVar8 < fVar5;
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
        bVar10 = CONCAT44D(in_fr12,fVar8) < in_dr0;
      }
      if (((bVar10) &&
          (fVar5 = F32LO(dVar9), cVar11 == '\0' && fVar5 < F32HI(dVar9))) &&
         (uVar3 = ar4_00, dVar9 = in_xd14, cVar12 == '\0')) {
        dVar9 = CONCAT44D(fVar5,fVar5);
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 72)), list_node_next(ar4_00,puVar2,ar6_00,ar7_00));
    }
    if (cVar12 == '\0') {
      *(int *)(unsigned)ar5 = (int)(D2U(dVar9) >> 0x20);
    }
    else {
      *ar5 = dVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0db5c4\n.set _FUN_8c0db5c4, _FUN_8c0db5c4_def\n");
