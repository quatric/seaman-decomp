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
undefined4 FUN_8c03f4a4_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03f4a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2744; for (int i_ = 0; i_ < 2744; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *ar5_00;
  code *pcVar4;
  undefined1 *puVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 unaff_r8 = 0;
  code *pcVar14;
  undefined4 unaff_r9 = 0;
  int iVar15;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 unaff_r12 = 0;
  int iVar16;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined8 *puVar17;
  uint in_fr1 = 0;
  undefined4 uVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  uint uVar23;
  double dVar22;
  uint in_fr7 = 0;
  double dVar24;
  undefined8 uVar25;
  double in_dr14 = 0;
  float fVar26;
  undefined8 in_xd0 = 0;
  double in_xd4 = 0;
  undefined8 in_xd14 = 0;
  bool bVar27;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
    puVar17 = &(*(undefined8 *)(fr0_ - 0x8));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar17 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x10));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar17 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)puVar17 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)puVar17 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)((int)puVar17 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)((int)puVar17 + -0x14) = unaff_r10;
  *(undefined4 *)(unsigned)((int)puVar17 + -0x18) = unaff_r9;
  *(undefined4 *)(unsigned)((int)puVar17 + -0x1c) = unaff_r8;
  *(undefined4 *)(unsigned)((int)puVar17 + -0x20) = in_PR;
  iVar16 = 1;
  puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0xe8);
  *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = puVar5;
  ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c03f480(*ar5,1,puVar5,ar7); });
  pcVar10 = ((void *)0x8c022c88);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar17 + -0x30),(undefined1 *)(unsigned)((int)puVar17 + -0xe8),puVar5,
                 ((void *)0x8c022c88)));
  uVar2 = 0xffffffff;
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xe8),0xffffffff,puVar5,pcVar10));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar17 + -0x40),uVar2,puVar5,pcVar10));
  pcVar14 = (code *)(uint)ar5[4];
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar17 + -0x50),uVar2,puVar5,pcVar10));
  puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x60);
  pcVar10 = ((void *)0x8c022c4c);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero(puVar5,uVar2,((void *)0x8c022c4c),puVar5));
  *(undefined4 *)(unsigned)((int)puVar17 + -0x640) = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)(ulonglong)in_fr7;
  }
  else {
    dVar24 = *(double *)(unsigned)(ar5[7] + 8);
  }
  if (in_FPSCR_SZ != '\0') {
    in_xd4 = *(double *)(unsigned)(ar5[7] + 4);
  }
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c10277c((undefined1 *)(unsigned)((int)puVar17 + -0x6c),uVar2,pcVar10,puVar5));
  puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x7c);
  pcVar10 = ((void *)0x8c022c4c);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero(puVar5,uVar2,((void *)0x8c022c4c),puVar5));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar17 + -0x8c),uVar2,pcVar10,puVar5));
  puVar3 = ((undefined4 *)(unsigned)0x8c125bf0);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03f460((undefined1 *)(unsigned)((int)puVar17 + -0x98),((undefined4 *)(unsigned)0x8c125bf0),pcVar10,puVar5));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar17 + -0xa8),puVar3,((void *)0x8c022c4c),
                 (undefined1 *)(unsigned)((int)puVar17 + -0xa8)));
  if (((((0 < *(int *)(unsigned)(ar4 + 0x31c)) && (*(int *)(unsigned)(ar4 + 0x124) != 0x29)) &&
       (*(int *)(unsigned)(ar4 + 0x124) != 0x23)) &&
      ((*(int *)(unsigned)(ar4 + 0x124) != 0x24 && (*(int *)(unsigned)(ar4 + 0x124) != 0x27)))) &&
     ((*(int *)(unsigned)(ar4 + 0x124) != 0x28 &&
      ((*(int *)(unsigned)(ar4 + 0x124) != 0x32 && (*(int *)(unsigned)(ar4 + 0x124) != 0x33)))))) {
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(((undefined1 *)(unsigned)0x8c2803a8),*(undefined4 *)(unsigned)(uint)ar5[1],*(int *)(unsigned)(ar4 + 0x124),0x124));
    *(undefined4 *)(unsigned)((int)puVar17 + -0x644) = 2;
    puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0xa8);
    pcVar10 = ((void *)0x8c022cb0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2803b8) = pcVar14;
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(puVar5,0xffffffff,((void *)0x8c022cb0),puVar5));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x98),0xffffffff,pcVar10,puVar5));
    pcVar10 = ((void *)0x8c022cb0);
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x8c),0xffffffff,((void *)0x8c022cb0),puVar5));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x7c),0xffffffff,pcVar10,puVar5));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x6c),0xffffffff,pcVar10,puVar5));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x60),0xffffffff,pcVar10,puVar5));
    uVar2 = 0xffffffff;
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x50),0xffffffff,pcVar10,0xffffffff));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x40),0xffffffff,pcVar10,uVar2));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x30),0xffffffff,(undefined1 *)(unsigned)((int)puVar17 + -0x30),
              uVar2));
    return *(undefined4 *)(unsigned)((int)puVar17 + -0x644);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x300) = 1;
  pcVar10 = (code *)0x218;
  uVar2 = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x338) = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)((ulonglong)*(uint *)(unsigned)((int)puVar17 + -0x90) << 0x20);
  }
  else {
    dVar21 = *(double *)(unsigned)((int)puVar17 + -0x90);
    in_xd4 = 0.0;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar21),SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar17 + -0x38) = (int)(D2U(dVar21) >> 0x20);
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x98),SUB84(dVar21,0));
    dVar19 = (double)(ulonglong)in_fr1;
  }
  else {
    *(double *)(unsigned)((int)puVar17 + -0x38) = dVar21;
    dVar21 = *(double *)(unsigned)((int)puVar17 + -0x98);
    dVar19 = 0.0;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) + 0.0,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar17 + -0x40) = (int)(D2U(dVar21) >> 0x20);
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x94),SUB84(dVar21,0));
  }
  else {
    *(double *)(unsigned)((int)puVar17 + -0x40) = dVar21;
    dVar21 = *(double *)(unsigned)((int)puVar17 + -0x94);
  }
  ar5_00 = ((undefined1 *)(unsigned)0x8c125be4);
  if (in_FPSCR_SZ != '\0') {
    dVar19 = 0.0;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) + 0.0,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar17 + -0x3c) = (int)(D2U(dVar21) >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)puVar17 + -0x3c) = dVar21;
  }
  if ((pcVar14 == (code *)0x3) && (0 < *(int *)(unsigned)(ar4 + 0x2e8))) {
    pcVar14 = (code *)0x1;
  }
  if (((pcVar14 == (code *)0x3) || (*(int *)(unsigned)(ar4 + 0x68) != 0)) && (*(int *)(unsigned)(ar4 + 0x2e8) == 0)) {
    *(int *)(unsigned)((int)puVar17 + -0xa74) = ar5[0xb];
    *(int *)(unsigned)((int)puVar17 + -0xa78) = ar5[6];
    *(int *)(unsigned)((int)puVar17 + -0xa7c) = ar5[3];
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0507c0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar5[1],pcVar14));
    puVar3 = (undefined4 *)(unsigned)(uint)ar5[1];
    pcVar10 = ((void *)0x8c023a14);
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(((undefined1 *)(unsigned)0x8c2803a8),*puVar3,((void *)0x8c023a14),puVar3));
    *(undefined4 *)(unsigned)((int)puVar17 + -0x648) = 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2803b8) = pcVar14;
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xa8),0xffffffff,pcVar10,puVar3));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x98),0xffffffff,pcVar10,puVar3));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x8c),0xffffffff,pcVar10,puVar3));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x7c),0xffffffff,pcVar10,puVar3));
    puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x6c);
    pcVar14 = ((void *)0x8c102790);
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790(puVar5,0xffffffff,puVar5,((void *)0x8c102790)));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x60),0xffffffff,puVar5,pcVar14));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x50),0xffffffff,puVar5,pcVar14));
    pcVar10 = ((void *)0x8c022cb0);
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x40),0xffffffff,((void *)0x8c022cb0),pcVar14));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x30),0xffffffff,pcVar10,pcVar14));
    return *(undefined4 *)(unsigned)((int)puVar17 + -0x648);
  }
  if (pcVar14 == (code *)0x1) {
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), vec3_clear(ar4 + 0x6c,((undefined1 *)(unsigned)0x8c125be4),0,0x218));
    uVar23 = (uint)(D2U(dVar21) >> 0x20);
    *(unsigned *)(unsigned)((int)puVar17 + -0xa70) = (undefined1 *)(unsigned)((int)puVar17 + -0xf8);
    *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa70);
    pcVar10 = ((void *)0x8c0230f0);
    ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar2,((void *)0x8c0230f0)); });
    uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_length((undefined1 *)(unsigned)((int)puVar17 + -0xf8),ar5_00,
                        (undefined1 *)(unsigned)((int)puVar17 + -0xf8),pcVar10));
    *(undefined4 *)(unsigned)((int)puVar17 + -0x694) = uVar2;
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x14,*(undefined4 *)(unsigned)((int)puVar17 + -0x694),uVar2,pcVar10));
    ar5_00 = (undefined *)(unsigned)0xffffffff;
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xf8),0xffffffff,uVar2,pcVar10));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031748(ar4,ar5_00,uVar2,pcVar10));
    pcVar10 = (code *)0xa0;
    dVar21 = (double)((ulonglong)uVar23 << 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    }
    else {
      *(double *)(unsigned)(ar4 + 0xa0) = in_xd4;
    }
  }
  uVar2 = SUB84(dVar24,0);
  pdVar6 = (double *)(unsigned)0x2e8;
  if (*(int *)(unsigned)(ar4 + 0x2e8) == 2) {
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D(0x43340000,SUB84(dVar21,0));
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4) = 0x43340000;
    }
    else {
      dVar21 = 6.20179820760257e-312;
      *(undefined8 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4) = 0x12443340000;
    }
  }
  iVar15 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar15 < 0x36) && (-1 < iVar15)) {
    uVar9 = SUB84(dVar21,0);
                    
    switch(iVar15) {
    case 0:
      (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03f430((undefined1 *)(unsigned)((int)puVar17 + -0x108),ar5[7],0x2e8,((void *)0x8c03f430)));
      iVar16 = ar5[1];
      *(int *)(unsigned)((int)puVar17 + -0xaa0) = *ar5;
      *(int *)(unsigned)((int)puVar17 + -0xa9c) = iVar16;
      iVar16 = ar5[3];
      *(int *)(unsigned)((int)puVar17 + -0xa98) = ar5[2];
      *(int *)(unsigned)((int)puVar17 + -0xa94) = iVar16;
      iVar16 = ar5[5];
      *(int *)(unsigned)((int)puVar17 + -0xa90) = ar5[4];
      *(int *)(unsigned)((int)puVar17 + -0xa8c) = iVar16;
      iVar16 = ar5[7];
      *(int *)(unsigned)((int)puVar17 + -0xa88) = ar5[6];
      *(int *)(unsigned)((int)puVar17 + -0xa84) = iVar16;
      iVar16 = ar5[9];
      *(int *)(unsigned)((int)puVar17 + -0xa80) = ar5[8];
      *(int *)(unsigned)((int)puVar17 + -0xa7c) = iVar16;
      iVar16 = ar5[0xb];
      *(int *)(unsigned)((int)puVar17 + -0xa78) = ar5[10];
      *(int *)(unsigned)((int)puVar17 + -0xa74) = iVar16;
      *(int *)(unsigned)((int)puVar17 + -0xaa4) = ar5[6];
      *(unsigned *)(unsigned)((int)puVar17 + -0xaa8) = (undefined1 *)(unsigned)((int)puVar17 + -0x108);
      pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c046684(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0x30),
                                     pcVar14));
      *(unsigned *)(unsigned)((int)puVar17 + -0x698) = pcVar10;
      iVar16 = *(int *)(unsigned)((int)puVar17 + -0x698);
      (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c026038((undefined1 *)(unsigned)((int)puVar17 + -0x108),0xffffffff,0xffffffff,pcVar10));
      break;
    case 1:
      if ((pcVar14 == (code *)0x0) || (pcVar14 == (code *)0x2)) {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04b168(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0x30),pcVar10))
        ;
        *(undefined4 *)(unsigned)((int)puVar17 + -0x69c) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x69c);
      }
      else if (pcVar14 == (code *)0x1) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031748(ar4,ar5_00,0x2e8,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar17 + -0x2c) = 0x43340000;
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar17 + -0x2c) = 0xa4443340000;
        }
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04c314(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0x30),pcVar10))
        ;
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6a0) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6a0);
      }
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],*(undefined4 *)(unsigned)(uint)ar5[1],0x2e8,pcVar10));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar17 + -0x8f4) = (int)(D2U(dVar19) >> 0x20);
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)(unsigned)((int)puVar17 + -0x8f4));
        dVar24 = CONCAT44D(0x43340000,SUB84(dVar21,0));
      }
      else {
        *(double *)(unsigned)((int)puVar17 + -0x8f4) = dVar19;
        dVar24 = -9.359181568001544e-251;
      }
      if (in_FPSCR_PR == '\0') {
        bVar27 = SUB84(in_dr14,0) < F32HI(dVar24);
      }
      else {
        bVar27 = in_dr14 < dVar24;
      }
      if (bVar27) {
        iVar16 = ar5[6];
        *(int *)(unsigned)((int)puVar17 + -0xa70) = ar5[1];
        pcVar10 = ((void *)0x8c04d62c);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04d62c(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0xa70)),iVar16,((void *)0x8c04d62c)));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x900) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x900);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar17 + -0x30),*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10));
      }
      else {
        uVar9 = *(undefined4 *)(unsigned)(uint)ar5[1];
        pcVar10 = ((void *)0x8c057164);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,uVar9,uVar9,((void *)0x8c057164)));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8f8) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8f8) == 0) {
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04db38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],uVar9,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x8fc) = uVar2;
          iVar16 = *(int *)(unsigned)((int)puVar17 + -0x8fc);
          uVar2 = *(undefined4 *)(unsigned)(ar5[1] + 4);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031ab4(ar4,uVar2,uVar2,pcVar10));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,uVar2,pcVar10));
        }
      }
      break;
    case 3:
      iVar15 = *(int *)(unsigned)(ar4 + 300);
      if (iVar15 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        pcVar10 = pcVar14;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x734) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x734) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          *(int *)(unsigned)((int)puVar17 + -0x950) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x950));
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x950) + 300) = *(int *)(unsigned)(pcVar10 + 300) + 1;
        }
      }
      else if (iVar15 == 1) {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],300,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x738) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x738) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          uVar12 = 0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1d;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12));
          *(int *)(unsigned)((int)puVar17 + -0x954) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x954) + 300));
          *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x954) + 300) = pcVar10 + 1;
        }
      }
      else if (iVar15 == 2) {
        *(unsigned *)(unsigned)((int)puVar17 + -0xa6c) = ((void *)0x8c026858);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa6c))))(ar4 + 0xb0,ar5_00,300,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x73c) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x73c) == 1) {
          *(int *)(unsigned)((int)puVar17 + -0x958) = ar4;
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x958) + 300);
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa68);
          *(int *)(unsigned)((int)puVar17 + -0xa64) = *(int *)(unsigned)((int)puVar17 + -0xa64) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x958) + 300) =
               *(undefined4 *)(unsigned)((int)puVar17 + -0xa64);
          uVar2 = 0x11;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
          pcVar10 = (code *)(ar4 + 0xb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(pcVar10,uVar2,0xb0,pcVar10));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        }
      }
      else if (iVar15 == 3) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_00,300,pcVar10));
      }
      break;
    case 4:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      pcVar10 = (code *)0x0;
      iVar15 = -1;
      uVar9 = 0x11;
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x740) = uVar2;
      if (*(int *)(unsigned)((int)puVar17 + -0x740) != 6) {
        pcVar10 = (code *)0xb0;
        iVar15 = ar4 + 0xb0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(iVar15,uVar9,iVar15,0xb0));
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar9,iVar15,pcVar10));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x744) = uVar2;
      if (*(int *)(unsigned)((int)puVar17 + -0x744) == 1) {
        pcVar10 = (code *)0x2b8;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        iVar16 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar15 = *(int *)(unsigned)(ar4 + 300);
      if ((iVar15 < 6) && (-1 < iVar15)) {
                    
                    
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)(((code **)&(*(undefined1 *)(unsigned)0x8c04098c))[iVar15])))(vr4,vr5,vr6,vr7));
        return uVar2;
      }
      break;
    case 6:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = pcVar14;
      *(undefined4 *)(unsigned)((int)puVar17 + -0xa78) = *(undefined4 *)(unsigned)(ar5[1] + 4);
      pcVar10 = (code *)((int)puVar17 + -0x30);
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04f034(ar4,*ar5,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x704) = uVar2;
      iVar16 = *(int *)(unsigned)((int)puVar17 + -0x704);
      if (iVar16 != 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    default:
      goto override_jmp_8c03f9a2_case_7;
    case 8:
      pcVar10 = (code *)0x214;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        uVar2 = 300;
        iVar15 = *(int *)(unsigned)(ar4 + 300);
        if (iVar15 == 0) {
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x748) = uVar2;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x748));
          if (pcVar10 == (code *)0x0) {
            *(int *)(unsigned)((int)puVar17 + -0x95c) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x95c) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x95c) + 300) + 1;
          }
        }
        else if (iVar15 == 1) {
          pcVar10 = ((void *)0x8c057164);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],300,((void *)0x8c057164)));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x74c) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x74c) == 0) {
            *(int *)(unsigned)((int)puVar17 + -0x960) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x960) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x960) + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          }
        }
        else if (iVar15 == 2) {
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          pdVar6 = (double *)(unsigned)(uint)ar5[7];
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar9);
            dVar21 = CONCAT44D(0x40800000,SUB84(dVar19,0));
          }
          else {
            dVar24 = *pdVar6;
            dVar21 = 5.50074773365276e-311;
          }
          if (in_FPSCR_PR == '\0') {
            dVar24 = CONCAT44D(F32HI(dVar24) /
                                      F32HI(dVar21),SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 / dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x50) = (int)(D2U(dVar24) >> 0x20);
            *(undefined4 *)(unsigned)((int)puVar17 + -0x48) = 0x44898000;
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x50) = dVar24;
            *(undefined8 *)(unsigned)((int)puVar17 + -0x48) = 0xa2844898000;
          }
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x50);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],puVar5,300,pdVar6));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x750) = (int)(D2U(dVar21) >> 0x20);
            *(undefined4 *)(unsigned)((int)puVar17 + -0x4c) = *(undefined4 *)(unsigned)((int)puVar17 + -0x750);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x750) = dVar21;
            *(undefined8 *)(unsigned)((int)puVar17 + -0x4c) = *(undefined8 *)(unsigned)((int)puVar17 + -0x750);
          }
          uVar23 = 0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x270),puVar5,uVar2,pdVar6));
          uVar9 = SUB84(dVar21,0);
          pcVar10 = (code *)((int)puVar17 + -0x270);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,pcVar10,pcVar10,pdVar6));
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x270),0xffffffff,pcVar10,pdVar6));
          if (ar5[2] == 1) {
            dVar24 = (double)(ulonglong)uVar23;
            if (in_FPSCR_SZ == '\0') {
              uVar23 = 0;
              dVar24 = in_xd4;
            }
            pdVar6 = (double *)(unsigned)((int)puVar17 + -0x280);
            pcVar10 = ((void *)0x8c022ce8);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz(pdVar6,uVar2,((void *)0x8c022ce8),pdVar6));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x280),pcVar10,pdVar6));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x280),0xffffffff,pcVar10,pdVar6));
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x50),uVar23);
              dVar19 = CONCAT44D(0x42a08000,uVar9);
            }
            else {
              dVar21 = *(double *)(unsigned)((int)puVar17 + -0x50);
              dVar19 = 3.715470586832486e+16;
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) +
                                        F32HI(dVar19),SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 + dVar19;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)((int)puVar17 + -0x50) = (int)(D2U(dVar21) >> 0x20);
              dVar21 = CONCAT44D(0x43608000,*(undefined4 *)(unsigned)((int)puVar17 + -0x48));
            }
            else {
              *(double *)(unsigned)((int)puVar17 + -0x50) = dVar21;
              dVar24 = *(double *)(unsigned)((int)puVar17 + -0x48);
              dVar21 = 4.27850200525372e-311;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = F32LO(dVar21) + F32HI(dVar21);
            }
            else {
              fVar20 = SUB84(dVar21 + dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(unsigned)((int)puVar17 + -0x48) = fVar20;
            }
            else {
              *(double *)(unsigned)((int)puVar17 + -0x48) = dVar24;
            }
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar17 + -0x290),ar4 + 0x54,pcVar10,pdVar6));
          pcVar10 = (code *)((int)puVar17 + -0x290);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0x50),
                               pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x754) = uVar2;
          *(uint *)(unsigned)((int)puVar17 + -0x668) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x754) == 0);
          uVar2 = 0xffffffff;
          pcVar4 = ((void *)0x8c022cb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x290),0xffffffff,((void *)0x8c022cb0),pcVar10));
          if (*(int *)(unsigned)((int)puVar17 + -0x668) != 0) {
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2d4,uVar2,pcVar4,pcVar10));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2a8,uVar2,pcVar4,0x2a8));
            *(int *)(unsigned)((int)puVar17 + -0x964) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x964) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x964) + 300) + 1;
            pcVar10 = (code *)0x0;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
          }
          if (*(int *)(unsigned)(ar4 + 0x290) == 1) {
            *(int *)(unsigned)((int)puVar17 + -0x968) = ar4;
            pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x968));
            ((unsigned char *)(unsigned)pcVar10)[0x1fc] = (unsigned char)(*(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x968) + 0x1fc) & 0xfb);
          }
        }
        else if (iVar15 == 3) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar4 + 0xb0,0x214));
          iVar16 = 0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      }
      break;
    case 9:
      *(int *)(unsigned)((int)puVar17 + -0x96c) = ar4;
      *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = *(undefined4 *)(unsigned)((int)puVar17 + -0x96c);
      *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x96c) + 0x1fc) =
           *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa70) + 0x1fc) & 0xfb;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        pcVar10 = (code *)0x2;
        iVar16 = 2;
      }
      else {
        uVar2 = 0;
        if (in_FPSCR_SZ != '\0') {
          uVar9 = 0xbf800000;
        }
        uVar7 = 0xffffffff;
        iVar15 = ar5[2] + 0x4c;
        uVar12 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar15,0xffffffff,0));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x758) = uVar12;
        if (*(int *)(unsigned)((int)puVar17 + -0x758) != 6) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar15,uVar7,uVar2));
        }
        pcVar10 = ((void *)0x8c026dd8);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), get_field_1c_026dd8(ar4 + 0xb0,iVar15,uVar7,((void *)0x8c026dd8)));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x75c) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x75c) == 0x4c) {
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c026db0(ar4,iVar15,((void *)0x8c026db0),pcVar10));
          uVar7 = SUB84(in_dr14,0);
          *(undefined4 *)(unsigned)((int)puVar17 + -0x760) = uVar2;
          uVar12 = *(undefined4 *)(unsigned)((int)puVar17 + -0x760);
          iVar15 = ar4 + 0xb0;
          uVar2 = uVar12;
          uVar9 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03c0f0(iVar15,uVar12,uVar12,iVar15));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x764) = uVar9;
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), deref_u32(*(undefined4 *)(unsigned)((int)puVar17 + -0x764),uVar12,uVar2,iVar15));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x768) = uVar2;
          puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x768));
          uVar2 = puVar3[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
          puVar3 = ((undefined1 *)(unsigned)0x8c1362ac);
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1362ac);
          iVar15 = ar4 + 0xb0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_GetCurFrame(iVar15,uVar12,iVar15,((undefined1 *)(unsigned)0x8c1362ac)));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x76c) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x76c) = dVar19;
          }
          *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x2a0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),iVar15,puVar3));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign((undefined1 *)(unsigned)((int)puVar17 + -0x7c),(undefined1 *)(unsigned)((int)puVar17 + -0x2a0),
                      iVar15,puVar3));
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x2a0),0xffffffff,iVar15,puVar3));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2a8,uVar2,iVar15,puVar3));
          *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x2b0);
          pcVar10 = ((void *)0x8c023ae0);
          ({ unsigned long t0_ = (unsigned long)(
                   *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_sub((undefined1 *)(unsigned)((int)puVar17 + -0x7c),ar4 + 0x2d4,iVar15,((void *)0x8c023ae0)); });
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x2b0);
          *(unsigned *)(unsigned)((int)puVar17 + -0xa6c) = ((void *)0x8c023a14);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa6c))))(ar4 + 0x2a8,puVar5,puVar5,pcVar10));
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x2b0),0xffffffff,puVar5,pcVar10));
          *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x2c0);
          ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,puVar5,pcVar10); });
          dVar24 = 5.26354424712089e-315;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = in_xd4;
          }
          *(unsigned *)(unsigned)((int)puVar17 + -0xa68) = (undefined1 *)(unsigned)((int)puVar17 + -0x2d0);
          *(unsigned *)(unsigned)((int)puVar17 + -0xa64) = ((void *)0x8c022ce8);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa64))))
                    (*(undefined4 *)(unsigned)((int)puVar17 + -0xa68),uVar2,puVar5,pcVar10));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022dac((undefined1 *)(unsigned)((int)puVar17 + -0x2c0),(undefined1 *)(unsigned)((int)puVar17 + -0x2d0),
                       puVar5,pcVar10));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x770) = (int)(D2U(dVar19) >> 0x20);
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x770),uVar7);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x770) = dVar19;
            dVar21 = *(double *)(unsigned)((int)puVar17 + -0x770);
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x2d0),0xffffffff,puVar5,pcVar10));
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x2c0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(puVar5,0xffffffff,0xffffffff,puVar5));
          fVar20 = 0.0;
          pcVar4 = ((void *)0x8c022ce8);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x2e0),(undefined1 *)(unsigned)((int)puVar17 + -0x2e0),
                        ((void *)0x8c022ce8),puVar5));
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c023334(ar4 + 0x14,(undefined1 *)(unsigned)((int)puVar17 + -0x2e0),pcVar4,puVar5));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x774) = uVar2;
          uVar9 = *(undefined4 *)(unsigned)((int)puVar17 + -0x774);
          *(undefined4 *)(unsigned)((int)puVar17 + -0x66c) = uVar9;
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x2e0),0xffffffff,pcVar4,uVar9));
          fVar26 = F32HI(dVar21);
          if (*(int *)(unsigned)((int)puVar17 + -0x66c) == 3) {
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(-fVar26,SUB84(dVar21,0));
            }
            else {
              dVar21 = -dVar21;
            }
            dVar22 = dVar21;
            if (in_FPSCR_SZ == '\0') {
              fVar20 = F32HI(dVar21);
              dVar22 = dVar24;
            }
            dVar24 = dVar22;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_set_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x2ec),uVar2,pcVar4,uVar9));
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x2fc);
            uVar2 = 0x2a8;
            iVar15 = ar4 + 0x2a8;
            ({ unsigned long t0_ = (unsigned long)(
                         *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c023484(iVar15,(undefined1 *)(unsigned)((int)puVar17 + -0x2ec),iVar15,0x2a8); });
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x2a8,(undefined1 *)(unsigned)((int)puVar17 + -0x2fc),iVar15,uVar2));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x2fc),0xffffffff,iVar15,uVar2));
            pcVar4 = (code *)((int)puVar17 + -0x2ec);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), object_dtor_delete(pcVar4,0xffffffff,pcVar4,0xffffffff));
          }
          else if (*(int *)(unsigned)((int)puVar17 + -0x66c) == 4) {
            fVar20 = 0.0;
            dVar22 = dVar21;
            if (in_FPSCR_SZ == '\0') {
              dVar22 = dVar24;
              fVar20 = fVar26;
            }
            dVar24 = dVar22;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_set_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x308),uVar2,pcVar4,uVar9));
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x318);
            uVar2 = 0x2a8;
            iVar15 = ar4 + 0x2a8;
            ({ unsigned long t0_ = (unsigned long)(
                         *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c023484(iVar15,(undefined1 *)(unsigned)((int)puVar17 + -0x308),iVar15,0x2a8); });
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x2a8,(undefined1 *)(unsigned)((int)puVar17 + -0x318),iVar15,uVar2));
            pcVar4 = (code *)((int)puVar17 + -0x318);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(pcVar4,0xffffffff,pcVar4,uVar2));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), object_dtor_delete((undefined1 *)(unsigned)((int)puVar17 + -0x308),0xffffffff,pcVar4,uVar2));
          }
          puVar8 = (undefined1 *)(unsigned)((int)puVar17 + -0x7c);
          pcVar10 = ((void *)0x8c023a14);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x2d4,puVar8,pcVar4,((void *)0x8c023a14)));
          puVar5 = (undefined1 *)(unsigned)0xb0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_GetCurFrame(ar4 + 0xb0,puVar8,0xb0,pcVar10));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x778) = (int)(D2U(dVar19) >> 0x20);
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar17 + -0x778));
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x778) = dVar19;
          }
          dVar22 = CONCAT44D(0x3f800000,fVar20);
          if (in_FPSCR_PR == '\0') {
            bVar27 = SUB84(dVar21,0) < 1.0;
          }
          else {
            bVar27 = dVar21 < dVar22;
          }
          if (bVar27) {
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), vec3_clear(ar4 + 0x54,puVar8,puVar5,pcVar10));
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c2803b0),SUB84(dVar19,0));
            }
            else {
              dVar21 = CONCAT44D((*(uint *)(unsigned)0x8c2803b4),(*(undefined4 *)(unsigned)(unsigned)0x8c2803b0));
            }
            pcVar10 = (code *)(uint)ar5[1];
            puVar5 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)pcVar10);
            if (in_FPSCR_SZ == '\0') {
              dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(puVar5 + 8),SUB84(dVar22,0));
            }
            else {
              dVar19 = *(double *)(unsigned)(puVar5 + 8);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) -
                                        F32HI(dVar19),SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar19;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),0x43608000);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),0x43480000);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) / F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 / dVar21;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)(ar4 + 0x5c) = (int)(D2U(dVar21) >> 0x20);
              dVar19 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c2803a8);
            }
            else {
              *(double *)(unsigned)(ar4 + 0x5c) = dVar21;
              dVar24 = CONCAT44D((*(uint *)(unsigned)0x8c2803ac),(*(undefined4 *)(unsigned)(unsigned)0x8c2803a8));
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)ar5[1]),SUB84(dVar19,0));
            }
            else {
              dVar21 = *((double *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = F32LO(dVar21) - F32HI(dVar21);
            }
            else {
              fVar20 = SUB84(dVar21 - dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(0x42a08000,fVar20);
            }
            else {
              dVar21 = -8.87015311948797e+250;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = F32LO(dVar21) - F32HI(dVar21);
            }
            else {
              fVar20 = SUB84(dVar21 - dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(0x43480000,fVar20);
            }
            else {
              dVar21 = 9070973133824.0;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = F32LO(dVar21) / F32HI(dVar21);
            }
            else {
              fVar20 = SUB84(dVar21 / dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(unsigned)(ar4 + 0x54) = fVar20;
            }
            else {
              *(double *)(unsigned)(ar4 + 0x54) = dVar24;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = CONCAT44D(0x43480000,fVar20);
            }
            else {
              dVar24 = 1.44351483523651e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = SUB84(dVar21,0) < F32HI(dVar24);
            }
            else {
              bVar27 = dVar21 < dVar24;
            }
            if (bVar27) {
              puVar8 = (undefined1 *)(unsigned)(ar4 + 0x54);
              puVar5 = puVar8;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c023aa0(ar4 + 0x2a8,puVar8,puVar8,pcVar10));
            }
          }
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar8,puVar5,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x77c) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x77c) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2a8,puVar8,puVar5,1));
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            *(int *)(unsigned)((int)puVar17 + -0x970) = ar4;
            *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x970) + 0x1fc) =
                 *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x970) + 0x1fc) & 0xfb | 4;
            pcVar10 = (code *)0x0;
            iVar16 = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          }
        }
        else {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_GetCurFrame(ar4 + 0xb0,iVar15,uVar7,pcVar10));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x780) = (int)(D2U(dVar19) >> 0x20);
            in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                       *(undefined4 *)(unsigned)((int)puVar17 + -0x780));
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x780) = dVar19;
          }
          iVar11 = *(int *)(unsigned)(ar4 + 800);
          fVar20 = F32LO(in_dr14);
          if (iVar11 == 0) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = CONCAT44D(0x43928000,uVar9);
            }
            else {
              dVar24 = 1.2313176683819e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar20 < F32HI(dVar24);
            }
            else {
              bVar27 = in_dr14 < dVar24;
            }
            if (!bVar27) {
              iVar15 = 0x14;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c033474(ar4,0x14,*(undefined4 *)(unsigned)(uint)ar5[1],*(undefined4 *)(unsigned)(ar4 + 0x244)));
              *(int *)(unsigned)((int)puVar17 + -0x974) = ar4;
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x974) + 800) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x974) + 800) + 1;
            }
          }
          else if (iVar11 == 1) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = CONCAT44D(0x43b18000,SUB84(dVar19,0));
            }
            else {
              dVar24 = 1.23131867213357e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar20 < F32HI(dVar24);
            }
            else {
              bVar27 = in_dr14 < dVar24;
            }
            if (!bVar27) {
              iVar15 = 0x16;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c033474(ar4,0x16,*(undefined4 *)(unsigned)(uint)ar5[1],*(undefined4 *)(unsigned)(ar4 + 0x244)));
              *(int *)(unsigned)((int)puVar17 + -0x978) = ar4;
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x978) + 800) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x978) + 800) + 1;
            }
          }
          else if (iVar11 == 2) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = CONCAT44D(0x43eb0000,SUB84(dVar19,0));
            }
            else {
              dVar24 = 1.23132053393102e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar20 < F32HI(dVar24);
            }
            else {
              bVar27 = in_dr14 < dVar24;
            }
            if (!bVar27) {
              iVar15 = 0x18;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c033474(ar4,0x18,*(undefined4 *)(unsigned)(uint)ar5[1],*(undefined4 *)(unsigned)(ar4 + 0x244)));
              *(int *)(unsigned)((int)puVar17 + -0x97c) = ar4;
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x97c) + 800) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x97c) + 800) + 1;
            }
          }
          pcVar10 = (code *)(ar4 + 0xb0);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(pcVar10,iVar15,0xb0,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x784) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x784) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
            iVar16 = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c030eb8(ar4 + 0x1fc,0x178,0x1fc,pcVar10));
            *(undefined4 *)(unsigned)(ar4 + 800) = 0;
          }
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      }
      break;
    case 0xb:
      if (pcVar14 == (code *)0x1) {
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0526a0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],1,pcVar10));
        *(unsigned *)(unsigned)((int)puVar17 + -0x6ac) = pcVar10;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6ac);
      }
      else if ((pcVar14 == (code *)0x0) || (pcVar14 == (code *)0x2)) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar17 + -0x30),*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10));
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0526a0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar14,pcVar10));
        *(unsigned *)(unsigned)((int)puVar17 + -0x6b0) = pcVar10;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6b0);
      }
      else {
        iVar16 = 0;
      }
      break;
    case 0xc:
      if (pcVar14 == (code *)0x1) {
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = 0xffffffff;
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c053f24(ar4,*ar5,1,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6b4) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6b4);
      }
      else {
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = 0xffffffff;
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c053730(ar4,*ar5,pcVar14,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6b8) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6b8);
      }
      break;
    case 0x10:
      if (pcVar14 == (code *)0x1) {
        *(int *)(unsigned)((int)puVar17 + -0xa74) = ar5[6];
        pcVar10 = (code *)(uint)ar5[7];
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04eb14(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],1,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x7a4) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x7a4);
      }
      else {
        *(int *)(unsigned)((int)puVar17 + -0xa74) = ar5[6];
        pcVar10 = (code *)(uint)ar5[7];
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e7e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar14,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x7a0) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x7a0);
      }
      break;
    case 0x11:
      if (pcVar14 == (code *)0x1) {
        *(undefined4 *)(unsigned)(ar4 + 700) = 1;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x118),ar5_00,0x2e8,pcVar10));
        *(int *)(unsigned)((int)puVar17 + -0xa74) = ar5[6];
        pcVar10 = (code *)(uint)ar5[3];
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x118);
        uVar2 = *(undefined4 *)(unsigned)(uint)ar5[1];
        *(unsigned *)(unsigned)((int)puVar17 + -0xa6c) = ((void *)0x8c055750);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa6c))))(ar4,uVar2,puVar5,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6a4) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6a4);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x118),0xffffffff,puVar5,pcVar10));
      }
      else {
        *(unsigned *)(unsigned)((int)puVar17 + -0xa68) = ((void *)0x8c022ce8);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa68))))
                  ((undefined1 *)(unsigned)((int)puVar17 + -0x128),ar5_00,0x2e8,pcVar10));
        *(int *)(unsigned)((int)puVar17 + -0xa64) = ar5[6];
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa64);
        pcVar10 = (code *)(uint)ar5[3];
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055490(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0x128),pcVar10
                            ));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6a8) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6a8);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x128),0xffffffff,
                  (undefined1 *)(unsigned)((int)puVar17 + -0x128),pcVar10));
      }
      break;
    case 0x12:
      *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      while (iVar15 = *(int *)(unsigned)(ar4 + 0x134), iVar15 == 0) {
        if (ar5[0xb] == 1) {
          *(undefined4 *)(unsigned)((int)puVar17 + -0x64c) = 0;
          uVar2 = 0xffffffff;
          pcVar10 = ((void *)0x8c022cb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xa8),0xffffffff,((void *)0x8c022cb0),0xffffffff));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x98),0xffffffff,pcVar10,uVar2))
          ;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x8c),0xffffffff,pcVar10,uVar2));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x7c),0xffffffff,pcVar10,uVar2));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x6c),0xffffffff,pcVar10,uVar2))
          ;
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x60),0xffffffff,pcVar10,0xffffffff));
          pcVar10 = ((void *)0x8c022cb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x50),0xffffffff,((void *)0x8c022cb0),uVar2));
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x40);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(puVar5,0xffffffff,pcVar10,puVar5));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x30),0xffffffff,pcVar10,puVar5));
          return *(undefined4 *)(unsigned)((int)puVar17 + -0x64c);
        }
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), get_field_24_026024(ar5[6],0x134,pdVar6,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6d4) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x6d4) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x21c));
          if (pcVar10 == (code *)0x0) {
            pdVar6 = (double *)(unsigned)(ar5[7] + 8);
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)(ar4 + 0x48));
            }
            else {
              dVar21 = *pdVar6;
              in_xd4 = *(double *)(unsigned)(ar4 + 0x48);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)((int)puVar17 + -0x28) = (int)(D2U(dVar21) >> 0x20);
            }
            else {
              *(double *)(unsigned)((int)puVar17 + -0x28) = dVar21;
            }
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x248,(undefined1 *)(unsigned)((int)puVar17 + -0x30),pdVar6,0));
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            piVar1 = (int *)(unsigned)(uint)ar5[6];
            uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar1 + 0x130))))(piVar1,ar4 + 0x248,pdVar6,pcVar10));
            *(undefined4 *)(unsigned)((int)puVar17 + -0x6d8) = uVar2;
            iVar15 = *(int *)(unsigned)((int)puVar17 + -0x6d8);
            if (iVar15 == 0) {
              *(int *)(unsigned)((int)puVar17 + -0x918) = ar4;
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x918) + 0x134) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x918) + 0x134) + 1;
              *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = ((undefined1 *)(unsigned)0x8c125d58);
              pcVar10 = (code *)(uint)ar5[6];
              if (in_FPSCR_SZ == '\0') {
                dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),0x3f99999a);
              }
              else {
                dVar21 = *(double *)(unsigned)(ar4 + 0x48);
                in_xd4 = 1.23977272525323e-311;
              }
              if (in_FPSCR_PR == '\0') {
                uVar2 = SUB84(dVar21,0);
              }
              else {
                uVar2 = SUB84(dVar21 * dVar21,0);
              }
              *(int *)(unsigned)((int)puVar17 + -0xa6c) = ar5[3];
              pdVar6 = ((double *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0xa6c));
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c032788(ar4,ar4 + 0x248,pdVar6,pcVar10));
              if (in_FPSCR_SZ == '\0') {
                dVar21 = CONCAT44D(0x43340000,uVar2);
                *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x43340000;
              }
              else {
                dVar21 = 4.591918305585602e-232;
                *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0xfe6d01b43340000;
              }
            }
            else if (iVar15 == 1) {
              *(int *)(unsigned)((int)puVar17 + -0x91c) = ar4;
              *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = 0x134;
              *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = *(undefined4 *)(unsigned)((int)puVar17 + -0x91c);
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa68) + *(int *)(unsigned)((int)puVar17 + -0x91c)) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa64) + 0x134) + 2;
              iVar15 = *(int *)(unsigned)(uint)ar5[6];
              pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(iVar15 + 0x128));
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)pcVar10))((int *)(unsigned)(uint)ar5[6],ar4 + 0x248,iVar15,pcVar10));
              uVar2 = SUB84(dVar21,0);
              if (in_FPSCR_SZ == '\0') {
                *(int *)(unsigned)((int)puVar17 + -0x6dc) = (int)(D2U(dVar19) >> 0x20);
              }
              else {
                *(double *)(unsigned)((int)puVar17 + -0x6dc) = dVar19;
              }
              puVar3 = (undefined4 *)(unsigned)(uint)ar5[6];
              pdVar6 = (double *)(unsigned)*puVar3;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)pdVar6 + 0x184))))(puVar3,puVar3,pdVar6,pcVar10));
              uVar9 = (undefined4)(D2U(dVar19) >> 0x20);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unsigned)((int)puVar17 + -0x6e0) = uVar9;
                dVar19 = CONCAT44D(uVar9,*(undefined4 *)(unsigned)((int)puVar17 + -0x6dc));
                dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x6e0),uVar2);
              }
              else {
                *(double *)(unsigned)((int)puVar17 + -0x6e0) = dVar19;
                in_xd0 = *(undefined8 *)(unsigned)((int)puVar17 + -0x6dc);
                dVar21 = *(double *)(unsigned)((int)puVar17 + -0x6e0);
              }
              if (in_FPSCR_PR == '\0') {
                dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                          F32LO(dVar19) + F32HI(dVar21));
              }
              else {
                dVar19 = dVar19 + dVar21;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar21 = CONCAT44D(0x3f000000,SUB84(dVar21,0));
              }
              else {
                dVar21 = 2.8254433577314434e+192;
              }
              if (in_FPSCR_PR == '\0') {
                dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                          F32LO(dVar19) * F32HI(dVar21));
              }
              else {
                dVar19 = dVar19 * dVar21;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(unsigned)(ar4 + 0x24c) = SUB84(dVar19,0);
              }
              else {
                *(undefined8 *)(unsigned)(ar4 + 0x24c) = in_xd0;
              }
            }
            else if (iVar15 == 2) {
              puVar13 = (undefined8 *)(unsigned)(ar4 + 0x248);
              if (in_FPSCR_SZ == '\0') {
                dVar19 = CONCAT44D(0x44c80000,SUB84(dVar21,0));
                dVar21 = CONCAT44D(0x44c80000,*(undefined4 *)(unsigned)puVar13);
              }
              else {
                in_xd0 = *puVar13;
                dVar19 = -7.444220866666504e-251;
                dVar21 = dVar19;
              }
              if (in_FPSCR_PR == '\0') {
                uVar2 = SUB84(dVar19,0);
              }
              else {
                uVar2 = SUB84(dVar19 - dVar21,0);
              }
              pcVar10 = ((void *)0x8c010e38);
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c010e38(piVar1,((void *)0x8c010e38),pdVar6,puVar13));
              if (in_FPSCR_SZ == '\0') {
                *(int *)(unsigned)((int)puVar17 + -0x6e4) = (int)(D2U(dVar21) >> 0x20);
                dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x248),uVar2);
                dVar21 = CONCAT44D(0x44898000,SUB84(dVar21,0));
              }
              else {
                *(double *)(unsigned)((int)puVar17 + -0x6e4) = dVar21;
                dVar19 = *(double *)(unsigned)(ar4 + 0x248);
                dVar21 = 1.91885230228893e-311;
              }
              if (in_FPSCR_PR == '\0') {
                uVar2 = SUB84(dVar19,0);
              }
              else {
                uVar2 = SUB84(dVar19 - dVar21,0);
              }
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c010e38(piVar1,pcVar10,pdVar6,puVar13));
              if (in_FPSCR_SZ == '\0') {
                *(int *)(unsigned)((int)puVar17 + -0x6e8) = (int)(D2U(dVar21) >> 0x20);
                dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x6e4),uVar2);
                dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x6e8),SUB84(dVar21,0));
              }
              else {
                *(double *)(unsigned)((int)puVar17 + -0x6e8) = dVar21;
                dVar22 = *(double *)(unsigned)((int)puVar17 + -0x6e4);
                dVar19 = *(double *)(unsigned)((int)puVar17 + -0x6e8);
              }
              if (in_FPSCR_PR == '\0') {
                bVar27 = F32HI(dVar22) < F32HI(dVar19);
              }
              else {
                bVar27 = dVar22 < dVar19;
              }
              uVar2 = SUB84(dVar22,0);
              if (bVar27) {
                if (in_FPSCR_SZ == '\0') {
                  uVar2 = 0x44c80000;
                  *(undefined4 *)(unsigned)(ar4 + 0x248) = 0x44c80000;
                }
                else {
                  in_xd4 = -7.444220866666504e-251;
                  *(undefined8 *)(unsigned)(ar4 + 0x248) = 0x8c010e3844c80000;
                }
                *(int *)(unsigned)((int)puVar17 + -0x920) = ar4;
                iVar11 = *(int *)(unsigned)((int)puVar17 + -0x920);
                *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x920) + 0x134) = *(int *)(unsigned)(iVar11 + 0x134) + 2;
                iVar15 = ar4 + 0x248;
                (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],iVar15,0x134,iVar11));
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(unsigned)((int)puVar17 + -0x6ec) = (int)(D2U(dVar19) >> 0x20);
                }
                else {
                  *(double *)(unsigned)((int)puVar17 + -0x6ec) = dVar19;
                }
                pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[6]);
                pdVar6 = ((double *)(unsigned long)*(unsigned *)(unsigned)(pcVar10 + 0x184));
                (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)(pdVar6)))((undefined4 *)(unsigned)(uint)ar5[6],iVar15,pdVar6,pcVar10));
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(unsigned)((int)puVar17 + -0x6f0) = (int)(D2U(dVar19) >> 0x20);
                  in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                             *(undefined4 *)(unsigned)((int)puVar17 + -0x6ec));
                  dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x6f0),uVar2);
                }
                else {
                  *(double *)(unsigned)((int)puVar17 + -0x6f0) = dVar19;
                  in_xd14 = *(undefined8 *)(unsigned)((int)puVar17 + -0x6ec);
                  dVar21 = *(double *)(unsigned)((int)puVar17 + -0x6f0);
                }
                if (in_FPSCR_PR == '\0') {
                  dVar22 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                            F32LO(in_dr14) + F32HI(dVar21));
                }
                else {
                  dVar22 = in_dr14 + dVar21;
                }
                if (in_FPSCR_SZ == '\0') {
                  dVar21 = CONCAT44D(0x3f000000,SUB84(dVar21,0));
                }
                else {
                  dVar21 = 1.2139784006322344e+202;
                }
                if (in_FPSCR_PR == '\0') {
                  in_dr14 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                             F32LO(dVar22) * F32HI(dVar21));
                }
                else {
                  in_dr14 = dVar22 * dVar21;
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(unsigned)(ar4 + 0x24c) = SUB84(in_dr14,0);
                }
                else {
                  *(undefined8 *)(unsigned)(ar4 + 0x24c) = in_xd14;
                }
              }
              else {
                if (in_FPSCR_SZ == '\0') {
                  dVar19 = CONCAT44D(0x44898000,SUB84(dVar19,0));
                  *(undefined4 *)(unsigned)(ar4 + 0x248) = 0x44898000;
                }
                else {
                  dVar19 = 7.05070709856793e-312;
                  *(undefined8 *)(unsigned)(ar4 + 0x248) = 0x14c44898000;
                }
                *(int *)(unsigned)((int)puVar17 + -0x924) = ar4;
                *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x924) + 0x134) =
                     *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x924) + 0x134) + 1;
                *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = ((undefined1 *)(unsigned)0x8c125d58);
                pcVar10 = (code *)(uint)ar5[6];
                if (in_FPSCR_SZ == '\0') {
                  dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar2);
                  dVar24 = CONCAT44D(0x3f99999a,SUB84(dVar24,0));
                }
                else {
                  dVar21 = *(double *)(unsigned)(ar4 + 0x48);
                  dVar24 = -8.36031591445238e-251;
                }
                if (in_FPSCR_PR == '\0') {
                  uVar2 = SUB84(dVar21,0);
                }
                else {
                  uVar2 = SUB84(dVar21 * dVar24,0);
                }
                pdVar6 = (double *)(unsigned)(uint)ar5[3];
                (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c032788(ar4,ar4 + 0x248,pdVar6,pcVar10));
                if (in_FPSCR_SZ == '\0') {
                  dVar21 = CONCAT44D(0x43340000,uVar2);
                  *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x43340000;
                }
                else {
                  dVar21 = -1.960381177040932e+159;
                  *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0xe101d91f43340000;
                }
              }
            }
            goto LAB_8c040722;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 3;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          iVar15 = ar5[7];
          pdVar6 = (double *)(unsigned)(iVar15 + 8);
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)pdVar6);
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),SUB84(dVar24,0));
            dVar19 = CONCAT44D(0x40800000,SUB84(dVar19,0));
          }
          else {
            in_xd4 = *pdVar6;
            dVar24 = *(double *)(unsigned)(ar4 + 0x48);
            dVar19 = 5.58562756529137e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = F32HI(dVar24) * F32HI(dVar19);
            dVar24 = CONCAT44D(fVar20,SUB84(dVar24,0));
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) - fVar20);
          }
          else {
            dVar24 = dVar24 * dVar19;
            dVar21 = dVar21 - dVar24;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x28) = SUB84(dVar21,0);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x28) = in_xd4;
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))
                    ((int *)(unsigned)(uint)ar5[6],(undefined1 *)(unsigned)((int)puVar17 + -0x30),pdVar6,iVar15));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x6f4) = (int)(D2U(dVar19) >> 0x20);
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x6f4),SUB84(dVar19,0));
            *(undefined4 *)(unsigned)((int)puVar17 + -0x2c) = *(undefined4 *)(unsigned)((int)puVar17 + -0x6f4);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x6f4) = dVar19;
            dVar19 = *(double *)(unsigned)((int)puVar17 + -0x6f4);
            *(double *)(unsigned)((int)puVar17 + -0x2c) = dVar19;
          }
          pcVar10 = (code *)(ar4 + 0x248);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(pcVar10,(undefined1 *)(unsigned)((int)puVar17 + -0x30),((void *)0x8c023a14),pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0x928) = ar4;
          pdVar6 = (double *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x928) + 0x134) + 1);
          *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x928) + 0x134) = pdVar6;
