//@unit 8c070d7c
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
int FUN_8c070d7c_def(code *ar4,undefined4 *ar5,undefined4 ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c070d7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 300; for (int i_ = 0; i_ < 300; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  code *ar5_00;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 *ar6_00;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  ulonglong in_dr0 = 0;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double in_dr12 = 0;
  double in_dr14 = 0;
  ulonglong in_xd0 = 0;
  undefined8 in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  iVar6 = 1;
  pcVar4 = ((void *)0x8c03f480);
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); FUN_8c03f480(*ar5,ar5,((void *)0x8c03f480),ar7); });
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x4c)),pcVar4,ar7));
  ar5_00 = (code *)0xffffffff;
  pcVar4 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,((void *)0x8c022cb0),ar7));
  if (((ar5[4] == 3) || (ar5_00 = ar4 + 0x68, *(int *)(unsigned)ar5_00 != 0)) && (*(int *)(unsigned)(ar4 + 0x298) == 1))
  {
    if (((*(int *)(unsigned)(ar4 + 0x124) == 4) && (*(int *)(unsigned)(ar4 + 300) == 2)) &&
       (iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), get_field_6c_028cc4(*ar5,ar5_00,pcVar4,ar7)), iVar6 != 0)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); Vec3_scale(ar4 + 0x80,ar4 + 0x48,pcVar4,ar7); });
      ar6_00 = ((undefined1 *)(fr0_ - 0x6c));
      ({ unsigned long t0_ = (unsigned long)(ar6_00); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x5c)),*(int *)(unsigned)(ar5[1] + 8) + 4,ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x6c)),*(undefined4 *)(unsigned)(uint)ar5[1],ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 300)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x7c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7));
      pcVar4 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6_00,((void *)0x8c022cb0)));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,pcVar4));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), get_field_6c_028cc4(*ar5,uVar3,ar6_00,pcVar4));
      pcVar4 = ((void *)0x8c036988);
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c036988(uVar1,uVar3,ar6_00,((void *)0x8c036988)));
      (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,pcVar4));
    }
    uVar1 = ar5[3];
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07a68c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar5[4],uVar1));
    uVar3 = 0x80;
    (vsp = ((unsigned long)(fr0_ - 300)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,0x80,uVar1));
    (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar3,uVar1));
    return 1;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x124);
  if ((0x1f < iVar2) || (iVar2 < 0)) goto switchD_8c070f82_caseD_5;
  ar7 = (code *)(&(*(undefined1 *)(unsigned)0x8c070f8c))[iVar2];
                    
  switch(iVar2) {
  case 0:
  case 0xf:
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c030eb8(ar4 + 0x1fc,ar5_00,0x1fc,ar7));
    ar7 = (code *)(uint)ar5[3];
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar5[1] + 4));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c078fd0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar4,ar7));
    break;
  case 1:
    pcVar4 = (code *)((undefined1 *)(fr0_ - 0x2c));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), pure_virtual_stub(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar4,ar7));
    break;
  case 2:
    ar7 = (code *)(uint)ar5[6];
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07af10(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar5[4],ar7));
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x2c)),pcVar4,ar7));
    break;
  case 3:
    pcVar4 = (code *)(uint)ar5[6];
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07f76c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar4,ar7));
    break;
  case 4:
    ar7 = (code *)*ar5;
    pcVar4 = (code *)((undefined1 *)(fr0_ - 0x2c));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c077a38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar4,ar7));
    break;
  case 6:
    pcVar4 = (code *)(uint)ar5[6];
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07edac(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar4,ar7));
    break;
  case 7:
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031b58(ar4 + 0xb0,ar5_00,pcVar4,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,pcVar4,ar7));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c03c314(ar4,ar5_00,pcVar4,ar7));
      iVar6 = 0;
    }
    break;
  case 10:
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c076994(ar4,ar5,pcVar4,ar7));
    iVar2 = iVar6;
    (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],iVar6,pcVar4,ar7));
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),(int)(in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar9 = *(double *)(unsigned)(ar4 + 0x48);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar13 == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),fVar7);
    }
    else {
      uVar8 = *(undefined8 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
    }
    if (cVar12 == '\0' && (float)uVar8 < F32HI(uVar8)) {
      ar7 = ((void *)0x8c03c314);
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c03c314(ar4,iVar2,pcVar4,((void *)0x8c03c314)));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031748(ar4,iVar2,pcVar4,ar7));
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_dr0 = *(ulonglong *)(unsigned)(ar4 + 0x28);
      dVar9 = 2.651015428457012e+77;
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar7;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
    }
    break;
  case 0xb:
    (vsp = ((unsigned long)(fr0_ - 300)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x8c)),((undefined1 *)(unsigned)0x8c125e68),((void *)0x8c022c88),ar7));
    uVar1 = 0;
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x8c)),0,ar7));
    ar7 = ((void *)0x8c022cb0);
    (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,uVar1,((void *)0x8c022cb0)));
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x2c)),pcVar4,ar7));
    break;
  case 0xe:
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x2c)),pcVar4,ar7));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c082c50(ar4,ar5,pcVar4,ar7));
    if (iVar6 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
    }
    break;
  case 0x14:
    if (*(int *)(unsigned)(ar4 + 0x21c) == 1) {
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,pcVar4,ar7));
      pcVar4 = ar4 + 0x38;
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x3f000000,*(undefined4 *)(unsigned)pcVar4);
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)pcVar4;
        dVar9 = 3.73993469111571e-312;
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) * F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar13 == '\0') {
        *(float *)(unsigned)(ar4 + 0x38) = fVar7;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x38) = in_xd0;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,pcVar4,ar7));
      if (iVar2 == 1) {
        ar7 = (code *)0x0;
        uVar1 = 0;
        (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,((void *)0x8c033e68),ar7));
      }
      pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x2c)),pcVar4,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,pcVar4,ar7));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
        iVar6 = 0;
      }
    }
    else {
      if (cVar13 == '\0') {
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),*(undefined4 *)(unsigned)(ar5[3] + 8));
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),(int)in_dr0);
      }
      else {
        in_xd12 = *(undefined8 *)(unsigned)(ar5[3] + 8);
        dVar9 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar12 == '\0') {
        (*(float *)(fr0_ - 0x24)) = F32LO(in_dr12) - F32HI(dVar9);
      }
      else {
        (*(float *)(fr0_ - 0x24)) = SUB84(in_dr12 - dVar9,0);
      }
      if (cVar13 != '\0') {
        (*(float *)(fr0_ - 0x24)) = (float)in_xd12;
        (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_xd12 >> 0x20);
      }
      (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],ar5_00,pcVar4,ar7));
      if (cVar13 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)(D2U(dVar9) >> 0x20)
                                  );
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),SUB84(dVar9,0));
        dVar9 = in_xd14;
      }
      else {
        dVar10 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar12 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) - F32HI(dVar10));
      }
      else {
        in_dr14 = in_dr14 - dVar10;
      }
      if (cVar13 == '\0') {
        dVar10 = CONCAT44D((*(float *)(fr0_ - 0x28)),SUB84(dVar10,0));
      }
      else {
        dVar10 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
      }
      if (cVar12 == '\0') {
        bVar11 = SUB84(in_dr14,0) < F32HI(dVar10);
      }
      else {
        bVar11 = in_dr14 < dVar10;
      }
      if ((bVar11) && ((*(float *)(fr0_ - 0x28)) = SUB84(in_dr14,0), cVar13 != '\0')) {
        (*(float *)(fr0_ - 0x28)) = SUB84(dVar9,0);
        (*(float *)(fr0_ - 0x24)) = F32HI(dVar9);
      }
      (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],((undefined1 *)(fr0_ - 0x2c)),pcVar4,ar7));
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),SUB84(in_dr14,0));
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D(F32HI(dVar9) +
                                 F32HI(dVar10),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 + dVar10;
      }
      if (cVar13 == '\0') {
        dVar10 = CONCAT44D((*(float *)(fr0_ - 0x28)),SUB84(dVar10,0));
      }
      else {
        dVar10 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
      }
      fVar7 = F32HI(dVar9);
      if (cVar12 == '\0') {
        bVar11 = F32HI(dVar10) < fVar7;
      }
      else {
        bVar11 = dVar10 < dVar9;
      }
      if ((bVar11) && ((*(float *)(fr0_ - 0x28)) = fVar7, cVar13 != '\0')) {
        (*(float *)(fr0_ - 0x28)) = SUB84(dVar9,0);
        (*(float *)(fr0_ - 0x24)) = fVar7;
      }
      ar7 = (code *)(uint)ar5[3];
      pcVar4 = (code *)((undefined1 *)(fr0_ - 0x2c));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07baa0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar4,ar7));
    }
    break;
  case 0x16:
    ar7 = (code *)0x0;
    (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x2c)),pcVar4,ar7));
    iVar6 = 0;
    break;
  case 0x17:
    (vsp = ((unsigned long)(fr0_ - 300)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125e88),pcVar4,ar7));
    pcVar4 = (code *)((undefined1 *)(fr0_ - 0x2c));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07c0b8(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar4,ar7));
    break;
  case 0x19:
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
    iVar2 = *(int *)(unsigned)(ar4 + 300);
    if ((iVar2 < 5) && (-1 < iVar2)) {
                    
      switch(iVar2) {
      case 0:
        uVar5 = ar5[6];
        uVar3 = *(undefined4 *)(unsigned)(uint)ar5[1];
        uVar1 = 0x1e;
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c033474(ar4,0x1e,uVar3,uVar5));
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031748(ar4,uVar1,uVar3,uVar5));
        ar7 = (code *)0x0;
        uVar1 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),uVar1,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar1;
        if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
          ar7 = ar4 + 0xb0;
          (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(ar7,uVar1,((void *)0x8c033e68),ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar1,ar7));
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      case 1:
        if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        break;
      case 2:
        iVar2 = *(int *)(unsigned)(ar4 + 0x220);
        if (iVar2 == 3) {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,3,ar7));
          if (iVar2 == 1) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,iVar2,ar7));
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x128))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar4 + 0xb0,iVar2,ar7); });
          if (cVar13 == '\0') {
            in_dr0 = in_dr0 >> 0x20;
          }
          if (cVar12 != '\0' || (float)in_dr0 <= 0.0) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            ar7 = ar4;
          }
        }
        break;
      case 3:
        iVar2 = (vsp = ((unsigned long)(fr0_ - 300)), rand_range(ar4,0,10,ar7));
        if (((5 < iVar2) && (2 < *(int *)(unsigned)(ar4 + 0x128))) && (*(int *)(unsigned)(ar4 + 0x128) < 6)) {
          uVar5 = 0;
          uVar3 = 0xffffffff;
          uVar1 = 0x14;
          (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar3,uVar5));
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x128))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c032204(ar4 + 0xb0,uVar1,ar4 + 0xb0,0xb0); });
          ar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 300));
          pcVar4 = ar7 + 1;
          *(unsigned *)(unsigned)(ar4 + 300) = pcVar4;
          goto switchD_8c071656_caseD_4;
        }
        ar7 = (code *)0x0;
        (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        break;
      case 4:
switchD_8c071656_caseD_4:
        iVar2 = (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),pcVar4,ar7))
        ;
        if (iVar2 == 1) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x128))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c032204(ar4 + 0xb0,1,pcVar4,ar7); });
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          ar7 = ar4 + 0xb0;
          (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(ar7,uVar1,((void *)0x8c033e68),ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
          iVar6 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
    }
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x2c)),pcVar4,ar7));
    break;
  case 0x1a:
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031748(ar4,ar5_00,pcVar4,ar7));
    ar7 = (code *)0x0;
    uVar1 = 8;
    (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
    pcVar4 = ((void *)0x8c032ab0);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c032ab0(ar4,uVar1,((void *)0x8c032ab0),ar7));
    (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,pcVar4,ar7));
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x2c)),pcVar4,ar7));
    break;
  case 0x1b:
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x2c)),pcVar4,ar7));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07d904(ar4,*ar5,pcVar4,ar7));
    break;
  case 0x1e:
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x2c)),pcVar4,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),pcVar4,ar7));
    if (iVar2 == 1) {
      iVar6 = 0;
    }
    break;
  case 0x1f:
    ar7 = (code *)(uint)ar5[6];
    pcVar4 = (code *)((undefined1 *)(fr0_ - 0x2c));
    iVar6 = ({ unsigned long t0_ = (unsigned long)(ar5[3]); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); FUN_8c07f56c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar4,ar7); });
  }
switchD_8c070f82_caseD_5:
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,pcVar4,ar7));
  return iVar6;
}

__asm__(".globl _FUN_8c070d7c\n.set _FUN_8c070d7c, _FUN_8c070d7c_def\n");
//@unit 8c071a38
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
undefined4 FUN_8c071a38_def(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c071a38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 836; for (int i_ = 0; i_ < 836; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong *ar5_00;
  undefined4 uVar5;
  int a5;
  undefined4 uVar6;
  code *pcVar7;
  undefined *puVar8;
  uint ar6_00;
  undefined1 *puVar9;
  code *pcVar10;
  undefined *ar7_00;
  undefined4 unaff_r12 = 0;
  code *ar7_01;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  double *pdVar11;
  undefined4 in_fr1 = 0;
  float fVar12;
  ulonglong uVar13;
  float fVar16;
  double dVar14;
  undefined8 uVar15;
  undefined8 in_dr12 = 0;
  double dVar17;
  double in_dr14 = 0;
  double dVar18;
  undefined8 in_xd0 = 0;
  undefined8 in_xd12 = 0;
  undefined8 in_xd14 = 0;
  bool bVar19;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar11 = &(*(double *)(fr0_ - 0x10));
    (*(double *)(fr0_ - 0x10)) = CONCAT44D((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar11 = (double *)(unsigned)((undefined1 *)(fr0_ - 0x20));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
    (*(double *)(fr0_ - 0x10)) = in_dr14;
  }
  *(undefined4 *)(unsigned)((int)pdVar11 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)pdVar11 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)pdVar11 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)((int)pdVar11 + -0x10) = in_PR;
  ar7_01 = (code *)0x1;
  *(unsigned *)(unsigned)((int)pdVar11 + -800) = (undefined1 *)(unsigned)((int)pdVar11 + -0x8c);
  ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar11 + -800)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8); FUN_8c03f480(*ar5,1,ar6,ar7); });
  uVar1 = (undefined4)in_dr12;
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar11 + -0x20),(undefined1 *)(unsigned)((int)pdVar11 + -0x8c),ar6,ar7));
  pcVar10 = (code *)((int)pdVar11 + -0x8c);
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor(pcVar10,0xffffffff,ar6,pcVar10));
  ar5_00 = (ulonglong *)(unsigned)(ar5 + 8);
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44((int)*ar5_00,in_fr1);
    *(int *)(unsigned)(ar4 + 0x7c) = (int)*ar5_00;
  }
  else {
    uVar13 = *ar5_00;
    *(ulonglong *)(unsigned)(ar4 + 0x7c) = uVar13;
  }
  if (*(int *)(unsigned)(ar4 + 0x2cc) == 0) {
    if (ar5[4] != 3) {
      pcVar10 = (code *)(ar4 + 0x68);
      ar6 = *(int *)(unsigned)pcVar10;
      if (ar6 == 0) goto LAB_8c071c68;
    }
    ar5_00 = ((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x298));
    if (ar5_00 == (ulonglong *)(unsigned)0x1) {
      if ((*(int *)(unsigned)(ar4 + 0x124) == 4) && (*(int *)(unsigned)(ar4 + 300) == 2)) {
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), get_field_6c_028cc4(*ar5,1,ar6,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1e4) = uVar1;
        if (*(int *)(unsigned)((int)pdVar11 + -0x1e4) != 0) {
          *(unsigned *)(unsigned)((int)pdVar11 + -800) = (undefined1 *)(unsigned)((int)pdVar11 + -0x9c);
          uVar6 = 0x80;
          ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar11 + -800)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8); Vec3_scale(ar4 + 0x80,ar4 + 0x48,0x80,pcVar10); });
          *(unsigned *)(unsigned)((int)pdVar11 + -800) = (undefined1 *)(unsigned)((int)pdVar11 + -0xac);
          ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)pdVar11 + -800)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8); Vec3_scale((undefined1 *)(unsigned)((int)pdVar11 + -0x9c),*(int *)(unsigned)(ar5[1] + 8) + 4,uVar6,pcVar10); });
          *(unsigned *)(unsigned)((int)pdVar11 + -800) = (undefined1 *)(unsigned)((int)pdVar11 + -0xbc);
          pcVar10 = ((void *)0x8c023a34);
          ({ unsigned long t0_ = (unsigned long)(
                   *(undefined4 *)(unsigned)((int)pdVar11 + -800)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8); Vec3_add((undefined1 *)(unsigned)((int)pdVar11 + -0xac),*(undefined4 *)(unsigned)(uint)ar5[1],uVar6,((void *)0x8c023a34)); });
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar11 + -0x30),(undefined1 *)(unsigned)((int)pdVar11 + -0xbc),
                         uVar6,pcVar10));
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0xbc),0xffffffff,uVar6,pcVar10));
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0xac),0xffffffff,uVar6,pcVar10));
          uVar5 = 0xffffffff;
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x9c),0xffffffff,uVar6,pcVar10));
          uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), get_field_6c_028cc4(*ar5,uVar5,uVar6,pcVar10));
          *(undefined4 *)(unsigned)((int)pdVar11 + -0x1e8) = uVar1;
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c036988(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1e8),uVar5,uVar6,pcVar10));
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x30),0xffffffff,uVar6,pcVar10));
        }
      }
      *(undefined4 *)(unsigned)((int)pdVar11 + -800) = ar5[6];
      uVar5 = ar5[3];
      uVar1 = ar5[4];
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07a68c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],uVar1,uVar5));
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,uVar1,uVar5));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x1c0) = 1;
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x20),0xffffffff,uVar1,uVar5));
      return *(undefined4 *)(unsigned)((int)pdVar11 + -0x1c0);
    }
  }
