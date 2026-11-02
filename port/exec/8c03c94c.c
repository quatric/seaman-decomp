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
code * FUN_8c03c94c_def(code *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03c94c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 1096; for (int i_ = 0; i_ < 1096; i_++) z_[i_] = 0; }
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  double *pdVar6;
  code *pcVar7;
  float *pfVar8;
  code *pcVar9;
  undefined4 *ar6_00;
  undefined4 a6;
  code *pcVar10;
  undefined1 *ar7_00;
  undefined1 *puVar11;
  undefined8 *ar4_00;
  undefined4 uVar12;
  code *pcVar13;
  uint uVar14;
  float fVar15;
  double in_dr0 = 0;
  float fVar18;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined4 in_fr3 = 0;
  uint in_fr5 = 0;
  undefined4 uVar19;
  double dVar20;
  uint in_fr7 = 0;
  double dVar21;
  undefined8 in_xd0 = 0;
  bool bVar22;
  char cVar23;
  char cVar24;
  
  cVar24 = '\0';
  cVar23 = '\0';
  pcVar13 = (code *)0x1;
  (*(undefined4 *)(fr0_ - 0x354)) = 1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c03f480(*ar5,((void *)0x8c03f480),1,ar7); });
  pcVar7 = ((void *)0x8c022c88);
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_copy(&(*(uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0xa0)),((void *)0x8c022c88),ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,pcVar7,ar7));
  if (cVar24 == '\0') {
    dVar21 = (double)(ulonglong)in_fr7;
  }
  else {
    dVar21 = *(double *)(unsigned)(ar5[7] + 8);
  }
  if (cVar24 == '\0') {
    in_fr5 = *(uint *)(unsigned)(ar5[7] + 0xc);
  }
  if (cVar24 != '\0') {
    in_fr5 = (uint)*(undefined8 *)(unsigned)(uint)ar5[7];
  }
  pcVar10 = ((void *)0x8c10277c);
  (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c10277c(((undefined1 *)(fr0_ - 0x38)),uVar3,pcVar7,((void *)0x8c10277c)));
  pfVar8 = &(*(float *)(fr0_ - 0x48));
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_zero(pfVar8,uVar3,pfVar8,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c102748(&(*(float *)(fr0_ - 0x54)),uVar3,pfVar8,pcVar10));
  pcVar7 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x60)),uVar3,pfVar8,((void *)0x8c023d34)));
  pcVar10 = (code *)(uint)ar5[4];
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x70)),uVar3,pfVar8,pcVar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x300) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x338) = 0;
  if (pcVar10 == (code *)0x1) {
    if (cVar24 == '\0') {
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
      dVar20 = (double)(ulonglong)in_fr5;
    }
    else {
      in_dr0 = 0.0;
      dVar20 = 0.0;
    }
    if (cVar23 != '\0') {
      in_dr0 = in_dr0 + dVar20;
    }
    (*(float *)(fr0_ - 0x4c)) = SUB84(in_dr0,0);
    fVar15 = F32HI(in_dr0);
    if (cVar24 == '\0') {
      dVar21 = (double)(D2U(dVar21) & 0xffffffff);
      (*(float *)(fr0_ - 0x4c)) = fVar15;
    }
    else {
      dVar20 = 0.0;
      dVar21 = 0.0;
      (*(float *)(fr0_ - 0x48)) = fVar15;
    }
    if (cVar23 != '\0') {
      dVar20 = dVar20 + dVar21;
    }
    (*(float *)(fr0_ - 0x54)) = SUB84(dVar20,0);
    if (cVar24 == '\0') {
      (*(float *)(fr0_ - 0x54)) = F32HI(dVar20);
      dVar20 = (double)(D2U(dVar20) & 0xffffffff);
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    }
    else {
      dVar20 = 0.0;
      in_dr0 = 0.0;
    }
    if (cVar23 != '\0') {
      dVar20 = dVar20 + in_dr0;
    }
    fVar15 = F32HI(dVar20);
    (*(float *)(fr0_ - 0x50)) = fVar15;
    if (cVar24 != '\0') {
      (*(float *)(fr0_ - 0x50)) = SUB84(dVar20,0);
      (*(float *)(fr0_ - 0x4c)) = fVar15;
    }
    uVar3 = *(undefined4 *)(unsigned)(uint)ar5[1];
    (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(&(*(float *)(fr0_ - 0x48)),uVar3,(undefined4 *)(unsigned)(uint)ar5[1],pcVar7));
    uVar19 = SUB84(dVar20,0);
    pcVar10 = (code *)0x0;
    if (cVar24 == '\0') {
      dVar20 = CONCAT44D((*(float *)(fr0_ - 0x48)),SUB84(in_dr0,0));
      dVar21 = (double)(D2U(dVar21) & 0xffffffff);
    }
    else {
      dVar20 = CONCAT44D((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
      dVar21 = 0.0;
    }
    if (cVar23 == '\0') {
      bVar22 = F32HI(dVar20) < 0.0;
    }
    else {
      bVar22 = dVar20 < dVar21;
    }
    if (bVar22) {
      pcVar7 = (code *)((undefined4 *)(unsigned)0x8c125be0);
      if (cVar24 == '\0') {
        uVar19 = 0;
        (*(float *)(fr0_ - 0x48)) = 0.0;
      }
      else {
        (*(float *)(fr0_ - 0x48)) = 0.0;
        (*(float *)(fr0_ - 0x44)) = 0.0;
      }
    }
    if (cVar24 == '\0') {
      dVar20 = (double)(D2U(dVar20) & 0xffffffff);
      dVar1 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x40))+0)),uVar19);
    }
    else {
      dVar20 = 0.0;
      dVar1 = (*(double *)(fr0_ - 0x40));
    }
    if (cVar23 == '\0') {
      bVar22 = F32HI(dVar1) < 0.0;
    }
    else {
      bVar22 = dVar1 < dVar20;
    }
    if (bVar22) {
      if (cVar24 == '\0') {
        (*(double *)(fr0_ - 0x40)) = (double)((ulonglong)(*(double *)(fr0_ - 0x40)) & 0xffffffff00000000);
      }
      else {
        (*(double *)(fr0_ - 0x40)) = 0.0;
      }
    }
    fVar15 = (*(float *)(fr0_ - 0x48));
    fVar18 = (*(float *)(fr0_ - 0x54));
    if (cVar24 != '\0') {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
      fVar15 = (*(float *)(fr0_ - 0x54));
      fVar18 = (*(float *)(fr0_ - 0x50));
    }
    if (cVar23 == '\0' && fVar15 < fVar18) {
      if (cVar24 == '\0') {
        (*(float *)(fr0_ - 0x48)) = (*(float *)(fr0_ - 0x54));
        fVar15 = (*(float *)(fr0_ - 0x54));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x50)),(*(float *)(fr0_ - 0x54)));
        (*(float *)(fr0_ - 0x48)) = (*(float *)(fr0_ - 0x54));
        (*(float *)(fr0_ - 0x44)) = (*(float *)(fr0_ - 0x50));
      }
    }
    if (cVar24 == '\0') {
      in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x4c)),fVar15);
      dVar20 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x40))+0)),SUB84(dVar1,0));
    }
    else {
      in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
      dVar20 = (*(double *)(fr0_ - 0x40));
    }
    if (cVar23 == '\0') {
      bVar22 = F32HI(dVar20) < F32HI(in_dr0);
    }
    else {
      bVar22 = dVar20 < in_dr0;
    }
    if (bVar22) {
      if (cVar24 == '\0') {
        in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x4c)),SUB84(in_dr0,0));
        (*(double *)(fr0_ - 0x40)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x40))+4)),(*(float *)(fr0_ - 0x4c)));
      }
      else {
        in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
        (*(double *)(fr0_ - 0x40)) = in_dr0;
      }
    }
  }
  uVar19 = SUB84(dVar21,0);
  pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2e8));
  if ((pcVar9 == (code *)0x0) && (*(int *)(unsigned)(ar4 + 0x124) != 0x2e)) {
    if ((pcVar10 == (code *)0x3) || (*(int *)(unsigned)(ar4 + 0x68) != 0)) {
      uVar3 = ar5[1];
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0507c0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],uVar3,pcVar10));
      (*(undefined4 *)(fr0_ - 0x35c)) = 1;
      pcVar13 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar3,((void *)0x8c022cb0)));
      (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar3,pcVar13));
      (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(&(*(float *)(fr0_ - 0x54)),0xffffffff,uVar3,pcVar13));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(float *)(fr0_ - 0x48)),0xffffffff,uVar3,pcVar13));
      (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x38)),0xffffffff,uVar3,pcVar13));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(uint *)(fr0_ - 0x2c)),0xffffffff,uVar3,pcVar13));
      return (code *)(*(undefined4 *)(fr0_ - 0x35c));
    }
    uVar3 = 0;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar2 < 0x2f) && (-1 < iVar2)) {
    pcVar7 = (code *)((code **)&(*(undefined1 *)(unsigned)0x8c03cce4))[iVar2];
                    
    switch(iVar2) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f430(((undefined1 *)(fr0_ - 0xb0)),ar5[7],pcVar9,pcVar7));
      pcVar9 = (code *)&(*(uint *)(fr0_ - 0x2c));
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c048868(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar9,pcVar10));
      pcVar7 = ((void *)0x8c026038);
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c026038(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,pcVar9,((void *)0x8c026038)));
      break;
    case 1:
      pcVar9 = (code *)&(*(uint *)(fr0_ - 0x2c));
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), pure_virtual_stub(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar9,pcVar7));
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c04d62c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar5[6],pcVar7));
      pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,&(*(uint *)(fr0_ - 0x2c)),pcVar9,pcVar7));
      break;
    case 3:
      puVar5 = &(*(uint *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,puVar5,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7));
      pcVar9 = (code *)0x12c;
      if (*(int *)(unsigned)(ar4 + 300) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        uVar19 = 0;
        uVar3 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
        uVar14 = SUB84(in_dr0,0);
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,uVar19));
        pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 300));
        pcVar9 = pcVar7 + 1;
        *(unsigned *)(unsigned)(ar4 + 300) = pcVar9;
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar14;
        }
      }
      else if (*(int *)(unsigned)(ar4 + 300) == 1) {
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,puVar5,300,pcVar7));
        fVar15 = F32HI(in_dr0);
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar5,pcVar9,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_GetCurFrame(ar4 + 0xb0,puVar5,pcVar9,pcVar7));
        if (cVar24 == '\0') {
          fVar18 = 190.0;
        }
        else {
          fVar15 = 190.0;
          fVar18 = 1.90577e-43;
        }
        if (cVar23 != '\0' || fVar18 <= fVar15) {
          pcVar7 = ((void *)0x8c026da8);
          (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_GetCurFrame(ar4 + 0xb0,puVar5,pcVar9,((void *)0x8c026da8)));
          pcVar9 = (code *)0xb0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),0xb0,pcVar7));
        }
      }
      break;
    case 4:
      pcVar9 = ((void *)0x8c033b98);
      iVar2 = s_CAnimBody_AdvanceFrame_033ba0
                        (ar4 + 0xb0,uVar3,((void *)0x8c033b98),pcVar7);
      if (iVar2 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        pcVar13 = (code *)0x0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      puVar5 = &(*(uint *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,puVar5,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7));
      fVar15 = F32HI(in_dr0);
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if (iVar2 == 0) {
        pcVar7 = ((void *)0x8c022c88);
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x220)),((undefined1 *)(unsigned)0x8c125d48),((undefined1 *)(unsigned)0x8c125d48),((void *)0x8c022c88)));
        puVar11 = ((undefined1 *)(fr0_ - 0x220));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c051c14(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],puVar11,pcVar7));
        (*(uint *)(fr0_ - 0x370)) = (uint)(iVar2 == 0);
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x220)),0xffffffff,puVar11,pcVar7));
        if ((*(uint *)(fr0_ - 0x370)) != 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          pcVar7 = (code *)0x0;
          uVar19 = 0xffffffff;
          uVar3 = 0xe;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar19,pcVar7));
        }
      }
      else if (iVar2 == 1) {
        pcVar7 = (code *)0xb0;
        pcVar10 = ar4 + 0xb0;
        (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_AdvanceFrame_wrapper(pcVar10,puVar5,pcVar10,0xb0));
        uVar3 = 0xb0;
        (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar10,pcVar7));
        if (cVar24 == '\0') {
          fVar18 = 34.0;
        }
        else {
          fVar15 = 34.0;
          fVar18 = 1.47977e-42;
        }
        if (cVar23 == '\0' && fVar18 < fVar15) {
          puVar11 = ((undefined1 *)(fr0_ - 0x80));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_zero(puVar11,uVar3,puVar11,pcVar7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), get_field_24_026024(*(undefined4 *)(unsigned)(ar4 + 0x244),uVar3,puVar11,pcVar7));
          if (iVar2 == 0) {
            if (cVar24 == '\0') {
              dVar21 = CONCAT44D(0x44bb8000,*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8));
            }
            else {
              dVar21 = 6.37168463500213e-312;
            }
            if (cVar23 == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            uVar14 = (uint)(D2U(dVar21) >> 0x20);
            (*(uint *)(fr0_ - 0x374)) = uVar14;
            if (cVar24 != '\0') {
              (*(uint *)(fr0_ - 0x374)) = SUB84(dVar21,0);
              (*(uint *)(fr0_ - 0x370)) = uVar14;
            }
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x230))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(ar4 + 0x14,&(*(uint *)(fr0_ - 0x374)),puVar11,pcVar7); });
            pcVar10 = ((void *)0x8c023b8c);
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x240))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x230)),((undefined1 *)(unsigned)0x8c136570),((void *)0x8c023b8c),pcVar7); });
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x240)),pcVar10,pcVar7));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x240)),0xffffffff,pcVar10,pcVar7));
            puVar11 = (undefined1 *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x230)),0xffffffff,pcVar10,0xffffffff));
          }
          else {
            if (cVar24 == '\0') {
              dVar21 = CONCAT44D(0x45034000,*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8));
            }
            else {
              dVar21 = 6.28682803535784e-312;
            }
            if (cVar23 == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            uVar14 = (uint)(D2U(dVar21) >> 0x20);
            (*(uint *)(fr0_ - 0x378)) = uVar14;
            if (cVar24 != '\0') {
              (*(uint *)(fr0_ - 0x378)) = SUB84(dVar21,0);
              (*(uint *)(fr0_ - 0x374)) = uVar14;
            }
            puVar5 = &(*(uint *)(fr0_ - 0x378));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x250))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(ar4 + 0x14,puVar5,puVar5,((undefined1 *)(fr0_ - 0x250))); });
            puVar11 = ((undefined1 *)(fr0_ - 0x260));
            ({ unsigned long t0_ = (unsigned long)(puVar11); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x250)),((undefined1 *)(unsigned)0x8c136574),puVar5,puVar11); });
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x260)),puVar5,puVar11));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x260)),0xffffffff,puVar5,puVar11));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x250)),0xffffffff,0xffffffff,puVar11));
          }
          puVar4 = ((undefined1 *)(fr0_ - 0x80));
          (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c02374c(puVar4,((void *)0x8c02374c),puVar4,puVar11));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x270)),puVar4,puVar11));
          pcVar10 = ((void *)0x8c022cb0);
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x270)),0xffffffff,((void *)0x8c022cb0),puVar11));
          pcVar7 = ((void *)0x8c032ab0);
          (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c032ab0(ar4,((void *)0x8c032ab0),pcVar10,puVar11));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x27c)),pcVar7,pcVar10,puVar11));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28c))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x27c)),pcVar10,puVar11); });
          ar4_00 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x80));
          pcVar7 = ((void *)0x8c023a14);
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4_00,((undefined1 *)(fr0_ - 0x28c)),((void *)0x8c023a14),ar4_00));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28c)),0xffffffff,pcVar7,ar4_00));
          uVar3 = 0xffffffff;
          pcVar7 = ((void *)0x8c014a34);
          (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x27c)),0xffffffff,((void *)0x8c014a34),ar4_00));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_zero(((undefined8 *)(fr0_ - 0x90)),uVar3,pcVar7,ar4_00));
          iVar2 = *(int *)(unsigned)(ar4 + 0x128);
          if (iVar2 == 0) {
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x29c)),uVar3,pcVar7,ar4_00));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined8 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x29c)),pcVar7,ar4_00));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x29c)),0xffffffff,pcVar7,ar4_00));
          }
          else if (iVar2 == 1) {
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x2ac)),uVar3,pcVar7,ar4_00));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined8 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x2ac)),pcVar7,ar4_00));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2ac)),0xffffffff,pcVar7,ar4_00));
          }
          else {
            if (iVar2 != 2) {
              uVar3 = 2;
              (*(undefined4 *)(fr0_ - 0x368)) = 2;
              (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined8 *)(fr0_ - 0x90)),0xffffffff,2,ar4_00));
              (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar3,ar4_00));
              uVar3 = 0xffffffff;
              (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,0xffffffff,ar4_00));
              (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar3,ar4_00));
              (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(&(*(float *)(fr0_ - 0x54)),0xffffffff,uVar3,ar4_00));
              pfVar8 = &(*(float *)(fr0_ - 0x48));
              pcVar13 = ((void *)0x8c022cb0);
              (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(pfVar8,0xffffffff,((void *)0x8c022cb0),pfVar8));
              (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pcVar13,pfVar8));
              (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(uint *)(fr0_ - 0x2c)),0xffffffff,pcVar13,((void *)0x8c022cb0)));
              return (code *)(*(undefined4 *)(fr0_ - 0x368));
            }
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x2bc)),((void *)0x8c022ce8),pcVar7,ar4_00));
            ar4_00 = ((undefined8 *)(fr0_ - 0x90));
            pcVar7 = ((void *)0x8c023a14);
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4_00,((undefined1 *)(fr0_ - 0x2bc)),((void *)0x8c023a14),ar4_00));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2bc)),0xffffffff,pcVar7,ar4_00));
          }
          (vsp = ((unsigned long)(fr0_ - 1096)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x2c8)),*(undefined4 *)(unsigned)(ar5[1] + 4),pcVar7,ar4_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2d8))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(((undefined8 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x2c8)),pcVar7,ar4_00); });
          puVar11 = ((undefined1 *)(fr0_ - 0x2e8));
          ({ unsigned long t0_ = (unsigned long)(puVar11); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x2d8)),puVar11,ar4_00); });
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined8 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x2e8)),puVar11,ar4_00));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2e8)),0xffffffff,puVar11,ar4_00));
          puVar11 = ((undefined1 *)(fr0_ - 0x2d8));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(puVar11,0xffffffff,puVar11,ar4_00));
          (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c8)),0xffffffff,puVar11,ar4_00));
          pcVar7 = (code *)((undefined1 *)(fr0_ - 0x80));
          (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0dba50(ar5[6],((undefined8 *)(fr0_ - 0x90)),pcVar7,pcVar7));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined8 *)(fr0_ - 0x90)),0xffffffff,ar4,pcVar7));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,((void *)0x8c022cb0),pcVar7));
        }
      }
      else if ((iVar2 == 2) &&
              (iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar7)), iVar2 == 1
              )) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        pcVar13 = (code *)0x0;
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        pcVar7 = (code *)0x0;
        uVar3 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,pcVar7));
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      pcVar9 = (code *)0x80;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,0x80,pcVar7));
      break;
    case 6:
      pcVar7 = (code *)&(*(uint *)(fr0_ - 0x2c));
      pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c050300(ar4,*ar5,pcVar9,pcVar7));
      break;
    default:
      goto override_jmp_8c03cc1e_case_7;
    case 0xb:
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x194)),((undefined1 *)(unsigned)0x8c125d48),((undefined1 *)(unsigned)0x8c125d48),pcVar7));
      pcVar10 = (code *)((undefined1 *)(fr0_ - 0x194));
      pcVar7 = pcVar10;
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c051c14(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10,pcVar10));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x194)),0xffffffff,pcVar10,pcVar7));
      pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,&(*(uint *)(fr0_ - 0x2c)),pcVar9,pcVar7));
      break;
    case 0xc:
      pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0530e0(ar4,*ar5,pcVar9,pcVar7));
      break;
    case 0xe:
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if (iVar2 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        ((unsigned char *)(unsigned)ar4)[0x1fc] = (unsigned char)(((unsigned char *)(unsigned)ar4)[0x1fc] & 0xfb);
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
LAB_8c03d4b8:
        ar6_00 = ((undefined4 *)(unsigned)0x8c125bf0);
        if (cVar24 == '\0') {
          uVar3 = SUB84(in_dr0,0);
          uVar19 = 0x40400000;
        }
        else {
          uVar3 = 0x40400000;
          uVar19 = 0x42c80000;
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c032518(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined4 *)(unsigned)0x8c125bf0),ar5[6]));
        pcVar7 = ((void *)0x8c023a14);
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x248,((undefined1 *)(fr0_ - 0x184)),ar6_00,((void *)0x8c023a14)));
        a6 = 0xffffffff;
        uVar12 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x184)),0xffffffff,0xffffffff,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar12,a6,pcVar7));
        if (cVar24 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar19);
        }
        else {
          in_xd0 = CONCAT44(uVar19,uVar3);
          dVar21 = *(double *)(unsigned)(ar4 + 0x48);
        }
        if (cVar23 == '\0') {
          fVar15 = F32LO(dVar21) - F32HI(dVar21);
        }
        else {
          fVar15 = SUB84(dVar21 - dVar21,0);
        }
        if (cVar24 == '\0') {
          *(float *)(unsigned)(ar4 + 0x24c) = fVar15;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x24c) = in_xd0;
        }
        pcVar7 = (code *)(uint)ar5[7];
        if (cVar24 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pcVar7 + 8),in_fr3);
          in_dr0 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          dVar21 = *(double *)(unsigned)(pcVar7 + 8);
          in_dr0 = 52776566554624.0;
        }
        if (cVar23 == '\0') {
          fVar18 = F32HI(in_dr0);
          fVar15 = F32LO(in_dr0) * fVar18;
          in_dr0 = CONCAT44D(fVar18,fVar15);
          dVar21 = CONCAT44D(F32HI(dVar21) - fVar15,SUB84(dVar21,0));
        }
        else {
          in_dr0 = in_dr0 * in_dr0;
          dVar21 = dVar21 - in_dr0;
        }
        if (cVar24 == '\0') {
          *(int *)(unsigned)(ar4 + 0x250) = (int)(D2U(dVar21) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x250) = dVar21;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        pcVar9 = (code *)0x12c;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        pdVar6 = (double *)(unsigned)(ar4 + 0x2c);
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)pdVar6 = 0;
        }
        else {
          *pdVar6 = in_dr0;
        }
