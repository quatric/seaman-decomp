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
undefined4 FUN_8c07e460_def(int ar4,undefined4 ar5,undefined1 *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07e460";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *ar6_00;
  float fVar2;
  double in_dr0 = 0;
  double dVar3;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),ar6,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c031700(ar4,ar6,ar6_00,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if ((5 < iVar1) || (iVar1 < 0)) goto switchD_8c07e4c4_default;
                    
  switch(iVar1) {
  case 0:
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c031748(ar4,ar6,ar6_00,ar7));
    if ((*(int *)(fr0_ + 0x00000000)) != 0) {
      if ((*(int *)(fr0_ + 0x00000000)) == 1) {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        goto switchD_8c07e4c4_caseD_1;
      }
      if ((*(int *)(fr0_ + 0x00000000)) != 2) break;
    }
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125e98),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7));
    dVar3 = (*(double *)(fr0_ - 0x28));
    if (cVar6 == '\0') {
      in_fr15 = F32HI(in_dr0);
      dVar3 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x28))+0)),SUB84(in_dr0,0));
      in_dr0 = in_xd14;
    }
    if (cVar5 == '\0') {
      bVar4 = F32HI(dVar3) < in_fr15;
    }
    else {
      bVar4 = dVar3 < CONCAT44D(in_fr14,in_fr15);
    }
    dVar3 = (*(double *)(fr0_ - 0x28));
    if ((bVar4) && (dVar3 = in_dr0, cVar6 == '\0')) {
      (*(double *)(fr0_ - 0x28)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x28))+4)),in_fr15);
      dVar3 = (*(double *)(fr0_ - 0x28));
    }
    (*(double *)(fr0_ - 0x28)) = dVar3;
    ar7 = (int *)(unsigned)((undefined1 *)(unsigned)0x8c125ea8);
    ar6_00 = ((undefined1 *)(fr0_ - 0x2c));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c07c5f8(ar4,ar5,ar6_00,((undefined1 *)(unsigned)0x8c125ea8)));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    break;
  case 1:
switchD_8c07e4c4_caseD_1:
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125ee8),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7));
    if (cVar6 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x7c);
    }
    if (cVar5 == '\0') {
      fVar2 = F32LO(in_dr0) + F32HI(in_dr0);
    }
    else {
      fVar2 = SUB84(in_dr0 + in_dr0,0);
    }
    dVar3 = in_xd0;
    if (cVar6 == '\0') {
      (*(double *)(fr0_ - 0x28)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x28))+4)),fVar2);
      dVar3 = (*(double *)(fr0_ - 0x28));
    }
    (*(double *)(fr0_ - 0x28)) = dVar3;
    ar6_00 = ((undefined1 *)(fr0_ - 0x2c));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0755e0(ar4,ar5,ar6_00,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
    ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    break;
  case 2:
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7));
    if (cVar6 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x7c);
    }
    if (cVar5 == '\0') {
      fVar2 = F32LO(in_dr0) + F32HI(in_dr0);
    }
    else {
      fVar2 = SUB84(in_dr0 + in_dr0,0);
    }
    dVar3 = in_xd0;
    if (cVar6 == '\0') {
      (*(double *)(fr0_ - 0x28)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x28))+4)),fVar2);
      dVar3 = (*(double *)(fr0_ - 0x28));
    }
    (*(double *)(fr0_ - 0x28)) = dVar3;
    ar6_00 = ((undefined1 *)(fr0_ - 0x2c));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0755e0(ar4,ar5,ar6_00,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
    ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    break;
  case 3:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_1c_026dd8(ar4 + 0xb0,ar6,ar6_00,ar7));
    if ((iVar1 == 0) || (iVar1 == 0x13)) {
      (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
    }
    else if ((*(int *)(fr0_ + 0x00000000)) == 1) {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c034148(ar4 + 0xb0,0x13,ar6_00,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7));
    }
    break;
  case 4:
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125ec8),ar6_00,ar7));
    ar6_00 = ((undefined1 *)(fr0_ - 0x2c));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c074d1c(ar4,ar5,ar6_00,ar7));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    break;
  case 5:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_1c_026dd8(ar4 + 0xb0,ar6,ar6_00,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7));
    }
  }
switchD_8c07e4c4_default:
  if (*(int *)(unsigned)(ar4 + 0x134) != 0) {
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  return 1;
}

__asm__(".globl _FUN_8c07e460\n.set _FUN_8c07e460, _FUN_8c07e460_def\n");
