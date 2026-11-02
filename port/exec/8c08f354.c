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
undefined4 FUN_8c08f354_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c08f354";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 180; for (int i_ = 0; i_ < 180; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar5_01;
  int iVar2;
  int iVar3;
  int ar5_02;
  undefined4 ar6_00;
  int iVar4;
  undefined4 in_fr1 = 0;
  float fVar5;
  undefined8 uVar6;
  code *pcVar8;
  float fVar9;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  iVar3 = ar6;
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x3c)),ar5,iVar3,ar7));
  iVar4 = iVar2 + 0xb;
  if (cVar11 == '\0') {
    in_fr1 = *(undefined4 *)(unsigned)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
  }
  ar5_02 = 0x27c;
  if (cVar11 == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x27c),in_fr1);
  }
  else {
    uVar6 = *(undefined8 *)(unsigned)(ar4 + 0x27c);
  }
  if (((float)uVar6 == F32HI(uVar6)) &&
     (ar5_02 = *(int *)(unsigned)(ar4 + 0x284), 0 < ar5_02)) {
    if (*(int *)(unsigned)(ar4 + 0x284) == 0x15) {
      ar7 = 0;
      uVar1 = 0xffffffff;
      ar5_02 = 4;
      (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_02,uVar1,ar7));
      *(int *)(unsigned)(ar4 + 0x284) = *(int *)(unsigned)(ar4 + 0x284) + -1;
      iVar3 = ar4;
    }
    fVar5 = F32HI(uVar6);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03f3ac(ar4 + 0xb0,ar5_02,iVar3,ar7));
    if (iVar4 == 7) {
      *(int *)(unsigned)(ar4 + 0x284) = *(int *)(unsigned)(ar4 + 0x284) + -1;
      if (*(int *)(unsigned)(ar4 + 0x284) == 0) {
        ar7 = 0;
        iVar3 = -1;
        ar5_02 = 0;
        (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      }
      else if (*(int *)(unsigned)(ar4 + 0x284) == 10) {
        ar5_02 = *(int *)(unsigned)(ar4 + 0x2f8);
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c06b154(*(undefined4 *)(unsigned)(ar4 + 0x2f4),ar5_02,iVar3,ar7));
      }
    }
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_02,iVar3,ar7); });
    if (cVar11 == '\0') {
      pcVar8 = (code *)0x42480000;
    }
    else {
      fVar5 = 50.0;
      pcVar8 = ((void *)0x8c01031c);
    }
    if (fVar5 == (float)(uint)pcVar8) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 180)), libgcc_divide_helper_01031c(iVar2,3,iVar3,ar7));
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c033474(ar4,0x22,ar6,(*(int *)(fr0_ + 0x00000000))));
        iVar3 = ar6;
        ar7 = (*(int *)(fr0_ + 0x00000000));
      }
      else if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c033474(ar4,0x23,ar6,(*(int *)(fr0_ + 0x00000000))));
        iVar3 = ar6;
        ar7 = (*(int *)(fr0_ + 0x00000000));
      }
      else if (iVar2 == 2) {
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c033474(ar4,0x25,ar6,(*(int *)(fr0_ + 0x00000000))));
        iVar3 = ar6;
        ar7 = (*(int *)(fr0_ + 0x00000000));
      }
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03f3ac(ar4 + 0xb0,ar5_02,iVar3,ar7));
    fVar5 = (float)uVar6;
    if (cVar11 == '\0') {
      fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
    }
    if (cVar10 == '\0') {
      fVar5 = fVar5 + 1.0;
    }
    else {
      fVar5 = SUB84(CONCAT44D(0x3f800000,fVar5) + CONCAT44D(0x3f800000,fVar5),0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2cc) = fVar5;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2cc) = in_xd0;
    }
    iVar2 = iVar4;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03c0f0(ar4 + 0xb0,iVar4,iVar3,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 180)), deref_u32(uVar1,iVar2,iVar3,ar7));
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0342ac(ar4 + 0xb0,uVar1,0,ar7));
    ar6_00 = 0;
    iVar3 = ar4 + 0xb0;
    ar5_01 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c034548(iVar3,uVar1,0,ar7));
    if (iVar4 < 0xe) {
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
        pcVar8 = (code *)0x45938000;
      }
      else {
        fVar5 = 4720.0;
        pcVar8 = ((void *)0x8c014200);
      }
      if (fVar5 == (float)(uint)pcVar8) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 180)), rand(iVar3,uVar1,ar6_00,ar7));
        uVar1 = 2;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 180)), libgcc_divide_helper_01031c(iVar3,2,ar6_00,ar7));
        if (iVar2 != 0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0x45cf8800;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2cc) = 0x45c5800045cf8800;
          }
        }
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
        fVar9 = 6320.0;
      }
      else {
        fVar5 = 6320.0;
        fVar9 = 4.2039e-43;
      }
      if (fVar5 == fVar9) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7));
        ar7 = 0;
        ar6_00 = 0xffffffff;
        uVar1 = 10;
        iVar3 = ar4 + 0xb0;
        (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetAnimation_033a94(iVar3,10,0xffffffff,0));
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
        fVar9 = 7040.0;
      }
      else {
        fVar5 = 7040.0;
        fVar9 = 1921.0;
      }
      if (fVar5 == fVar9) {
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0x44f02000;
        }
        else {
          fVar5 = 1921.0;
          *(undefined8 *)(unsigned)(ar4 + 0x2cc) = 0x28444f02000;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0x15;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 180)), rand(iVar3,uVar1,ar6_00,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 180)), libgcc_divide_helper_01031c(uVar1,0xaf0,ar6_00,ar7));
        if (cVar10 == '\0') {
          dVar7 = CONCAT44D((float)(iVar3 + 0x781),fVar5);
        }
        else {
          dVar7 = (double)(iVar3 + 0x781);
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x27c) = (int)(D2U(dVar7) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x27c) = dVar7;
        }
      }
    }
    else {
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
        fVar9 = 8720.0;
      }
      else {
        fVar5 = 8720.0;
        fVar9 = 4.2039e-43;
      }
      if (fVar5 == fVar9) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7));
        ar7 = 0;
        ar6_00 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x4c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 0x2e0,((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x68)),uVar1,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); FUN_8c023484(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x78)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x94)),uVar1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xa0)),uVar1,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(fr0_ - 0xa0)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xb0)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
    ar7 = ar4 + 0x14;
    iVar3 = 0x80;
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 0x80,ar7,0x80,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,iVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,((void *)0x8c022cb0),ar7));
  return 1;
}

__asm__(".globl _FUN_8c08f354\n.set _FUN_8c08f354, _FUN_8c08f354_def\n");
