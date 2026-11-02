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
undefined4 FUN_8c04c314_def(int ar4,code *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04c314";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 464; for (int i_ = 0; i_ < 464; i_++) z_[i_] = 0; }
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  code *ar6_00;
  code *pcVar9;
  code *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 in_dr0 = 0;
  double dVar13;
  float fVar16;
  ulonglong uVar14;
  float fVar17;
  float fVar18;
  double dVar15;
  undefined8 in_dr2 = 0;
  undefined8 in_dr4 = 0;
  double in_dr12 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  double in_xd12 = 0;
  bool bVar19;
  char cVar20;
  char cVar21;
  
  cVar21 = '\0';
  cVar20 = '\0';
  fVar17 = F32HI(in_dr4);
  uVar11 = 1;
  pcVar9 = ((void *)0x8c022c4c);
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),ar5,ar6,((void *)0x8c022c4c)));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x48)),((void *)0x8c022c4c),ar6_00,pcVar9));
  if ((*(undefined1 *)(unsigned)0x8c280478) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c280474) = 0;
    (*(undefined1 *)(unsigned)0x8c280478) = '\x01';
  }
  if (*(int *)(unsigned)(ar4 + 0x324) != 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
  }
  pcVar10 = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); Vec3_sub(ar6,ar5,ar6_00,pcVar9); });
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_normalize(((undefined1 *)(fr0_ - 0x90)),pcVar10,ar6_00,pcVar9));
  pcVar9 = ((void *)0x8c022c88);
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0xa0)),ar6_00,((void *)0x8c022c88)));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,pcVar9));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,pcVar9));
  (*(undefined4 *)(fr0_ - 0x1b4)) = 0xffffffff;
  puVar8 = ((undefined1 *)(fr0_ - 0x58));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c023334(ar4 + 0x14,puVar8,ar6_00,pcVar9));
  *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar2;
  pcVar10 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x64)),puVar8,ar6_00,((void *)0x8c023d34)));
  pcVar9 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x70)),((void *)0x8c023d34),ar6_00,pcVar10));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c0230f0(ar4 + 0x14,pcVar9,ar6_00,pcVar10); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x58)),pcVar9,ar6_00,pcVar10); });
  (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xb0)),((undefined1 *)(fr0_ - 0xc0)),ar6_00,pcVar10));
  if (cVar21 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
  }
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,pcVar10));
  uVar2 = (undefined4)in_dr0;
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,pcVar10));
  if (cVar21 == '\0') {
    (*(float *)(fr0_ - 0x1b8)) = 30.0;
    (*(float *)(fr0_ - 0x1bc)) = 60.0;
    dVar13 = CONCAT44D(0x41200000,uVar2);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x1b4)) = 0xc4;
    (*(float *)(fr0_ - 0x1b8)) = 2.69049e-43;
    dVar13 = 3.99475032826028e-312;
    (*(float *)(fr0_ - 0x1bc)) = 2.63444e-43;
  }
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x80)),ar6,ar6_00,pcVar10));
  if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
    if (cVar21 == '\0') {
      dVar13 = CONCAT44D(0x42fff3ba,SUB84(dVar13,0));
      in_dr12 = 34144997571.25;
    }
    else {
      in_dr12 = 562106598554828.8;
      dVar13 = 3.7402662374345e-312;
      in_xd12 = -4.8084574610579776e+231;
    }
    (*(undefined4 *)(fr0_ - 0x1cc)) = 0x42fff3ba;
  }
  else if (*(int *)(unsigned)(ar4 + 0x128) == 4) {
    if (cVar21 == '\0') {
      dVar13 = CONCAT44D(0x4302f7fa,SUB84(dVar13,0));
      (*(undefined4 *)(fr0_ - 0x1cc)) = 0x4302f7fa;
      in_dr12 = 26070880467.71875;
    }
    else {
      in_dr12 = 667400475445497.0;
      dVar13 = 3.74026721418252e-312;
      (*(undefined4 *)(fr0_ - 0x1cc)) = 0x4302f7fa;
      in_xd12 = -9.066781293775917e-251;
    }
  }
