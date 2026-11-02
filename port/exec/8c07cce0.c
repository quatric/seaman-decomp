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
undefined4 FUN_8c07cce0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07cce0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  undefined4 uVar5;
  undefined8 in_dr0 = 0;
  double dVar6;
  double dVar7;
  float fVar8;
  double in_dr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = ar7;
  uVar3 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_6c_028cc4(ar7,ar5,ar6,ar7));
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
    return 2;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb;
  *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfe;
  uVar5 = 1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); Vec3_sub(uVar3,ar5,ar6,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x4c)),ar6,uVar4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x3c)),uVar2,ar6,uVar4));
  if (cVar11 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),(int)in_dr0);
    in_dr0 = in_xd14;
  }
  else {
    dVar6 = *(double *)(unsigned)(ar4 + 0x28);
  }
  fVar8 = F32LO(in_dr14);
  if (cVar10 == '\0') {
    bVar9 = fVar8 < F32HI(dVar6);
  }
  else {
    bVar9 = in_dr14 < dVar6;
  }
  if (bVar9) {
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
    }
  }
  else {
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar10 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 fVar8 / F32HI(dVar6));
    }
    else {
      in_dr14 = in_dr14 / dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 0x28);
    }
    if (cVar10 == '\0') {
      fVar8 = F32LO(in_dr14) + F32HI(dVar6);
    }
    else {
      fVar8 = SUB84(in_dr14 + dVar6,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar8;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), Vec3_length(((undefined1 *)(fr0_ - 0x3c)),uVar2,ar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(ar4 + 0x14,uVar2,ar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x140))))(iVar1,uVar2,ar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x5c)),ar6,uVar4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,uVar4));
  if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
    ar5_00 = 0xf;
    if (cVar11 == '\0') {
      dVar7 = 1099511902400.0;
    }
    else {
      dVar7 = 206158464224.0;
    }
  }
  else {
    if (*(int *)(unsigned)(ar4 + 0x128) != 2) {
      (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,uVar4));
      return 2;
    }
    ar5_00 = 0x13;
    if (cVar11 == '\0') {
      dVar7 = 3848291247424.0;
    }
    else {
      dVar7 = 6.37150347401503e-312;
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    uVar4 = 0;
    ar6 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 96)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 96)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6,uVar4));
    *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else {
    ar5_00 = uVar2;
    if (iVar1 != 1) {
      if ((iVar1 == 2) &&
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,uVar4)), iVar1 == 1)) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,uVar4));
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        uVar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,uVar4));
        uVar4 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 96)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 96)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,uVar4));
      }
      goto LAB_8c07cf9c;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,uVar4));
  if (iVar1 == 7) {
    iVar1 = *(int *)(unsigned)(ar4 + 0x294);
    *(int *)(unsigned)(ar4 + 0x294) = iVar1 + 1;
    if (4 < iVar1 + 1) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,uVar4); });
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar7) == (float)(int)F32HI(dVar6);
    }
    else {
      bVar9 = dVar7 == (double)(int)dVar6;
    }
    if (bVar9) {
      uVar4 = 5;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c033474(ar4,5,ar5,(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c03f39c(ar7,uVar4,ar5,(*(undefined4 *)(fr0_ + 0x00000000))));
      ar6 = ar5;
      uVar4 = (*(undefined4 *)(fr0_ + 0x00000000));
    }
  }
LAB_8c07cf9c:
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,uVar4));
  return uVar5;
}

__asm__(".globl _FUN_8c07cce0\n.set _FUN_8c07cce0, _FUN_8c07cce0_def\n");
