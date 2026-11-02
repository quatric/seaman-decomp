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
undefined4 FUN_8c077a38_def(int ar4,float *ar5,float *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c077a38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 688; for (int i_ = 0; i_ < 688; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  code *ar5_00;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined1 *ar7_00;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  double in_dr0 = 0;
  double dVar14;
  undefined4 in_fr15 = 0;
  double dVar15;
  double in_xd0 = 0;
  bool bVar16;
  char cVar17;
  char cVar18;
  
  cVar18 = '\0';
  cVar17 = '\0';
  uVar5 = 1;
  uVar11 = 1;
  pfVar8 = ar6;
  pcVar10 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 688)), get_field_6c_028cc4(ar7,1,ar6,ar7));
  if (iVar1 == 0) {
    return 2;
  }
  (vsp = ((unsigned long)(fr0_ - 688)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),uVar5,pfVar8,ar7));
  (vsp = ((unsigned long)(fr0_ - 688)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x44)),uVar5,pfVar8,ar7));
  (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c023dac(((undefined1 *)(fr0_ - 0x50)),uVar5,pfVar8,ar7));
  (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c023dac(((undefined1 *)(fr0_ - 0x5c)),uVar5,pfVar8,ar7));
  ({ unsigned long ri0_ = (unsigned long)(pcVar10); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 688)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar5,pfVar8,ar7); });
  if (cVar18 == '\0') {
    in_fr15 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  }
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if (iVar2 == 0) {
    ar7 = (code *)((undefined1 *)(fr0_ - 0x30));
    pfVar8 = &(*(float *)(fr0_ - 0x34));
    (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c0507a4(iVar1,((undefined1 *)(fr0_ - 0x38)),pfVar8,ar7));
    if (cVar18 == '\0') {
      fVar12 = 900.0;
    }
    else {
      (*(float *)(fr0_ - 0x34)) = 900.0;
      fVar12 = 4.2039e-43;
    }
    if (cVar17 == '\0' && fVar12 < (*(float *)(fr0_ - 0x34))) {
      (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c031de8(ar4,0,pfVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c031c74(ar4,ar6,ar5,ar7));
      pfVar8 = ar5;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2d0) = 0;
    }
    goto LAB_8c078ef6;
  }
  if (iVar2 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 688)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    pfVar8 = ar6;
    if (iVar2 == 0) {
      uVar9 = 0;
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 688)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
      pcVar6 = ((void *)0x8c033e68);
      (vsp = ((unsigned long)(fr0_ - 688)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),uVar5,uVar9));
      if ((*(int *)(unsigned)(ar4 + 0x128) < 2) || (pcVar6 = (code *)0x5, 5 < *(int *)(unsigned)(ar4 + 0x128))) {
        if ((*(int *)(unsigned)(ar4 + 0x128) == 6) || (*(int *)(unsigned)(ar4 + 0x128) == 7)) {
          *(undefined4 *)(unsigned)(ar4 + 0x294) = 1;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x294) = 4;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 2;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c03f3e8(pcVar10,pcVar6,uVar5,uVar9));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 688)), get_field_6c_02f46c(iVar1,pcVar6,uVar5,uVar9));
      if (iVar2 < 0x32) {
        *(undefined4 *)(unsigned)(ar4 + 0x2d0) = 1;
      }
      pfVar8 = (float *)(unsigned)0x12c;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      iVar2 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_assign(ar4 + 0x54,iVar2,300,uVar9));
      if (cVar18 == '\0') {
        dVar15 = CONCAT44D(0xbe99999a,*(undefined4 *)(unsigned)(ar4 + 0x58));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x58);
        dVar15 = 1.63976064280413e-311;
      }
      if (cVar17 == '\0') {
        fVar12 = F32LO(dVar15) * F32HI(dVar15);
      }
      else {
        fVar12 = SUB84(dVar15 * dVar15,0);
      }
      if (cVar18 == '\0') {
        *(float *)(unsigned)(ar4 + 0x58) = fVar12;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x58) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_normalize(ar4 + 0x54,iVar2,pfVar8,uVar9));
      ar7 = ((void *)0x8c023a14);
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x6c)),pfVar8,((void *)0x8c023a14)));
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,pfVar8,ar7));
    }
    if ((*(int *)(unsigned)(ar4 + 0x128) < 2) && (*(int *)(unsigned)(ar4 + 0x40) == 4)) {
      ar7 = (code *)((undefined1 *)(fr0_ - 0x30));
      pfVar8 = &(*(float *)(fr0_ - 0x34));
      (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c0507a4(iVar1,((undefined1 *)(fr0_ - 0x38)),pfVar8,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_scale(ar4 + 0x80,ar4 + 0x48,pfVar8,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x7c)),(*(int *)(fr0_ + 0x00000004)) + 4,pfVar8,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x8c)),ar5,pfVar8,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(fr0_ - 0x38)),pfVar8,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xbc))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xac)),((undefined1 *)(unsigned)0x8c137990),pfVar8,ar7); });
      (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c023aa0(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0xbc)),pfVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,pfVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,pfVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,pfVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,pfVar8,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,pfVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c036988(iVar1,uVar5,pfVar8,ar7));
    }
    goto LAB_8c078ef6;
  }
  if (iVar2 != 2) goto LAB_8c078ef6;
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  (vsp = ((unsigned long)(fr0_ - 688)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xcc)),ar4 + 0x54,pfVar8,ar7));
  (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xcc)),pfVar8,ar7));
  (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,pfVar8,ar7));
  pcVar6 = ((void *)0x8c026da8);
  (vsp = ((unsigned long)(fr0_ - 688)), CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),pfVar8,ar7));
  dVar15 = in_dr0;
  if (cVar18 == '\0') {
    dVar15 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  if (cVar17 == '\0') {
    dVar15 = CONCAT44D(F32HI(dVar15) + 1.0,SUB84(dVar15,0));
  }
  else {
    dVar15 = dVar15 + CONCAT44D(0x3f800000,SUB84(in_dr0,0));
  }
  uVar5 = (vsp = ((unsigned long)(fr0_ - 688)), get_field_1c_026dd8(ar4 + 0xb0,pcVar6,pfVar8,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 688)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar5,pfVar8,ar7));
  fVar12 = (float)iVar2;
  dVar14 = (double)(ulonglong)(uint)fVar12;
  if (cVar17 == '\0' && fVar12 < 0.0) {
    if (cVar18 == '\0') {
      dVar14 = CONCAT44D(0x4f800000,fVar12);
    }
    else {
      dVar14 = 3.40178305716091e-312;
    }
    if (cVar17 == '\0') {
      fVar12 = F32HI(dVar14);
      dVar14 = CONCAT44D(fVar12,F32LO(dVar14) + fVar12);
    }
    else {
      dVar14 = dVar14 + dVar14;
    }
  }
  if (cVar17 == '\0') {
    bVar16 = F32HI(dVar15) < SUB84(dVar14,0);
  }
  else {
    bVar16 = dVar15 < dVar14;
  }
  if (!bVar16) {
    uVar5 = (vsp = ((unsigned long)(fr0_ - 688)), get_field_1c_026dd8(ar4 + 0xb0,iVar2,pfVar8,ar7));
    uVar13 = SUB84(dVar14,0);
    uVar9 = SUB84(dVar15,0);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 688)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar5,pfVar8,ar7));
    if (cVar17 == '\0') {
      dVar15 = CONCAT44D((float)iVar2,uVar9);
    }
    else {
      dVar15 = (double)iVar2;
    }
    dVar14 = (double)(ulonglong)uVar13;
    if (cVar17 == '\0') {
      bVar16 = F32HI(dVar15) < 0.0;
    }
    else {
      bVar16 = dVar15 < dVar14;
    }
    if (bVar16) {
      if (cVar18 == '\0') {
        dVar14 = CONCAT44D(0x4f800000,uVar13);
      }
      else {
        dVar14 = 3.40178305716091e-312;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c0507a4(iVar1,((undefined1 *)(fr0_ - 0x38)),&(*(float *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x30))));
  ar7 = (code *)((undefined1 *)(fr0_ - 0x48));
  pcVar6 = (code *)((undefined1 *)(fr0_ - 0x4c));
  (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c03f3f8(iVar1,((undefined1 *)(fr0_ - 0x50)),pcVar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x2d0) == 1) {
LAB_8c078026:
    iVar2 = *(int *)(unsigned)(ar4 + 0x128);
    if ((iVar2 < 8) && (1 < iVar2)) {
                    
      switch(iVar2) {
      case 2:
        uVar5 = (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c03c0f0(ar4 + 0xb0,0x19,pcVar6,ar7));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 688)), deref_u32(uVar5,((void *)0x8c015b4c),pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar3,pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0xdc)),pcVar6,ar7));
        pcVar10 = ((void *)0x8c022cb0);
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0xdc)),0xffffffff,pcVar6,((void *)0x8c022cb0)));
        uVar7 = 0x19;
        uVar9 = 0x19;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c03c0f0(ar4 + 0xb0,0x19,0x19,pcVar10));
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 688)), deref_u32(uVar5,uVar9,uVar7,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*piVar4 + 4),uVar7,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 688)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0xe8)),uVar7,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 688)), object_dtor_delete(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,uVar7,pcVar10));
        uVar9 = 0x19;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c03c0f0(ar4 + 0xb0,0x19,uVar7,pcVar10));
        pcVar10 = ((void *)0x8c015b4c);
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 688)), deref_u32(uVar5,uVar9,uVar7,((void *)0x8c015b4c)));
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(unsigned)(*piVar4 + 8),piVar4,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c023e04(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(fr0_ - 0xf4)),piVar4,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 688)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,piVar4,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 688)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x100)),(*(undefined4 *)(fr0_ + 0x00000000)),piVar4,pcVar10));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x100)),piVar4,pcVar10); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x120))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x110)),(*(int *)(fr0_ + 0x00000004)) + 4,piVar4,pcVar10); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x120)),ar5,piVar4,pcVar10); });
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x130)),piVar4,pcVar10));
        ar7 = (code *)((undefined1 *)(fr0_ - 0x130));
        pcVar6 = ((void *)0x8c022cb0);
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(ar7,0xffffffff,((void *)0x8c022cb0),ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,pcVar6,ar7));
        ar5_00 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 688)), object_dtor_delete(((undefined1 *)(fr0_ - 0x100)),0xffffffff,pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c078fb8(iVar1,ar5_00,pcVar6,ar7));
        break;
      case 3:
        uVar9 = 0x1a;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c03c0f0(ar4 + 0xb0,0x1a,pcVar6,ar7));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 688)), deref_u32(uVar5,uVar9,pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar3,pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x140)),pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,pcVar6,ar7));
        uVar9 = 0x1a;
        uVar7 = 0xb0;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c03c0f0(ar4 + 0xb0,0x1a,0xb0,ar7));
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 688)), deref_u32(uVar5,uVar9,uVar7,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*piVar4 + 4),uVar7,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x14c)),uVar7,ar7));
        pcVar10 = ((void *)0x8c014a34);
        (vsp = ((unsigned long)(fr0_ - 688)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14c)),0xffffffff,uVar7,((void *)0x8c014a34)));
        uVar9 = 0x1a;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c03c0f0(ar4 + 0xb0,0x1a,uVar7,pcVar10));
        pcVar6 = (code *)(vsp = ((unsigned long)(fr0_ - 688)), deref_u32(uVar5,uVar9,uVar7,pcVar10));
        ar7 = (code *)((undefined1 *)(fr0_ - 0x158));
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)pcVar6 + 8),pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c023e04(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(fr0_ - 0x158)),pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x158)),0xffffffff,pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x164)),(*(undefined4 *)(fr0_ + 0x00000000)),pcVar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x174))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x164)),pcVar6,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x184))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x174)),(*(int *)(fr0_ + 0x00000004)) + 4,pcVar6,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x194))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x184)),ar5,pcVar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x194)),pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x194)),0xffffffff,pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x184)),0xffffffff,pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x174)),0xffffffff,pcVar6,ar7));
        ar5_00 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 688)), object_dtor_delete(((undefined1 *)(fr0_ - 0x164)),0xffffffff,pcVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c078fb8(iVar1,ar5_00,pcVar6,ar7));
      }
    }
    else {
      ar7_00 = ((undefined1 *)(fr0_ - 0x30));
      pfVar8 = &(*(float *)(fr0_ - 0x34));
      (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c0507a4(iVar1,((undefined1 *)(fr0_ - 0x38)),pfVar8,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x26c))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_scale(ar4 + 0x80,ar4 + 0x48,pfVar8,ar7_00); });
      ar7 = (code *)((undefined1 *)(fr0_ - 0x27c));
      pcVar6 = (code *)((*(int *)(fr0_ + 0x00000004)) + 4);
      ({ unsigned long t0_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x26c)),pcVar6,pcVar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28c))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x27c)),ar5,pcVar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x29c))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x28c)),((undefined1 *)(fr0_ - 0x38)),pcVar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2ac))); *(unsigned *)((((unsigned long)(fr0_ - 688)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 688)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x29c)),((undefined1 *)(unsigned)0x8c137994),pcVar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c023aa0(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x2ac)),pcVar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2ac)),0xffffffff,pcVar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x29c)),0xffffffff,pcVar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28c)),0xffffffff,pcVar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x27c)),0xffffffff,pcVar6,ar7));
      ar5_00 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x26c)),0xffffffff,pcVar6,ar7));
      if (cVar18 == '\0') {
        dVar15 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar15 = 6.28636279645629e-312;
      }
      if (cVar17 == '\0') {
        fVar12 = F32LO(dVar15) * F32HI(dVar15);
      }
      else {
        fVar12 = SUB84(dVar15 * dVar15,0);
      }
      if (cVar18 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar12;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else {
    ar5_00 = (code *)0xb0;
    ({ unsigned long ri0_ = (unsigned long)(pcVar10); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 688)); CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar6,ar7); });
    if (cVar18 == '\0') {
      fVar12 = F32HI(dVar14);
      pcVar10 = (code *)0x42700000;
    }
    else {
      fVar12 = 60.0;
      pcVar10 = ((void *)0x8c05c284);
      in_xd0 = dVar14;
    }
    if ((cVar17 != '\0' || fVar12 <= (float)(uint)pcVar10) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 688)), get_field_24_05c284(iVar1,ar5_00,pcVar6,ar7)), iVar2 == 0xf)) goto LAB_8c078026;
  }
  if ((1 < *(int *)(unsigned)(ar4 + 0x128)) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 688)), get_field_24_05c284(iVar1,ar5_00,pcVar6,ar7)), iVar2 == 0xf)) {
    ar5_00 = ((void *)0x8c078f84);
    (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c078f84(((undefined1 *)(fr0_ - 0x50)),((void *)0x8c078f84),pcVar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c036988(iVar1,ar5_00,pcVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c038a10(iVar1,ar5_00,pcVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c031c74(ar4,ar6,ar5,ar7));
  if ((*(int *)(unsigned)(ar4 + 0x128) < 2) || (5 < *(int *)(unsigned)(ar4 + 0x128))) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 688)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,2,ar5,ar7));
    pfVar8 = ar5;
    if (iVar1 == 1) {
      iVar1 = *(int *)(unsigned)(ar4 + 0x294) + -1;
      *(int *)(unsigned)(ar4 + 0x294) = iVar1;
      if (iVar1 < 1) {
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c030eb8(ar4 + 0x1fc,iVar1,ar5,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar11 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        ar7 = (code *)0x0;
        pfVar8 = (float *)(unsigned)0xffffffff;
        uVar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 688)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 688)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,pfVar8,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 688)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,ar5,ar7));
        pfVar8 = ar5;
      }
    }
  }
  else {
    iVar1 = *(int *)(unsigned)(ar4 + 0x294);
    if (iVar1 < 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 688)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7));
      pfVar8 = ar5;
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c030eb8(ar4 + 0x1fc,1,ar5,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar11 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        ar7 = (code *)0x0;
        pfVar8 = (float *)(unsigned)0xffffffff;
        uVar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 688)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 688)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,pfVar8,ar7));
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 688)), FUN_8c03f3ac(ar4 + 0xb0,iVar1,ar5,ar7));
      pfVar8 = ar5;
      if (iVar1 == 7) {
        *(int *)(unsigned)(ar4 + 0x294) = *(int *)(unsigned)(ar4 + 0x294) + -1;
      }
    }
  }
LAB_8c078ef6:
  (vsp = ((unsigned long)(fr0_ - 688)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pfVar8,ar7));
  (vsp = ((unsigned long)(fr0_ - 688)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x50)),0xffffffff,pfVar8,ar7));
  (vsp = ((unsigned long)(fr0_ - 688)), object_dtor_delete(((undefined1 *)(fr0_ - 0x44)),0xffffffff,pfVar8,ar7));
  (vsp = ((unsigned long)(fr0_ - 688)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pfVar8,ar7));
  return uVar11;
}

__asm__(".globl _FUN_8c077a38\n.set _FUN_8c077a38, _FUN_8c077a38_def\n");