LAB_8c04c588:
  iVar6 = *(int *)(unsigned)(ar4 + 0x40);
  if ((iVar6 < 6) && (-1 < iVar6)) {
                    
    switch(iVar6) {
    case 0:
      if (*(int *)(unsigned)(ar4 + 0x2b8) != 2) goto code_r0x8c04c5ee;
      puVar8 = ((undefined1 *)(fr0_ - 0x80));
      (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022fc0(ar5,puVar8,ar6_00,pcVar10));
      dVar15 = dVar13;
      fVar18 = fVar17;
      fVar16 = (float)in_dr4;
      if (cVar21 == '\0') {
        dVar15 = in_xd0;
        fVar18 = F32HI(dVar13);
        fVar16 = fVar17;
      }
      in_xd0 = dVar15;
      if (cVar20 == '\0' && fVar16 < fVar18) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar8,ar6_00,pcVar10); });
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_length(((undefined1 *)(fr0_ - 0xd0)),puVar8,ar6_00,pcVar10));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,pcVar10));
        uVar14 = (ulonglong)(uint)fVar18;
        if (cVar21 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar14;
        }
        (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c031748(ar4,uVar2,ar6_00,pcVar10));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,pcVar10); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x58)),uVar2,ar6_00,pcVar10); });
        (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xe0)),((undefined1 *)(fr0_ - 0xf0)),ar6_00,pcVar10));
        uVar2 = (undefined4)uVar14;
        if (cVar21 == '\0') {
          *(int *)(unsigned)(ar4 + 0x224) = (int)(uVar14 >> 0x20);
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x224) = uVar14;
        }
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,pcVar10));
        pcVar10 = ((void *)0x8c022cb0);
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6_00,((void *)0x8c022cb0)));
        uVar7 = 0x278;
        dVar13 = CONCAT44D(0x3f800000,uVar2);
        if (cVar21 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x278) = dVar13;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
        (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c02a1fc(ar4 + 0x2c8,0x278,ar6_00,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,ar6_00,pcVar10));
        *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
        goto switchD_8c04c5a8_caseD_1;
      }
      uVar11 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
      break;
    case 1:
switchD_8c04c5a8_caseD_1:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    case 3:
      pcVar9 = (code *)((undefined1 *)(fr0_ - 0x80));
      (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022fc0(ar5,pcVar9,ar6_00,pcVar10));
      if (cVar21 == '\0') {
        dVar15 = CONCAT44D(fVar17,(int)(D2U(dVar13) >> 0x20));
        dVar13 = in_xd0;
      }
      else {
        dVar15 = CONCAT44D((float)in_dr4,fVar17);
      }
      if (cVar20 != '\0' || SUB84(dVar15,0) <= F32HI(dVar15)) {
        pcVar9 = (code *)0x1;
        *(undefined4 *)(unsigned)(ar4 + 0x290) = 1;
      }
      goto LAB_8c04c728;
    case 4:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    }
  }
  goto switchD_8c04c5a8_caseD_2;