LAB_8c040722:
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        }
      }
      if (iVar15 == 1) {
        pcVar10 = pcVar14;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c054b74(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x248,pcVar14));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6f8) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x6f8) == 0) {
          *(int *)(unsigned)((int)puVar17 + -0x92c) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x92c));
          *(int *)(unsigned)(pcVar10 + 0x134) = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x92c) + 0x134) + 2;
        }
      }
      else if (iVar15 == 2) {
        pcVar10 = pcVar14;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c054d6c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x248,pcVar14));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6fc) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x6fc) == 0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)in_dr14 & 0xffffffff;
          }
          *(int *)(unsigned)((int)puVar17 + -0x930) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x930));
          *(int *)(unsigned)(pcVar10 + 0x134) = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x930) + 0x134) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
        }
      }
      else if (iVar15 == 3) {
        *(undefined4 *)(unsigned)(ar4 + 700) = 1;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0526a0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar14,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x700) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x700) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          iVar16 = 0;
        }
      }
      break;
    case 0x13:
      pcVar10 = (code *)0x214;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c054a14(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((void *)0x8c054a14),0x214));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6bc) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x6bc) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
          iVar16 = 0;
        }
      }
      break;
    case 0x14:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      if (pcVar14 != (code *)0x1) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar17 + -0x30),*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10));
      }
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057280(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar14,pcVar10));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x828) = uVar2;
      if (*(int *)(unsigned)((int)puVar17 + -0x828) == 0) {
        iVar16 = 0;
        pcVar10 = (code *)0x214;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    case 0x15:
      if (pcVar14 == (code *)0x1) {
        if (*(int *)(unsigned)(ar4 + 300) == 0) {
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,pcVar10,((void *)0x8c057164),pcVar10));
          if (*(int *)(unsigned)(ar4 + 0x2b8) == 3) {
            *(int *)(unsigned)((int)puVar17 + -0x984) = ar4;
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) = *(undefined4 *)(unsigned)((int)puVar17 + -0x984);
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa6c) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x984) + 300) + 1;
          }
          else {
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = *(undefined4 *)(unsigned)(ar4 + 0x2b8);
            if (*(int *)(unsigned)((int)puVar17 + -0xa68) == 2) {
              *(int *)(unsigned)((int)puVar17 + -0x988) = ar4;
              *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = *(undefined4 *)(unsigned)((int)puVar17 + -0x988);
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa64) + 300) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x988) + 300) + 1;
              *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
              uVar2 = 0xffffffff;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0));
              pcVar10 = (code *)0xb0;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar2,0xb0));
            }
          }
        }
        else if (*(int *)(unsigned)(ar4 + 300) == 1) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),0x40400000);
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c032ab0(ar4,ar5_00,0x2e8,pcVar10));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x798) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x798) = dVar19;
          }
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,pdVar6,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x79c) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x79c) == 1) {
            uVar12 = 0;
            uVar9 = 0xffffffff;
            uVar2 = 0x1d;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12));
            *(int *)(unsigned)((int)puVar17 + -0x98c) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x98c) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x98c) + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
            pcVar10 = (code *)0x0;
            iVar16 = 0;
          }
        }
      }
      else if (*(int *)(unsigned)(ar4 + 300) == 0) {
        uVar2 = *(undefined4 *)(unsigned)(uint)ar5[1];
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x30);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,puVar5,uVar2,pcVar10));
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar5,uVar2,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x790) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x790) == 1) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2c) = in_xd14;
          }
          *(int *)(unsigned)((int)puVar17 + -0x980) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x980));
          *(int *)(unsigned)(pcVar10 + 300) = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x980) + 300) + 1;
        }
      }
      else if (*(int *)(unsigned)(ar4 + 300) == 1) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031748(ar4,ar5_00,0x2e8,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0xa0) = in_xd0;
        }
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c05ae54(ar4,ar5_00,pdVar6,pcVar10));
        uVar2 = *(undefined4 *)(unsigned)(uint)ar5[1];
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar17 + -0x30),uVar2,pcVar10));
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031de8(ar4,0x10,uVar2,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x794) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x794) == 0) {
          iVar16 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
      break;
    case 0x16:
      if (pcVar14 != (code *)0x1) {
        pdVar6 = ((double *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        ar5_00 = (undefined *)(unsigned)((int)puVar17 + -0x30);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,ar5_00,pdVar6,pcVar10));
      }
LAB_8c04475a:
      uVar9 = SUB84(dVar24,0);
      uVar2 = SUB84(dVar21,0);
      iVar15 = *(int *)(unsigned)(ar4 + 300);
      if ((0xd < iVar15) || (iVar15 < 0)) goto switchD_8c04477e_caseD_6;
      switch((&(*(undefined1 *)(unsigned)0x8c044790))[iVar15]) {
      case 0x8c0447c8:
        if (pcVar14 == (code *)0x1) {
          *(int *)(unsigned)((int)puVar17 + -0x9ec) = ar4;
          pdVar6 = (double *)(unsigned)0x12c;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x9ec));
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9ec) + 300) = *(int *)(unsigned)(pcVar10 + 300) + 1;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 10;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
        goto LAB_8c04475a;
      case 0x8c044814:
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pdVar6,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x854) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x854) == 0) {
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
          else {
            *(int *)(unsigned)((int)puVar17 + -0x9f0) = ar4;
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = *(undefined4 *)(unsigned)((int)puVar17 + -0x9f0);
            pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x9f0));
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa70) + 300) = *(int *)(unsigned)(pcVar10 + 300) + 1;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c044888:
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x4c0);
        ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0(ar4 + 0x14,(undefined1 *)(unsigned)((int)puVar17 + -0x4c0),pdVar6,pcVar10); });
        if (in_FPSCR_SZ == '\0') {
          uVar2 = uVar9;
        }
        dVar24 = 0.0;
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x4d0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz(puVar5,puVar5,pdVar6,pcVar10));
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x4e0);
        pcVar10 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0((undefined1 *)(unsigned)((int)puVar17 + -0x4d0),puVar5,pdVar6,((void *)0x8c0230f0)); });
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x4c0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022dac(puVar5,(undefined1 *)(unsigned)((int)puVar17 + -0x4e0),puVar5,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar17 + -0x858) = (int)(D2U(dVar19) >> 0x20);
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x858),uVar2);
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),0x40a00000);
        }
        else {
          *(double *)(unsigned)((int)puVar17 + -0x858) = dVar19;
          dVar21 = *(double *)(unsigned)((int)puVar17 + -0x858);
        }
        if (in_FPSCR_PR == '\0') {
          bVar27 = SUB84(dVar24,0) < F32HI(dVar21);
        }
        else {
          bVar27 = dVar24 < dVar21;
        }
        *(uint *)(unsigned)((int)puVar17 + -0x680) = (uint)bVar27;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x4e0),0xffffffff,puVar5,pcVar10));
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x4d0),0xffffffff,puVar5,pcVar10));
        uVar2 = 0xffffffff;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x4c0),0xffffffff,puVar5,pcVar10));
        if (*(int *)(unsigned)((int)puVar17 + -0x680) == 0) {
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), rand_range(ar4,0xfa,400,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x85c) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0x280) = *(undefined4 *)(unsigned)((int)puVar17 + -0x85c);
          uVar12 = 0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1a;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12));
          *(int *)(unsigned)((int)puVar17 + -0x9f8) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x9f8));
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9f8) + 300);
          *(int *)(unsigned)(pcVar10 + 300) = *(int *)(unsigned)((int)puVar17 + -0xa6c) + 2;
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
        else {
          puVar8 = (undefined1 *)(unsigned)((int)puVar17 + -0x4f0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz(puVar8,uVar2,puVar5,puVar8));
          *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x500);
          uVar2 = *(undefined4 *)(unsigned)(uint)ar5[1];
          ({ unsigned long t0_ = (unsigned long)(
                   *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_add(uVar2,(undefined1 *)(unsigned)((int)puVar17 + -0x4f0),uVar2,puVar8); });
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x500);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar17 + -0xd8),puVar5,uVar2,puVar5));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x500),0xffffffff,uVar2,puVar5));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x4f0),0xffffffff,uVar2,puVar5));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057b6c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0xd8),puVar5));
          *(int *)(unsigned)((int)puVar17 + -0x9f4) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x9f4));
          iVar15 = *(int *)(unsigned)((int)puVar17 + -0x9f4);
          *(int *)(unsigned)(pcVar10 + 300) = *(int *)(unsigned)(iVar15 + 300) + 1;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xd8),0xffffffff,iVar15,pcVar10));
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c044ad0:
        *(unsigned *)(unsigned)((int)puVar17 + -0xa68) = ((void *)0x8c057e58);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa68))))(ar4,ar5_00,pdVar6,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = uVar2;
        *(undefined4 *)(unsigned)((int)puVar17 + -0x860) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa64);
        if (*(int *)(unsigned)((int)puVar17 + -0x860) == 0) {
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
          else {
            *(int *)(unsigned)((int)puVar17 + -0x9fc) = ar4;
            pcVar10 = (code *)0x12c;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9fc) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9fc) + 300) + -1;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c044b44:
        uVar9 = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 1;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0x2fc,1,pcVar10));
        uVar12 = SUB84(dVar19,0);
        *(int *)(unsigned)((int)puVar17 + -0xa00) = ar4;
        uVar2 = *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa00) + 0x280);
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa04) = uVar2;
        *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa00) + 0x280) = *(int *)(unsigned)((int)puVar17 + -0xa04) + -1;
        if (*(int *)(unsigned)((int)puVar17 + -0xa04) < 0) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03f39c(*ar5,uVar2,uVar9,0x280));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
            pcVar10 = (code *)0x0;
            uVar2 = 0x11;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
          }
          else {
            uVar2 = 0x22;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x22,0xffffffff,0));
            pcVar10 = (code *)0x7;
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 7;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar25 = CONCAT44(0x3f4ccccd,uVar12);
          }
          else {
            uVar25 = 0x8c032ab03f4ccccd;
          }
          pcVar4 = ((void *)0x8c032ab0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c032ab0(ar4,uVar2,((void *)0x8c032ab0),pcVar10));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x864) = (int)((ulonglong)uVar25 >> 0x20);
            *(undefined4 *)(unsigned)(ar4 + 0x278) = *(undefined4 *)(unsigned)((int)puVar17 + -0x864);
          }
          else {
            *(undefined8 *)(unsigned)((int)puVar17 + -0x864) = uVar25;
            *(undefined8 *)(unsigned)(ar4 + 0x278) = *(undefined8 *)(unsigned)((int)puVar17 + -0x864);
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,pcVar4,pcVar10));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          *(int *)(unsigned)((int)puVar17 + -0xa08) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa08) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa08) + 300) + 1;
        }
        else {
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x328));
          if (pcVar10 == (code *)0x0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c044cc8:
        if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
          pcVar10 = (code *)(ar4 + 0xb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033d90(pcVar10,ar5_00,((void *)0x8c033d88),pcVar10));
        }
        else {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_00,pdVar6,pcVar10));
        }
        if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          iVar16 = 0;
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c044d7c:
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x510);
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,pdVar6,pcVar10); });
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x520);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz(puVar5,ar5_00,pdVar6,puVar5));
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x530);
        ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0((undefined1 *)(unsigned)((int)puVar17 + -0x520),ar5_00,pdVar6,puVar5); });
        pcVar10 = ((void *)0x8c022dac);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022dac((undefined1 *)(unsigned)((int)puVar17 + -0x510),(undefined1 *)(unsigned)((int)puVar17 + -0x530),
                     ((void *)0x8c022dac),puVar5));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar17 + -0x868) = (int)(D2U(dVar19) >> 0x20);
          *(undefined4 *)(unsigned)(ar4 + 0x224) = *(undefined4 *)(unsigned)((int)puVar17 + -0x868);
        }
        else {
          *(double *)(unsigned)((int)puVar17 + -0x868) = dVar19;
          *(undefined8 *)(unsigned)(ar4 + 0x224) = *(undefined8 *)(unsigned)((int)puVar17 + -0x868);
        }
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x530),0xffffffff,pcVar10,puVar5));
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x520);
        pcVar4 = ((void *)0x8c022cb0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(puVar5,0xffffffff,((void *)0x8c022cb0),puVar5));
        uVar2 = 0xffffffff;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x510),0xffffffff,pcVar4,puVar5));
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x540),uVar2,pcVar4,puVar5));
        pcVar10 = ((void *)0x8c0231c8);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0231c8((undefined1 *)(unsigned)((int)puVar17 + -0x540),((void *)0x8c0231c8),pcVar4,puVar5));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar17 + -0x86c) = (int)(D2U(dVar19) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)puVar17 + -0x86c) = dVar19;
        }
        iVar15 = ar4 + 0x14;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0231c8(iVar15,pcVar10,pcVar4,puVar5));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar17 + -0x870) = (int)(D2U(dVar19) >> 0x20);
          uVar25 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar17 + -0x870),SUB84(dVar19,0));
        }
        else {
          *(double *)(unsigned)((int)puVar17 + -0x870) = dVar19;
          uVar25 = *(undefined8 *)(unsigned)((int)puVar17 + -0x870);
        }
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c010e38(iVar15,pcVar10,pcVar4,puVar5));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar17 + -0x874) = (int)((ulonglong)uVar25 >> 0x20);
          *(undefined4 *)(unsigned)(ar4 + 0x228) = *(undefined4 *)(unsigned)((int)puVar17 + -0x874);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar17 + -0x874) = uVar25;
          *(undefined8 *)(unsigned)(ar4 + 0x228) = *(undefined8 *)(unsigned)((int)puVar17 + -0x874);
        }
        uVar2 = 0xffffffff;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x540),0xffffffff,pcVar4,puVar5));
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031748(ar4,uVar2,pcVar4,puVar5));
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
        puVar13 = (undefined8 *)(unsigned)(ar4 + 0x224);
        if (in_FPSCR_SZ == '\0') {
          uVar25 = CONCAT44(*(undefined4 *)(unsigned)puVar13,0x40a00000);
        }
        else {
          uVar25 = *puVar13;
        }
        if (in_FPSCR_PR == '\0' && (float)uVar25 < F32HI(uVar25)) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x550),uVar2,puVar13,puVar5));
          pcVar10 = ((void *)0x8c023334);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c023334(ar4 + 0x14,(undefined1 *)(unsigned)((int)puVar17 + -0x550),puVar13,((void *)0x8c023334)
                              ));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x878) = uVar2;
          uVar2 = *(undefined4 *)(unsigned)((int)puVar17 + -0x878);
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar2;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x550),0xffffffff,uVar2,pcVar10));
          if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
            uVar2 = 7;
            uVar9 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
            *(undefined4 *)(unsigned)((int)puVar17 + -0x87c) = uVar9;
            if (*(int *)(unsigned)((int)puVar17 + -0x87c) != 6) {
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar4 + 0xb0,((void *)0x8c033e68)));
            }
          }
          else {
            uVar9 = 0;
            uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
            *(undefined4 *)(unsigned)((int)puVar17 + -0x880) = uVar2;
            if (*(int *)(unsigned)((int)puVar17 + -0x880) != 6) {
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,0xb0,uVar9));
            }
          }
          *(int *)(unsigned)((int)puVar17 + -0xa0c) = ar4;
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa0c) + 300);
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa0c) + 300) = *(int *)(unsigned)((int)puVar17 + -0xa70) + 1;
          pcVar10 = (code *)0xb0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar4 + 0xb0,0xb0));
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0xc;
          uVar2 = 0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          pcVar10 = (code *)0xb0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,((void *)0x8c033e68),0xb0));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
