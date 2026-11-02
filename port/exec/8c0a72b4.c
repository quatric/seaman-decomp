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
undefined4 FUN_8c0a72b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a72b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 unaff_r11 = 0;
  undefined4 uVar3;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  ulonglong in_dr0 = 0;
  undefined8 uVar7;
  double dVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 in_dr14 = 0;
  undefined8 in_xd14 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
    puVar4 = &(*(undefined8 *)(fr0_ - 0x8));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar4 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x10));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)puVar4 + -0xc) = 1;
  *(undefined4 *)(unsigned)((int)puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)((int)puVar4 + -0x14) = in_PR;
  uVar3 = 1;
  uVar1 = ar5;
  ar6_00 = ar6;
  (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), Vec3_set_zero((undefined1 *)(unsigned)((int)puVar4 + -0x20),ar5,ar6,ar7));
  uVar10 = (undefined4)in_dr14;
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar2) || (iVar2 < 0)) goto switchD_8c0a72f4_caseD_2;
                    
  switch(iVar2) {
  case 0:
    uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), rand_range(ar4,0,2,ar7));
    uVar5 = (undefined4)in_dr0;
    *(undefined4 *)(unsigned)((int)puVar4 + -0x28) = uVar1;
    if (*(int *)(unsigned)((int)puVar4 + -0x28) == 1) {
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar1 = 0;
      (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
    }
    else {
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar1 = 1;
      (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 1;
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(0xbf800000,uVar5);
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0xbf800000;
    }
    else {
      in_dr0 = 0xb0bf800000;
      *(undefined8 *)(unsigned)(ar4 + 0x30) = 0xb0bf800000;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x224) = 2;
    break;
  case 2:
    goto switchD_8c0a72f4_caseD_2;
  case 3:
    goto switchD_8c0a72f4_caseD_3;
  case 4:
    *(int *)(unsigned)((int)puVar4 + -0x50) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c2858d8),*(undefined4 *)(unsigned)(ar4 + 0x22c));
    }
    else {
      dVar8 = CONCAT44D(((undefined4 *)(unsigned long)*(unsigned *)0x8c2858dc),(*(undefined4 *)(unsigned)(unsigned)0x8c2858d8));
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = F32LO(dVar8) / F32HI(dVar8);
    }
    else {
      fVar6 = SUB84(dVar8 / dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar4 + -0x50) + 0x28),fVar6);
    }
    else {
      dVar8 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar4 + -0x50) + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) - F32LO(dVar8),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(*(int *)(unsigned)((int)puVar4 + -0x50) + 0x28) = (int)(D2U(dVar8) >> 0x20);
      dVar8 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(double *)(unsigned)(*(int *)(unsigned)((int)puVar4 + -0x50) + 0x28) = dVar8;
    }
    if (in_FPSCR_PR != '\0' || SUB84(dVar8,0) <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar8) & 0xffffffff;
      }
    }
    uVar9 = D2U(dVar8) & 0xffffffff;
    uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7));
    *(undefined4 *)(unsigned)((int)puVar4 + -0x48) = uVar1;
    if (*(int *)(unsigned)((int)puVar4 + -0x48) == 1) {
      (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar4 + -0x4c) = (int)(uVar9 >> 0x20);
        dVar8 = CONCAT44D(0x40000000,((undefined4 *)(unsigned long)*(unsigned *)0x8c2858dc));
      }
      else {
        *(ulonglong *)(unsigned)((int)puVar4 + -0x4c) = uVar9;
        dVar8 = 1.8924005974588927e+232;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar6);
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = F32LO(dVar8) + F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar9 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar4 + -0x4c),fVar6);
      }
      else {
        uVar9 = *(ulonglong *)(unsigned)((int)puVar4 + -0x4c);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9 & 0xffffffff;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x220) = *(undefined4 *)(unsigned)(ar4 + 0x224);
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
        if (*(int *)(unsigned)(ar4 + 0x220) == 0) {
          ar7 = 0;
          ar6_00 = 0xffffffff;
          ar6 = 0;
          (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        }
        else if (*(int *)(unsigned)(ar4 + 0x220) == 1) {
          ar7 = 0;
          ar6_00 = 0xffffffff;
          ar6 = 1;
          (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
        }
        (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar6,ar6_00,ar7));
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9 & 0xffffffff;
        }
        uVar3 = 0;
      }
    }
    goto switchD_8c0a72f4_caseD_2;
  }
  fVar6 = (float)in_dr0;
  if (*(int *)(unsigned)(ar4 + 0x220) == 0) {
    if (in_FPSCR_SZ == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858d4) = 1.0;
    }
    else {
      *(unsigned *)0x8c2858dc = (unsigned)(unsigned long)((code *)0x3f333333);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e8) = 0x7104d120;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858d4) = fVar6;
      fVar6 = 0.7;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858e4) = 0.7;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858e0) = 0.7;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858d8) = 0x41300000;
  }
  else if (*(int *)(unsigned)(ar4 + 0x220) == 1) {
    if (in_FPSCR_SZ != '\0') {
      fVar6 = 7.0;
      *(unsigned *)0x8c2858dc = (unsigned)(unsigned long)(((void *)0x8c031b68));
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858d8) = 0x40e00000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2858d4) = 10.0;
    if (in_FPSCR_SZ == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e0) = 1.0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e4) = 1.0;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e8) = 0x3f800000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e0) = fVar6;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2858e4) = fVar6;
    }
  }
  (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c031b68(ar4,0x8c2858d0,ar6_00,ar7));
  if (in_FPSCR_SZ == '\0') {
    fVar6 = *(float *)(unsigned)(ar4 + 0x30);
  }
  in_dr0 = (ulonglong)(uint)fVar6;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
    if (in_FPSCR_SZ == '\0') {
      uVar10 = *(undefined4 *)(unsigned)(ar4 + 0x30);
    }
    else {
      in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x30);
      uVar10 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x2c);
    }
  }
  uVar1 = ar5;
  ar6_00 = ar6;
  (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x224) != 2) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = uVar10;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd14;
    }
  }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