code_r0x8c04c5ee:
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  goto LAB_8c04c588;
LAB_8c04c728:
  do {
    switch(*(undefined4 *)(unsigned)(ar4 + 0x2b8)) {
    case 1:
    case 7:
      goto switchD_8c04c74a_caseD_1;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
      *(undefined4 *)(unsigned)(ar4 + 800) = 0;
      if (*(int *)(unsigned)(ar4 + 0x290) == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 464)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 464)), object_dtor_delete(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,pcVar10));
        return 0;
      }
      uVar2 = 100;
      iVar6 = ar4;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 464)), rand_range(ar4,0,100,pcVar10));
      uVar7 = (undefined4)in_dr2;
      fVar18 = (*(float *)(fr0_ - 0x1bc));
      fVar16 = (*(float *)(fr0_ - 0x1b8));
      if (cVar21 == '\0') {
        fVar18 = (float)iVar3;
        fVar16 = (*(float *)(fr0_ - 0x1bc));
      }
      if ((cVar20 != '\0' || fVar16 <= fVar18) || (iVar6 = *(int *)(unsigned)(ar4 + 700), iVar6 != 0)) {
        if (cVar21 == '\0') {
          dVar15 = CONCAT44D(0x41200000,fVar18);
        }
        else {
          dVar15 = 1.07851368593492e-311;
        }
        if (cVar20 == '\0') {
          bVar19 = F32HI(dVar15) < SUB84(in_dr14,0);
        }
        else {
          bVar19 = dVar15 < in_dr14;
        }
        if (bVar19) {
          ar6_00 = (code *)((undefined1 *)(fr0_ - 0x80));
          (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c057b6c(ar4,ar5,ar6_00,pcVar10));
        }
        else if (*(int *)(unsigned)(ar4 + 700) == -1) {
LAB_8c04ca6c:
          uVar2 = SUB84(dVar15,0);
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 7;
          pcVar9 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          iVar3 = 0x12;
          iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x12,0xffffffff,0));
          if (iVar6 == 6) {
            if (cVar21 == '\0') {
              *(int *)(unsigned)(ar4 + 0x2dc) = (int)((ulonglong)in_dr12 >> 0x20);
            }
            else {
              *(double *)(unsigned)(ar4 + 0x2dc) = in_dr12;
            }
          }
          else {
            pcVar9 = ((void *)0x8c014e20);
            (vsp = ((unsigned long)(fr0_ - 464)), vec3_clear(ar4 + 0x2d4,iVar3,ar6_00,((void *)0x8c014e20)));
            iVar3 = ar4 + 0xb0;
            (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetFrame_033e6e(iVar3,iVar3,ar6_00,pcVar9));
          }
          uVar7 = (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c026db0(ar4,iVar3,ar6_00,pcVar9));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,ar6_00,pcVar9));
          puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 464)), deref_u32(uVar4,uVar7,ar6_00,pcVar9));
          uVar7 = puVar5[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar5;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
          pcVar10 = (code *)puVar5[2];
          *(unsigned *)(unsigned)(ar4 + 0xbc) = pcVar10;
          if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c135fac);
          }
          else {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13624c);
          }
          (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022fc0(ar5,((undefined1 *)(fr0_ - 0x80)),ar6_00,pcVar10));
          if (cVar21 == '\0') {
            (*(undefined4 *)(fr0_ - 0x1cc)) = uVar2;
          }
          dVar15 = CONCAT44D(0x3f800000,(*(undefined4 *)(fr0_ - 0x1cc)));
          if (cVar21 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c0) = 0x3f800000;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c0) = dVar15;
          }
        }
        else {
          if (*(int *)(unsigned)(ar4 + 700) == 0) {
            uVar4 = (vsp = ((unsigned long)(fr0_ - 464)), rand(iVar6,((void *)0x8c014200),uVar2,pcVar10));
            iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), libgcc_divide_helper_01031c(uVar4,100,uVar2,pcVar10));
            if (cVar21 == '\0') {
              dVar15 = CONCAT44D((*(float *)(fr0_ - 0x1b8)),(float)iVar6);
            }
            else {
              dVar15 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1b4)),(*(float *)(fr0_ - 0x1b8)));
            }
            if (cVar20 == '\0' && SUB84(dVar15,0) < F32HI(dVar15)) {
              (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022fc0(ar5,((undefined1 *)(fr0_ - 0x80)),uVar2,pcVar10));
              if (cVar21 == '\0') {
                dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),uVar7);
                in_xd12 = CONCAT44D(SUB84(in_dr12,0),0x40400000);
              }
              if (cVar20 == '\0') {
                fVar17 = F32HI(in_xd12) * F32LO(in_xd12);
                bVar19 = F32HI(dVar15) < fVar17;
                dVar15 = CONCAT44D(fVar17,SUB84(in_xd12,0));
              }
              else {
                bVar19 = dVar15 < in_xd12 * in_xd12;
                dVar15 = in_xd12 * in_xd12;
              }
              if (bVar19) goto LAB_8c04ca6c;
            }
          }
          uVar4 = SUB84(in_dr14,0);
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 5;
          pcVar10 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          uVar2 = 0x18;
          (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x18,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 464)), vec3_clear(ar4 + 0x2d4,uVar2,ar6_00,pcVar10));
          (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,ar6_00,pcVar10));
          uVar2 = (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c026db0(ar4,((void *)0x8c026db0),ar6_00,pcVar10));
          uVar7 = (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c03c0f0(ar4 + 0xb0,uVar2,ar6_00,pcVar10));
          puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 464)), deref_u32(uVar7,uVar2,ar6_00,pcVar10));
          uVar2 = puVar5[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar5;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar5[2];
          if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c135fc4);
          }
          else {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136264);
          }
          (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022fc0(ar5,((undefined1 *)(fr0_ - 0x80)),ar6_00,pcVar10));
          fVar17 = F32HI(dVar15);
          dVar13 = dVar15;
          if (cVar21 == '\0') {
            dVar13 = CONCAT44D(fVar17,uVar4);
          }
          if (cVar20 == '\0') {
            fVar18 = fVar17 / F32LO(in_dr12);
            dVar15 = CONCAT44D(fVar18,SUB84(dVar15,0));
            iVar6 = (int)fVar18;
          }
          else {
            dVar15 = dVar15 / in_dr12;
            iVar6 = (int)dVar15;
          }
          if (cVar20 == '\0') {
            fVar18 = (float)(iVar6 + 1);
            dVar15 = CONCAT44D(fVar18,SUB84(dVar15,0));
            in_dr12 = CONCAT44D((fVar17 / fVar18) / F32LO(in_dr12),SUB84(dVar13,0));
          }
          else {
            dVar15 = (double)(iVar6 + 1);
            in_dr12 = (dVar13 / dVar15) / in_dr12;
          }
          if (cVar21 == '\0') {
            *(int *)(unsigned)(ar4 + 0x2c0) = (int)((ulonglong)in_dr12 >> 0x20);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c0) = in_dr12;
          }
        }
        goto switchD_8c04c74a_default;
      }
      iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), rand_range(ar4,0,3,pcVar10));
      uVar2 = 0;
      ar6_00 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar6 + 0x1a,0xffffffff,0));
      pcVar9 = ((void *)0x8c026dd8);
      iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),ar6_00,uVar2));
      if (iVar6 == 0x20) {
        uVar2 = 0;
        ar6_00 = (code *)0xffffffff;
        pcVar9 = (code *)0x1a;
        (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,pcVar9,ar6_00,uVar2));
      pcVar9 = ((void *)0x8c026dd8);
      iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),ar6_00,uVar2));
      *(undefined4 *)(unsigned)(ar4 + 0x218) =
           *(undefined4 *)(unsigned)
            (((undefined1 *)(unsigned)0x8c13639c) + (iVar6 + -0x1a) * 4 + (*(int *)(unsigned)(ar4 + 0x128) + -3) * 0x28);
      if (cVar21 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar18;
      }
      dVar15 = CONCAT44D(0x3f800000,fVar18);
      if (cVar21 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x278) = dVar15;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      pcVar10 = (code *)0x2c8;
      (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c02a1fc(ar4 + 0x2c8,pcVar9,ar6_00,0x2c8));
      break;
    case 3:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar9,ar6_00,pcVar10));
      if (iVar6 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
      if (cVar21 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x24) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x24) = D2U(dVar15) & 0xffffffff;
        *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar15) & 0xffffffff;
      }
      dVar15 = (double)(D2U(dVar15) & 0xffffffff);
      goto switchD_8c04c74a_default;
    case 4:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,ar6_00,pcVar10));
      if (iVar6 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
      }
      goto switchD_8c04c74a_default;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 1;
      pcVar9 = ((void *)0x8c026da8);
      ({ unsigned long ri0_ = (unsigned long)(fVar17); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 464)); CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),ar6_00,pcVar10); });
      if (cVar21 == '\0') {
        dVar1 = CONCAT44D(0x40e00000,(int)(D2U(dVar15) >> 0x20));
      }
      else {
        dVar1 = 1.69813438463526e-311;
        dVar13 = dVar15;
      }
      dVar15 = dVar1;
      if ((cVar20 != '\0' || F32HI(dVar15) <= SUB84(dVar15,0)) &&
         (*(int *)(unsigned)(ar4 + 800) == 0)) {
        *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244));
        pcVar9 = (code *)0xd;
        ar6_00 = ar5;
        (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c033474(ar4,0xd,ar5,pcVar10));
      }
      goto switchD_8c04c74a_caseD_1;
    case 6:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c057e58(ar4,pcVar9,ar6_00,pcVar10));
      if (iVar6 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
    default:
      goto switchD_8c04c74a_default;
    }
  } while( true );
