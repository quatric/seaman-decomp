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