switchD_8c0a72f4_caseD_3:
  if (*(int *)(unsigned)(ar4 + 0x220) == 0) {
    (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6_00,ar7));
    ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0x50)); vin0 = (unsigned)ri0_; vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7); });
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0x2c) = (int)(in_dr0 >> 0x20);
      uVar7 = CONCAT44(0x41e80000,*(undefined4 *)(unsigned)((int)puVar4 + -0x2c));
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar4 + -0x2c) = in_dr0;
      uVar7 = 0x8c032a6441e80000;
    }
    if (in_FPSCR_PR != '\0' || F32HI(uVar7) <= (float)uVar7) {
      ar6_00 = 5;
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), rand_range(ar4,0,5,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0x30) = uVar1;
      if (*(int *)(unsigned)((int)puVar4 + -0x30) != 1) {
        (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar4 + -0x34) = (int)((ulonglong)uVar7 >> 0x20);
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),((undefined4 *)(unsigned long)*(unsigned *)0x8c2858dc));
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar4 + -0x34) = uVar7;
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar4 + -0x34),fVar6);
        }
        else {
          uVar7 = *(undefined8 *)(unsigned)((int)puVar4 + -0x34);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar7 < F32HI(uVar7))
        goto LAB_8c0a761e;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x224) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x22c) = *(undefined4 *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x22c) = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x220) == 1) {
    (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6_00,ar7));
    ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0x50)); vin0 = (unsigned)ri0_; vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7); });
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0x38) = (int)(in_dr0 >> 0x20);
      uVar7 = CONCAT44(0x41200000,*(undefined4 *)(unsigned)((int)puVar4 + -0x38));
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar4 + -0x38) = in_dr0;
      uVar7 = 0xb041200000;
    }
    if (in_FPSCR_PR != '\0' || F32HI(uVar7) <= (float)uVar7) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x40a00000;
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x28),(float)uVar7);
        *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x4140000040a00000;
        uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        *(undefined8 *)(unsigned)(ar4 + 0x24) = uVar7;
      }
    }
    ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0x50)); vin0 = (unsigned)ri0_; vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7); });
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0x3c) = (int)((ulonglong)uVar7 >> 0x20);
      uVar7 = CONCAT44(0x41400000,*(undefined4 *)(unsigned)((int)puVar4 + -0x3c));
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar4 + -0x3c) = uVar7;
      uVar7 = 0x8c032a6441400000;
    }
    if (in_FPSCR_PR != '\0' || F32HI(uVar7) <= (float)uVar7) {
      ar6_00 = 2;
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), rand_range(ar4,0,2,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0x40) = uVar1;
      if (*(int *)(unsigned)((int)puVar4 + -0x40) != 1) {
        (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar4 + -0x44) = (int)((ulonglong)uVar7 >> 0x20);
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),((undefined4 *)(unsigned long)*(unsigned *)0x8c2858dc));
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar4 + -0x44) = uVar7;
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar4 + -0x44),fVar6);
        }
        else {
          uVar7 = *(undefined8 *)(unsigned)((int)puVar4 + -0x44);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar7 < F32HI(uVar7))
        goto LAB_8c0a761e;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x224) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x22c) = *(undefined4 *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x22c) = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
    }
  }
LAB_8c0a761e:
  if (*(int *)(unsigned)(ar4 + 0x40) != 4) {
    (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), FUN_8c031764(ar4,ar6,ar5,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    ar6_00 = ar5;
  }
switchD_8c0a72f4_caseD_2:
  *(undefined4 *)(unsigned)((int)puVar4 + -0x24) = uVar3;
  (vsp = (puVar4 ? (unsigned long)puVar4 - 80 : (unsigned long)(fr0_ - 92)), object_dtor_delete((undefined1 *)(unsigned)((int)puVar4 + -0x20),0xffffffff,ar6_00,ar7));
  return *(undefined4 *)(unsigned)((int)puVar4 + -0x24);
}

__asm__(".globl _FUN_8c0a72b4\n.set _FUN_8c0a72b4, _FUN_8c0a72b4_def\n");