switchD_8c04c74a_caseD_1:
  *(undefined4 *)(unsigned)(ar4 + 0x330) = 1;
  ({ unsigned long ri0_ = (unsigned long)(fVar17); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 464)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar9,ar6_00,pcVar10); });
  (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x100)),ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6_00,pcVar10));
  dVar1 = (*(double *)(fr0_ - 0x30));
  if ((*(int *)(unsigned)(ar4 + 0x128) == 3) && (*(int *)(unsigned)(ar4 + 0x2b8) == 5)) {
    if (cVar21 == '\0') {
      dVar15 = CONCAT44D(0x41100000,(*(uint*)((uchar*)&(*(double *)(fr0_ - 0x30))+0)));
    }
    else {
      dVar15 = 7.72945773970538e-312;
      dVar13 = (*(double *)(fr0_ - 0x30));
    }
    if (cVar20 == '\0') {
      fVar17 = F32HI(dVar15);
      dVar15 = CONCAT44D(fVar17,F32LO(dVar15) + fVar17);
    }
    else {
      dVar15 = dVar15 + dVar15;
    }
    dVar1 = dVar13;
    if (cVar21 == '\0') {
      (*(double *)(fr0_ - 0x30)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x30))+4)),SUB84(dVar15,0));
      dVar1 = (*(double *)(fr0_ - 0x30));
    }
  }
  (*(double *)(fr0_ - 0x30)) = dVar1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x2d4,ar6_00,pcVar10); });
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x110)),ar6_00,pcVar10));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6_00,pcVar10));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x120))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,pcVar10); });
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x130)),uVar2,ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x120)),((undefined1 *)(fr0_ - 0x130)),ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6_00,pcVar10));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x140)),uVar2,ar6_00,pcVar10));
  pcVar9 = (code *)(vsp = ((unsigned long)(fr0_ - 464)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x140)),ar6_00,pcVar10));
  uVar2 = 0xffffffff;
  ar6_00 = pcVar9;
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,pcVar9,pcVar10));
  if (pcVar9 == (code *)0x3) {
    (vsp = ((unsigned long)(fr0_ - 464)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x14c)),uVar2,((void *)0x8c023d68),pcVar10));
    pcVar10 = (code *)(ar4 + 0x2a8);
    ar6_00 = ((void *)0x8c023484);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x15c))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c023484(pcVar10,((undefined1 *)(fr0_ - 0x14c)),((void *)0x8c023484),pcVar10); });
    (vsp = ((unsigned long)(fr0_ - 464)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x15c)),ar6_00,pcVar10));
    (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x15c)),0xffffffff,ar6_00,pcVar10));
    (vsp = ((unsigned long)(fr0_ - 464)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14c)),0xffffffff,ar6_00,pcVar10));
  }
  else if (pcVar9 == (code *)0x4) {
    pcVar10 = (code *)&(*(double *)(fr0_ - 0x168));
    ar6_00 = ((void *)0x8c023d68);
    (vsp = ((unsigned long)(fr0_ - 464)), Vec3_set_xyz(pcVar10,uVar2,((void *)0x8c023d68),pcVar10));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x178))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c023484(ar4 + 0x2a8,&(*(double *)(fr0_ - 0x168)),ar6_00,pcVar10); });
    (vsp = ((unsigned long)(fr0_ - 464)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x178)),ar6_00,pcVar10));
    (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x178)),0xffffffff,ar6_00,pcVar10));
    (vsp = ((unsigned long)(fr0_ - 464)), object_dtor_delete(&(*(double *)(fr0_ - 0x168)),0xffffffff,ar6_00,pcVar10));
  }
  puVar8 = ((undefined1 *)(fr0_ - 0x38));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_assign(ar4 + 0x2d4,puVar8,ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x48)),puVar8,ar6_00,pcVar10));
  if (cVar21 == '\0') {
    dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x2c0));
  }
  else {
    dVar13 = *(double *)(unsigned)(ar4 + 0x2c0);
  }
  if (cVar20 == '\0') {
    dVar15 = (double)(ulonglong)(uint)(F32LO(dVar15) * F32HI(dVar15));
  }
  else {
    dVar15 = dVar15 * dVar15;
  }
  if (cVar21 == '\0') {
    *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar15,0);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x28) = dVar13;
  }
  iVar6 = *(int *)(unsigned)(ar4 + 0x2b8);
  if (iVar6 == 1) {
    pcVar10 = (code *)(ar4 + 0x2b0);
    dVar15 = (double)(D2U(dVar15) & 0xffffffff);
    if (cVar21 == '\0') {
      *(undefined4 *)(unsigned)pcVar10 = 0;
    }
    else {
      *(double *)(unsigned)pcVar10 = dVar15;
    }
  }
  else {
    if (iVar6 == 5) {
      if (*(int *)(unsigned)(ar4 + 0x290) != 1) {
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x184)),puVar8,ar6_00,pcVar10));
        pcVar10 = (code *)(ar4 + 0x14);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x194))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c031eb0(ar4,ar5,((undefined1 *)(fr0_ - 0x80)),pcVar10); });
        ar6_00 = (code *)((undefined1 *)(fr0_ - 0x194));
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_assign(ar4 + 0x14,ar6_00,ar6_00,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x194)),0xffffffff,ar6_00,pcVar10));
        puVar8 = (undefined1 *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 464)), object_dtor_delete(((undefined1 *)(fr0_ - 0x184)),0xffffffff,ar6_00,pcVar10));
      }
      iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar8,ar6_00,pcVar10));
      if (iVar6 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
      }
      goto switchD_8c04c74a_default;
    }
    if (iVar6 != 7) goto switchD_8c04c74a_default;
  }
  ar6_00 = (code *)0x290;
  pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x290));
  if ((double *)(unsigned)pcVar9 == (double *)(unsigned)0x1) {
    iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,1,0x290,pcVar10));
    if (iVar6 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
      pcVar10 = (code *)0x0;
      ar6_00 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
      pcVar9 = ((void *)0x8c033e68);
      (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),ar6_00,pcVar10));
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x2b8) == 1) {
    iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar9,0x290,pcVar10));
    if (iVar6 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      (vsp = ((unsigned long)(fr0_ - 464)), vec3_clear(ar4 + 0x2d4,ar4 + 0x2d4,ar6_00,pcVar10));
      pcVar10 = (code *)0x0;
      ar6_00 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
      pcVar9 = (code *)(ar4 + 0xb0);
      (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_SetFrame_033e6e(pcVar9,pcVar9,ar6_00,pcVar10));
    }
  }
  else {
    iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,pcVar9,0x290,pcVar10));
    if (iVar6 == 7) {
      pcVar10 = (code *)0x1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 1;
      pcVar9 = (code *)(ar4 + 0x2dc);
      if (cVar21 == '\0') {
        *(int *)(unsigned)pcVar9 = (int)((ulonglong)in_dr12 >> 0x20);
      }
      else {
        *(double *)(unsigned)pcVar9 = in_dr12;
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x290) != 1) {
    (vsp = ((unsigned long)(fr0_ - 464)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x1a0)),pcVar9,ar6_00,pcVar10));
    pcVar10 = (code *)(ar4 + 0x14);
    ar6_00 = (code *)((undefined1 *)(fr0_ - 0x80));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1b0))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c031eb0(ar4,ar5,ar6_00,pcVar10); });
    (vsp = ((unsigned long)(fr0_ - 464)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x1b0)),ar6_00,pcVar10));
    (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b0)),0xffffffff,ar6_00,pcVar10));
    (vsp = ((unsigned long)(fr0_ - 464)), object_dtor_delete(((undefined1 *)(fr0_ - 0x1a0)),0xffffffff,ar6_00,pcVar10));
  }
