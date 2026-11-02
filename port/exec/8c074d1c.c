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
