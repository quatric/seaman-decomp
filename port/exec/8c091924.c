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
undefined4 FUN_8c091924_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c091924";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined4 uVar4;
  float fVar5;
  float fVar8;
  double dVar6;
  ulonglong uVar7;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  uVar2 = ar5;
  uVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar1) || (iVar1 < 0)) goto switchD_8c091960_caseD_2;
                    
  switch(iVar1) {
  case 0:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,uVar3,ar7); });
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x30)),uVar3,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar3,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c031b68(ar4,0x8c2846d0,uVar3,ar7));
    uVar2 = ar5;
    uVar3 = ar6;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    if (cVar10 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3d4ccccd;
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x3d4ccccd;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xb03d4ccccd;
      *(undefined8 *)(unsigned)(ar4 + 0x24) = 0xb03d4ccccd;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,uVar3,ar7));
    if (iVar1 != 0) {
      ar7_00 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7_00));
    }
    ar7 = ar4 + 0x14;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c092884(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x3c)),ar6,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
    if (cVar10 == '\0') {
      fVar8 = 90.0;
      fVar5 = (*(float *)(fr0_ - 0x1c));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
      fVar5 = 90.0;
      fVar8 = -90.0;
    }
    if (cVar9 != '\0' || fVar8 <= fVar5) {
LAB_8c091a60:
      if (cVar10 == '\0') {
        fVar5 = 90.0;
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
        (*(float *)(fr0_ - 0x1c)) = 90.0;
        fVar5 = -90.0;
      }
      if (cVar9 == '\0' && (*(float *)(fr0_ - 0x1c)) < fVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x22c) = 2;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar2 = 9;
        (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x22c) = 1;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar2 = 8;
        (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7));
    }
    else {
      if (cVar10 == '\0') {
        fVar8 = -90.0;
        fVar5 = (*(float *)(fr0_ - 0x1c));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
        fVar5 = -90.0;
        fVar8 = 7.79122e-43;
      }
      if (cVar9 != '\0' || fVar5 <= fVar8) goto LAB_8c091a60;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    uVar3 = ar6;
  case 1:
    if (*(int *)(unsigned)(ar4 + 0x22c) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    }
    else {
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x220));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x220);
        dVar6 = 21990236605644.8;
      }
      if (cVar9 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x220) = fVar5;
        uVar7 = CONCAT44(0x42b40000,*(undefined4 *)(unsigned)(ar4 + 0x220));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x220) = in_xd0;
        uVar7 = 0x42f0000042b40000;
      }
      if (cVar9 != '\0' || (float)uVar7 <= (float)(uVar7 >> 0x20)) {
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,uVar3,ar7));
        if (*(int *)(unsigned)(ar4 + 0x22c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x48)),uVar2,uVar3,ar7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x48)),uVar3,ar7); });
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x58)),uVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,uVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x48)),0xffffffff,uVar3,ar7));
        }
        else if (*(int *)(unsigned)(ar4 + 0x22c) == 2) {
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x64)),uVar2,uVar3,ar7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x64)),uVar3,ar7); });
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x74)),uVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,uVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x64)),0xffffffff,uVar3,ar7));
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,uVar3,ar7));
        if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
          *(undefined4 *)(unsigned)(ar4 + 0x22c) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x220) = uVar7 & 0xffffffff;
          }
          ar7 = 0;
          uVar3 = 0xffffffff;
          uVar2 = 0;
          (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7));
        }
      }
    }
    break;
  case 3:
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,uVar3,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c031764(ar4,ar6,ar5,ar7));
    uVar3 = ar5;
  }
switchD_8c091960_caseD_2:
  (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x20)),0xffffffff,uVar3,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c091924\n.set _FUN_8c091924, _FUN_8c091924_def\n");