LAB_8c071c68:
  iVar3 = *(int *)(unsigned)(ar4 + 0x124);
  pcVar7 = (code *)0x21;
  if ((iVar3 < 0x22) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      if ((ar5[4] == 1) || (*(int *)(unsigned)(ar4 + 0x2ac) == 2)) {
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c10277c((undefined1 *)(unsigned)((int)pdVar11 + -0x3c),ar5_00,ar5[7] + 4,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -800) = ar5[6];
        pcVar10 = (code *)((int)pdVar11 + -0x3c);
        pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar5[1] + 4));
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07a3cc(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1ec) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x1ec));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)pdVar11 + -0x3c),0xffffffff,pcVar7,pcVar10));
      }
      else {
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c030eb8(ar4 + 0x1fc,ar5_00,((void *)0x8c030eb8),ar4 + 0x1fc));
        *(undefined4 *)(unsigned)((int)pdVar11 + -800) = ar5[6];
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x324) = *ar5;
        pcVar10 = (code *)(uint)ar5[3];
        pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar5[1] + 4));
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c078fd0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1f0) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x1f0));
      }
      break;
    case 1:
      pcVar7 = (code *)((int)pdVar11 + -0x20);
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), pure_virtual_stub(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x23c) = uVar1;
      ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x23c));
      break;
    case 2:
      pcVar10 = (code *)(uint)ar5[6];
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07af10(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar5[4],pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -600) = uVar1;
      ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -600));
      pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)pdVar11 + -0x20),pcVar7,pcVar10));
      break;
    case 3:
      if (*(int *)(unsigned)(ar4 + 100) == 1) {
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031de8(ar4,0x1d,0x21,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x214) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x214));
        pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)pdVar11 + -0x20),pcVar7,pcVar10));
      }
      else {
        pcVar7 = (code *)(uint)ar5[6];
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07f76c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x218) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x218));
      }
      break;
    case 4:
      *(undefined4 *)(unsigned)((int)pdVar11 + -800) = *(undefined4 *)(unsigned)(ar5[1] + 8);
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x324) = *(undefined4 *)(unsigned)(ar5[1] + 4);
      pcVar10 = (code *)*ar5;
      pcVar7 = (code *)((int)pdVar11 + -0x20);
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c077a38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x254) = uVar1;
      ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x254));
      break;
    case 6:
      pcVar7 = (code *)(uint)ar5[6];
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07edac(ar4,pcVar10,pcVar7,pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x2a4) = uVar1;
      ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x2a4));
      break;
    case 7:
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031b58(ar4 + 0xb0,ar5_00,0x21,pcVar10));
      pcVar10 = (code *)0xb0;
      pcVar7 = (code *)(ar4 + 0xb0);
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), CAnimBody_AdvanceFrame_wrapper(pcVar7,ar5_00,pcVar7,0xb0));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x2a8) = uVar1;
      if (*(int *)(unsigned)((int)pdVar11 + -0x2a8) == 1) {
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c03c314(ar4,uVar1,pcVar7,pcVar10));
        ar7_01 = (code *)0x0;
      }
      break;
    case 10:
      if (*(int *)(unsigned)(ar4 + 100) == 1) {
        pcVar7 = (code *)(uint)ar5[4];
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c076750(ar4,*ar5,pcVar7,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x248) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x248));
      }
      else {
        pcVar7 = ((void *)0x8c076994);
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c076994(ar4,ar5,((void *)0x8c076994),pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x24c) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x24c));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar1,pcVar7,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x250) = (int)(uVar13 >> 0x20);
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),
                                    *(undefined4 *)(unsigned)((int)pdVar11 + -0x250));
        }
        else {
          *(ulonglong *)(unsigned)((int)pdVar11 + -0x250) = uVar13;
          in_xd0 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x250);
          dVar17 = *(double *)(unsigned)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = F32LO(dVar17) - F32HI(dVar17);
        }
        else {
          fVar12 = SUB84(dVar17 - dVar17,0);
        }
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(*(int *)(unsigned)(pcVar10 + 4),fVar12);
        }
        else {
          uVar15 = *(undefined8 *)(unsigned)(pcVar10 + 4);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar15 < F32HI(uVar15)) {
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c03c314(ar4,0x94,pcVar7,pcVar10));
        }
        else {
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031748(ar4,((void *)0x8c031748),pcVar7,pcVar10));
        }
      }
      *(int *)(unsigned)((int)pdVar11 + -0x2dc) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2dc) + 0x28)
                                 );
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2dc) + 0x28);
        dVar17 = 4.245243188319886e+78;
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = F32LO(dVar17) * F32HI(dVar17);
      }
      else {
        fVar12 = SUB84(dVar17 * dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2dc) + 0x28) = fVar12;
      }
      else {
        *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2dc) + 0x28) = in_xd0;
      }
      break;
    case 0xb:
      pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)pdVar11 + -0x20),pcVar7,pcVar10));
      if (*(int *)(unsigned)(ar4 + 100) == 1) {
        pcVar10 = ((void *)0x8c076198);
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c076198(ar4,(int *)(unsigned)(ar4 + 100),pcVar7,((void *)0x8c076198)));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x240) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x240));
      }
      else {
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar11 + -0xcc),((undefined1 *)(unsigned)0x8c125e68),pcVar7,pcVar10));
        pcVar7 = (code *)0x0;
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c0811b4(ar4,(undefined1 *)(unsigned)((int)pdVar11 + -0xcc),0,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x244) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x244));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0xcc),0xffffffff,pcVar7,pcVar10));
      }
      break;
    case 0xe:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)pdVar11 + -0x20),pcVar7,pcVar10));
      pcVar10 = (code *)(vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c082c50(ar4,ar5,pcVar7,pcVar10));
      *(unsigned *)(unsigned)((int)pdVar11 + -0x21c) = pcVar10;
      ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x21c));
      if (ar7_01 == (code *)0x0) {
        pcVar7 = (code *)0x214;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    case 0x10:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(int *)(unsigned)((int)pdVar11 + -0x2e0) = ar4;
      pcVar10 = (code *)0x1fc;
      pcVar7 = (code *)0x1fc;
      uVar1 = 0xfffffffb;
      *(byte *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2e0) + 0x1fc) =
           *(byte *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2e0) + 0x1fc) & 0xfb;
      iVar3 = *(int *)(unsigned)(ar4 + 300);
      if (iVar3 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031748(ar4,0xfffffffb,0x1fc,0x1fc));
        pcVar10 = (code *)0x0;
        pcVar7 = (code *)0x0;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0));
        *(int *)(unsigned)((int)pdVar11 + -0x2e4) = ar4;
        uVar1 = 300;
        *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2e4) + 300) =
             *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2e4) + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          *(undefined4 *)(unsigned)((int)pdVar11 + -0x2f8) = ar5[2];
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar11 + -0x10c),
                         ((undefined1 *)(unsigned)0x8c125f30) + *(int *)(unsigned)((int)pdVar11 + -0x2f8) * 0x10,((undefined1 *)(unsigned)0x8c125f30),
                         *(int *)(unsigned)((int)pdVar11 + -0x2f8) * 0x10));
          uVar5 = 1;
          pcVar10 = (code *)((int)pdVar11 + -0x10c);
          uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c0811b4(ar4,pcVar10,1,pcVar10));
          *(undefined4 *)(unsigned)((int)pdVar11 + -0x270) = uVar1;
          *(uint *)(unsigned)((int)pdVar11 + -0x1d8) = (uint)(*(int *)(unsigned)((int)pdVar11 + -0x270) == 0);
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x10c),0xffffffff,uVar5,pcVar10));
          if (*(int *)(unsigned)((int)pdVar11 + -0x1d8) == 0) {
            pcVar7 = (code *)0x0;
          }
          else {
            *(undefined4 *)(unsigned)((int)pdVar11 + -0x2fc) = ar5[2];
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125f30) + *(int *)(unsigned)((int)pdVar11 + -0x2fc) * 0x10,
                        *(int *)(unsigned)((int)pdVar11 + -0x1d8),pcVar10));
            *(int *)(unsigned)((int)pdVar11 + -0x300) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x300) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x300) + 300) + 1;
            pcVar10 = (code *)0x0;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
            pcVar7 = (code *)0xb0;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar10));
          }
        }
        else if (iVar3 == 3) {
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xfffffffb,0x1fc,0x1fc));
          ar7_01 = (code *)0x0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        }
        break;
      }
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,pcVar7,pcVar10));
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)pdVar11 + -0xdc),uVar1,ar5[3],pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x2e8) = ar5[2];
      *(unsigned *)(unsigned)((int)pdVar11 + -800) = (undefined1 *)(unsigned)((int)pdVar11 + -0xec);
      ar7_00 = ((undefined1 *)(unsigned)0x8c125f10);
      puVar8 = ((undefined1 *)(unsigned)0x8c125f10) + *(int *)(unsigned)((int)pdVar11 + -0x2e8) * 0x10;
      ({ unsigned long t0_ = (unsigned long)(
               *(undefined4 *)(unsigned)((int)pdVar11 + -800)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8); Vec3_add(puVar8,(undefined1 *)(unsigned)((int)pdVar11 + -0xdc),puVar8,((undefined1 *)(unsigned)0x8c125f10)); });
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x2ec) = ar5[2];
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar11 + -0xfc),
                     ((undefined1 *)(unsigned)0x8c125f30) + *(int *)(unsigned)((int)pdVar11 + -0x2ec) * 0x10,puVar8,ar7_00));
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c032d48(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)pdVar11 + -0xec),
                           (undefined1 *)(unsigned)((int)pdVar11 + -0xfc)));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x26c) = uVar1;
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x26c));
      ar6_00 = (uint)(pcVar10 == (code *)0x0);
      *(uint *)(unsigned)((int)pdVar11 + -0x1d4) = ar6_00;
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0xfc),0xffffffff,ar6_00,pcVar10));
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0xec),0xffffffff,ar6_00,pcVar10));
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0xdc),0xffffffff,ar6_00,pcVar10));
      if (*(int *)(unsigned)((int)pdVar11 + -0x1d4) == 0) {
        pcVar7 = (code *)0x0;
      }
      else {
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x2f0) = *(undefined4 *)(unsigned)(ar4 + 0x128);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031b68(ar4,(*(int *)(unsigned)((int)pdVar11 + -0x2f0) * 2 + *(int *)(unsigned)((int)pdVar11 + -0x2f0)) * 8
                         + -0x73d7f14c,*(int *)(unsigned)((int)pdVar11 + -0x1d4),pcVar10));
        *(int *)(unsigned)((int)pdVar11 + -0x2f4) = ar4;
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x2f4));
        pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x2f4));
        *(int *)(unsigned)(pcVar10 + 300) = *(int *)(unsigned)(pcVar7 + 300) + 1;
      }
      break;
    case 0x11:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(int *)(unsigned)((int)pdVar11 + -0x304) = ar4;
      pcVar7 = (code *)(uint)*(byte *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x304) + 0x1fc);
      uVar1 = 0xfffffffb;
      *(byte *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x304) + 0x1fc) =
           *(byte *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x304) + 0x1fc) & 0xfb;
      iVar3 = *(int *)(unsigned)(ar4 + 300);
      if (iVar3 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5[2] + 0x21,0xffffffff,0));
        uVar1 = 0xb0;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar5,uVar6));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), vec3_clear(ar4 + 0x244,uVar1,uVar5,uVar6));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(int *)(unsigned)((int)pdVar11 + -0x308) = ar4;
        uVar1 = 300;
        *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x308) + 300) =
             *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x308) + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          uVar1 = CAnimBody_AdvanceFrame_wrapper
                            (ar4 + 0xb0,((void *)0x8c026858),pcVar7,pcVar10);
          *(undefined4 *)(unsigned)((int)pdVar11 + -0x28c) = uVar1;
          if (*(int *)(unsigned)((int)pdVar11 + -0x28c) == 1) {
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c03c314(ar4,uVar1,((void *)0x8c03c314),pcVar10));
            uVar6 = 0;
            uVar5 = 0xffffffff;
            uVar1 = 0;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar5,uVar6));
            ar7_01 = (code *)0x0;
            *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
            pcVar10 = ((void *)0x8c030eb8);
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c030eb8(ar4 + 0x1fc,0,0x294,((void *)0x8c030eb8)));
            pcVar7 = (code *)0x12c;
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,300,pcVar10));
            *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          }
          else {
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)pdVar11 + -0x6c),uVar1,
                           *(int *)(unsigned)((int)pdVar11 + -0x28c),pcVar10));
            puVar4 = (undefined1 *)(unsigned)((int)pdVar11 + -0x7c);
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_zero(puVar4,((void *)0x8c022c4c),puVar4,pcVar10));
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),puVar4,pcVar10));
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)((int)pdVar11 + -0x290) = (int)(uVar13 >> 0x20);
            }
            else {
              *(ulonglong *)(unsigned)((int)pdVar11 + -0x290) = uVar13;
            }
            *(undefined4 *)(unsigned)((int)pdVar11 + -0x31c) = ar5[2];
            *(unsigned *)(unsigned)((int)pdVar11 + -800) = (undefined1 *)(unsigned)((int)pdVar11 + -0x168);
            uVar1 = *(undefined4 *)(unsigned)
                     (((undefined1 *)(unsigned)0x8c1378b8) +
                     (*(int *)(unsigned)((int)pdVar11 + -0x31c) * 2 + *(int *)(unsigned)((int)pdVar11 + -0x31c)) * 8);
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c034384(ar4 + 0xb0,uVar1,uVar1,
                         (*(int *)(unsigned)((int)pdVar11 + -0x31c) * 2 + *(int *)(unsigned)((int)pdVar11 + -0x31c)) * 8
                        ));
            pcVar10 = ((void *)0x8c023a14);
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign((undefined1 *)(unsigned)((int)pdVar11 + -0x6c),(undefined1 *)(unsigned)((int)pdVar11 + -0x168),
                        uVar1,((void *)0x8c023a14)));
            uVar1 = 0xffffffff;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x168),0xffffffff,0xffffffff,pcVar10));
            *(unsigned *)(unsigned)((int)pdVar11 + -800) = (undefined1 *)(unsigned)((int)pdVar11 + -0x178);
            iVar3 = ar4 + 0x244;
            ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)pdVar11 + -800)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8); Vec3_sub((undefined1 *)(unsigned)((int)pdVar11 + -0x6c),iVar3,uVar1,iVar3); });
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign((undefined1 *)(unsigned)((int)pdVar11 + -0x7c),(undefined1 *)(unsigned)((int)pdVar11 + -0x178),
                        uVar1,iVar3));
            pcVar10 = ((void *)0x8c022cb0);
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x178),0xffffffff,((void *)0x8c022cb0),iVar3));
            puVar4 = (undefined1 *)(unsigned)((int)pdVar11 + -0x6c);
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign(ar4 + 0x244,puVar4,pcVar10,iVar3));
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)pdVar11 + -0x188),puVar4,pcVar10,iVar3));
            pcVar7 = ((void *)0x8c023d04);
            uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c023d04((undefined1 *)(unsigned)((int)pdVar11 + -0x7c),
                                 (undefined1 *)(unsigned)((int)pdVar11 + -0x188),((void *)0x8c023d04),iVar3));
            *(undefined4 *)(unsigned)((int)pdVar11 + -0x294) = uVar1;
            *(undefined4 *)(unsigned)((int)pdVar11 + -0x1e0) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x294);
            pcVar10 = ((void *)0x8c022cb0);
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x188),0xffffffff,pcVar7,((void *)0x8c022cb0)));
            if (*(int *)(unsigned)((int)pdVar11 + -0x1e0) != 0) {
              (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), vec3_copy_8c02b5fc((undefined1 *)(unsigned)((int)pdVar11 + -0x194),*(undefined4 *)(unsigned)(ar5[1] + 4),
                                 pcVar7,pcVar10));
              puVar9 = (undefined1 *)(unsigned)((int)pdVar11 + -0x1a4);
              *(unsigned *)(unsigned)((int)pdVar11 + -800) = puVar9;
              puVar4 = (undefined1 *)(unsigned)((int)pdVar11 + -0x194);
              ({ unsigned long t0_ = (unsigned long)(
                           *(undefined4 *)(unsigned)((int)pdVar11 + -800)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8); FUN_8c023484((undefined1 *)(unsigned)((int)pdVar11 + -0x7c),puVar4,puVar9,pcVar10); });
              uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_length((undefined1 *)(unsigned)((int)pdVar11 + -0x1a4),puVar4,puVar9,pcVar10));
              *(undefined4 *)(unsigned)((int)pdVar11 + -0x298) = uVar1;
              (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign(ar4 + 0x14,*(undefined4 *)(unsigned)((int)pdVar11 + -0x298),puVar9,pcVar10));
              (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x1a4),0xffffffff,0xffffffff,pcVar10));
              pcVar7 = ((void *)0x8c014a34);
              (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0x194),0xffffffff,((void *)0x8c014a34)
                                 ,pcVar10));
            }
            puVar4 = (undefined1 *)(unsigned)((int)pdVar11 + -0x7c);
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_length_sq(puVar4,puVar4,pcVar7,pcVar10));
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)((int)pdVar11 + -0x29c) = (int)(uVar13 >> 0x20);
              uVar15 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar11 + -0x29c),(int)uVar13);
              *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x29c);
            }
            else {
              *(ulonglong *)(unsigned)((int)pdVar11 + -0x29c) = uVar13;
              uVar15 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x29c);
              *(undefined8 *)(unsigned)(ar4 + 0x28) = uVar15;
            }
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), CAnimBody_GetCurFrame(ar4 + 0xb0,puVar4,pcVar7,pcVar10));
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)((int)pdVar11 + -0x2a0) = (int)((ulonglong)uVar15 >> 0x20);
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x2a0),(int)uVar15);
            }
            else {
              *(undefined8 *)(unsigned)((int)pdVar11 + -0x2a0) = uVar15;
              dVar17 = *(double *)(unsigned)((int)pdVar11 + -0x2a0);
            }
            if (in_FPSCR_PR == '\0') {
              iVar3 = (int)F32HI(dVar17);
            }
            else {
              iVar3 = (int)dVar17;
            }
            pcVar10 = (code *)0x1a4;
            if ((iVar3 == 0x1a4) && (ar5[2] == 1)) {
              (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c03f39c(*ar5,((void *)0x8c03f39c),pcVar7,0x1a4));
              pcVar10 = (code *)(uint)ar5[6];
              pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
              (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c033474(ar4,2,pcVar7,pcVar10));
            }
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x7c),0xffffffff,pcVar7,pcVar10));
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x6c),0xffffffff,pcVar7,pcVar10));
          }
        }
        break;
      }
      pcVar10 = (code *)(ar4 + 0xb0);
      pcVar7 = ((void *)0x8c03f3ac);
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c03f3ac(pcVar10,uVar1,((void *)0x8c03f3ac),pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x274) = uVar1;
      iVar3 = *(int *)(unsigned)((int)pdVar11 + -0x274);
      if (iVar3 == 7) {
        *(int *)(unsigned)((int)pdVar11 + -0x30c) = ar4;
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x310) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x30c) + 0x294);
        *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x30c) + 0x294) = *(int *)(unsigned)((int)pdVar11 + -0x310) + 1;
        if (0x11 < *(int *)(unsigned)((int)pdVar11 + -0x310) + 1) {
          *(int *)(unsigned)((int)pdVar11 + -0x314) = ar4;
          pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x314));
          *(int *)(unsigned)(pcVar7 + 300) = *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x314) + 300) + 1;
        }
      }
      else {
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)pdVar11 + -0x4c),iVar3,pcVar7,pcVar10));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)pdVar11 + -0x5c),iVar3,pcVar7,pcVar10));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), CAnimBody_GetCurFrame(ar4 + 0xb0,iVar3,pcVar7,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x278) = (int)(uVar13 >> 0x20);
        }
        else {
          *(ulonglong *)(unsigned)((int)pdVar11 + -0x278) = uVar13;
        }
        uVar1 = ar5[2];
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x318) = uVar1;
        *(unsigned *)(unsigned)((int)pdVar11 + -800) = (undefined1 *)(unsigned)((int)pdVar11 + -0x11c);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c034384(ar4 + 0xb0,
                     *(undefined4 *)(unsigned)
                      (((undefined1 *)(unsigned)0x8c1378b8) +
                      (*(int *)(unsigned)((int)pdVar11 + -0x318) * 2 + *(int *)(unsigned)((int)pdVar11 + -0x318)) * 8),
                     pcVar7,uVar1));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign((undefined1 *)(unsigned)((int)pdVar11 + -0x4c),(undefined1 *)(unsigned)((int)pdVar11 + -0x11c),
                    pcVar7,uVar1));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x11c),0xffffffff,pcVar7,uVar1));
        *(unsigned *)(unsigned)((int)pdVar11 + -800) = (undefined1 *)(unsigned)((int)pdVar11 + -300);
        pcVar10 = ((void *)0x8c023ae0);
        ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)pdVar11 + -800)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8); Vec3_sub((undefined1 *)(unsigned)((int)pdVar11 + -0x4c),ar4 + 0x244,pcVar7,((void *)0x8c023ae0)); });
        puVar9 = (undefined1 *)(unsigned)((int)pdVar11 + -300);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign((undefined1 *)(unsigned)((int)pdVar11 + -0x5c),puVar9,puVar9,pcVar10));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -300),0xffffffff,puVar9,pcVar10));
        puVar4 = (undefined1 *)(unsigned)((int)pdVar11 + -0x4c);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign(ar4 + 0x244,puVar4,puVar9,pcVar10));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)pdVar11 + -0x13c),puVar4,puVar9,pcVar10));
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c023d04((undefined1 *)(unsigned)((int)pdVar11 + -0x5c),
                             (undefined1 *)(unsigned)((int)pdVar11 + -0x13c),puVar9,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x27c) = uVar1;
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1dc) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x27c);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x13c),0xffffffff,uVar1,pcVar10));
        if (*(int *)(unsigned)((int)pdVar11 + -0x1dc) != 0) {
          pcVar7 = ((void *)0x8c02b5fc);
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), vec3_copy_8c02b5fc((undefined1 *)(unsigned)((int)pdVar11 + -0x148),*(undefined4 *)(unsigned)(ar5[1] + 4),
                             ((void *)0x8c02b5fc),pcVar10));
          *(unsigned *)(unsigned)((int)pdVar11 + -800) = (undefined1 *)(unsigned)((int)pdVar11 + -0x158);
          puVar4 = (undefined1 *)(unsigned)((int)pdVar11 + -0x148);
          pcVar10 = ((void *)0x8c023484);
          ({ unsigned long t0_ = (unsigned long)(
                       *(undefined4 *)(unsigned)((int)pdVar11 + -800)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8); FUN_8c023484((undefined1 *)(unsigned)((int)pdVar11 + -0x5c),puVar4,pcVar7,((void *)0x8c023484)); });
          pcVar7 = ((void *)0x8c022f54);
          uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_length((undefined1 *)(unsigned)((int)pdVar11 + -0x158),puVar4,((void *)0x8c022f54),pcVar10));
          *(undefined4 *)(unsigned)((int)pdVar11 + -0x280) = uVar1;
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign(ar4 + 0x14,*(undefined4 *)(unsigned)((int)pdVar11 + -0x280),pcVar7,pcVar10));
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x158),0xffffffff,pcVar7,pcVar10));
          pcVar10 = ((void *)0x8c014a34);
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0x148),0xffffffff,pcVar7,
                             ((void *)0x8c014a34)));
        }
        puVar4 = (undefined1 *)(unsigned)((int)pdVar11 + -0x5c);
        pcVar7 = ((void *)0x8c022e78);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_length_sq(puVar4,((void *)0x8c022e78),puVar4,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x284) = (int)(uVar13 >> 0x20);
          uVar15 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar11 + -0x284),(int)uVar13);
          *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x284);
        }
        else {
          *(ulonglong *)(unsigned)((int)pdVar11 + -0x284) = uVar13;
          uVar15 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x284);
          *(undefined8 *)(unsigned)(ar4 + 0x28) = uVar15;
        }
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar7,puVar4,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x288) = (int)((ulonglong)uVar15 >> 0x20);
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x288),(int)uVar15);
        }
        else {
          *(undefined8 *)(unsigned)((int)pdVar11 + -0x288) = uVar15;
          dVar17 = *(double *)(unsigned)((int)pdVar11 + -0x288);
        }
        if (in_FPSCR_PR == '\0') {
          iVar3 = (int)F32HI(dVar17);
        }
        else {
          iVar3 = (int)dVar17;
        }
        if ((iVar3 == 0x127) && (ar5[2] == 1)) {
          pcVar10 = (code *)(uint)ar5[6];
          puVar4 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c033474(ar4,3,puVar4,pcVar10));
        }
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x5c),0xffffffff,puVar4,pcVar10));
        pcVar7 = (code *)((int)pdVar11 + -0x4c);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor(pcVar7,0xffffffff,pcVar7,pcVar10));
      }
      break;
    case 0x12:
      if (*(int *)(unsigned)(ar4 + 0x128) < 7) {
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1c4) = 2;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x20),0xffffffff,2,pcVar10));
        return *(undefined4 *)(unsigned)((int)pdVar11 + -0x1c4);
      }
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign((undefined1 *)(unsigned)((int)pdVar11 + -0x20),((undefined1 *)(unsigned)0x8c125e98),0x21,pcVar10));
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))
                ((int *)(unsigned)(uint)ar5[6],(undefined1 *)(unsigned)((int)pdVar11 + -0x20),pcVar7,pcVar10));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar11 + -0x25c) = (int)(uVar13 >> 0x20);
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)(unsigned)((int)pdVar11 + -0x25c));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1c),(int)uVar13);
      }
      else {
        *(ulonglong *)(unsigned)((int)pdVar11 + -0x25c) = uVar13;
        in_xd14 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x25c);
        dVar17 = *(double *)(unsigned)((int)pdVar11 + -0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar19 = F32HI(dVar17) < SUB84(in_dr14,0);
      }
      else {
        bVar19 = dVar17 < in_dr14;
      }
      if (bVar19) {
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)pdVar11 + -0x1c) = SUB84(in_dr14,0);
        }
        else {
          *(undefined8 *)(unsigned)((int)pdVar11 + -0x1c) = in_xd14;
        }
      }
      *(undefined4 *)(unsigned)((int)pdVar11 + -800) = *ar5;
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x324) = ar5[6];
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x328) = ar5[4];
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x32c) = *(undefined4 *)(unsigned)(ar5[1] + 4);
      pcVar10 = (code *)((undefined1 *)(unsigned)0x8c125ea8);
      pcVar7 = (code *)((int)pdVar11 + -0x20);
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07c5f8(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,((undefined1 *)(unsigned)0x8c125ea8)));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x260) = uVar1;
      ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x260));
      break;
    case 0x13:
      if (*(int *)(unsigned)(ar4 + 0x128) < 7) {
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1cc) = 2;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x20),0xffffffff,0x21,pcVar10));
        return *(undefined4 *)(unsigned)((int)pdVar11 + -0x1cc);
      }
      *(undefined4 *)(unsigned)((int)pdVar11 + -800) = ar5[6];
      pcVar10 = (code *)*ar5;
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07e828(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],*(undefined4 *)(unsigned)(ar5[1] + 4),pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x268) = uVar1;
      pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x268));
      ar7_01 = pcVar7;
      break;
    case 0x14:
      if (*(int *)(unsigned)(ar4 + 100) == 1) {
        if (in_FPSCR_SZ == '\0') {
          fVar12 = *(float *)(unsigned)((int)pdVar11 + -0x20);
          pcVar10 = (code *)0x447a0000;
        }
        else {
          fVar12 = 1000.0;
          pcVar10 = ((void *)0x8c07bec4);
        }
        if (in_FPSCR_PR == '\0' && (float)(uint)pcVar10 < fVar12) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)pdVar11 + -0x20) = 0x447a0000;
          }
          else {
            *(undefined8 *)(unsigned)((int)pdVar11 + -0x20) = 0x8c07bec4447a0000;
          }
        }
        pcVar10 = (code *)(uint)ar5[6];
        pcVar7 = (code *)((int)pdVar11 + -0x20);
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07bec4(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x224) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x224));
      }
      else if (*(int *)(unsigned)(ar4 + 0x21c) == 1) {
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x2d0) = *(undefined4 *)(unsigned)(ar4 + 0x128);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031b68(ar4,(*(int *)(unsigned)((int)pdVar11 + -0x2d0) * 2 + *(int *)(unsigned)((int)pdVar11 + -0x2d0)) * 8
                         + -0x73d7f14c,
                     (*(int *)(unsigned)((int)pdVar11 + -0x2d0) * 2 + *(int *)(unsigned)((int)pdVar11 + -0x2d0)) * 8,
                     pcVar10));
        *(int *)(unsigned)((int)pdVar11 + -0x2d4) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = CONCAT44D(0x3f000000,
                                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2d4) + 0x38));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2d4) + 0x38);
          dVar17 = 1.62172699419915e-311;
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = F32LO(dVar17) * F32HI(dVar17);
        }
        else {
          fVar12 = SUB84(dVar17 * dVar17,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2d4) + 0x38) = fVar12;
        }
        else {
          *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2d4) + 0x38) = in_xd0;
        }
        pcVar10 = (code *)(uint)ar5[1];
        pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)pcVar10);
        puVar4 = (undefined1 *)(unsigned)((int)pdVar11 + -0x20);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031c74(ar4,puVar4,pcVar7,pcVar10));
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar4,pcVar7,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x228) = uVar1;
        if (*(int *)(unsigned)((int)pdVar11 + -0x228) == 1) {
          uVar1 = 0;
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          pcVar10 = (code *)(ar4 + 0xb0);
          pcVar7 = ((void *)0x8c033e68);
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetFrame_033e6e(pcVar10,uVar1,((void *)0x8c033e68),pcVar10));
        }
        else if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
          *(undefined4 *)(unsigned)((int)pdVar11 + -0x2d8) = *(undefined4 *)(unsigned)(ar4 + 0x128);
          pcVar7 = (code *)0x8c280eb4;
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031b68(ar4,(*(int *)(unsigned)((int)pdVar11 + -0x2d8) * 2 + *(int *)(unsigned)((int)pdVar11 + -0x2d8)) *
                           8 + -0x73d7f14c,0x8c280eb4,pcVar10));
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
          ar7_01 = (code *)0x0;
        }
      }
      else {
        iVar3 = *(int *)(unsigned)(uint)ar5[6];
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x184))))((int *)(unsigned)(uint)ar5[6],iVar3,0x21,pcVar10));
        uVar5 = SUB84(in_dr14,0);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x22c) = (int)(uVar13 >> 0x20);
          fVar12 = *(float *)(unsigned)((int)pdVar11 + -0x22c);
          fVar16 = 900.0;
        }
        else {
          *(ulonglong *)(unsigned)((int)pdVar11 + -0x22c) = uVar13;
          fVar12 = 900.0;
          fVar16 = 1.07059e-42;
        }
        if (in_FPSCR_PR == '\0' && fVar12 < fVar16) {
          if (in_FPSCR_SZ == '\0') {
            fVar12 = *(float *)(unsigned)((int)pdVar11 + -0x20);
          }
          pcVar10 = (code *)((undefined4 *)(unsigned)0x8c125be0);
          if (in_FPSCR_SZ != '\0') {
            fVar12 = 0.0;
          }
          if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(unsigned)((int)pdVar11 + -0x20) = 0;
            }
            else {
              fVar12 = 0.0;
              *(undefined8 *)(unsigned)((int)pdVar11 + -0x20) = 0;
            }
          }
        }
        iVar3 = ar5[3];
        pdVar2 = (double *)(unsigned)(iVar3 + 8);
        if (in_FPSCR_SZ == '\0') {
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,uVar1);
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),fVar12);
        }
        else {
          dVar17 = *pdVar2;
          dVar14 = *(double *)(unsigned)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = CONCAT44D(F32HI(dVar17) -
                                    F32HI(dVar14),SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 - dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x18) = (int)(D2U(dVar17) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)pdVar11 + -0x18) = dVar17;
        }
        a5 = *(int *)(unsigned)(uint)ar5[6];
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a5 + 0x184))))((int *)(unsigned)(uint)ar5[6],a5,iVar3,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x230) = (int)(D2U(dVar14) >> 0x20);
          dVar18 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x230),uVar5);
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),SUB84(dVar14,0));
        }
        else {
          *(double *)(unsigned)((int)pdVar11 + -0x230) = dVar14;
          dVar18 = *(double *)(unsigned)((int)pdVar11 + -0x230);
          dVar14 = *(double *)(unsigned)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D(F32HI(dVar18) -
                                    F32HI(dVar14),SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 - dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1c),SUB84(dVar14,0));
        }
        else {
          dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x1c);
        }
        fVar12 = F32HI(dVar18);
        if (in_FPSCR_PR == '\0') {
          bVar19 = fVar12 < F32HI(dVar14);
        }
        else {
          bVar19 = dVar18 < dVar14;
        }
        if (bVar19) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((int)pdVar11 + -0x1c) = fVar12;
          }
          else {
            *(double *)(unsigned)((int)pdVar11 + -0x1c) = dVar18;
          }
        }
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))
                  ((int *)(unsigned)(uint)ar5[6],(undefined1 *)(unsigned)((int)pdVar11 + -0x20),
                   (undefined1 *)(unsigned)((int)pdVar11 + -0x20),ar4 + 0x48));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x234) = (int)(D2U(dVar14) >> 0x20);
          dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48));
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x234),SUB84(dVar14,0));
        }
        else {
          *(double *)(unsigned)((int)pdVar11 + -0x234) = dVar14;
          in_xd12 = *(undefined8 *)(unsigned)(ar4 + 0x48);
          dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x234);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                    F32LO(dVar17) + F32HI(dVar14));
        }
        else {
          dVar17 = dVar17 + dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1c),SUB84(dVar14,0));
        }
        else {
          dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          bVar19 = F32HI(dVar14) < SUB84(dVar17,0);
        }
        else {
          bVar19 = dVar14 < dVar17;
        }
        if (bVar19) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((int)pdVar11 + -0x1c) = SUB84(dVar17,0);
          }
          else {
            *(undefined8 *)(unsigned)((int)pdVar11 + -0x1c) = in_xd12;
          }
        }
        *(undefined4 *)(unsigned)((int)pdVar11 + -800) = ar5[6];
        pcVar10 = (code *)(uint)ar5[3];
        pcVar7 = (code *)((int)pdVar11 + -0x20);
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07baa0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x238) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x238));
      }
      break;
    case 0x16:
      pcVar10 = (code *)0x0;
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)pdVar11 + -0x20),pcVar7,pcVar10));
      ar7_01 = (code *)0x0;
      break;
    case 0x18:
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), vec3_copy_8c02b5fc((undefined1 *)(unsigned)((int)pdVar11 + -0x1b0),*(undefined4 *)(unsigned)(ar5[1] + 4),0x21,
                         pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -800) = 0;
      *(unsigned *)(unsigned)((int)pdVar11 + -0x324) = (undefined1 *)(unsigned)((int)pdVar11 + -0x1b0);
      pcVar10 = (code *)(uint)ar5[6];
      pcVar7 = (code *)*ar5;
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07d048(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x2b4) = uVar1;
      ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x2b4));
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0x1b0),0xffffffff,pcVar7,pcVar10));
      break;
    case 0x19:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar3 = *(int *)(unsigned)(ar4 + 300);
      if ((iVar3 < 5) && (-1 < iVar3)) {
        switch((&(*(undefined1 *)(unsigned)0x8c071f9c))[iVar3]) {
        case 0x8c071fb0:
          uVar6 = ar5[6];
          uVar5 = *(undefined4 *)(unsigned)(uint)ar5[1];
          uVar1 = 0x1e;
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c033474(ar4,0x1e,uVar5,uVar6));
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031748(ar4,uVar1,uVar5,uVar6));
          if (*(int *)(unsigned)(ar4 + 100) == 1) {
            uVar1 = 0;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0));
          }
          else {
            uVar1 = 0;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
          }
          puVar8 = ((undefined1 *)(unsigned)0x8c125e68);
          pcVar10 = ((void *)0x8c023334);
          uVar5 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),((void *)0x8c023334),uVar1));
          *(undefined4 *)(unsigned)((int)pdVar11 + -0x1fc) = uVar5;
          *(undefined4 *)(unsigned)(ar4 + 0x220) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x1fc);
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,puVar8,pcVar10,uVar1));
          }
          else {
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,puVar8,0xb0,uVar1));
          }
          *(int *)(unsigned)((int)pdVar11 + -700) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -700));
          *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -700) + 300) = *(int *)(unsigned)(pcVar10 + 300) + 1;
        case 0x8c0720b0:
          if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
            *(int *)(unsigned)((int)pdVar11 + -0x2c0) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2c0) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2c0) + 300) + 1;
          }
          break;
        case 0x8c0720ec:
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            uVar1 = s_CAnimBody_AdvanceFrame_033ba0
                              (ar4 + 0xb0,(&(*(undefined1 *)(unsigned)0x8c071f9c))[iVar3],
                               ((void *)0x8c033b98),pcVar10);
            *(undefined4 *)(unsigned)((int)pdVar11 + -0x200) = uVar1;
            if (*(int *)(unsigned)((int)pdVar11 + -0x200) == 1) {
              *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
              uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), rand_range(ar4,0,100,pcVar10));
              *(undefined4 *)(unsigned)((int)pdVar11 + -0x204) = uVar1;
              if (*(int *)(unsigned)((int)pdVar11 + -0x204) < 0x32) {
                *(int *)(unsigned)((int)pdVar11 + -0x2c4) = ar4;
                pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x2c4));
                *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2c4) + 300) = *(int *)(unsigned)(pcVar10 + 300) + 1;
              }
              else {
                ar7_01 = (code *)0x0;
                *(undefined4 *)(unsigned)(ar4 + 300) = 0;
              }
            }
          }
          else {
            uVar1 = 0xb0;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,0x21,pcVar10));
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,pcVar7,pcVar10));
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)((int)pdVar11 + -0x208) = (int)(uVar13 >> 0x20);
              uVar13 = (ulonglong)*(uint *)(unsigned)((int)pdVar11 + -0x208);
            }
            else {
              *(ulonglong *)(unsigned)((int)pdVar11 + -0x208) = uVar13;
            }
            if (in_FPSCR_PR != '\0' || (float)uVar13 <= 0.0) {
              pcVar10 = ((void *)0x8c033e68);
              (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,pcVar7,((void *)0x8c033e68)));
              *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
              uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), rand_range(ar4,0,100,pcVar10));
              *(undefined4 *)(unsigned)((int)pdVar11 + -0x20c) = uVar1;
              pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x20c));
              if ((int)pcVar10 < 0x32) {
                *(int *)(unsigned)((int)pdVar11 + -0x2c8) = ar4;
                *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2c8) + 300) =
                     *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2c8) + 300) + 1;
              }
              else {
                ar7_01 = (code *)0x0;
                *(undefined4 *)(unsigned)(ar4 + 300) = 0;
              }
            }
          }
          break;
        case 0x8c072254:
          if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
            pcVar7 = (code *)0xffffffff;
            uVar1 = 0x26;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x26,0xffffffff,0));
          }
          else {
            pcVar7 = (code *)0xffffffff;
            uVar1 = 0x30;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x30,0xffffffff,0));
          }
          pcVar10 = ((void *)0x8c033e68);
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,pcVar7,((void *)0x8c033e68)));
          *(int *)(unsigned)((int)pdVar11 + -0x2cc) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2cc) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x2cc) + 300) + 1;
        case 0x8c0722d2:
          uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,pcVar7,pcVar10));
          *(undefined4 *)(unsigned)((int)pdVar11 + -0x210) = uVar1;
          if (*(int *)(unsigned)((int)pdVar11 + -0x210) == 1) {
            ar7_01 = (code *)0x0;
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            uVar1 = 0;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
            pcVar10 = (code *)(ar4 + 0xb0);
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetFrame_033e6e(pcVar10,uVar1,((void *)0x8c033e68),pcVar10));
          }
        }
      }
      pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)pdVar11 + -0x20),pcVar7,pcVar10));
      break;
    case 0x1a:
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031748(ar4,ar5_00,0x21,pcVar10));
      if (*(int *)(unsigned)(ar4 + 100) == 1) {
        pcVar10 = (code *)0x0;
        uVar5 = 0xffffffff;
        uVar1 = 0x1d;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0));
      }
      else {
        pcVar10 = (code *)0x0;
        uVar5 = 0xffffffff;
        uVar1 = 8;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
      }
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c032ab0(ar4,uVar1,uVar5,pcVar10));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar11 + -0x1f8) = (int)(uVar13 >> 0x20);
      }
      else {
        *(ulonglong *)(unsigned)((int)pdVar11 + -0x1f8) = uVar13;
      }
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar1,uVar5,pcVar10));
      pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)pdVar11 + -0x20),pcVar7,pcVar10));
      break;
    case 0x1b:
      pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)pdVar11 + -0x20),pcVar7,pcVar10));
      if (*(int *)(unsigned)(ar4 + 100) == 1) {
        pcVar7 = ((void *)0x8c07dc50);
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07dc50(ar4,*ar5,((void *)0x8c07dc50),pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x2ac) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x2ac));
      }
      else {
        uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07d904(ar4,*ar5,pcVar7,pcVar10));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x2b0) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x2b0));
      }
      break;
    case 0x1d:
      if (*(int *)(unsigned)(ar4 + 0x128) < 7) {
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1c8) = 2;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x20),0xffffffff,0x21,pcVar10));
        return *(undefined4 *)(unsigned)((int)pdVar11 + -0x1c8);
      }
      *(undefined4 *)(unsigned)((int)pdVar11 + -800) = *ar5;
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x324) = ar5[6];
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x328) = *(undefined4 *)(unsigned)(ar4 + 100);
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar5[1] + 4));
      pcVar7 = (code *)((undefined1 *)(unsigned)0x8c125eb8);
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07e460(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(unsigned)0x8c125eb8),pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x264) = uVar1;
      ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x264));
      break;
    case 0x1e:
      pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      puVar4 = (undefined1 *)(unsigned)((int)pdVar11 + -0x20);
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c031c74(ar4,puVar4,pcVar7,pcVar10));
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar4,pcVar7,pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x220) = uVar1;
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x220));
      if (pcVar10 == (code *)0x1) {
        pcVar7 = (code *)0x0;
        ar7_01 = (code *)0x0;
      }
      break;
    case 0x1f:
      if (*(int *)(unsigned)(ar4 + 100) == 1) {
        pcVar7 = (code *)0x0;
        ar7_01 = (code *)0x0;
      }
      else {
        *(undefined4 *)(unsigned)((int)pdVar11 + -800) = ar5[3];
        pcVar10 = (code *)(uint)ar5[6];
        pcVar7 = (code *)((int)pdVar11 + -0x20);
        uVar1 = ({ unsigned long t0_ = (unsigned long)(
                             *(undefined4 *)(unsigned)((int)pdVar11 + -800)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)) - 8); FUN_8c07f56c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,pcVar10); });
        *(undefined4 *)(unsigned)((int)pdVar11 + -500) = uVar1;
        ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -500));
      }
      break;
    case 0x20:
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), vec3_copy_8c02b5fc((undefined1 *)(unsigned)((int)pdVar11 + -0x1bc),*(undefined4 *)(unsigned)(ar5[1] + 4),0x21,
                         pcVar10));
      *(undefined4 *)(unsigned)((int)pdVar11 + -800) = 1;
      *(unsigned *)(unsigned)((int)pdVar11 + -0x324) = (undefined1 *)(unsigned)((int)pdVar11 + -0x1bc);
      uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), FUN_8c07d048(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],*ar5,ar5[6]));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x2b8) = uVar1;
      ar7_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x2b8));
      pcVar7 = (code *)0xffffffff;
      pcVar10 = ar7_01;
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0x1bc),0xffffffff,0xffffffff,ar7_01));
    }
  }
  if ((((*(int *)(unsigned)(ar4 + 0x124) != 0x12) && (*(int *)(unsigned)(ar4 + 0x124) != 0x18)) &&
      (*(int *)(unsigned)(ar4 + 0x124) != 0x20)) &&
     (((*(int *)(unsigned)(ar4 + 0x124) != 0x1d && (*(int *)(unsigned)(ar4 + 0x124) != 0x11)) &&
      (*(int *)(unsigned)(ar4 + 0x2ac) == 0)))) {
    pcVar7 = (code *)(ar4 + 0x14);
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_assign(ar4 + 0x80,pcVar7,pcVar7,pcVar10));
  }
  *(unsigned *)(unsigned)((int)pdVar11 + -0x1d0) = ar7_01;
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 812 : (unsigned long)(fr0_ - 836)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x20),0xffffffff,pcVar7,pcVar10));
  return *(undefined4 *)(unsigned)((int)pdVar11 + -0x1d0);
}

