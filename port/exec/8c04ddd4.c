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
undefined4 FUN_8c04ddd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04ddd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  float fVar6;
  double in_dr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 ain0;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  uVar3 = ar7;
  ain0 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x3c)),ar6,uVar3));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,uVar3));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_6c_028cc4(ar7,uVar2,ar6,uVar3));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,uVar3));
    return 2;
  }
  *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x2c)),uVar2,ar6,uVar3));
  if (cVar9 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),(int)in_dr0);
    in_dr0 = in_xd14;
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x28);
  }
  fVar6 = F32LO(in_dr14);
  if (cVar8 == '\0') {
    bVar7 = fVar6 < F32HI(dVar5);
  }
  else {
    bVar7 = in_dr14 < dVar5;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar6;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 fVar6 / F32HI(dVar5));
    }
    else {
      in_dr14 = in_dr14 / dVar5;
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x28);
    }
    if (cVar8 == '\0') {
      fVar6 = F32LO(in_dr14) + F32HI(dVar5);
    }
    else {
      fVar6 = SUB84(in_dr14 + dVar5,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar6;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031748(ar4,uVar2,ar6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031700(ar4,uVar2,ar6,uVar3));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length(((undefined1 *)(fr0_ - 0x2c)),uVar2,ar6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x14,uVar2,ar6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x140))))(iVar1,uVar2,ar6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x4c)),ar6,uVar3));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,uVar3));
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    uVar3 = 0;
    ar6 = 0xffffffff;
    uVar2 = 0x12;
    (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x12,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,uVar3));
    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if ((iVar1 == 2) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,uVar3)), iVar1 == 1)) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,uVar3));
      uVar4 = 0;
      iVar1 = ar4 + 0x80;
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x14,iVar1,ar6,uVar3));
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c03c314(ar4,iVar1,ar6,uVar3));
    }
    goto LAB_8c04e01e;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,uVar3));
  if (iVar1 == 7) {
    iVar1 = *(int *)(unsigned)(ar4 + 0x280);
    *(int *)(unsigned)(ar4 + 0x280) = iVar1 + 1;
    if (4 < iVar1 + 1) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,uVar3); });
    if (cVar8 == '\0') {
      iVar1 = (int)F32HI(dVar5);
    }
    else {
      iVar1 = (int)dVar5;
    }
    if (iVar1 == 0x4c) {
      uVar3 = 5;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c033474(ar4,5,ar5,(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c03f39c(ar7,uVar3,ar5,(*(undefined4 *)(fr0_ + 0x00000000))));
      ar6 = ar5;
      uVar3 = (*(undefined4 *)(fr0_ + 0x00000000));
    }
  }
LAB_8c04e01e:
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,uVar3));
  return uVar4;
}

__asm__(".globl _FUN_8c04ddd4\n.set _FUN_8c04ddd4, _FUN_8c04ddd4_def\n");