switchD_8c04c74a_default:
  uVar12 = SUB84(dVar15,0);
  if (*(int *)(unsigned)(ar4 + 0x290) == 1) {
    if (*(int *)(unsigned)(ar4 + 0x2b8) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
      if (cVar21 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar15) & 0xffffffff;
      }
      uVar11 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022d04(ar4 + 0x2d4,ar4 + 0x2d4,ar6_00,pcVar10));
      *(undefined4 *)(unsigned)(ar4 + 800) = 0;
    }
    else {
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2b8));
      if ((double *)(unsigned)pcVar10 == (double *)(unsigned)0x1) {
        uVar2 = 0x278;
        iVar6 = (vsp = ((unsigned long)(fr0_ - 464)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0x278,ar6_00,1));
        if (iVar6 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
          (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022d04(ar4 + 0x2d4,uVar2,ar6_00,pcVar10));
          (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c022d04(ar4 + 0x2a8,((void *)0x8c022d04),ar6_00,pcVar10));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
          if (cVar21 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar12;
          }
          uVar11 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        }
      }
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x2b8) == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
  }
switchD_8c04c5a8_caseD_2:
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), object_dtor_delete(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,pcVar10));
  return uVar11;
}

__asm__(".globl _FUN_8c04c314\n.set _FUN_8c04c314, _FUN_8c04c314_def\n");