__asm__(".globl _FUN_8c071a38\n.set _FUN_8c071a38, _FUN_8c071a38_def\n");
//@unit 8c0737fc
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
undefined4 FUN_8c0737fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0737fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  double dVar6;
  code *pcVar7;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  uVar1 = ar5;
  uVar3 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 128)), Vec3_length(((undefined1 *)(fr0_ - 0x3c)),uVar1,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),uVar1,uVar3,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar3,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar1,uVar3,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x2c)),uVar1,uVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x5c)),uVar3,ar7));
  if (cVar10 == '\0') {
    in_fr15 = F32HI(in_dr0);
  }
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,uVar3,ar7));
  ar5_00 = -1;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar3,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c073c9c(ar4,ar5_00,uVar3,ar7));
      uVar3 = (undefined4)in_dr0;
      uVar1 = ar6;
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x42340000,uVar3);
      }
      else {
        dVar6 = 2.89140188323616e-312;
      }
      if (cVar9 == '\0') {
        bVar8 = in_fr15 < F32HI(dVar6);
      }
      else {
        bVar8 = CONCAT44D(in_fr14,in_fr15) < dVar6;
      }
      if (bVar8) {
        *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
      }
      else {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x2c)),uVar1,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar1;
      }
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44(0x40d9999a,*(undefined4 *)(unsigned)(ar4 + 0x24));
      }
      else {
        in_dr0 = 0x4093333340d9999a;
      }
      if (cVar9 == '\0' && (float)in_dr0 < F32HI(in_dr0)) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar1 = 1;
        (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar1 = 4;
        (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar3,ar7));
      ar5_00 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(ar4 + 0x230,ar5_00,uVar3,ar7));
    case 1:
      fVar5 = F32HI(in_dr0);
      iVar2 = *(int *)(unsigned)(ar4 + 0x220);
      if (iVar2 == 0) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c034148(ar4 + 0xb0,0,uVar3,ar7));
        if (0 < iVar2) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        }
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        (vsp = ((unsigned long)(fr0_ - 128)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,uVar3,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c0230f0(ar4 + 0x230,ar5_00,uVar3,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7); });
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x7c)),uVar3,ar7));
        if (cVar10 == '\0') {
          pcVar7 = (code *)0x40a00000;
        }
        else {
          fVar5 = 5.0;
          pcVar7 = ((void *)0x8c022cb0);
        }
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,uVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,uVar3,ar7));
        if (cVar9 != '\0' || (float)(uint)pcVar7 <= fVar5) {
          ar7 = 0;
          uVar1 = 0xffffffff;
          iVar2 = *(int *)(unsigned)(ar4 + 0x220) + 6;
          (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar2,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar2,uVar1,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        }
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031764(ar4,ar6,ar5,ar7));
      uVar3 = ar5;
      break;
    case 3:
      uVar4 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031764(ar4,ar6,ar5,ar7));
      uVar1 = (undefined4)in_dr0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,ar6,ar5,ar7));
      uVar3 = ar5;
      if ((iVar2 < 0xb) && (-1 < iVar2)) {
                    
        switch(iVar2) {
        case 0:
          (vsp = ((unsigned long)(fr0_ - 128)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7));
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031e84(ar4,ar6,ar5,ar7));
          uVar3 = ar5;
          break;
        case 1:
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7));
          uVar3 = ar5;
          break;
        default:
          if (cVar10 == '\0') {
            dVar6 = CONCAT44D(0x42340000,uVar1);
          }
          else {
            dVar6 = 3.74020019962227e-312;
          }
          if (cVar9 == '\0') {
            bVar8 = in_fr15 < F32HI(dVar6);
          }
          else {
            bVar8 = CONCAT44D(in_fr14,in_fr15) < dVar6;
          }
          if (bVar8) {
            (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7));
            uVar3 = ar5;
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 128)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7));
            uVar3 = ar5;
          }
          break;
        case 4:
          break;
        }
      }
      break;
    case 4:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,uVar3,ar7));
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 128)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,uVar3,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c034148(ar4 + 0xb0,0,uVar3,ar7));
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031764(ar4,ar6,ar5,ar7));
      uVar3 = ar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar3,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0737fc\n.set _FUN_8c0737fc, _FUN_8c0737fc_def\n");
//@unit 8c073c9c
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
undefined4 FUN_8c073c9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c073c9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
  return 0x94;
}

__asm__(".globl _FUN_8c073c9c\n.set _FUN_8c073c9c, _FUN_8c073c9c_def\n");
//@unit 8c073cac
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
undefined4 FUN_8c073cac_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c073cac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 300; for (int i_ = 0; i_ < 300; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  int ar4_00;
  code *pcVar8;
  double *ar6_00;
  code *pcVar9;
  code *ar7_00;
  undefined4 ar7_01;
  undefined4 ar5_00;
  code *pcVar10;
  double in_dr0 = 0;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 in_dr4 = 0;
  undefined4 ain0;
  double in_dr12 = 0;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar14;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  ar5_00 = 1;
  pcVar10 = (code *)0xffffffff;
  pcVar8 = ar5;
  uVar7 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), Vec3_length(((undefined1 *)(fr0_ - 0x5c)),pcVar8,uVar7,ar7));
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_ctor_copy(((undefined4 *)(fr0_ - 0x34)),uVar1,uVar7,ar7));
  pcVar8 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,((void *)0x8c022cb0),ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); FUN_8c0230f0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x6c)),pcVar8,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 300)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 300)) - 8); FUN_8c0230f0(((undefined4 *)(fr0_ - 0x34)),((void *)0x8c0230f0),pcVar8,ar7); });
  pcVar9 = ((void *)0x8c022dac);
  (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x7c)),pcVar8,((void *)0x8c022dac)));
  dVar13 = in_dr0;
  if (cVar16 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar13 = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,pcVar8,pcVar9));
  uVar7 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,pcVar8,pcVar9));
  ar7_00 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x40)),uVar7,pcVar8,((void *)0x8c023d34)));
  pcVar9 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_set_zero(&(*(float *)(fr0_ - 0x4c)),((void *)0x8c023d34),pcVar8,ar7_00));
  iVar5 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar5) || (iVar5 < 0)) goto switchD_8c073da6_caseD_2;
                    
  switch(iVar5) {
  case 0:
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c073c9c(ar4,pcVar9,pcVar8,ar7_00));
    uVar1 = SUB84(in_dr0,0);
    pcVar8 = ar5;
    uVar7 = ar6;
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031bb4(ar4,ar5,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c02a1fc(ar4 + 0x254,pcVar8,uVar7,ar7_00));
    pcVar8 = ((void *)0x8c0321fc);
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c0321fc(ar4 + 0xb0,1,((void *)0x8c0321fc),ar7_00));
    if (cVar16 == '\0') {
      in_dr0 = CONCAT44D(0x42340000,uVar1);
    }
    else {
      in_dr0 = 6.79587413861226e-312;
    }
    if (cVar15 == '\0') {
      bVar14 = SUB84(in_dr14,0) < F32HI(in_dr0);
    }
    else {
      bVar14 = in_dr14 < in_dr0;
    }
    if (bVar14) {
      pcVar9 = (code *)0x0;
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
    }
    else {
      pcVar9 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), FUN_8c023334(ar4 + 0x14,((undefined4 *)(fr0_ - 0x34)),pcVar8,ar7_00));
      *(unsigned *)(unsigned)(ar4 + 0x220) = pcVar9;
    }
    iVar5 = *(int *)(unsigned)(ar4 + 0x220);
    if (iVar5 == 0) goto LAB_8c07441c;
    fVar6 = F32LO(in_dr14);
    if (iVar5 == 3) {
      if (cVar16 == '\0') {
        dVar11 = CONCAT44D(0x42f00000,SUB84(in_dr0,0));
      }
      else {
        dVar11 = -0.007812501948137651;
      }
      if (cVar15 == '\0') {
        bVar14 = F32HI(dVar11) < fVar6;
      }
      else {
        bVar14 = dVar11 < in_dr14;
      }
      if (bVar14) {
        ar7_01 = 0;
        pcVar8 = (code *)0xffffffff;
        pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,((void *)0x8c026db0),pcVar8,ar7_01));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_01));
        pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), deref_u32(uVar1,uVar7,pcVar8,ar7_01));
        ar7_00 = (code *)(ar4 + 0xb4);
        fVar6 = pfVar2[1];
        *(float *)(unsigned)ar7_00 = *pfVar2;
        *(float *)(unsigned)(ar4 + 0xb8) = fVar6;
        *(float *)(unsigned)(ar4 + 0xbc) = pfVar2[2];
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137648);
        }
        else {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376a8);
        }
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(SUB84(in_dr14,0),0x43340000);
        }
        else {
          in_xd0 = 0xf008c72143340000;
        }
        if (cVar15 == '\0') {
          in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
        }
      }
      else {
        if (cVar16 == '\0') {
          dVar11 = CONCAT44D(0x42700000,SUB84(dVar11,0));
        }
        else {
          dVar11 = -0.007812501933585736;
        }
        if (cVar15 == '\0') {
          bVar14 = fVar6 < F32HI(dVar11);
        }
        else {
          bVar14 = in_dr14 < dVar11;
        }
        if (bVar14) {
          if (*(int *)(unsigned)(ar4 + 0x124) == 0) {
            puVar4 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f13c);
            if (cVar16 == '\0') {
              uVar12 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x28),*(undefined4 *)(unsigned)puVar4);
            }
            else {
              in_xd0 = *puVar4;
              uVar12 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            }
            if (cVar15 != '\0' || (float)uVar12 <= F32HI(uVar12)) {
              ar7_00 = (code *)0x1;
              pcVar8 = (code *)0xffffffff;
              uVar7 = 0xd;
              pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xd,0xffffffff,1));
              ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c032204(ar4 + 0xb0,uVar7,pcVar8,ar7_00); });
              ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c074d14(ar4 + 0xb0,uVar7,pcVar8,ar7_00); });
              if (cVar16 == '\0') {
                dVar13 = CONCAT44D(SUB84(in_dr14,0),(int)((ulonglong)uVar12 >> 0x20));
                uVar12 = in_xd0;
              }
              in_xd0 = uVar12;
              if (cVar15 == '\0') {
                in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                          SUB84(dVar13,0));
              }
              else {
                in_dr0 = dVar13 / dVar13;
              }
              if (cVar16 == '\0') {
                *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
              }
              goto LAB_8c0743d2;
            }
          }
LAB_8c07441c:
          if (cVar16 == '\0') {
            in_dr0 = CONCAT44D(0x40933333,*(undefined4 *)(unsigned)(ar4 + 0x24));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x24);
            in_dr0 = 7782.3994228363035;
          }
          if (cVar15 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
            if (cVar16 == '\0') {
              in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
              in_dr0 = *(double *)(unsigned)(ar4 + 0x24);
            }
            if (cVar15 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
              ar7_00 = (code *)0x0;
              pcVar8 = (code *)0xffffffff;
              pcVar9 = (code *)0x1;
              pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
            }
            else {
              ar7_00 = (code *)0x0;
              pcVar8 = (code *)0xffffffff;
              pcVar9 = (code *)0x12;
              pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x12,0xffffffff,0));
            }
            if (*(int *)(unsigned)(ar4 + 0x124) == 0) {
              pcVar8 = (code *)0x64;
              iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), rand_range(ar4,0,100,ar7_00));
              if (iVar5 < 10) {
                ar7_00 = (code *)0x0;
                pcVar8 = (code *)0xffffffff;
                pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xf,0xffffffff,0));
              }
              pcVar9 = (code *)(ar4 + 0x24);
              if (cVar16 == '\0') {
                in_dr0 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x24));
              }
              else {
                in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x24);
                in_dr0 = -8.399316818224296e-251;
              }
              if (cVar15 == '\0') {
                fVar6 = F32HI(in_dr0);
                in_dr0 = CONCAT44D(fVar6,F32LO(in_dr0) * fVar6);
              }
              else {
                in_dr0 = in_dr0 * in_dr0;
              }
              if (cVar16 == '\0') {
                *(int *)(unsigned)pcVar9 = SUB84(in_dr0,0);
              }
              else {
                *(undefined8 *)(unsigned)pcVar9 = in_xd0;
              }
            }
          }
          else {
            ar7_00 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            pcVar9 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0));
            pcVar10 = pcVar9;
          }
          goto LAB_8c074542;
        }
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        uVar7 = 9;
        pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,uVar7,pcVar8,ar7_00));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_00));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), deref_u32(uVar1,uVar7,pcVar8,ar7_00));
        uVar7 = puVar3[1];
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137618);
        }
        else {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137678);
        }
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(SUB84(in_dr14,0),0x42700000);
        }
        else {
          in_xd0 = 0xeed02542700000;
        }
        if (cVar15 == '\0') {
          in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
        }
      }
LAB_8c0743d2:
      pcVar9 = ((void *)0x8c033e68);
      (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),pcVar8,ar7_00));
    }
    else if (iVar5 == 4) {
      if (cVar16 == '\0') {
        dVar11 = CONCAT44D(0x42f00000,SUB84(in_dr0,0));
      }
      else {
        dVar11 = -0.007812501948137651;
      }
      if (cVar15 == '\0') {
        bVar14 = F32HI(dVar11) < fVar6;
      }
      else {
        bVar14 = dVar11 < in_dr14;
      }
      if (bVar14) {
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        uVar7 = 3;
        pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,uVar7,pcVar8,ar7_00));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_00));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), deref_u32(uVar7,((void *)0x8c015b4c),pcVar8,ar7_00));
        uVar7 = puVar3[1];
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
        pcVar9 = (code *)puVar3[2];
        *(unsigned *)(unsigned)(ar4 + 0xbc) = pcVar9;
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137660);
        }
        else {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376c0);
        }
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(SUB84(in_dr14,0),0x43340000);
        }
        else {
          in_xd0 = 0xf008c72243340000;
        }
        if (cVar15 == '\0') {
          in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
        }
      }
      else {
        if (cVar16 == '\0') {
          dVar11 = CONCAT44D(0x42700000,SUB84(dVar11,0));
        }
        else {
          dVar11 = -0.007812501933585736;
        }
        if (cVar15 == '\0') {
          bVar14 = fVar6 < F32HI(dVar11);
        }
        else {
          bVar14 = in_dr14 < dVar11;
        }
        if (bVar14) {
          if (*(int *)(unsigned)(ar4 + 0x124) == 0) {
            puVar4 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f13c);
            if (cVar16 == '\0') {
              (*(undefined8 *)(fr0_ - 0xc0)) = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x28),*(undefined4 *)(unsigned)puVar4);
            }
            else {
              in_xd0 = *puVar4;
              (*(undefined8 *)(fr0_ - 0xc0)) = *(undefined8 *)(unsigned)(ar4 + 0x28);
            }
            if (cVar15 != '\0' || (float)(*(undefined8 *)(fr0_ - 0xc0)) <= F32HI((*(undefined8 *)(fr0_ - 0xc0)))) {
              ar7_00 = (code *)0x1;
              uVar1 = 0xffffffff;
              uVar7 = 0xe;
              pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,1));
              ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c032204(ar4 + 0xb0,uVar7,uVar1,ar7_00); });
              pcVar8 = ((void *)0x8c074d14);
              (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c074d14(ar4 + 0xb0,uVar7,((void *)0x8c074d14),ar7_00));
              if (cVar16 == '\0') {
                (*(undefined8 *)(fr0_ - 0xc0)) = CONCAT44(pcVar10,(int)((ulonglong)(*(undefined8 *)(fr0_ - 0xc0)) >> 0x20));
              }
              pcVar9 = (code *)0x240;
              uVar12 = (*(undefined8 *)(fr0_ - 0xc0));
              if (cVar16 == '\0') {
                dVar13 = CONCAT44D(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0xc0)));
                uVar12 = in_xd0;
              }
              in_xd0 = uVar12;
              if (cVar15 == '\0') {
                in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                          SUB84(dVar13,0));
              }
              else {
                in_dr0 = dVar13 / dVar13;
              }
              if (cVar16 == '\0') {
                *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
              }
              goto LAB_8c07412a;
            }
          }
          goto LAB_8c07441c;
        }
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        uVar7 = 10;
        pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,uVar7,pcVar8,ar7_00));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_00));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), deref_u32(uVar1,uVar7,pcVar8,ar7_00));
        pcVar9 = (code *)(ar4 + 0xb4);
        uVar7 = puVar3[1];
        *(undefined4 *)(unsigned)pcVar9 = *puVar3;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137630);
        }
        else {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137690);
        }
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(SUB84(in_dr14,0),0x42700000);
        }
        else {
          in_xd0 = 0x1eed02742700000;
        }
        if (cVar15 == '\0') {
          in_dr0 = CONCAT44D(F32HI(dVar13) / F32LO(dVar13),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
        }
      }
LAB_8c07412a:
      (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,pcVar9,pcVar8,ar7_00));
    }
LAB_8c074542:
    if (pcVar10 != (code *)0x6) {
      ar7_00 = (code *)0xb0;
      pcVar8 = (code *)(ar4 + 0xb0);
      (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetFrame_033e6e(pcVar8,pcVar9,pcVar8,0xb0));
    }
  case 1:
    uVar7 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,pcVar9,pcVar8,ar7_00));
    switch(uVar7) {
    case 1:
    case 4:
    case 0x10:
    case 0x11:
    case 0x12:
      iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034148(ar4 + 0xb0,0,pcVar8,ar7_00));
      if (0 < iVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      }
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
      pcVar8 = ar5;
      break;
    case 2:
    case 3:
    case 9:
    case 10:
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar8,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),pcVar8,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 300)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x88)),pcVar8,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 300)), object_dtor_delete(((undefined1 *)(fr0_ - 0x88)),0xffffffff,pcVar8,ar7_00));
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x254),(*(undefined4 *)(fr0_ - 0x40)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ - 0x40)));
        dVar13 = *(double *)(unsigned)(ar4 + 0x254);
      }
      if (cVar15 == '\0') {
        fVar6 = F32LO(dVar13) - F32HI(dVar13);
      }
      else {
        fVar6 = SUB84(dVar13 - dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar6);
      }
      else {
        dVar13 = *(double *)(unsigned)(ar4 + 0x240);
      }
      if (cVar15 == '\0') {
        (*(float *)(fr0_ - 0x4c)) = F32LO(dVar13) * F32HI(dVar13);
      }
      else {
        (*(float *)(fr0_ - 0x4c)) = SUB84(dVar13 * dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x3c)));
      }
      else {
        (*(float *)(fr0_ - 0x4c)) = (float)in_xd0;
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
        dVar13 = *(double *)(unsigned)(ar4 + 600);
      }
      if (cVar15 == '\0') {
        fVar6 = F32LO(dVar13) - F32HI(dVar13);
      }
      else {
        fVar6 = SUB84(dVar13 - dVar13,0);
      }
      ar6_00 = (double *)(unsigned)(ar4 + 0x240);
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)ar6_00,fVar6);
      }
      else {
        dVar13 = *ar6_00;
      }
      if (cVar15 == '\0') {
        (*(float *)(fr0_ - 0x48)) = F32LO(dVar13) * F32HI(dVar13);
      }
      else {
        (*(float *)(fr0_ - 0x48)) = SUB84(dVar13 * dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x25c),(*(undefined4 *)(fr0_ - 0x38)));
      }
      else {
        (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
        in_xd0 = CONCAT44(((undefined4 *)(fr0_ - 0x34))[0],(*(undefined4 *)(fr0_ - 0x38)));
        dVar13 = *(double *)(unsigned)(ar4 + 0x25c);
      }
      if (cVar15 == '\0') {
        fVar6 = F32LO(dVar13) - F32HI(dVar13);
      }
      else {
        fVar6 = SUB84(dVar13 - dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar6);
      }
      else {
        dVar13 = *(double *)(unsigned)(ar4 + 0x240);
      }
      if (cVar15 == '\0') {
        fVar6 = F32LO(dVar13) * F32HI(dVar13);
      }
      else {
        fVar6 = SUB84(dVar13 * dVar13,0);
      }
      (*(float *)(fr0_ - 0x44)) = fVar6;
      if (cVar16 != '\0') {
        (*(float *)(fr0_ - 0x44)) = (float)in_xd0;
        (*(undefined4 *)(fr0_ - 0x40)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      (vsp = ((unsigned long)(fr0_ - 300)), vec3_copy_8c023d8c(ar4 + 0x254,&(*(undefined4 *)(fr0_ - 0x40)),ar6_00,0x240));
      ar7_00 = (code *)&(*(float *)(fr0_ - 0x4c));
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07c318(ar4,ar6,ar5,ar7_00));
      if (*(int *)(unsigned)(ar4 + 0x44) == 0) {
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031e84(ar4,ar6,ar5,ar7_00));
      }
      iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7_00));
      pcVar8 = ar5;
      if (0 < iVar5) {
        if (cVar16 == '\0') {
          dVar13 = CONCAT44D(0x42340000,fVar6);
        }
        else {
          dVar13 = 524288.1293029785;
        }
        if (cVar15 == '\0') {
          bVar14 = SUB84(in_dr14,0) < F32HI(dVar13);
        }
        else {
          bVar14 = in_dr14 < dVar13;
        }
        if (bVar14) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          if (cVar16 == '\0') {
            dVar13 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x48));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
            dVar13 = -2.1831133447441e+159;
          }
          if (cVar15 == '\0') {
            dVar13 = (double)(ulonglong)(uint)(F32LO(dVar13) + F32HI(dVar13))
            ;
          }
          else {
            dVar13 = dVar13 + dVar13;
          }
          if (cVar16 == '\0') {
            *(int *)(unsigned)(ar4 + 0x48) = SUB84(dVar13,0);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x48) = in_xd0;
          }
        }
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar13,0));
        }
      }
      break;
    case 0xd:
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026d7c(ar4,pcVar9,pcVar8,ar7_00));
      (*(undefined4 *)(fr0_ - 0x110)) = SUB84(in_dr0,0);
      uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar16 == '\0') {
        in_dr0 = CONCAT44D(uVar7,SUB84(in_dr14,0));
        dVar13 = CONCAT44D(0x42700000,(*(undefined4 *)(fr0_ - 0x110)));
        (*(undefined4 *)(fr0_ - 0x110)) = uVar7;
      }
      else {
        dVar13 = 3.74021962707397e-312;
      }
      if (cVar15 == '\0') {
        in_dr0 = CONCAT44D(F32HI(in_dr0) /
                                  F32HI(dVar13),SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 / dVar13;
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00); });
      uVar7 = (undefined4)(D2U(dVar13) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x114)) = uVar7;
      if (cVar16 != '\0') {
        (*(undefined4 *)(fr0_ - 0x114)) = SUB84(dVar13,0);
        (*(undefined4 *)(fr0_ - 0x110)) = uVar7;
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00); });
      uVar7 = (undefined4)(D2U(dVar13) >> 0x20);
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(uVar7,(*(undefined4 *)(fr0_ - 0x114)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x110)),uVar7);
      }
      if (cVar15 == '\0') {
        fVar6 = F32HI(dVar13);
        in_dr0 = CONCAT44D(fVar6,F32LO(dVar13) * fVar6 * F32HI(in_dr0)
                                 );
      }
      else {
        in_dr0 = dVar13 * dVar13 * in_dr0;
      }
      if (cVar16 == '\0') {
        (*(float *)(fr0_ - 0x48)) = SUB84(in_dr0,0);
      }
      else {
        (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x44)) = F32HI(in_xd0);
      }
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07c318(ar4,ar6,ar5,&(*(float *)(fr0_ - 0x4c))));
      ar7_00 = (code *)0x1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
      pcVar8 = (code *)0xb0;
      ar4_00 = ar4 + 0xb0;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(ar4_00,ar4_00,0xb0,1));
      if (iVar5 == 1) {
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
          dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(in_dr0,0));
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar13 = *(double *)(unsigned)(ar4 + 0x38);
        }
        if (cVar15 == '\0') {
          fVar6 = F32LO(dVar13) / F32HI(dVar13);
        }
        else {
          fVar6 = SUB84(dVar13 / dVar13,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x3c) = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x3c) = in_xd0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
        uVar7 = 0;
        (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        ar7_00 = (code *)(ar4 + 0xb0);
        pcVar8 = ((void *)0x8c032204);
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c032204(ar7_00,uVar7,((void *)0x8c032204),ar7_00));
        ar5_00 = 0;
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar4_00,pcVar8,ar7_00); });
        if (cVar16 == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x240),(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          uVar12 = *(undefined8 *)(unsigned)(ar4 + 0x240);
        }
        if (cVar15 != '\0' || F32HI(uVar12) <= (float)uVar12) {
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c0321fc(ar4 + 0xb0,0xffffffff,pcVar8,ar7_00); });
        }
      }
      break;
    case 0xe:
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026d7c(ar4,pcVar9,pcVar8,ar7_00));
      (*(undefined4 *)(fr0_ - 0x124)) = SUB84(in_dr0,0);
      uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar16 == '\0') {
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),uVar7);
        dVar13 = CONCAT44D(0x42700000,(*(undefined4 *)(fr0_ - 0x124)));
        (*(undefined4 *)(fr0_ - 0x124)) = uVar7;
      }
      else {
        dVar13 = 3.74021962707397e-312;
      }
      if (cVar15 == '\0') {
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),
                                   F32LO(in_dr12) / F32HI(dVar13));
      }
      else {
        in_dr12 = in_dr12 / dVar13;
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00); });
      uVar7 = (undefined4)(D2U(dVar13) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x128)) = uVar7;
      if (cVar16 != '\0') {
        (*(undefined4 *)(fr0_ - 0x128)) = SUB84(dVar13,0);
        (*(undefined4 *)(fr0_ - 0x124)) = uVar7;
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00); });
      uVar7 = (undefined4)(D2U(dVar13) >> 0x20);
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(uVar7,(*(undefined4 *)(fr0_ - 0x128)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x124)),uVar7);
      }
      if (cVar15 == '\0') {
        fVar6 = F32LO(dVar13) * F32HI(dVar13) * F32LO(in_dr12);
      }
      else {
        fVar6 = SUB84(dVar13 * dVar13 * in_dr12,0);
      }
      if (cVar16 == '\0') {
        dVar13 = CONCAT44D(0xbf800000,fVar6);
      }
      else {
        dVar13 = 6.38186089609776e-312;
      }
      if (cVar15 == '\0') {
        fVar6 = F32HI(dVar13);
        dVar13 = CONCAT44D(fVar6,F32LO(dVar13) * fVar6);
      }
      else {
        dVar13 = dVar13 * dVar13;
      }
      if (cVar16 == '\0') {
        (*(float *)(fr0_ - 0x48)) = SUB84(dVar13,0);
      }
      else {
        (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x44)) = F32HI(in_xd0);
      }
      ar7_00 = (code *)&(*(float *)(fr0_ - 0x4c));
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c07c318(ar4,ar6,ar5,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7_00));
      if (iVar5 == 1) {
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
          dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar13,0));
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar13 = *(double *)(unsigned)(ar4 + 0x38);
        }
        if (cVar15 == '\0') {
          fVar6 = F32LO(dVar13) / F32HI(dVar13);
        }
        else {
          fVar6 = SUB84(dVar13 / dVar13,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x3c) = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x3c) = in_xd0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 300)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c032204(ar4 + 0xb0,((void *)0x8c032204),pcVar8,ar7_00); });
        ar5_00 = 0;
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7_00); });
        if (cVar16 == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x240),(int)(D2U(dVar13) >> 0x20));
        }
        else {
          uVar12 = *(undefined8 *)(unsigned)(ar4 + 0x240);
        }
        pcVar8 = ar5;
        if (cVar15 != '\0' || F32HI(uVar12) <= (float)uVar12) {
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 300)); FUN_8c0321fc(ar4 + 0xb0,0xffffffff,ar5,ar7_00); });
          pcVar8 = ar5;
        }
      }
      break;
    case 0xf:
      ar7_00 = ((void *)0x8c031e84);
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031e84(ar4,pcVar9,pcVar8,((void *)0x8c031e84)));
      pcVar8 = (code *)0x40;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034148(ar4 + 0xb0,0,0x40,ar7_00));
      if (0 < iVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        ar5_00 = 0;
      }
    }
    break;
  case 3:
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c026db0(ar4,ar6,ar5,ar7_00));
    pcVar8 = ar5;
    if ((iVar5 < 0x13) && (-1 < iVar5)) {
                    
      switch(iVar5) {
      case 0:
        iVar5 = ar4 + 0xb0;
        pcVar8 = ((void *)0x8c026858);
        (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(iVar5,((void *)0x8c026858),iVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031e84(ar4,pcVar8,iVar5,ar7_00));
        pcVar8 = (code *)0x64;
        ar7_00 = (code *)(vsp = ((unsigned long)(fr0_ - 300)), rand_range(ar4,0,100,ar7_00));
        if ((int)ar7_00 < 10) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        }
        break;
      default:
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7_00));
        pcVar8 = ar5;
        break;
      case 5:
        break;
      }
    }
    break;
  case 4:
    ar7_00 = ((void *)0x8c031764);
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031764(ar4,ar6,ar5,((void *)0x8c031764)));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar5,ar7_00));
    if (iVar5 == 0) {
      (vsp = ((unsigned long)(fr0_ - 300)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),ar5,ar7_00));
      pcVar8 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x128));
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c031b68(ar4,(int)pcVar8 * 0x18 + -0x73d7f14c,pcVar8,ar7_00));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7_00));
      pcVar8 = ar5;
    }
  }
