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
undefined4 Class_12acc8_m1_09f470_def(int *ar4,int *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12acc8_m1_09f470";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 332; for (int i_ = 0; i_ < 332; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  code *pcVar9;
  int *a5;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 ar6_00;
  undefined4 *ar6_01;
  undefined4 in_fr1 = 0;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double in_dr14 = 0;
  double in_xd0 = 0;
  char cVar17;
  char cVar18;
  undefined2 uVar19;
  
  uVar19 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x148)) >> 0x10);
  cVar18 = '\0';
  cVar17 = '\0';
  piVar7 = ar5;
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 332)), Vec3_ctor_zero(&(*(int *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 332)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x34)),piVar7,pcVar11,ar7));
  puVar8 = ((undefined1 *)(fr0_ - 0x54));
  puVar5 = ((undefined1 *)(unsigned)0x8c13aea4);
  iVar4 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar8[1] = *puVar6;
    puVar8 = puVar8 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (cVar18 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),0xbf800000);
    (*(undefined4 *)(fr0_ - 0xb8)) = 0;
  }
  else {
    ((undefined4 *)(fr0_ - 0xb0))[0] = 0;
    (*(undefined4 *)(fr0_ - 0xb8)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0xb4)) = 0;
  (*(undefined1 *)(unsigned)0x8c13ae98) = ar4[0x20a];
  (*(undefined1 *)(unsigned)0x8c13ae9c) = ar4[0x20b];
  (*(undefined1 *)(unsigned)0x8c13aea0) = ar4[0x20c];
  uVar1 = (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c1011b0(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),0xa0,pcVar11,ar7));
  uVar3 = CONCAT22(uVar19,(ushort)uVar1);
  if (0x78 < (ushort)uVar1) {
    ar4[0x27] = 0;
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,2,pcVar11,ar7));
  if (iVar4 == 1) {
    uVar10 = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,2,0,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 332)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 332)) - 8); FUN_8c02f670(uVar1,((void *)0x8c02f670),uVar10,ar7); });
    (vsp = ((unsigned long)(fr0_ - 332)), Vec3_assign(&(*(int *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x80)),uVar10,ar7));
    (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar10,ar7));
    if (cVar18 == '\0') {
      ar4[0x1c] = (*(int *)(fr0_ - 0x24));
      ar4[0x1d] = (*(int *)(fr0_ - 0x20));
      dVar16 = CONCAT44D((*(int *)(fr0_ - 0x1c)),in_fr1);
      ar4[0x1e] = (*(int *)(fr0_ - 0x1c));
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x1c) = CONCAT44((*(int *)(fr0_ - 0x20)),(*(int *)(fr0_ - 0x24)));
      *(ulonglong *)(unsigned)(ar4 + 0x1d) = CONCAT44((*(int *)(fr0_ - 0x1c)),(*(int *)(fr0_ - 0x20)));
      dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(int *)(fr0_ - 0x1c)));
      *(double *)(unsigned)(ar4 + 0x1e) = dVar16;
    }
    pcVar11 = (code *)(ar4 + 0x1d);
  }
  else if (cVar18 == '\0') {
    ar4[0x1e] = -0x383cb000;
    ar4[0x1d] = -0x383cb000;
    dVar16 = CONCAT44D(0xc7c35000,in_fr1);
    ar4[0x1c] = -0x383cb000;
  }
  else {
    ar4[0x1e] = -0x383cb000;
    ar4[0x1f] = 0x11c;
    ar4[0x1d] = -0x383cb000;
    ar4[0x1e] = 0x11c;
    dVar16 = 6.04302648840037e-312;
    ar4[0x1c] = -0x383cb000;
    ar4[0x1d] = 0x11c;
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,3,pcVar11,ar7));
  if (0 < iVar4) {
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 332)); FUN_8c02cbd4(*(int *)(unsigned)(ar6 + 4) + 0xa8,999,pcVar11,ar7); });
  }
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c0a0040(ar4,ar5,ar6,ar7));
  iVar4 = (int)*(char *)(unsigned)((int)ar4 + 0x82);
  dVar14 = dVar16;
  if ((*(char *)(unsigned)((int)ar4 + 0x82) == '\x01') && (ar4[1] != 1)) {
    (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,1,pcVar11,ar7));
    if (cVar18 == '\0') {
      dVar14 = CONCAT44D(0x41200000,(int)(D2U(dVar16) >> 0x20));
    }
    else {
      dVar14 = 3.48547133842862e-312;
      in_xd0 = dVar16;
    }
    if (cVar17 == '\0' && F32HI(dVar14) < SUB84(dVar14,0)) {
      if ((char)ar4[0x29] == '\0') {
        *(undefined1 *)(unsigned)(ar4 + 0x29) = 1;
        ar4[1] = 0xc;
        ar4[0x10] = 4;
        ar4[2] = 0x55;
        ar4[3] = 0;
        iVar4 = 0x505;
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c02f298(ar4,0x505,pcVar11,ar7));
      }
      else {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 332)), rand((int)(char)ar4[0x29],iVar4,pcVar11,ar7));
        iVar4 = 3000;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 332)), libgcc_divide_helper_01031c(uVar1,3000,pcVar11,ar7));
        if (iVar2 == 1) {
          ar4[1] = 0xc;
          ar4[0x10] = 4;
          ar4[2] = 0x55;
          ar4[3] = 0;
          iVar4 = 0x505;
          (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c02f298(ar4,0x505,pcVar11,ar7));
        }
      }
      *(undefined1 *)(unsigned)((int)ar4 + 0x82) = 0;
      goto LAB_8c09f768;
    }
  }
  *(undefined1 *)(unsigned)(ar4 + 0x29) = 0;
