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
undefined4 FUN_8c0b4d14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b4d14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 uVar6;
  float fVar7;
  undefined8 in_dr0 = 0;
  float fVar9;
  double dVar8;
  undefined4 uVar10;
  double in_dr14 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 ain0;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar6 = 1;
  uVar4 = ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x38)),uVar4,ar6_00,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 120)), get_field_6c_028cc4(ar5,uVar4,ar6_00,ar7));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
    return 2;
  }
  iVar3 = *(int *)(unsigned)(ar4 + 300);
  if (iVar3 == 0) {
    ar7 = 0;
    ar6_00 = 0xffffffff;
    uVar4 = 0xb;
    (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 == 2) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7); });
      if (cVar13 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)((ulonglong)in_dr0 >> 0x20));
      }
      if (cVar12 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),F32LO(in_dr14) + 1.0);
      }
      else {
        in_dr14 = in_dr14 + CONCAT44D(0x3f800000,(int)in_dr0);
      }
      iVar3 = (vsp = ((unsigned long)(fr0_ - 120)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x16,ar6_00,ar7));
      fVar7 = (float)iVar3;
      dVar8 = (double)(ulonglong)(uint)fVar7;
      if (cVar12 == '\0' && fVar7 < 0.0) {
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0x4f800000,fVar7);
        }
        else {
          dVar8 = -8.62186752335918e-251;
        }
        if (cVar12 == '\0') {
          fVar7 = F32HI(dVar8);
          dVar8 = CONCAT44D(fVar7,F32LO(dVar8) + fVar7);
        }
        else {
          dVar8 = dVar8 + dVar8;
        }
      }
      if (cVar12 == '\0') {
        bVar11 = SUB84(in_dr14,0) < SUB84(dVar8,0);
      }
      else {
        bVar11 = in_dr14 < dVar8;
      }
      if (!bVar11) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 120)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x16,ar6_00,ar7));
        dVar8 = (double)(D2U(dVar8) & 0xffffffff);
        if (cVar12 == '\0') {
          bVar11 = (float)iVar3 < 0.0;
        }
        else {
          bVar11 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(float)iVar3) < dVar8;
        }
        if (bVar11) {
          if (cVar13 == '\0') {
            dVar8 = 9.046256971665328e+74;
          }
          else {
            dVar8 = -8.62186752335918e-251;
          }
        }
      }
      uVar10 = (undefined4)(D2U(dVar8) >> 0x20);
      ar5_00 = 0x16;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03c0f0(ar4 + 0xb0,0x16,ar6_00,ar7));
      puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 120)), deref_u32(uVar4,ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7); });
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D(0x41a00000,uVar10);
      }
      else {
        dVar8 = 3.14599345710447e-312;
      }
      dVar1 = (*(double *)(fr0_ - 0x24));
      if ((cVar12 != '\0' || F32HI(dVar8) <= SUB84(dVar8,0)) &&
         (dVar8 = (double)(D2U(dVar8) & 0xffffffff), dVar1 = dVar8, cVar13 == '\0')) {
        (*(double *)(fr0_ - 0x24)) = (double)((ulonglong)(*(double *)(fr0_ - 0x24)) & 0xffffffff00000000);
        dVar1 = (*(double *)(fr0_ - 0x24));
      }
      (*(double *)(fr0_ - 0x24)) = dVar1;
      (vsp = ((unsigned long)(fr0_ - 120)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x54)),ain0,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x64)),ar6,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c036988(iVar2,uVar4,ar6_00,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7); });
      if (cVar12 == '\0') {
        iVar2 = (int)F32HI(dVar8);
      }
      else {
        iVar2 = (int)dVar8;
      }
      if (iVar2 == 0x28) {
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03f3e8(ar5,uVar4,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 1;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 120)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6_00,ar7));
      if (iVar2 == 1) {
        uVar6 = 0;
        *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb | 4;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
    }
    goto LAB_8c0b4fe2;
  }
  fVar7 = F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 120)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7); });
  if (cVar13 == '\0') {
    fVar9 = 15.0;
  }
  else {
    fVar7 = 15.0;
    fVar9 = 2.57839e-43;
  }
  if (cVar12 != '\0' || fVar9 <= fVar7) {
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c033474(ar4,0xc,ar6,(*(undefined4 *)(fr0_ + 0x00000000))));
    *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb;
    ar6_00 = ar6;
    ar7 = (*(undefined4 *)(fr0_ + 0x00000000));
  }
LAB_8c0b4fe2:
  (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c0b4d14\n.set _FUN_8c0b4d14, _FUN_8c0b4d14_def\n");