switchD_8c073da6_caseD_2:
  (vsp = ((unsigned long)(fr0_ - 300)), object_dtor_delete(&(*(float *)(fr0_ - 0x4c)),0xffffffff,pcVar8,ar7_00));
  uVar7 = 0xffffffff;
  puVar3 = &(*(undefined4 *)(fr0_ - 0x40));
  (vsp = ((unsigned long)(fr0_ - 300)), object_dtor_delete(puVar3,0xffffffff,puVar3,0xffffffff));
  (vsp = ((unsigned long)(fr0_ - 300)), Vec3_dtor(((undefined4 *)(fr0_ - 0x34)),0xffffffff,puVar3,uVar7));
  return ar5_00;
}

__asm__(".globl _FUN_8c073cac\n.set _FUN_8c073cac, _FUN_8c073cac_def\n");
//@unit 8c074d14
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
undefined4 FUN_8c074d14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c074d14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c074d14\n.set _FUN_8c074d14, _FUN_8c074d14_def\n");
//@unit 8c074d1c
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
undefined4 FUN_8c074d1c_def(int ar4,undefined4 ar5,undefined4 ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c074d1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 132; for (int i_ = 0; i_ < 132; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *ar5_00;
  undefined4 ar6_00;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr0 = 0;
  double dVar8;
  code *pcVar9;
  undefined8 in_dr4 = 0;
  undefined4 ain0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  ar6_00 = 1;
  uVar4 = 1;
  iVar5 = -1;
  uVar1 = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 132)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 132)) - 8); Vec3_sub(ar6,ar5,1,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 132)), Vec3_length(((undefined1 *)(fr0_ - 0x54)),uVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_ctor_copy(((undefined4 *)(fr0_ - 0x2c)),uVar1,ar6_00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 132)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 132)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 132)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 132)) - 8); FUN_8c0230f0(((undefined4 *)(fr0_ - 0x2c)),uVar1,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x64)),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
  dVar8 = in_dr0;
  if (cVar12 == '\0') {
    in_fr15 = F32HI(in_dr0);
    dVar8 = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
  ar5_00 = (undefined4 *)(unsigned)0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x38)),ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_set_zero(&(*(float *)(fr0_ - 0x44)),ar5_00,ar6_00,ar7));
  iVar3 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar3) || (iVar3 < 0)) goto switchD_8c074e10_caseD_2;
                    
  switch(iVar3) {
  case 0:
    (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c073c9c(ar4,ar5_00,ar6_00,ar7));
    uVar6 = SUB84(in_dr0,0);
    uVar1 = ar5;
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c02a1fc(ar4 + 0x254,uVar1,ar6_00,ar7));
    if (cVar12 == '\0') {
      in_dr0 = CONCAT44D(0x42340000,uVar6);
    }
    else {
      in_dr0 = 4.41923885273116e-312;
    }
    if (cVar11 == '\0') {
      bVar10 = in_fr15 < F32HI(in_dr0);
    }
    else {
      bVar10 = CONCAT44D(in_fr14,in_fr15) < in_dr0;
    }
    if (bVar10) {
      ar5_00 = (undefined4 *)(unsigned)0x0;
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
    }
    else {
      ar5_00 = ((undefined4 *)(fr0_ - 0x2c));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c023334(ar4 + 0x14,ar5_00,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar1;
    }
    iVar3 = *(int *)(unsigned)(ar4 + 0x220);
    if (iVar3 == 0) {
      if (cVar12 == '\0') {
        in_dr0 = CONCAT44D(0x40be6666,*(undefined4 *)(unsigned)(ar4 + 0x24));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x24);
        in_dr0 = 5.3666392554967e-315;
      }
      if (cVar11 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
        iVar5 = (vsp = ((unsigned long)(fr0_ - 132)), rand_range(ar4,0,100,ar7));
        if (iVar5 < 0x1f) {
          ar7 = (float *)(unsigned)0x0;
          ar6_00 = 0xffffffff;
          ar5_00 = (undefined4 *)(unsigned)0x1;
          iVar5 = (vsp = ((unsigned long)(fr0_ - 132)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
        }
        else {
          ar7 = (float *)(unsigned)0x0;
          ar6_00 = 0xffffffff;
          ar5_00 = (undefined4 *)(unsigned)0xd;
          iVar5 = (vsp = ((unsigned long)(fr0_ - 132)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xd,0xffffffff,0));
        }
      }
      else {
        ar7 = (float *)(unsigned)0x0;
        ar6_00 = 0xffffffff;
        ar5_00 = (undefined4 *)(unsigned)0x4;
        iVar5 = (vsp = ((unsigned long)(fr0_ - 132)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0));
      }
    }
    else if (iVar3 == 3) {
      ar7 = (float *)(unsigned)0x0;
      ar6_00 = 0xffffffff;
      uVar1 = 9;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 132)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
      ar5_00 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), FUN_8c026db0(ar4,uVar1,ar6_00,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c03c0f0(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), deref_u32(uVar1,ar5_00,ar6_00,ar7));
      uVar1 = puVar2[1];
      *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
      *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar1;
      *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar2[2];
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376d8) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(in_fr15,0x42700000);
      }
      else {
        in_xd0 = 0x8c033e6842700000;
      }
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D(F32HI(dVar8) / F32LO(dVar8),SUB84(dVar8,0))
        ;
      }
      else {
        in_dr0 = dVar8 / dVar8;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 132)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    }
    else if (iVar3 == 4) {
      ar7 = (float *)(unsigned)0x0;
      ar6_00 = 0xffffffff;
      uVar1 = 10;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 132)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
      ar5_00 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), FUN_8c026db0(ar4,uVar1,ar6_00,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c03c0f0(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), deref_u32(uVar1,ar5_00,ar6_00,ar7));
      uVar1 = puVar2[1];
      *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
      *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar1;
      *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar2[2];
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137708) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(in_fr15,0x42700000);
      }
      else {
        in_xd0 = 0x8c033e6842700000;
      }
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D(F32HI(dVar8) / F32LO(dVar8),SUB84(dVar8,0))
        ;
      }
      else {
        in_dr0 = dVar8 / dVar8;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x240) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 132)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    }
    if (iVar5 != 6) {
      (vsp = ((unsigned long)(fr0_ - 132)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    }
  case 1:
    uVar1 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c026db0(ar4,ar5_00,ar6_00,ar7));
    switch(uVar1) {
    case 1:
    case 4:
    case 0xd:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
switchD_8c074e10_caseD_3:
      fVar7 = F32HI(in_dr0);
      uVar4 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c031764(ar4,ar6,ar5,ar7));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c026db0(ar4,ar6,ar5,ar7));
      ar6_00 = ar5;
      if ((iVar5 < 0xe) && (-1 < iVar5)) {
                    
        switch(iVar5) {
        case 0:
          (vsp = ((unsigned long)(fr0_ - 132)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7));
          (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c031e84(ar4,ar6,ar5,ar7));
          ar6_00 = 100;
          iVar5 = (vsp = ((unsigned long)(fr0_ - 132)), rand_range(ar4,0,100,ar7));
          if (iVar5 < 5) {
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          }
          break;
        case 1:
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7); });
          if (cVar12 == '\0') {
            pcVar9 = (code *)0x41880000;
          }
          else {
            fVar7 = 17.0;
            pcVar9 = ((void *)0x8c026858);
          }
          if (cVar11 != '\0' || (float)(uint)pcVar9 <= fVar7) {
            (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7));
            (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c031e84(ar4,((undefined1 *)(unsigned)0x8c125ef8),ar5,ar7));
            ar6_00 = ar5;
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 132)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,ar5,ar7));
            ar6_00 = ar5;
          }
          break;
        case 2:
        case 3:
        case 9:
        case 10:
          (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7));
          ar6_00 = ar5;
          break;
        case 4:
          (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c03f3ac(ar4 + 0xb0,ar6,ar5,ar7));
          ar6_00 = ar5;
          break;
        case 0xd:
          (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c032ab0(ar4,ar6,ar5,ar7));
          (vsp = ((unsigned long)(fr0_ - 132)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar6,ar5,ar7));
          ar6_00 = ar5;
        }
      }
      break;
    case 2:
    case 3:
    case 9:
    case 10:
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 132)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 132)), object_dtor_delete(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x254),(*(undefined4 *)(fr0_ - 0x38)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
        dVar8 = *(double *)(unsigned)(ar4 + 0x254);
      }
      if (cVar11 == '\0') {
        fVar7 = F32LO(dVar8) - F32HI(dVar8);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar7);
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x240);
      }
      if (cVar11 == '\0') {
        (*(float *)(fr0_ - 0x44)) = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        (*(float *)(fr0_ - 0x44)) = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x34)));
      }
      else {
        (*(float *)(fr0_ - 0x44)) = (float)in_xd0;
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
        dVar8 = *(double *)(unsigned)(ar4 + 600);
      }
      if (cVar11 == '\0') {
        fVar7 = F32LO(dVar8) - F32HI(dVar8);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar7);
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x240);
      }
      if (cVar11 == '\0') {
        (*(float *)(fr0_ - 0x40)) = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        (*(float *)(fr0_ - 0x40)) = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x25c),(*(undefined4 *)(fr0_ - 0x30)));
      }
      else {
        (*(float *)(fr0_ - 0x40)) = (float)in_xd0;
        in_xd0 = CONCAT44(((undefined4 *)(fr0_ - 0x2c))[0],(*(undefined4 *)(fr0_ - 0x30)));
        dVar8 = *(double *)(unsigned)(ar4 + 0x25c);
      }
      if (cVar11 == '\0') {
        fVar7 = F32LO(dVar8) - F32HI(dVar8);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar7);
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x240);
      }
      if (cVar11 == '\0') {
        fVar7 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar7 = SUB84(dVar8 * dVar8,0);
      }
      (*(float *)(fr0_ - 0x3c)) = fVar7;
      if (cVar12 != '\0') {
        (*(float *)(fr0_ - 0x3c)) = (float)in_xd0;
        (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      (vsp = ((unsigned long)(fr0_ - 132)), vec3_copy_8c023d8c(ar4 + 0x254,&(*(undefined4 *)(fr0_ - 0x38)),ar6_00,ar7));
      ar7 = &(*(float *)(fr0_ - 0x44));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c07c318(ar4,ar6,ar5,ar7));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7));
      ar6_00 = ar5;
      if (0 < iVar5) {
        if (cVar12 == '\0') {
          dVar8 = CONCAT44D(0x42340000,fVar7);
        }
        else {
          dVar8 = -2.1831133518023486e+159;
        }
        if (cVar11 == '\0') {
          bVar10 = in_fr15 < F32HI(dVar8);
        }
        else {
          bVar10 = CONCAT44D(in_fr14,in_fr15) < dVar8;
        }
        if (bVar10) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        }
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar8,0));
        }
      }
    }
    break;
  case 3:
    goto switchD_8c074e10_caseD_3;
  case 4:
    iVar5 = (vsp = ((unsigned long)(fr0_ - 132)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    if (iVar5 == 0) {
      (vsp = ((unsigned long)(fr0_ - 132)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),ar6_00,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7));
    }
    uVar4 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c031764(ar4,ar6,ar5,ar7));
    ar6_00 = ar5;
  }
switchD_8c074e10_caseD_2:
  (vsp = ((unsigned long)(fr0_ - 132)), object_dtor_delete(&(*(float *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 132)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_dtor(((undefined4 *)(fr0_ - 0x2c)),0xffffffff,((undefined4 *)(fr0_ - 0x2c)),0xffffffff));
  return uVar4;
}

__asm__(".globl _FUN_8c074d1c\n.set _FUN_8c074d1c, _FUN_8c074d1c_def\n");
//@unit 8c0755e0
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
undefined4 FUN_8c0755e0_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0755e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 236; for (int i_ = 0; i_ < 236; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int ar5_00;
  undefined4 *puVar5;
  undefined4 *ar6_00;
  undefined4 ain0;
  undefined4 uVar6;
  float fVar7;
  ulonglong in_dr0 = 0;
  double dVar8;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar6 = 1;
  puVar5 = ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length(((undefined1 *)(fr0_ - 0x60)),puVar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_copy(((undefined4 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(((undefined4 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x70)),((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7));
  if (cVar11 == '\0') {
    in_fr15 = (float)(in_dr0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x44)),uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x50)),uVar2,ar6_00,ar7));
  uVar2 = (undefined4)in_dr0;
  iVar4 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar4) || (iVar4 < 0)) goto switchD_8c0756cc_caseD_2;
  ar5_00 = iVar4 * 4;
                    
  switch(iVar4) {
  case 0:
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031748(ar4,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031700(ar4,ar5_00,ar6_00,ar7));
    puVar5 = ar5;
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D(0x42340000,uVar2);
    }
    else {
      dVar8 = 6.37147498041921e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = in_fr15 < F32HI(dVar8);
    }
    else {
      bVar9 = CONCAT44D(in_fr14,in_fr15) < dVar8;
    }
    if (bVar9) {
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
    }
    else {
      puVar5 = ((undefined4 *)(fr0_ - 0x28));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c023334(ar4 + 0x14,puVar5,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar2;
    }
    iVar4 = *(int *)(unsigned)(ar4 + 0x220);
    if (iVar4 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0x14;
      puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x29c));
      ar6_00 = (undefined4 *)(unsigned)0xb0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03c0f0(ar4 + 0xb0,puVar5,0xb0,ar7));
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 236)), deref_u32(uVar2,puVar5,ar6_00,ar7));
      uVar2 = puVar3[1];
      *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137828) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
    }
    else if (iVar4 == 3) {
      *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0x19;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03c0f0(ar4 + 0xb0,*(undefined4 *)(unsigned)(ar4 + 0x29c),ar6_00,ar7));
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 236)), deref_u32(uVar2,((void *)0x8c015b4c),ar6_00,ar7));
      puVar5 = (undefined4 *)(unsigned)(ar4 + 0xb4);
      uVar2 = puVar3[1];
      *puVar5 = *puVar3;
      *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137738) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
    }
    else if (iVar4 == 4) {
      *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0x1a;
      puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x29c));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03c0f0(ar4 + 0xb0,puVar5,ar6_00,ar7));
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 236)), deref_u32(uVar2,puVar5,ar6_00,ar7));
      uVar2 = puVar3[1];
      *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137768) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
    }
    (vsp = ((unsigned long)(fr0_ - 236)), vec3_clear(ar4 + 0x244,puVar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c02a1fc(ar4 + 0x254,puVar5,ar6_00,ar7));
  case 1:
    ar5_00 = *(int *)(unsigned)(ar4 + 0x29c);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c034148(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    if (iVar4 == 0) {
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar8 = 1.0035749846001845e+178;
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar7 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
    else if (iVar4 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    }
    else if (iVar4 == 2) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
switchD_8c0756cc_caseD_3:
      iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      if (iVar4 == 0x14) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        if (iVar4 == 7) {
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x41e00000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0xc441e00000;
          }
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x90)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031764(ar4,ar6,ar5,ar7));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0xa0)),ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar5,ar7));
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24c),(*(undefined4 *)(fr0_ - 0x30)));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
          dVar8 = *(double *)(unsigned)(ar4 + 0x24c);
        }
        if (cVar10 == '\0') {
          fVar7 = F32LO(dVar8) - F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x244,((undefined1 *)(fr0_ - 0x38)),ar5,ar7));
        ar6_00 = ar5;
      }
      else if ((iVar4 == 0x19) || (iVar4 == 0x1a)) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xb0)),ar6_00,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0xbc)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6_00,ar7));
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x40)));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ - 0x40)));
          dVar8 = *(double *)(unsigned)(ar4 + 600);
        }
        if (cVar10 == '\0') {
          fVar7 = F32HI(dVar8);
          dVar8 = CONCAT44D(fVar7,F32LO(dVar8) - fVar7);
        }
        else {
          dVar8 = dVar8 - dVar8;
        }
        uVar1 = in_xd0;
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0x4c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+4)),SUB84(dVar8,0));
          uVar1 = (*(undefined8 *)(fr0_ - 0x4c));
        }
        (*(undefined8 *)(fr0_ - 0x4c)) = uVar1;
        (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c023d8c(ar4 + 0x254,((undefined1 *)(fr0_ - 0x50)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xc8)),((undefined1 *)(fr0_ - 0x50)),ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0xc8)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xd8)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6_00,ar7));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6_00,ar7));
        if (iVar4 == 1) {
          (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
          if (cVar11 == '\0') {
            dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),(int)(D2U(dVar8) >> 0x20));
          }
          else {
            dVar8 = *(double *)(unsigned)(ar4 + 0x48);
          }
          if (cVar10 == '\0' && F32HI(dVar8) < SUB84(dVar8,0)) {
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
            uVar6 = 0;
          }
        }
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,ar6_00,ar7); });
        if (cVar10 == '\0') {
          iVar4 = (int)F32HI(dVar8);
        }
        else {
          iVar4 = (int)dVar8;
        }
        if (iVar4 == 0x10) {
          (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c033474(ar4,0x1c,ar5,ain0));
          ar6_00 = ar5;
          ar7 = ain0;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
    }
    break;
  case 3:
    goto switchD_8c0756cc_caseD_3;
  case 4:
    iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    if (((iVar4 != 0x14) && (iVar4 != 0x19)) && (iVar4 != 0x1a)) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined4 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      return 1;
    }
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031764(ar4,ar6,ar5,ar7));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7));
    if (iVar4 == 1) {
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      ar7 = 0;
      ar6_00 = (undefined4 *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      uVar6 = 0;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7); });
      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0xe8)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar5,ar7));
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24c),(*(undefined4 *)(fr0_ - 0x30)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
        dVar8 = *(double *)(unsigned)(ar4 + 0x24c);
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar8) - F32HI(dVar8);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x244,((undefined1 *)(fr0_ - 0x38)),ar5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
      ar6_00 = ar5;
    }
  }
switchD_8c0756cc_caseD_2:
  (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined4 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c0755e0\n.set _FUN_8c0755e0, _FUN_8c0755e0_def\n");
//@unit 8c075ef4
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
undefined4 FUN_8c075ef4_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c075ef4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  bool bVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  int ar5_00;
  undefined4 uVar5;
  float fVar6;
  double in_dr0 = 0;
  code *pcVar8;
  double dVar7;
  double in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 1;
  iVar3 = *(int *)(unsigned)(ar4 + 300);
  if (iVar3 == 0) {
    uVar4 = 0;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c034148(ar4 + 0xb0,0,ar6,ar7));
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        if (iVar3 != 2) {
          return 1;
        }
        (vsp = ((unsigned long)(fr0_ - 76)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7));
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
  }
  else {
    if (iVar3 == 1) {
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c031748(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02a1fc(ar4 + 0x264,ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar11 == '\0') {
        fVar6 = F32HI(in_dr0);
        pcVar8 = (code *)0x42340000;
        in_dr0 = in_xd0;
      }
      else {
        fVar6 = 45.0;
        pcVar8 = ((void *)0x8c022cb0);
      }
      bVar1 = cVar10 != '\0';
      bVar9 = fVar6 <= (float)(uint)pcVar8;
      ar5 = (undefined *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
      if (bVar1 || bVar9) {
        *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
      }
      else {
        ar5 = ((undefined1 *)(unsigned)0x8c125e68);
        uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar4;
      }
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02327c(ar4 + 0x14,ar5,ar6,ar7));
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),pcVar8);
        dVar2 = in_dr0;
      }
      else {
        dVar2 = CONCAT44D(pcVar8,fVar6);
        dVar7 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (cVar10 == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0xbf800000,fVar6);
      }
      else {
        dVar7 = -8.625520112574138e-251;
      }
      if (cVar10 == '\0') {
        fVar6 = F32HI(dVar7);
        in_dr0 = CONCAT44D(fVar6,F32LO(dVar7) * fVar6);
      }
      else {
        in_dr0 = dVar7 * dVar7;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x268) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x268) = dVar2;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else if (iVar3 != 2) {
      return 1;
    }
    fVar6 = F32HI(in_dr0);
    iVar3 = *(int *)(unsigned)(ar4 + 0x260);
    if (iVar3 == 0) {
      (vsp = ((unsigned long)(fr0_ - 76)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
        (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03c314(ar4,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar5 = 0;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar11 == '\0') {
        pcVar8 = (code *)0x42aa0000;
      }
      else {
        fVar6 = 85.0;
        pcVar8 = ((void *)0x8c02b5fc);
      }
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
      if (cVar10 != '\0' || fVar6 <= (float)(uint)pcVar8) {
        if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
          ar5_00 = *(int *)(unsigned)(ar4 + 0x260) + 2;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c034148(ar4 + 0xb0,ar5_00,ar6,ar7));
          if (iVar3 != 0) {
            (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03c314(ar4,ar5_00,ar6,ar7));
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            uVar5 = 0;
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 76)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7));
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 76)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 76)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x38)),ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x48)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 76)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
      }
    }
  }
  return uVar5;
}

__asm__(".globl _FUN_8c075ef4\n.set _FUN_8c075ef4, _FUN_8c075ef4_def\n");
//@unit 8c076198
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
undefined4 FUN_8c076198_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c076198";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 240; for (int i_ = 0; i_ < 240; i_++) z_[i_] = 0; }
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *ar5_00;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0 = 0;
  code *pcVar8;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  iVar4 = *(int *)(unsigned)(ar4 + 300);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar10 == '\0') {
        uVar3 = CONCAT44(0x42340000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        uVar3 = 0x8c022cb042340000;
        in_xd0 = in_dr0;
      }
      in_dr0 = uVar3;
      bVar1 = cVar9 == '\0';
      fVar6 = (float)in_dr0;
      uVar2 = (ulonglong)in_dr0 >> 0x20;
      ar5 = -1;
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
      if (bVar1 && (float)uVar2 < fVar6) {
        ar5_00 = ((undefined1 *)(unsigned)0x8c125e68);
        uVar5 = (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar5;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
        if (cVar10 == '\0') {
          uVar3 = CONCAT44(0x42aa0000,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          uVar3 = 0xbf80000042aa0000;
          in_xd0 = in_dr0;
        }
        in_dr0 = uVar3;
        bVar1 = cVar9 != '\0';
        fVar6 = (float)in_dr0;
        uVar2 = (ulonglong)in_dr0 >> 0x20;
        (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
        if (bVar1 || (float)uVar2 <= fVar6) {
          if (*(int *)(unsigned)(ar4 + 0x260) == 3) {
            (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c07f1e4(ar4,0x19,((undefined1 *)(unsigned)0x8c137738) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18,ar7));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c07f1e4(ar4,0x1a,((undefined1 *)(unsigned)0x8c137768) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18,ar7));
          }
          ar7 = 0;
          ar6 = 0xffffffff;
          ar5 = *(int *)(unsigned)(ar4 + 0x260) + 0x16;
          (vsp = ((unsigned long)(fr0_ - 240)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 240)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
        }
        else {
          ar7 = 0;
          ar6 = 0xffffffff;
          ar5 = *(int *)(unsigned)(ar4 + 0x260) + 0x18;
          (vsp = ((unsigned long)(fr0_ - 240)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 240)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else if (iVar4 != 2) {
      if (iVar4 != 3) {
        return 1;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
      fVar6 = F32HI(in_dr0);
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar10 == '\0') {
        pcVar8 = (code *)0x42340000;
      }
      else {
        fVar6 = 45.0;
        pcVar8 = ((void *)0x8c022cb0);
      }
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7));
      if (cVar9 == '\0' && (float)(uint)pcVar8 < fVar6) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c034148(ar4 + 0xb0,*(int *)(unsigned)(ar4 + 0x260) + 0x18,ar6,ar7));
        if (iVar4 == 0) {
          return 1;
        }
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        return 0;
      }
      iVar4 = (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7));
      if (iVar4 == 0) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      return 0;
    }
    fVar6 = F32HI(in_dr0);
    iVar4 = *(int *)(unsigned)(ar4 + 0x260);
    if (iVar4 == 0) {
      (vsp = ((unsigned long)(fr0_ - 240)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) != 0) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c03c314(ar4,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      return 0;
    }
    if ((iVar4 != 3) && (iVar4 != 4)) {
      return 1;
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 240)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar4 != 1) {
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xec))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 240)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x70)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x14)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
        dVar7 = *(double *)(unsigned)(ar4 + 600);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      uVar3 = in_xd0;
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x20)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+4)),fVar6);
        uVar3 = (*(undefined8 *)(fr0_ - 0x20));
      }
      (*(undefined8 *)(fr0_ - 0x20)) = uVar3;
      (vsp = ((unsigned long)(fr0_ - 240)), vec3_copy_8c023d8c(ar4 + 0x254,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x7c)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x8c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), object_dtor_delete(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
      return 1;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
    if (cVar10 == '\0') {
      pcVar8 = (code *)0x42aa0000;
    }
    else {
      fVar6 = 85.0;
      pcVar8 = ((void *)0x8c022cb0);
    }
    (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
    if (cVar9 != '\0' || (float)(uint)pcVar8 <= fVar6) {
      return 1;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    return 1;
  }
  uVar5 = 0x13;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7));
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      if (iVar4 != 2) goto LAB_8c076216;
      (vsp = ((unsigned long)(fr0_ - 240)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar6,ar7));
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
LAB_8c076216:
  (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c031748(ar4,uVar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c031700(ar4,uVar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c076198\n.set _FUN_8c076198, _FUN_8c076198_def\n");
//@unit 8c076750
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
undefined4 FUN_8c076750_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c076750";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar2 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x1c)),iVar2,ar7));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,iVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c053724(ar5,uVar4,iVar2,ar7));
  if ((char)uVar1 == '\0') {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c031748(ar4,uVar4,iVar2,ar7));
    iVar3 = *(int *)(unsigned)(ar4 + 0x260);
    if (iVar3 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar2,ar7));
      if (iVar2 == 1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), rand_range(ar4,0,100,ar7));
        if (((iVar2 == 0) && (2 < *(int *)(unsigned)(ar4 + 0x128))) && (*(int *)(unsigned)(ar4 + 0x128) < 6)) {
          ar7_00 = 0;
          uVar4 = 0xffffffff;
          uVar1 = 0x13;
          (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
        }
        else {
          ar7_00 = 0;
          uVar4 = 0xffffffff;
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        }
        (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar4,ar7_00));
      }
    }
    else if (((iVar3 == 3) || (iVar3 == 4)) &&
            ((iVar3 = *(int *)(unsigned)(ar4 + 0x128), iVar3 < 8 && (-1 < iVar3)))) {
                    
      switch(iVar3) {
      case 0:
      case 1:
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7));
        break;
      case 2:
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7));
        break;
      default:
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7));
        break;
      case 6:
        if (ar6 == 0) {
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7));
        }
      }
    }
  }
  else {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar2,ar7));
    if (iVar3 == 1) {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03c314(ar4,uVar4,iVar2,ar7));
      uVar5 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
    }
  }
  return uVar5;
}