LAB_8c03d592:
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,pdVar6,pcVar9,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f3ac(ar4 + 0xb0,pdVar6,pcVar9,pcVar7));
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,ar4 + 0x248,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7));
      }
      else {
        if (iVar2 == 1) goto LAB_8c03d4b8;
        if (iVar2 == 2) {
          pdVar6 = (double *)(unsigned)0x2;
          goto LAB_8c03d592;
        }
      }
      uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      pcVar10 = ar4 + 0x14;
      pcVar9 = pcVar10;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,pcVar10,pcVar10,pcVar7));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03c314(ar4,pcVar10,pcVar9,pcVar7));
      pcVar7 = (code *)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244));
      (vsp = ((unsigned long)(fr0_ - 1096)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((pcVar7 + 0x184))))(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),pcVar10,pcVar9,pcVar7));
      if (cVar24 == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3);
      }
      else {
        dVar21 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar23 == '\0') {
        fVar15 = F32LO(dVar21) - F32HI(dVar21);
      }
      else {
        fVar15 = SUB84(dVar21 - dVar21,0);
      }
      if (cVar24 == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),fVar15);
      }
      else {
        uVar16 = *(undefined8 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
      }
      if (cVar23 == '\0' && (float)uVar16 < F32HI(uVar16)) {
        pcVar7 = ((void *)0x8c031748);
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031748(ar4,pcVar10,pcVar9,((void *)0x8c031748)));
      }
      break;
    case 0xf:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), get_field_6c_028cc4(*ar5,1,pcVar9,pcVar7));
      if (iVar2 == 0) {
        (*(undefined4 *)(fr0_ - 0x360)) = 2;
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,pcVar9,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,pcVar9,pcVar7));
        uVar3 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(&(*(float *)(fr0_ - 0x54)),0xffffffff,0xffffffff,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(float *)(fr0_ - 0x48)),0xffffffff,uVar3,pcVar7));
        puVar11 = ((undefined1 *)(fr0_ - 0x38));
        (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(puVar11,0xffffffff,uVar3,puVar11));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(uint *)(fr0_ - 0x2c)),0xffffffff,uVar3,puVar11));
        return (code *)(*(undefined4 *)(fr0_ - 0x360));
      }
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f414(iVar2,((undefined1 *)(fr0_ - 0x60)),((undefined1 *)(fr0_ - 0x5c)),((undefined1 *)(fr0_ - 0x58))));
      ar7_00 = ((undefined1 *)(fr0_ - 0x358));
      puVar11 = ((undefined1 *)(fr0_ - 0x358));
      puVar4 = ((undefined1 *)(fr0_ - 0x358));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f3f8(iVar2,puVar4,puVar11,ar7_00));
      iVar2 = *(int *)(unsigned)(ar4 + 0x128);
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd0)),puVar4,puVar11,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xdc)),((undefined1 *)(fr0_ - 0x60)),((void *)0x8c02b5fc),ar7_00));
        pcVar7 = ((void *)0x8c023484);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xec))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xd0)),((undefined1 *)(fr0_ - 0xdc)),((void *)0x8c023484),ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xfc))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xec)),((undefined1 *)(fr0_ - 0x358)),pcVar7,ar7_00); });
        pcVar10 = ((void *)0x8c023aa0);
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c023aa0(&(*(uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0xfc)),((void *)0x8c023aa0),ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,pcVar10,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0xec)),0xffffffff,pcVar10,ar7_00));
        pcVar7 = ((void *)0x8c014a34);
        (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0xdc)),0xffffffff,pcVar10,((void *)0x8c014a34)));
        pcVar9 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,0xffffffff,pcVar7));
      }
      else if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x10c)),puVar4,puVar11,ar7_00));
        pcVar9 = (code *)((undefined1 *)(fr0_ - 0x118));
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_copy_8c02b5fc(pcVar9,((undefined1 *)(fr0_ - 0x60)),pcVar9,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x128))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x10c)),((undefined1 *)(fr0_ - 0x118)),pcVar9,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x138))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x128)),((undefined1 *)(fr0_ - 0x358)),pcVar9,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c023aa0(&(*(uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x138)),pcVar9,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x138)),0xffffffff,pcVar9,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,pcVar9,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x118)),0xffffffff,pcVar9,ar7_00));
        pcVar7 = ((void *)0x8c022cb0);
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x10c)),0xffffffff,pcVar9,((void *)0x8c022cb0)));
      }
      else {
        if (iVar2 != 2) {
          (*(undefined4 *)(fr0_ - 0x364)) = 2;
          uVar3 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,puVar11,0xffffffff));
          (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,puVar11,uVar3));
          (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(&(*(float *)(fr0_ - 0x54)),0xffffffff,puVar11,uVar3));
          pfVar8 = &(*(float *)(fr0_ - 0x48));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(pfVar8,0xffffffff,pfVar8,uVar3));
          (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pfVar8,uVar3));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(uint *)(fr0_ - 0x2c)),0xffffffff,pfVar8,uVar3));
          return (code *)(*(undefined4 *)(fr0_ - 0x364));
        }
        puVar11 = ((undefined1 *)(fr0_ - 0x148));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(puVar11,((void *)0x8c022ce8),puVar11,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x154)),((undefined1 *)(fr0_ - 0x60)),puVar11,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x164))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x148)),((undefined1 *)(fr0_ - 0x154)),((undefined1 *)(fr0_ - 0x164)),ar7_00); });
        pcVar7 = ((void *)0x8c023b8c);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x174))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x164)),((undefined1 *)(fr0_ - 0x358)),((void *)0x8c023b8c),ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c023aa0(&(*(uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x174)),pcVar7,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x174)),0xffffffff,pcVar7,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x164)),0xffffffff,pcVar7,ar7_00));
        pcVar7 = (code *)0xffffffff;
        pcVar9 = (code *)((undefined1 *)(fr0_ - 0x154));
        (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(pcVar9,0xffffffff,pcVar9,0xffffffff));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x148)),0xffffffff,pcVar9,pcVar7));
      }
      if (*(int *)(unsigned)(ar4 + 0x134) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        pcVar9 = (code *)&(*(uint *)(fr0_ - 0x2c));
        pcVar7 = ((void *)0x8c0101bc);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), pure_virtual_stub(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar9,((void *)0x8c0101bc)));
        if ((iVar2 == 0) || (*(int *)(unsigned)(ar4 + 0x40) == 4)) {
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f3e8(*ar5,((void *)0x8c03f3e8),2,pcVar7));
          pcVar9 = (code *)(*(int *)(unsigned)(ar4 + 0x134) + 1);
          *(unsigned *)(unsigned)(ar4 + 0x134) = pcVar9;
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar9,pcVar7));
      }
      else if (*(int *)(unsigned)(ar4 + 0x134) == 1) {
        pcVar7 = (code *)*ar5;
        pcVar9 = (code *)&(*(uint *)(fr0_ - 0x2c));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c04ddd4(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar9,pcVar7));
        if (iVar2 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
          pcVar13 = (code *)0x0;
        }
      }
      break;
    case 0x10:
      pcVar7 = (code *)(uint)ar5[7];
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c04e7e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10,pcVar7));
      pcVar9 = pcVar10;
      break;
    case 0x11:
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc0)),uVar3,pcVar9,pcVar7));
      pcVar7 = (code *)(uint)ar5[3];
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c055490(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0xc0)),pcVar7));
      pcVar9 = pcVar13;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,pcVar13,pcVar7));
      break;
    case 0x12:
      if (*(int *)(unsigned)(ar4 + 0x134) == 0) {
        if (cVar24 == '\0') {
          uVar17 = (ulonglong)(*(uint *)(fr0_ - 0x2c));
        }
        else {
          uVar17 = 0;
        }
        if (cVar23 == '\0' && (float)uVar17 < 0.0) {
          pcVar13 = (code *)0x2;
          break;
        }
        if (*(int *)(unsigned)(ar4 + 0x21c) != 0) {
          if (cVar24 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar17;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          pcVar13 = (code *)0x0;
          pcVar9 = (code *)0x0;
          break;
        }
        if (cVar24 != '\0') {
          (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar5[7] + 8) >> 0x20);
        }
        if (cVar24 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar5[3] + 8),in_fr3);
          dVar20 = CONCAT44D(0x3fc00000,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          dVar21 = *(double *)(unsigned)(ar5[3] + 8);
          dVar20 = 2.43657959471436e-311;
        }
        if (cVar23 == '\0') {
          fVar15 = F32LO(dVar20) * F32HI(dVar20);
          dVar21 = CONCAT44D(F32HI(dVar21) - fVar15,SUB84(dVar21,0));
        }
        else {
          fVar15 = SUB84(dVar20 * dVar20,0);
          dVar21 = dVar21 - dVar20 * dVar20;
        }
        uVar3 = (undefined4)(D2U(dVar21) >> 0x20);
        (*(undefined4 *)(fr0_ - 0x24)) = uVar3;
        if (cVar24 != '\0') {
          (*(undefined4 *)(fr0_ - 0x24)) = SUB84(dVar21,0);
          (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
        }
        pdVar6 = (double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
        if (cVar24 == '\0') {
          (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)pdVar6;
          in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),fVar15);
        }
        else {
          in_dr0 = *pdVar6;
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(in_dr0,0);
          (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr0 >> 0x20);
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x248,&(*(uint *)(fr0_ - 0x2c)),0x21c,pdVar6));
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      else if (*(int *)(unsigned)(ar4 + 0x134) != 1) break;
      uVar14 = SUB84(in_dr0,0);
      pcVar9 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c054d6c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x248,pcVar10));
      pcVar7 = pcVar10;
      if (pcVar9 == (code *)0x0) {
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar14;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        pcVar13 = (code *)0x0;
        pcVar7 = (code *)0x0;
      }
      break;
    case 0x14:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,uVar3,pcVar9,pcVar7));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,&(*(uint *)(fr0_ - 0x2c)),*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7));
      pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c057280(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10,pcVar7));
      pcVar9 = pcVar10;
      if (pcVar7 == (code *)0x0) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        pcVar13 = (code *)0x0;
      }
      break;
    case 0x15:
      uVar3 = *(undefined4 *)(unsigned)(uint)ar5[1];
      puVar5 = &(*(uint *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,puVar5,uVar3,pcVar7));
      uVar14 = SUB84(in_dr0,0);
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031748(ar4,puVar5,uVar3,pcVar7));
      uVar17 = (ulonglong)uVar14;
      if (cVar24 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar17;
      }
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if (iVar2 == 0) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05c28c(ar4,0,uVar3,pcVar7));
        if (iVar2 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else if (iVar2 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c032ab0(ar4,1,uVar3,pcVar7));
        uVar14 = (uint)uVar17;
        pcVar7 = (code *)s_CAnimBody_AdvanceFrame_033ba0
                                   (ar4 + 0xb0,((void *)0x8c033b98),uVar3,pcVar7);
        if (pcVar7 == (code *)0x1) {
          pcVar7 = (code *)0x0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar7));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          if (cVar24 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar14;
          }
        }
      }
      else if (iVar2 == 2) {
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,2,uVar3,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c032ab0(ar4,iVar2,uVar3,pcVar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar2,uVar3,pcVar7));
        if (iVar2 == 1) {
          uVar19 = 0xffffffff;
          uVar3 = 0xc;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0));
          pcVar7 = ar4 + 0xb0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(pcVar7,uVar3,uVar19,pcVar7));
          *(undefined4 *)(unsigned)(ar4 + 300) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          pcVar13 = (code *)0x0;
        }
      }
      pcVar9 = ((void *)0x8c023a14);
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,((void *)0x8c023a14),pcVar7));
      break;
    case 0x16:
      pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      puVar5 = &(*(uint *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,puVar5,pcVar9,pcVar7));
      uVar14 = SUB84(in_dr0,0);
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031748(ar4,puVar5,pcVar9,pcVar7));
      uVar17 = (ulonglong)uVar14;
      if (cVar24 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar17;
      }
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if (iVar2 == 0) {
        pcVar10 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a4))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c0230f0(ar4 + 0x14,0,((void *)0x8c0230f0),pcVar7); });
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1b4)),((undefined1 *)(fr0_ - 0x1b4)),pcVar10,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x1a4)),((undefined1 *)(fr0_ - 0x1b4)),pcVar10,pcVar7));
        uVar3 = (undefined4)(uVar17 >> 0x20);
        (*(undefined4 *)(fr0_ - 0x3c8)) = (int)uVar17;
        if (cVar24 == '\0') {
          (*(undefined4 *)(fr0_ - 0x3c8)) = uVar3;
          uVar3 = (*(undefined4 *)(fr0_ - 0x3c4));
        }
        (*(undefined4 *)(fr0_ - 0x3c4)) = uVar3;
        uVar3 = 0x224;
        if (cVar24 == '\0') {
          uVar16 = CONCAT44((*(undefined4 *)(fr0_ - 0x3c8)),(int)uVar17);
          *(undefined4 *)(unsigned)(ar4 + 0x224) = (*(undefined4 *)(fr0_ - 0x3c8));
        }
        else {
          uVar16 = CONCAT44((*(undefined4 *)(fr0_ - 0x3c4)),(*(undefined4 *)(fr0_ - 0x3c8)));
          *(undefined8 *)(unsigned)(ar4 + 0x224) = uVar16;
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b4)),0xffffffff,pcVar10,0x224));
        uVar19 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a4)),0xffffffff,pcVar10,uVar3));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1c4)),uVar19,pcVar10,uVar3));
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x1c4)),((undefined1 *)(fr0_ - 0x1c4)),pcVar10,uVar3));
        pcVar7 = ((void *)0x8c0231c8);
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(ar4 + 0x14,((void *)0x8c0231c8),pcVar10,uVar3));
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c010e38(((void *)0x8c010e38),pcVar7,pcVar10,uVar3));
        if (cVar24 == '\0') {
          *(int *)(unsigned)(ar4 + 0x228) = (int)((ulonglong)uVar16 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x228) = uVar16;
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c4)),0xffffffff,ar4 + 0x228,uVar3));
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        if (cVar24 == '\0') {
          fVar15 = *(float *)(unsigned)(ar4 + 0x224);
          fVar18 = 5.0;
        }
        else {
          fVar15 = 5.0;
          fVar18 = 4.14784e-43;
        }
        if (cVar23 == '\0' && fVar18 < fVar15) {
          if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
            uVar3 = 5;
            (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
            if (cVar24 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x40c00000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x278) = 0x66e3d71d40c00000;
            }
          }
          else {
            uVar3 = 0x278;
            pcVar7 = ar4 + 0x278;
            if (cVar24 == '\0') {
              *(undefined4 *)(unsigned)pcVar7 = 0x3f800000;
            }
            else {
              *(ulonglong *)(unsigned)pcVar7 = CONCAT44(0x3f800000,fVar15);
            }
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1d4)),ar4 + 0x224,pcVar7,0x278));
            uVar19 = (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x1d4)),pcVar7,uVar3));
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar19;
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d4)),0xffffffff,pcVar7,uVar3));
            if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
              uVar3 = 7;
              (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
            }
            else {
              uVar3 = 8;
              (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
            }
          }
          uVar19 = 0xb0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar4 + 0xb0,0xb0));
          pcVar9 = (code *)0x12c;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,300,uVar19));
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 2;
          uVar19 = 0;
          uVar3 = 0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar4 + 0xb0,uVar19));
          pcVar9 = (code *)0x190;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 1096)), rand_range(ar4,0xfa,400,uVar19));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = uVar3;
        }
      }
      else if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1e4)),1,pcVar9,pcVar7));
        puVar11 = ((undefined1 *)(fr0_ - 0x1e4));
        pcVar7 = ((void *)0x8c023a34);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1f4))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],puVar11,((void *)0x8c023a34),*(undefined4 *)(unsigned)(uint)ar5[1]); });
        pcVar10 = ((void *)0x8c026dd8);
        uVar3 = (vsp = ((unsigned long)(fr0_ - 1096)), get_field_1c_026dd8(ar4 + 0xb0,puVar11,pcVar7,((void *)0x8c026dd8)));
        (vsp = ((unsigned long)(fr0_ - 1096)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar3,pcVar7,pcVar10));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 1096)), get_field_1c_026dd8(ar4 + 0xb0,uVar3,pcVar7,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar3,((void *)0x8c0314f8),pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x200)),ar4 + 0x278,0x228,pcVar10));
        pcVar10 = ar4 + 0x14;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x210))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c031eb0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x1f4)),pcVar10); });
        pcVar9 = ((void *)0x8c023a14);
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x210)),((void *)0x8c023a14),pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x210)),0xffffffff,pcVar9,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x200)),0xffffffff,pcVar9,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1f4)),0xffffffff,pcVar9,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e4)),0xffffffff,pcVar9,pcVar10));
        pcVar7 = ar4 + 0x14;
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,pcVar7,pcVar9,pcVar10));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar7,pcVar9,pcVar10));
        if (iVar2 == 1) {
          uVar3 = 0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          pcVar9 = (code *)0xb0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,uVar3));
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            pcVar9 = (code *)0x12c;
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            pcVar13 = (code *)0x0;
          }
        }
      }
      else if (iVar2 == 2) {
        *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 1;
        iVar2 = *(int *)(unsigned)(ar4 + 0x280);
        pcVar9 = (code *)(iVar2 + -1);
        *(unsigned *)(unsigned)(ar4 + 0x280) = pcVar9;
        if (iVar2 < 0) {
          (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f39c(*ar5,2,pcVar9,iVar2));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          uVar12 = 0;
          uVar19 = 0xffffffff;
          uVar3 = 0x10;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar19,uVar12));
          pcVar9 = (code *)0x12c;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          pcVar13 = (code *)0x0;
        }
      }
      else if (iVar2 == 3) {
        pcVar9 = ((void *)0x8c033b98);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,3,((void *)0x8c033b98),pcVar7))
        ;
        if (iVar2 == 1) {
          pcVar13 = (code *)0x0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
      *(undefined4 *)(unsigned)(ar4 + 0x328) = 0;
      pcVar7 = (code *)0x328;
      break;
    case 0x18:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x2f8)),uVar3,pcVar9,pcVar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c054f7c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x2f8)),ar5[6]));
      pcVar10 = (code *)(uint)(iVar2 == 0);
      pcVar7 = ((void *)0x8c022cb0);
      pcVar9 = pcVar10;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2f8)),0xffffffff,pcVar10,((void *)0x8c022cb0)));
      if (pcVar10 != (code *)0x0) {
        pcVar13 = (code *)0x0;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    case 0x2c:
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,((void *)0x8c05ae54),pcVar9,pcVar7));
      uVar14 = SUB84(in_dr0,0);
      uVar19 = *(undefined4 *)(unsigned)(uint)ar5[1];
      puVar5 = &(*(uint *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,puVar5,uVar19,pcVar7));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031748(ar4,puVar5,uVar19,pcVar7));
      uVar3 = 0xa0;
      if (cVar24 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)uVar14;
      }
      (vsp = ((unsigned long)(fr0_ - 1096)), vec3_clear(ar4 + 0x90,0xa0,uVar19,pcVar7));
      pcVar7 = (code *)0xb0;
      pcVar9 = ar4 + 0xb0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_AdvanceFrame_wrapper(pcVar9,uVar3,pcVar9,0xb0));
      if (iVar2 == 1) {
        pcVar13 = (code *)0x0;
      }
      break;
    case 0x2e:
      if (*(int *)(unsigned)(ar4 + 0x128) != 0) {
        pcVar13 = (code *)0x2;
        break;
      }
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if (iVar2 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        uVar3 = 0x2d4;
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_clear(ar4 + 0x2d4,ar4 + 0x2d4,0x2d4,pcVar7));
        uVar14 = SUB84(in_dr0,0);
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_clear(ar4 + 0x2a8,((void *)0x8c014e20),uVar3,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_clear(ar4 + 0x90,((void *)0x8c014e20),ar4 + 0x90,pcVar7));
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)uVar14;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar14;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar14);
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          in_dr0 = CONCAT44D(0x40000000,uVar14);
          *(undefined4 *)(unsigned)(ar4 + 0x2c4) = 0x40000000;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar14;
          in_dr0 = -0.00781250186264515;
          *(undefined8 *)(unsigned)(ar4 + 0x2c4) = 0xbf80000040000000;
        }
        pcVar7 = (code *)0x0;
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x15,0xffffffff,0));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        pcVar9 = ar4;
LAB_8c03ee06:
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        if (cVar24 == '\0') {
          uVar3 = SUB84(in_dr0,0);
          *(undefined4 *)(unsigned)(ar4 + 0x2e4) = 0x42200000;
        }
        else {
          uVar3 = 0x42200000;
          *(undefined8 *)(unsigned)(ar4 + 0x2e4) = 0x8042200000;
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar9,pcVar7));
        if (cVar24 == '\0') {
          uVar17 = CONCAT44(0x3f000000,uVar3);
          *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f000000;
        }
        else {
          uVar17 = 0x8c032a643f000000;
          *(undefined8 *)(unsigned)(ar4 + 0x278) = 0x8c032a643f000000;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar17 & 0xffffffff;
        }
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), rand_range(ar4,0,10,pcVar7));
        if (5 < iVar2) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 1096)), rand_range(ar4,0x3c,0x78,pcVar7));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = uVar3;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
          pcVar9 = (code *)0x12c;
          break;
        }
        uVar3 = 300;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else {
        if (iVar2 == 1) goto LAB_8c03ee06;
        if (iVar2 != 2) {
          if (iVar2 == 3) {
            *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
            if (cVar24 == '\0') {
              uVar3 = SUB84(in_dr0,0);
            }
            else {
              uVar3 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x278);
            }
            (*(int *)(fr0_ - 0x440)) = (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,pcVar9,pcVar7));
            iVar2 = (*(int *)(fr0_ - 0x440));
            if ((*(int *)(fr0_ - 0x440)) == 1) {
              pcVar9 = ((void *)0x8c033e68);
              (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,1,((void *)0x8c033e68),pcVar7));
            }
            if (cVar24 == '\0') {
              uVar19 = *(undefined4 *)(unsigned)(ar4 + 0x2e4);
            }
            else {
              uVar19 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x2c4);
            }
            puVar11 = ((undefined1 *)(fr0_ - 0x330));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_set_xyz(puVar11,iVar2,pcVar9,puVar11));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x340))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x330)),pcVar9,puVar11); });
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x340)),pcVar9,puVar11));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x340)),0xffffffff,((void *)0x8c022cb0),puVar11));
            puVar11 = ((undefined1 *)(fr0_ - 0x330));
            pcVar7 = ((void *)0x8c014a34);
            (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(puVar11,0xffffffff,((void *)0x8c014a34),puVar11));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar7,puVar11));
            pdVar6 = (double *)(unsigned)(ar4 + 0x2e4);
            if (cVar24 == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2e4),uVar3);
              dVar20 = CONCAT44D(0x3f4ccccd,uVar19);
            }
            else {
              dVar21 = *(double *)(unsigned)(ar4 + 0x2e4);
              dVar20 = 1.35860200283337e-311;
            }
            if (cVar23 == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) *
                                        F32HI(dVar20),SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 * dVar20;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)pdVar6 = (int)(D2U(dVar21) >> 0x20);
            }
            else {
              *pdVar6 = dVar21;
            }
            iVar2 = *(int *)(unsigned)(ar4 + 0x280);
            uVar3 = 0x280;
            *(int *)(unsigned)(ar4 + 0x280) = iVar2 + -1;
            if (iVar2 < 0) {
              *(undefined4 *)(unsigned)(ar4 + 300) = 1;
            }
            pcVar7 = ar4;
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x350)),pdVar6,0x280,ar4));
            (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x350)),pdVar6,uVar3,pcVar7));
            iVar2 = (int)(D2U(dVar21) >> 0x20);
            (*(int *)(fr0_ - 0x444)) = iVar2;
            if (cVar24 != '\0') {
              (*(int *)(fr0_ - 0x444)) = SUB84(dVar21,0);
              (*(int *)(fr0_ - 0x440)) = iVar2;
            }
            pcVar7 = ((void *)0x8c0231c8);
            (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(ar4 + 0x14,pdVar6,uVar3,((void *)0x8c0231c8)));
            uVar3 = (undefined4)(D2U(dVar21) >> 0x20);
            if (cVar24 == '\0') {
              dVar21 = CONCAT44D(uVar3,(*(int *)(fr0_ - 0x444)));
            }
            else {
              in_xd0 = CONCAT44((*(int *)(fr0_ - 0x440)),uVar3);
            }
            if (cVar23 == '\0') {
              fVar15 = F32LO(dVar21) - F32HI(dVar21);
            }
            else {
              fVar15 = SUB84(dVar21 - dVar21,0);
            }
            if (cVar24 == '\0') {
              *(float *)(unsigned)(ar4 + 0x224) = fVar15;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x224) = in_xd0;
            }
            uVar3 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x350)),0xffffffff,0x224,pcVar7));
            pcVar9 = ((void *)0x8c05ae54);
            (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,uVar3,((void *)0x8c05ae54),pcVar7));
          }
          break;
        }
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      pcVar10 = ar4 + 0xb0;
      pcVar7 = ((void *)0x8c033b98);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(pcVar10,uVar3,((void *)0x8c033b98),pcVar10))
      ;
      if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,pcVar7,pcVar10));
      }
      uVar12 = 0x2e4;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x304)),uVar3,pcVar7,0x2e4));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x314))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x304)),pcVar7,uVar12); });
      puVar11 = ((undefined1 *)(fr0_ - 0x314));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x14,puVar11,puVar11,uVar12));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x314)),0xffffffff,puVar11,uVar12));
      (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x304)),0xffffffff,puVar11,uVar12));
      pcVar10 = ar4 + 0x14;
      pcVar9 = ((void *)0x8c023a14);
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,pcVar10,((void *)0x8c023a14),uVar12));
      pcVar7 = ar4 + 0x2e4;
      if (cVar24 == '\0') {
        dVar21 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)pcVar7);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pcVar7;
        dVar21 = 3.051758532137683e-05;
      }
      if (cVar23 == '\0') {
        fVar15 = F32HI(dVar21);
        dVar21 = CONCAT44D(fVar15,F32LO(dVar21) * fVar15);
      }
      else {
        dVar21 = dVar21 * dVar21;
      }
      if (cVar24 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2e4) = SUB84(dVar21,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2e4) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c032ab0(ar4,pcVar10,pcVar9,pcVar7));
      (*(undefined4 *)(fr0_ - 0x434)) = (undefined4)(D2U(dVar21) >> 0x20);
      if (cVar24 == '\0') {
        dVar21 = CONCAT44D((*(undefined4 *)(fr0_ - 0x434)),*(undefined4 *)(unsigned)(ar4 + 0x2e4));
      }
      else {
        (*(undefined4 *)(fr0_ - 0x434)) = SUB84(dVar21,0);
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2e4);
      }
      if (cVar23 == '\0' && SUB84(dVar21,0) < F32HI(dVar21)) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 1;
      }
      dVar20 = 0.0;
      puVar11 = ((undefined1 *)(fr0_ - 0x324));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(puVar11,pcVar10,puVar11,pcVar7));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x324)),pcVar10,puVar11,pcVar7));
      uVar3 = (undefined4)(D2U(dVar21) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x438)) = uVar3;
      if (cVar24 != '\0') {
        (*(undefined4 *)(fr0_ - 0x438)) = SUB84(dVar21,0);
        (*(undefined4 *)(fr0_ - 0x434)) = uVar3;
      }
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(ar4 + 0x14,ar4 + 0x14,puVar11,pcVar7));
      uVar3 = (undefined4)(D2U(dVar21) >> 0x20);
      if (cVar24 == '\0') {
        dVar21 = CONCAT44D(uVar3,(*(undefined4 *)(fr0_ - 0x438)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x434)),uVar3);
      }
      if (cVar23 == '\0') {
        fVar15 = F32LO(dVar21) - F32HI(dVar21);
      }
      else {
        fVar15 = SUB84(dVar21 - dVar21,0);
      }
      if (cVar24 == '\0') {
        *(float *)(unsigned)(ar4 + 0x224) = fVar15;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x224) = in_xd0;
      }
      pcVar9 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x324)),0xffffffff,((void *)0x8c022cb0),pcVar7));
      if (cVar24 == '\0') {
        fVar15 = *(float *)(unsigned)(ar4 + 0x224);
        fVar18 = 80.0;
      }
      else {
        fVar15 = 80.0;
        fVar18 = -80.0;
      }
      if (cVar23 != '\0' || fVar15 <= fVar18) {
        if (cVar24 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x224),uVar19);
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),0xc2a00000);
        }
        else {
          dVar21 = *(double *)(unsigned)(ar4 + 0x224);
        }
        if (cVar23 == '\0') {
          bVar22 = F32HI(dVar21) < SUB84(dVar20,0);
        }
        else {
          bVar22 = dVar21 < dVar20;
        }
        if (!bVar22) break;
      }
      if (cVar24 == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c4),SUB84(dVar20,0));
        dVar20 = CONCAT44D(0xbf800000,fVar15);
      }
      else {
        dVar21 = *(double *)(unsigned)(ar4 + 0x2c4);
        dVar20 = -8.410980261839484e+168;
      }
      if (cVar23 == '\0') {
        dVar21 = CONCAT44D(F32HI(dVar21) *
                                  F32HI(dVar20),SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 * dVar20;
      }
      pcVar7 = (code *)0x2c4;
      if (cVar24 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2c4) = (int)(D2U(dVar21) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c4) = dVar21;
      }
    }
  }
  else {
override_jmp_8c03cc1e_case_7:
    pcVar13 = (code *)0x2;
  }
  (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031ab4(ar4,*(undefined4 *)(unsigned)(ar5[1] + 4),pcVar9,pcVar7));
  (*(unsigned *)(fr0_ - 0x36c) = (unsigned)(unsigned long)(pcVar13));
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,pcVar9,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,pcVar9,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(&(*(float *)(fr0_ - 0x54)),0xffffffff,pcVar9,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(float *)(fr0_ - 0x48)),0xffffffff,pcVar9,pcVar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x38)),0xffffffff,0xffffffff,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(uint *)(fr0_ - 0x2c)),0xffffffff,uVar3,pcVar7));
  return ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x36c));
}

__asm__(".globl _FUN_8c03c94c\n.set _FUN_8c03c94c, _FUN_8c03c94c_def\n");
