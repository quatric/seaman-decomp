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
uint FUN_8c233d20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c233d20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  double *unaff_r13 = 0;
  undefined4 *unaff_r14 = 0;
  undefined8 *puVar1;
  undefined4 in_fr1 = 0;
  double dVar2;
  double dVar3;
  undefined4 in_fr5 = 0;
  undefined4 uVar4;
  float fVar5;
  double in_dr12 = 0;
  undefined8 in_dr14 = 0;
  double dVar6;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar7;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
    puVar1 = &(*(undefined8 *)(fr0_ - 0x8));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = SUB84(in_dr12,0);
  }
  else {
    puVar1 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x10));
    (*(undefined8 *)(fr0_ - 0x8)) = in_dr14;
  }
  *(undefined4 *)(unsigned)((int)puVar1 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ain0 + (int)unaff_r13),in_fr1);
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ain0 + (int)unaff_r14),*unaff_r14);
  }
  else {
    dVar6 = *(double *)(unsigned)(ain0 + (int)unaff_r14);
    dVar2 = *(double *)(unsigned)(ain0 + (int)unaff_r13);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) - F32HI(dVar2),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 - dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r13 + 1),*(undefined4 *)(unsigned)unaff_r13);
  }
  else {
    in_xd2 = *unaff_r13;
    dVar3 = unaff_r13[1];
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),F32LO(dVar6) - F32LO(dVar3));
  }
  else {
    dVar6 = dVar6 - dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),unaff_r14[2]);
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),(int)(D2U(dVar6) >> 0x20));
  }
  else {
    in_xd12 = *(double *)(unsigned)(unaff_r14 + 2);
    in_xd2 = dVar6;
  }
  uVar4 = SUB84(in_xd2,0);
  if (in_FPSCR_PR == '\0') {
    fVar5 = F32LO(in_dr12) - F32HI(dVar3);
  }
  else {
    fVar5 = SUB84(in_dr12 - dVar3 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd12 = CONCAT44D(fVar5,SUB84(dVar2,0));
    uVar4 = in_fr5;
  }
  ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar1 + -4)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); FUN_8c258030(ar4,ar5,ar6,ar7); });
  if (in_FPSCR_SZ == '\0') {
    in_xd12 = CONCAT44D((int)((ulonglong)in_xd12 >> 0x20),uVar4);
    dVar2 = CONCAT44D(unaff_r14[3],*(undefined4 *)(unsigned)((int)unaff_r13 + 0xc));
  }
  else {
    dVar2 = *(double *)(unsigned)(unaff_r14 + 3);
  }
  if (in_FPSCR_PR == '\0') {
    bVar7 = F32HI(in_xd12) < F32HI(dVar2) + F32LO(dVar2)
    ;
  }
  else {
    bVar7 = in_xd12 < dVar2 + dVar2;
  }
  return (uint)bVar7;
}

__asm__(".globl _FUN_8c233d20\n.set _FUN_8c233d20, _FUN_8c233d20_def\n");