__asm__(".globl _FUN_8c076750\n.set _FUN_8c076750, _FUN_8c076750_def\n");
//@unit 8c076994
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
undefined4 FUN_8c076994_def(int ar4,undefined4 *ar5,code *ar6,undefined *ar7)

{
  ring[rp++ & 255] = "FUN_8c076994";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 388; for (int i_ = 0; i_ < 388; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int ar5_00;
  undefined *puVar5;
  undefined4 ar7_00;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  undefined8 in_dr0 = 0;
  float fVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  fVar8 = F32HI(in_dr0);
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  iVar7 = 0;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  pcVar4 = ((void *)0x8c053724);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c053724(*ar5,((void *)0x8c053724),ar6,ar7));
  if ((char)uVar2 == '\0') {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x34))))((int *)(unsigned)*ar5,pcVar4,ar6,ar7));
    if (iVar3 != 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x34))))((int *)(unsigned)*ar5,pcVar4,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2d8) = uVar2;
      (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 0x2d8) == 3) {
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x34)),0x2d8,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x34)),ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x44)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
        ar6 = (code *)((undefined1 *)(fr0_ - 0x54));
        ({ unsigned long t0_ = (unsigned long)(ar6); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
        if (cVar12 == '\0') {
          fVar9 = 15.0;
        }
        else {
          fVar8 = 15.0;
          fVar9 = 2.69049e-43;
        }
        bVar1 = cVar11 != '\0';
        bVar10 = fVar9 <= fVar8;
        fVar8 = fVar9;
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
        if (bVar1 || bVar10) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x2d8) = 0;
        }
      }
      else if (*(int *)(unsigned)(ar4 + 0x2d8) == 4) {
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x60)),0x2d8,ar6,ar7));
        ar7 = ((undefined1 *)(unsigned)0x8c125e68);
        ar6 = ((void *)0x8c023484);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x60)),((void *)0x8c023484),((undefined1 *)(unsigned)0x8c125e68)); });
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x70)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
        if (cVar12 == '\0') {
          fVar9 = 15.0;
        }
        else {
          fVar8 = 15.0;
          fVar9 = 2.63444e-43;
        }
        bVar1 = cVar11 != '\0';
        bVar10 = fVar9 <= fVar8;
        fVar8 = fVar9;
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,ar7));
        if (bVar1 || bVar10) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x2d8) = 0;
        }
      }
      else if ((((*(int *)(unsigned)(ar4 + 0x2d8) != 8) && (*(int *)(unsigned)(ar4 + 0x2d8) != 5)) &&
               (*(int *)(unsigned)(ar4 + 0x2d8) != 7)) && (*(int *)(unsigned)(ar4 + 0x2d8) != 6)) {
        *(undefined4 *)(unsigned)(ar4 + 0x2d8) = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x38))))((int *)(unsigned)*ar5,0,ar6,ar7));
      if (((*(int *)(unsigned)(ar4 + 0x2d8) != *(int *)(unsigned)(ar4 + 0x2d4)) && (*(int *)(unsigned)(ar4 + 0x2d4) != 8)) &&
         (*(int *)(unsigned)(ar4 + 0x2d4) != 7)) {
        *(undefined4 *)(unsigned)(ar4 + 0x2d4) = *(undefined4 *)(unsigned)(ar4 + 0x2d8);
      }
    }
    iVar3 = *(int *)(unsigned)(ar4 + 0x2d4);
    if ((iVar3 < 9) && (-1 < iVar3)) {
                    
      switch(iVar3) {
      case 0:
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,(&(*(undefined1 *)(unsigned)0x8c076ce0))[iVar3],ar6,ar7); })
        ;
        (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x90)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6,ar7));
        iVar3 = *(int *)(unsigned)(ar4 + 300);
        if ((iVar3 < 5) && (-1 < iVar3)) {
          ar5_00 = iVar3 * 4;
                    
          switch(iVar3) {
          case 0:
            (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),ar6,ar7));
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          case 1:
            iVar7 = *(int *)(unsigned)(ar4 + 0x260);
            if (iVar7 == 0) {
              uVar2 = 0;
              ar6 = (code *)0xffffffff;
              (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
              (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),ar6,uVar2));
            }
            else if (iVar7 == 3) {
              ar6 = (code *)0xffffffff;
              (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
            }
            else if (iVar7 == 4) {
              ar6 = (code *)0xffffffff;
              (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0));
            }
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            break;
          case 2:
            iVar3 = *(int *)(unsigned)(ar4 + 0x260);
            if (iVar3 == 0) {
              iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
              ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7); });
              (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xa0)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
              if (cVar12 == '\0') {
                fVar9 = 45.0;
              }
              else {
                fVar8 = 45.0;
                fVar9 = 2.57839e-43;
              }
              (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6,ar7));
              if (cVar11 == '\0' && fVar9 < fVar8) {
                iVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
                if (iVar3 == 3) {
                  *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 3;
                }
                else {
                  *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 4;
                }
                *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
                *(undefined4 *)(unsigned)(ar4 + 300) = 0;
              }
            }
            else if ((iVar3 == 3) || (iVar3 == 4)) {
              iVar3 = *(int *)(unsigned)(ar4 + 0x128);
              if ((iVar3 < 8) && (-1 < iVar3)) {
                    
                switch(iVar3) {
                case 0:
                case 1:
                  iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
                  break;
                case 2:
                  iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
                  break;
                default:
                  iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
                  break;
                case 6:
                  iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
                }
              }
              if (*(int *)(unsigned)(ar4 + 0x260) == 3) {
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xac)),((void *)0x8c023d68),ar6,ar7));
                ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xbc))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0xac)),ar6,ar7); });
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xbc)),ar6,ar7));
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6,ar7));
                uVar2 = 0xffffffff;
                (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6,ar7));
              }
              else {
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xc8)),ar5_00,ar6,ar7));
                ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0xc8)),ar6,ar7); });
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xd8)),ar6,ar7));
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
                uVar2 = 0xffffffff;
                (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
              }
              ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7); });
              (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xe8)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
              if (cVar12 == '\0') {
                fVar9 = 35.0;
              }
              else {
                fVar8 = 35.0;
                fVar9 = 2.52234e-43;
              }
              (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6,ar7));
              if (cVar11 == '\0' && fVar9 < fVar8) {
                iVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
                if (iVar3 == 3) {
                  *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 3;
                }
                else {
                  *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 4;
                }
                *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
                *(undefined4 *)(unsigned)(ar4 + 300) = 0;
              }
            }
            if ((iVar7 == 7) || (iVar7 == 1)) {
              ar6 = (code *)0x64;
              iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), rand_range(ar4,0,100,ar7));
              if (iVar7 < 2) {
                *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
              }
              else {
                *(undefined4 *)(unsigned)(ar4 + 300) = 1;
              }
            }
            break;
          case 3:
            iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
            if (iVar7 == 1) {
              if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x25;
                (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x25,0,0));
              }
              else if (*(int *)(unsigned)(ar4 + 0x128) == 7) {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x2f;
                (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2f,0,0));
              }
              else {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x13;
                (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0,0));
              }
              (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7_00));
              *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            }
            break;
          case 4:
            iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
            if (iVar7 == 1) {
              *(undefined4 *)(unsigned)(ar4 + 300) = 1;
            }
          }
        }
        break;
      case 3:
      case 4:
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,((undefined1 *)(fr0_ - 0xf8)),ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xf8)),ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,ar6,ar7));
        if (*(int *)(unsigned)(ar4 + 300) == 0) {
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c032ab0(ar4,uVar2,ar6,ar7));
          if (*(int *)(unsigned)(ar4 + 0x2d4) == 3) {
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x104)),uVar2,ar6,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x114))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x104)),ar6,ar7); });
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x114)),ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,ar6,ar7));
            uVar2 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar6,ar7));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x120)),uVar2,ar6,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x120)),ar6,ar7); });
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x130)),ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6,ar7));
            uVar2 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6,ar7));
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_length(ar4 + 0x54,uVar2,ar6,ar7));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          ar7 = (undefined *)(unsigned)(ar4 + 0xb0);
          ar6 = ((void *)0x8c026dd8);
          iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), get_field_1c_026dd8(ar7,300,((void *)0x8c026dd8),ar7));
          if (iVar7 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 1;
          }
          else {
            ar7 = (undefined *)(unsigned)0x2b0;
            ar6 = (code *)0x0;
            *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
        }
        else if (*(int *)(unsigned)(ar4 + 300) != 1) break;
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x140)),ar4 + 0x54,ar6,ar7));
        ar6 = (code *)0x1;
        pcVar4 = ((void *)0x8c0811b4);
        iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x140)),1,((void *)0x8c0811b4)));
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6,pcVar4));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
          if (*(int *)(unsigned)(ar4 + 0x2d4) == 3) {
            *(undefined4 *)(unsigned)(ar4 + 0x220) = 4;
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 4;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x220) = 3;
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 3;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
        }
        break;
      case 5:
        iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c0839c0(ar4,ar5,ar6,ar7));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
          puVar5 = ((undefined1 *)(unsigned)0x8c125e68);
          uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar2;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x150)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.41023e-43;
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,ar6,ar7));
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
          }
        }
        break;
      case 6:
        iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c083780(ar4,ar5,ar6,ar7));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
          puVar5 = ((undefined1 *)(unsigned)0x8c125e68);
          uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar2;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x160))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x160)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.35418e-43;
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,ar6,ar7));
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
          }
        }
        break;
      case 7:
        iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c0845f4(ar4,ar5,ar6,ar7));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
          puVar5 = ((undefined1 *)(unsigned)0x8c125e68);
          uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar2;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x170))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x170)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.29813e-43;
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x170)),0xffffffff,ar6,ar7));
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
          }
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
        break;
      case 8:
        iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c083d8c(ar4,ar5,ar6,ar7));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar2;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x180))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,((void *)0x8c0230f0),ar6,ar7); });
          ar6 = ((void *)0x8c022dac);
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x180)),((undefined1 *)(unsigned)0x8c125e68),((void *)0x8c022dac),ar7));
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.24208e-43;
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x180)),0xffffffff,ar6,ar7));
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
          }
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
    }
  }
  else {
    iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,ar6,ar7));
    if (iVar7 == 1) {
      (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c03c314(ar4,pcVar4,ar6,ar7));
      uVar6 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,((void *)0x8c022cb0)));
  return uVar6;
}

__asm__(".globl _FUN_8c076994\n.set _FUN_8c076994, _FUN_8c076994_def\n");
//@unit 8c077a38
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
//@unit 8c078f84
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
undefined4 FUN_8c078f84_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c078f84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c078f84\n.set _FUN_8c078f84, _FUN_8c078f84_def\n");
//@unit 8c078fb8
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
undefined4 FUN_8c078fb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c078fb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x50) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x54) = in_fr5;
  *(undefined4 *)(unsigned)(ar4 + 0x58) = in_fr6;
  return 1;
}

__asm__(".globl _FUN_8c078fb8\n.set _FUN_8c078fb8, _FUN_8c078fb8_def\n");
//@unit 8c078fd0
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
undefined4 FUN_8c078fd0_def(int ar4,int *ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c078fd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 432; for (int i_ = 0; i_ < 432; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *ar6_00;
  code *pcVar4;
  undefined1 *ar6_01;
  int *ar7_00;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0 = 0;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar5 = 1;
  piVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 432)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c102748(((undefined1 *)(fr0_ - 0x3c)),piVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 432)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),piVar2,ar6_00,ar7_00));
  if (cVar12 == '\0') {
    uVar7 = CONCAT44(0x44610000,(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    uVar7 = 0x1fc44610000;
  }
  uVar8 = uVar7;
  if (cVar11 == '\0' && (float)uVar7 < F32HI(uVar7)) {
    ar6_00 = (int *)(unsigned)(ar4 + 0x1fc);
    (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c030f2c(ar6_00,piVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 432)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),piVar2,ar6_00,ar7_00));
    if (cVar12 == '\0') {
      uVar8 = CONCAT44(0x43200000,(int)((ulonglong)uVar7 >> 0x20));
    }
    else {
      uVar8 = 0x13443200000;
      in_dr0 = uVar7;
    }
    if (cVar11 == '\0' && F32HI(uVar8) < (float)uVar8) {
      piVar2 = (int *)(unsigned)(ar4 + 0x50);
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if ((iVar1 < 10) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar6_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x128));
      if (((int)ar6_00 < 8) && (-1 < (int)ar6_00)) {
                    
                    
        uVar5 = (vsp = ((unsigned long)(fr0_ - 432)), (*(code *)xlat((unsigned long)(((code **)&(*(undefined1 *)(unsigned)0x8c079148))[(int)ar6_00])))(vr4,vr5,vr6,vr7));
        return uVar5;
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c031c74(ar4,ar5,ar5,ar7_00));
      iVar1 = *((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      (vsp = ((unsigned long)(fr0_ - 432)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),iVar1,ar5,ar7_00));
      if (cVar12 == '\0') {
        fVar6 = F32HI(uVar8);
        fVar10 = 900.0;
        uVar8 = in_dr0;
      }
      else {
        fVar6 = 900.0;
        fVar10 = 0.97;
      }
      if (cVar11 == '\0' && fVar6 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x3f7851ec,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar9 = 3.73997364963455e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = F32LO(dVar9) * F32HI(dVar9);
        }
        else {
          fVar6 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = uVar8;
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7_00));
      ar6_00 = ar5;
      if (iVar1 == 1) {
        ar7_00 = (int *)(unsigned)0x0;
        ar6_00 = (int *)(unsigned)0xffffffff;
        uVar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 432)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 432)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c03c314(ar4,uVar5,ar6_00,ar7_00));
        uVar5 = 0;
        iVar1 = *(int *)(unsigned)(ar4 + 0x2a0) + -1;
        *(int *)(unsigned)(ar4 + 0x2a0) = iVar1;
        if (iVar1 < 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
      break;
    case 2:
      iVar1 = *((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      (vsp = ((unsigned long)(fr0_ - 432)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),iVar1,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        fVar6 = F32HI(uVar8);
        fVar10 = 900.0;
        uVar8 = in_dr0;
      }
      else {
        fVar6 = 900.0;
        fVar10 = 0.97;
      }
      if (cVar11 == '\0' && fVar6 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x3f7851ec,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar9 = 3.73997364963455e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = F32LO(dVar9) * F32HI(dVar9);
        }
        else {
          fVar6 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = uVar8;
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6_00,ar7_00));
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        ar6_00 = (int *)(unsigned)0x134;
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      break;
    case 3:
      if (*(int *)(unsigned)(ar4 + 0x1d4) == 1) {
        (vsp = ((unsigned long)(fr0_ - 432)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x6c)),piVar2,ar6_00,ar7_00));
        fVar6 = F32HI(uVar8);
        pcVar4 = ((void *)0x8c022ce8);
        (vsp = ((unsigned long)(fr0_ - 432)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x16c)),piVar2,((void *)0x8c022ce8),ar7_00));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c023cd4(ar4 + 0x200,((undefined1 *)(fr0_ - 0x16c)),pcVar4,ar7_00));
        uVar3 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x16c)),0xffffffff,pcVar4,ar7_00));
        if (iVar1 == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 432)), Vec3_length(ar4 + 0x200,uVar3,pcVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_assign(((undefined1 *)(fr0_ - 0x6c)),uVar3,pcVar4,ar7_00));
        }
        else {
          iVar1 = ar4 + 0x54;
          piVar2 = ar5;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x17c))); *(unsigned *)((((unsigned long)(fr0_ - 432)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 432)) - 8); Vec3_sub(iVar1,ar5,iVar1,ar7_00); });
          uVar3 = (vsp = ((unsigned long)(fr0_ - 432)), Vec3_length(((undefined1 *)(fr0_ - 0x17c)),piVar2,iVar1,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x18c))); *(unsigned *)((((unsigned long)(fr0_ - 432)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 432)) - 8); Vec3_scale(uVar3,((undefined1 *)(unsigned)0x8c137998),iVar1,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_assign(((undefined1 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x18c)),iVar1,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18c)),0xffffffff,iVar1,ar7_00));
          pcVar4 = (code *)((undefined1 *)(fr0_ - 0x17c));
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(pcVar4,0xffffffff,pcVar4,ar7_00));
        }
        (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x6c)),ar4 + 0x14,pcVar4,ar7_00));
        if (cVar12 == '\0') {
          fVar10 = 90.0;
        }
        else {
          fVar6 = 90.0;
          fVar10 = 2.9147e-43;
        }
        if (cVar11 == '\0' && fVar10 < fVar6) {
          ar6_01 = ((undefined1 *)(fr0_ - 0x19c));
          (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c03263c(ar4,((undefined1 *)(fr0_ - 0x6c)),ar6_01,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1ac))); *(unsigned *)((((unsigned long)(fr0_ - 432)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 432)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x19c)),ar5,ar6_01,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x1ac)),ar6_01,ar7_00));
          pcVar4 = ((void *)0x8c022cb0);
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1ac)),0xffffffff,((void *)0x8c022cb0),ar7_00));
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x19c)),0xffffffff,pcVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c032788(ar4,ar4 + 0x54,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          ar7_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
        }
        (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,((void *)0x8c022cb0),ar7_00));
      }
      ar6_00 = (int *)(unsigned)(ar4 + 0x54);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), pure_virtual_stub(ar4,ar5,ar6_00,ar7_00));
      if (iVar1 == 0) {
        uVar5 = 0;
        ar6_00 = (int *)(unsigned)0x0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
      break;
    case 4:
      ar6_00 = (int *)(unsigned)(ar4 + 0x54);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c07f8e0(ar4,ar5,ar6_00,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      ar7_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        ar6_00 = (int *)(unsigned)0x0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
      break;
    case 5:
      ar6_00 = (int *)(unsigned)(ar4 + 0x54);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c07ff08(ar4,ar5,ar6_00,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      ar7_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
      break;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c080e80(ar4,ar5,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar7_00));
      ar6_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
      break;
    case 7:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c08248c(ar4,ar5,ar6,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      ar6_00 = ar6;
      ar7_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        ar6_00 = ar6;
      }
      break;
    case 8:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c0831c8(ar4,ar5,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      ar6_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      ar7_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        ar6_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      }
      break;
    case 9:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c080890(ar4,ar5,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar7_00));
      ar6_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 432)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
  return uVar5;
}

__asm__(".globl _FUN_8c078fd0\n.set _FUN_8c078fd0, _FUN_8c078fd0_def\n");
//@unit 8c07a3cc
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
uint FUN_8c07a3cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07a3cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  int iVar1;
  int a5;
  undefined4 uVar2;
  undefined4 ar7_00;
  int *ar7_01;
  undefined4 in_fr1 = 0;
  float fVar3;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c031748(ar4,uVar2,ar6,ar7_00));
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), rand_range(ar4,0,100,ar7_00));
    if ((iVar1 < 0x32) || (*(int *)(unsigned)(ar4 + 0x2a0) != 0)) {
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 1;
      goto LAB_8c07a446;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 2;
  }
  else {
    if (iVar1 == 1) {
LAB_8c07a446:
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c031c74(ar4,ar5,ar5,ar7_00));
      uVar2 = 0x13;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c031de8(ar4,0x13,ar5,ar7_00));
      if (iVar1 != 0) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c03c314(ar4,uVar2,ar5,ar7_00));
      iVar1 = *(int *)(unsigned)(ar4 + 0x2a0) + -1;
      *(int *)(unsigned)(ar4 + 0x2a0) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 0;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      return 0;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_8c07a5f4;
    }
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x40400000,in_fr1);
  }
  else {
    dVar4 = 52776566554624.0;
  }
  ar7_01 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c032518(ar4,ar5,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x24)),ar7,ar7_01));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar7,ar7_01));
  a5 = ar4 + 0x54;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x134))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),a5,ar7,ar7_01));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x30)),a5,ar7,ar7_01));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x30)),ar7,ar7_01); });
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x40)),ar7,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar7,ar7_01));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 96)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar7,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x4c)),uVar2,ar7,ar7_01));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); FUN_8c023484(ar4 + 0x80,((undefined1 *)(fr0_ - 0x4c)),ar7,ar7_01); });
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x5c)),ar7,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar7,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 96)), object_dtor_delete(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar7,ar7_01));
    return 1;
  }
  (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x54,ar7,ar7_01));
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x7c));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x7c);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) + F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x58) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
  *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
LAB_8c07a5f4:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0755e0(ar4,ar5,ar4 + 0x54,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c07a3cc\n.set _FUN_8c07a3cc, _FUN_8c07a3cc_def\n");
//@unit 8c07a684
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
undefined4 ret_const_0_07a684_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_07a684";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_07a684\n.set _ret_const_0_07a684, _ret_const_0_07a684_def\n");
//@unit 8c07a68c
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
undefined4 FUN_8c07a68c_def(double *ar4,double *ar5,double *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c07a68c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 144; for (int i_ = 0; i_ < 144; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3; int iSw;
  double *pdVar4;
  code *ar5_00;
  double *ar6_00;
  undefined4 ar7_00;
  double in_dr0 = 0;
  undefined4 *puVar7;
  double dVar5;
  float fVar8;
  double dVar6;
  double in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  pdVar4 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 144)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x24)),ar5,ar6,ar7));
  iSw = *(int *)(unsigned)(ar4 + 0xd);
  if ((5 < iSw) || (iSw < 0)) goto switchD_8c07a6ce_default;
                    
  switch(iSw) {
  case 0:
    *(float *)(unsigned)(ar4 + 0x2f) = 0.0;
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c030f2c((float *)(unsigned)((int)ar4 + 0x1fc),pdVar4,ar6_00,ar7));
    pdVar4 = ar4 + 0x48;
    dVar6 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (cVar10 == '\0') {
      *(float *)(unsigned)pdVar4 = 0.0;
    }
    else {
      *pdVar4 = dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),pdVar4,0x240,ar7));
    fVar3 = F32HI(dVar6);
    if (cVar10 == '\0') {
      puVar7 = (undefined4 *)(unsigned)0x44610000;
      dVar6 = in_xd0;
    }
    else {
      fVar3 = 900.0;
      puVar7 = ((undefined4 *)(unsigned)0x8c125be0);
    }
    if (cVar9 == '\0' && fVar3 < (float)(uint)puVar7) {
      if (cVar10 == '\0') {
        fVar3 = *(float *)(unsigned)ar5;
      }
      else {
        dVar6 = *ar5;
        fVar3 = 0.0;
      }
      if (cVar9 != '\0' || 0.0 <= fVar3) {
        if (cVar10 == '\0') {
          dVar5 = 1.2986507827891524e+23;
        }
        else {
          dVar6 = 0.0;
          dVar5 = 3.051758593897169e-05;
        }
        if (cVar9 == '\0') {
          fVar3 = F32LO(dVar5) + F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar10 == '\0') {
          dVar5 = CONCAT44D(0x3f000000,fVar3);
        }
        else {
          dVar5 = -0.007812501833541319;
        }
        if (cVar9 == '\0') {
          fVar3 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar10 == '\0') {
          dVar5 = CONCAT44D(*(float *)(unsigned)(ar5 + 1),fVar3);
        }
        else {
          dVar5 = ar5[1];
        }
        if (cVar9 == '\0') {
          fVar3 = F32LO(dVar5) - F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x2c4) = fVar3;
        }
        else {
          *(double *)(unsigned)((int)ar4 + 0x2c4) = dVar6;
        }
      }
    }
    ar7_00 = 0;
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,8,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,(int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f14c,uVar2,ar7_00));
    pdVar4 = ar4 + 0x14;
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(0x43160000,*(float *)(unsigned)pdVar4);
      in_xd0 = dVar6;
    }
    else {
      in_xd0 = *pdVar4;
      in_dr0 = -8.625516875868561e-251;
    }
    if (cVar9 == '\0') {
      fVar3 = F32HI(in_dr0);
      in_dr0 = CONCAT44D(fVar3,F32LO(in_dr0) * fVar3);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 0x14) = SUB84(in_dr0,0);
    }
    else {
      ar4[0x14] = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c03c314(ar4,pdVar4,0xa0,ar7_00));
    ar6_00 = ar4 + 0xd;
    *(int *)(unsigned)(ar4 + 0xd) = (int)*(float *)(unsigned)ar6_00 + 1;
  case 1:
    ar7 = ((void *)0x8c033b98);
    (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,pdVar4,ar6_00,((void *)0x8c033b98)));
    ar6_00 = (double *)(unsigned)((int)ar4 + 100);
    fVar3 = *(float *)(unsigned)ar6_00;
    if (fVar3 == 0.0) {
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_normalize((float *)(unsigned)((int)ar4 + 4),0,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign((float *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7));
      fVar3 = -NAN;
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
    }
    if (ar6 != (double *)(unsigned)0x3) {
      if (ar6 == (double *)(unsigned)0x1) {
        *(float *)(unsigned)(ar4 + 0xd) = 4.2039e-45;
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x46,(float *)(unsigned)((int)ar4 + 0x14),ar6_00,ar7));
switchD_8c07a6ce_caseD_3:
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = 0.0;
        }
        else {
          ar4[5] = in_dr0;
        }
        pdVar4 = ar4 + 0x46;
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(&(*(float *)(fr0_ - 0x24)),pdVar4,ar6_00,ar7));
        (*(float *)(fr0_ - 0x20)) = SUB84(in_dr0,0);
        if (cVar10 == '\0') {
          (*(float *)(fr0_ - 0x20)) = *(float *)(unsigned)(ar4 + 0x46);
        }
        else {
          in_xd0 = ar4[0x46];
        }
        if ((*(float *)(fr0_ - 0x20)) == 0.0) {
          if (cVar10 == '\0') {
            (*(float *)(fr0_ - 0x20)) = *(float *)(unsigned)(ar4 + 0x47);
          }
          else {
            in_xd0 = ar4[0x47];
          }
          if (((*(float *)(fr0_ - 0x20)) == 0.0) && ((*(float *)(fr0_ - 0x24)) = (*(float *)(fr0_ - 0x20)), cVar10 == '\0')) {
            (*(float *)(fr0_ - 0x24)) = 1.0;
          }
        }
        if (cVar10 == '\0') {
          (*(float *)(fr0_ - 0x20)) = 0.0;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x1c)) = 0;
        }
        uVar2 = (vsp = ((unsigned long)(fr0_ - 144)), Vec3_length(&(*(float *)(fr0_ - 0x24)),pdVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(&(*(float *)(fr0_ - 0x24)),uVar2,ar6_00,ar7));
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x3e4ccccd,*(float *)(unsigned)(ar4 + 0x48));
        }
        else {
          in_xd0 = ar4[0x48];
          dVar6 = 3.57011700451707e-312;
        }
        if (cVar9 == '\0') {
          fVar3 = F32LO(dVar6) + F32HI(dVar6);
        }
        else {
          fVar3 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 0x48) = fVar3;
          fVar3 = *(float *)(unsigned)(ar4 + 0x48);
        }
        else {
          ar4[0x48] = in_xd0;
          in_xd0 = ar4[0x48];
        }
        if (cVar9 != '\0' || 1.0 <= fVar3) {
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 0x48) = 1.0;
          }
          else {
            ar4[0x48] = CONCAT44D(0x3f800000,fVar3);
          }
        }
        if (cVar10 == '\0') {
          fVar3 = *(float *)(unsigned)(ar4 + 0x48);
        }
        else {
          in_xd0 = ar4[0x48];
        }
        if (cVar9 == '\0') {
          dVar6 = CONCAT44D(1.0 - fVar3,fVar3);
        }
        else {
          dVar6 = CONCAT44D(0x3f800000,fVar3) - CONCAT44D(0x3f800000,fVar3);
        }
        uVar2 = (undefined4)(D2U(dVar6) >> 0x20);
        (*(undefined4 *)(fr0_ - 0x88)) = uVar2;
        if (cVar10 != '\0') {
          (*(undefined4 *)(fr0_ - 0x88)) = SUB84(dVar6,0);
          ((undefined4 *)(fr0_ - 0x84))[0] = uVar2;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_scale(ar4 + 0x46,&(*(undefined4 *)(fr0_ - 0x88)),ar6_00,ar7); });
        if (cVar10 == '\0') {
          (*(float *)(fr0_ - 0x8c)) = *(float *)(unsigned)(ar4 + 0x48);
          dVar6 = CONCAT44D((*(float *)(fr0_ - 0x8c)),SUB84(dVar6,0));
        }
        else {
          dVar6 = ar4[0x48];
          (*(float *)(fr0_ - 0x8c)) = SUB84(dVar6,0);
          (*(undefined4 *)(fr0_ - 0x88)) = (undefined4)(D2U(dVar6) >> 0x20);
        }
        fVar3 = F32LO(dVar6);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_scale(&(*(float *)(fr0_ - 0x24)),&(*(float *)(fr0_ - 0x8c)),ar6_00,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign((float *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
        if (cVar10 == '\0') {
          fVar3 = *(float *)(unsigned)(ar4 + 0x48);
        }
        else {
          in_xd0 = ar4[0x48];
        }
        if (fVar3 == 1.0) {
          ar7 = (code *)0x0;
          ar6_00 = (double *)(unsigned)0xffffffff;
          uVar2 = 0x13;
          (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x13,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar2,ar6_00,ar7));
          dVar6 = (double)(ulonglong)(uint)fVar3;
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 0x48) = 0.0;
          }
          else {
            ar4[0x48] = dVar6;
          }
          *(float *)(unsigned)((int)ar4 + 100) = 1.4013e-45;
          *(float *)(unsigned)(ar4 + 0xd) = 0.0;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); FUN_8c0230f0((float *)(unsigned)((int)ar4 + 0x14),uVar2,ar6_00,ar7); });
          (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign((float *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
          uVar2 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)ar4 + 0x2c))))(ar4,uVar2,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,(int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f14c,ar6_00,ar7));
          pdVar4 = ar5;
          (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,ar6_00,ar7));
          if (cVar10 == '\0') {
            dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),*(float *)(unsigned)((int)ar4 + 0x7c));
          }
          else {
            in_xd0 = *(double *)(unsigned)((int)ar4 + 0x7c);
          }
          if (cVar9 == '\0') {
            fVar3 = F32LO(dVar6) + F32HI(dVar6);
          }
          else {
            fVar3 = SUB84(dVar6 + dVar6,0);
          }
          if (cVar10 == '\0') {
            *(float *)(unsigned)((int)ar5 + 4) = fVar3;
          }
          else {
            *(double *)(unsigned)((int)ar5 + 4) = in_xd0;
          }
          (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c030f2c((float *)(unsigned)((int)ar4 + 0x1fc),pdVar4,ar6_00,ar7));
        }
      }
      else if (ar6 == (double *)(unsigned)0x2) {
        *(float *)(unsigned)(ar4 + 0x56) = 0.0;
        *(float *)(unsigned)((int)ar4 + 0x2b4) = 0.0;
        *(float *)(unsigned)(ar4 + 0xd) = 5.60519e-45;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_length_sq((float *)(unsigned)((int)ar4 + 4),fVar3,ar6_00,ar7));
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x3f4ccccd,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          dVar6 = 6.2863545074132e-312;
          in_xd0 = in_dr0;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar6);
          in_dr0 = CONCAT44D(fVar3,F32LO(dVar6) * fVar3);
        }
        else {
          in_dr0 = dVar6 * dVar6;
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = SUB84(in_dr0,0);
        }
        else {
          ar4[5] = in_xd0;
        }
        (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,(int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f14c,ar6_00,ar7));
        *(float *)(unsigned)((int)ar4 + 0x44) = 1.4013e-45;
        *(float *)(unsigned)(ar4 + 8) = 7.00649e-45;
        *(int *)(unsigned)(ar4 + 0xd) = (int)*(float *)(unsigned)(ar4 + 0xd) + 1;
        pdVar4 = ar4;
