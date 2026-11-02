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
undefined4 FUN_8c058024_def(int ar4,code *ar5,undefined4 ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c058024";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 340; for (int i_ = 0; i_ < 340; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  double *ar5_00;
  int iVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *ar7_00;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  double in_dr0 = 0;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined4 in_fr3 = 0;
  float fVar17;
  undefined4 in_fr12 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  undefined8 in_xd14 = 0;
  undefined8 uVar18;
  char cVar19;
  char cVar20;
  
  cVar20 = '\0';
  cVar19 = '\0';
  uVar11 = 1;
  pcVar8 = ar5;
  ar7_00 = ar7;
  uVar13 = ar6;
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x4c)),pcVar8,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x5c)),pcVar8,ar6,ar7_00));
  puVar10 = (undefined *)(unsigned)0x0;
  puVar9 = (undefined *)(unsigned)0x0;
  if (*(int *)(unsigned)(ar4 + 0x29c) == 0) {
    (vsp = ((unsigned long)(fr0_ - 340)), vec3_clear(ar4 + 0x2d4,0x2d4,ar6,ar7_00));
    uVar12 = SUB84(in_dr0,0);
    uVar3 = 0x2a8;
    (vsp = ((unsigned long)(fr0_ - 340)), vec3_clear(ar4 + 0x2a8,0x2a8,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), vec3_clear(ar4 + 0x90,uVar3,ar6,ar7_00));
    pcVar8 = ((void *)0x8c014e20);
    (vsp = ((unsigned long)(fr0_ - 340)), vec3_clear(ar4 + 0x6c,((void *)0x8c014e20),ar6,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c0230f0(ar4 + 0x14,pcVar8,ar6,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_normalize(((undefined1 *)(fr0_ - 0x6c)),pcVar8,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x7c)),ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7_00));
    if (cVar20 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      uVar16 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),uVar12);
      *(undefined4 *)(unsigned)(ar4 + 0x2e4) = *(undefined4 *)(unsigned)(ar5 + 4);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)uVar12;
      uVar16 = *(undefined8 *)(unsigned)(ar5 + 4);
      *(undefined8 *)(unsigned)(ar4 + 0x2e4) = uVar16;
    }
    if ((*(int *)(fr0_ + 0x00000000)) == -1) {
      uVar3 = 3;
      iVar6 = 0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), rand_range(ar4,0,3,ar7_00));
      if (ar7 == (code *)0x1b) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = iVar2 + 0x50;
        (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar6,0xffffffff,0));
      }
      else if (ar7 == (code *)0x1c) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = iVar2 + 0x53;
        (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar6,0xffffffff,0));
      }
      else if (ar7 == (code *)0x1d) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = 0x53;
        (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x53,0xffffffff,0));
      }
      else if (ar7 == (code *)0x1e) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = 0x58;
        (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x58,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar6,uVar3,ar7_00));
    }
    else if ((*(int *)(fr0_ + 0x00000000)) == -2) {
      ar7_00 = (code *)0x0;
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x55,0xffffffff,0));
    }
    else {
      ar7_00 = (code *)0x0;
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,(*(int *)(fr0_ + 0x00000000)),0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,(*(int *)(fr0_ + 0x00000000)),uVar3,ar7_00));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c0230f0(ar5,1,uVar3,ar7_00); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c0230f0(uVar13,((void *)0x8c0230f0),uVar3,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x8c)),((undefined1 *)(fr0_ - 0x9c)),uVar3,ar7_00));
    uVar18 = uVar16;
    if (cVar20 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)uVar16 >> 0x20))
      ;
      uVar18 = in_xd14;
    }
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,uVar3,ar7_00));
    uVar4 = (undefined4)uVar16;
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,uVar3,ar7_00));
    if (cVar20 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c0) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2c0) = CONCAT44(0x3f800000,uVar4);
    }
    in_dr0 = CONCAT44D(0x3f800000,uVar4);
    if (cVar20 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c4) = 0x3f800000;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2c4) = in_dr0;
    }
    pcVar8 = ((void *)0x8c026dd8);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),uVar3,ar7_00));
    if (iVar2 == 0x50) {
      if (cVar20 == '\0') {
        in_dr0 = CONCAT44D(0x43a07481,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 3.5683445164698805e+163;
      }
      if (cVar19 == '\0') {
        fVar17 = F32LO(in_dr14) / F32HI(in_dr0);
      }
      else {
        fVar17 = SUB84(in_dr14 / in_dr0,0);
      }
      if (cVar20 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2c0) = fVar17;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c0) = uVar18;
      }
    }
    else if (iVar2 == 0x52) {
      if (cVar20 == '\0') {
        in_dr0 = CONCAT44D(0x43a5a000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.44351786672845e-311;
      }
      if (cVar19 == '\0') {
        fVar17 = F32LO(in_dr14) / F32HI(in_dr0);
      }
      else {
        fVar17 = SUB84(in_dr14 / in_dr0,0);
      }
      if (cVar20 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2c0) = fVar17;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c0) = uVar18;
      }
    }
    else if (iVar2 == 0x58) {
      (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c032ab0(ar4,pcVar8,uVar3,ar7_00));
      if (cVar20 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2c4) = (int)((ulonglong)in_dr0 >> 0x20);
        dVar14 = CONCAT44D(0x42080000,SUB84(in_dr0,0));
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c4) = in_dr0;
        dVar14 = 4.323456351280824e+17;
      }
      pcVar8 = (code *)(ar4 + 0x2c0);
      if (cVar19 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) - F32HI(dVar14));
      }
      else {
        in_dr14 = in_dr14 - dVar14;
      }
      if (cVar20 == '\0') {
        in_dr0 = CONCAT44D(0x43980000,SUB84(dVar14,0));
      }
      else {
        in_dr0 = 3.5682127120005427e+163;
      }
      if (cVar19 == '\0') {
        fVar17 = F32LO(in_dr14) / F32HI(in_dr0);
      }
      else {
        fVar17 = SUB84(in_dr14 / in_dr0,0);
      }
      if (cVar20 == '\0') {
        *(float *)(unsigned)pcVar8 = fVar17;
      }
      else {
        *(undefined8 *)(unsigned)pcVar8 = uVar18;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022d04(ar4 + 0x2a8,pcVar8,uVar3,ar7_00));
    pcVar8 = ((void *)0x8c022d04);
    (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022d04(ar4 + 0x2d4,((void *)0x8c022d04),uVar3,ar7_00));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c026db0(ar4,pcVar8,uVar3,ar7_00));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c03c0f0(ar4 + 0xb0,uVar4,uVar3,ar7_00));
    puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 340)), deref_u32(uVar1,uVar4,uVar3,ar7_00));
    uVar3 = puVar5[1];
    *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar5;
    *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar3;
    pcVar8 = (code *)puVar5[2];
    *(unsigned *)(unsigned)(ar4 + 0xbc) = pcVar8;
    ar6 = 0x29c;
    *(int *)(unsigned)(ar4 + 0x29c) = *(int *)(unsigned)(ar4 + 0x29c) + 1;
    *(undefined4 *)(unsigned)(ar4 + 800) = 0;
  }
  else if (*(int *)(unsigned)(ar4 + 0x29c) != 1) goto LAB_8c058cde;
  fVar17 = 0.0;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,pcVar8,ar6,ar7_00));
  if ((iVar2 < 0x59) && (0x4f < iVar2)) {
                    
    switch(iVar2) {
    case 0x52:
      ({ unsigned long ri0_ = (unsigned long)(uVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 340)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar8,ar6,ar7_00); });
      if (cVar20 == '\0') {
        dVar14 = CONCAT44D(0x42100000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar14 = 1.69814422787745e-311;
        in_xd0 = in_dr0;
      }
      in_dr0 = dVar14;
      if (((cVar19 != '\0' || F32HI(in_dr0) <= SUB84(in_dr0,0)) &&
          (*(int *)(unsigned)(ar4 + 800) == 0)) &&
         (pcVar8 = ar5, (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7_00)), *(char *)(unsigned)(ar4 + 0x210) == '\x01')) {
        ar7_00 = (code *)0x5;
        ar6 = 1;
        pcVar8 = (code *)((undefined1 *)(fr0_ - 0x3c));
        (vsp = ((unsigned long)(fr0_ - 340)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0xd0))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),pcVar8,1,5));
      }
    case 0x50:
    case 0x51:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,pcVar8,ar6,ar7_00));
      puVar9 = ((undefined1 *)(unsigned)0x8c13612c) + (iVar2 + -0x50) * 0x18;
      puVar10 = ((undefined1 *)(unsigned)0x8c13612c) + (iVar2 + -0x50) * 0x18;
      break;
    default:
      pcVar8 = ((void *)0x8c026dd8);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),ar6,ar7_00));
      puVar9 = ((undefined1 *)(unsigned)0x8c13609c) + (iVar2 + -0x53) * 0x18;
      puVar10 = ((undefined1 *)(unsigned)0x8c13609c) + (iVar2 + -0x53) * 0x18;
      break;
    case 0x56:
    case 0x57:
      break;
    case 0x58:
      ({ unsigned long ri0_ = (unsigned long)(uVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 340)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar8,ar6,ar7_00); });
      if (cVar20 == '\0') {
        dVar14 = CONCAT44D(0x42a20000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar14 = 1.49443735929137e-311;
        in_xd0 = in_dr0;
      }
      in_dr0 = dVar14;
      if (cVar19 == '\0' && F32HI(in_dr0) < SUB84(in_dr0,0)) {
        in_dr0 = CONCAT44D(0x3f800000,SUB84(in_dr0,0));
        if (cVar20 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c0) = 0x3f800000;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x2c0) = in_dr0;
        }
      }
      puVar9 = ((undefined1 *)(unsigned)0x8c1361d4);
      puVar10 = ((undefined1 *)(unsigned)0x8c1361d4);
      fVar17 = 0.0;
    }
  }
  uVar1 = SUB84(in_dr0,0);
  uVar3 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,pcVar8,ar6,ar7_00));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6,ar7_00));
  puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 340)), deref_u32(uVar4,uVar3,ar6,ar7_00));
  uVar4 = puVar5[1];
  *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar5;
  *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar4;
  *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar5[2];
  *(unsigned *)(unsigned)(ar4 + 0xb4) = puVar10;
  ({ unsigned long ri0_ = (unsigned long)(uVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 340)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0xac)),ar6,ar7_00));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6,ar7_00));
  if (cVar20 == '\0') {
    dVar14 = CONCAT44D((*(float *)(fr0_ - 0x48)),uVar1);
  }
  else {
    dVar14 = CONCAT44D((*(undefined4 *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
  }
  if (cVar19 == '\0') {
    fVar17 = F32HI(dVar14) - fVar17;
  }
  else {
    fVar17 = (float)((ulonglong)(dVar14 - CONCAT44D(in_fr12,fVar17)) >> 0x20);
  }
  (*(float *)(fr0_ - 0x38)) = fVar17;
  if (cVar20 != '\0') {
    (*(float *)(fr0_ - 0x38)) = (*(float *)(fr0_ - 0x48));
    (*(float *)(fr0_ - 0x34)) = fVar17;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar6,ar7_00));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6,ar7_00));
  puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 340)), deref_u32(uVar4,uVar3,ar6,ar7_00));
  uVar3 = puVar5[1];
  *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar5;
  *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar3;
  uVar3 = puVar5[2];
  *(undefined4 *)(unsigned)(ar4 + 0xbc) = uVar3;
  *(unsigned *)(unsigned)(ar4 + 0xb4) = puVar9;
  ({ unsigned long ri0_ = (unsigned long)(uVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 340)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7_00); });
  uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4));
  (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c034384(ar4 + 0xb0,uVar3,uVar3,ar7_00));
  pcVar8 = ((void *)0x8c023a14);
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0xbc)),uVar3,((void *)0x8c023a14)));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,0xffffffff,pcVar8));
  puVar7 = ((undefined1 *)(fr0_ - 0x3c));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xcc))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); Vec3_sub(puVar7,ar4 + 0x2d4,puVar7,ar4 + 0x2d4); });
  pcVar8 = ((void *)0x8c023a14);
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xcc)),puVar7,((void *)0x8c023a14)));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,0xffffffff,pcVar8));
  if (cVar20 == '\0') {
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),*(undefined4 *)(unsigned)(ar4 + 0x2b0));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x2b0);
    dVar14 = *(double *)(unsigned)(ar4 + 0x2c0);
  }
  if (cVar19 == '\0') {
    fVar17 = F32LO(dVar14) * F32HI(dVar14);
  }
  else {
    fVar17 = SUB84(dVar14 * dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(unsigned)(ar4 + 0x2b0) = fVar17;
    fVar17 = *(float *)(unsigned)(ar4 + 0x2ac);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x2b0) = in_xd0;
    in_xd0 = *(double *)(unsigned)(ar4 + 0x2ac);
  }
  uVar3 = 0x2c4;
  if (cVar20 == '\0') {
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c4),fVar17);
  }
  else {
    dVar14 = *(double *)(unsigned)(ar4 + 0x2c4);
  }
  if (cVar19 == '\0') {
    fVar17 = F32LO(dVar14) * F32HI(dVar14);
  }
  else {
    fVar17 = SUB84(dVar14 * dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(unsigned)(ar4 + 0x2ac) = fVar17;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x2ac) = in_xd0;
  }
  ar7_00 = ((void *)0x8c0230f0);
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xdc))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c0230f0(ar4 + 0x14,0x2c4,ar4 + 0x2ac,((void *)0x8c0230f0)); });
  puVar7 = ((undefined1 *)(fr0_ - 0xec));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_ctor_xyz(puVar7,uVar3,puVar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xdc)),((undefined1 *)(fr0_ - 0xec)),puVar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xec)),0xffffffff,puVar7,ar7_00));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xdc)),0xffffffff,puVar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xfc)),uVar3,puVar7,ar7_00));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0xfc)),puVar7,ar7_00));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,puVar7,ar7_00));
  if (iVar2 == 3) {
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x108)),uVar3,puVar7,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x108)),puVar7,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x118)),puVar7,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,puVar7,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), object_dtor_delete(((undefined1 *)(fr0_ - 0x108)),0xffffffff,puVar7,ar7_00));
  }
  else if (iVar2 == 4) {
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x124)),uVar3,puVar7,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x124)),puVar7,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x134)),puVar7,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,puVar7,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), object_dtor_delete(((undefined1 *)(fr0_ - 0x124)),0xffffffff,puVar7,ar7_00));
  }
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x2d4,((undefined1 *)(fr0_ - 0x3c)),puVar7,ar7_00));
  ar5_00 = (double *)(unsigned)(ar4 + 0x2e4);
  uVar3 = 0x2e4;
  if (cVar20 == '\0') {
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),*(undefined4 *)(unsigned)(ar4 + 0x2e4));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x2e4);
    dVar14 = *(double *)(unsigned)(ar4 + 0x2ac);
  }
  if (cVar19 == '\0') {
    fVar17 = F32LO(dVar14) + F32HI(dVar14);
  }
  else {
    fVar17 = SUB84(dVar14 + dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(unsigned)ar5_00 = fVar17;
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),in_fr3);
    dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),fVar17);
  }
  else {
    *ar5_00 = in_xd0;
    dVar14 = *(double *)(unsigned)(ar5 + 4);
    dVar15 = *(double *)(unsigned)(ar4 + 0x2ac);
  }
  fVar17 = F32HI(dVar15);
  if (cVar19 == '\0') {
    dVar14 = CONCAT44D(F32HI(dVar14) + fVar17,SUB84(dVar14,0));
  }
  else {
    dVar14 = dVar14 + dVar15;
  }
  if (cVar20 == '\0') {
    dVar15 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)(ar4 + 0x2e4));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x2e4);
  }
  if (cVar19 == '\0') {
    fVar17 = F32LO(dVar15) - F32HI(dVar14);
  }
  else {
    fVar17 = SUB84(dVar15 - dVar14,0);
  }
  if (cVar20 == '\0') {
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),fVar17);
  }
  else {
    dVar14 = *(double *)(unsigned)(ar4 + 0x2ac);
  }
  if (cVar19 == '\0') {
    fVar17 = F32LO(dVar14) + F32HI(dVar14);
  }
  else {
    fVar17 = SUB84(dVar14 + dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(unsigned)(ar4 + 0x2ac) = fVar17;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x2ac) = in_xd0;
  }
  uVar16 = CONCAT44(0x3f800000,fVar17);
  if (cVar20 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x278) = uVar16;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,0x2e4,ar7_00));
  if (iVar2 == 0x55) {
    ({ unsigned long ri0_ = (unsigned long)(uVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 340)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,uVar3,ar7_00); });
    if (cVar20 == '\0') {
      uVar16 = CONCAT44(0x42100000,(int)((ulonglong)uVar16 >> 0x20));
    }
    else {
      uVar16 = 0x3e99999a42100000;
    }
    if (cVar19 == '\0' && F32HI(uVar16) < (float)uVar16) {
      ar7_00 = (code *)(ar4 + 0x278);
      if (cVar20 == '\0') {
        uVar16 = CONCAT44(0x3e99999a,(float)uVar16);
        *(undefined4 *)(unsigned)ar7_00 = 0x3e99999a;
      }
      else {
        uVar16 = 0x8c033b983e99999a;
        *(undefined8 *)(unsigned)ar7_00 = 0x8c033b983e99999a;
      }
    }
  }
  uVar13 = (undefined4)uVar16;
  ar6 = 0x278;
  iVar6 = ar4 + 0x278;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar6,0x278,ar7_00));
  if (iVar2 != 1) goto LAB_8c058cde;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,iVar6,ar6,ar7_00));
  if (iVar2 == 0x50) {
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
  }
  else {
    if (iVar2 != 0x51) {
      if (iVar2 != 0x52) {
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
        goto LAB_8c058cae;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
      (vsp = ((unsigned long)(fr0_ - 340)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x140)),iVar6,ar6,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x140)),ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x150)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,ar6,ar7_00));
      uVar11 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 340)), object_dtor_delete(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 340)), Vec3_length(ar4 + 0x14,uVar11,ar6,ar7_00));
      iVar6 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x80,iVar6,ar6,ar7_00));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
    *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
  }
LAB_8c058cae:
  uVar11 = 0;
  (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022d04(ar4 + 0x2a8,iVar6,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022d04(ar4 + 0x2d4,iVar6,ar6,ar7_00));
  if (cVar20 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar13);
  }
LAB_8c058cde:
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7_00));
  return uVar11;
}

__asm__(".globl _FUN_8c058024\n.set _FUN_8c058024, _FUN_8c058024_def\n");