LAB_8c09f768:
  iVar2 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)ar6 + 8) + 0xb8))))(*(int *)(unsigned)ar6,iVar4,pcVar11,ar7));
  if ((iVar2 == 1) && (ar4[1] != 1)) {
    ar4[1] = 0xb;
    ar4[2] = 99;
    if (ar4[0x1b] != 0) {
      (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],iVar4,pcVar11,ar7));
      ar4[0x1b] = 0;
    }
    pcVar11 = ((void *)0x8c02f46c);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_6c_02f46c(*(int *)(unsigned)ar6,iVar4,((void *)0x8c02f46c),ar7));
    if ((iVar2 == 0) && (iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_70_05f490(*(int *)(unsigned)ar6,iVar4,pcVar11,ar7)), iVar4 == 0)) {
      (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c0f4d84(*(int *)(unsigned)ar6,((void *)0x8c0f4d84),pcVar11,ar7));
    }
  }
  pcVar9 = ar6;
  (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c02f20c(ar4,ar6,pcVar11,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_4_05eed8(ar4,pcVar9,pcVar11,ar7));
  piVar7 = ar4;
  a5 = ar5;
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09ff1c(ar4,ar5,ar6,uVar1));
  if (ar4[1] != 1) {
    piVar7 = ar5;
    (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,a5,pcVar11,uVar1));
    if (cVar18 == '\0') {
      dVar16 = CONCAT44D(0x41200000,(int)(D2U(dVar14) >> 0x20));
    }
    else {
      dVar16 = 2.74277281159077e-312;
      in_xd0 = dVar14;
    }
    dVar14 = dVar16;
    if ((cVar17 == '\0' && F32HI(dVar14) < SUB84(dVar14,0)) &&
       (((*(char *)(unsigned)((int)ar4 + 0x81) == '\x01' || (*(char *)(unsigned)((int)ar4 + 0x83) == '\x02')) ||
        (*(char *)(unsigned)((int)ar4 + 0x83) == '\x03')))) {
      pcVar11 = (code *)0x2;
      a5 = (int *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fef8(*(int *)(unsigned)(ar6 + 0xc),0,2,uVar1));
      iVar4 = ar4[0x27];
      if ((iVar4 < 7) && (-1 < iVar4)) {
                    
        switch(iVar4) {
        default:
          ar4[0x20a] = 8;
          ar4[0x10] = 8;
          (*(undefined1 *)(unsigned)0x8c13ae98) = 8;
          ar4[1] = 0xd;
          ar4[2] = 0x5f;
          ar4[3] = 0;
          break;
        case 4:
        case 5:
          iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,2,pcVar11,uVar1));
          uVar3 = SUB84(dVar14,0);
          if (iVar4 == 1) {
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_assign(&(*(float *)(fr0_ - 0x34)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar11,uVar1));
            ar6_00 = 0;
            uVar10 = 2;
            uVar3 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,2,0,uVar1));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 332)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 332)) - 8); FUN_8c02f670(uVar3,uVar10,ar6_00,uVar1); });
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_assign(&(*(int *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x90)),ar6_00,uVar1));
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,uVar1));
            ar6_01 = &(*(undefined4 *)(fr0_ - 0xc0));
            puVar5 = ((undefined1 *)(fr0_ - 0x60));
            (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c256294(0,puVar5,ar6_01,uVar1));
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x70)),puVar5,ar6_01,uVar1));
            pcVar11 = (code *)&(*(undefined4 *)(fr0_ - 0xb8));
            (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c101210(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),&(*(undefined4 *)(fr0_ - 0xb4)),pcVar11,uVar1));
            if (cVar18 == '\0') {
              dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0xc0)),(*(undefined4 *)(fr0_ - 0xb4)));
            }
            else {
              in_xd0 = CONCAT44D(((undefined4 *)(fr0_ - 0xb0))[0],(*(undefined4 *)(fr0_ - 0xb4)));
              dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0xbc)),(*(undefined4 *)(fr0_ - 0xc0)));
            }
            if (cVar17 == '\0') {
              (*(float *)(fr0_ - 0x34)) = F32LO(dVar16) - F32HI(dVar16);
            }
            else {
              (*(float *)(fr0_ - 0x34)) = SUB84(dVar16 - dVar16,0);
            }
            if (cVar18 == '\0') {
              dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0xbc)),(*(undefined4 *)(fr0_ - 0xb8)));
            }
            else {
              (*(float *)(fr0_ - 0x34)) = SUB84(in_xd0,0);
              in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0xb4)),(*(undefined4 *)(fr0_ - 0xb8)));
              dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0xb8)),(*(undefined4 *)(fr0_ - 0xbc)));
            }
            if (cVar17 == '\0') {
              fVar13 = F32LO(dVar16) - F32HI(dVar16);
            }
            else {
              fVar13 = SUB84(dVar16 - dVar16,0);
            }
            fVar12 = (*(float *)(fr0_ - 0x34));
            (*(float *)(fr0_ - 0x30)) = fVar13;
            if (cVar18 != '\0') {
              (*(float *)(fr0_ - 0x30)) = SUB84(in_xd0,0);
              (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
              in_xd0 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
              fVar12 = fVar13;
            }
            if (cVar17 == '\0' && fVar12 < 0.0) {
              if (cVar18 == '\0') {
                dVar16 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x34)));
              }
              else {
                in_xd0 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
                dVar16 = 52776583233536.0;
              }
              if (cVar17 == '\0') {
                fVar12 = F32LO(dVar16) * F32HI(dVar16);
              }
              else {
                fVar12 = SUB84(dVar16 * dVar16,0);
              }
              (*(float *)(fr0_ - 0x34)) = fVar12;
              if (cVar18 != '\0') {
                (*(float *)(fr0_ - 0x34)) = SUB84(in_xd0,0);
                (*(float *)(fr0_ - 0x30)) = F32HI(in_xd0);
              }
            }
            fVar13 = (*(float *)(fr0_ - 0x30));
            if (cVar18 != '\0') {
              in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
              fVar13 = fVar12;
            }
            if (cVar17 == '\0' && fVar13 < 0.0) {
              if (cVar18 == '\0') {
                dVar16 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x30)));
              }
              else {
                in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
                dVar16 = 52776583233536.0;
              }
              if (cVar17 == '\0') {
                (*(float *)(fr0_ - 0x30)) = F32LO(dVar16) * F32HI(dVar16);
              }
              else {
                (*(float *)(fr0_ - 0x30)) = SUB84(dVar16 * dVar16,0);
              }
              if (cVar18 != '\0') {
                (*(float *)(fr0_ - 0x30)) = SUB84(in_xd0,0);
                (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
              }
            }
            if (cVar18 == '\0') {
              dVar16 = CONCAT44D(0x42c80000,(*(float *)(fr0_ - 0x34)));
            }
            else {
              in_xd0 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
              dVar16 = -1.1352410522239538e-250;
            }
            if (cVar17 == '\0' && SUB84(dVar16,0) < F32HI(dVar16)) {
              if (cVar18 == '\0') {
                dVar16 = CONCAT44D(0x42c80000,(*(float *)(fr0_ - 0x30)));
              }
              else {
                in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
                dVar16 = -1.1352410522239538e-250;
              }
              if (cVar17 == '\0' && SUB84(dVar16,0) < F32HI(dVar16)) {
                if (cVar18 == '\0') {
                  in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(*(float *)(fr0_ - 0x34)));
                  dVar16 = CONCAT44D((*(float *)(fr0_ - 0x30)),SUB84(dVar16,0));
                }
                else {
                  dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
                }
                if (cVar17 == '\0') {
                  in_dr14 = (double)(ulonglong)
                                    (uint)(F32LO(in_dr14) + F32HI(dVar16));
                }
                else {
                  in_dr14 = in_dr14 + dVar16;
                }
              }
            }
            uVar3 = SUB84(dVar16,0);
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,pcVar11,uVar1));
          }
          if (cVar18 == '\0') {
            dVar14 = CONCAT44D(0xbf800000,uVar3);
          }
          else {
            dVar14 = 52776583233536.0;
          }
          if (SUB84(in_dr14,0) == F32HI(dVar14)) {
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xa0)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar11,uVar1));
            uVar3 = SUB84(dVar14,0);
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0xa0)),pcVar11,uVar1));
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,pcVar11,uVar1));
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_ctor_copy(((undefined4 *)(fr0_ - 0xb0)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar11,uVar1));
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_assign_wrap_05f640(ar4,((undefined4 *)(fr0_ - 0xb0)),pcVar11,uVar1));
            a5 = (int *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(((undefined4 *)(fr0_ - 0xb0)),0xffffffff,pcVar11,uVar1));
            piVar7 = ar4 + 0xc;
            if (cVar18 == '\0') {
              *piVar7 = 0x44960000;
              dVar14 = CONCAT44D(0x44af0000,uVar3);
              ar4[0x1e] = 0x44af0000;
            }
            else {
              piVar7[0] = 0x44960000;
              piVar7[1] = 0x44af0000;
              dVar14 = 3.1118736849719273e-159;
              ar4[0x1e] = 0x44af0000;
              ar4[0x1f] = 0x1f05e005;
            }
            ar4[1] = 8;
            ar4[0x10] = 3;
            ar4[2] = 0x55;
            ar4[3] = 0;
          }
          else {
            ar4[1] = 0xb;
            ar4[0x10] = 3;
            ar4[2] = 0x55;
            ar4[3] = 0;
            (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c0a0278(ar4,ar5,pcVar11,uVar1));
            a5 = (int *)(unsigned)0x4a6;
            (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c02f298(ar4,0x4a6,pcVar11,uVar1));
          }
          break;
        case 6:
          ar4[0x20a] = 5;
          ar4[0x10] = 5;
          (*(undefined1 *)(unsigned)0x8c13ae98) = 5;
          ar4[1] = 0xd;
          ar4[2] = 0x5f;
          a5 = (int *)(unsigned)0x0;
          ar4[3] = 0;
        }
      }
      piVar7 = (int *)(unsigned)0x0;
      *(undefined1 *)(unsigned)((int)ar4 + 0x81) = 0;
    }
  }
  if ((ar4[1] == 0) && (ar4[1] != 1)) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 332)), rand(piVar7,a5,pcVar11,uVar1));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), libgcc_divide_helper_01031c(uVar3,300,pcVar11,uVar1));
    if (iVar4 < 1) {
      ar4[0x20a] = 9;
      ar4[0x10] = 9;
      (*(undefined1 *)(unsigned)0x8c13ae98) = 9;
      ar4[1] = 0xd;
      ar4[2] = 0x4b;
      ar4[3] = 0;
      uVar3 = 2;
      (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fed4(*(int *)(unsigned)(ar6 + 0xc),0,2,uVar1));
      if (cVar18 == '\0') {
        uVar15 = CONCAT44(0x47c35000,(int)(D2U(dVar14) >> 0x20));
        dVar14 = in_xd0;
      }
      else {
        uVar15 = 0x8c0a027847c35000;
      }
      if ((float)uVar15 == F32HI(uVar15)) {
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c0a0278(ar4,ar5,uVar3,uVar1));
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fef8(*(int *)(unsigned)(ar6 + 0xc),0,0,uVar1));
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fef8(*(int *)(unsigned)(ar6 + 0xc),0,1,uVar1));
        pcVar11 = (code *)0x2;
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fef8(*(int *)(unsigned)(ar6 + 0xc),0,2,uVar1));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fed4(*(int *)(unsigned)(ar6 + 0xc),0,0,uVar1));
        (*(float *)(fr0_ - 0xfc)) = (float)uVar15;
        fVar13 = F32HI(uVar15);
        if (cVar18 == '\0') {
          ar4[10] = (int)fVar13;
          (*(float *)(fr0_ - 0xfc)) = fVar13;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 10) = uVar15;
        }
        uVar10 = 1;
        uVar3 = 0;
        iVar4 = *(int *)(unsigned)(ar6 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fed4(iVar4,0,1,uVar1));
        fVar13 = F32HI(uVar15);
        (*(float *)(fr0_ - 0x100)) = fVar13;
        if (cVar18 != '\0') {
          (*(float *)(fr0_ - 0x100)) = (float)uVar15;
          (*(float *)(fr0_ - 0xfc)) = fVar13;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 332)), rand(iVar4,uVar3,uVar10,uVar1));
        fVar13 = (float)uVar15;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), libgcc_divide_helper_01031c(uVar3,400,uVar10,uVar1));
        if (cVar18 != '\0') {
          dVar14 = CONCAT44D((*(float *)(fr0_ - 0xfc)),(*(float *)(fr0_ - 0x100)));
          (*(float *)(fr0_ - 0x100)) = fVar13;
        }
        if (cVar17 == '\0') {
          (*(float *)(fr0_ - 0x100)) = (*(float *)(fr0_ - 0x100)) + (float)iVar4;
        }
        else {
          (*(float *)(fr0_ - 0x100)) = SUB84((double)iVar4 + (double)iVar4,0);
        }
        if (cVar18 == '\0') {
          dVar16 = CONCAT44D(0x43480000,(*(float *)(fr0_ - 0x100)));
        }
        else {
          dVar16 = 3.23101057606842e-312;
        }
        if (cVar17 == '\0') {
          fVar13 = F32HI(dVar16);
          dVar16 = CONCAT44D(fVar13,F32LO(dVar16) - fVar13);
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar18 == '\0') {
          ar4[0xb] = SUB84(dVar16,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0xb) = dVar14;
        }
        pcVar11 = (code *)0x2;
        uVar10 = 0;
        iVar4 = *(int *)(unsigned)(ar6 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fed4(iVar4,0,2,uVar1));
        (*(undefined8 *)(fr0_ - 0x108)) = dVar16;
        if (cVar18 == '\0') {
          (*(undefined8 *)(fr0_ - 0x108)) = CONCAT44D(uVar3,(int)(D2U(dVar16) >> 0x20));
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 332)), rand(iVar4,uVar10,pcVar11,uVar1));
        fVar13 = F32LO(dVar16);
        iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), libgcc_divide_helper_01031c(uVar3,400,pcVar11,uVar1));
        dVar16 = (*(undefined8 *)(fr0_ - 0x108));
        if (cVar18 == '\0') {
          dVar16 = dVar14;
          fVar13 = (float)(*(undefined8 *)(fr0_ - 0x108));
        }
        if (cVar17 == '\0') {
          fVar13 = fVar13 + (float)iVar4;
        }
        else {
          fVar13 = SUB84((double)iVar4 + (double)iVar4,0);
        }
        if (cVar18 == '\0') {
          dVar14 = CONCAT44D(0x43480000,fVar13);
        }
        else {
          dVar14 = 3.23101057606842e-312;
        }
        if (cVar17 == '\0') {
          fVar13 = F32LO(dVar14) - F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (cVar18 == '\0') {
          ar4[0xc] = (int)fVar13;
        }
        else {
          *(double *)(unsigned)(ar4 + 0xc) = dVar16;
        }
      }
    }
  }
  if ((char)ar4[0x26] == '\0') {
    iVar4 = *(int *)(unsigned)(*(int *)(unsigned)ar6 + 8);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18c))))(*(int *)(unsigned)ar6,iVar4,pcVar11,uVar1));
    if (iVar4 == 1) {
      ar4[0x10] = 0xb;
      (*(undefined1 *)(unsigned)0x8c13ae98) = 0xb;
      ar4[1] = 0xd;
      ar4[2] = 0x5f;
      ar4[3] = 0;
    }
    else {
      *(undefined1 *)(unsigned)(ar4 + 0x26) = 1;
    }
  }
  else if ((char)ar4[0x26] == '\x01') {
    ar4[0x10] = 0xc;
    (*(undefined1 *)(unsigned)0x8c13ae98) = 0xc;
    ar4[1] = 0xd;
    ar4[2] = 0x5f;
    ar4[3] = 0;
  }
  pcVar9 = ar6;
  (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c0a0224(ar4,ar6,pcVar11,uVar1));
  (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c05ee90(*(int *)(unsigned)(ar6 + 8),pcVar9,pcVar11,uVar1));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar9,pcVar11,uVar1));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_40_05eea0(ar4,pcVar9,pcVar11,uVar1));
  if (iVar4 != iVar2) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_40_05eea0(ar4,pcVar9,pcVar11,uVar1));
    pcVar11 = (code *)0x1;
    (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c031b08(*(int *)(unsigned)(ar6 + 8),uVar3,1,uVar1));
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x83) = 4;
  *(undefined1 *)(unsigned)((int)ar4 + 0x81) = 0;
  (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(&(*(float *)(fr0_ - 0x34)),0xffffffff,pcVar11,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(&(*(int *)(fr0_ - 0x24)),0xffffffff,pcVar11,&(*(int *)(fr0_ - 0x24))));
  return uVar1;
}

__asm__(".globl _Class_12acc8_m1_09f470\n.set _Class_12acc8_m1_09f470, _Class_12acc8_m1_09f470_def\n");