switchD_8c07a6ce_caseD_2:
        (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),pdVar4,ar6_00,ar7));
        fVar3 = F32HI(in_dr0);
        if (cVar10 == '\0') {
          fVar8 = 900.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar3 = 900.0;
          fVar8 = 9.64093e-43;
        }
        if (cVar9 != '\0' || fVar8 <= fVar3) {
          (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,pdVar4,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c032ab0(ar4,pdVar4,ar6_00,ar7));
          if (cVar10 == '\0') {
            fVar3 = *(float *)(unsigned)(ar4 + 5);
          }
          else {
            in_dr0 = ar4[5];
          }
          if (cVar9 == '\0') {
            fVar3 = fVar3 * fVar8;
          }
          else {
            fVar3 = SUB84(CONCAT44D(fVar8,fVar3) * CONCAT44D(fVar8,fVar3),0);
          }
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 5) = fVar3;
          }
          else {
            ar4[5] = in_dr0;
          }
          if (cVar10 == '\0') {
            dVar6 = CONCAT44D(*(float *)(unsigned)(ar4 + 5),
                                     *(undefined4 *)(unsigned)
                                      ((int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f13c));
          }
          else {
            dVar6 = ar4[5];
          }
          if (cVar9 == '\0' && F32HI(dVar6) < SUB84(dVar6,0)) {
            *(float *)(unsigned)((int)ar4 + 100) = 0.0;
            *(float *)(unsigned)(ar4 + 0xd) = 0.0;
            (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)ar4 + 0x2c))))(ar4,pdVar4,ar6_00,ar7));
            iVar1 = (int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f14c;
            (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,iVar1,ar6_00,ar7));
            (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c030eb8((float *)(unsigned)((int)ar4 + 0x1fc),iVar1,ar6_00,ar7));
          }
        }
        else {
          *(float *)(unsigned)(ar4 + 0x56) = 0.0;
          *(float *)(unsigned)((int)ar4 + 0x2b4) = 0.0;
          *(float *)(unsigned)(ar4 + 0xd) = 5.60519e-45;
          *(float *)(unsigned)(ar4 + 0x43) = 2.38221e-44;
        }
      }
    }
    break;
  case 2:
    goto switchD_8c07a6ce_caseD_2;
  case 3:
    goto switchD_8c07a6ce_caseD_3;
  case 4:
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D(0x3f666666,*(float *)(unsigned)(ar4 + 5));
    }
    else {
      in_xd0 = ar4[5];
      dVar6 = -0.00781250184518285;
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 5) = fVar3;
    }
    else {
      ar4[5] = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 144)), Vec3_ctor_xyz(((undefined4 *)(fr0_ - 0x84)),pdVar4,ar6_00,ar7));
    ar6_00 = (double *)(unsigned)0x1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c0811b4(ar4,((undefined4 *)(fr0_ - 0x84)),1,ar7));
    (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined4 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
    if (iVar1 == 0) {
      pdVar4 = ar4 + 5;
      if (cVar10 == '\0') {
        *(float *)(unsigned)pdVar4 = 0.0;
      }
      else {
        *pdVar4 = (double)(ulonglong)(uint)fVar3;
      }
      *(int *)(unsigned)(ar4 + 0xd) = (int)*(float *)(unsigned)(ar4 + 0xd) + 1;
      *(float *)(unsigned)((int)ar4 + 0x2b4) = 0.0;
      *(float *)(unsigned)((int)ar4 + 100) = 0.0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), rand_range(ar4,0,100,pdVar4));
      if (iVar1 < 0x1f) {
        if (*(float *)(unsigned)(ar4 + 0x25) == 8.40779e-45) {
          ar7 = (code *)0x0;
          ar6_00 = (double *)(unsigned)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x26,0xffffffff,0));
        }
        else {
          ar7 = (code *)0x0;
          ar6_00 = (double *)(unsigned)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x30,0xffffffff,0));
        }
      }
      else {
        ar7 = (code *)0x0;
        ar6_00 = (double *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,0xb0,ar6_00,ar7));
    }
    break;
  case 5:
    ar5_00 = ((void *)0x8c032ab0);
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c032ab0(ar4,((void *)0x8c032ab0),ar6_00,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_00,ar6_00,ar7));
    if (iVar1 == 1) {
      *(float *)(unsigned)(ar4 + 0xd) = 0.0;
      (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)ar4 + 0x2c))))(ar4,1,ar6_00,ar7));
      iVar1 = (int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f14c;
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,iVar1,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c030eb8((float *)(unsigned)((int)ar4 + 0x1fc),iVar1,ar6_00,ar7));
      ar7 = (code *)0x0;
      ar6_00 = (double *)(unsigned)0xffffffff;
      uVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar2,ar6_00,ar7));
    }
  }
switchD_8c07a6ce_default:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(&(*(float *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c07a68c\n.set _FUN_8c07a68c, _FUN_8c07a68c_def\n");
//@unit 8c07af10
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
undefined4 FUN_8c07af10_def(int ar4,int ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07af10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar6_00;
  int *ar7_00;
  undefined4 ar5_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  double in_dr0 = 0;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 in_fr5 = 0;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  iVar1 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
  *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfd | 2;
  uVar3 = 1;
  ar5_00 = 0xb;
  if ((5 < *(int *)(unsigned)(ar4 + 0x128)) && (ar6 == 1)) {
    ar5_00 = 0x12;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034148(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          if (iVar1 != 2) {
            return 1;
          }
          (vsp = ((unsigned long)(fr0_ - 4)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 1:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6_00,ar7_00));
      uVar4 = SUB84(in_dr0,0);
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D((float)iVar1,in_fr5);
        }
        else {
          dVar8 = (double)iVar1;
        }
        if (cVar10 == '\0') {
          bVar9 = F32HI(dVar8) < 0.0;
        }
        else {
          bVar9 = dVar8 < (double)(ulonglong)uVar4;
        }
        if ((bVar9) && (cVar11 != '\0')) {
          uVar4 = 0x4f800000;
        }
        (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
        if (ar6 == 0) {
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,ar5_00,ar6_00,ar7_00));
          if (cVar11 == '\0') {
            uVar6 = CONCAT44(0xbba3d70a,uVar4);
            *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0xbba3d70a;
          }
          else {
            uVar6 = 0x298bba3d70a;
            *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0x298bba3d70a;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar6 & 0xffffffff;
          }
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 5;
          uVar3 = 0;
        }
      }
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x184))))(ar7,iVar1,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar5 + 4));
      }
      if (cVar10 != '\0' || F32HI(in_dr0) <= SUB84(in_dr0,0)) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031748(ar4,iVar1,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 3:
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x184))))(ar7,iVar1,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        uVar6 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),SUB84(in_dr0,0));
      }
      else {
        uVar6 = *(ulonglong *)(unsigned)(ar5 + 4);
      }
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 0x14,iVar1,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 4)), Vec3_length_sq(ar4 + 0x14,iVar1,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = (int)(uVar6 >> 0x20);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 4)), Vec3_length(ar4 + 0x14,iVar1,ar6_00,ar7_00));
      iVar2 = *(int *)(unsigned)(ar4 + 0x294);
      *(int *)(unsigned)(ar4 + 0x294) = iVar2 + 1;
      if (0x1517 < iVar2 + 1) {
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar6 & 0xffffffff;
        }
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,iVar1,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0x3d4ccccd;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0x12c3d4ccccd;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 4:
      iVar1 = ar5;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,ar5,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x7c));
      }
      if (cVar10 == '\0') {
        fVar5 = F32LO(in_dr0) + F32HI(in_dr0);
      }
      else {
        fVar5 = SUB84(in_dr0 + in_dr0,0);
      }
      if (cVar11 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),fVar5);
      }
      else {
        uVar7 = *(undefined8 *)(unsigned)(ar5 + 4);
      }
      if (cVar10 != '\0' || F32HI(uVar7) <= (float)uVar7) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031700(ar4,iVar1,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031748(ar4,iVar1,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        uVar3 = 0;
      }
      break;
    case 5:
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031700(ar4,iVar1,ar6_00,ar7_00));
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07af10\n.set _FUN_8c07af10, _FUN_8c07af10_def\n");
//@unit 8c07b2d4
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
undefined4 FUN_8c07b2d4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07b2d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 260; for (int i_ = 0; i_ < 260; i_++) z_[i_] = 0; }
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int ar6_00;
  uint in_fr1 = 0;
  float fVar4;
  uint uVar7;
  double dVar5;
  double dVar6;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 260)), vec3_clear(ar4 + 0x200,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
  dVar5 = (double)(ulonglong)in_fr1;
  dVar6 = dVar5;
  if (cVar11 == '\0') {
    (*(undefined8 *)(fr0_ - 0xc8)) = (double)((ulonglong)(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)) << 0x20);
    dVar6 = (*(undefined8 *)(fr0_ - 0xc8));
  }
  (*(undefined8 *)(fr0_ - 0xc8)) = dVar6;
  fVar9 = 1.0;
  (vsp = ((unsigned long)(fr0_ - 260)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),uVar3,ar6_00,ar7));
  (*(undefined4 *)(fr0_ - 0xcc)) = 0;
  (vsp = ((unsigned long)(fr0_ - 260)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x34)),uVar3,ar6_00,ar7));
  (*(int *)(fr0_ - 0xd0)) = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023d04(ar6 + 0xa0,((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
  if (((*(int *)(fr0_ - 0xd0)) != 0) && ((int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1f) < 0)) {
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x44)),uVar3,ar6_00,ar7));
    (*(int *)(fr0_ - 0xd4)) = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023d04(ar6 + 0xa0,((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
    if ((*(int *)(fr0_ - 0xd4)) != 0) {
      (vsp = ((unsigned long)(fr0_ - 260)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x54)),uVar3,ar6_00,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023d04(ar6 + 0xa0,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7));
      (*(undefined8 *)(fr0_ - 0xdc)) = CONCAT44D(uVar3,(undefined4)(*(undefined8 *)(fr0_ - 0xdc)));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xdc))+4)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 260)), Vec3_length_sq(ar4 + 4,uVar3,ar6_00,ar7));
        uVar7 = (uint)(D2U(dVar5) >> 0x20);
        dVar6 = dVar5;
        dVar1 = dVar5;
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0xc8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)),uVar7);
          dVar5 = (double)(ulonglong)uVar7;
          dVar6 = in_xd0;
          dVar1 = (*(undefined8 *)(fr0_ - 0xc8));
        }
        (*(undefined8 *)(fr0_ - 0xc8)) = dVar1;
        dVar1 = (*(undefined8 *)(fr0_ - 0xc8));
        if ((cVar10 == '\0' && SUB84(dVar5,0) < 1.0) &&
           (dVar1 = CONCAT44D(0x3f800000,SUB84(dVar5,0)), cVar11 == '\0')) {
          (*(undefined8 *)(fr0_ - 0xc8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)),0x3f800000);
          dVar1 = (*(undefined8 *)(fr0_ - 0xc8));
        }
        (*(undefined8 *)(fr0_ - 0xc8)) = dVar1;
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D(0x3e99999a,(undefined4)(*(undefined8 *)(fr0_ - 0xc8)));
        }
        else {
          dVar5 = 3.3155023767404e-312;
          dVar6 = (*(undefined8 *)(fr0_ - 0xc8));
        }
        if (cVar10 == '\0') {
          fVar9 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar9 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0xdc)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xdc))+4)),fVar9);
          dVar6 = (*(undefined8 *)(fr0_ - 0xdc));
        }
        (*(undefined8 *)(fr0_ - 0xdc)) = dVar6;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_scale(ar6 + 0xa0,&(*(undefined8 *)(fr0_ - 0xdc)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 1;
        goto LAB_8c07b7a8;
      }
    }
  }
  if ((*(int *)(unsigned)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(unsigned)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1d))) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
      return uVar3;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 260)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),uVar3,ar6_00,ar7));
    if ((iVar2 == 0xf) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 260)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),uVar3,ar6_00,ar7)), iVar2 == 10)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
      return uVar3;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 1;
    (vsp = ((unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x170))))(*(int *)(unsigned)(ar6 + 0x50),uVar3,ar6_00,ar7))
    ;
    fVar4 = F32HI(dVar5);
    (*(float *)(fr0_ - 0xfc)) = fVar4;
    if (cVar11 != '\0') {
      (*(float *)(fr0_ - 0xfc)) = SUB84(dVar5,0);
      fVar4 = fVar9;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar6 + 0x50),uVar3,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_sub(ar5,((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0xa4)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_length_sq(ar4 + 0x200,uVar3,ar6_00,ar7));
    fVar9 = F32HI(dVar5);
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(fVar9,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(float *)(fr0_ - 0x100)) = fVar9;
    }
    else {
      (*(float *)(fr0_ - 0x100)) = SUB84(dVar5,0);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
      (*(float *)(fr0_ - 0xfc)) = fVar9;
    }
    if (cVar10 == '\0') {
      fVar4 = F32LO(dVar5) + fVar4;
    }
    else {
      fVar4 = SUB84(dVar5 + CONCAT44D(in_fr14,fVar4),0);
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x100)),fVar4);
    }
    else {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0xfc)),(*(float *)(fr0_ - 0x100)));
    }
    if (cVar10 == '\0') {
      fVar9 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar9 = SUB84(dVar5 - dVar5,0);
    }
    dVar5 = in_xd0;
    if (cVar11 == '\0') {
      (*(undefined8 *)(fr0_ - 0xc8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)),fVar9);
      dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    }
    (*(undefined8 *)(fr0_ - 0xc8)) = dVar5;
    dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    if ((cVar10 == '\0' && fVar9 < 1.0) && (dVar5 = (double)(ulonglong)(uint)fVar9, cVar11 == '\0'))
    {
      (*(undefined8 *)(fr0_ - 0xc8)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0xc8)) & 0xffffffff00000000);
      dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    }
    (*(undefined8 *)(fr0_ - 0xc8)) = dVar5;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_length(ar4 + 0x200,uVar3,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_scale(ar4 + 0x200,&(*(undefined8 *)(fr0_ - 0xc8)),ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0xc8)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xb4)),((undefined1 *)(unsigned)0x8c1379a4),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x200,(int)&(*(undefined8 *)(fr0_ - 0xc8)) + 4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0xc8)) + 4,0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 1;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 1;
    if (cVar11 == '\0') {
      fVar9 = *(float *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158);
    }
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,ar7));
    dVar6 = (*(double *)(fr0_ - 0x20));
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x20))+0)),SUB84(dVar5,0));
    }
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) + fVar9,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + CONCAT44D(in_fr14,fVar9);
    }
    dVar5 = dVar6;
    if (cVar11 == '\0') {
      (*(double *)(fr0_ - 0x20)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x20))+4)),(int)(D2U(dVar6) >> 0x20));
      dVar5 = (*(double *)(fr0_ - 0x20));
    }
    (*(double *)(fr0_ - 0x20)) = dVar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_sub(ar5,((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(unsigned)0x8c13799c),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_length_sq(ar4 + 0x200,uVar3,ar6_00,ar7));
    uVar8 = (undefined4)(D2U(dVar6) >> 0x20);
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(uVar8,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(undefined4 *)(fr0_ - 0xf0)) = uVar8;
    }
    else {
      (*(undefined4 *)(fr0_ - 0xf0)) = SUB84(dVar6,0);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
      (*(undefined4 *)(fr0_ - 0xec)) = uVar8;
    }
    if (cVar10 == '\0') {
      fVar9 = F32LO(dVar6) + fVar9;
    }
    else {
      fVar9 = SUB84(dVar6 + CONCAT44D(in_fr14,fVar9),0);
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xf0)),fVar9);
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xec)),(*(undefined4 *)(fr0_ - 0xf0)));
    }
    if (cVar10 == '\0') {
      fVar9 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar9 = SUB84(dVar5 - dVar5,0);
    }
    dVar5 = in_xd0;
    if (cVar11 == '\0') {
      (*(undefined8 *)(fr0_ - 0xc8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)),fVar9);
      dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    }
    (*(undefined8 *)(fr0_ - 0xc8)) = dVar5;
    dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    if ((cVar10 == '\0' && fVar9 < 1.0) &&
       (dVar5 = CONCAT44D(0x3f800000,fVar9), cVar11 == '\0')) {
      (*(undefined8 *)(fr0_ - 0xc8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)),0x3f800000);
      dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    }
    (*(undefined8 *)(fr0_ - 0xc8)) = dVar5;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_length(ar4 + 0x200,uVar3,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023bf4(ar4 + 0x200,&(*(undefined8 *)(fr0_ - 0xc8)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023bf4(ar4 + 0x200,((undefined1 *)(unsigned)0x8c1379a0),ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 1;
  }
LAB_8c07b7a8:
  uVar3 = (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c07b2d4\n.set _FUN_8c07b2d4, _FUN_8c07b2d4_def\n");
//@unit 8c07b7d0
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
undefined4 FUN_8c07b7d0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07b7d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined4 in_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  uVar2 = ar5;
  if (iVar1 == 0) {
    ar7_00 = 0;
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 52)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,4,uVar3,ar7_00));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 52)), rand_range(ar4,0,uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 52)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar3,ar7_00));
    if (cVar4 != '\0') {
      in_fr1 = 0x41700000;
    }
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c03263c(ar4,ar6,uVar3,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 52)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),ar5,uVar3,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x30)),uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,uVar3,ar7_00));
    if (cVar4 != '\0') {
      in_fr1 = 0x40400000;
    }
    iVar1 = ar4 + 0x54;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c032788(ar4,iVar1,ar7,s0));
    if (cVar4 == '\0') {
      uVar3 = 0x40000000;
      *(undefined4 *)(unsigned)(ar4 + 0x34) = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      uVar3 = 0x42700000;
      *(undefined8 *)(unsigned)(ar4 + 0x34) = 0x4270000040000000;
    }
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c032ab0(ar4,iVar1,ar7,s0));
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x38) = uVar3;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x38) = CONCAT44(uVar3,in_fr1);
    }
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c032ab0(ar4,iVar1,ar7,s0));
    ar6 = ar4 + 0x54;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031bb4(ar4,ar5,ar6,s0));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else {
    s0 = ar7;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7));
        if (iVar1 < 1) {
          return 1;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        return 1;
      }
      if (iVar1 != 3) {
        return 1;
      }
      iVar1 = ar4 + 0x54;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031764(ar4,iVar1,ar5,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) != 0) {
        return 1;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7));
      if (iVar1 != 1) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      return 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,s0));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031764(ar4,ar4 + 0x54,ar5,s0));
  if (*(int *)(unsigned)(ar4 + 0x40) == 4) {
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07b7d0\n.set _FUN_8c07b7d0, _FUN_8c07b7d0_def\n");
//@unit 8c07baa0
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
undefined4 FUN_8c07baa0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07baa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = 1;
  uVar2 = ar6;
  ar6_00 = ar6;
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c023cd4(ar4 + 0x270,ar6,ar6,ar7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031de8(ar4,0,ar6_00,ar7_00));
    return uVar2;
  }
  if (*(int *)(unsigned)(ar4 + 0x1d4) == 1) {
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x270,ar6,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
    return 0;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x2c)),uVar2,ar6_00,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); Vec3_sub(ar6,((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
    ar7_00 = (*(undefined4 *)(fr0_ + 0x00000000));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0329ac(ar4,ar4 + 0x54,ar7,(*(undefined4 *)(fr0_ + 0x00000000))));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032788(ar4,ar4 + 0x54,ar7,(*(undefined4 *)(fr0_ + 0x00000000))));
      ar7_00 = (*(undefined4 *)(fr0_ + 0x00000000));
    }
    if (*(int *)(unsigned)(ar4 + 0x21c) == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 2;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      if (((*(int *)(unsigned)(ar4 + 0x128) < 6) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), rand_range(ar4,0,100,ar7_00)), 10 < iVar1)) ||
         (*(int *)(unsigned)(ar4 + 0x124) == 0x21)) goto LAB_8c07bd04;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 2;
    }
  }
  else {
    if (iVar1 == 1) {
LAB_8c07bd04:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7_00));
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      if (cVar4 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x41f00000;
        return 1;
      }
      *(undefined8 *)(unsigned)(ar4 + 0x38) = 0xeed01f41f00000;
      return 1;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
      uVar2 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c07f8e0(ar4,ar5,ar6,(*(undefined4 *)(fr0_ + 0x00000000))));
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x270,ar6,uVar2,(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar2,(*(undefined4 *)(fr0_ + 0x00000000))));
      *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
      return 0;
    }
  }
  uVar2 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), pure_virtual_stub(ar4,ar5,ar6,ar7_00));
  if ((iVar1 == 0) && (*(int *)(unsigned)(ar4 + 0x40) == 0)) {
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x270,ar6,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar2,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07baa0\n.set _FUN_8c07baa0, _FUN_8c07baa0_def\n");
//@unit 8c07bec4
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
undefined4 FUN_8c07bec4_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07bec4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  ar5_00 = ar6;
  ar6_00 = ar6;
  uVar2 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c023cd4(ar4 + 0x270,ar6,ar6,ar7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c031de8(ar4,0x13,ar6_00,uVar2));
    return uVar2;
  }
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x28)),ar5_00,ar6_00,uVar2));
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c032ab0(ar4,ar5_00,ar6_00,uVar2));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c032ab0(ar4,ar5_00,ar6_00,uVar2));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x38)),ar5_00,ar6_00,uVar2));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); Vec3_sub(ar6,((undefined1 *)(fr0_ - 0x38)),ar6_00,uVar2); });
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x48)),ar6_00,uVar2));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,uVar2));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,uVar2));
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x43340000,*(undefined4 *)(unsigned)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x7c);
      dVar5 = -7.933010938730413e-251;
    }
    if (cVar6 == '\0') {
      fVar4 = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)(ar4 + 0x58) = fVar4;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      ar6_00 = ((undefined1 *)(fr0_ - 0x28));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0755e0(ar4,ar5,ar6_00,ar7));
      uVar2 = ar7;
      if ((iVar1 == 0) && (*(int *)(unsigned)(ar4 + 0x40) == 0)) {
        (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(ar4 + 0x270,ar6,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
        uVar3 = 0;
        uVar2 = ar7;
      }
    }
    goto LAB_8c07c05e;
  }
  ar6_00 = (undefined1 *)(unsigned)(ar4 + 0x54);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0755e0(ar4,ar5,ar6_00,ar7));
  uVar2 = ar7;
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
LAB_8c07c05e:
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,uVar2));
  return uVar3;
}

__asm__(".globl _FUN_8c07bec4\n.set _FUN_8c07bec4, _FUN_8c07bec4_def\n");
//@unit 8c07c0b8
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
undefined4 FUN_8c07c0b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07c0b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  int ar6_00;
  undefined8 in_dr0 = 0;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if (iVar2 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    in_dr0 = CONCAT44(0x41700000,(int)in_dr0);
    *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x41700000;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      ar6_00 = ar4 + 0x54;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 104)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = *(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c;
      (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c031b68(ar4,iVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c033530(ar4,iVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(ar4 + 0x54,(int)&(*(undefined8 *)(fr0_ - 0x64)) + 4,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x64)) + 4,0xffffffff,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      return 1;
    }
    if (iVar2 != 3) {
      return 1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 104)), pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7));
    if (iVar2 != 0) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    return 0;
  }
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
  uVar1 = in_dr0;
  if (cVar3 == '\0') {
    (*(undefined8 *)(fr0_ - 0x64)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x64))+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x64));
  }
  (*(undefined8 *)(fr0_ - 0x64)) = uVar1;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 104)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c1379ac),ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x20)),ar4 + 0x48,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c1379b0),ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x40)),ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x50)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07c0b8\n.set _FUN_8c07c0b8, _FUN_8c07c0b8_def\n");