switchD_8c04477e_caseD_6:
        *(undefined4 *)(unsigned)(ar4 + 0x328) = 0;
        break;
      case 0x8c04509c:
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x560),ar5_00,pdVar6,pcVar10));
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x570);
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x560);
        uVar2 = *(undefined4 *)(unsigned)(uint)ar5[1];
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_add(uVar2,puVar5,pdVar6,uVar2); });
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), get_field_1c_026dd8(ar4 + 0xb0,puVar5,ar4 + 0xb0,uVar2));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x884) = uVar2;
        uVar9 = *(undefined4 *)(unsigned)((int)puVar17 + -0x884);
        uVar7 = 0xb0;
        uVar12 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar9,uVar2,0xb0));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x888) = uVar12;
        uVar9 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), get_field_1c_026dd8(ar4 + 0xb0,uVar9,uVar2,uVar7));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x88c) = uVar9;
        uVar9 = *(undefined4 *)(unsigned)((int)puVar17 + -0x88c);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar9,uVar2,uVar7));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x890) = uVar2;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_set_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x57c),uVar9,
                     *(undefined4 *)(unsigned)((int)puVar17 + -0x890),0x224));
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x57c);
        *(unsigned *)(unsigned)((int)puVar17 + -0xa78) = (undefined1 *)(unsigned)((int)puVar17 + -0x58c);
        iVar15 = ar4 + 0x14;
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x570);
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa78)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c031eb0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],puVar5,iVar15); })
        ;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x14,(undefined1 *)(unsigned)((int)puVar17 + -0x58c),puVar5,iVar15));
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x58c),0xffffffff,puVar5,iVar15));
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), object_dtor_delete((undefined1 *)(unsigned)((int)puVar17 + -0x57c),0xffffffff,puVar5,iVar15));
        pcVar10 = (code *)0xffffffff;
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x570);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(puVar5,0xffffffff,puVar5,0xffffffff));
        uVar2 = 0xffffffff;
        *(unsigned *)(unsigned)((int)puVar17 + -0xa6c) = (undefined1 *)(unsigned)((int)puVar17 + -0x560);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(*(undefined4 *)(unsigned)((int)puVar17 + -0xa6c),0xffffffff,puVar5,pcVar10));
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,puVar5,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x894) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x894) == 1) {
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = 0;
          uVar9 = *(undefined4 *)(unsigned)((int)puVar17 + -0xa68);
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = 0xffffffff;
          uVar2 = 0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,*(undefined4 *)(unsigned)((int)puVar17 + -0xa64),uVar9))
          ;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,((void *)0x8c033e68),uVar9));
          *(undefined4 *)(unsigned)(ar4 + 300) = 0xc;
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), rand_range(ar4,0xfa,400,uVar9));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x898) = uVar2;
          pcVar10 = (code *)0x280;
          *(undefined4 *)(unsigned)(ar4 + 0x280) = *(undefined4 *)(unsigned)((int)puVar17 + -0x898);
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c045328:
        *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 1;
        *(int *)(unsigned)((int)puVar17 + -0xa10) = ar4;
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0xa10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa14) = *(undefined4 *)(unsigned)(pcVar10 + 0x280);
        *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa10) + 0x280) = *(int *)(unsigned)((int)puVar17 + -0xa14) + -1;
        if (*(int *)(unsigned)((int)puVar17 + -0xa14) < 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          uVar2 = 0x10;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
          pcVar10 = (code *)(ar4 + 0xb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(pcVar10,uVar2,((void *)0x8c033e68),pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0xa18) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa18) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa18) + 300) + 1;
        }
        else if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          iVar16 = 0;
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c0453ec:
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,pdVar6,pcVar10));
        *(unsigned *)(unsigned)((int)puVar17 + -0x89c) = pcVar10;
        if (*(int *)(unsigned)((int)puVar17 + -0x89c) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          iVar16 = 0;
        }
      case 0x8c045422:
        goto switchD_8c04477e_caseD_6;
      }
      break;
    case 0x17:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      iVar15 = *(int *)(unsigned)(ar4 + 300);
      if (iVar15 == 0) {
        pcVar10 = (code *)0x214;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        *(int *)(unsigned)((int)puVar17 + -0xa1c) = ar4;
        *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa1c) + 300) =
             *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa1c) + 300) + 1;
      }
      else {
        if (iVar15 == 1) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x248,*(undefined4 *)(unsigned)(uint)ar5[1],0x2e8,pcVar10));
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x250) = 0xc3fa0000;
            *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x43340000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x250) = 0x24cc3fa0000;
            *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0x32043340000;
          }
          *(undefined4 *)(unsigned)(ar4 + 800) = 0;
          *(int *)(unsigned)((int)puVar17 + -0xa20) = ar4;
          pcVar10 = (code *)0x12c;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa20) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa20) + 300) + 1;
        }
        else if (iVar15 != 2) {
          if (iVar15 == 3) {
            uVar2 = CAnimBody_AdvanceFrame_wrapper
                              (ar4 + 0xb0,0xb0,((void *)0x8c026858),pcVar10);
            *(undefined4 *)(unsigned)((int)puVar17 + -0x8b0) = uVar2;
            if (*(int *)(unsigned)((int)puVar17 + -0x8b0) == 1) {
              *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
              iVar16 = 0;
              *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = 0;
              *(undefined4 *)(unsigned)(ar4 + 300) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa70);
              pcVar10 = (code *)0xffffffff;
              *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0xffffffff;
              *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
            }
          }
          break;
        }
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04c314(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x248,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8ac) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8ac) == 0) {
          uVar2 = 0x1a;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          pcVar10 = ((void *)0x8c033e68);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar4 + 0xb0,((void *)0x8c033e68)));
          *(int *)(unsigned)((int)puVar17 + -0xa24) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa24) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa24) + 300) + 1;
        }
      }
      break;
    case 0x19:
      *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = 0x214;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa70) + ar4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      pcVar10 = pcVar14;
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x788) = uVar2;
      if (*(int *)(unsigned)((int)puVar17 + -0x788) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        pcVar10 = (code *)0x0;
        iVar16 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    case 0x1a:
      *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0564c4(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x78c) = uVar2;
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x78c));
      if (pcVar10 == (code *)0x0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        iVar16 = 0;
        *(undefined4 *)(unsigned)(ar4 + 700) = 0;
        pcVar10 = (code *)0x1;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    case 0x1b:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x324) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      pcVar10 = (code *)0x128;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        iVar16 = 2;
      }
      else {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x1cc))))((int *)(unsigned)(uint)ar5[6],*(int *)(unsigned)(ar4 + 0x128),0,0x128));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x834) = uVar2;
        pcVar10 = pcVar14;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c058d60(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],*(int *)(unsigned)((int)puVar17 + -0x834) + 4,pcVar14));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x838) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x838) == 0) {
          iVar16 = 0;
          pcVar10 = (code *)0x0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        }
      }
      break;
    case 0x1c:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x324) = 1;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        pcVar10 = (code *)0x2;
        iVar16 = 2;
      }
      else {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x1cc))))((int *)(unsigned)(uint)ar5[6],ar5_00,0,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x844) = uVar2;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = *(undefined4 *)(unsigned)(ar4 + 0x124);
        *(int *)(unsigned)((int)puVar17 + -0xa78) = *(int *)(unsigned)((int)puVar17 + -0x844) + 4;
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0593cc(ar4,ar5[6],*ar5,*(undefined4 *)(unsigned)(uint)ar5[1]));
        *(unsigned *)(unsigned)((int)puVar17 + -0x848) = pcVar10;
        if (*(int *)(unsigned)((int)puVar17 + -0x848) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x324) = 0;
          iVar16 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        }
      }
      break;
    case 0x1d:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x324) = 1;
      pcVar10 = (code *)0x2e8;
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        iVar16 = 2;
      }
      else {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x1cc))))((int *)(unsigned)(uint)ar5[6],ar5_00,1,0x2e8));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x83c) = uVar2;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = 0x1d;
        *(int *)(unsigned)((int)puVar17 + -0xa78) = *(int *)(unsigned)((int)puVar17 + -0x83c) + 4;
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0593cc(ar4,ar5[6],*ar5,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x840) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x840) == 0) {
          pcVar10 = (code *)0x0;
          *(undefined4 *)(unsigned)(ar4 + 0x324) = 0;
          iVar16 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        }
      }
      break;
    case 0x1e:
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else if (*(int *)(unsigned)(ar4 + 300) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        pcVar10 = pcVar14;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x82c) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x82c) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          *(int *)(unsigned)((int)puVar17 + -0x9e8) = ar4;
          pcVar10 = (code *)(*(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9e8) + 300) + 1);
          *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9e8) + 300) = pcVar10;
        }
      }
      else if (*(int *)(unsigned)(ar4 + 300) == 1) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03f460((undefined1 *)(unsigned)((int)puVar17 + -0x4b0),ar5[7],ar5[7],pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) = 0xffffffff;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c);
        pcVar10 = (code *)((int)puVar17 + -0x4b0);
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x30);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c059fc4(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],puVar5,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x830) = uVar2;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = *(undefined4 *)(unsigned)((int)puVar17 + -0x830);
        *(uint *)(unsigned)((int)puVar17 + -0xa64) = (uint)(*(int *)(unsigned)((int)puVar17 + -0xa68) == 0);
        *(undefined4 *)(unsigned)((int)puVar17 + -0x67c) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa64);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x4b0),0xffffffff,puVar5,pcVar10))
        ;
        if (*(int *)(unsigned)((int)puVar17 + -0x67c) != 0) {
          iVar16 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
      break;
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        pcVar10 = (code *)0x2;
        iVar16 = 2;
      }
      else {
        iVar15 = *(int *)(unsigned)(ar4 + 300);
        if ((iVar15 < 6) && (-1 < iVar15)) {
                    
                    
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)(((code **)&(*(undefined1 *)(unsigned)0x8c042ce0))[iVar15])))(vr4,vr5,vr6,vr7));
          return uVar2;
        }
      }
      break;
    case 0x23:
    case 0x24:
    case 0x27:
    case 0x28:
      pcVar10 = (code *)0x0;
      *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        pcVar10 = (code *)0x12c;
        iVar15 = *(int *)(unsigned)(ar4 + 300);
        if (iVar15 == 0) {
          pcVar10 = pcVar14;
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x7a8) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x7a8) == 0) {
            *(int *)(unsigned)((int)puVar17 + -0x990) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x990) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x990) + 300) + 1;
          }
        }
        else if (iVar15 == 1) {
          pcVar10 = ((void *)0x8c057164);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],1,((void *)0x8c057164)));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x7ac) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x7ac) == 0) {
            *(int *)(unsigned)((int)puVar17 + -0x994) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x994) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x994) + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            pcVar10 = (code *)0x1;
            *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          }
        }
        else if (iVar15 == 2) {
          uVar12 = 700;
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(uint)ar5[7],uVar9);
            dVar21 = CONCAT44D(0x40800000,SUB84(dVar19,0));
          }
          else {
            dVar24 = *(double *)(unsigned)(uint)ar5[7];
            dVar21 = 1.25675615172221e-311;
          }
          if (in_FPSCR_PR == '\0') {
            dVar24 = CONCAT44D(F32HI(dVar24) /
                                      F32HI(dVar21),SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 / dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(ar4 + 0x248) = (int)(D2U(dVar24) >> 0x20);
            uVar25 = CONCAT44(0x44898000,uVar2);
            *(undefined4 *)(unsigned)(ar4 + 0x250) = 0x44898000;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x248) = dVar24;
            uVar25 = 0xa2044898000;
            *(undefined8 *)(unsigned)(ar4 + 0x250) = 0xa2044898000;
          }
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x50);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],puVar5,700,300));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x7b0) = (int)(D2U(dVar21) >> 0x20);
            *(undefined4 *)(unsigned)(ar4 + 0x24c) = *(undefined4 *)(unsigned)((int)puVar17 + -0x7b0);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x7b0) = dVar21;
            uVar25 = *(undefined8 *)(unsigned)((int)puVar17 + -0x7b0);
            *(undefined8 *)(unsigned)(ar4 + 0x24c) = uVar25;
            in_xd4 = dVar21;
          }
          uVar18 = (undefined4)uVar25;
          uVar2 = 0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x328),puVar5,uVar12,pcVar10));
          uVar7 = SUB84(dVar21,0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x328),uVar12,pcVar10));
          uVar9 = 0xffffffff;
          pcVar4 = ((void *)0x8c022cb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x328),0xffffffff,((void *)0x8c022cb0),pcVar10));
          iVar15 = *(int *)(unsigned)(ar4 + 0x124);
          if (iVar15 < 0x33) {
            if (iVar15 < 0x32) {
              pcVar10 = (code *)0x28;
              if ((iVar15 < 0x29) && (0x22 < iVar15)) {
                if (iVar15 == 0x23) {
                  if (in_FPSCR_SZ == '\0') {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = 0xbf800000;
                  }
                  pcVar4 = ((void *)0x8c022ce8);
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x338),uVar9,((void *)0x8c022ce8),0x28));
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x338),pcVar4,pcVar10));
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x338),0xffffffff,pcVar4,pcVar10));
                  *(int *)(unsigned)((int)puVar17 + -0x998) = ar4;
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = CONCAT44D(*(undefined4 *)(unsigned)
                                               (*(int *)(unsigned)((int)puVar17 + -0x998) + 0x248),uVar2);
                    dVar21 = CONCAT44D(0x42d20000,uVar7);
                  }
                  else {
                    dVar24 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x998) + 0x248);
                    dVar21 = -7.123181745823468e+261;
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar24 = CONCAT44D(F32HI(dVar24) +
                                              F32HI(dVar21),SUB84(dVar24,0));
                  }
                  else {
                    dVar24 = dVar24 + dVar21;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x998) + 0x248) =
                         (int)(D2U(dVar24) >> 0x20);
                  }
                  else {
                    *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x998) + 0x248) = dVar24;
                  }
                }
                else if (iVar15 == 0x24) {
                  if (in_FPSCR_SZ == '\0') {
                    uVar2 = uVar18;
                  }
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x358),uVar9,pcVar4,0x28));
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x358),pcVar4,pcVar10));
                  *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = 0xffffffff;
                  pcVar10 = ((void *)0x8c022cb0);
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x358),
                            *(undefined4 *)(unsigned)((int)puVar17 + -0xa70),pcVar4,((void *)0x8c022cb0)));
                  *(int *)(unsigned)((int)puVar17 + -0x9a0) = ar4;
                  pcVar4 = (code *)(*(int *)(unsigned)((int)puVar17 + -0x9a0) + 0x248);
                  if (in_FPSCR_SZ == '\0') {
                    uVar9 = *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a0) + 0x248);
                    dVar24 = CONCAT44D(0x42d20000,uVar9);
                    dVar21 = CONCAT44D(uVar9,uVar2);
                  }
                  else {
                    dVar21 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a0) + 0x248);
                    dVar24 = -1.424828541595511e+262;
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = CONCAT44D(F32HI(dVar21) -
                                              F32HI(dVar24),SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 - dVar24;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(unsigned)pcVar4 = (int)(D2U(dVar21) >> 0x20);
                  }
                  else {
                    *(double *)(unsigned)pcVar4 = dVar21;
                  }
                }
                else if (iVar15 == 0x27) {
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = -0.0078125;
                  }
                  else {
                    dVar24 = 3.88908364136857e-311;
                  }
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x348),uVar9,pcVar4,0x28));
                  puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x348);
                  pcVar10 = (code *)(ar4 + 0x54);
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(pcVar10,puVar5,puVar5,pcVar10));
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x348),0xffffffff,puVar5,pcVar10));
                  *(int *)(unsigned)((int)puVar17 + -0x99c) = ar4;
                  pcVar4 = (code *)0x248;
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),0x42dc0000);
                    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)
                                               (*(int *)(unsigned)((int)puVar17 + -0x99c) + 0x248),uVar7);
                  }
                  else {
                    dVar21 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x99c) + 0x248);
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar24),
                                              SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar24;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x99c) + 0x248) =
                         (int)(D2U(dVar21) >> 0x20);
                  }
                  else {
                    *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x99c) + 0x248) = dVar21;
                  }
                }
                else if (iVar15 == 0x28) {
                  dVar24 = 0.0;
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = in_xd4;
                  }
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x368),
                                (undefined1 *)(unsigned)((int)puVar17 + -0x368),pcVar4,0x28));
                  pcVar10 = ((void *)0x8c023a14);
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x368),pcVar4,((void *)0x8c023a14)));
                  pcVar4 = (code *)((int)puVar17 + -0x368);
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(pcVar4,0xffffffff,pcVar4,pcVar10));
                  *(int *)(unsigned)((int)puVar17 + -0x9a4) = ar4;
                  if (in_FPSCR_SZ == '\0') {
                    dVar21 = CONCAT44D(0x42dc0000,
                                              *(undefined4 *)(unsigned)
                                               (*(int *)(unsigned)((int)puVar17 + -0x9a4) + 0x248));
                  }
                  else {
                    dVar24 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a4) + 0x248);
                    dVar21 = -1.7995873979860088e+258;
                  }
                  if (in_FPSCR_PR == '\0') {
                    fVar20 = F32LO(dVar21) - F32HI(dVar21);
                  }
                  else {
                    fVar20 = SUB84(dVar21 - dVar21,0);
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(float *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a4) + 0x248) = fVar20;
                  }
                  else {
                    *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a4) + 0x248) = dVar24;
                  }
                }
              }
            }
            else {
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x388),uVar9,
                            (undefined1 *)(unsigned)((int)puVar17 + -0x388),pcVar10));
              pcVar4 = (code *)((int)puVar17 + -0x388);
              pcVar10 = ((void *)0x8c023a14);
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,pcVar4,pcVar4,((void *)0x8c023a14)));
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x388),0xffffffff,pcVar4,pcVar10));
              *(int *)(unsigned)((int)puVar17 + -0x9a8) = ar4;
              if (in_FPSCR_SZ == '\0') {
                dVar24 = CONCAT44D(0x43140000,
                                          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a8) + 0x248));
              }
              else {
                in_xd4 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a8) + 0x248);
                dVar24 = 3.7182926394388e-311;
              }
              if (in_FPSCR_PR == '\0') {
                fVar20 = F32LO(dVar24) + F32HI(dVar24);
              }
              else {
                fVar20 = SUB84(dVar24 + dVar24,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a8) + 0x248) = fVar20;
              }
              else {
                *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a8) + 0x248) = in_xd4;
              }
            }
          }
          else if (iVar15 == 0x33) {
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x378),uVar9,pcVar4,pcVar10));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x378),pcVar4,pcVar10));
            pcVar10 = (code *)0xffffffff;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x378),0xffffffff,pcVar4,0xffffffff));
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar17 + -0x398),ar4 + 0x54,pcVar4,pcVar10));
          pcVar10 = (code *)((int)puVar17 + -0x398);
          iVar15 = ar4 + 0x248;
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],iVar15,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x7b4) = uVar2;
          *(uint *)(unsigned)((int)puVar17 + -0x670) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x7b4) == 0);
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x398),0xffffffff,iVar15,pcVar10));
          if (*(int *)(unsigned)((int)puVar17 + -0x670) != 0) {
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2d4,uVar2,iVar15,pcVar10));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2a8,uVar2,iVar15,pcVar10));
            *(int *)(unsigned)((int)puVar17 + -0x9ac) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9ac) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9ac) + 300) + 1;
            pcVar10 = (code *)0x0;
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) = 0xb0;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + *(int *)(unsigned)((int)puVar17 + -0xa6c),0x1a,0xffffffff,0))
            ;
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
          }
          if (*(int *)(unsigned)(ar4 + 0x290) == 1) {
            *(int *)(unsigned)((int)puVar17 + -0x9b0) = ar4;
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = *(undefined4 *)(unsigned)((int)puVar17 + -0x9b0);
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = 0x1fc;
            *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa64) + *(int *)(unsigned)((int)puVar17 + -0xa68)) =
                 *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9b0) + 0x1fc) & 0xfb;
          }
        }
        else if (iVar15 == 3) {
          pcVar10 = (code *)(ar4 + 0xb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(pcVar10,ar5_00,0xb0,pcVar10));
          iVar16 = 0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      }
      break;
    case 0x29:
      *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      pcVar10 = (code *)0x134;
      iVar15 = *(int *)(unsigned)(ar4 + 0x134);
      if ((iVar15 < 5) && (-1 < iVar15)) {
                    
                    
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)(((code **)&(*(undefined1 *)(unsigned)0x8c03ff04))[iVar15])))(vr4,vr5,vr6,vr7));
        return uVar2;
      }
      break;
    case 0x2a:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c05a54c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],0x2e8,pcVar10));
      break;
    case 0x2b:
      uVar12 = 0;
      uVar9 = 0x47;
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x47,0xffffffff,0));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x84c) = uVar2;
      iVar15 = *(int *)(unsigned)((int)puVar17 + -0x84c);
      if (iVar15 != 6) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,iVar15,uVar12));
      }
      pcVar10 = (code *)(ar4 + 0xb0);
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(pcVar10,uVar9,iVar15,pcVar10));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x850) = uVar2;
      if (*(int *)(unsigned)((int)puVar17 + -0x850) == 1) {
        iVar16 = 0;
      }
      break;
    case 0x2c:
      if (pcVar14 == (code *)0x1) {
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,pcVar10,0x2e8,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8a4) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8a4) == 0) {
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0570cc(ar4,0x1a,pdVar6,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x8a8) = uVar2;
          iVar16 = *(int *)(unsigned)((int)puVar17 + -0x8a8);
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
        }
      }
      else {
        pcVar10 = (code *)0x2e8;
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c05ae54(ar4,ar5_00,0,0x2e8));
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x30);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,puVar5,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10));
        pcVar4 = ((void *)0x8c031748);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031748(ar4,puVar5,((void *)0x8c031748),pcVar10));
        uVar9 = 0;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031de8(ar4,0,pcVar4,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8a0) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8a0) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03c314(ar4,uVar9,pcVar4,pcVar10));
          iVar16 = 0;
        }
      }
      break;
    case 0x2f:
      pcVar10 = (code *)0x3;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        iVar15 = *(int *)(unsigned)(ar4 + 300);
        if (iVar15 == 0) {
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) = 0x214;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa6c) + ar4) = 0;
          pcVar10 = pcVar14;
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = uVar2;
          *(undefined4 *)(unsigned)((int)puVar17 + -0x8ec) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa68);
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = *(undefined4 *)(unsigned)((int)puVar17 + -0x8ec);
          if (*(int *)(unsigned)((int)puVar17 + -0xa64) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
            *(int *)(unsigned)((int)puVar17 + -0xa54) = ar4;
            pcVar10 = (code *)(*(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa54) + 300) + 1);
            *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa54) + 300) = pcVar10;
          }
        }
        else {
          if (iVar15 == 1) {
            iVar15 = ar4 + 0x34c;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x248,iVar15,iVar15,3));
            puVar13 = (undefined8 *)(unsigned)(ar4 + 0x248);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(unsigned)puVar13 = 0x449b0000;
              *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x439b0000;
            }
            else {
              *puVar13 = 0x24c449b0000;
              *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0x44bb8000439b0000;
            }
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x5cc),0x24c,iVar15,puVar13));
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x5dc);
            puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x5cc);
            pcVar10 = ((void *)0x8c023ae0);
            ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_sub(ar4 + 0x248,puVar5,iVar15,((void *)0x8c023ae0)); });
            puVar8 = (undefined1 *)(unsigned)((int)puVar17 + -0x5ec);
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = puVar8;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_normalize((undefined1 *)(unsigned)((int)puVar17 + -0x5dc),puVar5,puVar8,pcVar10));
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x5fc);
            ({ unsigned long t0_ = (unsigned long)(
                       *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_scale((undefined1 *)(unsigned)((int)puVar17 + -0x5ec),((undefined1 *)(unsigned)0x8c136580),puVar8,pcVar10); });
            iVar15 = ar4 + 0x248;
            pcVar10 = ((void *)0x8c023aa0);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c023aa0(iVar15,(undefined1 *)(unsigned)((int)puVar17 + -0x5fc),((void *)0x8c023aa0),iVar15));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5fc),0xffffffff,pcVar10,iVar15));
            pcVar4 = ((void *)0x8c022cb0);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5ec),0xffffffff,pcVar10,((void *)0x8c022cb0)));
            uVar9 = 0xffffffff;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5dc),0xffffffff,0xffffffff,pcVar4));
            uVar2 = 0xffffffff;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5cc),0xffffffff,uVar9,pcVar4));
            pcVar10 = ((void *)0x8c022ce8);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x60c),uVar2,((void *)0x8c022ce8),pcVar4));
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x61c);
            iVar15 = ar4 + 0x248;
            ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_sub((undefined1 *)(unsigned)((int)puVar17 + -0x60c),iVar15,pcVar10,pcVar4); });
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x62c);
            pcVar4 = ((void *)0x8c022ec0);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_normalize((undefined1 *)(unsigned)((int)puVar17 + -0x61c),iVar15,pcVar10,((void *)0x8c022ec0)));
            puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x62c);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,puVar5,puVar5,pcVar4));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x62c),0xffffffff,puVar5,pcVar4));
            pcVar10 = ((void *)0x8c022cb0);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x61c),0xffffffff,puVar5,((void *)0x8c022cb0)));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x60c),0xffffffff,0xffffffff,pcVar10));
            *(int *)(unsigned)((int)puVar17 + -0xa58) = ar4;
            pdVar6 = (double *)(unsigned)0x12c;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa58) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa58) + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 700) = 1;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          }
          else if (iVar15 != 2) {
            if (iVar15 == 3) {
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,0x2e8,3));
              iVar16 = 0;
            }
            break;
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar17 + -0x63c),ar4 + 0x54,pdVar6,pcVar10));
          pcVar10 = (code *)((int)puVar17 + -0x63c);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x248,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x8f0) = uVar2;
          *(uint *)(unsigned)((int)puVar17 + -0x690) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x8f0) == 0);
          pcVar4 = (code *)0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x63c),0xffffffff,uVar2,pcVar10));
          if (*(int *)(unsigned)((int)puVar17 + -0x690) != 0) {
            pcVar10 = (code *)0x0;
            uVar2 = 0;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0,0));
            pcVar4 = ((void *)0x8c033e68);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),uVar2,pcVar10));
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
            *(int *)(unsigned)((int)puVar17 + -0xa5c) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa5c) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa5c) + 300) + 1;
          }
          if (*(int *)(unsigned)(ar4 + 0x290) == 1) {
            *(int *)(unsigned)((int)puVar17 + -0xa60) = ar4;
            pcVar10 = (code *)0xfffffffb;
            *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa60) + 0x1fc) =
                 *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa60) + 0x1fc) & 0xfb;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c030f2c(ar4 + 0x1fc,pcVar4,0x1fc,0xfffffffb));
          }
        }
      }
      break;
    case 0x30:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      *(undefined4 *)(unsigned)(ar4 + 700) = 0;
      *(int *)(unsigned)((int)puVar17 + -0xa28) = ar4;
      iVar15 = *(int *)(unsigned)((int)puVar17 + -0xa28);
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa28) + 0x284));
      *(unsigned *)(unsigned)(iVar15 + 0x284) = pcVar10 + 1;
      switch(*(undefined4 *)(unsigned)(ar4 + 300)) {
      case 0:
        uVar9 = 0x1a;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8b4) = uVar2;
        iVar15 = *(int *)(unsigned)((int)puVar17 + -0x8b4);
        if (iVar15 != 6) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,((void *)0x8c033e68),iVar15));
        }
        iVar11 = ar4 + 0xb0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(iVar11,uVar9,iVar11,iVar15));
        pcVar10 = (code *)*ar5;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)pcVar10 + 0x34))))(pcVar10,uVar9,iVar11,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8b8) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8b8) == 1) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x38))))((int *)(unsigned)*ar5,0,iVar11,pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0xa2c) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa2c) + 300));
          *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa2c) + 300) = pcVar10 + 1;
        }
        break;
      case 1:
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x59c),iVar15,
                      (undefined1 *)(unsigned)((int)puVar17 + -0x59c),pcVar10));
        pcVar10 = (code *)((int)puVar17 + -0x59c);
        uVar9 = *(undefined4 *)(unsigned)(uint)ar5[1];
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],uVar9,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8bc) = uVar2;
        *(uint *)(unsigned)((int)puVar17 + -0x684) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x8bc) == 0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x59c),0xffffffff,uVar9,pcVar10));
        if (*(int *)(unsigned)((int)puVar17 + -0x684) != 0) {
          uVar2 = 0x1a;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          pcVar10 = (code *)0xb0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar4 + 0xb0,0xb0));
          *(int *)(unsigned)((int)puVar17 + -0xa30) = ar4;
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) = 300;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa6c) + *(int *)(unsigned)((int)puVar17 + -0xa30)) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa30) + 300) + 1;
        }
        break;
      case 2:
        uVar7 = 0;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = 0x1a;
        uVar12 = *(undefined4 *)(unsigned)((int)puVar17 + -0xa68);
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = 0xb0;
        uVar9 = s_CAnimBody_SetAnimation_033a94
                          (ar4 + *(int *)(unsigned)((int)puVar17 + -0xa64),uVar12,0xffffffff,0);
        uVar18 = SUB84(dVar19,0);
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8c0) = uVar9;
        if (*(int *)(unsigned)((int)puVar17 + -0x8c0) != 6) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar12,((void *)0x8c033e68),uVar7));
        }
        uVar9 = 0xb0;
        iVar15 = ar4 + 0xb0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(iVar15,0xb0,iVar15,uVar7));
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x34))))((int *)(unsigned)*ar5,uVar9,iVar15,uVar7));
        *(unsigned *)(unsigned)((int)puVar17 + -0x8c4) = pcVar10;
        if (*(int *)(unsigned)((int)puVar17 + -0x8c4) == 1) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x38))))((int *)(unsigned)*ar5,0,iVar15,pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0xa34) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa34) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa34) + 300) + 1;
          if (in_FPSCR_SZ != '\0') {
            in_xd4 = 3.75058611530083e-312;
          }
          uVar9 = 0x1d;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0));
          uVar23 = 0;
          iVar15 = ar4 + 0xb0;
          pcVar10 = ((void *)0x8c033e68);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(iVar15,uVar9,((void *)0x8c033e68),iVar15));
          uVar9 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x1d,pcVar10,iVar15));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x8c8) = uVar9;
          pcVar10 = (code *)0x278;
          if (in_FPSCR_PR == '\0') {
            dVar24 = CONCAT44D((float)*(int *)(unsigned)((int)puVar17 + -0x8c8),uVar18);
          }
          else {
            dVar24 = (double)*(int *)(unsigned)((int)puVar17 + -0x8c8);
          }
          dVar21 = (double)((ulonglong)uVar23 << 0x20);
          fVar20 = F32HI(dVar24);
          if (in_FPSCR_PR == '\0') {
            bVar27 = fVar20 < 0.0;
          }
          else {
            bVar27 = dVar24 < dVar21;
          }
          dVar19 = dVar24;
          if (bVar27) {
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(0x4f800000,fVar20);
            }
            else {
              dVar21 = 24189261021184.0;
              in_xd4 = dVar24;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = F32HI(dVar21);
              dVar21 = CONCAT44D(fVar20,F32LO(dVar21) + fVar20);
            }
            else {
              dVar21 = dVar21 + dVar21;
            }
            dVar19 = in_xd4;
            if (in_FPSCR_SZ == '\0') {
              dVar19 = CONCAT44D(SUB84(dVar21,0),SUB84(dVar24,0));
            }
          }
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D(0x42b60000,uVar2);
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      (int)(D2U(dVar19) >> 0x20));
            dVar19 = in_xd4;
          }
          else {
            dVar24 = 3.5717906350717384e+163;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = F32LO(dVar21) / F32HI(dVar24);
          }
          else {
            fVar20 = SUB84(dVar21 / dVar24,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(ar4 + 0x278) = fVar20;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x278) = dVar19;
          }
        }
        break;
      case 3:
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar15,300,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8cc) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8cc) == 1) {
          *(int *)(unsigned)((int)puVar17 + -0xa38) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa38) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa38) + 300) + 1;
          pcVar10 = (code *)0x0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1a;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,pcVar10));
        }
        break;
      case 4:
        uVar12 = 0;
        uVar9 = 0x1a;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8d0) = uVar2;
        iVar15 = *(int *)(unsigned)((int)puVar17 + -0x8d0);
        if (iVar15 != 6) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,iVar15,uVar12));
        }
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar9,iVar15,uVar12));
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x34))))((int *)(unsigned)*ar5,uVar9,iVar15,uVar12));
        *(unsigned *)(unsigned)((int)puVar17 + -0x8d4) = pcVar10;
        if (*(int *)(unsigned)((int)puVar17 + -0x8d4) == 1) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x38))))((int *)(unsigned)*ar5,0,iVar15,pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0xa3c) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa3c) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa3c) + 300) + 1;
        }
        break;
      case 5:
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x5ac),iVar15,300,pcVar10));
        pcVar10 = (code *)((int)puVar17 + -0x5ac);
        uVar9 = *(undefined4 *)(unsigned)(uint)ar5[1];
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],uVar9,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8d8) = uVar2;
        *(uint *)(unsigned)((int)puVar17 + -0x688) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x8d8) == 0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5ac),0xffffffff,uVar9,pcVar10));
        if (*(int *)(unsigned)((int)puVar17 + -0x688) != 0) {
          *(int *)(unsigned)((int)puVar17 + -0xa40) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa40) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa40) + 300) + 1;
        }
        break;
      case 6:
        uVar9 = 0xffffffff;
        uVar2 = 0x1a;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        pcVar10 = (code *)0xb0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,0xb0));
        piVar1 = (int *)(unsigned)*ar5;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar1 + 0x34))))(piVar1,uVar2,piVar1,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8dc) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8dc) == 1) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x38))))((int *)(unsigned)*ar5,0,piVar1,pcVar10));
          uVar2 = 0x26;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x26,0xffffffff,0));
          pcVar10 = (code *)(ar4 + 0xb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(pcVar10,uVar2,0xb0,pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0xa44) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa44) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa44) + 300) + 1;
        }
        break;
      case 7:
        if (*(int *)(unsigned)(ar4 + 0x128) == 4) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar15,4,pcVar10));
        }
        else {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar15,*(int *)(unsigned)(ar4 + 0x128),pcVar10));
        }
        *(int *)(unsigned)((int)puVar17 + -0xa48) = ar4;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa48);
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0xa48));
        *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa70) + 300) = *(int *)(unsigned)(pcVar10 + 300) + 1;
        break;
      case 8:
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,300,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8e0) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8e0) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          *(int *)(unsigned)((int)puVar17 + -0xa4c) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0xa4c));
          *(int *)(unsigned)(pcVar10 + 300) = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa4c) + 300) + 1;
        }
        break;
      case 9:
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x5bc),iVar15,300,pcVar10));
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],*(undefined4 *)(unsigned)(uint)ar5[1],
                                       (undefined1 *)(unsigned)((int)puVar17 + -0x5bc)));
        *(unsigned *)(unsigned)((int)puVar17 + -0x8e4) = pcVar10;
        *(uint *)(unsigned)((int)puVar17 + -0x68c) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x8e4) == 0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5bc),0xffffffff,((void *)0x8c022cb0),pcVar10));
        if (*(int *)(unsigned)((int)puVar17 + -0x68c) != 0) {
          uVar12 = 0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1a;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12));
          *(int *)(unsigned)((int)puVar17 + -0xa50) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa50) + 300));
          *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa50) + 300) = pcVar10 + 1;
        }
        break;
      case 10:
        pcVar10 = (code *)0x0;
        uVar12 = 0xffffffff;
        uVar9 = 0x1a;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8e8) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8e8) != 6) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,uVar12,pcVar10));
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar9,uVar12,pcVar10));
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        *(undefined4 *)(unsigned)(ar4 + 700) = 0;
      }
    }
  }
  else {
override_jmp_8c03f9a2_case_7:
    iVar16 = 0;
    pcVar10 = ((void *)0x8c031c74);
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar17 + -0x30),*(undefined4 *)(unsigned)(uint)ar5[1],((void *)0x8c031c74)));
  }
  iVar15 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar15 != 2) && (*(int *)(unsigned)(ar4 + 0x124) != 0x14)) {
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031ab4(ar4,*(undefined4 *)(unsigned)(ar5[1] + 4),iVar15,pcVar10));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,iVar15,pcVar10));
  }
  pcVar10 = ((void *)0x8c023a14);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(((undefined1 *)(unsigned)0x8c2803a8),*(undefined4 *)(unsigned)(uint)ar5[1],iVar15,((void *)0x8c023a14)));
  *(int *)(unsigned)((int)puVar17 + -0x650) = iVar16;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2803b8) = pcVar14;
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xa8),0xffffffff,(undefined1 *)(unsigned)((int)puVar17 + -0xa8),
            pcVar10));
  uVar2 = 0xffffffff;
  pcVar10 = ((void *)0x8c102790);
  free_if_nonnull_wrap_102790
            ((undefined1 *)(unsigned)((int)puVar17 + -0x98),0xffffffff,0xffffffff,((void *)0x8c102790))
  ;
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x8c),0xffffffff,uVar2,pcVar10));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x7c),0xffffffff,uVar2,pcVar10));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x6c),0xffffffff,uVar2,pcVar10));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x60),0xffffffff,uVar2,pcVar10));
  uVar2 = 0xffffffff;
  pcVar10 = ((void *)0x8c022cb0);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x50),0xffffffff,((void *)0x8c022cb0),0xffffffff));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x40),0xffffffff,pcVar10,uVar2));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x30),0xffffffff,pcVar10,uVar2));
  return *(undefined4 *)(unsigned)((int)puVar17 + -0x650);
}

__asm__(".globl _FUN_8c03f4a4\n.set _FUN_8c03f4a4, _FUN_8c03f4a4_def\n");
