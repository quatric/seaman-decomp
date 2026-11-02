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
undefined4 FUN_8c04e2d0_def(int ar4,undefined4 ar5,undefined1 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c04e2d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 260; for (int i_ = 0; i_ < 260; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *ar6_00;
  int ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  float fVar7;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 260)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x298);
  if (iVar1 == 0) {
    uVar2 = ar5;
    ar6_00 = ar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c04b168(ar4,ar5,ar6,ar7_00));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c031748(ar4,uVar2,ar6_00,ar7_00));
    }
  }
  else if (iVar1 == 1) {
    iVar1 = ar7;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023334(ar4 + 0x14,ar7,ar6_00,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar2;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar1,ar6_00,ar7_00); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); FUN_8c0230f0(ar7,iVar1,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7_00));
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x224) = in_dr0;
    }
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c0231c8(ar7,uVar2,ar6_00,ar7_00));
    iVar1 = ar4 + 0x14;
    (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c0231c8(iVar1,uVar2,ar6_00,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x100))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 260)); FUN_8c010e38(iVar1,uVar2,ar6_00,ar7_00); });
    fVar5 = (float)in_dr0;
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x228) = in_dr0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    if (cVar9 == '\0') {
      fVar5 = *(float *)(unsigned)(ar4 + 0x224);
    }
    if (cVar8 == '\0' && 1.0 < fVar5) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023334(ar4 + 0x14,ar7,ar6_00,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar2;
      if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
        ar7_00 = 0;
        ar6_00 = (undefined1 *)(unsigned)0xffffffff;
        uVar2 = 7;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 260)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
        if (iVar1 != 6) {
          (vsp = ((unsigned long)(fr0_ - 260)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        }
      }
      else {
        ar7_00 = 0;
        ar6_00 = (undefined1 *)(unsigned)0xffffffff;
        uVar2 = 8;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 260)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
        if (iVar1 != 6) {
          (vsp = ((unsigned long)(fr0_ - 260)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        }
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x224);
        fVar7 = 45.0;
      }
      else {
        fVar5 = 45.0;
        fVar7 = 9.30462e-43;
      }
      if (cVar8 == '\0' && fVar7 < fVar5) {
        if (cVar9 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x224) = 0x42340000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x224) = 0x29842340000;
        }
      }
      *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + 1;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
      uVar4 = 0;
    }
  }
  else if (iVar1 == 2) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7_00); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(unsigned)0x8c136590),ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
    puVar3 = ((undefined1 *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x2a8,puVar3,ar6_00,ar7_00));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      dVar6 = 1.34162686540996e-311;
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      uVar2 = 0x3f333333;
      *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f333333;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      uVar2 = 0xb0;
      *(undefined8 *)(unsigned)(ar4 + 0x278) = 0xb03f333333;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x100))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 260)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar3,ar6_00,ar7_00); });
    if (cVar9 == '\0') {
      uVar2 = ((undefined4 *)(fr0_ - 0xa4))[0];
    }
    ((undefined4 *)(fr0_ - 0xa4))[0] = uVar2;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); FUN_8c0230f0(ar7,puVar3,ar6_00,ar7_00); });
    puVar3 = ((undefined1 *)(fr0_ - 0x78));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_add(ar5,puVar3,ar6_00,ar7_00); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 260)), get_field_1c_026dd8(ar4 + 0xb0,puVar3,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 260)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x94)),uVar2,ar6_00,ar7_00));
    ar7_00 = ar4 + 0x14;
    ar6_00 = ((undefined1 *)(fr0_ - 0x88));
    ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); FUN_8c031eb0(ar4,ar5,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x14,((undefined4 *)(fr0_ - 0xa4)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined4 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), object_dtor_delete(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_00,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 260)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
    if (iVar1 == 1) {
      *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + -1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c04e2d0\n.set _FUN_8c04e2d0, _FUN_8c04e2d0_def\n");