//@unit 8c07c318
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
undefined4 FUN_8c07c318_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07c318";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 168; for (int i_ = 0; i_ < 168; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar6;
  double dVar7;
  double dVar8;
  double in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    uVar2 = ar6;
    ar6_00 = ar6;
    ar7_00 = ar7;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); Vec3_sub(ar5,ar6,ar6,ar7); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), Vec3_length(((undefined1 *)(fr0_ - 0x44)),uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),uVar2,ar6_00,ar7_00));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
    iVar3 = *(int *)(unsigned)(ar4 + 0x40);
    if ((iVar3 == 1) || (iVar3 == 3)) {
      if (*(int *)(unsigned)(ar4 + 0x44) == 1) {
        (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c031fc4(ar4,uVar5,ar6_00,ar7_00));
      }
      pdVar4 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        in_xd0 = *pdVar4;
        pdVar4 = (double *)(unsigned)(ar4 + 0x30);
      }
      dVar8 = *pdVar4;
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar8) / F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x84))+4)),fVar6);
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x18),(*(undefined4 *)(fr0_ - 0x20)));
        dVar8 = in_xd0;
      }
      else {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
        dVar7 = *(double *)(unsigned)(ar4 + 0x18);
        (*(undefined8 *)(fr0_ - 0x84)) = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      dVar7 = (*(undefined8 *)(fr0_ - 0x84));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x84)),fVar6);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x18),fVar6);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x18);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x18) = fVar6;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x18) = dVar8;
      }
      (vsp = ((unsigned long)(fr0_ - 168)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x50)),ar7,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x50)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 168)), object_dtor_delete(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_length(ar4 + 0x14,uVar5,ar6_00,ar7_00));
      pdVar4 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        dVar8 = *pdVar4;
        pdVar4 = (double *)(unsigned)(ar4 + 0x30);
      }
      (*(undefined8 *)(fr0_ - 0x90)) = *pdVar4;
      if (SUB84((*(undefined8 *)(fr0_ - 0x90)),0) != F32HI((*(undefined8 *)(fr0_ - 0x90)))) {
        if (cVar10 == '\0') {
          dVar7 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x28);
        }
        else {
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
          dVar7 = (*(undefined8 *)(fr0_ - 0x90));
        }
        (*(undefined8 *)(fr0_ - 0x90)) = (double)(D2U(dVar7) & 0xffffffff);
        if (cVar9 == '\0' && 0.0 < SUB84(dVar7,0)) {
          if (cVar10 == '\0') {
            dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(unsigned)(ar4 + 0x28);
            dVar7 = *(double *)(unsigned)(ar4 + 0x24);
          }
          if (cVar9 == '\0') {
            fVar6 = F32LO(dVar7) / F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar10 == '\0') {
            dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c),fVar6);
          }
          else {
            dVar7 = *(double *)(unsigned)(ar4 + 0x2c);
          }
          if (cVar9 == '\0') {
            fVar6 = F32LO(dVar7) + F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 + dVar7,0);
          }
          pdVar4 = (double *)(unsigned)(ar4 + 0x30);
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c) = fVar6;
            pdVar4 = (double *)(unsigned)(ar4 + 0x2c);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c) = dVar8;
            dVar8 = *(double *)(unsigned)(ar4 + 0x2c);
          }
          (*(undefined8 *)(fr0_ - 0x90)) = *pdVar4;
          if (cVar9 == '\0' && F32HI((*(undefined8 *)(fr0_ - 0x90))) < SUB84((*(undefined8 *)(fr0_ - 0x90)),0)) {
            if (cVar10 == '\0') {
              uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x30);
              (*(undefined8 *)(fr0_ - 0x90)) = CONCAT44D(uVar5,SUB84((*(undefined8 *)(fr0_ - 0x90)),0));
              *(undefined4 *)(unsigned)(ar4 + 0x2c) = uVar5;
            }
            else {
              (*(undefined8 *)(fr0_ - 0x90)) = *(double *)(unsigned)(ar4 + 0x30);
              *(double *)(unsigned)(ar4 + 0x2c) = (*(undefined8 *)(fr0_ - 0x90));
            }
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c022fc0(ar6,ar5,ar6_00,ar7_00));
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x90)) = CONCAT44D(uVar2,(int)((ulonglong)(*(undefined8 *)(fr0_ - 0x90)) >> 0x20));
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        dVar7 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x90)) = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x90)),fVar6);
      }
      if (cVar9 != '\0' || F32HI((*(undefined8 *)(fr0_ - 0x90))) <= SUB84((*(undefined8 *)(fr0_ - 0x90)),0)) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
          dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84((*(undefined8 *)(fr0_ - 0x90)),0));
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
          dVar7 = *(double *)(unsigned)(ar4 + 0x38);
        }
        if (cVar9 == '\0') {
          fVar6 = F32LO(dVar7) / F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 0x3c) = fVar6;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x3c) = dVar8;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
        uVar1 = 0;
      }
    }
    else if (iVar3 == 4) {
      uVar1 = 0;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,ar6_00,ar7_00); });
      uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), Vec3_length(((undefined1 *)(fr0_ - 0x70)),uVar5,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
      if (cVar10 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x2c));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x2c);
        dVar8 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar8) / F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      dVar8 = in_xd0;
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x84))+4)),fVar6);
        dVar8 = (*(undefined8 *)(fr0_ - 0x84));
      }
      (*(undefined8 *)(fr0_ - 0x84)) = dVar8;
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x84)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x34)),&(*(undefined8 *)(fr0_ - 0x84)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023aa0(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x84)) + 4,ar6_00,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x84)) + 4,0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7_00));
      if (cVar10 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x3c),*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar8 = *(double *)(unsigned)(ar4 + 0x3c);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar8) - F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 - dVar8,0);
      }
      (*(undefined8 *)(fr0_ - 0xa4)) = in_xd0;
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0xa4)) = CONCAT44D(ar4,fVar6);
      }
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xa4))+4)) + 0x28) = (undefined4)(*(undefined8 *)(fr0_ - 0xa4));
        (*(undefined8 *)(fr0_ - 0xa4)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0xa4)) & 0xffffffff);
      }
      else {
        *(double *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xa4))+4)) + 0x28) = (*(undefined8 *)(fr0_ - 0xa4));
      }
      if (cVar9 != '\0' || SUB84((*(undefined8 *)(fr0_ - 0xa4)),0) <= 0.0) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(*(undefined8 *)(fr0_ - 0xa4)) & 0xffffffff;
        }
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84((*(undefined8 *)(fr0_ - 0xa4)),0));
        }
      }
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c07c318\n.set _FUN_8c07c318, _FUN_8c07c318_def\n");
//@unit 8c07c5f8
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
undefined4 FUN_8c07c5f8_def(int ar4,int ar5,undefined4 ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c07c5f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 348; for (int i_ = 0; i_ < 348; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar4;
  uint uVar5;
  undefined8 in_dr0 = 0;
  ulonglong uVar6;
  undefined8 uVar7;
  char cVar8;
  
  cVar8 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  uVar4 = 1;
  iVar1 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),iVar1,ar6_00,ar7_00));
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      if ((*(int *)(fr0_ + 0x00000004)) == 1) {
        uVar4 = 0;
        break;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2ac) = 1;
      (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c031748(ar4,iVar1 * 4,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c03f39c((*(undefined4 *)(fr0_ + 0x0000000c)),((void *)0x8c03f39c),ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 348)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 348)) - 8); Vec3_scale(ar7,((undefined1 *)(unsigned)0x8c1379b4),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 348)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 348)) - 8); Vec3_add(ar6,((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 348)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 348)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x58)),ar5,ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_normalize(((undefined1 *)(fr0_ - 0x68)),((void *)0x8c022ec0),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x78)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x88)),ar4 + 0x54,ar6_00,ar7_00));
      ar6_00 = 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x88)),1,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_00,ar7_00));
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        ar6_00 = 0xffffffff;
        uVar2 = 1;
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00));
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x98)),ar7,ar6_00,ar7_00));
      ar7_00 = ((undefined1 *)(fr0_ - 0x98));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c032d48(ar4,ar5,ar6,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7_00));
      ar6_00 = ar6;
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 348)), vec3_clear(ar4 + 0x244,uVar2,ar6,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        ar6_00 = ar6;
      }
      (vsp = ((unsigned long)(fr0_ - 348)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00));
      break;
    case 3:
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa8)),iVar1 * 4,ar6_00,ar7_00));
      ar6_00 = 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0xa8)),1,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6_00,ar7_00));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xb8)),uVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xb8)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6_00,ar7_00));
        ar7_00 = (undefined1 *)(unsigned)0x0;
        ar6_00 = 0xffffffff;
        uVar2 = 0;
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 4:
      uVar2 = 0x11;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c031de8(ar4,0x11,ar6_00,ar7_00));
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        ar6_00 = 0xffffffff;
        uVar4 = 0x13;
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
        uVar5 = (uint)in_dr0;
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00));
        uVar6 = (ulonglong)uVar5;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar6;
        }
        iVar1 = ar4 + 0x14;
        (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x80,iVar1,ar6_00,ar7_00));
        if (cVar8 == '\0') {
          uVar7 = CONCAT44(0x40000000,(int)uVar6);
          *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x40000000;
        }
        else {
          uVar7 = 0x8c03c31440000000;
          *(undefined8 *)(unsigned)(ar4 + 0x38) = 0x8c03c31440000000;
        }
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c03c314(ar4,iVar1,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x298) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2ac) = 0;
        *(undefined4 *)(unsigned)(ar4 + 100) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        uVar4 = 0;
        (vsp = ((unsigned long)(fr0_ - 348)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000008)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000008)),ar5,ar6_00,ar7_00));
        if (cVar8 == '\0') {
          *(int *)(unsigned)(ar5 + 4) = (int)((ulonglong)uVar7 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)(ar5 + 4) = uVar7;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        if (iVar1 == 0x11) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x158))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c034384(ar4 + 0xb0,
                       *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1377f8) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18),ar6_00,
                       ar7_00));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xc8)),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 348)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 348)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x28)),ar4 + 0x244,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0xd8)),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6_00,ar7_00));
          puVar3 = ((undefined1 *)(fr0_ - 0x28));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x244,puVar3,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xe8)),puVar3,ar6_00,ar7_00));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c023d04(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0xe8)),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6_00,ar7_00));
          uVar2 = 0;
          if (iVar1 != 0) {
            (vsp = ((unsigned long)(fr0_ - 348)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xf4)),(*(undefined4 *)(fr0_ + 0x00000000)),ar6_00,ar7_00));
            puVar3 = ((undefined1 *)(fr0_ - 0xf4));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 348)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 348)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x38)),puVar3,ar6_00,ar7_00); });
            uVar2 = (vsp = ((unsigned long)(fr0_ - 348)), Vec3_length(((undefined1 *)(fr0_ - 0x104)),puVar3,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x14,uVar2,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar6_00,ar7_00));
            uVar2 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 348)), object_dtor_delete(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar6_00,ar7_00));
          }
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x38)),uVar2,ar6_00,ar7_00));
          if (cVar8 == '\0') {
            *(int *)(unsigned)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
          }
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c07c5f8\n.set _FUN_8c07c5f8, _FUN_8c07c5f8_def\n");
//@unit 8c07cce0
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
//@unit 8c07d048
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
undefined4 FUN_8c07d048_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07d048";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 344; for (int i_ = 0; i_ < 344; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined *ar6_00;
  undefined4 uVar5;
  undefined1 *ar7_00;
  undefined4 uVar6;
  float fVar7;
  undefined8 in_dr0 = 0;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar7_00 = (undefined1 *)(unsigned)0x0;
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  ar6_00 = (undefined *)(unsigned)0x1fc;
  uVar4 = ar5;
  (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c030f2c(ar4 + 0x1fc,ar5,0x1fc,0));
  uVar6 = 1;
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),uVar4,ar6_00,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 344)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x1d0))))(ar7,uVar4,ar6_00,ar7_00));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 344)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x1cc))))(ar7,uVar4,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x50)),uVar4,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_add(iVar2 + 4,((undefined1 *)(fr0_ - 0x50)),ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
  ar5_00 = (undefined1 *)(unsigned)0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7_00));
  iVar3 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x70)),ar5_00,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x70)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x280,((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7_00));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c031748(ar4,uVar4,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x90)),((void *)0x8c022ce8),ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c1379b8),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0xa0)),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xb0)),ar5,ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xc0)),((undefined1 *)(unsigned)0x8c1379bc),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xd0)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,ar4 + 0x54,ar6_00,ar7_00));
      (*(undefined4 *)(fr0_ - 0x150)) = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar12 == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x58),(*(undefined4 *)(fr0_ - 0x150)));
        in_dr0 = in_xd0;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x150)) = (undefined4)in_dr0;
        uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x58);
      }
      if (cVar11 == '\0' && F32HI(uVar8) < (float)uVar8) {
        (vsp = ((unsigned long)(fr0_ - 344)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,ar4 + 0x54,ar6_00,ar7_00));
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
          (*(undefined4 *)(fr0_ - 0x154)) = uVar4;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x154)) = (undefined4)uVar8;
          in_dr0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
          dVar9 = 6.37129236237323e-312;
          (*(undefined4 *)(fr0_ - 0x150)) = uVar4;
        }
        if (cVar11 == '\0') {
          fVar7 = F32LO(dVar9) * F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D((*(undefined4 *)(fr0_ - 0x154)),fVar7);
        }
        else {
          dVar9 = CONCAT44D((*(undefined4 *)(fr0_ - 0x150)),(*(undefined4 *)(fr0_ - 0x154)));
        }
        if (cVar11 == '\0') {
          fVar7 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x58) = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x58) = in_dr0;
        }
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 1:
      ar6_00 = (undefined *)(unsigned)(ar4 + 0x54);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 344)), pure_virtual_stub(ar4,ar5,ar6_00,ar7_00));
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      ar5_00 = (undefined1 *)(unsigned)(ar4 + 0x14);
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00));
      break;
    case 2:
      uVar4 = 1;
      (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c031de8(ar4,1,ar6_00,ar7_00));
      fVar7 = F32HI(in_dr0);
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xe0)),uVar4,ar6_00,ar7_00));
      ar7_00 = ((undefined1 *)(fr0_ - 0xe0));
      ar6_00 = ((undefined1 *)(fr0_ - 0x30));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c032d48(ar4,ar5,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6_00,ar7_00));
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      ar5_00 = (undefined1 *)(unsigned)(ar4 + 0x14);
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00));
      if ((*(int *)(fr0_ + 0x00000004)) == 0) {
        ar5_00 = ((undefined1 *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c022fc0(ar5,ar5_00,ar6_00,ar7_00));
        if (cVar12 == '\0') {
          fVar10 = 1000.0;
        }
        else {
          fVar7 = 1000.0;
          fVar10 = 5.26888e-43;
        }
        if ((cVar11 == '\0' && fVar10 < fVar7) && (iVar1 == 0)) {
          uVar6 = 2;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        }
      }
      break;
    case 3:
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xf0)),ar5_00,ar6_00,ar7_00));
      ar6_00 = (undefined *)(unsigned)0x1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0xf0)),1,ar7_00));
      ar5_00 = (undefined1 *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,ar7_00));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x100)),ar5_00,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x100)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        ar7_00 = (undefined1 *)(unsigned)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 0x27;
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x27,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7_00));
        ar6_00 = ((undefined1 *)(unsigned)0x8c137888);
        ar5_00 = (undefined1 *)(unsigned)0x27;
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c07f1e4(ar4,0x27,((undefined1 *)(unsigned)0x8c137888),ar7_00));
      }
      break;
    case 4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 344)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
      if (iVar1 == 1) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 0x28;
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x28,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7_00));
        ar6_00 = ((undefined1 *)(unsigned)0x8c1378a0);
        ar5_00 = (undefined1 *)(unsigned)0x28;
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c07f1e4(ar4,0x28,((undefined1 *)(unsigned)0x8c1378a0),ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c03f39c(ar6,ar5_00,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 344)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x10c)),(*(undefined4 *)(fr0_ + 0x00000000)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c07f268(ar4,((undefined1 *)(fr0_ - 0x10c)),ar6_00,ar7_00));
        ar5_00 = (undefined1 *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 344)), object_dtor_delete(((undefined1 *)(fr0_ - 0x10c)),0xffffffff,ar6_00,ar7_00));
      }
      break;
    case 5:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 344)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
      if (iVar1 == 1) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        ar6_00 = (undefined *)(unsigned)0xffffffff;
        uVar4 = 0;
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c030eb8(ar4 + 0x1fc,uVar4,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7_00));
        ar5_00 = (undefined1 *)(unsigned)0x178;
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        uVar6 = 0;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 344)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x118)),(*(undefined4 *)(fr0_ + 0x00000000)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c07f268(ar4,((undefined1 *)(fr0_ - 0x118)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), object_dtor_delete(((undefined1 *)(fr0_ - 0x118)),0xffffffff,ar6_00,ar7_00));
        ar5_00 = (undefined1 *)(unsigned)(ar4 + 0x80);
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c07f418(ar4,ar5_00,ar6_00,ar7_00));
        ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 344)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7_00); });
        fVar7 = F32HI(in_dr0);
        if (cVar12 == '\0') {
          fVar10 = 160.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar7 = 160.0;
          fVar10 = 480.0;
        }
        if (cVar11 == '\0' && fVar10 < fVar7) {
          ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 344)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7_00); });
          if (cVar12 == '\0') {
            fVar7 = 480.0;
          }
          else {
            in_dr0 = CONCAT44(fVar10,fVar7);
            fVar10 = 480.0;
            fVar7 = 0.25;
          }
          if (cVar11 == '\0' && fVar10 < fVar7) {
            if (cVar12 == '\0') {
              dVar9 = CONCAT44D(0x3e800000,*(undefined4 *)(unsigned)(ar4 + 0x28));
            }
            else {
              in_dr0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
              dVar9 = -0.007812501818989404;
            }
            if (cVar11 == '\0') {
              fVar7 = F32LO(dVar9) * F32HI(dVar9);
            }
            else {
              fVar7 = SUB84(dVar9 * dVar9,0);
            }
            if (cVar12 == '\0') {
              *(float *)(unsigned)(ar4 + 0x28) = fVar7;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
            }
            (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x128)),((undefined1 *)(fr0_ - 0x128)),ar6_00,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x138))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x128)),ar4 + 0x28,ar6_00,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x138)),ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x138)),0xffffffff,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c023aa0(iVar2 + 4,((undefined1 *)(fr0_ - 0x40)),ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c023aa0(iVar2 + 0x14,((undefined1 *)(fr0_ - 0x40)),ar6_00,ar7_00));
            ar5_00 = (undefined1 *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7_00));
          }
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c031700(ar4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
  return uVar6;
}

__asm__(".globl _FUN_8c07d048\n.set _FUN_8c07d048, _FUN_8c07d048_def\n");
//@unit 8c07d8fc
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
undefined4 ret_const_0_07d8fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_07d8fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_07d8fc\n.set _ret_const_0_07d8fc, _ret_const_0_07d8fc_def\n");
//@unit 8c07d904
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
undefined4 FUN_8c07d904_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07d904";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 uVar3;
  float fVar4;
  ulonglong in_dr0 = 0;
  float fVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c031748(ar4,ar5,ar6,ar7));
      ar7 = 0;
      ar6 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      ar5_00 = ((undefined1 *)(unsigned)0x8c125e68);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar2;
      if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c023d7c(ar4 + 0x254,ar5_00,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c023d7c(ar4 + 0x254,ar5_00,ar6,ar7));
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 1:
      fVar4 = (float)(in_dr0 >> 0x20);
      (vsp = ((unsigned long)(fr0_ - 60)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x18)),ar4 + 0x254,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x18)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 60)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 60)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar7 == '\0') {
        fVar5 = 5.0;
      }
      else {
        fVar4 = 5.0;
        fVar5 = 9.24857e-43;
      }
      (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
      if (cVar6 == '\0' && fVar4 < fVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      if (*(int *)(unsigned)(ar4 + 0x2a8) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar3 = 0;
      }
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 1;
      uVar2 = ar5;
      (vsp = ((unsigned long)(fr0_ - 60)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      iVar1 = *(int *)(unsigned)(ar4 + 0x294);
      *(int *)(unsigned)(ar4 + 0x294) = iVar1 + 1;
      if (iVar1 + 1 < 0x12d) {
        if (*(int *)(unsigned)(ar4 + 0x2a8) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          uVar3 = 0;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03f39c(uVar2,ar5,ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c026db0(ar4,ar5,ar6,ar7));
      if (iVar1 == 0xb) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
        if (iVar1 == 1) {
          uVar2 = 0xb;
          (vsp = ((unsigned long)(fr0_ - 60)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0xb,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034148(ar4 + 0xb0,0xb,ar6,ar7));
      }
      break;
    case 4:
      uVar2 = ar5;
      (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 60)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
      if (cVar7 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (cVar6 != '\0' || (float)in_dr0 <= 0.0) {
        ar7_00 = 0;
        uVar2 = 0xffffffff;
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar3 = 0;
      }
    }
  }
  *(undefined4 *)(unsigned)(ar4 + 0x2a8) = 0;
  return uVar3;
}

__asm__(".globl _FUN_8c07d904\n.set _FUN_8c07d904, _FUN_8c07d904_def\n");
//@unit 8c07dc50
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
undefined4 FUN_8c07dc50_def(code *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07dc50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 160; for (int i_ = 0; i_ < 160; i_++) z_[i_] = 0; }
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  undefined *ar5_00;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 ar7_00;
  undefined4 uVar7;
  float fVar8;
  ulonglong in_dr0 = 0;
  double dVar9;
  ulonglong in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar7 = 1;
  iVar3 = *(int *)(unsigned)(ar4 + 300);
  if ((6 < iVar3) || (iVar3 < 0)) goto switchD_8c07dc84_default;
  pcVar5 = ar5;
                    
  switch(iVar3) {
  case 0:
    uVar6 = 0x13;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7));
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        if (iVar3 != 2) goto LAB_8c07dcfc;
        (vsp = ((unsigned long)(fr0_ - 160)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6,ar7));
      }
      uVar6 = 300;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      ar6 = ar4;
    }
LAB_8c07dcfc:
    (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c031748(ar4,uVar6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c031700(ar4,uVar6,ar6,ar7));
    break;
  case 1:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
    if (cVar11 == '\0') {
      uVar2 = CONCAT44(0x42340000,(int)(in_dr0 >> 0x20));
    }
    else {
      uVar2 = 0x8c022cb042340000;
      in_xd0 = in_dr0;
    }
    in_dr0 = uVar2;
    bVar1 = cVar10 == '\0';
    fVar8 = (float)in_dr0;
    uVar2 = in_dr0 >> 0x20;
    pcVar4 = (code *)0xffffffff;
    pcVar5 = ar5;
    (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
    if (bVar1 && (float)uVar2 < fVar8) {
      ar5_00 = ((undefined1 *)(unsigned)0x8c125e68);
      uVar6 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar6;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar11 == '\0') {
        uVar2 = CONCAT44(0x42aa0000,(int)(in_dr0 >> 0x20));
      }
      else {
        uVar2 = 0xbf80000042aa0000;
        in_xd0 = in_dr0;
      }
      in_dr0 = uVar2;
      bVar1 = cVar10 != '\0';
      fVar8 = (float)in_dr0;
      uVar2 = in_dr0 >> 0x20;
      (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
      if (bVar1 || (float)uVar2 <= fVar8) {
        if (*(int *)(unsigned)(ar4 + 0x260) == 3) {
          (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c07f1e4(ar4,0x19,((undefined1 *)(unsigned)0x8c137738) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c07f1e4(ar4,0x1a,((undefined1 *)(unsigned)0x8c137768) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18,ar7));
        }
        ar7 = 0;
        ar6 = (code *)0xffffffff;
        ar5 = (code *)(*(int *)(unsigned)(ar4 + 0x260) + 0x16);
        (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
      }
      else {
        ar7 = 0;
        iVar3 = *(int *)(unsigned)(ar4 + 0x260) + 0x18;
        (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar3,0xffffffff,0));
        ar6 = ((void *)0x8c033e68);
        (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,((void *)0x8c033e68),ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        ar5 = ar4;
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
      ar5 = pcVar4;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  case 2:
    fVar8 = (float)(in_dr0 >> 0x20);
    iVar3 = *(int *)(unsigned)(ar4 + 0x260);
    if (iVar3 == 0) {
      (vsp = ((unsigned long)(fr0_ - 160)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
        (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c03c314(ar4,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar7 = 0;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar3 == 1) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
        if (cVar11 == '\0') {
          pcVar5 = (code *)0x42aa0000;
        }
        else {
          fVar8 = 85.0;
          pcVar5 = ((void *)0x8c022cb0);
        }
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
        if (cVar10 == '\0' && fVar8 < (float)(uint)pcVar5) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
        uVar6 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)(pcVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar6,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x70)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
        if (cVar11 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x14)));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
          dVar9 = *(double *)(unsigned)(ar4 + 600);
        }
        if (cVar10 == '\0') {
          fVar8 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 - dVar9,0);
        }
        uVar2 = in_xd0;
        if (cVar11 == '\0') {
          (*(ulonglong *)(fr0_ - 0x20)) = CONCAT44((*(uint*)((uchar*)&(*(ulonglong *)(fr0_ - 0x20))+4)),fVar8);
          uVar2 = (*(ulonglong *)(fr0_ - 0x20));
        }
        (*(ulonglong *)(fr0_ - 0x20)) = uVar2;
        (vsp = ((unsigned long)(fr0_ - 160)), vec3_copy_8c023d8c(ar4 + 0x254,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x7c)),ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x8c)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), object_dtor_delete(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
      }
    }
    break;
  case 3:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
    fVar8 = (float)(in_dr0 >> 0x20);
    (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
    if (cVar11 == '\0') {
      pcVar5 = (code *)0x42340000;
    }
    else {
      fVar8 = 45.0;
      pcVar5 = ((void *)0x8c022cb0);
    }
    (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7));
    if (cVar10 != '\0' || fVar8 <= (float)(uint)pcVar5) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7));
      if (iVar3 != 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c034148(ar4 + 0xb0,*(int *)(unsigned)(ar4 + 0x260) + 0x18,ar6,ar7));
      if (iVar3 != 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
    break;
  case 4:
    *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 1;
    (vsp = ((unsigned long)(fr0_ - 160)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    iVar3 = *(int *)(unsigned)(ar4 + 0x294);
    *(int *)(unsigned)(ar4 + 0x294) = iVar3 + 1;
    if (iVar3 + 1 < 0x12d) {
      if (*(int *)(unsigned)(ar4 + 0x2a8) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar7 = 0;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c03f39c(ar5,iVar3,((void *)0x8c03f39c),ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    break;
  case 5:
    iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c026db0(ar4,ar5,ar6,ar7));
    if (iVar3 == 0x12) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,ar7));
      if (iVar3 == 1) {
        (vsp = ((unsigned long)(fr0_ - 160)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x12,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c034148(ar4 + 0xb0,0x12,ar4 + 0xb0,0xb0));
    }
    break;
  case 6:
    pcVar5 = ar4 + 0xb0;
    (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_AdvanceFrame_033ba0(pcVar5,pcVar5,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,ar6,ar7); });
    if (cVar11 == '\0') {
      in_dr0 = in_dr0 >> 0x20;
    }
    if (cVar10 != '\0' || (float)in_dr0 <= 0.0) {
      ar7_00 = 0;
      uVar6 = 0xffffffff;
      uVar7 = 0x13;
      (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar6,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar7 = 0;
    }
  }
switchD_8c07dc84_default:
  *(undefined4 *)(unsigned)(ar4 + 0x2a8) = 0;
  return uVar7;
}

__asm__(".globl _FUN_8c07dc50\n.set _FUN_8c07dc50, _FUN_8c07dc50_def\n");
//@unit 8c07e460
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
undefined4 FUN_8c07e460_def(int ar4,undefined4 ar5,undefined1 *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07e460";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *ar6_00;
  float fVar2;
  double in_dr0 = 0;
  double dVar3;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),ar6,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c031700(ar4,ar6,ar6_00,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if ((5 < iVar1) || (iVar1 < 0)) goto switchD_8c07e4c4_default;
                    
  switch(iVar1) {
  case 0:
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c031748(ar4,ar6,ar6_00,ar7));
    if ((*(int *)(fr0_ + 0x00000000)) != 0) {
      if ((*(int *)(fr0_ + 0x00000000)) == 1) {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        goto switchD_8c07e4c4_caseD_1;
      }
      if ((*(int *)(fr0_ + 0x00000000)) != 2) break;
    }
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125e98),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7));
    dVar3 = (*(double *)(fr0_ - 0x28));
    if (cVar6 == '\0') {
      in_fr15 = F32HI(in_dr0);
      dVar3 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x28))+0)),SUB84(in_dr0,0));
      in_dr0 = in_xd14;
    }
    if (cVar5 == '\0') {
      bVar4 = F32HI(dVar3) < in_fr15;
    }
    else {
      bVar4 = dVar3 < CONCAT44D(in_fr14,in_fr15);
    }
    dVar3 = (*(double *)(fr0_ - 0x28));
    if ((bVar4) && (dVar3 = in_dr0, cVar6 == '\0')) {
      (*(double *)(fr0_ - 0x28)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x28))+4)),in_fr15);
      dVar3 = (*(double *)(fr0_ - 0x28));
    }
    (*(double *)(fr0_ - 0x28)) = dVar3;
    ar7 = (int *)(unsigned)((undefined1 *)(unsigned)0x8c125ea8);
    ar6_00 = ((undefined1 *)(fr0_ - 0x2c));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c07c5f8(ar4,ar5,ar6_00,((undefined1 *)(unsigned)0x8c125ea8)));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    break;
  case 1:
switchD_8c07e4c4_caseD_1:
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125ee8),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7));
    if (cVar6 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x7c);
    }
    if (cVar5 == '\0') {
      fVar2 = F32LO(in_dr0) + F32HI(in_dr0);
    }
    else {
      fVar2 = SUB84(in_dr0 + in_dr0,0);
    }
    dVar3 = in_xd0;
    if (cVar6 == '\0') {
      (*(double *)(fr0_ - 0x28)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x28))+4)),fVar2);
      dVar3 = (*(double *)(fr0_ - 0x28));
    }
    (*(double *)(fr0_ - 0x28)) = dVar3;
    ar6_00 = ((undefined1 *)(fr0_ - 0x2c));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0755e0(ar4,ar5,ar6_00,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
    ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    break;
  case 2:
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7));
    if (cVar6 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x7c);
    }
    if (cVar5 == '\0') {
      fVar2 = F32LO(in_dr0) + F32HI(in_dr0);
    }
    else {
      fVar2 = SUB84(in_dr0 + in_dr0,0);
    }
    dVar3 = in_xd0;
    if (cVar6 == '\0') {
      (*(double *)(fr0_ - 0x28)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x28))+4)),fVar2);
      dVar3 = (*(double *)(fr0_ - 0x28));
    }
    (*(double *)(fr0_ - 0x28)) = dVar3;
    ar6_00 = ((undefined1 *)(fr0_ - 0x2c));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0755e0(ar4,ar5,ar6_00,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
    ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    break;
  case 3:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_1c_026dd8(ar4 + 0xb0,ar6,ar6_00,ar7));
    if ((iVar1 == 0) || (iVar1 == 0x13)) {
      (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
    }
    else if ((*(int *)(fr0_ + 0x00000000)) == 1) {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c034148(ar4 + 0xb0,0x13,ar6_00,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7));
    }
    break;
  case 4:
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125ec8),ar6_00,ar7));
    ar6_00 = ((undefined1 *)(fr0_ - 0x2c));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c074d1c(ar4,ar5,ar6_00,ar7));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    break;
  case 5:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_1c_026dd8(ar4 + 0xb0,ar6,ar6_00,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7));
    }
  }
switchD_8c07e4c4_default:
  if (*(int *)(unsigned)(ar4 + 0x134) != 0) {
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  return 1;
}

__asm__(".globl _FUN_8c07e460\n.set _FUN_8c07e460, _FUN_8c07e460_def\n");
//@unit 8c07e828
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
undefined4 FUN_8c07e828_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07e828";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar3;
  undefined4 unaff_r9 = 0;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 uVar4;
  undefined4 unaff_r12 = 0;
  int *a4;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined1 *puVar5;
  float fVar6;
  undefined8 in_dr0 = 0;
  double dVar7;
  undefined8 uVar8;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar9;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = ((undefined1 *)(fr0_ - 0x4));
  }
  else {
    puVar5 = ((undefined1 *)(fr0_ - 0x8));
  }
  *(undefined4 *)(unsigned)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)(puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)(unsigned)(puVar5 + -0x18) = unaff_r9;
  *(undefined4 *)(unsigned)(puVar5 + -0x1c) = in_PR;
  *(undefined4 *)(unsigned)(puVar5 + -0x104) = ar6;
  a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(puVar5 + 4));
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  uVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
  uVar4 = 1;
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c031700(ar4,uVar3,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x290) = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 12)), Vec3_ctor_zero(puVar5 + -0x2c,uVar3,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c031748(ar4,uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c031c74(ar4,((undefined1 *)(unsigned)0x8c125e78),ar5,ar7));
    ar6 = ar5;
    if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c034148(ar4 + 0xb0,0x29,ar5,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xc4) = uVar3;
      ar6 = ar5;
      if (0 < *(int *)(unsigned)(puVar5 + -0xc4)) {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x290) = *(undefined4 *)(unsigned)(ar4 + 0x294);
        *(int *)(unsigned)(puVar5 + -0xf0) = ar4;
        *(int *)(unsigned)(*(int *)(unsigned)(puVar5 + -0xf0) + 300) = *(int *)(unsigned)(*(int *)(unsigned)(puVar5 + -0xf0) + 300) + 1;
      }
    }
  }
  else if (iVar1 == 1) {
    ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x104)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar5 + -200) = (int)((ulonglong)in_dr0 >> 0x20);
      in_fr15 = *(float *)(unsigned)(puVar5 + -200);
      dVar7 = CONCAT44D(0x43250000,(int)in_dr0);
    }
    else {
      *(undefined8 *)(unsigned)(puVar5 + -200) = in_dr0;
      dVar7 = 6.03203368746242e-312;
    }
    if (in_FPSCR_PR == '\0') {
      bVar9 = F32HI(dVar7) < in_fr15;
    }
    else {
      bVar9 = dVar7 < CONCAT44D(in_fr14,in_fr15);
    }
    if (bVar9) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x11c))))(a4,6,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xcc) = uVar3;
      if (*(int *)(unsigned)(puVar5 + -0xcc) == 0) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x11c))))(a4,4,ar6,ar7));
        *(undefined4 *)(unsigned)(puVar5 + -0xd0) = uVar3;
        if (*(int *)(unsigned)(puVar5 + -0xd0) == 0) {
          *(undefined4 *)(unsigned)(puVar5 + -0xb8) = 2;
          (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x2c,0xffffffff,ar6,ar7));
          return *(undefined4 *)(unsigned)(puVar5 + -0xb8);
        }
        uVar3 = 4;
      }
      else {
        uVar3 = 6;
      }
      ar5_00 = 0x2c;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c03c0f0(ar4 + 0xb0,0x2c,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xd4) = uVar2;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), deref_u32(*(undefined4 *)(unsigned)(puVar5 + -0xd4),ar5_00,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xd8) = uVar2;
      ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x104)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar5 + -0xdc) = (int)(D2U(dVar7) >> 0x20);
      }
      else {
        *(double *)(unsigned)(puVar5 + -0xdc) = dVar7;
      }
      *(unsigned *)(unsigned)(puVar5 + -0x108) = puVar5 + -0x4c;
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(0x42f40000,SUB84(dVar7,0));
      }
      else {
        uVar8 = 0x8c0342d842f40000;
      }
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0342d8(ar4 + 0xb0,*(undefined4 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(puVar5 + -0xd8)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_assign(puVar5 + -0x2c,puVar5 + -0x4c,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x4c,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), vec3_copy_8c02b5fc(puVar5 + -0x58,*(undefined4 *)(unsigned)(puVar5 + -0x104),ar6,ar7));
      *(unsigned *)(unsigned)(puVar5 + -0x108) = puVar5 + -0x68;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x108)); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12)) - 8); FUN_8c023484(puVar5 + -0x2c,puVar5 + -0x58,ar6,ar7); });
      *(unsigned *)(unsigned)(puVar5 + -0x108) = puVar5 + -0x78;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x108)); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12)) - 8); Vec3_add(puVar5 + -0x68,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_assign(puVar5 + -0x2c,puVar5 + -0x78,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x78,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x68,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), object_dtor_delete(puVar5 + -0x58,0xffffffff,ar6,ar7));
      ar6 = *(undefined4 *)(unsigned)(ar4 + 0x294);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x100))))(a4,uVar3,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xe0) = uVar2;
      iVar1 = *(int *)(unsigned)(puVar5 + -0xe0);
      if (iVar1 != 0) {
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c036988(iVar1,uVar3,ar6,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_ctor_xyz(puVar5 + -0x88,uVar3,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xf4) = *(undefined4 *)(unsigned)(ar4 + 0x294);
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_set_xyz(puVar5 + -0x94,uVar3,ar6,ar7));
      *(unsigned *)(unsigned)(puVar5 + -0x108) = puVar5 + -0xa4;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x108)); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12)) - 8); FUN_8c023484(puVar5 + -0x88,puVar5 + -0x94,ar6,ar7); });
      *(unsigned *)(unsigned)(puVar5 + -0x108) = puVar5 + -0xb4;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x108)); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12)) - 8); Vec3_scale(puVar5 + -0xa4,((undefined1 *)(unsigned)0x8c1379c0),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_ctor_copy(puVar5 + -0x3c,puVar5 + -0xb4,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0xb4,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0xa4,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), object_dtor_delete(puVar5 + -0x94,0xffffffff,ar6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x88,0xffffffff,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x104)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar5 + -0xe4) = (int)((ulonglong)uVar8 >> 0x20);
        dVar7 = CONCAT44D(0x42f40000,*(undefined4 *)(unsigned)(puVar5 + -0xe4));
      }
      else {
        *(undefined8 *)(unsigned)(puVar5 + -0xe4) = uVar8;
        in_xd0 = *(undefined8 *)(unsigned)(puVar5 + -0xe4);
        dVar7 = -8.406882663868896e-251;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = CONCAT44D(0x42f00000,fVar6);
      }
      else {
        dVar7 = -7.95866521996774e-251;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar5 + -0xc0) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(puVar5 + -0xc0) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c023bf4(puVar5 + -0x3c,puVar5 + -0xc0,ar6,ar7));
      ar5_01 = puVar5 + -0x3c;
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c023aa0(puVar5 + -0x2c,ar5_01,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c036988(iVar1,ar5_01,ar6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x3c,0xffffffff,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 12)), vec3_clear(puVar5 + -0x2c,uVar3,ar6,ar7));
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7));
    *(undefined4 *)(unsigned)(puVar5 + -0xe8) = uVar2;
    if (*(int *)(unsigned)(puVar5 + -0xe8) == 7) {
      if (in_FPSCR_PR == '\0') {
        iVar1 = (int)in_fr15;
      }
      else {
        iVar1 = (int)CONCAT44D(in_fr14,in_fr15);
      }
      if (iVar1 == 0xa5) {
        uVar3 = 6;
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c033474(ar4,6,ar5,a4));
        ar6 = ar5;
        ar7 = a4;
      }
      *(int *)(unsigned)(puVar5 + -0xf8) = ar4;
      *(undefined4 *)(unsigned)(puVar5 + -0xfc) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(puVar5 + -0xf8) + 0x294);
      *(int *)(unsigned)(*(int *)(unsigned)(puVar5 + -0xf8) + 0x294) = *(int *)(unsigned)(puVar5 + -0xfc) + 1;
      if (*(int *)(unsigned)(puVar5 + -0xfc) + 1 < 6) {
        *(undefined4 *)(unsigned)(ar4 + 0x290) = *(undefined4 *)(unsigned)(ar4 + 0x294);
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 12)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        *(int *)(unsigned)(puVar5 + -0x100) = ar4;
        *(int *)(unsigned)(*(int *)(unsigned)(puVar5 + -0x100) + 300) = *(int *)(unsigned)(*(int *)(unsigned)(puVar5 + -0x100) + 300) + 1;
      }
    }
  }
  else if (iVar1 == 2) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,ar7));
    *(undefined4 *)(unsigned)(puVar5 + -0xec) = uVar2;
    if (*(int *)(unsigned)(puVar5 + -0xec) == 1) {
      uVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c03c314(ar4,uVar3,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
    }
  }
  *(undefined4 *)(unsigned)(puVar5 + -0xbc) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x2c,0xffffffff,ar6,ar7));
  return *(undefined4 *)(unsigned)(puVar5 + -0xbc);
}

__asm__(".globl _FUN_8c07e828\n.set _FUN_8c07e828, _FUN_8c07e828_def\n");
//@unit 8c07edac
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
undefined4 FUN_8c07edac_def(int ar4,int ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07edac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 *ar6_00;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar3 = 0xc;
  if (*(int *)(unsigned)(ar4 + 100) == 1) {
    iVar3 = 0x17;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  piVar2 = ar6;
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(ar4 + 100) != 1) {
      ar6_00 = ((undefined4 *)(unsigned)0x8c125bf0);
      in_dr0 = CONCAT44(0x40400000,(int)in_dr0);
      ar7 = ar6;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c032518(ar4,ar5,((undefined4 *)(unsigned)0x8c125bf0),ar6));
      (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x28)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      goto LAB_8c07ee84;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 3;
    iVar3 = ar5;
  }
  else {
    if (iVar1 == 1) {
LAB_8c07ee84:
      piVar2 = (int *)(unsigned)(ar4 + 0x54);
      (vsp = ((unsigned long)(fr0_ - 76)), pure_virtual_stub(ar4,ar5,piVar2,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      }
      goto switchD_8c07f028_default;
    }
    if (iVar1 == 2) {
      *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfe;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c034148(ar4 + 0xb0,iVar3,ar6,ar7));
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else if (iVar1 == 2) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          goto LAB_8c07efc4;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar3,piVar2,ar7); });
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x38)),piVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,piVar2,ar7));
      goto switchD_8c07f028_default;
    }
    iVar3 = ar5;
    if (iVar1 != 3) goto switchD_8c07f028_default;
  }
LAB_8c07efc4:
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar3,piVar2,ar7); });
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x48)),piVar2,ar7));
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,piVar2,ar7));
  *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfe;
  iVar3 = *(int *)(unsigned)(ar4 + 0x128);
  if ((iVar3 < 8) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
    case 1:
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      break;
    default:
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      break;
    case 6:
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      break;
    case 7:
      if (*(int *)(unsigned)(ar4 + 100) == 1) {
        (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      }
    }
  }
switchD_8c07f028_default:
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,piVar2,ar7));
  if (cVar7 == '\0') {
    in_dr0 = CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar5 + 4));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar5 + 4);
  }
  if (cVar6 != '\0' || (float)in_dr0 <= F32HI(in_dr0)) {
    iVar3 = ar5;
    (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,piVar2,ar7));
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar5 = *(double *)(unsigned)(ar5 + 4);
    }
    if (cVar6 == '\0') {
      fVar4 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x3d4ccccd,fVar4);
    }
    else {
      dVar5 = -8.332610289015658e-251;
    }
    if (cVar6 == '\0') {
      fVar4 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar4);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x2c0);
    }
    if (cVar6 == '\0') {
      fVar4 = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2c0) = fVar4;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2c0) = in_dr0;
    }
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c031748(ar4,iVar3,piVar2,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c07edac\n.set _FUN_8c07edac, _FUN_8c07edac_def\n");
//@unit 8c07f1e4
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
undefined4 FUN_8c07f1e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07f1e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar3 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03c0f0(ar4 + 0xb0,ar5,ar6,ar7));
  puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), deref_u32(uVar1,ar5,uVar3,ar7));
  puVar4 = (undefined4 *)(unsigned)(ar4 + 0xb4);
  uVar1 = puVar2[1];
  *puVar4 = *puVar2;
  puVar4[1] = uVar1;
  puVar4[2] = puVar2[2];
  *(undefined4 *)(unsigned)(0xb4 + ar4) = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x244,ar5,uVar3,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a1fc(ar4 + 0x254,ar5,uVar3,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c07f1e4\n.set _FUN_8c07f1e4, _FUN_8c07f1e4_def\n");
//@unit 8c07f268
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
undefined4 FUN_8c07f268_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07f268";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 in_dr0 = 0;
  char cVar4;
  
  cVar4 = '\0';
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x18)),ar4 + 0x244,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x48)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
  puVar3 = ((undefined1 *)(fr0_ - 0x18));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x244,puVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x28)),puVar3,ar6,ar7));
  if (cVar4 == '\0') {
    *(int *)(unsigned)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x58)),puVar3,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c023d04(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x58)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 120)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x64)),uVar2,ar6,ar7));
    puVar3 = ((undefined1 *)(fr0_ - 0x64));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x28)),puVar3,ar6,ar7); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length(((undefined1 *)(fr0_ - 0x74)),puVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x14,uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c07f268\n.set _FUN_8c07f268, _FUN_8c07f268_def\n");
//@unit 8c07f418
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
undefined4 FUN_8c07f418_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07f418";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  double dVar1;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  char cVar2;
  char cVar3;
  
  cVar3 = '\0';
  cVar2 = '\0';
  ar5_00 = ar5;
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_set_zero(&(*(float *)(fr0_ - 0x24)),ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x254),(*(undefined4 *)(fr0_ - 0x18)));
  }
  else {
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
    dVar1 = *(double *)(unsigned)(ar4 + 0x254);
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x24)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x24)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x14)));
  }
  else {
    (*(float *)(fr0_ - 0x24)) = (float)in_xd0;
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
    dVar1 = *(double *)(unsigned)(ar4 + 600);
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x20)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x20)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x25c),(*(undefined4 *)(fr0_ - 0x10)));
  }
  else {
    (*(float *)(fr0_ - 0x20)) = (float)in_xd0;
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
    dVar1 = *(double *)(unsigned)(ar4 + 0x25c);
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x1c)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 != '\0') {
    (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 88)), vec3_copy_8c023d8c(ar4 + 0x254,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x3c)),&(*(float *)(fr0_ - 0x24)),ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c023484(ar5,((undefined1 *)(fr0_ - 0x3c)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_assign(ar5,((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(&(*(float *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return ar5;
}

__asm__(".globl _FUN_8c07f418\n.set _FUN_8c07f418, _FUN_8c07f418_def\n");
//@unit 8c07f56c
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
undefined4 FUN_8c07f56c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07f56c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  double in_dr0 = 0;
  double dVar3;
  undefined4 in_fr3 = 0;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7));
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    return 0;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 76)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
  if (cVar6 == '\0') {
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    (*(undefined8 *)(fr0_ - 0x48)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x48))+4)),uVar2);
    in_dr0 = CONCAT44D(uVar2,in_fr3);
    dVar3 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    dVar3 = -7.956826985829187e-251;
    (*(undefined8 *)(fr0_ - 0x48)) = in_dr0;
  }
  if (cVar5 == '\0') {
    bVar4 = F32LO(dVar3) * F32HI(dVar3) < F32HI(in_dr0);
  }
  else {
    bVar4 = dVar3 * dVar3 < in_dr0;
  }
  if (!bVar4) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x24))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); Vec3_sub(ar5,ar6,ar6_00,ar7_00); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), Vec3_length(((undefined1 *)(fr0_ - 0x24)),ar6,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03263c(ar4,uVar2,ar6_00,ar7_00));
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x48)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x34)),ar5,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(ar4 + 0x54,(int)&(*(undefined8 *)(fr0_ - 0x48)) + 4,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x48)) + 4,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c032788(ar4,ar4 + 0x54,s0,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07f56c\n.set _FUN_8c07f56c, _FUN_8c07f56c_def\n");
//@unit 8c07f76c
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
uint FUN_8c07f76c_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07f76c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *ar6_00;
  float fVar5;
  ulonglong uVar6;
  code *pcVar9;
  double dVar7;
  undefined8 uVar8;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  uVar6 = (ulonglong)(uint)*(float *)(unsigned)(ar4 + 0x130);
  if (*(float *)(unsigned)(ar4 + 0x130) < 0.0) {
    uVar4 = 0;
    ar6_00 = ar6;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c031de8(ar4,0,ar6,ar7));
    if (iVar3 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
    }
    uVar2 = (uint)(iVar3 != 0);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c022dac(ar4 + 0x14,((undefined1 *)(fr0_ - 0x20)),ar6_00,ar7));
    (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)((code *)(uVar6 >> 0x20)));
    if (cVar12 == '\0') {
      pcVar9 = (code *)0x40000000;
      (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x50))));
    }
    else {
      (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)((code *)uVar6));
      (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)((code *)0x40000000));
      pcVar9 = ((void *)0x8c022cb0);
    }
    bVar1 = cVar11 == '\0';
    bVar10 = (float)(uint)pcVar9 < (float)(uint)((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
    if (bVar1 && bVar10) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c1379c4),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x40)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_length(ar4 + 0x14,uVar4,ar6_00,ar7));
    }
    iVar3 = ar5;
    (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,ar6_00,ar7));
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(pcVar9));
    }
    else {
      dVar7 = -7.932637895862283e-251;
      (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(pcVar9));
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54)),fVar5);
    }
    else {
      dVar7 = CONCAT44D(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x50)),((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54)));
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar12 == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),fVar5);
    }
    else {
      uVar8 = *(undefined8 *)(unsigned)(ar5 + 4);
    }
    if (cVar11 != '\0' || F32HI(uVar8) <= (float)uVar8) {
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c031748(ar4,iVar3,ar6_00,ar7));
    }
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c031de8(ar4,8,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c031c74(ar4,ar5,ar5,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c07f76c\n.set _FUN_8c07f76c, _FUN_8c07f76c_def\n");
//@unit 8c07f8e0
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
undefined4 FUN_8c07f8e0_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07f8e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined4 in_fr3 = 0;
  undefined4 uVar7;
  double dVar8;
  undefined8 in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  int *ain0;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  ain0 = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x10c))))(ar7,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_copy(&(*(undefined4 *)(fr0_ - 0x2c)),uVar1,ar6_00,ar7));
  uVar1 = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 176)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 176)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_normalize(((undefined1 *)(fr0_ - 0x4c)),uVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
  if (cVar11 == '\0') {
    dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),in_fr3);
    dVar5 = CONCAT44D(0x40a00000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0xdc;
    dVar8 = CONCAT44D(0x444d0000,(*(undefined4 *)(fr0_ - 0x2c)));
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    dVar5 = 6.28646433727248e-312;
  }
  (*(undefined4 *)(fr0_ - 0x28)) = 0x444d0000;
  if (cVar10 == '\0') {
    fVar6 = F32HI(dVar5);
    fVar4 = F32LO(dVar5) * fVar6;
    dVar5 = CONCAT44D(fVar6,fVar4);
    dVar8 = CONCAT44D(F32HI(dVar8) + fVar4,SUB84(dVar8,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
    dVar8 = dVar8 + dVar5;
  }
  fVar4 = F32HI(dVar5);
  uVar7 = (undefined4)(D2U(dVar8) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x2c)) = uVar7;
  if (cVar11 != '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar8,0);
    (*(undefined4 *)(fr0_ - 0x28)) = uVar7;
  }
  if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(unsigned)(ar4 + 300);
    if ((iVar2 < 6) && (-1 < iVar2)) {
                    
      switch(iVar2) {
      case 0:
        if (*(int *)(unsigned)(ar4 + 0x2b8) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
          (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
          return 0;
        }
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
        ar6_00 = 1;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x6c)),1,ar7));
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6_00,ar7));
        if (iVar2 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        }
        break;
      case 1:
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        ar6_00 = 5;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 176)), rand_range(ar4,3,5,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar1;
      case 2:
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x7c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
          ar7 = (int *)(unsigned)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0x24;
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x24,0xffffffff,0));
        }
        else {
          ar7 = (int *)(unsigned)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0x2e;
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2e,0xffffffff,0));
        }
        (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7));
        break;
      case 3:
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7); });
        if (cVar11 == '\0') {
          fVar6 = 90.0;
        }
        else {
          fVar4 = 90.0;
          fVar6 = 7.51096e-43;
        }
        if (cVar10 != '\0' || fVar6 <= fVar4) {
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0x10;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        break;
      case 4:
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x8c)),((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
        uVar7 = SUB84(dVar8,0);
        (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x8c)),ar6_00,ar7));
        uVar1 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6_00,ar7));
        if (iVar2 == 7) {
          (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c032ab0(ar4,uVar1,ar6_00,ar7));
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c032204(ar4 + 0xb0,uVar1,ar6_00,ar7); });
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7); });
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar8 = 1.3411048278844095e-08;
        }
        if (cVar10 == '\0' && SUB84(dVar8,0) < F32HI(dVar8)) {
          if (cVar11 == '\0') {
            dVar8 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar8 = -7.957972460180408e-251;
          }
          if (cVar10 == '\0') {
            fVar4 = F32HI(dVar8);
            dVar8 = CONCAT44D(fVar4,F32LO(dVar8) + fVar4);
          }
          else {
            dVar8 = dVar8 + dVar8;
          }
          if (cVar11 == '\0') {
            *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar8,0);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
          }
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 176)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 176)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6_00,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 176)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 176)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x9c)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0xac)),ar6,ar6_00,ar7));
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),uVar7);
          dVar5 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          dVar5 = 3.051758535548288e-05;
        }
        if (cVar10 == '\0') {
          bVar9 = F32LO(dVar5) * F32HI(dVar5) <
                  F32HI(dVar8);
        }
        else {
          bVar9 = dVar5 * dVar5 < dVar8;
        }
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7));
        if (bVar9) {
          if (*(int *)(unsigned)(ar4 + 0x2b8) == 1) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
          }
        }
        else {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
        }
        break;
      case 5:
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        ar6_00 = ar5;
        (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031c74(ar4,ar5,ar5,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6_00,ar7));
        if (iVar2 == 1) {
          uVar3 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
          ar7 = (int *)(unsigned)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7));
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c032204(ar4 + 0xb0,uVar1,ar6_00,ar7); });
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07f8e0\n.set _FUN_8c07f8e0, _FUN_8c07f8e0_def\n");
//@unit 8c07ff08
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
undefined4 FUN_8c07ff08_def(int ar4,float *ar5,float *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07ff08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 220; for (int i_ = 0; i_ < 220; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  undefined4 *ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3 = 0;
  float fVar8;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  int *ain0;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  ain0 = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x10c))))(ar7,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6,ar7));
  fVar8 = 0.0;
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_zero(((float *)(fr0_ - 0x38)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x48)),((void *)0x8c022c4c),ar6,ar7));
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x40e00000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    dVar6 = 512.0001237392426;
  }
  if (cVar10 == '\0') {
    ((float *)(fr0_ - 0x38))[0] = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    ((float *)(fr0_ - 0x38))[0] = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x40800000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    ((float *)(fr0_ - 0x38))[0] = (float)in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    dVar6 = 7.971355785012665e+24;
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x451a6000,fVar5);
  }
  else {
    dVar6 = 7.321052503998254e+19;
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar6),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 - dVar6;
  }
  (*(undefined4 *)(fr0_ - 0x48)) = SUB84(dVar6,0);
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x48)) = (undefined4)(D2U(dVar6) >> 0x20);
    fVar5 = 750.0;
  }
  else {
    ((float *)(fr0_ - 0x38))[3] = 4.14784e-43;
    fVar5 = 4.14784e-43;
    (*(undefined4 *)(fr0_ - 0x3c)) = 0x128;
  }
  ((float *)(fr0_ - 0x38))[2] = 750.0;
  ((float *)(fr0_ - 0x38))[1] = 575.0;
  (*(undefined4 *)(fr0_ - 0x40)) = 0x443b8000;
  (*(undefined4 *)(fr0_ - 0x44)) = 0x440fc000;
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x48));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); Vec3_sub(ar5,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_normalize(((undefined1 *)(fr0_ - 0x68)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x78)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((float *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
    return 0;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((6 < iVar2) || (iVar2 < 0)) goto switchD_8c0800be_default;
                    
  switch(iVar2) {
  case 0:
    ar7 = (int *)(unsigned)0xb0;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),ar6,0xb0));
    if (iVar2 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    break;
  case 1:
    ar6 = ((float *)(fr0_ - 0x38));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      ar6 = (float *)(unsigned)0x5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), rand_range(ar4,3,5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
    }
    break;
  case 2:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar1,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x88)),ar6,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
    ar4_00 = ar4 + 0xb0;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), CAnimBody_AdvanceFrame_wrapper(ar4_00,uVar1,ar6,ar7));
    if (iVar2 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c010e38(ar4_00,uVar1,ar6,ar7); });
      if (cVar11 == '\0') {
        fVar8 = 0.03;
      }
      else {
        fVar5 = 0.03;
        fVar8 = 4.2039e-43;
      }
      if (cVar10 == '\0' && fVar5 < fVar8) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      }
    }
    break;
  case 3:
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x98)),((undefined1 *)(fr0_ - 0x58)),ar6,ar7));
    ar6 = (float *)(unsigned)0x1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x98)),1,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7));
    if (iVar2 == 0) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
        ar7 = (int *)(unsigned)0x0;
        ar6 = (float *)(unsigned)0xffffffff;
        uVar1 = 0x23;
        (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x23,0xffffffff,0));
      }
      else {
        ar7 = (int *)(unsigned)0x0;
        ar6 = (float *)(unsigned)0xffffffff;
        uVar1 = 0x2d;
        (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2d,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c032ab0(ar4,uVar1,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c032204(ar4 + 0xb0,uVar1,ar6,ar7); });
    }
    break;
  case 4:
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xa8)),((undefined1 *)(fr0_ - 0x58)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xa8)),ar6,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c031748(ar4,uVar1,ar6,ar7));
    ar6 = ar5;
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c031c74(ar4,ar5,ar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
    if (cVar11 == '\0') {
      fVar8 = 100.0;
    }
    else {
      fVar5 = 100.0;
      fVar8 = 4.2039e-43;
    }
    if (cVar10 != '\0' || fVar8 <= fVar5) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      ar6 = (float *)(unsigned)0x6;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), rand_range(ar4,4,6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar1;
      *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xf;
    }
    break;
  case 5:
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xb8)),((undefined1 *)(fr0_ - 0x58)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xb8)),ar6,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6,ar7); });
    if (cVar11 == '\0') {
      fVar8 = fVar5;
    }
    if (cVar10 == '\0') {
      iVar2 = (int)fVar8;
    }
    else {
      iVar2 = (int)CONCAT44D(in_fr14,fVar8);
    }
    if ((iVar2 == 0x8a) && (*(int *)(unsigned)(ar4 + 0x294) < 1)) {
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x3ca3d70a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 985162545658593.2;
      }
      if (cVar10 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar5;
        fVar5 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
      if (cVar10 == '\0' && 0.0 < fVar5) {
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
        }
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar1,ar6,ar7));
      if (iVar2 == 7) {
        ar6 = (float *)(unsigned)0x6;
        uVar1 = 4;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand_range(ar4,4,6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar3;
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6,ar7));
      if (iVar2 == 7) {
        (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c032ab0(ar4,uVar1,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c032204(ar4 + 0xb0,uVar1,ar6,ar7); });
        *(int *)(unsigned)(ar4 + 0x294) = *(int *)(unsigned)(ar4 + 0x294) + -1;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c031748(ar4,uVar1,ar6,ar7));
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x3d4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      dVar6 = 87960946291507.2;
    }
    if (cVar10 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    }
    if (cVar10 == '\0' && 0.0 < fVar5) {
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x42d40000,fVar5);
    }
    else {
      dVar6 = 211106267570176.0;
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar6) < fVar8;
    }
    else {
      bVar9 = dVar6 < CONCAT44D(in_fr14,fVar8);
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x42e80000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 492581279399936.0;
      }
      if (cVar10 == '\0') {
        bVar9 = fVar8 < F32HI(dVar6);
      }
      else {
        bVar9 = CONCAT44D(in_fr14,fVar8) < dVar6;
      }
      if (!bVar9) goto LAB_8c08060a;
LAB_8c08061a:
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0xc0400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 1.1920937492693184e-07;
      }
      if (cVar10 == '\0' && F32HI(dVar6) < SUB84(dVar6,0)) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x3e800000,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar6 = 3.06085459277653e-312;
        }
        if (cVar10 == '\0') {
          fVar8 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar8,F32LO(dVar6) - fVar8);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
    }
    else {
LAB_8c08060a:
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x42fc0000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 844425070608384.0;
      }
      if (cVar10 == '\0') {
        bVar9 = F32HI(dVar6) < fVar8;
      }
      else {
        bVar9 = dVar6 < CONCAT44D(in_fr14,fVar8);
      }
      if (bVar9) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x43080000,SUB84(dVar6,0));
        }
        else {
          dVar6 = -32.00000799074769;
        }
        if (cVar10 == '\0') {
          bVar9 = fVar8 < F32HI(dVar6);
        }
        else {
          bVar9 = CONCAT44D(in_fr14,fVar8) < dVar6;
        }
        if (bVar9) goto LAB_8c08061a;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xc8)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0xd8)),&(*(undefined4 *)(fr0_ - 0x48)),ar6,ar7));
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),in_fr3);
      dVar7 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar7 = 3.051758535548288e-05;
    }
    if (cVar10 == '\0') {
      bVar9 = F32LO(dVar7) * F32HI(dVar7) < F32HI(dVar6)
      ;
    }
    else {
      bVar9 = dVar7 * dVar7 < dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
    if (!bVar9) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
    }
    break;
  case 6:
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c031748(ar4,0x178,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c031c74(ar4,ar5,ar5,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),ar5,ar7));
    ar6 = ar5;
    if (iVar2 == 1) {
      uVar4 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
      (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c03c314(ar4,0,ar5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      ar7 = (int *)(unsigned)0x0;
      uVar3 = 0xffffffff;
      uVar1 = 0;
      (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 220)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar3,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c032204(ar4 + 0xb0,uVar1,uVar3,ar7); });
      ar6 = (float *)(unsigned)0xffffffff;
      *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
    }
  }
switchD_8c0800be_default:
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((float *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c07ff08\n.set _FUN_8c07ff08, _FUN_8c07ff08_def\n");
