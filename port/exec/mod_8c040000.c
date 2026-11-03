//@unit 8c046674
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
undefined4 ret_const_0_046674_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_046674";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_046674\n.set _ret_const_0_046674, _ret_const_0_046674_def\n");
//@unit 8c04667c
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
undefined4 ret_const_0_04667c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_04667c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_04667c\n.set _ret_const_0_04667c, _ret_const_0_04667c_def\n");
//@unit 8c046684
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
undefined4 FUN_8c046684_def(int ar4,undefined **ar5,undefined4 ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c046684";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 684; for (int i_ = 0; i_ < 684; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined **ppuVar8;
  int *a4;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 unaff_r8 = 0;
  undefined4 *ar5_00;
  undefined4 unaff_r9 = 0;
  code *pcVar12;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 uVar13;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined8 *puVar14;
  float fVar15;
  double dVar16;
  ulonglong uVar17;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  bool bVar18;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar14 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x8)) + 4);
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
  }
  else {
    puVar14 = &(*(undefined8 *)(fr0_ - 0x8));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar14 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)puVar14 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)puVar14 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)((int)puVar14 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)((int)puVar14 + -0x14) = unaff_r10;
  *(undefined4 *)(unsigned)((int)puVar14 + -0x18) = unaff_r9;
  *(undefined4 *)(unsigned)((int)puVar14 + -0x1c) = unaff_r8;
  *(undefined4 *)(unsigned)((int)puVar14 + -0x20) = in_PR;
  *(undefined4 *)(unsigned)((int)puVar14 + -0x28c) = ar6;
  ar5_00 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + 4));
  pcVar12 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + 8));
  uVar13 = 1;
  *(undefined4 *)(unsigned)((int)puVar14 + -0xf0) = 1;
  puVar10 = ar5_00 + 2;
  if (in_FPSCR_SZ == '\0') {
    dVar16 = CONCAT44D(0x43c80000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    dVar16 = 7.673846727083534e+21;
  }
  iVar4 = ar4 + 0x48;
  if (in_FPSCR_PR == '\0') {
    fVar15 = F32LO(dVar16) + F32HI(dVar16);
  }
  else {
    fVar15 = SUB84(dVar16 + dVar16,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fVar15 = (float)*(undefined8 *)(unsigned)(ar4 + 0x48);
  }
  pcVar2 = ar7;
  (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c10277c((undefined1 *)(unsigned)((int)puVar14 + -0x2c),iVar4,puVar10,ar7));
  (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c10277c((undefined1 *)(unsigned)((int)puVar14 + -0x38),iVar4,puVar10,pcVar2));
  (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c102748((undefined1 *)(unsigned)((int)puVar14 + -0x44),iVar4,puVar10,pcVar2));
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)puVar14 + -0xf4) = 0;
  }
  else {
    *(ulonglong *)(unsigned)((int)puVar14 + -0xf4) = (ulonglong)(uint)fVar15;
  }
  uVar17 = (ulonglong)(uint)fVar15;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)puVar14 + -0xf8) = 0;
  }
  else {
    *(ulonglong *)(unsigned)((int)puVar14 + -0xf8) = uVar17;
  }
  iVar4 = ar4 + 0x14;
  pcVar7 = ((void *)0x8c023a14);
  (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_assign(ar4 + 0x80,iVar4,((void *)0x8c023a14),pcVar2));
  if (*(int *)(unsigned)(ar4 + 0x31c) < 1) {
    if (*(int *)(unsigned)(ar4 + 0x324) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2ec) = 0;
LAB_8c046822:
      do {
        iVar3 = *(int *)(unsigned)(ar4 + 0x134);
        if ((0x17 < iVar3) || (iVar3 < 0)) goto override_jmp_8c046852_case_6;
                    
        switch(iVar3) {
        case 0:
          pcVar7 = (code *)0x128;
          if ((*(int *)(unsigned)(ar4 + 0x128) < 3) || (*(int *)(unsigned)((int)puVar14 + 0x38) != 1)) {
            if (ar7 == (code *)0x1) {
              uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c057164(ar4,ar5,0x128,pcVar2));
              *(undefined4 *)(unsigned)((int)puVar14 + -0x11c) = uVar1;
              *(undefined4 *)(unsigned)((int)puVar14 + -0x290) = *(undefined4 *)(unsigned)((int)puVar14 + -0x11c);
              if (*(int *)(unsigned)((int)puVar14 + -0x290) == 0) {
                *(int *)(unsigned)((int)puVar14 + -0x230) = ar4;
                *(undefined4 *)(unsigned)((int)puVar14 + -0x298) = *(undefined4 *)(unsigned)((int)puVar14 + -0x230);
                pcVar2 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -0x230));
                *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x298) + 0x134) = *(int *)(unsigned)(pcVar2 + 0x134) + 1;
              }
            }
            else {
              uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c05c28c(ar4,iVar4,0x128,pcVar2));
              *(undefined4 *)(unsigned)((int)puVar14 + -0x118) = uVar1;
              pcVar2 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -0x118));
              if (pcVar2 == (code *)0x0) {
                *(int *)(unsigned)((int)puVar14 + -0x22c) = ar4;
                pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -0x22c));
                *(unsigned *)(unsigned)((int)pcVar7 + 0x134) =
                     (undefined *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x22c) + 0x134) + 1);
              }
            }
            goto override_jmp_8c046852_case_6;
          }
          pcVar7 = (code *)0x134;
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0x17;
          goto LAB_8c046822;
        case 1:
          *(int *)(unsigned)((int)puVar14 + -0x234) = ar4;
          *(undefined4 *)(unsigned)((int)puVar14 + -0x294) = *(undefined4 *)(unsigned)((int)puVar14 + -0x234);
          pcVar2 = (code *)0x2f8;
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x234) + 0x2f8);
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x294) + 0x2f8) = iVar4 + -1;
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), get_field_24_026024(pcVar12,iVar4,((void *)0x8c026024),0x2f8));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x120) = uVar1;
          if (*(int *)(unsigned)((int)puVar14 + -0x120) == 2) {
            iVar4 = 0;
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,100,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x124) = uVar1;
            iVar3 = *(int *)(unsigned)((int)puVar14 + -0x124);
            if (iVar3 < 0x28) {
              iVar3 = 1;
            }
            else if (iVar3 < 0x5a) {
              iVar3 = 0;
            }
            else if (iVar3 < 0x5f) {
              iVar3 = 3;
            }
            else {
              iVar3 = 6;
            }
          }
          else {
            if (ar7 == (code *)0x1) {
              if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
                iVar4 = 0;
                uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,100,pcVar2));
                *(undefined4 *)(unsigned)((int)puVar14 + -300) = uVar1;
                pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -300));
                pcVar2 = pcVar7;
                if ((int)pcVar7 < 0x37) {
                  iVar3 = 0;
                }
                else if ((int)pcVar7 < 0x55) {
                  iVar3 = 1;
                }
                else {
                  pcVar2 = (code *)0x5f;
                  if ((int)pcVar7 < 0x5f) {
                    iVar3 = 3;
                  }
                  else {
                    iVar3 = 2;
                  }
                }
              }
              else {
                iVar4 = 0;
                uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,100,pcVar2));
                *(undefined4 *)(unsigned)((int)puVar14 + -0x130) = uVar1;
                iVar3 = *(int *)(unsigned)((int)puVar14 + -0x130);
                if (iVar3 < 0x32) {
                  iVar3 = 0;
                }
                else if (iVar3 < 0x46) {
                  iVar3 = 1;
                }
                else if (iVar3 < 0x50) {
                  iVar3 = 2;
                }
                else if (iVar3 < 0x61) {
                  iVar3 = 3;
                }
                else {
                  iVar3 = 4;
                }
                if (*(int *)(unsigned)(ar4 + 0x324) != 0) {
                  iVar3 = 0;
                }
              }
            }
            else {
              iVar4 = 0;
              uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,0x14,pcVar2));
              *(undefined4 *)(unsigned)((int)puVar14 + -0x128) = uVar1;
              if (*(int *)(unsigned)((int)puVar14 + -0x128) < 0xb) {
                iVar3 = 0;
              }
              else if (*(int *)(unsigned)((int)puVar14 + -0x128) < 0x13) {
                iVar4 = 1;
                iVar3 = 1;
              }
              else {
                iVar3 = 2;
              }
            }
            if ((iVar3 == 2) && (0 < *(int *)(unsigned)(ar4 + 0x2f8))) {
              iVar3 = 0;
            }
          }
          if (*(int *)(unsigned)(ar4 + 0x31c) == -1) {
            iVar3 = 6;
          }
          break;
        case 2:
          if (ar7 == (code *)0x1) {
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,100,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x148) = uVar1;
            if (*(int *)(unsigned)((int)puVar14 + -0x148) < 0x1e) {
              uVar11 = 0x28;
              uVar6 = 0;
              uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,0x28,pcVar2));
              *(undefined4 *)(unsigned)((int)puVar14 + -0x14c) = uVar1;
              iVar4 = *(int *)(unsigned)((int)puVar14 + -0x14c);
              if (iVar4 < 0x1e) {
                if (iVar4 < 0xf) {
                  if (8 < iVar4) {
                    iVar4 = 2;
                  }
                }
                else {
                  iVar4 = 1;
                }
              }
              else {
                iVar4 = 0;
              }
              if (iVar4 == 6) {
                uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), get_field_24_026024(pcVar12,uVar6,uVar11,pcVar2));
                *(undefined4 *)(unsigned)((int)puVar14 + -0x150) = uVar1;
                if (*(int *)(unsigned)((int)puVar14 + -0x150) == 0) {
                  a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244));
                  (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x178))))(a4,uVar1,a4,pcVar2));
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(unsigned)((int)puVar14 + -0x154) = (int)(uVar17 >> 0x20);
                    uVar17 = CONCAT44(0x41700000,*(undefined4 *)(unsigned)((int)puVar14 + -0x154));
                  }
                  else {
                    *(ulonglong *)(unsigned)((int)puVar14 + -0x154) = uVar17;
                    in_xd0 = *(undefined8 *)(unsigned)((int)puVar14 + -0x154);
                    uVar17 = 0x6d53e50041700000;
                  }
                  if (in_FPSCR_PR == '\0' && (float)uVar17 < (float)(uVar17 >> 0x20)) {
                    iVar4 = 6;
                    goto LAB_8c046f7a;
                  }
                }
                iVar4 = 0;
              }
              else if (iVar4 == 3) {
                iVar4 = 0;
              }
LAB_8c046f7a:
              fVar15 = (float)uVar17;
              if (in_FPSCR_SZ == '\0') {
                fVar15 = *(float *)(unsigned)(ar4 + 0x1c);
              }
              else {
                in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1c);
              }
              if (in_FPSCR_PR == '\0' && 0.0 < fVar15) {
                uVar11 = 100;
                uVar6 = 0;
                uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,100,pcVar2));
                *(undefined4 *)(unsigned)((int)puVar14 + -0x158) = uVar1;
                if (*(int *)(unsigned)((int)puVar14 + -0x158) < 5) {
                  uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), get_field_94_02aaa4(*(undefined4 *)(unsigned)((int)puVar14 + 0xc),uVar6,uVar11,
                                              pcVar2));
                  *(undefined4 *)(unsigned)((int)puVar14 + -0x15c) = uVar1;
                  uVar1 = libgcc_divide_helper_0101e4
                                    (*(undefined4 *)(unsigned)((int)puVar14 + -0x15c),5,uVar11,pcVar2);
                  *(undefined4 *)(unsigned)((int)puVar14 + -0x238) = uVar1;
                  *(undefined4 *)(unsigned)((int)puVar14 + -0xfc) = *(undefined4 *)(unsigned)((int)puVar14 + -0x238);
                  if ((*(int *)(unsigned)((int)puVar14 + -0xfc) == 3) || (*(int *)(unsigned)((int)puVar14 + -0xfc) == 8)
                     ) {
                    uVar5 = 4;
                    *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xd;
                  }
                  else {
                    uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,100,pcVar2));
                    *(undefined4 *)(unsigned)((int)puVar14 + -0x160) = uVar1;
                    if (*(int *)(unsigned)((int)puVar14 + -0x160) < 0x32) {
                      uVar5 = 2;
                      *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xb;
                    }
                    else {
                      uVar5 = 3;
                      *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xc;
                    }
                  }
                  pcVar2 = (code *)0x0;
                  pcVar7 = (code *)0xffffffff;
                  (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,uVar5,0xffffffff,0));
                  goto LAB_8c04718e;
                }
              }
              pcVar7 = (code *)0xffffffff;
              (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4 + 0x1a,0xffffffff,0));
              *(int *)(unsigned)((int)puVar14 + -0x23c) = *(int *)(unsigned)(ar4 + 0x128) + -3;
              *(int *)(unsigned)((int)puVar14 + -0x240) = iVar4;
              *(undefined4 *)(unsigned)((int)puVar14 + -0x290) = 0x218;
              *(undefined4 *)(unsigned)((int)puVar14 + -0x298) = *(undefined4 *)(unsigned)((int)puVar14 + -0x23c);
              *(int *)(unsigned)((int)puVar14 + -0x294) =
                   (*(int *)(unsigned)((int)puVar14 + -0x298) * 4 + *(int *)(unsigned)((int)puVar14 + -0x23c)) * 8;
              *(unsigned *)(unsigned)((int)puVar14 + -0x294) =
                   ((undefined1 *)(unsigned)0x8c13639c) + *(int *)(unsigned)((int)puVar14 + -0x294);
              pcVar2 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x240) * 4 +
                                 *(int *)(unsigned)((int)puVar14 + -0x294)));
              *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x290) + ar4) = pcVar2;
              uVar5 = 0x218;
              if (*(int *)(unsigned)(ar4 + 0x218) == 1) {
                uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0xe,0x14,pcVar2));
                *(undefined4 *)(unsigned)((int)puVar14 + -0x164) = uVar1;
                pcVar2 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244));
                uVar5 = *(uint *)(unsigned)((int)puVar14 + -0x164);
                pcVar7 = (code *)ar5;
                (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c033474(ar4,uVar5,ar5,pcVar2));
              }
            }
            else {
              *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
              uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,3,pcVar2));
              fVar15 = (float)uVar17;
              *(undefined4 *)(unsigned)((int)puVar14 + -0x168) = uVar1;
              pcVar2 = (code *)0x0;
              pcVar7 = (code *)0xffffffff;
              uVar5 = *(int *)(unsigned)((int)puVar14 + -0x168) + 0x60;
              (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,uVar5,0xffffffff,0));
            }
LAB_8c04718e:
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(unsigned)((int)puVar14 + -0x244) = 0;
              *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)((int)puVar14 + -0x244);
              uVar17 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar14 + -0x244),fVar15);
              *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)((int)puVar14 + -0x244);
            }
            else {
              *(ulonglong *)(unsigned)((int)puVar14 + -0x244) = (ulonglong)(uint)fVar15;
              *(undefined8 *)(unsigned)(ar4 + 0x24) = *(undefined8 *)(unsigned)((int)puVar14 + -0x244);
              uVar17 = *(ulonglong *)(unsigned)((int)puVar14 + -0x244);
              *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar17;
            }
          }
          else if ((ar7 == (code *)0x0) || (ar7 == (code *)0x2)) {
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,100,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x16c) = uVar1;
            uVar5 = (uint)(0x32 < *(int *)(unsigned)((int)puVar14 + -0x16c));
            pcVar2 = (code *)0x0;
            pcVar7 = (code *)0xffffffff;
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,uVar5,0xffffffff,0));
          }
          else {
            pcVar2 = (code *)0x0;
            pcVar7 = (code *)0xffffffff;
            uVar5 = 0;
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          }
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,pcVar7,pcVar2));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), get_field_1c_026dd8(ar4 + 0xb0,uVar5,pcVar7,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x170) = uVar1;
          iVar4 = *(int *)(unsigned)((int)puVar14 + -0x170);
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c032ab0(ar4,uVar5,pcVar7,pcVar2));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar14 + -0x174) = (int)(uVar17 >> 0x20);
            uVar17 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar14 + -0x174),(int)uVar17);
            *(undefined4 *)(unsigned)(ar4 + 0x340) = *(undefined4 *)(unsigned)((int)puVar14 + -0x174);
          }
          else {
            *(ulonglong *)(unsigned)((int)puVar14 + -0x174) = uVar17;
            uVar17 = *(ulonglong *)(unsigned)((int)puVar14 + -0x174);
            *(ulonglong *)(unsigned)(ar4 + 0x340) = uVar17;
          }
          uVar5 = (uint)uVar17;
          if (iVar4 == 0x21) {
            *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
            pcVar7 = (code *)0x32;
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0x1e,0x32,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x178) = uVar1;
            *(undefined4 *)(unsigned)(ar4 + 0x280) = *(undefined4 *)(unsigned)((int)puVar14 + -0x178);
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 6;
          }
          else if (iVar4 == 0x23) {
            uVar11 = 4;
            uVar6 = 0;
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,4,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x17c) = uVar1;
            if (in_FPSCR_SZ == '\0') {
              uVar17 = (ulonglong)uVar5;
            }
            else {
              uVar17 = 0x8c022d0442700000;
            }
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c022d04(ar4 + 0x54,uVar6,uVar11,pcVar2));
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x280) = 1;
            pcVar2 = (code *)(ar4 + 0xb0);
            pcVar7 = ((void *)0x8c033e68);
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetFrame_033e6e(pcVar2,0x280,((void *)0x8c033e68),pcVar2));
          }
          else if (iVar4 == 0x22) {
            pcVar7 = (code *)0x7d00;
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,9000,32000,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x180) = uVar1;
            *(undefined4 *)(unsigned)(ar4 + 0x280) = *(undefined4 *)(unsigned)((int)puVar14 + -0x180);
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 7;
          }
          else if (((iVar4 == 0x60) || (iVar4 == 0x61)) || (iVar4 == 0x62)) {
            pcVar7 = (code *)0xc;
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,8,0xc,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x184) = uVar1;
            *(undefined4 *)(unsigned)(ar4 + 0x280) = *(undefined4 *)(unsigned)((int)puVar14 + -0x184);
          }
          else if ((iVar4 == 2) || (iVar4 == 4)) {
            pcVar7 = (code *)0x4;
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,2,4,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x188) = uVar1;
            *(undefined4 *)(unsigned)(ar4 + 0x280) = *(undefined4 *)(unsigned)((int)puVar14 + -0x188);
          }
          else {
            pcVar2 = (code *)0x0;
            *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar17 & 0xffffffff;
          }
          *(int *)(unsigned)((int)puVar14 + -0x248) = ar4;
          iVar4 = 0x134;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x248) + 0x134) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x248) + 0x134) + 1;
        case 3:
          if (ar7 != (code *)0x1) {
            *(unsigned *)(unsigned)((int)puVar14 + -0x29c) = (undefined1 *)(unsigned)((int)puVar14 + -100);
            iVar4 = ar4 + 0x14;
            pcVar12 = ((void *)0x8c0230f0);
            ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar14 + -0x29c)); *(unsigned *)(((puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)) - 8); FUN_8c0230f0(iVar4,iVar4,pcVar7,((void *)0x8c0230f0)); });
            puVar9 = (undefined1 *)(unsigned)((int)puVar14 + -0x74);
            *(unsigned *)(unsigned)((int)puVar14 + -0x29c) = puVar9;
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_normalize((undefined1 *)(unsigned)((int)puVar14 + -100),iVar4,puVar9,pcVar12));
            *(unsigned *)(unsigned)((int)puVar14 + -0x29c) = (undefined1 *)(unsigned)((int)puVar14 + -0x84);
            ({ unsigned long t0_ = (unsigned long)(
                       *(undefined4 *)(unsigned)((int)puVar14 + -0x29c)); *(unsigned *)(((puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)) - 8); Vec3_scale((undefined1 *)(unsigned)((int)puVar14 + -0x74),((undefined1 *)(unsigned)0x8c136584),puVar9,pcVar12); });
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar14 + -0x84),ar5,pcVar12));
            pcVar2 = (code *)0xffffffff;
            pcVar7 = (code *)((int)puVar14 + -0x84);
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_dtor(pcVar7,0xffffffff,pcVar7,0xffffffff));
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar14 + -0x74),0xffffffff,pcVar7,pcVar2));
            iVar4 = -1;
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar14 + -100),0xffffffff,pcVar7,pcVar2));
            *(int *)(unsigned)((int)puVar14 + -0x24c) = ar4;
            if (in_FPSCR_SZ == '\0') {
              dVar16 = CONCAT44D(0x3f7fbe77,
                                        *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x24c) + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x24c) + 0x28);
              dVar16 = 52776566456188.93;
            }
            if (in_FPSCR_PR == '\0') {
              fVar15 = F32LO(dVar16) * F32HI(dVar16);
            }
            else {
              fVar15 = SUB84(dVar16 * dVar16,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x24c) + 0x28) = fVar15;
            }
            else {
              *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x24c) + 0x28) = in_xd0;
            }
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c05ae54(ar4,iVar4,pcVar7,pcVar2));
          }
          if (*(int *)(unsigned)(ar4 + 0x128) == 4) {
            if (*(int *)(unsigned)(ar4 + 0x280) < 1) {
              pcVar7 = (code *)(ar4 + 0xb0);
              uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), CAnimBody_AdvanceFrame_wrapper(pcVar7,iVar4,pcVar7,pcVar2));
              *(undefined4 *)(unsigned)((int)puVar14 + -0x1bc) = uVar1;
              if (*(int *)(unsigned)((int)puVar14 + -0x1bc) == 1) {
                uVar13 = 0;
                *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
                pcVar7 = (code *)0x2;
                *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
                *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
              }
              goto override_jmp_8c046852_case_6;
            }
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),pcVar7,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x18c) = uVar1;
            iVar4 = *(int *)(unsigned)((int)puVar14 + -0x18c);
            if (iVar4 < 0x26) {
              pcVar7 = (code *)0x22;
              if (iVar4 < 0x22) {
                if (iVar4 < 5) {
                  if ((1 < iVar4) && ((iVar4 == 2 || (iVar4 == 4)))) {
                    pcVar2 = (code *)0x340;
                    uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,0x25,0x22,0x340));
                    *(undefined4 *)(unsigned)((int)puVar14 + -0x1b8) = uVar1;
                    if (*(int *)(unsigned)((int)puVar14 + -0x1b8) == 7) {
                      *(int *)(unsigned)((int)puVar14 + -0x264) = ar4;
                      *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x264) + 0x280) =
                           *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x264) + 0x280) + -1;
                    }
                    goto override_jmp_8c046852_case_6;
                  }
                }
                else if (iVar4 == 0x21) {
                  uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,0x25,0x22,pcVar2));
                  *(undefined4 *)(unsigned)((int)puVar14 + -0x194) = uVar1;
                  if (*(int *)(unsigned)((int)puVar14 + -0x194) == 7) {
                    *(int *)(unsigned)((int)puVar14 + -0x250) = ar4;
                    pcVar7 = (code *)(*(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x250) + 0x280) + -1);
                    *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x250) + 0x280) = pcVar7;
                    *(undefined4 *)(unsigned)(ar4 + 0x218) = 6;
                  }
                  goto override_jmp_8c046852_case_6;
                }
              }
              else {
                if (iVar4 == 0x22) {
                  uVar1 = s_CAnimBody_AdvanceFrame_033d90
                                    (ar4 + 0xb0,((void *)0x8c033d88),0x22,pcVar2);
                  *(undefined4 *)(unsigned)((int)puVar14 + -0x198) = uVar1;
                  if (*(int *)(unsigned)((int)puVar14 + -0x198) == 7) {
                    *(int *)(unsigned)((int)puVar14 + -0x254) = ar4;
                    *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x254) + 0x280) =
                         *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x254) + 0x280) + -1;
                    *(undefined4 *)(unsigned)(ar4 + 0x218) = 7;
                  }
                  if (*(int *)(unsigned)(ar4 + 0x318) != 0) {
                    (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,pcVar7,pcVar2));
                    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
                  }
                  goto override_jmp_8c046852_case_6;
                }
                if (iVar4 == 0x23) {
                  uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,0x25,0xb0,pcVar2));
                  *(undefined4 *)(unsigned)((int)puVar14 + -400) = uVar1;
                  pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -400));
                  if ((undefined **)(unsigned)pcVar7 == (undefined **)(unsigned)0x7) {
                    pcVar2 = (code *)0x0;
                    uVar1 = 0x1a;
                    (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
                    pcVar7 = ((void *)0x8c033e68);
                    (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,((void *)0x8c033e68),pcVar2))
                    ;
                    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
                  }
                  goto override_jmp_8c046852_case_6;
                }
                if ((iVar4 == 0x24) || (iVar4 == 0x25)) {
                  pcVar7 = (code *)(ar4 + 0x340);
                  uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,0x25,pcVar7,pcVar2));
                  *(undefined4 *)(unsigned)((int)puVar14 + -0x19c) = uVar1;
                  if (*(int *)(unsigned)((int)puVar14 + -0x19c) == 7) {
                    *(int *)(unsigned)((int)puVar14 + -600) = ar4;
                    pcVar7 = (code *)0x280;
                    *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -600) + 0x280) =
                         *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -600) + 0x280) + -1;
                  }
                  goto override_jmp_8c046852_case_6;
                }
              }
            }
            else if (iVar4 < 0x62) {
              if ((0x60 < iVar4) || (iVar4 == 0x60)) {
                pcVar2 = (code *)(vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,0x25,ar4 + 0x340,pcVar2))
                ;
                *(unsigned *)(unsigned)((int)puVar14 + -0x1a0) = pcVar2;
                pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -0x1a0));
                if ((undefined **)(unsigned)pcVar7 == (undefined **)(unsigned)0x7) {
                  uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,0x1e,pcVar2));
                  *(undefined4 *)(unsigned)((int)puVar14 + -0x1a4) = uVar1;
                  if (*(int *)(unsigned)((int)puVar14 + -0x1a4) < 10) {
                    *(undefined4 *)(unsigned)((int)puVar14 + -0x290) = 0;
                    *(unsigned *)(unsigned)((int)puVar14 + -0x298) = ((void *)0x8c032a64);
                    uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar14 + -0x298))))
                                      (ar4,*(undefined4 *)(unsigned)((int)puVar14 + -0x290),3,pcVar2));
                    *(undefined4 *)(unsigned)((int)puVar14 + -0x1a8) = uVar1;
                    *(undefined4 *)(unsigned)((int)puVar14 + -0x294) = 0xb0;
                    s_CAnimBody_SetAnimation_033a94
                              (ar4 + *(int *)(unsigned)((int)puVar14 + -0x294),
                               *(int *)(unsigned)((int)puVar14 + -0x1a8) + 0x60,0xffffffff,0);
                  }
                  *(int *)(unsigned)((int)puVar14 + -0x25c) = ar4;
                  pcVar2 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -0x25c));
                  pcVar7 = (code *)0x280;
                  *(int *)(unsigned)(pcVar2 + 0x280) = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x25c) + 0x280) + -1;
                }
                goto override_jmp_8c046852_case_6;
              }
            }
            else if (iVar4 == 0x62) {
              pcVar7 = (code *)0x340;
              uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar4 + 0x340,0x340,pcVar2));
              *(undefined4 *)(unsigned)((int)puVar14 + -0x1ac) = uVar1;
              if (*(int *)(unsigned)((int)puVar14 + -0x1ac) == 7) {
                uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,0x1e,pcVar2));
                *(undefined4 *)(unsigned)((int)puVar14 + -0x1b0) = uVar1;
                if (*(int *)(unsigned)((int)puVar14 + -0x1b0) < 10) {
                  uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,3,pcVar2));
                  *(undefined4 *)(unsigned)((int)puVar14 + -0x1b4) = uVar1;
                  uVar6 = 0;
                  uVar1 = 0xffffffff;
                  iVar4 = *(int *)(unsigned)((int)puVar14 + -0x1b4) + 0x60;
                  (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0));
                  (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar4,uVar1,uVar6));
                }
                *(int *)(unsigned)((int)puVar14 + -0x260) = ar4;
                pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -0x260));
                *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x260) + 0x280) =
                     ((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)pcVar7 + 0x280)) + -1;
                pcVar2 = (code *)0x280;
              }
              goto override_jmp_8c046852_case_6;
            }
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0x25,pcVar7,pcVar2));
            *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
            goto override_jmp_8c046852_case_6;
          }
          if (*(int *)(unsigned)(ar4 + 0x128) != 3) goto override_jmp_8c046852_case_6;
          if (*(int *)(unsigned)(ar4 + 0x280) < 1) {
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar4,pcVar7,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x1e0) = uVar1;
            if (*(int *)(unsigned)((int)puVar14 + -0x1e0) == 1) {
              uVar13 = 0;
              *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
              pcVar7 = (code *)0x2b8;
              *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
              *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
            }
            goto override_jmp_8c046852_case_6;
          }
          iVar3 = ar4 + 0xb0;
          pcVar12 = ((void *)0x8c026dd8);
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), get_field_1c_026dd8(iVar3,((void *)0x8c026dd8),iVar3,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x1c0) = uVar1;
          iVar4 = *(int *)(unsigned)((int)puVar14 + -0x1c0);
          pcVar2 = (code *)0x60;
          if (iVar4 < 0x61) {
            if (0x5f < iVar4) {
code_r0x8c047be0:
              pcVar7 = ((void *)0x8c033d88);
              uVar1 = s_CAnimBody_AdvanceFrame_033d90
                                (ar4 + 0xb0,ar4 + 0xb0,((void *)0x8c033d88),0x60);
              *(undefined4 *)(unsigned)((int)puVar14 + -0x1c4) = uVar1;
              if (*(int *)(unsigned)((int)puVar14 + -0x1c4) == 7) {
                uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,0x1e,pcVar2));
                *(undefined4 *)(unsigned)((int)puVar14 + -0x1c8) = uVar1;
                if (*(int *)(unsigned)((int)puVar14 + -0x1c8) < 10) {
                  uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,3,pcVar2));
                  *(undefined4 *)(unsigned)((int)puVar14 + -0x1cc) = uVar1;
                  uVar6 = 0;
                  uVar1 = 0xffffffff;
                  s_CAnimBody_SetAnimation_033a94
                            (ar4 + 0xb0,*(int *)(unsigned)((int)puVar14 + -0x1cc) + 0x60,0xffffffff,0);
                  (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),uVar1,uVar6));
                }
                *(int *)(unsigned)((int)puVar14 + -0x268) = ar4;
                pcVar2 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -0x268));
                pcVar7 = (code *)0x280;
                *(int *)(unsigned)(pcVar2 + 0x280) = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x268) + 0x280) + -1;
              }
              goto override_jmp_8c046852_case_6;
            }
            if (((iVar4 < 5) && (1 < iVar4)) && ((iVar4 == 2 || (iVar4 == 4)))) {
              pcVar7 = ((void *)0x8c033d88);
              uVar1 = s_CAnimBody_AdvanceFrame_033d90
                                (ar4 + 0xb0,pcVar12,((void *)0x8c033d88),0x60);
              *(undefined4 *)(unsigned)((int)puVar14 + -0x1dc) = uVar1;
              if (*(int *)(unsigned)((int)puVar14 + -0x1dc) == 7) {
                *(int *)(unsigned)((int)puVar14 + -0x270) = ar4;
                pcVar7 = (code *)0x280;
                *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x270) + 0x280) =
                     *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x270) + 0x280) + -1;
              }
override_jmp_8c046852_case_6:
              *(undefined4 *)(unsigned)((int)puVar14 + -0x10c) = uVar13;
              *(unsigned *)(unsigned)((int)puVar14 + -0x290) = ((void *)0x8c102790);
              (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar14 + -0x290))))
                        ((undefined1 *)(unsigned)((int)puVar14 + -0x44),0xffffffff,pcVar7,pcVar2));
              *(undefined4 *)(unsigned)((int)puVar14 + -0x298) = 0xffffffff;
              pcVar12 = ((void *)0x8c102790);
              free_if_nonnull_wrap_102790
                        ((undefined1 *)(unsigned)((int)puVar14 + -0x38),*(undefined4 *)(unsigned)((int)puVar14 + -0x298)
                         ,pcVar7,((void *)0x8c102790));
              free_if_nonnull_wrap_102790
                        ((undefined1 *)(unsigned)((int)puVar14 + -0x2c),0xffffffff,pcVar7,pcVar12);
              *(undefined4 *)(unsigned)((int)puVar14 + -0x294) = *(undefined4 *)(unsigned)((int)puVar14 + -0x10c);
              return *(undefined4 *)(unsigned)((int)puVar14 + -0x294);
            }
          }
          else if ((iVar4 < 99) && (0x60 < iVar4)) {
            if (iVar4 == 0x61) goto code_r0x8c047be0;
            if (iVar4 == 0x62) {
              pcVar2 = ((void *)0x8c033d88);
              pcVar7 = (code *)s_CAnimBody_AdvanceFrame_033d90
                                         (ar4 + 0xb0,pcVar12,iVar3,((void *)0x8c033d88));
              *(unsigned *)(unsigned)((int)puVar14 + -0x1d0) = pcVar7;
              if (*(int *)(unsigned)((int)puVar14 + -0x1d0) == 7) {
                uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,0x1e,pcVar2));
                *(undefined4 *)(unsigned)((int)puVar14 + -0x1d4) = uVar1;
                if (*(int *)(unsigned)((int)puVar14 + -0x1d4) < 10) {
                  uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,3,pcVar2));
                  *(undefined4 *)(unsigned)((int)puVar14 + -0x1d8) = uVar1;
                  pcVar2 = (code *)0x0;
                  uVar1 = 0xffffffff;
                  s_CAnimBody_SetAnimation_033a94
                            (ar4 + 0xb0,*(int *)(unsigned)((int)puVar14 + -0x1d8) + 0x60,0xffffffff,0);
                  (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar1,pcVar2));
                }
                *(int *)(unsigned)((int)puVar14 + -0x26c) = ar4;
                pcVar7 = (code *)0x280;
                *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x26c) + 0x280) =
                     *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x26c) + 0x280) + -1;
              }
              goto override_jmp_8c046852_case_6;
            }
          }
          pcVar7 = (code *)0xb0;
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,0xb0,0x60));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          goto override_jmp_8c046852_case_6;
        case 4:
          *(unsigned *)(unsigned)((int)puVar14 + -0x29c) = ((undefined4 *)(unsigned)0x8c125be0);
          *(unsigned *)(unsigned)((int)puVar14 + -0x2a0) = (undefined1 *)(unsigned)((int)puVar14 + -0x94);
          puVar10 = ((undefined4 *)(unsigned)0x8c125bf0);
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c032518(ar4,ar5,((undefined4 *)(unsigned)0x8c125bf0),pcVar12));
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar14 + -0x94),puVar10,pcVar12));
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar14 + -0x94),0xffffffff,puVar10,pcVar12));
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c031bb4(ar4,ar5,ar4 + 0x54,pcVar12));
          *(int *)(unsigned)((int)puVar14 + -0x274) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x274) + 0x134) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x274) + 0x134) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
          pcVar2 = pcVar12;
        case 5:
          pcVar7 = (code *)(ar4 + 0x54);
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), pure_virtual_stub(ar4,ar5,pcVar7,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x1e4) = uVar1;
          if (*(int *)(unsigned)((int)puVar14 + -0x1e4) == 0) {
            uVar13 = 0;
            pcVar7 = (code *)0x0;
            *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          }
        default:
          goto override_jmp_8c046852_case_6;
        case 7:
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), get_field_24_026024(pcVar12,iVar4,pcVar7,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x1e8) = uVar1;
          if (*(int *)(unsigned)((int)puVar14 + -0x1e8) == 0) {
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar14 + -0xa4),iVar4,uVar1,((void *)0x8c022ce8)));
            *(unsigned *)(unsigned)((int)puVar14 + -0x29c) = (undefined1 *)(unsigned)((int)puVar14 + -0xa4);
            *(unsigned *)(unsigned)((int)puVar14 + -0x2a0) = (undefined1 *)(unsigned)((int)puVar14 + -0xb4);
            puVar9 = (undefined1 *)(unsigned)((int)puVar14 + -0x2c);
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c032518(ar4,ar5,puVar9,pcVar12));
            *(int *)(unsigned)((int)puVar14 + -0x290) = ar4;
            *(int *)(unsigned)((int)puVar14 + -0x290) = *(int *)(unsigned)((int)puVar14 + -0x290) + 0x54;
            *(unsigned *)(unsigned)((int)puVar14 + -0x298) = ((void *)0x8c023a14);
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar14 + -0x298))))
                      (*(undefined4 *)(unsigned)((int)puVar14 + -0x290),(undefined1 *)(unsigned)((int)puVar14 + -0xb4),
                       puVar9,pcVar12));
            pcVar12 = (code *)((int)puVar14 + -0xb4);
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_dtor(pcVar12,0xffffffff,puVar9,pcVar12));
            *(unsigned *)(unsigned)((int)puVar14 + -0x294) = ((void *)0x8c022cb0);
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar14 + -0x294))))
                      ((undefined1 *)(unsigned)((int)puVar14 + -0xa4),0xffffffff,puVar9,pcVar12));
          }
          else {
            uVar6 = ar5_00[1];
            *(undefined4 *)(unsigned)((int)puVar14 + -0x44) = *ar5_00;
            *(undefined4 *)(unsigned)((int)puVar14 + -0x40) = uVar6;
            uVar1 = ar5_00[2];
            *(undefined4 *)(unsigned)((int)puVar14 + -0x3c) = uVar1;
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar14 + -0xc4),uVar1,((void *)0x8c022ce8),uVar6));
            *(unsigned *)(unsigned)((int)puVar14 + -0x29c) = (undefined1 *)(unsigned)((int)puVar14 + -0xc4);
            *(unsigned *)(unsigned)((int)puVar14 + -0x2a0) = (undefined1 *)(unsigned)((int)puVar14 + -0xd4);
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c032518(ar4,ar5,(undefined1 *)(unsigned)((int)puVar14 + -0x44),pcVar12));
            pcVar2 = ((void *)0x8c023a14);
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar14 + -0xd4),((void *)0x8c023a14),pcVar12));
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar14 + -0xd4),0xffffffff,pcVar2,pcVar12));
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar14 + -0xc4),0xffffffff,
                      (undefined1 *)(unsigned)((int)puVar14 + -0xc4),pcVar12));
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x43340000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x58) = 0xbf80000043340000;
          }
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c031bb4(ar4,ar5,ar4 + 0x54,pcVar12));
          *(int *)(unsigned)((int)puVar14 + -0x278) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x278) + 0x134) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x278) + 0x134) + 1;
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,10,pcVar12));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x1ec) = uVar1;
          if (8 < *(int *)(unsigned)((int)puVar14 + -0x1ec)) {
            *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        case 8:
          pcVar2 = (code *)(ar4 + 0x48);
          pcVar7 = (code *)(ar4 + 0x54);
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c04c314(ar4,ar5,pcVar7,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x1f0) = uVar1;
          *(undefined4 *)(unsigned)((int)puVar14 + -0xf0) = *(undefined4 *)(unsigned)((int)puVar14 + -0x1f0);
          if ((*(int *)(unsigned)(ar4 + 0x2b8) == 7) && (*(int *)(unsigned)(ar4 + 0x318) != 0)) {
            *(undefined4 *)(unsigned)((int)puVar14 + -0xf0) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x318) = 0;
          }
          if (*(int *)(unsigned)((int)puVar14 + -0xf0) == 0) {
            uVar13 = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
            *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          }
          goto override_jmp_8c046852_case_6;
        case 10:
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          pcVar7 = (code *)(ar4 + 0x34c);
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c0564c4(ar4,ar5,pcVar7,ar7));
          *(undefined4 *)(unsigned)((int)puVar14 + -500) = uVar1;
          pcVar2 = ar7;
          if (*(int *)(unsigned)((int)puVar14 + -500) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
            *(undefined4 *)(unsigned)(ar4 + 700) = 0;
            pcVar7 = (code *)0x134;
            *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
            uVar13 = 0;
          }
          goto override_jmp_8c046852_case_6;
        case 0xb:
          pcVar7 = (code *)(ar4 + 0x34c);
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c055c38(ar4,ar5,pcVar7,ar7));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x1f8) = uVar1;
          pcVar2 = ar7;
          if (*(int *)(unsigned)((int)puVar14 + -0x1f8) == 0) {
            pcVar7 = (code *)0x178;
            *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
            uVar13 = 0;
            pcVar2 = (code *)0x0;
          }
          goto override_jmp_8c046852_case_6;
        case 0xc:
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c03f460((undefined1 *)(unsigned)((int)puVar14 + -0xe0),ar5_00,
                       (undefined1 *)(unsigned)((int)puVar14 + -0xe0),pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x29c) = 0xffffffff;
          pcVar2 = (code *)((int)puVar14 + -0xe0);
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c059fc4(ar4,ar5,*(undefined4 *)(unsigned)((int)puVar14 + -0x28c),pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x1fc) = uVar1;
          *(uint *)(unsigned)((int)puVar14 + -0x110) = (uint)(*(int *)(unsigned)((int)puVar14 + -0x1fc) == 0);
          pcVar7 = (code *)0xffffffff;
          free_if_nonnull_wrap_102790
                    ((undefined1 *)(unsigned)((int)puVar14 + -0xe0),0xffffffff,0xffffffff,pcVar2);
          if (*(int *)(unsigned)((int)puVar14 + -0x110) != 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
            uVar13 = 0;
          }
          goto override_jmp_8c046852_case_6;
        case 0xd:
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c03f460((undefined1 *)(unsigned)((int)puVar14 + -0xec),ar5_00,pcVar7,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x29c) = 0xffffffff;
          pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -0x28c));
          pcVar2 = (code *)(vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c059fc4(ar4,ar5,pcVar7,(undefined1 *)(unsigned)((int)puVar14 + -0xec)));
          *(unsigned *)(unsigned)((int)puVar14 + -0x200) = pcVar2;
          *(uint *)(unsigned)((int)puVar14 + -0x114) = (uint)(*(int *)(unsigned)((int)puVar14 + -0x200) == 0);
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar14 + -0xec),0xffffffff,pcVar7,pcVar2))
          ;
          if (*(int *)(unsigned)((int)puVar14 + -0x114) != 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
            uVar13 = 0;
          }
          goto override_jmp_8c046852_case_6;
        case 0x12:
          pcVar2 = (code *)0x0;
          uVar11 = 0xffffffff;
          uVar6 = 0x1a;
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x204) = uVar1;
          if (*(int *)(unsigned)((int)puVar14 + -0x204) != 6) {
            pcVar2 = ((void *)0x8c033e68);
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar11,((void *)0x8c033e68)));
          }
          pcVar7 = (code *)0xb0;
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,0xb0,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x208) = uVar1;
          if (*(int *)(unsigned)((int)puVar14 + -0x208) == 1) {
            *(int *)(unsigned)((int)puVar14 + -0x27c) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x27c) + 0x134) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x27c) + 0x134) + 1;
          }
          goto override_jmp_8c046852_case_6;
        case 0x13:
          ppuVar8 = ar5;
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_assign(ar4 + 0x54,ar5,pcVar7,pcVar2));
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), get_field_24_026024(pcVar12,ppuVar8,pcVar7,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x20c) = uVar1;
          if (*(int *)(unsigned)((int)puVar14 + -0x20c) == 0) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0xc4e10000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x5c) = 0x290c4e10000;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar16 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
              dVar16 = 1.1551152234084103e+238;
            }
            if (in_FPSCR_PR == '\0') {
              fVar15 = F32LO(dVar16) * F32HI(dVar16);
            }
            else {
              fVar15 = SUB84(dVar16 * dVar16,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(unsigned)(ar4 + 0x5c) = fVar15;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x5c) = in_xd0;
            }
          }
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
          *(int *)(unsigned)((int)puVar14 + -0x280) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x280) + 0x134) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x280) + 0x134) + 1;
        case 0x14:
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          pcVar7 = (code *)(ar4 + 0x54);
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c04c314(ar4,ar5,pcVar7,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x210) = uVar1;
          if (*(int *)(unsigned)((int)puVar14 + -0x210) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(int *)(unsigned)((int)puVar14 + -0x284) = ar4;
            pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -0x284));
            *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x284) + 0x134) =
                 ((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)pcVar7 + 0x134)) + 1;
            (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_assign(ar4 + 0x54,ar5,pcVar7,pcVar2));
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), get_field_24_026024(pcVar12,ar5,pcVar7,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x214) = uVar1;
            if (*(int *)(unsigned)((int)puVar14 + -0x214) == 0) {
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unsigned)(ar4 + 0x54) = 0xc4fa0000;
              }
              else {
                *(undefined8 *)(unsigned)(ar4 + 0x54) = 0xe301d523c4fa0000;
              }
            }
            else {
              if (in_FPSCR_SZ == '\0') {
                dVar16 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
              }
              else {
                in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
                dVar16 = 8.295285811779487e+237;
              }
              if (in_FPSCR_PR == '\0') {
                fVar15 = F32LO(dVar16) * F32HI(dVar16);
              }
              else {
                fVar15 = SUB84(dVar16 * dVar16,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(unsigned)(ar4 + 0x54) = fVar15;
              }
              else {
                *(undefined8 *)(unsigned)(ar4 + 0x54) = in_xd0;
              }
            }
          }
          goto override_jmp_8c046852_case_6;
        case 0x15:
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          pcVar7 = (code *)(ar4 + 0x54);
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c04c314(ar4,ar5,pcVar7,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x218) = uVar1;
          if (*(int *)(unsigned)((int)puVar14 + -0x218) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(int *)(unsigned)((int)puVar14 + -0x288) = ar4;
            uVar6 = 0x134;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x288) + 0x134) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar14 + -0x288) + 0x134) + 1;
            uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), get_field_24_026024(pcVar12,0x134,pcVar7,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x21c) = uVar1;
            if (*(int *)(unsigned)((int)puVar14 + -0x21c) == 0) {
              (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c022d04(ar4 + 0x54,ar4 + 0x54,pcVar7,pcVar2));
            }
            else {
              (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c022d04(ar4 + 0x54,uVar6,pcVar7,pcVar2));
            }
          }
          goto override_jmp_8c046852_case_6;
        case 0x16:
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          *(undefined4 *)(unsigned)(ar4 + 800) = 1;
          pcVar7 = (code *)(ar4 + 0x54);
          uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c04c314(ar4,ar5,pcVar7,pcVar2));
          *(undefined4 *)(unsigned)((int)puVar14 + -0x220) = uVar1;
          if (*(int *)(unsigned)((int)puVar14 + -0x220) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
            uVar13 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0x78,0x96,pcVar2));
            *(undefined4 *)(unsigned)((int)puVar14 + -0x224) = uVar13;
            pcVar7 = (code *)0x31c;
            *(undefined4 *)(unsigned)(ar4 + 0x31c) = *(undefined4 *)(unsigned)((int)puVar14 + -0x224);
            uVar13 = 0;
          }
          goto override_jmp_8c046852_case_6;
        case 0x17:
          pcVar2 = (code *)(vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c05c640(ar4,ar5,ar7,pcVar12));
          *(unsigned *)(unsigned)((int)puVar14 + -0x228) = pcVar2;
          pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar14 + -0x228));
          if ((undefined **)(unsigned)pcVar7 == (undefined **)(unsigned)0x0) {
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
            uVar13 = 0;
          }
          goto override_jmp_8c046852_case_6;
        }
        ppuVar8 = ((undefined1 *)(unsigned)0x8c046ba0);
        pcVar7 = (code *)ppuVar8;
        switch(iVar3) {
        case 0:
          iVar4 = 0x134;
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 2;
          uVar17 = uVar17 & 0xffffffff;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar17;
          }
          break;
        case 1:
          if (ar7 != (code *)0x0) {
            if (ar7 == (code *)0x1) {
              *(undefined4 *)(unsigned)(ar4 + 0x134) = 7;
              break;
            }
            if (ar7 != (code *)0x2) {
              uVar13 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,0,2,pcVar2));
              *(undefined4 *)(unsigned)((int)puVar14 + -0x134) = uVar13;
              uVar13 = 0;
              s_CAnimBody_SetAnimation_033a94
                        (ar4 + 0xb0,*(undefined4 *)(unsigned)((int)puVar14 + -0x134),0xffffffff,0);
              *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
              *(undefined4 *)(unsigned)((int)puVar14 + -0x108) = 0;
              puVar9 = (undefined1 *)(unsigned)((int)puVar14 + -0x44);
              (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), free_if_nonnull_wrap_102790(puVar9,0xffffffff,puVar9,uVar13));
              free_if_nonnull_wrap_102790
                        ((undefined1 *)(unsigned)((int)puVar14 + -0x38),0xffffffff,puVar9,uVar13);
              free_if_nonnull_wrap_102790
                        ((undefined1 *)(unsigned)((int)puVar14 + -0x2c),0xffffffff,puVar9,uVar13);
              return *(undefined4 *)(unsigned)((int)puVar14 + -0x108);
            }
          }
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 4;
          break;
        case 2:
          if (ar7 == (code *)0x1) {
            iVar4 = 10;
            *(undefined4 *)(unsigned)(ar4 + 0x134) = 10;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x134) = 0xb;
          }
          break;
        case 3:
          pcVar2 = (code *)((int)puVar14 + -0x54);
          *(unsigned *)(unsigned)((int)puVar14 + -0x29c) = pcVar2;
          ({ unsigned long t0_ = (unsigned long)(
                       *(undefined4 *)(unsigned)((int)puVar14 + -0x29c)); *(unsigned *)(((puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar4,((undefined1 *)(unsigned)0x8c046ba0),pcVar2); });
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c022dac((undefined1 *)(unsigned)((int)puVar14 + -0x54),((undefined1 *)(unsigned)0x8c125d48),ppuVar8,pcVar2));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar14 + -0x138) = (int)(uVar17 >> 0x20);
            in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                       *(undefined4 *)(unsigned)((int)puVar14 + -0x138));
          }
          else {
            *(ulonglong *)(unsigned)((int)puVar14 + -0x138) = uVar17;
          }
          iVar4 = -1;
          (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar14 + -0x54),0xffffffff,ppuVar8,pcVar2));
          if (in_FPSCR_SZ == '\0') {
            dVar16 = CONCAT44D(0x41c80000,(int)uVar17);
          }
          else {
            dVar16 = 2473901701376.0;
          }
          if (in_FPSCR_PR == '\0') {
            bVar18 = F32HI(dVar16) < SUB84(in_dr14,0);
          }
          else {
            bVar18 = dVar16 < in_dr14;
          }
          if (bVar18) {
            if (in_FPSCR_SZ == '\0') {
              dVar16 = CONCAT44D(0x42820000,SUB84(dVar16,0));
            }
            else {
              dVar16 = -7.94374682731178e-251;
            }
            if (in_FPSCR_PR == '\0') {
              bVar18 = F32HI(dVar16) < SUB84(in_dr14,0);
            }
            else {
              bVar18 = dVar16 < in_dr14;
            }
            if (!bVar18) {
              pcVar2 = (code *)(ar4 + 0x14);
              uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c023334(pcVar2,((undefined1 *)(unsigned)0x8c125d48),((void *)0x8c023334),pcVar2));
              *(undefined4 *)(unsigned)((int)puVar14 + -0x13c) = uVar1;
              if (*(int *)(unsigned)((int)puVar14 + -0x13c) == 3) {
                pcVar2 = (code *)0x0;
                (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x24,0xffffffff,0));
              }
              else if (*(int *)(unsigned)((int)puVar14 + -0x13c) == 4) {
                pcVar2 = (code *)0x0;
                (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x25,0xffffffff,0));
              }
              *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
              *(undefined4 *)(unsigned)(ar4 + 0x134) = 3;
              uVar6 = 10;
              uVar1 = (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), rand_range(ar4,3,10,pcVar2));
              *(undefined4 *)(unsigned)((int)puVar14 + -0x140) = uVar1;
              *(undefined4 *)(unsigned)(ar4 + 0x280) = *(undefined4 *)(unsigned)((int)puVar14 + -0x140);
              if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
                *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
              }
              (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), FUN_8c032be0(ar4,0x50,uVar6,pcVar2));
              if (in_FPSCR_SZ == '\0') {
                *(int *)(unsigned)((int)puVar14 + -0x144) = (int)(D2U(dVar16) >> 0x20);
                uVar17 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar14 + -0x144),SUB84(dVar16,0));
                *(undefined4 *)(unsigned)(ar4 + 0x340) = *(undefined4 *)(unsigned)((int)puVar14 + -0x144);
              }
              else {
                *(double *)(unsigned)((int)puVar14 + -0x144) = dVar16;
                uVar17 = *(ulonglong *)(unsigned)((int)puVar14 + -0x144);
                *(ulonglong *)(unsigned)(ar4 + 0x340) = uVar17;
              }
              iVar4 = ar4 + 0x340;
              pcVar7 = (code *)0xb0;
              (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar4,0xb0,pcVar2));
              break;
            }
          }
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 2;
          uVar17 = D2U(dVar16) & 0xffffffff;
          pcVar7 = (code *)ppuVar8;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar17;
          }
          break;
        case 4:
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0xd;
          break;
        default:
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 2;
          uVar17 = uVar17 & 0xffffffff;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar17;
          }
          break;
        case 6:
          goto LAB_8c046e6c;
        }
      } while( true );
    }
    *(undefined4 *)(unsigned)((int)puVar14 + -0x104) = 0;
    (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar14 + -0x44),0xffffffff,pcVar7,pcVar2));
    (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar14 + -0x38),0xffffffff,pcVar7,pcVar2));
    (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar14 + -0x2c),0xffffffff,pcVar7,pcVar2));
    uVar13 = *(undefined4 *)(unsigned)((int)puVar14 + -0x104);
  }
  else {
    *(undefined4 *)(unsigned)((int)puVar14 + -0x100) = 0;
    (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar14 + -0x44),0xffffffff,pcVar7,pcVar2));
    (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar14 + -0x38),0xffffffff,pcVar7,pcVar2));
    (vsp = (puVar14 ? (unsigned long)puVar14 - 672 : (unsigned long)(fr0_ - 684)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar14 + -0x2c),0xffffffff,pcVar7,pcVar2));
    uVar13 = *(undefined4 *)(unsigned)((int)puVar14 + -0x100);
  }
  return uVar13;
LAB_8c046e6c:
  pcVar7 = (code *)0x12;
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 0x12;
  goto LAB_8c046822;
}

__asm__(".globl _FUN_8c046684\n.set _FUN_8c046684, _FUN_8c046684_def\n");
//@unit 8c048868
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
undefined4 FUN_8c048868_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c048868";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  ulonglong in_dr0 = 0;
  ulonglong uVar7;
  double dVar8;
  undefined8 in_xd0 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar5 = 1;
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c10277c(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  iVar2 = ar4 + 0x14;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(ar4 + 0x80,iVar2,ar6,ar7));
LAB_8c0488bc:
  fVar6 = (float)in_dr0;
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05c28c(ar4,iVar2,ar6,ar7));
      if (iVar2 == 0) {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      break;
    case 1:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,iVar2,ar6,ar7));
      if ((iVar1 != 0x15) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,iVar2,ar6,ar7)), iVar2 != 0x16))
      goto LAB_8c04899c;
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      uVar5 = 0;
      break;
    case 2:
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1c);
      }
      uVar7 = (ulonglong)(uint)fVar6;
      if (in_FPSCR_PR != '\0' || fVar6 <= 0.0) {
LAB_8c048a88:
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), rand_range(ar4,0,100,ar7));
        if (iVar2 < 0x33) {
          iVar2 = 0;
        }
        else {
          iVar2 = 1;
        }
      }
      else {
        ar6_00 = 100;
        uVar3 = 0;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), rand_range(ar4,0,100,ar7));
        if (2 < iVar2) goto LAB_8c048a88;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_94_02aaa4((*(undefined4 *)(fr0_ + 0x00000008)),uVar3,ar6_00,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), libgcc_divide_helper_0101e4(uVar3,5,ar6_00,ar7));
        if ((iVar2 == 3) || (iVar2 == 8)) {
          iVar2 = 4;
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xd;
        }
        else {
          iVar2 = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xb;
        }
      }
      ar7 = 0;
      ar6 = -1;
      (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar2,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar2,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c032ab0(ar4,iVar2,ar6,ar7));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(ar4 + 0x340) = (int)(uVar7 >> 0x20);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x340) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar7 & 0xffffffff;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,iVar2,ar6,ar7));
      if ((iVar1 == 2) || (iVar1 == 4)) {
        ar6 = 4;
        iVar2 = 2;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), rand_range(ar4,2,4,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x280) = uVar3;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
      }
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    case 3:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_normalize(((undefined1 *)(fr0_ - 0x3c)),iVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(unsigned)0x8c136588),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x5c)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar5,ar7));
      if (in_FPSCR_SZ == '\0') {
        dVar8 = CONCAT44D(0x3f7fbe77,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar8 = 52776566456188.93;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05ae54(ar4,uVar3,ar5,ar7));
      if (*(int *)(unsigned)(ar4 + 0x280) < 1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar5,ar7));
        ar6 = ar5;
        if (iVar2 == 1) {
          uVar5 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
        }
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar5,ar7));
        if ((iVar2 == 2) || (iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar5,ar7)), iVar2 == 4)) {
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031748(ar4,uVar3,ar5,ar7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar3,ar5,ar7));
          ar6 = ar5;
          if (iVar2 == 7) {
            *(int *)(unsigned)(ar4 + 0x280) = *(int *)(unsigned)(ar4 + 0x280) + -1;
          }
        }
        else {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar5,ar7));
          ar6 = ar5;
          if (iVar2 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          }
        }
      }
      break;
    case 4:
      if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
        puVar4 = ((undefined4 *)(unsigned)0x8c125bf0);
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c032518(ar4,ar5,((undefined4 *)(unsigned)0x8c125bf0),(*(undefined4 *)(fr0_ + 0x00000004))));
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x6c)),puVar4,(*(undefined4 *)(fr0_ + 0x00000004))));
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,puVar4,(*(undefined4 *)(fr0_ + 0x00000004))));
      }
      else {
        puVar4 = ((undefined4 *)(unsigned)0x8c125bf0);
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c032518(ar4,ar5,((undefined4 *)(unsigned)0x8c125bf0),(*(undefined4 *)(fr0_ + 0x00000004))));
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x7c)),puVar4,(*(undefined4 *)(fr0_ + 0x00000004))));
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,puVar4,(*(undefined4 *)(fr0_ + 0x00000004))));
      }
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031bb4(ar4,ar5,ar4 + 0x54,(*(undefined4 *)(fr0_ + 0x00000004))));
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      ar7 = (*(undefined4 *)(fr0_ + 0x00000004));
    case 5:
      ar6 = ar4 + 0x54;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), pure_virtual_stub(ar4,ar5,ar6,ar7));
      if (iVar2 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
      break;
    case 6:
      ar6 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x0000000c))[1];
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05c9fc(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x0000000c)),ar6,ar7));
      if (iVar2 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        uVar5 = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 128)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  return uVar5;
LAB_8c04899c:
  ar6 = 200;
  iVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 128)), rand_range(ar4,0,200,ar7));
  if (iVar1 < 100) {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 2;
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = in_dr0;
    }
  }
  else if (iVar1 < 0xc5) {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 4;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 6;
  }
  goto LAB_8c0488bc;
}

__asm__(".globl _FUN_8c048868\n.set _FUN_8c048868, _FUN_8c048868_def\n");
//@unit 8c048f8c
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
undefined4 FUN_8c048f8c_def(ulonglong *ar4,undefined4 ar5,int ar6,ulonglong *ar7)

{
  ring[rp++ & 255] = "FUN_8c048f8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 304; for (int i_ = 0; i_ < 304; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 *ar5_00;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr0 = 0;
  ulonglong uVar8;
  float fVar11;
  undefined8 uVar9;
  double dVar10;
  undefined8 in_dr6 = 0;
  double in_dr14 = 0;
  ulonglong in_xd0 = 0;
  bool bVar12;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar5 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  uVar6 = 1;
  uVar4 = ar5;
  iVar2 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_normalize(((undefined1 *)(fr0_ - 0x54)),uVar4,iVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x64)),iVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,iVar2,ar7));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,iVar2,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0((undefined4 *)(unsigned)((int)ar4 + 0x14),uVar4,iVar2,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x34)),uVar4,iVar2,ar7); });
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(fr0_ - 0x84)),iVar2,ar7));
  (*(float *)(fr0_ - 0xe0)) = SUB84(in_dr0,0);
  fVar7 = F32HI(in_dr0);
  if (cVar14 == '\0') {
    (*(float *)(fr0_ - 0xe0)) = fVar7;
    fVar7 = ((float *)(fr0_ - 0xdc))[0];
  }
  ((float *)(fr0_ - 0xdc))[0] = fVar7;
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,iVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,iVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x44)),ar5,iVar2,ar7));
  ar5_00 = (undefined4 *)(unsigned)((int)ar4 + 0x14);
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(ar4 + 0x10,ar5_00,iVar2,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), get_field_1c_026dd8(ar4 + 0x16,ar5_00,iVar2,ar7));
  fVar7 = F32LO(in_dr0);
  if (iVar1 == 5) {
    if (cVar14 == '\0') {
      in_dr14 = 402653249.1875;
      in_dr0 = CONCAT44D(0x40a00000,fVar7);
    }
    else {
      in_dr14 = 2048.000501394272;
      in_dr0 = 2.97615090336666e-312;
      (*(float *)(fr0_ - 0xe0)) = 1.96182e-43;
    }
    (*(float *)(fr0_ - 0xe4)) = 5.0;
  }
  else if (iVar1 == 6) {
    in_dr0 = CONCAT44D(0x3f800000,fVar7);
    if (cVar14 == '\0') {
      (*(float *)(fr0_ - 0xe4)) = 1.0;
      in_dr14 = 402653249.1875;
    }
    else {
      (*(float *)(fr0_ - 0xe0)) = 1.0;
      in_dr14 = 2.97624156480792e-312;
      (*(float *)(fr0_ - 0xe4)) = fVar7;
    }
  }
  else if (iVar1 == 10) {
    if (cVar14 == '\0') {
      in_dr14 = 33554440.1484375;
    }
    else {
      in_dr14 = -8.977643917409603e-251;
    }
  }
  iVar1 = (int)ar4[8];
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c05c28c(ar4,ar5_00,iVar2,ar7));
      if (iVar1 != 0) {
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,iVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,iVar2,ar7));
        return 1;
      }
      if (cVar14 == '\0') {
        fVar7 = F32LO(in_dr0);
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x455ac000;
      }
      else {
        fVar7 = 3500.0;
        ar4[0x44] = 0x8c031bb4455ac000;
      }
      iVar1 = ar6;
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
      uVar4 = 0x8c2803f4;
      iVar2 = (int)ar4[0x25] * 0x18 + -0x73d7fc0c;
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c031b68(ar4,iVar2,iVar1,0x8c2803f4));
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c03c314(ar4,iVar2,iVar1,uVar4));
      if (cVar14 == '\0') {
        fVar7 = *(float *)(unsigned)((int)ar4 + 0x24);
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
      }
      uVar8 = (ulonglong)(uint)fVar7;
      if (fVar7 == 0.0) {
        if (cVar14 == '\0') {
          dVar10 = CONCAT44D(0x41a00000,fVar7);
          *(undefined4 *)(unsigned)(ar4 + 6) = 0x41a00000;
        }
        else {
          dVar10 = 4.67383042659946e-312;
          ar4[6] = 0xdc41a00000;
        }
      }
      else {
        iVar2 = ar6;
        (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022fc0(ar5,ar6,iVar1,uVar4));
        if (cVar14 == '\0') {
          dVar10 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x24),(int)(uVar8 >> 0x20));
        }
        else {
          dVar10 = *(double *)(unsigned)((int)ar4 + 0x24);
          in_xd0 = uVar8;
        }
        if (cVar13 == '\0') {
          dVar10 = (double)(ulonglong)(uint)(F32LO(dVar10) / F32HI(dVar10));
        }
        else {
          dVar10 = dVar10 / dVar10;
        }
        if (cVar14 == '\0') {
          *(int *)(unsigned)(ar4 + 6) = SUB84(dVar10,0);
        }
        else {
          ar4[6] = in_xd0;
        }
      }
      uVar8 = D2U(dVar10) & 0xffffffff;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)((int)ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x2c) = uVar8;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0((undefined4 *)(unsigned)((int)ar4 + 0x14),iVar2,iVar1,uVar4); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x34)),iVar2,iVar1,uVar4); });
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(fr0_ - 0xa4)),iVar1,uVar4));
      if (cVar14 == '\0') {
        *(int *)(unsigned)((int)ar4 + 0x224) = (int)(uVar8 >> 0x20);
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x224) = uVar8;
      }
      (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,iVar1,uVar4));
      (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,iVar1,uVar4));
      if (cVar14 == '\0') {
        uVar8 = CONCAT44((int)ar4[0x44],*(undefined4 *)(unsigned)((int)ar4 + 0x24));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
        uVar8 = ar4[0x44];
      }
      if (cVar13 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 304)), rand_range(ar4,0,2,uVar4));
        ar7 = (ulonglong *)(unsigned)0x0;
        uVar4 = 0xffffffff;
        iVar2 = iVar2 + 5;
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,iVar2,0xffffffff,0));
      }
      else {
        ar7 = (ulonglong *)(unsigned)0x0;
        uVar4 = 0xffffffff;
        iVar2 = 10;
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,10,0xffffffff,0));
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), get_field_1c_026dd8(ar4 + 0x16,iVar2,uVar4,ar7));
      if (iVar1 == 5) {
        if (cVar14 != '\0') {
          (*(float *)(fr0_ - 0xe0)) = 1.96182e-43;
        }
      }
      else if ((iVar1 == 6) && (cVar14 != '\0')) {
        (*(float *)(fr0_ - 0xe0)) = 1.0;
      }
      if (*(int *)(unsigned)((int)ar4 + 0x124) == 0x11) {
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)((int)ar4 + 0x24) = 0x40c00000;
        }
        else {
          *(undefined8 *)(unsigned)((int)ar4 + 0x24) = 0xb040c00000;
        }
      }
      puVar3 = ar4 + 0x16;
      (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetFrame_033e6e(puVar3,iVar2,uVar4,ar7));
      *(undefined4 *)(unsigned)(ar4 + 8) = 1;
      if (cVar14 == '\0') {
        uVar8 = CONCAT44(0x42340000,(*(float *)(fr0_ - 0xe0)));
      }
      else {
        in_xd0 = CONCAT44(((float *)(fr0_ - 0xdc))[0],(*(float *)(fr0_ - 0xe0)));
        uVar8 = 0x8c01420042340000;
      }
      if (cVar13 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 304)), rand(puVar3,iVar2,uVar4,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 304)), libgcc_divide_helper_01031c(uVar5,8,uVar4,ar7));
        *(int *)(unsigned)(ar4 + 0x50) = iVar2 + 8;
        *(undefined4 *)(unsigned)(ar4 + 8) = 3;
        break;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)((int)ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x2c) = uVar8 & 0xffffffff;
      }
      ar7 = (ulonglong *)(unsigned)0x0;
      iVar2 = -1;
      ar5_00 = (undefined4 *)(unsigned)0x6;
      (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,6,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x50) = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x4f) = 0x3f000000;
      }
      else {
        ar4[0x4f] = 0x2b83f000000;
      }
      *(undefined4 *)(unsigned)(ar4 + 8) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x57) = 3;
    case 1:
      if (cVar14 == '\0') {
        fVar7 = 90.0;
      }
      else {
        in_xd0 = CONCAT44(((float *)(fr0_ - 0xdc))[0],(*(float *)(fr0_ - 0xe0)));
        (*(float *)(fr0_ - 0xe0)) = 90.0;
        fVar7 = 3.0;
      }
      if (cVar13 == '\0' && fVar7 < (*(float *)(fr0_ - 0xe0))) {
        if (cVar14 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 5);
          fVar11 = 3.0;
        }
        else {
          in_xd0 = ar4[5];
          fVar7 = 3.0;
          fVar11 = 0.05;
        }
        if (cVar13 != '\0' || fVar7 <= fVar11) {
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 6.20130889485342e-312;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) + F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 + dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 5) = fVar7;
          }
          else {
            ar4[5] = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 8.741916293825089e+86;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) - F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 5) = fVar7;
          }
          else {
            ar4[5] = in_xd0;
          }
        }
        iVar1 = ar6;
        if (*(int *)(unsigned)((int)ar4 + 0x124) == 0x11) {
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb0)),ar5_00,iVar2,ar7));
          ar7 = (ulonglong *)(unsigned)((int)ar4 + 0x14);
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c031eb0(ar4,ar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign((undefined4 *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0xc0)),iVar1,ar7));
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,iVar1,ar7));
          uVar4 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 304)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,iVar1,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xcc)),ar5_00,iVar2,ar7));
          ar7 = (ulonglong *)(unsigned)((int)ar4 + 0x14);
          ({ unsigned long t0_ = (unsigned long)(((float *)(fr0_ - 0xdc))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c031eb0(ar4,ar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign((undefined4 *)(unsigned)((int)ar4 + 0x14),((float *)(fr0_ - 0xdc)),iVar1,ar7));
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((float *)(fr0_ - 0xdc)),0xffffffff,iVar1,ar7));
          uVar4 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 304)), object_dtor_delete(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,iVar1,ar7));
        }
        if (cVar14 == '\0') {
          dVar10 = CONCAT44D(0x3e99999a,(int)ar4[0x4f]);
        }
        else {
          in_xd0 = ar4[0x4f];
          dVar10 = 8192.001910400391;
        }
        if (cVar13 == '\0') {
          fVar7 = F32LO(dVar10) + F32HI(dVar10);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(unsigned)(ar4 + 0x4f) = fVar7;
          fVar7 = *(float *)(unsigned)(ar4 + 0x4f);
          fVar11 = 6.0;
        }
        else {
          ar4[0x4f] = in_xd0;
          fVar7 = 6.0;
          fVar11 = 24.0;
        }
        if (cVar13 == '\0' && fVar11 < fVar7) {
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x4f) = 0x40c00000;
          }
          else {
            ar4[0x4f] = 0x41c0000040c00000;
          }
        }
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,uVar4,iVar1,ar7));
      }
      else {
        ar7 = (ulonglong *)(unsigned)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 5;
        puVar3 = ar4 + 0x16;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(puVar3,5,0xffffffff,0));
        if (iVar2 != 6) {
          puVar3 = ar4 + 0x16;
          (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetFrame_033e6e(puVar3,uVar4,uVar5,ar7));
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x12) = 0;
        }
        else {
          ar4[0x12] = (ulonglong)(uint)(*(float *)(fr0_ - 0xe0));
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x13) = 0;
        }
        else {
          ar4[0x13] = (ulonglong)(uint)(*(float *)(fr0_ - 0xe0));
        }
        *(undefined4 *)(unsigned)(ar4 + 8) = 3;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 304)), rand(puVar3,uVar4,uVar5,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 304)), libgcc_divide_helper_01031c(uVar4,8,uVar5,ar7));
        *(int *)(unsigned)(ar4 + 0x50) = iVar2 + 8;
      }
      break;
    case 3:
      if (*(int *)(unsigned)((int)ar4 + 0x124) == 0x11) {
        if (cVar14 == '\0') {
          in_dr0 = (double)(ulonglong)(uint)ar4[0x4f];
        }
        else {
          in_xd0 = ar4[0x4f];
        }
        dVar10 = CONCAT44D(0x3f800000,SUB84(in_dr0,0));
        if (cVar13 == '\0') {
          fVar7 = F32LO(in_dr0) + 1.0;
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(unsigned)(ar4 + 0x4f) = fVar7;
          dVar10 = CONCAT44D(0x3f000000,(int)ar4[5]);
        }
        else {
          ar4[0x4f] = in_xd0;
          in_xd0 = ar4[5];
          dVar10 = 3.73993469111571e-312;
        }
        if (cVar13 == '\0') {
          fVar7 = F32LO(dVar10) + F32HI(dVar10);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = fVar7;
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x24),(int)ar4[5]);
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
          in_dr0 = *(double *)(unsigned)((int)ar4 + 0x24);
        }
        if (cVar13 == '\0' && F32HI(in_dr0) < SUB84(in_dr0,0)) {
          if (cVar14 == '\0') {
            uVar4 = *(undefined4 *)(unsigned)((int)ar4 + 0x24);
            in_dr0 = CONCAT44D(uVar4,SUB84(in_dr0,0));
            *(undefined4 *)(unsigned)(ar4 + 5) = uVar4;
          }
          else {
            in_dr0 = *(double *)(unsigned)((int)ar4 + 0x24);
            ar4[5] = (ulonglong)in_dr0;
          }
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), get_field_1c_026dd8(ar4 + 0x16,ar4 + 0x16,iVar2,ar7));
      if ((iVar1 == 5) || (iVar1 == 6)) {
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 304)); CAnimBody_GetCurFrame(ar4 + 0x16,iVar1,iVar2,ar7); });
        if (cVar13 == '\0') {
          bVar12 = SUB84(in_dr14,0) < F32HI(in_dr0);
        }
        else {
          bVar12 = in_dr14 < in_dr0;
        }
        if (bVar12) {
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 1.268568884059579e+106;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) + F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 + dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 5) = fVar7;
            uVar9 = CONCAT44(*(undefined4 *)(unsigned)((int)ar4 + 0x24),(int)ar4[5]);
          }
          else {
            ar4[5] = in_xd0;
            in_xd0 = ar4[5];
            uVar9 = *(undefined8 *)(unsigned)((int)ar4 + 0x24);
          }
          puVar3 = (ulonglong *)(unsigned)((int)ar4 + 0x24);
          if (cVar13 == '\0' && F32HI(uVar9) < (float)uVar9) {
            if (cVar14 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 5) = *(undefined4 *)(unsigned)((int)ar4 + 0x24);
            }
            else {
              ar4[5] = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
            }
          }
        }
        else {
          puVar3 = ar4 + 5;
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D(0x3d4ccccd,(int)*puVar3);
          }
          else {
            in_xd0 = *puVar3;
            dVar10 = 1.34160945841353e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) - F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 5) = fVar7;
            fVar7 = *(float *)(unsigned)(ar4 + 5);
          }
          else {
            ar4[5] = in_xd0;
            in_xd0 = ar4[5];
          }
          if (cVar13 == '\0' && fVar7 < 0.0) {
            if (cVar14 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 5) = 0;
            }
            else {
              ar4[5] = (ulonglong)(uint)fVar7;
            }
          }
        }
        if (cVar14 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x4f);
        }
        else {
          in_xd0 = ar4[0x4f];
          fVar7 = (*(float *)(fr0_ - 0xe4));
          (*(float *)(fr0_ - 0xe4)) = (*(float *)(fr0_ - 0xe0));
        }
        if (cVar13 != '\0' || fVar7 <= (*(float *)(fr0_ - 0xe4))) {
          if (cVar14 == '\0') {
            in_dr0 = CONCAT44D(0x3e19999a,(int)ar4[0x4f]);
          }
          else {
            in_xd0 = ar4[0x4f];
            in_dr0 = 1.3585920559782e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = F32HI(in_dr0);
            in_dr0 = CONCAT44D(fVar7,F32LO(in_dr0) + fVar7);
          }
          else {
            in_dr0 = in_dr0 + in_dr0;
          }
          if (cVar14 == '\0') {
            *(int *)(unsigned)(ar4 + 0x4f) = SUB84(in_dr0,0);
          }
          else {
            ar4[0x4f] = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            in_dr0 = CONCAT44D(0x3e19999a,(int)ar4[0x4f]);
          }
          else {
            in_xd0 = ar4[0x4f];
            in_dr0 = 2.6866146507523e+96;
          }
          if (cVar13 == '\0') {
            fVar7 = F32HI(in_dr0);
            in_dr0 = CONCAT44D(fVar7,F32LO(in_dr0) - fVar7);
          }
          else {
            in_dr0 = in_dr0 - in_dr0;
          }
          puVar3 = ar4;
          if (cVar14 == '\0') {
            *(int *)(unsigned)(ar4 + 0x4f) = SUB84(in_dr0,0);
          }
          else {
            ar4[0x4f] = in_xd0;
          }
        }
        if ((int)ar4[0x50] < 1) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,puVar3,iVar2,ar7));
          if (iVar1 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x57) = 2;
            ar7 = (ulonglong *)(unsigned)0x0;
            iVar2 = -1;
            uVar4 = 0;
            (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0));
            (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar4,iVar2,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x50) = 0;
          }
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,puVar3,iVar2,ar7));
          if (iVar1 == 1) {
            *(int *)(unsigned)(ar4 + 0x50) = (int)ar4[0x50] + -1;
          }
        }
      }
      else {
        (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x12c))+4)) = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,iVar1,iVar2,ar7));
        if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x12c))+4)) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x57) = 2;
          *(undefined4 *)(unsigned)(ar4 + 8) = 5;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022fc0(ar5,ar6,iVar2,ar7));
      if (cVar14 == '\0') {
        (*(undefined8 *)(fr0_ - 0x12c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x12c))+4)),(int)((ulonglong)in_dr0 >> 0x20));
        dVar10 = CONCAT44D((int)ar4[9],(int)ar4[5]);
      }
      else {
        in_xd0 = ar4[5];
        dVar10 = (double)ar4[9];
        (*(undefined8 *)(fr0_ - 0x12c)) = in_dr0;
      }
      if (cVar13 == '\0') {
        fVar7 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar14 == '\0') {
        (*(undefined8 *)(fr0_ - 0x12c)) = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x12c)),fVar7);
      }
      if (cVar13 != '\0' || F32HI((*(undefined8 *)(fr0_ - 0x12c))) <= SUB84((*(undefined8 *)(fr0_ - 0x12c)),0)) {
        uVar8 = (ulonglong)(*(undefined8 *)(fr0_ - 0x12c)) & 0xffffffff;
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)((int)ar4 + 0x2c) = 0;
          uVar8 = (ulonglong)(uint)ar4[7];
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x2c) = uVar8;
          in_xd0 = ar4[7];
        }
        if ((float)uVar8 == 0.0) {
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D(0x41a00000,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 1.0392155376404425e+106;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) / F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 / dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)((int)ar4 + 0x3c) = fVar7;
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x3c) = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D((int)ar4[7],(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = (double)ar4[7];
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) / F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 / dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)((int)ar4 + 0x3c) = fVar7;
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x3c) = in_xd0;
          }
        }
        ar7 = (ulonglong *)(unsigned)0x40;
        *(undefined4 *)(unsigned)(ar4 + 8) = 4;
      }
      break;
    case 4:
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x3c),(int)ar4[5]);
      }
      else {
        in_xd0 = ar4[5];
        dVar10 = *(double *)(unsigned)((int)ar4 + 0x3c);
      }
      if (cVar13 == '\0') {
        fVar7 = F32LO(dVar10) - F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar14 == '\0') {
        *(float *)(unsigned)(ar4 + 5) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 5);
      }
      else {
        ar4[5] = in_xd0;
      }
      if (cVar13 == '\0' && fVar7 < 0.0) {
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 5) = 0;
        }
        else {
          ar4[5] = (ulonglong)(uint)fVar7;
        }
      }
      ar7 = ar4 + 0x4f;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,((void *)0x8c033b98),0xb0,ar7));
      if (iVar2 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x57) = 2;
        uVar6 = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c051a68(ar4,ar6,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar5,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c048f8c\n.set _FUN_8c048f8c, _FUN_8c048f8c_def\n");
//@unit 8c049b68
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
undefined4 FUN_8c049b68_def(int ar4,undefined8 *ar5,code *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c049b68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 644; for (int i_ = 0; i_ < 644; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  double *ar6_00;
  code *pcVar9;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 uVar10;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  double *pdVar11;
  uint uVar12;
  float fVar13;
  undefined8 in_dr0 = 0;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined4 in_fr3 = 0;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  double in_dr12 = 0;
  float fVar18;
  double in_dr14 = 0;
  float fVar19;
  undefined8 in_xd0 = 0;
  undefined8 in_xd4 = 0;
  undefined8 in_xd6 = 0;
  undefined8 in_xd14 = 0;
  bool bVar20;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar11 = &(*(double *)(fr0_ - 0x10));
    (*(double *)(fr0_ - 0x10)) = CONCAT44D(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar11 = (double *)(unsigned)((undefined1 *)(fr0_ - 0x20));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
    (*(double *)(fr0_ - 0x10)) = in_dr14;
  }
  *(undefined4 *)(unsigned)((int)pdVar11 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)pdVar11 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)pdVar11 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)((int)pdVar11 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)((int)pdVar11 + -0x14) = unaff_r10;
  *(undefined4 *)(unsigned)((int)pdVar11 + -0x18) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pdVar11 + -0x268) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(unsigned)((int)pdVar11 + -0x264) = (int)in_dr4;
    *(int *)(unsigned)((int)pdVar11 + -0x260) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)(unsigned)((int)pdVar11 + -0x25c) = (int)in_dr6;
  }
  else {
    *(undefined8 *)(unsigned)((int)pdVar11 + -0x268) = in_dr4;
    *(undefined8 *)(unsigned)((int)pdVar11 + -0x264) = in_xd4;
    *(undefined8 *)(unsigned)((int)pdVar11 + -0x260) = in_dr6;
    *(undefined8 *)(unsigned)((int)pdVar11 + -0x25c) = in_xd6;
  }
  uVar10 = 1;
  pcVar5 = ((void *)0x8c023d34);
  pcVar9 = ar6;
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_set_zero((undefined1 *)(unsigned)((int)pdVar11 + -0x24),((void *)0x8c023d34),ar6,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_set_zero((undefined1 *)(unsigned)((int)pdVar11 + -0x30),pcVar5,pcVar9,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar11 + -0x40),ar6,pcVar9,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c022fc0(ar5,(undefined1 *)(unsigned)((int)pdVar11 + -0x40),pcVar9,ar7));
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pdVar11 + -0x158) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x158),(int)in_dr0);
    *(undefined4 *)(unsigned)((int)pdVar11 + -0x140) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x158);
  }
  else {
    *(undefined8 *)(unsigned)((int)pdVar11 + -0x158) = in_dr0;
    dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x158);
    *(double *)(unsigned)((int)pdVar11 + -0x140) = dVar14;
  }
  *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -0x70);
  puVar6 = ar5;
  ({ unsigned long t0_ = (unsigned long)(
           *(undefined4 *)(unsigned)((int)pdVar11 + -0x26c)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8); Vec3_sub((undefined1 *)(unsigned)((int)pdVar11 + -0x40),ar5,pcVar9,ar7); });
  *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -0x80);
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_normalize((undefined1 *)(unsigned)((int)pdVar11 + -0x70),puVar6,pcVar9,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar11 + -0x50),(undefined1 *)(unsigned)((int)pdVar11 + -0x80),pcVar9,
                 ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x80),0xffffffff,pcVar9,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x70),0xffffffff,pcVar9,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar11 + -0x60),ar5,pcVar9,ar7));
  pcVar5 = (code *)(ar4 + 0x14);
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_assign(ar4 + 0x80,pcVar5,pcVar9,ar7));
  uVar2 = SUB84(dVar14,0);
  if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 0x40d00000;
    }
    else {
      uVar2 = 0x40d00000;
      *(undefined8 *)(unsigned)(ar4 + 0x220) = 0xb040d00000;
    }
    uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7));
    *(undefined4 *)(unsigned)((int)pdVar11 + -0x15c) = uVar1;
    iVar4 = *(int *)(unsigned)((int)pdVar11 + -0x15c);
    uVar1 = SUB84(in_dr14,0);
    if (iVar4 == 5) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x144) = 0x42000000;
        in_dr14 = CONCAT44D(0x41980000,uVar1);
        in_dr12 = 524288.1283569336;
      }
      else {
        in_dr12 = 8589936676.0;
        uVar2 = 0x42000000;
        *(undefined8 *)(unsigned)((int)pdVar11 + -0x144) = 0x12442000000;
        in_dr14 = 402653249.59375;
      }
    }
    else if (iVar4 == 6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x144) = 0x42200000;
        in_dr14 = CONCAT44D(0x41800000,uVar1);
        in_dr12 = 536871043.6875;
      }
      else {
        in_dr12 = 34359746784.0;
        uVar2 = 0x42200000;
        *(undefined8 *)(unsigned)((int)pdVar11 + -0x144) = 0x12442200000;
        in_dr14 = 1610612998.0;
      }
    }
    else if (iVar4 == 10) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = CONCAT44D(0x41200000,uVar1);
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),0x41800000);
      }
      else {
        in_dr14 = 33554440.140625;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = CONCAT44D(0x3f333333,uVar2);
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x148) = 0x3f333333;
    }
    else {
      dVar14 = 6.11658655508794e-312;
      *(undefined8 *)(unsigned)((int)pdVar11 + -0x148) = 0x1203f333333;
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 0x40d00000;
    }
    else {
      uVar2 = 0x40d00000;
      *(undefined8 *)(unsigned)(ar4 + 0x220) = 0xb040d00000;
    }
    pcVar5 = ((void *)0x8c026dd8);
    uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),pcVar9,ar7));
    *(undefined4 *)(unsigned)((int)pdVar11 + -0x160) = uVar1;
    iVar4 = *(int *)(unsigned)((int)pdVar11 + -0x160);
    uVar1 = SUB84(in_dr14,0);
    if (iVar4 == 5) {
      in_dr12 = (double)((ulonglong)in_dr12 & 0xffffffff);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x144) = 0x42440000;
        in_dr14 = CONCAT44D(0x41300000,uVar1);
        in_dr12 = 5.44745745654293e-315;
      }
      else {
        uVar2 = 0x42440000;
        *(undefined8 *)(unsigned)((int)pdVar11 + -0x144) = 0x12442440000;
        in_dr14 = 402653249.1875;
      }
    }
    else if (iVar4 == 6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x144) = 0x421c0000;
        in_dr14 = CONCAT44D(0x41300000,uVar1);
        in_dr12 = 536871043.4375;
      }
      else {
        in_dr12 = 30064775280.0;
        uVar2 = 0x421c0000;
        *(undefined8 *)(unsigned)((int)pdVar11 + -0x144) = 0x124421c0000;
        in_dr14 = 402653249.1875;
      }
    }
    else if (iVar4 == 10) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = CONCAT44D(0x40e00000,uVar1);
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),0x41300000);
      }
      else {
        in_dr14 = 1048576.2534179688;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = CONCAT44D(0x3f000000,uVar2);
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x148) = 0x3f000000;
    }
    else {
      dVar14 = 6.11656997699681e-312;
      *(undefined8 *)(unsigned)((int)pdVar11 + -0x148) = 0x1203f000000;
    }
  }
  iVar4 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar4) || (iVar4 < 0)) goto override_jmp_8c049e5a_case_2;
                    
  switch(iVar4) {
  case 0:
    if (*(int *)(unsigned)(ar4 + 0x124) == 0x11) {
      uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c05c28c(ar4,pcVar5,pcVar9,ar7));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x164) = uVar2;
      iVar4 = *(int *)(unsigned)((int)pdVar11 + -0x164);
    }
    else {
      uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c05c28c(ar4,pcVar5,pcVar9,ar7));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x168) = uVar2;
      iVar4 = *(int *)(unsigned)((int)pdVar11 + -0x168);
    }
    if (iVar4 != 0) {
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x150) = 1;
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x60),0xffffffff,pcVar9,ar7));
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x50),0xffffffff,pcVar9,ar7));
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x40),0xffffffff,pcVar9,ar7));
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0x30),0xffffffff,pcVar9,ar7));
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0x24),0xffffffff,pcVar9,ar7));
      return *(undefined4 *)(unsigned)((int)pdVar11 + -0x150);
    }
    if (*(int *)(unsigned)(ar4 + 0x1b8) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x18c) = *(undefined4 *)(unsigned)ar5;
        *(undefined4 *)(unsigned)(ar4 + 400) = *(undefined4 *)(unsigned)((int)ar5 + 4);
        *(undefined4 *)(unsigned)(ar4 + 0x194) = *(undefined4 *)(unsigned)(ar5 + 1);
        *(undefined4 *)(unsigned)(ar4 + 0x198) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x40);
        *(undefined4 *)(unsigned)(ar4 + 0x19c) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x3c);
        dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x38),SUB84(dVar14,0));
        *(undefined4 *)(unsigned)(ar4 + 0x1a0) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x38);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x18c) = *ar5;
        *(undefined8 *)(unsigned)(ar4 + 400) = *(undefined8 *)(unsigned)((int)ar5 + 4);
        *(undefined8 *)(unsigned)(ar4 + 0x194) = ar5[1];
        *(undefined8 *)(unsigned)(ar4 + 0x198) = *(undefined8 *)(unsigned)((int)pdVar11 + -0x40);
        *(undefined8 *)(unsigned)(ar4 + 0x19c) = *(undefined8 *)(unsigned)((int)pdVar11 + -0x3c);
        dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x38);
        *(double *)(unsigned)(ar4 + 0x1a0) = dVar14;
      }
    }
    uVar12 = SUB84(dVar14,0);
    *(undefined4 *)(unsigned)((int)pdVar11 + -0x220) = *(undefined4 *)(unsigned)(ar4 + 0x128);
    iVar4 = (*(int *)(unsigned)((int)pdVar11 + -0x220) * 2 + *(int *)(unsigned)((int)pdVar11 + -0x220)) * 8 +
            -0x73d7fc0c;
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c031b68(ar4,iVar4,pcVar9,ar7));
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c03c314(ar4,iVar4,pcVar9,ar7));
    puVar8 = (undefined1 *)(unsigned)((int)pdVar11 + -0x40);
    puVar6 = ar5;
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c031bb4(ar4,ar5,puVar8,ar7));
    uVar16 = (ulonglong)uVar12;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar16;
    }
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c0231c8((undefined1 *)(unsigned)((int)pdVar11 + -0x50),puVar6,puVar8,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar11 + -0x16c) = (int)(uVar16 >> 0x20);
    }
    else {
      *(ulonglong *)(unsigned)((int)pdVar11 + -0x16c) = uVar16;
    }
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c0231c8(ar4 + 0x14,puVar6,puVar8,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar11 + -0x170) = (int)(uVar16 >> 0x20);
      uVar17 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar11 + -0x170),(int)uVar16);
    }
    else {
      *(ulonglong *)(unsigned)((int)pdVar11 + -0x170) = uVar16;
      uVar17 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x170);
    }
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c010e38(((void *)0x8c010e38),puVar6,puVar8,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar11 + -0x174) = (int)((ulonglong)uVar17 >> 0x20);
      uVar17 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar11 + -0x174),(int)uVar17);
      *(undefined4 *)(unsigned)(ar4 + 0x228) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x174);
    }
    else {
      *(undefined8 *)(unsigned)((int)pdVar11 + -0x174) = uVar17;
      uVar17 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x174);
      *(undefined8 *)(unsigned)(ar4 + 0x228) = uVar17;
    }
    *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -0x90);
    ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar11 + -0x26c)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8); FUN_8c0230f0(ar4 + 0x14,ar4 + 0x228,puVar8,ar7); });
    *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -0xa0);
    ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar11 + -0x26c)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8); FUN_8c0230f0((undefined1 *)(unsigned)((int)pdVar11 + -0x50),(undefined1 *)(unsigned)((int)pdVar11 + -0xa0),puVar8,
                 ar7); });
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c022dac((undefined1 *)(unsigned)((int)pdVar11 + -0x90),(undefined1 *)(unsigned)((int)pdVar11 + -0xa0),puVar8,
                 ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar11 + -0x178) = (int)((ulonglong)uVar17 >> 0x20);
      *(undefined4 *)(unsigned)(ar4 + 0x224) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x178);
    }
    else {
      *(undefined8 *)(unsigned)((int)pdVar11 + -0x178) = uVar17;
      *(undefined8 *)(unsigned)(ar4 + 0x224) = *(undefined8 *)(unsigned)((int)pdVar11 + -0x178);
    }
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0xa0),0xffffffff,puVar8,ar7));
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x90),0xffffffff,puVar8,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f4ccccd;
      uVar17 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x220),*(undefined4 *)(unsigned)(ar4 + 0x24));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x278) = 0x2203f4ccccd;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x24);
      uVar17 = *(undefined8 *)(unsigned)(ar4 + 0x220);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar17 < F32HI(uVar17)) {
      uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), rand_range(ar4,0,2,ar4 + 0x220));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x17c) = uVar2;
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      iVar4 = *(int *)(unsigned)((int)pdVar11 + -0x17c) + 5;
      uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x180) = uVar2;
      if (*(int *)(unsigned)((int)pdVar11 + -0x180) != 6) {
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar4,uVar1,ar7));
      }
    }
    else {
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
    }
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(0x42340000,*(undefined4 *)(unsigned)(ar4 + 0x224));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
      uVar17 = 0x21842340000;
    }
    if (in_FPSCR_PR == '\0' && F32HI(uVar17) < (float)uVar17) {
      uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c023334(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar11 + -0x50),uVar1,ar7));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x184) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 0x27c) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x184);
      if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
        ar7 = (code *)0x0;
        uVar7 = 0xffffffff;
        uVar2 = 7;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c026db0(ar4,uVar2,uVar7,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x188) = uVar2;
        uVar1 = *(undefined4 *)(unsigned)((int)pdVar11 + -0x188);
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c03c0f0(ar4 + 0xb0,uVar1,uVar7,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x18c) = uVar2;
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), deref_u32(*(undefined4 *)(unsigned)((int)pdVar11 + -0x18c),uVar1,uVar7,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -400) = uVar2;
        puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -400));
        uVar2 = puVar3[1];
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13630c);
        }
        else {
          ar7 = (code *)((undefined1 *)(unsigned)0x8c136354);
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136354);
        }
      }
      else {
        ar7 = (code *)0x0;
        uVar7 = 0xffffffff;
        uVar2 = 8;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c026db0(ar4,uVar2,uVar7,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x194) = uVar2;
        uVar1 = *(undefined4 *)(unsigned)((int)pdVar11 + -0x194);
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c03c0f0(ar4 + 0xb0,uVar1,uVar7,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x198) = uVar2;
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), deref_u32(*(undefined4 *)(unsigned)((int)pdVar11 + -0x198),uVar1,uVar7,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x19c) = uVar2;
        puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x19c));
        uVar2 = puVar3[1];
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136324);
        }
        else {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13636c);
        }
      }
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c032ab0(ar4,uVar1,uVar7,ar7));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar11 + -0x1a0) = (int)((ulonglong)uVar17 >> 0x20);
        dVar14 = CONCAT44D(0x42700000,*(undefined4 *)(unsigned)(ar4 + 0x224));
      }
      else {
        *(undefined8 *)(unsigned)((int)pdVar11 + -0x1a0) = uVar17;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
        dVar14 = 3.74021962707397e-312;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = F32LO(dVar14) / F32HI(dVar14);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1a0),fVar13);
      }
      else {
        dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x1a0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = F32LO(dVar14) * F32HI(dVar14);
      }
      else {
        fVar13 = SUB84(dVar14 * dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(ar4 + 0x2c0) = fVar13;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c0) = in_xd0;
      }
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar7,ar7));
      uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), get_field_1c_026dd8(ar4 + 0xb0,uVar1,uVar7,ar7));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x1a4) = uVar2;
      uVar1 = 0xb0;
      uVar2 = s_Check_This_Motion_Data_0314fc
                        (ar4 + 0xb0,*(undefined4 *)(unsigned)((int)pdVar11 + -0x1a4),0xb0,ar7);
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x1a8) = uVar2;
      if (*(int *)(unsigned)((int)pdVar11 + -0x1a8) == 0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x228) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x228) = CONCAT44(0x3f800000,fVar13);
        }
      }
      else {
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),uVar1,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1ac) = uVar2;
        uVar2 = s_Check_This_Motion_Data_0314fc
                          (ar4 + 0xb0,*(undefined4 *)(unsigned)((int)pdVar11 + -0x1ac),uVar1,ar7);
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1b0) = uVar2;
        *(int *)(unsigned)((int)pdVar11 + -0x224) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x224) + 0x228),in_fr3)
          ;
        }
        else {
          dVar14 = *(double *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x224) + 0x228);
        }
        fVar13 = (float)*(int *)(unsigned)((int)pdVar11 + -0x1b0);
        dVar15 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(0x4f800000,fVar13);
          }
          else {
            dVar15 = 5.4415140602002105e+158;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32HI(dVar15);
            dVar15 = CONCAT44D(fVar13,F32LO(dVar15) + fVar13);
          }
          else {
            dVar15 = dVar15 + dVar15;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) / F32LO(dVar15),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 / dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x224) + 0x228) = (int)(D2U(dVar14) >> 0x20);
        }
        else {
          *(double *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x224) + 0x228) = dVar14;
        }
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), rand(((void *)0x8c014200),1,uVar1,ar7));
    *(undefined4 *)(unsigned)((int)pdVar11 + -0x1b4) = uVar2;
    uVar7 = 3;
    uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1b4),3,uVar1,ar7));
    *(undefined4 *)(unsigned)((int)pdVar11 + -0x228) = uVar2;
    *(int *)(unsigned)(ar4 + 0x280) = *(int *)(unsigned)((int)pdVar11 + -0x228) + 1;
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c02a1fc(ar4 + 0x2c8,uVar7,uVar1,ar7));
    break;
  case 1:
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  case 3:
    uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7));
    *(undefined4 *)(unsigned)((int)pdVar11 + -0x1b8) = uVar2;
    iVar4 = *(int *)(unsigned)((int)pdVar11 + -0x1b8);
    if ((iVar4 < 0xb) && (-1 < iVar4)) {
      pcVar5 = (code *)(&(*(undefined1 *)(unsigned)0x8c04a57c))[iVar4];
      switch(iVar4) {
      case 0:
      case 1:
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,pcVar9,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1bc) = uVar2;
        if (*(int *)(unsigned)((int)pdVar11 + -0x1bc) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        }
        *(int *)(unsigned)((int)pdVar11 + -0x22c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(0x3dcccccd,
                                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x22c) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x22c) + 0x28);
          dVar14 = 2.6649806623074442e+256;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) - F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x22c) + 0x28) = fVar13;
          fVar13 = *(float *)(unsigned)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x22c) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        }
        dVar14 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = dVar14;
          }
        }
        break;
      default:
        goto switchD_8c04a56e_caseD_2;
      case 5:
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,pcVar5,pcVar9,ar7));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,pcVar9,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x1ec) = (int)(D2U(dVar14) >> 0x20);
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     *(undefined4 *)(unsigned)((int)pdVar11 + -0x1ec));
        }
        else {
          *(double *)(unsigned)((int)pdVar11 + -0x1ec) = dVar14;
        }
        if (in_FPSCR_PR == '\0' && F32HI(in_dr14) < SUB84(in_dr14,0)) {
          if (in_FPSCR_PR == '\0') {
            bVar20 = SUB84(in_dr14,0) < SUB84(in_dr12,0);
          }
          else {
            bVar20 = in_dr14 < in_dr12;
          }
          if (bVar20) {
            uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7));
            *(undefined4 *)(unsigned)((int)pdVar11 + -0x1f0) = uVar2;
            uVar2 = *(undefined4 *)(unsigned)((int)pdVar11 + -0x1f0);
            uVar1 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,pcVar9,ar7));
            *(undefined4 *)(unsigned)((int)pdVar11 + -500) = uVar1;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_set_xyz((undefined1 *)(unsigned)((int)pdVar11 + -0x110),uVar2,pcVar9,ar7));
            *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -0x110);
            *(unsigned *)(unsigned)((int)pdVar11 + -0x270) = (undefined1 *)(unsigned)((int)pdVar11 + -0x120);
            ar7 = (code *)(ar4 + 0x14);
            pcVar9 = (code *)((int)pdVar11 + -0x40);
            ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar11 + -0x270)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8); FUN_8c031eb0(ar4,ar5,pcVar9,ar7); });
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_assign(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar11 + -0x120),pcVar9,ar7));
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x120),0xffffffff,pcVar9,ar7));
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0x110),0xffffffff,pcVar9,ar7));
            *(int *)(unsigned)((int)pdVar11 + -0x240) = ar4;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x264),
                                        *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x240) + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x240) + 0x28);
              dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x264);
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = F32LO(dVar14) + F32HI(dVar14);
            }
            else {
              fVar13 = SUB84(dVar14 + dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x240) + 0x28) = fVar13;
              dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
            }
            else {
              *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x240) + 0x28) = in_xd0;
              in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
              dVar14 = *(double *)(unsigned)(ar4 + 0x24);
            }
            if (in_FPSCR_PR == '\0' && F32HI(dVar14) < SUB84(dVar14,0)) {
              if (in_FPSCR_SZ == '\0') {
                uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x24);
                dVar14 = CONCAT44D(uVar2,SUB84(dVar14,0));
                *(undefined4 *)(unsigned)(ar4 + 0x28) = uVar2;
              }
              else {
                dVar14 = *(double *)(unsigned)(ar4 + 0x24);
                *(double *)(unsigned)(ar4 + 0x28) = dVar14;
              }
            }
            break;
          }
        }
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c032ab0(ar4,pcVar5,pcVar9,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x1f8) = (int)(D2U(dVar14) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)pdVar11 + -0x1f8) = dVar14;
        }
        *(int *)(unsigned)((int)pdVar11 + -0x244) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1f8),
                                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x244) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x244) + 0x28);
          dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x1f8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) - F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x244) + 0x28) = fVar13;
          fVar13 = *(float *)(unsigned)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x244) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        }
        dVar14 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = dVar14;
          }
        }
        break;
      case 6:
        if (in_FPSCR_SZ == '\0') {
          uVar17 = CONCAT44(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          uVar17 = 0x27840400000;
        }
        if (in_FPSCR_PR == '\0' && F32HI(uVar17) < (float)uVar17) {
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,pcVar5,pcVar9,ar7));
        }
        else {
          uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,pcVar9,ar7));
          *(undefined4 *)(unsigned)((int)pdVar11 + -0x1fc) = uVar2;
          if (*(int *)(unsigned)((int)pdVar11 + -0x1fc) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          }
        }
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,pcVar9,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x200) = (int)((ulonglong)uVar17 >> 0x20);
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     *(undefined4 *)(unsigned)((int)pdVar11 + -0x200));
        }
        else {
          *(undefined8 *)(unsigned)((int)pdVar11 + -0x200) = uVar17;
        }
        if (in_FPSCR_PR == '\0' && F32HI(in_dr14) < SUB84(in_dr14,0)) {
          if (in_FPSCR_PR == '\0') {
            bVar20 = SUB84(in_dr14,0) < SUB84(in_dr12,0);
          }
          else {
            bVar20 = in_dr14 < in_dr12;
          }
          if (bVar20) {
            uVar1 = 6;
            uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,6,pcVar9,ar7));
            *(undefined4 *)(unsigned)((int)pdVar11 + -0x204) = uVar2;
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_set_xyz((undefined1 *)(unsigned)((int)pdVar11 + -300),uVar1,pcVar9,ar7));
            *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -300);
            *(unsigned *)(unsigned)((int)pdVar11 + -0x270) = (undefined1 *)(unsigned)((int)pdVar11 + -0x13c);
            ar7 = (code *)(ar4 + 0x14);
            pcVar9 = (code *)((int)pdVar11 + -0x40);
            ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar11 + -0x270)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8); FUN_8c031eb0(ar4,ar5,pcVar9,ar7); });
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_assign(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar11 + -0x13c),pcVar9,ar7));
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x13c),0xffffffff,pcVar9,ar7));
            (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -300),0xffffffff,pcVar9,ar7));
            *(int *)(unsigned)((int)pdVar11 + -0x248) = ar4;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x264),
                                        *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x248) + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x248) + 0x28);
              dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x264);
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = F32LO(dVar14) + F32HI(dVar14);
            }
            else {
              fVar13 = SUB84(dVar14 + dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x248) + 0x28) = fVar13;
              dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
            }
            else {
              *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x248) + 0x28) = in_xd0;
              in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
              dVar14 = *(double *)(unsigned)(ar4 + 0x24);
            }
            if (in_FPSCR_PR == '\0' && F32HI(dVar14) < SUB84(dVar14,0)) {
              if (in_FPSCR_SZ == '\0') {
                uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x24);
                dVar14 = CONCAT44D(uVar2,SUB84(dVar14,0));
                *(undefined4 *)(unsigned)(ar4 + 0x28) = uVar2;
              }
              else {
                dVar14 = *(double *)(unsigned)(ar4 + 0x24);
                *(double *)(unsigned)(ar4 + 0x28) = dVar14;
              }
            }
            break;
          }
        }
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c032ab0(ar4,pcVar5,pcVar9,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x208) = (int)((ulonglong)uVar17 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)((int)pdVar11 + -0x208) = uVar17;
        }
        *(int *)(unsigned)((int)pdVar11 + -0x24c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x208),
                                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x24c) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x24c) + 0x28);
          dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x208);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) - F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x24c) + 0x28) = fVar13;
          fVar13 = *(float *)(unsigned)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x24c) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        }
        dVar14 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = dVar14;
          }
        }
        break;
      case 7:
      case 8:
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = D2U(dVar14) & 0xffffffff;
        }
        *(int *)(unsigned)((int)pdVar11 + -0x230) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(0x3d4ccccd,
                                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x230) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x230) + 0x28);
          dVar14 = 5.238690701939511e-11;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) + F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 + dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x230) + 0x28) = fVar13;
          fVar13 = *(float *)(unsigned)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x230) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        }
        dVar14 = CONCAT44D(0x3f800000,fVar13);
        if (in_FPSCR_PR == '\0' && 1.0 < fVar13) {
          *(int *)(unsigned)((int)pdVar11 + -0x234) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = CONCAT44D(0x3dcccccd,
                                      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x234) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x234) + 0x28);
            dVar14 = 3.73983522256399e-312;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32HI(dVar14);
            dVar14 = CONCAT44D(fVar13,F32LO(dVar14) - fVar13);
          }
          else {
            dVar14 = dVar14 - dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x234) + 0x28) = SUB84(dVar14,0);
          }
          else {
            *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x234) + 0x28) = in_xd0;
          }
        }
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar9,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x1c0) = (int)(D2U(dVar14) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)pdVar11 + -0x1c0) = dVar14;
        }
        *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -0xac);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),pcVar9,ar7));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), vec3_copy_8c023d8c((undefined1 *)(unsigned)((int)pdVar11 + -0x24),(undefined1 *)(unsigned)((int)pdVar11 + -0xac)
                           ,pcVar9,ar7));
        uVar2 = 0xffffffff;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0xac),0xffffffff,pcVar9,ar7));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,pcVar9,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x1c4) = (int)(D2U(dVar14) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)pdVar11 + -0x1c4) = dVar14;
        }
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,pcVar9,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1c8) = uVar2;
        uVar2 = s_Check_This_Motion_Data_0314fc
                          (ar4 + 0xb0,*(undefined4 *)(unsigned)((int)pdVar11 + -0x1c8),pcVar9,ar7);
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1cc) = uVar2;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1c4),in_fr3);
        }
        else {
          dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x1c4);
        }
        fVar13 = (float)*(int *)(unsigned)((int)pdVar11 + -0x1cc);
        dVar15 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(0x4f800000,fVar13);
          }
          else {
            dVar15 = 2.0000005923211575;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32HI(dVar15);
            dVar15 = CONCAT44D(fVar13,F32LO(dVar15) + fVar13);
          }
          else {
            dVar15 = dVar15 + dVar15;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) / F32LO(dVar15),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 / dVar15;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = 1.0 - F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(CONCAT44D((int)(D2U(dVar15) >> 0x20),0x3f800000) - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(0x40000000,fVar13);
        }
        else {
          dVar14 = 6.03177303581879e-312;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) * F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)pdVar11 + -0x14c) = fVar13;
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c8),
                                    *(undefined4 *)(unsigned)((int)pdVar11 + -0x24));
        }
        else {
          *(undefined8 *)(unsigned)((int)pdVar11 + -0x14c) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x24);
          dVar14 = *(double *)(unsigned)(ar4 + 0x2c8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) - F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar13);
        }
        else {
          dVar14 = *(double *)(unsigned)(ar4 + 0x2c0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) * F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x14c),fVar13);
        }
        else {
          dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x14c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) * F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)pdVar11 + -0x30) = fVar13;
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),
                                    *(undefined4 *)(unsigned)((int)pdVar11 + -0x20));
        }
        else {
          *(undefined8 *)(unsigned)((int)pdVar11 + -0x30) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x20);
          dVar14 = *(double *)(unsigned)(ar4 + 0x2cc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) - F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        ar6_00 = (double *)(unsigned)(ar4 + 0x2c0);
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)ar6_00,fVar13);
        }
        else {
          dVar14 = *ar6_00;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) * F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x14c),fVar13);
        }
        else {
          dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x14c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) * F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)pdVar11 + -0x2c) = fVar13;
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2d0),
                                    *(undefined4 *)(unsigned)((int)pdVar11 + -0x1c));
        }
        else {
          *(undefined8 *)(unsigned)((int)pdVar11 + -0x2c) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x1c);
          dVar14 = *(double *)(unsigned)(ar4 + 0x2d0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) - F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar13);
        }
        else {
          dVar14 = *(double *)(unsigned)(ar4 + 0x2c0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar14) * F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x14c),fVar13);
        }
        else {
          dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x14c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32HI(dVar14);
          dVar14 = CONCAT44D(fVar13,F32LO(dVar14) * fVar13);
        }
        else {
          dVar14 = dVar14 * dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x28) = SUB84(dVar14,0);
        }
        else {
          *(undefined8 *)(unsigned)((int)pdVar11 + -0x28) = in_xd0;
        }
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), vec3_copy_8c023d8c(ar4 + 0x2c8,(undefined1 *)(unsigned)((int)pdVar11 + -0x24),ar6_00,ar7));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), vec3_copy_8c02b5fc((undefined1 *)(unsigned)((int)pdVar11 + -0xb8),(undefined1 *)(unsigned)((int)pdVar11 + -0x30)
                           ,ar6_00,ar7));
        *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -200);
        ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)pdVar11 + -0x26c)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8); FUN_8c023484(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar11 + -0xb8),ar6_00,ar7); });
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_assign(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar11 + -200),ar6_00,ar7));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -200),0xffffffff,ar6_00,ar7));
        uVar2 = 0xffffffff;
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0xb8),0xffffffff,ar6_00,ar7));
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_set_xyz((undefined1 *)(unsigned)((int)pdVar11 + -0xd4),uVar2,ar6_00,ar7));
        *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -0xd4);
        *(unsigned *)(unsigned)((int)pdVar11 + -0x270) = (undefined1 *)(unsigned)((int)pdVar11 + -0xe4);
        iVar4 = ar4 + 0x14;
        puVar8 = (undefined1 *)(unsigned)((int)pdVar11 + -0x40);
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar11 + -0x270)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8); FUN_8c031eb0(ar4,ar5,puVar8,iVar4); });
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_assign(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar11 + -0xe4),puVar8,iVar4));
        puVar8 = (undefined1 *)(unsigned)((int)pdVar11 + -0xe4);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor(puVar8,0xffffffff,puVar8,iVar4));
        uVar1 = 0xffffffff;
        ar7 = ((void *)0x8c014a34);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0xd4),0xffffffff,puVar8,((void *)0x8c014a34)
                          ));
        pcVar9 = (code *)(ar4 + 0x14);
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_length(pcVar9,uVar1,pcVar9,ar7));
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar1,pcVar9,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1d0) = uVar2;
        if (*(int *)(unsigned)((int)pdVar11 + -0x1d0) == 1) {
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c0231c8((undefined1 *)(unsigned)((int)pdVar11 + -0x50),uVar1,pcVar9,ar7));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar11 + -0x1d4) = (int)(D2U(dVar14) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar11 + -0x1d4) = dVar14;
          }
          iVar4 = ar4 + 0x14;
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c0231c8(iVar4,uVar1,pcVar9,ar7));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar11 + -0x1d8) = (int)(D2U(dVar14) >> 0x20);
            uVar17 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1d8),SUB84(dVar14,0));
          }
          else {
            *(double *)(unsigned)((int)pdVar11 + -0x1d8) = dVar14;
            uVar17 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x1d8);
          }
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c010e38(iVar4,uVar1,pcVar9,ar7));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar11 + -0x1dc) = (int)((ulonglong)uVar17 >> 0x20);
          }
          else {
            *(undefined8 *)(unsigned)((int)pdVar11 + -0x1dc) = uVar17;
          }
          uVar2 = 0x228;
          if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1dc),(int)uVar17);
            *(undefined4 *)(unsigned)(ar4 + 0x228) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x1dc);
          }
          else {
            uVar17 = *(undefined8 *)(unsigned)((int)pdVar11 + -0x1dc);
            *(undefined8 *)(unsigned)(ar4 + 0x228) = uVar17;
          }
          *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -0xf4);
          ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar11 + -0x26c)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8); FUN_8c0230f0(ar4 + 0x14,0x228,pcVar9,ar7); });
          *(unsigned *)(unsigned)((int)pdVar11 + -0x26c) = (undefined1 *)(unsigned)((int)pdVar11 + -0x104);
          ({ unsigned long t0_ = (unsigned long)(
                       *(undefined4 *)(unsigned)((int)pdVar11 + -0x26c)); *(unsigned *)(((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)) - 8); FUN_8c0230f0((undefined1 *)(unsigned)((int)pdVar11 + -0x50),uVar2,pcVar9,ar7); });
          ar7 = (code *)((int)pdVar11 + -0xf4);
          pcVar9 = ((void *)0x8c022dac);
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c022dac(ar7,(undefined1 *)(unsigned)((int)pdVar11 + -0x104),((void *)0x8c022dac),ar7));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar11 + -0x1e0) = (int)((ulonglong)uVar17 >> 0x20);
            dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -0x1e0),(int)uVar17);
            *(undefined4 *)(unsigned)(ar4 + 0x224) = *(undefined4 *)(unsigned)((int)pdVar11 + -0x1e0);
          }
          else {
            *(undefined8 *)(unsigned)((int)pdVar11 + -0x1e0) = uVar17;
            dVar14 = *(double *)(unsigned)((int)pdVar11 + -0x1e0);
            *(double *)(unsigned)(ar4 + 0x224) = dVar14;
          }
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x104),0xffffffff,pcVar9,ar7));
          (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0xf4),0xffffffff,pcVar9,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        }
        break;
      case 10:
        (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,pcVar9,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar11 + -0x1e4) = (int)(D2U(dVar14) >> 0x20);
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     *(undefined4 *)(unsigned)((int)pdVar11 + -0x1e4));
        }
        else {
          *(double *)(unsigned)((int)pdVar11 + -0x1e4) = dVar14;
        }
        if (in_FPSCR_PR != '\0' || SUB84(in_dr14,0) <= F32HI(in_dr14)) {
LAB_8c04aa78:
          *(int *)(unsigned)((int)pdVar11 + -0x23c) = ar4;
          ar7 = (code *)(*(int *)(unsigned)((int)pdVar11 + -0x23c) + 0x28);
          pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar11 + -0x23c));
          pcVar5 = pcVar9 + 0x28;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = CONCAT44D(0x3c23d70a,*(float *)(unsigned)pcVar5);
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)pcVar5;
            dVar14 = 3.73969762439725e-312;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32LO(dVar14) - F32HI(dVar14);
          }
          else {
            fVar13 = SUB84(dVar14 - dVar14,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)ar7 = fVar13;
            fVar13 = *(float *)(unsigned)(ar4 + 0x28);
          }
          else {
            *(undefined8 *)(unsigned)ar7 = in_xd0;
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          }
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            dVar14 = (double)(ulonglong)(uint)fVar13;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
            }
            else {
              *(double *)(unsigned)(ar4 + 0x28) = dVar14;
            }
          }
        }
        else {
          if (in_FPSCR_PR == '\0') {
            bVar20 = SUB84(in_dr14,0) < SUB84(in_dr12,0);
          }
          else {
            bVar20 = in_dr14 < in_dr12;
          }
          if (!bVar20) goto LAB_8c04aa78;
          *(int *)(unsigned)((int)pdVar11 + -0x238) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = CONCAT44D(0x40000000,
                                      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x238) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x238) + 0x28);
            dVar14 = 6.6797933913687535e+115;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32LO(dVar14) + F32HI(dVar14);
          }
          else {
            fVar13 = SUB84(dVar14 + dVar14,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x238) + 0x28) = fVar13;
            dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x238) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar14 = *(double *)(unsigned)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && F32HI(dVar14) < SUB84(dVar14,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x24);
              dVar14 = CONCAT44D(uVar2,SUB84(dVar14,0));
              *(undefined4 *)(unsigned)(ar4 + 0x28) = uVar2;
            }
            else {
              dVar14 = *(double *)(unsigned)(ar4 + 0x24);
              *(double *)(unsigned)(ar4 + 0x28) = dVar14;
            }
          }
        }
        uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,pcVar9,ar7));
        *(undefined4 *)(unsigned)((int)pdVar11 + -0x1e8) = uVar2;
        if (*(int *)(unsigned)((int)pdVar11 + -0x1e8) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        }
      }
    }
    else {
switchD_8c04a56e_caseD_2:
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar5,pcVar9,ar7));
      *(undefined4 *)(unsigned)((int)pdVar11 + -0x20c) = uVar2;
      if (*(int *)(unsigned)((int)pdVar11 + -0x20c) == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
    }
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c022fc0(ar5,ar6,pcVar9,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar11 + -0x210) = (int)(D2U(dVar14) >> 0x20);
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      *(double *)(unsigned)((int)pdVar11 + -0x210) = dVar14;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      dVar14 = *(double *)(unsigned)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32LO(dVar14) + F32HI(dVar14);
    }
    else {
      fVar13 = SUB84(dVar14 + dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar11 + -0x210),fVar13);
    }
    else {
      uVar16 = *(ulonglong *)(unsigned)((int)pdVar11 + -0x210);
    }
    if (in_FPSCR_PR != '\0' || (float)(uVar16 >> 0x20) <= (float)uVar16) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar16 & 0xffffffff;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar14 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = F32LO(dVar14) / F32HI(dVar14);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(ar4 + 0x3c) = fVar13;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x3c) = in_xd0;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
    }
    break;
  case 4:
    pcVar9 = ((void *)0x8c026da8);
    (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,((void *)0x8c026da8),ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar11 + -0x214) = (int)(D2U(dVar14) >> 0x20);
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)((int)pdVar11 + -0x214));
    }
    else {
      *(double *)(unsigned)((int)pdVar11 + -0x214) = dVar14;
    }
    uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7));
    fVar13 = F32LO(dVar14);
    *(undefined4 *)(unsigned)((int)pdVar11 + -0x218) = uVar2;
    fVar19 = F32HI(in_dr14);
    fVar18 = F32LO(in_dr14);
    if (*(int *)(unsigned)((int)pdVar11 + -0x218) == 5) {
      if (in_FPSCR_PR == '\0' && fVar19 < fVar18) {
        if (in_FPSCR_PR == '\0') {
          bVar20 = fVar18 < SUB84(in_dr12,0);
        }
        else {
          bVar20 = in_dr14 < in_dr12;
        }
        if (bVar20) {
          *(int *)(unsigned)((int)pdVar11 + -0x250) = ar4;
          pcVar5 = (code *)(*(int *)(unsigned)((int)pdVar11 + -0x250) + 0x28);
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)(unsigned)pcVar5;
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)pcVar5;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = fVar13 + 1.0;
          }
          else {
            fVar13 = SUB84(CONCAT44D(0x3f800000,fVar13) + CONCAT44D(0x3f800000,fVar13)
                           ,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x250) + 0x28) = fVar13;
            uVar17 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x250) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            uVar17 = *(undefined8 *)(unsigned)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && F32HI(uVar17) < (float)uVar17) {
            pcVar5 = (code *)(ar4 + 0x24);
            if (in_FPSCR_SZ == '\0') {
              *(float *)(unsigned)(ar4 + 0x28) = *(float *)(unsigned)pcVar5;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)pcVar5;
            }
          }
        }
      }
    }
    else if ((*(int *)(unsigned)((int)pdVar11 + -0x218) == 6) && (in_FPSCR_PR == '\0' && fVar19 < fVar18)) {
      if (in_FPSCR_PR == '\0') {
        bVar20 = fVar18 < SUB84(in_dr12,0);
      }
      else {
        bVar20 = in_dr14 < in_dr12;
      }
      if (bVar20) {
        *(int *)(unsigned)((int)pdVar11 + -0x254) = ar4;
        if (in_FPSCR_SZ == '\0') {
          fVar13 = *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x254) + 0x28);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x254) + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = fVar13 + 1.0;
        }
        else {
          fVar13 = SUB84(CONCAT44D(0x3f800000,fVar13) + CONCAT44D(0x3f800000,fVar13),0
                        );
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x254) + 0x28) = fVar13;
          uVar17 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -0x254) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          uVar17 = *(undefined8 *)(unsigned)(ar4 + 0x24);
        }
        pcVar5 = (code *)(ar4 + 0x24);
        if (in_FPSCR_PR == '\0' && F32HI(uVar17) < (float)uVar17) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)(ar4 + 0x24);
          }
        }
      }
    }
    *(int *)(unsigned)((int)pdVar11 + -600) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x3c),
                                *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -600) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -600) + 0x28);
      dVar14 = *(double *)(unsigned)(ar4 + 0x3c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32LO(dVar14) - F32HI(dVar14);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -600) + 0x28) = fVar13;
      fVar13 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar11 + -600) + 0x28) = in_xd0;
    }
    if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar13;
      }
    }
    ar7 = (code *)0xb0;
    uVar2 = (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,ar4 + 0xb0,0xb0));
    *(undefined4 *)(unsigned)((int)pdVar11 + -0x21c) = uVar2;
    if (*(int *)(unsigned)((int)pdVar11 + -0x21c) == 1) {
      (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c02a1fc(ar4 + 0x2c8,uVar2,((void *)0x8c02a1fc),ar7));
      uVar10 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      ar7 = (code *)(ar4 + 0x2c);
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)ar7 = 0.0;
      }
      else {
        *(ulonglong *)(unsigned)ar7 = (ulonglong)(uint)fVar13;
      }
    }
  }
override_jmp_8c049e5a_case_2:
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar4 + 0x14,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), FUN_8c051a68(ar4,(undefined1 *)(unsigned)((int)pdVar11 + -0x40),ar5,ar7));
  *(undefined4 *)(unsigned)((int)pdVar11 + -0x154) = uVar10;
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x60),0xffffffff,ar5,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x50),0xffffffff,ar5,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar11 + -0x40),0xffffffff,ar5,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0x30),0xffffffff,ar5,ar7));
  (vsp = (pdVar11 ? (unsigned long)pdVar11 - 624 : (unsigned long)(fr0_ - 644)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar11 + -0x24),0xffffffff,ar5,ar7));
  return *(undefined4 *)(unsigned)((int)pdVar11 + -0x154);
}

__asm__(".globl _FUN_8c049b68\n.set _FUN_8c049b68, _FUN_8c049b68_def\n");
//@unit 8c04b168
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
undefined4 FUN_8c04b168_def(int ar4,undefined8 *ar5,code *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c04b168";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 580; for (int i_ = 0; i_ < 580; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined *ar4_00;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *ar5_00;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 ar7_00;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 uVar9;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  double *pdVar10;
  uint uVar11;
  float fVar12;
  undefined8 in_dr0 = 0;
  double dVar13;
  ulonglong uVar14;
  float fVar16;
  undefined8 uVar15;
  undefined4 in_fr3 = 0;
  undefined8 in_dr6 = 0;
  double in_dr12 = 0;
  double in_dr14 = 0;
  double dVar17;
  undefined8 in_xd0 = 0;
  undefined8 in_xd6 = 0;
  undefined8 in_xd14 = 0;
  bool bVar18;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar10 = &(*(double *)(fr0_ - 0x10));
    (*(double *)(fr0_ - 0x10)) = CONCAT44D(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar10 = (double *)(unsigned)((undefined1 *)(fr0_ - 0x20));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
    (*(double *)(fr0_ - 0x10)) = in_dr14;
  }
  *(undefined4 *)(unsigned)((int)pdVar10 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)pdVar10 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)pdVar10 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)((int)pdVar10 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)((int)pdVar10 + -0x14) = unaff_r10;
  *(undefined4 *)(unsigned)((int)pdVar10 + -0x18) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pdVar10 + -0x228) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)(unsigned)((int)pdVar10 + -0x224) = (int)in_dr6;
  }
  else {
    *(undefined8 *)(unsigned)((int)pdVar10 + -0x228) = in_dr6;
    *(undefined8 *)(unsigned)((int)pdVar10 + -0x224) = in_xd6;
  }
  uVar9 = 1;
  pcVar7 = ar6;
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)pdVar10 + -0x28),ar5,ar6,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar10 + -0x38),ar6,pcVar7,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c022fc0(ar5,(undefined1 *)(unsigned)((int)pdVar10 + -0x38),pcVar7,ar7));
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pdVar10 + -0x160) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -0x160),(int)in_dr0);
    *(undefined4 *)(unsigned)((int)pdVar10 + -0x134) = *(undefined4 *)(unsigned)((int)pdVar10 + -0x160);
  }
  else {
    *(undefined8 *)(unsigned)((int)pdVar10 + -0x160) = in_dr0;
    dVar13 = *(double *)(unsigned)((int)pdVar10 + -0x160);
    *(double *)(unsigned)((int)pdVar10 + -0x134) = dVar13;
  }
  *(unsigned *)(unsigned)((int)pdVar10 + -0x22c) = (undefined1 *)(unsigned)((int)pdVar10 + -0x80);
  puVar3 = ar5;
  ({ unsigned long t0_ = (unsigned long)(
           *(undefined4 *)(unsigned)((int)pdVar10 + -0x22c)); *(unsigned *)(((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8); Vec3_sub((undefined1 *)(unsigned)((int)pdVar10 + -0x38),ar5,pcVar7,ar7); });
  *(unsigned *)(unsigned)((int)pdVar10 + -0x22c) = (undefined1 *)(unsigned)((int)pdVar10 + -0x90);
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_normalize((undefined1 *)(unsigned)((int)pdVar10 + -0x80),puVar3,pcVar7,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar10 + -0x48),(undefined1 *)(unsigned)((int)pdVar10 + -0x90),pcVar7,
                 ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x90),0xffffffff,pcVar7,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x80),0xffffffff,pcVar7,ar7));
  puVar3 = ar5;
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)pdVar10 + -0x58),ar5,pcVar7,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_set_zero((undefined1 *)(unsigned)((int)pdVar10 + -100),puVar3,pcVar7,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_set_zero((undefined1 *)(unsigned)((int)pdVar10 + -0x70),puVar3,pcVar7,ar7));
  if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = CONCAT44D(0x40800000,SUB84(in_dr14,0));
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x138) = 0x41c80000;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x13c) = 0x42040000;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x140) = 0x41200000;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x144) = 0x429e0000;
      in_dr12 = 16777220.078125;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x150) = 0x41c80000;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x148) = 0x41f00000;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x14c) = 0x42200000;
      dVar13 = CONCAT44D(0x41700000,SUB84(dVar13,0));
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x154) = 0x41700000;
    }
    else {
      in_dr14 = 2097152.50390625;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x138) = 0xf041c80000;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x13c) = 0xec42040000;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x140) = 0xe841200000;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x144) = 0xe4429e0000;
      in_dr12 = 4.58893505299949e-312;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x150) = 0xf041c80000;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x148) = 0xe041f00000;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x14c) = 0xdc42200000;
      dVar13 = 4.58893505299949e-312;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x154) = 0xd841700000;
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x128) == 4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = CONCAT44D(0x41700000,SUB84(in_dr14,0));
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x138) = 0x420c0000;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x13c) = 0x42280000;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x140) = 0x41200000;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x144) = 0x429e0000;
      in_dr12 = 8388610.052734375;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x150) = 0x41c80000;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x148) = 0x420c0000;
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x14c) = 0x42280000;
      dVar13 = CONCAT44D(0x41700000,SUB84(dVar13,0));
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x154) = 0x41700000;
    }
    else {
      in_dr14 = 268435521.4375;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x138) = 0xf0420c0000;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x13c) = 0xec42280000;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x140) = 0xe841200000;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x144) = 0xe4429e0000;
      in_dr12 = 805306498.75;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x150) = 0xd841c80000;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x148) = 0xf0420c0000;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x14c) = 0xec42280000;
      dVar13 = 268435521.4375;
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x154) = 0x41b0000041700000;
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar1) || (iVar1 < 0)) goto switchD_8c04b39c_caseD_2;
                    
  switch(iVar1) {
  case 0:
    uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c05c28c(ar4,iVar1 * 4,pcVar7,ar7));
    *(undefined4 *)(unsigned)((int)pdVar10 + -0x164) = uVar5;
    if (*(int *)(unsigned)((int)pdVar10 + -0x164) != 0) {
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x158) = 1;
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar10 + -0x70),0xffffffff,pcVar7,ar7));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar10 + -100),0xffffffff,pcVar7,ar7));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x58),0xffffffff,pcVar7,ar7));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x48),0xffffffff,pcVar7,ar7));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x38),0xffffffff,pcVar7,ar7));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x28),0xffffffff,pcVar7,ar7));
      return *(undefined4 *)(unsigned)((int)pdVar10 + -0x158);
    }
    if (*(int *)(unsigned)(ar4 + 0x1b8) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x18c) = *(undefined4 *)(unsigned)ar5;
        *(undefined4 *)(unsigned)(ar4 + 400) = *(undefined4 *)(unsigned)((int)ar5 + 4);
        *(undefined4 *)(unsigned)(ar4 + 0x194) = *(undefined4 *)(unsigned)(ar5 + 1);
        *(undefined4 *)(unsigned)(ar4 + 0x198) = *(undefined4 *)(unsigned)((int)pdVar10 + -0x38);
        *(undefined4 *)(unsigned)(ar4 + 0x19c) = *(undefined4 *)(unsigned)((int)pdVar10 + -0x34);
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -0x30),SUB84(dVar13,0));
        *(undefined4 *)(unsigned)(ar4 + 0x1a0) = *(undefined4 *)(unsigned)((int)pdVar10 + -0x30);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x18c) = *ar5;
        *(undefined8 *)(unsigned)(ar4 + 400) = *(undefined8 *)(unsigned)((int)ar5 + 4);
        *(undefined8 *)(unsigned)(ar4 + 0x194) = ar5[1];
        *(undefined8 *)(unsigned)(ar4 + 0x198) = *(undefined8 *)(unsigned)((int)pdVar10 + -0x38);
        *(undefined8 *)(unsigned)(ar4 + 0x19c) = *(undefined8 *)(unsigned)((int)pdVar10 + -0x34);
        dVar13 = *(double *)(unsigned)((int)pdVar10 + -0x30);
        *(double *)(unsigned)(ar4 + 0x1a0) = dVar13;
      }
    }
    uVar11 = SUB84(dVar13,0);
    (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c03c314(ar4,((void *)0x8c03c314),pcVar7,ar7));
    uVar14 = (ulonglong)uVar11;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar14;
    }
    *(undefined4 *)(unsigned)((int)pdVar10 + -0x1fc) = *(undefined4 *)(unsigned)(ar4 + 0x128);
    (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c031b68(ar4,(*(int *)(unsigned)((int)pdVar10 + -0x1fc) * 2 + *(int *)(unsigned)((int)pdVar10 + -0x1fc)) * 8 +
                     -0x73d7fc0c,pcVar7,ar7));
    uVar11 = (uint)uVar14;
    puVar6 = (undefined1 *)(unsigned)((int)pdVar10 + -0x38);
    puVar3 = ar5;
    (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c031bb4(ar4,ar5,puVar6,ar7));
    uVar14 = (ulonglong)uVar11;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar14;
    }
    (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c0231c8((undefined1 *)(unsigned)((int)pdVar10 + -0x48),puVar3,puVar6,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar10 + -0x168) = (int)(uVar14 >> 0x20);
    }
    else {
      *(ulonglong *)(unsigned)((int)pdVar10 + -0x168) = uVar14;
    }
    iVar1 = ar4 + 0x14;
    (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c0231c8(iVar1,puVar3,puVar6,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar10 + -0x16c) = (int)(uVar14 >> 0x20);
      uVar15 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + -0x16c),(int)uVar14);
    }
    else {
      *(ulonglong *)(unsigned)((int)pdVar10 + -0x16c) = uVar14;
      uVar15 = *(undefined8 *)(unsigned)((int)pdVar10 + -0x16c);
    }
    ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar10 + -0x228)); vin0 = (unsigned)ri0_; vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)); FUN_8c010e38(iVar1,puVar3,puVar6,ar7); });
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar10 + -0x170) = (int)((ulonglong)uVar15 >> 0x20);
    }
    else {
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x170) = uVar15;
    }
    uVar5 = 0x228;
    if (in_FPSCR_SZ == '\0') {
      uVar4 = *(undefined4 *)(unsigned)((int)pdVar10 + -0x170);
      uVar15 = CONCAT44(uVar4,(int)uVar15);
      *(undefined4 *)(unsigned)(ar4 + 0x228) = uVar4;
    }
    else {
      uVar15 = *(undefined8 *)(unsigned)((int)pdVar10 + -0x170);
      *(undefined8 *)(unsigned)(ar4 + 0x228) = uVar15;
    }
    *(unsigned *)(unsigned)((int)pdVar10 + -0x22c) = (undefined1 *)(unsigned)((int)pdVar10 + -0xa0);
    ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar10 + -0x22c)); *(unsigned *)(((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8); FUN_8c0230f0(ar4 + 0x14,0x228,puVar6,ar7); });
    *(unsigned *)(unsigned)((int)pdVar10 + -0x22c) = (undefined1 *)(unsigned)((int)pdVar10 + -0xb0);
    ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)pdVar10 + -0x22c)); *(unsigned *)(((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8); FUN_8c0230f0((undefined1 *)(unsigned)((int)pdVar10 + -0x48),uVar5,puVar6,ar7); });
    (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c022dac((undefined1 *)(unsigned)((int)pdVar10 + -0xa0),(undefined1 *)(unsigned)((int)pdVar10 + -0xb0),puVar6,
                 ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar10 + -0x174) = (int)((ulonglong)uVar15 >> 0x20);
      uVar15 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + -0x174),(int)uVar15);
      *(undefined4 *)(unsigned)(ar4 + 0x224) = *(undefined4 *)(unsigned)((int)pdVar10 + -0x174);
    }
    else {
      *(undefined8 *)(unsigned)((int)pdVar10 + -0x174) = uVar15;
      uVar15 = *(undefined8 *)(unsigned)((int)pdVar10 + -0x174);
      *(undefined8 *)(unsigned)(ar4 + 0x224) = uVar15;
    }
    uVar5 = (undefined4)uVar15;
    pcVar7 = ((void *)0x8c022cb0);
    (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0xb0),0xffffffff,((void *)0x8c022cb0),ar7));
    (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0xa0),0xffffffff,pcVar7,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
      uVar15 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x220),*(undefined4 *)(unsigned)(ar4 + 0x24));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar5);
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x24);
      uVar15 = *(undefined8 *)(unsigned)(ar4 + 0x220);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar15 < F32HI(uVar15)) {
      ar7 = (code *)0x0;
      pcVar7 = (code *)0xffffffff;
      uVar4 = 6;
      ar4_00 = (undefined *)(unsigned)(ar4 + 0xb0);
      uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), s_CAnimBody_SetAnimation_033a94(ar4_00,6,0xffffffff,0));
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x178) = uVar5;
      if (*(int *)(unsigned)((int)pdVar10 + -0x178) != 6) {
        ar4_00 = (undefined *)(unsigned)(ar4 + 0xb0);
        (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), s_CAnimBody_SetFrame_033e6e(ar4_00,uVar4,pcVar7,ar7));
      }
    }
    else {
      ar7 = (code *)0x0;
      pcVar7 = (code *)0xffffffff;
      uVar4 = 10;
      ar4_00 = (undefined *)(unsigned)(ar4 + 0xb0);
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), s_CAnimBody_SetAnimation_033a94(ar4_00,10,0xffffffff,0));
    }
    if (in_FPSCR_SZ == '\0') {
      fVar12 = *(float *)(unsigned)(ar4 + 0x224);
      fVar16 = 45.0;
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
      fVar12 = 45.0;
      fVar16 = 6.72623e-43;
    }
    if (in_FPSCR_PR == '\0' && fVar16 < fVar12) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar13 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = F32LO(dVar13) / F32HI(dVar13);
      }
      else {
        fVar12 = SUB84(dVar13 / dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(ar4 + 0x3c) = fVar12;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x3c) = in_xd0;
      }
      uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c023334(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar10 + -0x48),pcVar7,ar7));
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x17c) = uVar5;
      *(undefined4 *)(unsigned)(ar4 + 0x27c) = *(undefined4 *)(unsigned)((int)pdVar10 + -0x17c);
      if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
        ar7_00 = 0;
        uVar8 = 0xffffffff;
        uVar4 = 7;
        uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
        *(undefined4 *)(unsigned)((int)pdVar10 + -0x180) = uVar5;
        iVar1 = *(int *)(unsigned)((int)pdVar10 + -0x180);
        uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c026db0(ar4,uVar4,uVar8,ar7_00));
        *(undefined4 *)(unsigned)((int)pdVar10 + -0x184) = uVar5;
        uVar4 = *(undefined4 *)(unsigned)((int)pdVar10 + -0x184);
        uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c03c0f0(ar4 + 0xb0,uVar4,uVar8,ar7_00));
        *(undefined4 *)(unsigned)((int)pdVar10 + -0x188) = uVar5;
        uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), deref_u32(*(undefined4 *)(unsigned)((int)pdVar10 + -0x188),uVar4,uVar8,ar7_00));
        *(undefined4 *)(unsigned)((int)pdVar10 + -0x18c) = uVar5;
        ar7 = (code *)(ar4 + 0xb4);
        pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar10 + -0x18c));
        uVar4 = *(undefined4 *)(unsigned)(pcVar7 + 4);
        *(undefined4 *)(unsigned)ar7 = *(undefined4 *)(unsigned)pcVar7;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar4;
        ar4_00 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(pcVar7 + 8));
        *(unsigned *)(unsigned)(ar4 + 0xbc) = ar4_00;
        if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c135fdc);
        }
        else {
          ar4_00 = ((undefined1 *)(unsigned)0x8c1362c4);
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1362c4);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c0) = *(undefined4 *)(unsigned)(ar4 + 0x224);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c0) = *(undefined8 *)(unsigned)(ar4 + 0x224);
        }
      }
      else {
        ar7 = (code *)0x0;
        pcVar7 = (code *)0xffffffff;
        uVar4 = 8;
        uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
        *(undefined4 *)(unsigned)((int)pdVar10 + -400) = uVar5;
        iVar1 = *(int *)(unsigned)((int)pdVar10 + -400);
        uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c026db0(ar4,uVar4,pcVar7,ar7));
        *(undefined4 *)(unsigned)((int)pdVar10 + -0x194) = uVar5;
        uVar4 = *(undefined4 *)(unsigned)((int)pdVar10 + -0x194);
        uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c03c0f0(ar4 + 0xb0,uVar4,pcVar7,ar7));
        *(undefined4 *)(unsigned)((int)pdVar10 + -0x198) = uVar5;
        uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), deref_u32(*(undefined4 *)(unsigned)((int)pdVar10 + -0x198),uVar4,pcVar7,ar7));
        *(undefined4 *)(unsigned)((int)pdVar10 + -0x19c) = uVar5;
        puVar2 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar10 + -0x19c));
        uVar4 = puVar2[1];
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar4;
        ar4_00 = (undefined *)(unsigned)puVar2[2];
        *(unsigned *)(unsigned)(ar4 + 0xbc) = ar4_00;
        if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c135ff4);
        }
        else {
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1362dc);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c0) = *(undefined4 *)(unsigned)(ar4 + 0x224);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c0) = *(undefined8 *)(unsigned)(ar4 + 0x224);
        }
      }
      if (iVar1 != 6) {
        ar4_00 = (undefined *)(unsigned)(ar4 + 0xb0);
        (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), s_CAnimBody_SetFrame_033e6e(ar4_00,uVar4,pcVar7,ar7));
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f333333;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x278) = 0x2b83f333333;
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), rand(ar4_00,uVar4,pcVar7,ar7));
    *(undefined4 *)(unsigned)((int)pdVar10 + -0x1a0) = uVar5;
    uVar4 = 3;
    uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)((int)pdVar10 + -0x1a0),3,pcVar7,ar7));
    *(undefined4 *)(unsigned)((int)pdVar10 + -0x200) = uVar5;
    *(int *)(unsigned)(ar4 + 0x280) = *(int *)(unsigned)((int)pdVar10 + -0x200) + 1;
    (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c02a1fc(ar4 + 0x2c8,uVar4,pcVar7,ar7));
    break;
  case 1:
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
  case 3:
    uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), get_field_1c_026dd8(ar4 + 0xb0,iVar1 * 4,pcVar7,ar7));
    uVar4 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    *(undefined4 *)(unsigned)((int)pdVar10 + -0x1a4) = uVar5;
    iVar1 = *(int *)(unsigned)((int)pdVar10 + -0x1a4);
    if (iVar1 == 5) {
      uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), get_field_1c_026dd8(ar4 + 0xb0,uVar5,pcVar7,ar7));
      uVar11 = SUB84(dVar13,0);
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x1c0) = uVar5;
      uVar5 = s_Check_This_Motion_Data_0314fc
                        (ar4 + 0xb0,*(undefined4 *)(unsigned)((int)pdVar10 + -0x1c0),pcVar7,ar7);
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x1c4) = uVar5;
      fVar12 = (float)*(int *)(unsigned)((int)pdVar10 + -0x1c4);
      dVar17 = CONCAT44D(uVar4,fVar12);
      dVar13 = (double)(ulonglong)uVar11;
      if (in_FPSCR_PR == '\0') {
        bVar18 = fVar12 < 0.0;
      }
      else {
        bVar18 = dVar17 < dVar13;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = CONCAT44D(0x4f800000,uVar11);
        }
        else {
          dVar13 = 1.16351267261062e-311;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = CONCAT44D(uVar4,fVar12 + F32HI(dVar13));
        }
        else {
          dVar17 = dVar17 + dVar13;
        }
      }
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_set_xyz((undefined1 *)(unsigned)((int)pdVar10 + -0x104),0x228,pcVar7,ar7));
      *(unsigned *)(unsigned)((int)pdVar10 + -0x22c) = (undefined1 *)(unsigned)((int)pdVar10 + -0x104);
      *(unsigned *)(unsigned)((int)pdVar10 + -0x230) = (undefined1 *)(unsigned)((int)pdVar10 + -0x114);
      iVar1 = ar4 + 0x14;
      puVar6 = (undefined1 *)(unsigned)((int)pdVar10 + -0x38);
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar10 + -0x230)); *(unsigned *)(((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8); FUN_8c031eb0(ar4,ar5,puVar6,iVar1); });
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_assign(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar10 + -0x114),puVar6,iVar1));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x114),0xffffffff,puVar6,iVar1));
      pcVar7 = ((void *)0x8c014a34);
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar10 + -0x104),0xffffffff,((void *)0x8c014a34),
                         (undefined1 *)(unsigned)((int)pdVar10 + -0x104)));
      ar7 = ((void *)0x8c033b98);
      pcVar7 = (code *)s_CAnimBody_AdvanceFrame_033ba0
                                 (ar4 + 0xb0,0x278,pcVar7,((void *)0x8c033b98));
      *(unsigned *)(unsigned)((int)pdVar10 + -0x1c8) = pcVar7;
      iVar1 = *(int *)(unsigned)((int)pdVar10 + -0x1c8);
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
      ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar10 + -0x228)); vin0 = (unsigned)ri0_; vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,pcVar7,ar7); });
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar10 + -0x1cc) = (int)(D2U(dVar13) >> 0x20);
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                  *(undefined4 *)(unsigned)((int)pdVar10 + -0x1cc));
      }
      else {
        *(double *)(unsigned)((int)pdVar10 + -0x1cc) = dVar13;
      }
      if (in_FPSCR_PR == '\0' && F32HI(dVar17) < SUB84(dVar17,0)) {
        if (in_FPSCR_PR == '\0') {
          bVar18 = SUB84(dVar17,0) < SUB84(in_dr12,0);
        }
        else {
          bVar18 = dVar17 < in_dr12;
        }
        if (bVar18) {
          *(int *)(unsigned)((int)pdVar10 + -0x208) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(0x3e4ccccd,
                                      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x208) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x208) + 0x28);
            dVar13 = -5.8130718906204204e+255;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = F32LO(dVar13) + F32HI(dVar13);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x208) + 0x28) = fVar12;
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x208) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar13 = *(double *)(unsigned)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && F32HI(dVar13) < SUB84(dVar13,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x24);
              dVar13 = CONCAT44D(uVar5,SUB84(dVar13,0));
              *(undefined4 *)(unsigned)(ar4 + 0x28) = uVar5;
            }
            else {
              dVar13 = *(double *)(unsigned)(ar4 + 0x24);
              *(double *)(unsigned)(ar4 + 0x28) = dVar13;
            }
          }
          goto LAB_8c04c060;
        }
      }
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c032ab0(ar4,iVar1,pcVar7,ar7));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar10 + -0x1d0) = (int)(D2U(dVar13) >> 0x20);
      }
      else {
        *(double *)(unsigned)((int)pdVar10 + -0x1d0) = dVar13;
      }
      *(int *)(unsigned)((int)pdVar10 + -0x20c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -0x1d0),
                                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x20c) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x20c) + 0x28);
        dVar13 = *(double *)(unsigned)((int)pdVar10 + -0x1d0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = F32LO(dVar13) - F32HI(dVar13);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x20c) + 0x28) = fVar12;
        fVar12 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x20c) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
      dVar13 = (double)(ulonglong)(uint)fVar12;
      if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
        ar7 = (code *)(ar4 + 0x28);
        dVar13 = (double)(ulonglong)(uint)fVar12;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)ar7 = 0;
        }
        else {
          *(double *)(unsigned)ar7 = dVar13;
        }
      }
    }
    else if (iVar1 == 6) {
      uVar8 = 0xb0;
      uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), get_field_1c_026dd8(ar4 + 0xb0,ar4 + 0xb0,0xb0,ar7));
      uVar11 = SUB84(dVar13,0);
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x1d4) = uVar5;
      uVar5 = s_Check_This_Motion_Data_0314fc
                        (ar4 + 0xb0,*(undefined4 *)(unsigned)((int)pdVar10 + -0x1d4),uVar8,ar7);
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x1d8) = uVar5;
      fVar12 = (float)*(int *)(unsigned)((int)pdVar10 + -0x1d8);
      dVar17 = CONCAT44D(uVar4,fVar12);
      dVar13 = (double)(ulonglong)uVar11;
      if (in_FPSCR_PR == '\0') {
        bVar18 = fVar12 < 0.0;
      }
      else {
        bVar18 = dVar17 < dVar13;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = CONCAT44D(0x4f800000,uVar11);
        }
        else {
          dVar13 = 1.16351267261062e-311;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = CONCAT44D(uVar4,fVar12 + F32HI(dVar13));
        }
        else {
          dVar17 = dVar17 + dVar13;
        }
      }
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_set_xyz((undefined1 *)(unsigned)((int)pdVar10 + -0x120),*(int *)(unsigned)((int)pdVar10 + -0x1d8),uVar8,ar7));
      *(unsigned *)(unsigned)((int)pdVar10 + -0x22c) = (undefined1 *)(unsigned)((int)pdVar10 + -0x120);
      *(unsigned *)(unsigned)((int)pdVar10 + -0x230) = (undefined1 *)(unsigned)((int)pdVar10 + -0x130);
      iVar1 = ar4 + 0x14;
      puVar6 = (undefined1 *)(unsigned)((int)pdVar10 + -0x38);
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar10 + -0x230)); *(unsigned *)(((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8); FUN_8c031eb0(ar4,ar5,puVar6,iVar1); });
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_assign(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar10 + -0x130),puVar6,iVar1));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x130),0xffffffff,puVar6,iVar1));
      uVar5 = 0xffffffff;
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar10 + -0x120),0xffffffff,puVar6,iVar1));
      ar7 = (code *)(ar4 + 0xb0);
      pcVar7 = ((void *)0x8c033d88);
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), s_CAnimBody_AdvanceFrame_033d90(ar7,uVar5,((void *)0x8c033d88),ar7));
      uVar5 = 0xb0;
      ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar10 + -0x228)); vin0 = (unsigned)ri0_; vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)); CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar7,ar7); });
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar10 + -0x1dc) = (int)(D2U(dVar13) >> 0x20);
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                  *(undefined4 *)(unsigned)((int)pdVar10 + -0x1dc));
      }
      else {
        *(double *)(unsigned)((int)pdVar10 + -0x1dc) = dVar13;
      }
      if (in_FPSCR_PR == '\0') {
        bVar18 = F32HI(in_dr12) < SUB84(dVar17,0);
      }
      else {
        bVar18 = in_dr12 < dVar17;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -0x150),SUB84(dVar13,0));
        }
        else {
          dVar13 = *(double *)(unsigned)((int)pdVar10 + -0x150);
        }
        if (in_FPSCR_PR == '\0') {
          bVar18 = SUB84(dVar17,0) < F32HI(dVar13);
        }
        else {
          bVar18 = dVar17 < dVar13;
        }
        if (bVar18) {
          *(int *)(unsigned)((int)pdVar10 + -0x210) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(0x3f19999a,
                                      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x210) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x210) + 0x28);
            dVar13 = -5.813068321944503e+255;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = F32LO(dVar13) + F32HI(dVar13);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x210) + 0x28) = fVar12;
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x210) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar13 = *(double *)(unsigned)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && F32HI(dVar13) < SUB84(dVar13,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x24);
              dVar13 = CONCAT44D(uVar5,SUB84(dVar13,0));
              *(undefined4 *)(unsigned)(ar4 + 0x28) = uVar5;
            }
            else {
              dVar13 = *(double *)(unsigned)(ar4 + 0x24);
              *(double *)(unsigned)(ar4 + 0x28) = dVar13;
            }
          }
          goto LAB_8c04c060;
        }
      }
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c032ab0(ar4,uVar5,pcVar7,ar7));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar10 + -0x1e0) = (int)(D2U(dVar13) >> 0x20);
      }
      else {
        *(double *)(unsigned)((int)pdVar10 + -0x1e0) = dVar13;
      }
      *(int *)(unsigned)((int)pdVar10 + -0x214) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -0x1e0),
                                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x214) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x214) + 0x28);
        dVar13 = *(double *)(unsigned)((int)pdVar10 + -0x1e0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = F32LO(dVar13) - F32HI(dVar13);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x214) + 0x28) = fVar12;
        fVar12 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x214) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
      dVar13 = (double)(ulonglong)(uint)fVar12;
      if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
        dVar13 = (double)(ulonglong)(uint)fVar12;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x28) = dVar13;
        }
      }
    }
    else if ((iVar1 == 7) || (iVar1 == 8)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = D2U(dVar13) & 0xffffffff;
      }
      *(int *)(unsigned)((int)pdVar10 + -0x204) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x204) + 0x28)
                                 );
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x204) + 0x28);
        dVar13 = 3.73996784729797e-312;
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = F32HI(dVar13);
        dVar13 = CONCAT44D(fVar12,F32LO(dVar13) * fVar12);
      }
      else {
        dVar13 = dVar13 * dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x204) + 0x28) = SUB84(dVar13,0);
      }
      else {
        *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x204) + 0x28) = in_xd0;
      }
      ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar10 + -0x228)); vin0 = (unsigned)ri0_; vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar4 + 0xb0,pcVar7,ar7); })
      ;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar10 + -0x1a8) = (int)(D2U(dVar13) >> 0x20);
      }
      else {
        *(double *)(unsigned)((int)pdVar10 + -0x1a8) = dVar13;
      }
      *(unsigned *)(unsigned)((int)pdVar10 + -0x22c) = (undefined1 *)(unsigned)((int)pdVar10 + -0xbc);
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),pcVar7,ar7));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), vec3_copy_8c023d8c((undefined1 *)(unsigned)((int)pdVar10 + -100),(undefined1 *)(unsigned)((int)pdVar10 + -0xbc),
                         pcVar7,ar7));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar10 + -0xbc),0xffffffff,pcVar7,ar7));
      if (in_FPSCR_SZ == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c8),*(undefined4 *)(unsigned)((int)pdVar10 + -100))
        ;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)((int)pdVar10 + -100);
        dVar13 = *(double *)(unsigned)(ar4 + 0x2c8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = F32LO(dVar13) - F32HI(dVar13);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)((int)pdVar10 + -0x70) = fVar12;
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),*(undefined4 *)(unsigned)((int)pdVar10 + -0x60)
                                 );
      }
      else {
        *(undefined8 *)(unsigned)((int)pdVar10 + -0x70) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)((int)pdVar10 + -0x60);
        dVar13 = *(double *)(unsigned)(ar4 + 0x2cc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = F32LO(dVar13) - F32HI(dVar13);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)((int)pdVar10 + -0x6c) = fVar12;
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2d0),*(undefined4 *)(unsigned)((int)pdVar10 + -0x5c)
                                 );
      }
      else {
        *(undefined8 *)(unsigned)((int)pdVar10 + -0x6c) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)((int)pdVar10 + -0x5c);
        dVar13 = *(double *)(unsigned)(ar4 + 0x2d0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = F32HI(dVar13);
        dVar13 = CONCAT44D(fVar12,F32LO(dVar13) - fVar12);
      }
      else {
        dVar13 = dVar13 - dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar10 + -0x68) = SUB84(dVar13,0);
      }
      else {
        *(undefined8 *)(unsigned)((int)pdVar10 + -0x68) = in_xd0;
      }
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), vec3_copy_8c023d8c(ar4 + 0x2c8,(undefined1 *)(unsigned)((int)pdVar10 + -100),pcVar7,ar7));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), vec3_copy_8c02b5fc((undefined1 *)(unsigned)((int)pdVar10 + -200),(undefined1 *)(unsigned)((int)pdVar10 + -0x70),
                         pcVar7,ar7));
      *(unsigned *)(unsigned)((int)pdVar10 + -0x22c) = (undefined1 *)(unsigned)((int)pdVar10 + -0xd8);
      ({ unsigned long t0_ = (unsigned long)(
                   *(undefined4 *)(unsigned)((int)pdVar10 + -0x22c)); *(unsigned *)(((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8); FUN_8c023484(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar10 + -200),pcVar7,ar7); });
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_assign(ar4 + 0x14,(undefined1 *)(unsigned)((int)pdVar10 + -0xd8),pcVar7,ar7));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0xd8),0xffffffff,pcVar7,ar7));
      uVar5 = 0xffffffff;
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar10 + -200),0xffffffff,pcVar7,ar7));
      (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_length(ar4 + 0x14,uVar5,pcVar7,ar7));
      uVar4 = 0x278;
      uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0x278,pcVar7,ar7));
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x1ac) = uVar5;
      if (*(int *)(unsigned)((int)pdVar10 + -0x1ac) == 1) {
        (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c0231c8((undefined1 *)(unsigned)((int)pdVar10 + -0x48),uVar4,pcVar7,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar10 + -0x1b0) = (int)(D2U(dVar13) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)pdVar10 + -0x1b0) = dVar13;
        }
        iVar1 = ar4 + 0x14;
        (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c0231c8(iVar1,uVar4,pcVar7,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar10 + -0x1b4) = (int)(D2U(dVar13) >> 0x20);
          uVar15 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + -0x1b4),SUB84(dVar13,0));
        }
        else {
          *(double *)(unsigned)((int)pdVar10 + -0x1b4) = dVar13;
          uVar15 = *(undefined8 *)(unsigned)((int)pdVar10 + -0x1b4);
        }
        ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar10 + -0x228)); vin0 = (unsigned)ri0_; vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)); FUN_8c010e38(iVar1,uVar4,pcVar7,ar7); });
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar10 + -0x1b8) = (int)((ulonglong)uVar15 >> 0x20);
          uVar15 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + -0x1b8),(int)uVar15);
          *(undefined4 *)(unsigned)(ar4 + 0x228) = *(undefined4 *)(unsigned)((int)pdVar10 + -0x1b8);
        }
        else {
          *(undefined8 *)(unsigned)((int)pdVar10 + -0x1b8) = uVar15;
          uVar15 = *(undefined8 *)(unsigned)((int)pdVar10 + -0x1b8);
          *(undefined8 *)(unsigned)(ar4 + 0x228) = uVar15;
        }
        *(unsigned *)(unsigned)((int)pdVar10 + -0x22c) = (undefined1 *)(unsigned)((int)pdVar10 + -0xe8);
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar10 + -0x22c)); *(unsigned *)(((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar7,ar7); });
        *(unsigned *)(unsigned)((int)pdVar10 + -0x22c) = (undefined1 *)(unsigned)((int)pdVar10 + -0xf8);
        ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)pdVar10 + -0x22c)); *(unsigned *)(((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8) + 0) = (unsigned)t0_; vsp = ((pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)) - 8); FUN_8c0230f0((undefined1 *)(unsigned)((int)pdVar10 + -0x48),uVar4,pcVar7,ar7); });
        (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c022dac((undefined1 *)(unsigned)((int)pdVar10 + -0xe8),(undefined1 *)(unsigned)((int)pdVar10 + -0xf8),
                     pcVar7,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar10 + -0x1bc) = (int)((ulonglong)uVar15 >> 0x20);
          dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -0x1bc),(int)uVar15);
          *(undefined4 *)(unsigned)(ar4 + 0x224) = *(undefined4 *)(unsigned)((int)pdVar10 + -0x1bc);
        }
        else {
          *(undefined8 *)(unsigned)((int)pdVar10 + -0x1bc) = uVar15;
          dVar13 = *(double *)(unsigned)((int)pdVar10 + -0x1bc);
          *(double *)(unsigned)(ar4 + 0x224) = dVar13;
        }
        (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0xf8),0xffffffff,pcVar7,ar7));
        (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0xe8),0xffffffff,pcVar7,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
        pcVar7 = (code *)0x2b8;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,pcVar7,ar7));
      *(undefined4 *)(unsigned)((int)pdVar10 + -0x1e4) = uVar5;
      if (*(int *)(unsigned)((int)pdVar10 + -0x1e4) == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
    }
LAB_8c04c060:
    (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c022fc0(ar5,ar6,pcVar7,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar10 + -0x1e8) = (int)(D2U(dVar13) >> 0x20);
      dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),in_fr3);
      dVar17 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      *(double *)(unsigned)((int)pdVar10 + -0x1e8) = dVar13;
      dVar13 = *(double *)(unsigned)(ar4 + 0x48);
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      dVar17 = 2.0000004786998034;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(dVar17) * F32HI(dVar17);
      dVar13 = CONCAT44D(F32HI(dVar13) + fVar12,SUB84(dVar13,0));
    }
    else {
      fVar12 = SUB84(dVar17 * dVar17,0);
      dVar13 = dVar13 + dVar17 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -0x1e8),fVar12);
    }
    else {
      dVar17 = *(double *)(unsigned)((int)pdVar10 + -0x1e8);
    }
    if (in_FPSCR_PR == '\0') {
      bVar18 = F32HI(dVar13) < F32HI(dVar17);
    }
    else {
      bVar18 = dVar13 < dVar17;
    }
    if (!bVar18) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = D2U(dVar17) & 0xffffffff;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar13 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = F32LO(dVar13) / F32HI(dVar13);
      }
      else {
        fVar12 = SUB84(dVar13 / dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(ar4 + 0x3c) = fVar12;
        fVar12 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x3c) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
      uVar14 = (ulonglong)(uint)fVar12;
      if (in_FPSCR_PR == '\0' && 0.0 < fVar12) {
        (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c022fc0(ar5,ar6,pcVar7,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar10 + -0x1ec) = (int)(uVar14 >> 0x20);
          dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),
                                    *(undefined4 *)(unsigned)((int)pdVar10 + -0x1ec));
        }
        else {
          *(ulonglong *)(unsigned)((int)pdVar10 + -0x1ec) = uVar14;
          in_xd0 = *(undefined8 *)(unsigned)((int)pdVar10 + -0x1ec);
          dVar13 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = F32LO(dVar13) / F32HI(dVar13);
        }
        else {
          fVar12 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = CONCAT44D(0x40000000,fVar12);
        }
        else {
          dVar13 = 1.0045666267400928e+178;
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = F32LO(dVar13) * F32HI(dVar13);
        }
        else {
          fVar12 = SUB84(dVar13 * dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(ar4 + 0x38) = fVar12;
          dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x38) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar13 = *(double *)(unsigned)(ar4 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = F32LO(dVar13) / F32HI(dVar13);
        }
        else {
          fVar12 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(ar4 + 0x3c) = fVar12;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x3c) = in_xd0;
        }
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
    }
    break;
  case 4:
    uVar5 = 0xb0;
    ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)pdVar10 + -0x228)); vin0 = (unsigned)ri0_; vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)); CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar7,ar7); });
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar10 + -0x1f0) = (int)(D2U(dVar13) >> 0x20);
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)((int)pdVar10 + -0x1f0));
    }
    else {
      *(double *)(unsigned)((int)pdVar10 + -0x1f0) = dVar13;
    }
    uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), get_field_1c_026dd8(ar4 + 0xb0,uVar5,pcVar7,ar7));
    *(undefined4 *)(unsigned)((int)pdVar10 + -500) = uVar5;
    fVar12 = F32LO(in_dr14);
    if (*(int *)(unsigned)((int)pdVar10 + -500) == 5) {
      if (in_FPSCR_PR == '\0' && F32HI(in_dr14) < fVar12) {
        if (in_FPSCR_PR == '\0') {
          bVar18 = fVar12 < SUB84(in_dr12,0);
        }
        else {
          bVar18 = in_dr14 < in_dr12;
        }
        if (bVar18) {
          *(int *)(unsigned)((int)pdVar10 + -0x218) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(0x3d4ccccd,
                                      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x218) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x218) + 0x28);
            dVar13 = -3.862675775024149e-255;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = F32LO(dVar13) + F32HI(dVar13);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x218) + 0x28) = fVar12;
            uVar15 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x218) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            uVar15 = *(undefined8 *)(unsigned)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && F32HI(uVar15) < (float)uVar15) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)(ar4 + 0x24);
            }
          }
        }
      }
    }
    else if (*(int *)(unsigned)((int)pdVar10 + -500) == 6) {
      if (in_FPSCR_PR == '\0') {
        bVar18 = F32HI(in_dr12) < fVar12;
      }
      else {
        bVar18 = in_dr12 < in_dr14;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -0x150),SUB84(dVar13,0));
        }
        else {
          dVar13 = *(double *)(unsigned)((int)pdVar10 + -0x150);
        }
        if (in_FPSCR_PR == '\0') {
          bVar18 = fVar12 < F32HI(dVar13);
        }
        else {
          bVar18 = in_dr14 < dVar13;
        }
        if (bVar18) {
          *(int *)(unsigned)((int)pdVar10 + -0x21c) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(0x3dcccccd,
                                      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x21c) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x21c) + 0x28);
            dVar13 = 1.34161360293656e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = F32LO(dVar13) + F32HI(dVar13);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x21c) + 0x28) = fVar12;
            uVar15 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x21c) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            uVar15 = *(undefined8 *)(unsigned)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && F32HI(uVar15) < (float)uVar15) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)(ar4 + 0x24);
            }
          }
        }
      }
    }
    *(int *)(unsigned)((int)pdVar10 + -0x220) = ar4;
    ar5_00 = (float *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x220) + 0x28);
    if (in_FPSCR_SZ == '\0') {
      dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x3c),
                                *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x220) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)pdVar10 + -0x220) + 0x28);
      dVar13 = *(double *)(unsigned)(ar4 + 0x3c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(dVar13) - F32HI(dVar13);
    }
    else {
      fVar12 = SUB84(dVar13 - dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *ar5_00 = fVar12;
      fVar12 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(unsigned)ar5_00 = in_xd0;
    }
    if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar12;
      }
    }
    uVar5 = (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,pcVar7,ar7));
    *(undefined4 *)(unsigned)((int)pdVar10 + -0x1f8) = uVar5;
    if (*(int *)(unsigned)((int)pdVar10 + -0x1f8) == 1) {
      uVar9 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
    }
  }
switchD_8c04b39c_caseD_2:
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar7,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), FUN_8c051a68(ar4,(undefined1 *)(unsigned)((int)pdVar10 + -0x38),ar5,ar7));
  *(undefined4 *)(unsigned)((int)pdVar10 + -0x15c) = uVar9;
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar10 + -0x70),0xffffffff,ar5,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), object_dtor_delete((undefined1 *)(unsigned)((int)pdVar10 + -100),0xffffffff,ar5,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x58),0xffffffff,ar5,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x48),0xffffffff,ar5,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x38),0xffffffff,ar5,ar7));
  (vsp = (pdVar10 ? (unsigned long)pdVar10 - 560 : (unsigned long)(fr0_ - 580)), Vec3_dtor((undefined1 *)(unsigned)((int)pdVar10 + -0x28),0xffffffff,ar5,ar7));
  return *(undefined4 *)(unsigned)((int)pdVar10 + -0x15c);
}

__asm__(".globl _FUN_8c04b168\n.set _FUN_8c04b168, _FUN_8c04b168_def\n");
//@unit 8c04c314
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
//@unit 8c04d62c
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
undefined4 FUN_8c04d62c_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04d62c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  int *ar6_00;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  double in_dr0 = 0;
  undefined4 uVar10;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  undefined4 in_fr3 = 0;
  undefined4 in_fr5 = 0;
  ulonglong in_dr14 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar3 = 1;
  dVar8 = (double)(in_dr14 & 0xffffffff00000000);
  if (2 < *(int *)(unsigned)(ar4 + 0x128)) {
    in_dr0 = CONCAT44D(0x3ecccccd,SUB84(in_dr0,0));
    dVar8 = CONCAT44D((int)(in_dr14 >> 0x20),*(float *)(unsigned)(ar4 + 0x48) * 0.4);
  }
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
    ar5_00 = ar5;
    ar6_00 = ar6;
                    
    switch(iVar1) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar1 == 1) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)in_dr0 & 0xffffffff;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7));
      }
      break;
    case 1:
      ar7 = 0;
      ar6_00 = (int *)(unsigned)0xffffffff;
      ar5_00 = 9;
      (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if (cVar13 == '\0') {
        in_fr5 = 0x3f99999a;
      }
      else {
        in_fr5 = 0x3f4ccccd;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5_00,ar6_00,ar7));
      if (cVar13 == '\0') {
        *(int *)(unsigned)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x278) = in_dr0;
      }
    case 2:
      uVar2 = SUB84(in_dr0,0);
      if (cVar13 != '\0') {
        in_fr5 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x94);
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03c314(ar4,ar5_00,ar6_00,ar7));
      if (cVar13 == '\0') {
        fVar6 = -0.005;
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0xbba3d70a;
      }
      else {
        uVar2 = 0xbba3d70a;
        fVar6 = 5.43704e-43;
        *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0x184bba3d70a;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x184))))(ar6,ar5_00,ar6_00,ar7));
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x48));
        uVar2 = in_fr3;
      }
      else {
        dVar7 = -8.332610302023455e-251;
      }
      if (cVar12 == '\0') {
        fVar4 = F32LO(dVar7) * F32HI(dVar7);
        dVar8 = CONCAT44D((fVar6 - fVar4) - F32LO(dVar8),uVar2);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
        dVar8 = (CONCAT44D(fVar6,uVar2) - dVar7 * dVar7) - dVar8;
      }
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),fVar4);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        bVar11 = F32HI(dVar8) < F32HI(dVar7);
      }
      else {
        bVar11 = dVar8 < dVar7;
      }
      if (bVar11) {
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031748(ar4,ar5_00,ar6_00,ar7));
        dVar7 = (double)(D2U(dVar7) & 0xffffffff);
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
        }
        else {
          *(double *)(unsigned)(ar4 + 0xa0) = dVar7;
        }
        (vsp = ((unsigned long)(fr0_ - 64)), vec3_clear(ar4 + 0x90,ar5_00,ar6_00,ar7));
      }
      uVar5 = SUB84(dVar7,0);
      if (cVar13 != '\0') {
        in_fr5 = 0x42c80000;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c05ae54(ar4,ar5_00,ar6_00,ar7));
      if (cVar13 != '\0') {
        in_fr5 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x278);
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      if (iVar1 == 1) {
        uVar2 = 9;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,9,ar6_00,ar7));
        if (cVar12 == '\0') {
          dVar8 = CONCAT44D((float)iVar1,in_fr5);
        }
        else {
          dVar8 = (double)iVar1;
        }
        if (cVar12 == '\0') {
          bVar11 = F32HI(dVar8) < 0.0;
        }
        else {
          bVar11 = dVar8 < (double)(ulonglong)uVar5;
        }
        if ((bVar11) && (cVar13 != '\0')) {
          uVar5 = 0x4f800000;
        }
        uVar10 = 0x3f800000;
        (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03c314(ar4,uVar2,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,uVar2,ar6_00,ar7));
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = uVar10;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0xa0) = CONCAT44(uVar10,uVar5);
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 3:
      iVar1 = ar5;
      (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x184))))(ar6,ar5,ar6,ar7));
      if (cVar13 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar7 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar7 = 1.53683721570537e-311;
      }
      if (cVar12 == '\0') {
        fVar6 = F32LO(dVar7) * F32HI(dVar7);
        dVar8 = CONCAT44D((F32HI(in_dr0) - fVar6) - F32LO(dVar8),
                                 SUB84(in_dr0,0));
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
        dVar8 = (in_dr0 - dVar7 * dVar7) - dVar8;
      }
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),fVar6);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        bVar11 = F32HI(dVar8) < F32HI(dVar7);
      }
      else {
        bVar11 = dVar8 < dVar7;
      }
      if (bVar11) {
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2d4,iVar1,ar6,ar7));
        uVar5 = SUB84(dVar7,0);
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2a8,iVar1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x90,iVar1,ar6,ar7));
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)uVar5;
        }
        iVar1 = ar4 + 0x14;
        (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x80,iVar1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031748(ar4,iVar1,ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0x1518;
      }
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031748(ar4,ar5,ar6,ar7));
      iVar1 = *(int *)(unsigned)(ar4 + 0x280);
      *(int *)(unsigned)(ar4 + 0x280) = iVar1 + -1;
      if (iVar1 < 1) {
        uVar9 = (ulonglong)in_dr0 & 0xffffffff;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9;
        }
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03c314(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0xa0) = (int)(uVar9 >> 0x20);
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar9;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031700(ar4,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
      }
      break;
    case 5:
      iVar1 = ar5;
      (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,ar6,ar7));
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D(0x3da3d70a,*(undefined4 *)(unsigned)(ar4 + 0x48));
        (*(undefined4 *)(fr0_ - 0x3c)) = uVar2;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x3c)) = SUB84(in_dr0,0);
        dVar8 = -8.332610297860959e-251;
        (*(undefined4 *)(fr0_ - 0x38)) = uVar2;
      }
      if (cVar12 == '\0') {
        fVar6 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x3c)),fVar6);
      }
      else {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
      }
      if (cVar12 == '\0') {
        fVar6 = F32LO(dVar8) + F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar13 == '\0') {
        uVar9 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),fVar6);
      }
      else {
        uVar9 = *(ulonglong *)(unsigned)(ar5 + 4);
      }
      if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
        uVar9 = uVar9 & 0xffffffff;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x70) = uVar9;
        }
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031748(ar4,iVar1,ar6,ar7));
        uVar5 = (uint)uVar9;
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7fc0c,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)uVar5;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
      }
      break;
    case 6:
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c04d62c\n.set _FUN_8c04d62c, _FUN_8c04d62c_def\n");
//@unit 8c04db38
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
undefined4 FUN_8c04db38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04db38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  uint in_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 44)), vec3_clear(ar4 + 0x2a8,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), vec3_clear(ar4 + 0x6c,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), vec3_clear(ar4 + 0x90,ar5,ar6,ar7));
    if (cVar2 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)in_fr1;
    }
    if (*(int *)(unsigned)(ar4 + 0x128) == 4) {
      (vsp = ((unsigned long)(fr0_ - 44)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x18)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
      ar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 44)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 44)), Vec3_length(ar4 + 0x14,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 0x49;
    (vsp = ((unsigned long)(fr0_ - 44)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x49,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 44)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
      return 0;
    }
    if (iVar1 != 3) {
      return 1;
    }
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
  if (iVar1 == 1) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 44)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c04db38\n.set _FUN_8c04db38, _FUN_8c04db38_def\n");
//@unit 8c04dd34
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
undefined4 FUN_8c04dd34_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04dd34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0 = 0;
  double dVar3;
  double in_dr14 = 0;
  undefined8 in_xd14 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x20))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c022dac(ar4 + 0x80,((undefined4 *)(fr0_ - 0x20)),ar6,ar7));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar5 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar1);
    (*(undefined4 *)(fr0_ - 0x24)) = uVar1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)in_dr0;
    in_xd14 = in_dr0;
    ((undefined4 *)(fr0_ - 0x20))[0] = uVar1;
  }
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined4 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  fVar2 = (float)in_dr0;
  if (cVar5 == '\0') {
    fVar2 = *(float *)(unsigned)(ar4 + 0x84);
  }
  dVar3 = (double)(ulonglong)(uint)fVar2;
  if (cVar4 == '\0' && 0.0 < fVar2) {
    if (cVar5 == '\0') {
      dVar3 = CONCAT44D(0xbf800000,fVar2);
    }
    else {
      dVar3 = -7.94252464057912e-251;
    }
    if (cVar4 == '\0') {
      in_dr14 = (double)(ulonglong)(uint)(F32LO(in_dr14) * F32HI(dVar3));
    }
    else {
      in_dr14 = in_dr14 * dVar3;
    }
  }
  if (cVar5 == '\0') {
    *(int *)(unsigned)ar5 = SUB84(in_dr14,0);
  }
  else {
    *ar5 = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c02327c(ar4 + 0x80,uVar1,ar6,ar7));
  uVar1 = (undefined4)(D2U(dVar3) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = uVar1;
  if (cVar5 != '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar3,0);
    (*(undefined4 *)(fr0_ - 0x24)) = uVar1;
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)((int)ar5 + 4) = (*(undefined4 *)(fr0_ - 0x28));
  }
  else {
    *(undefined8 *)(unsigned)((int)ar5 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
  }
  return 0;
}

__asm__(".globl _FUN_8c04dd34\n.set _FUN_8c04dd34, _FUN_8c04dd34_def\n");
//@unit 8c04ddd4
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
undefined4 FUN_8c04ddd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04ddd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  float fVar6;
  double in_dr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 ain0;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  uVar3 = ar7;
  ain0 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x3c)),ar6,uVar3));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,uVar3));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_6c_028cc4(ar7,uVar2,ar6,uVar3));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,uVar3));
    return 2;
  }
  *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x2c)),uVar2,ar6,uVar3));
  if (cVar9 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),(int)in_dr0);
    in_dr0 = in_xd14;
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x28);
  }
  fVar6 = F32LO(in_dr14);
  if (cVar8 == '\0') {
    bVar7 = fVar6 < F32HI(dVar5);
  }
  else {
    bVar7 = in_dr14 < dVar5;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar6;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 fVar6 / F32HI(dVar5));
    }
    else {
      in_dr14 = in_dr14 / dVar5;
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x28);
    }
    if (cVar8 == '\0') {
      fVar6 = F32LO(in_dr14) + F32HI(dVar5);
    }
    else {
      fVar6 = SUB84(in_dr14 + dVar5,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar6;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031748(ar4,uVar2,ar6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031700(ar4,uVar2,ar6,uVar3));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length(((undefined1 *)(fr0_ - 0x2c)),uVar2,ar6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x14,uVar2,ar6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x140))))(iVar1,uVar2,ar6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x4c)),ar6,uVar3));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,uVar3));
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    uVar3 = 0;
    ar6 = 0xffffffff;
    uVar2 = 0x12;
    (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x12,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,uVar3));
    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if ((iVar1 == 2) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,uVar3)), iVar1 == 1)) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,uVar3));
      uVar4 = 0;
      iVar1 = ar4 + 0x80;
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x14,iVar1,ar6,uVar3));
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c03c314(ar4,iVar1,ar6,uVar3));
    }
    goto LAB_8c04e01e;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,uVar3));
  if (iVar1 == 7) {
    iVar1 = *(int *)(unsigned)(ar4 + 0x280);
    *(int *)(unsigned)(ar4 + 0x280) = iVar1 + 1;
    if (4 < iVar1 + 1) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,uVar3); });
    if (cVar8 == '\0') {
      iVar1 = (int)F32HI(dVar5);
    }
    else {
      iVar1 = (int)dVar5;
    }
    if (iVar1 == 0x4c) {
      uVar3 = 5;
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c033474(ar4,5,ar5,(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c03f39c(ar7,uVar3,ar5,(*(undefined4 *)(fr0_ + 0x00000000))));
      ar6 = ar5;
      uVar3 = (*(undefined4 *)(fr0_ + 0x00000000));
    }
  }
LAB_8c04e01e:
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,uVar3));
  return uVar4;
}

__asm__(".globl _FUN_8c04ddd4\n.set _FUN_8c04ddd4, _FUN_8c04ddd4_def\n");
//@unit 8c04e0bc
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
undefined4 FUN_8c04e0bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04e0bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(s0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c04e0bc\n.set _FUN_8c04e0bc, _FUN_8c04e0bc_def\n");
//@unit 8c04e0e0
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
undefined4 FUN_8c04e0e0_def(int ar4,undefined4 ar5,undefined1 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c04e0e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 108; for (int i_ = 0; i_ < 108; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x298);
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c04c314(ar4,ar5,ar6,ar7_00));
    ar6_00 = ar6;
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + 1;
    }
  }
  else if (iVar1 == 2) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7_00); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c0230f0(ar7,uVar2,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7_00));
    if (cVar8 == '\0') {
      in_fr15 = F32HI(in_dr0);
    }
    (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
    uVar4 = (undefined4)in_dr0;
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D(0x40400000,uVar4);
    }
    else {
      dVar5 = -7.937140056776321e-251;
    }
    if (cVar7 == '\0') {
      bVar6 = F32HI(dVar5) < in_fr15;
    }
    else {
      bVar6 = dVar5 < CONCAT44D(in_fr14,in_fr15);
    }
    if (bVar6) {
      (vsp = ((unsigned long)(fr0_ - 108)), Vec3_length(ar7,uVar2,ar6_00,ar7_00));
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar7 + 4) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar7 + 4) = D2U(dVar5) & 0xffffffff;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); Vec3_scale(ar7,((undefined1 *)(unsigned)0x8c13658c),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7_00); });
      ar6_00 = ((undefined1 *)(fr0_ - 0x68));
      (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + 1;
    }
    else {
      uVar3 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
    }
  }
  else if ((iVar1 == 3) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c057e58(ar4,uVar2,ar6_00,ar7_00)), iVar1 == 0)) {
    *(undefined4 *)(unsigned)(ar4 + 0x298) = 2;
  }
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c04e0e0\n.set _FUN_8c04e0e0, _FUN_8c04e0e0_def\n");
//@unit 8c04e2d0
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
undefined4 FUN_8c04e2d0_def(int ar4,undefined4 ar5,undefined1 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c04e2d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 260; for (int i_ = 0; i_ < 260; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *ar6_00;
  int ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  float fVar7;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 260)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x298);
  if (iVar1 == 0) {
    uVar2 = ar5;
    ar6_00 = ar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c04b168(ar4,ar5,ar6,ar7_00));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c031748(ar4,uVar2,ar6_00,ar7_00));
    }
  }
  else if (iVar1 == 1) {
    iVar1 = ar7;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023334(ar4 + 0x14,ar7,ar6_00,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar2;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar1,ar6_00,ar7_00); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); FUN_8c0230f0(ar7,iVar1,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7_00));
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x224) = in_dr0;
    }
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c0231c8(ar7,uVar2,ar6_00,ar7_00));
    iVar1 = ar4 + 0x14;
    (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c0231c8(iVar1,uVar2,ar6_00,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x100))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 260)); FUN_8c010e38(iVar1,uVar2,ar6_00,ar7_00); });
    fVar5 = (float)in_dr0;
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x228) = in_dr0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    if (cVar9 == '\0') {
      fVar5 = *(float *)(unsigned)(ar4 + 0x224);
    }
    if (cVar8 == '\0' && 1.0 < fVar5) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023334(ar4 + 0x14,ar7,ar6_00,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar2;
      if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
        ar7_00 = 0;
        ar6_00 = (undefined1 *)(unsigned)0xffffffff;
        uVar2 = 7;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 260)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
        if (iVar1 != 6) {
          (vsp = ((unsigned long)(fr0_ - 260)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        }
      }
      else {
        ar7_00 = 0;
        ar6_00 = (undefined1 *)(unsigned)0xffffffff;
        uVar2 = 8;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 260)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
        if (iVar1 != 6) {
          (vsp = ((unsigned long)(fr0_ - 260)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        }
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x224);
        fVar7 = 45.0;
      }
      else {
        fVar5 = 45.0;
        fVar7 = 9.30462e-43;
      }
      if (cVar8 == '\0' && fVar7 < fVar5) {
        if (cVar9 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x224) = 0x42340000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x224) = 0x29842340000;
        }
      }
      *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + 1;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
      uVar4 = 0;
    }
  }
  else if (iVar1 == 2) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7_00); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(unsigned)0x8c136590),ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
    puVar3 = ((undefined1 *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x2a8,puVar3,ar6_00,ar7_00));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      dVar6 = 1.34162686540996e-311;
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      uVar2 = 0x3f333333;
      *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f333333;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      uVar2 = 0xb0;
      *(undefined8 *)(unsigned)(ar4 + 0x278) = 0xb03f333333;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x100))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 260)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar3,ar6_00,ar7_00); });
    if (cVar9 == '\0') {
      uVar2 = ((undefined4 *)(fr0_ - 0xa4))[0];
    }
    ((undefined4 *)(fr0_ - 0xa4))[0] = uVar2;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); FUN_8c0230f0(ar7,puVar3,ar6_00,ar7_00); });
    puVar3 = ((undefined1 *)(fr0_ - 0x78));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_add(ar5,puVar3,ar6_00,ar7_00); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 260)), get_field_1c_026dd8(ar4 + 0xb0,puVar3,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 260)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x94)),uVar2,ar6_00,ar7_00));
    ar7_00 = ar4 + 0x14;
    ar6_00 = ((undefined1 *)(fr0_ - 0x88));
    ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); FUN_8c031eb0(ar4,ar5,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x14,((undefined4 *)(fr0_ - 0xa4)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined4 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), object_dtor_delete(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_00,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 260)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
    if (iVar1 == 1) {
      *(int *)(unsigned)(ar4 + 0x298) = *(int *)(unsigned)(ar4 + 0x298) + -1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c04e2d0\n.set _FUN_8c04e2d0, _FUN_8c04e2d0_def\n");
//@unit 8c04e7e0
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
undefined4 FUN_8c04e7e0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04e7e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_fr1 = 0;
  uint uVar5;
  double dVar6;
  double dVar7;
  double in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  dVar7 = CONCAT44D(0x41200000,in_fr1);
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  do {
    iVar2 = *(int *)(unsigned)(ar4 + 300);
    if ((0xc < iVar2) || (iVar2 < 0)) goto switchD_8c04e828_caseD_4;
                    
    switch(iVar2) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x178))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),iVar1,ar6,ar7));
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(0x41a00000,(int)(D2U(dVar7) >> 0x20));
      }
      else {
        dVar6 = -0.007812501909938874;
        in_xd0 = dVar7;
      }
      dVar7 = dVar6;
      if (cVar8 != '\0' || F32HI(dVar6) <= SUB84(dVar6,0)) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 300) = 10;
      }
      break;
    case 1:
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 2:
      ar7 = 0;
      ar6 = -1;
      uVar3 = 0x10;
      (vsp = ((unsigned long)(fr0_ - 88)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
      uVar5 = SUB84(dVar7,0);
      (vsp = ((unsigned long)(fr0_ - 88)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar5;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      goto switchD_8c04e828_caseD_4;
    case 3:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar1,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_normalize(((undefined1 *)(fr0_ - 0x34)),iVar1,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(unsigned)0x8c136594),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x54)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c05ae54(ar4,uVar3,ar5,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar5,ar7));
      ar6 = ar5;
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
    default:
      goto switchD_8c04e828_caseD_4;
    case 10:
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_assign(ar4 + 0x54,((undefined4 *)(unsigned)0x8c125be0),ar6,ar7));
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x54) = 0x450fc000;
        dVar7 = CONCAT44D(0x44688000,SUB84(dVar7,0));
        *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0x44688000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x54) = 0x44688000450fc000;
        dVar7 = 6.286777928722e-312;
        *(undefined8 *)(unsigned)(ar4 + 0x5c) = 0x12844688000;
      }
      (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x54,ar6,ar7));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar8 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(F32LO(dVar7) + F32HI(dVar7));
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x58) = SUB84(dVar7,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x58) = in_xd0;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 0xb:
      uVar5 = SUB84(dVar7,0);
      ar6 = ar4 + 0x54;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), pure_virtual_stub(ar4,ar5,ar6,ar7));
      if (iVar1 == 0) {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x10;
        (vsp = ((unsigned long)(fr0_ - 88)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 88)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (cVar9 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar5;
        }
      }
switchD_8c04e828_caseD_4:
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
      return uVar4;
    case 0xc:
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c05ae54(ar4,iVar1,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7));
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      goto switchD_8c04e828_caseD_4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c04e7e0\n.set _FUN_8c04e7e0, _FUN_8c04e7e0_def\n");
//@unit 8c04eb14
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
uint FUN_8c04eb14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c04eb14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  uint uVar3;
  undefined4 in_fr1 = 0;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  uVar5 = CONCAT44(0x41200000,in_fr1);
  uVar2 = ar5;
  ar7_01 = ar7;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  do {
    uVar4 = (uint)uVar5;
    iVar1 = *(int *)(unsigned)(ar4 + 0x134);
    if ((0xe < iVar1) || (iVar1 < 0)) goto switchD_8c04eb5c_caseD_4;
                    
    switch(iVar1) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c057164(ar4,ar5,ar6,ar7_01));
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 1:
      uVar5 = uVar5 & 0xffffffff;
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar5;
      }
      (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x178))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),uVar2,ar6,ar7_01));
      if (cVar7 == '\0') {
        uVar5 = CONCAT44(0x41a00000,(int)(uVar5 >> 0x20));
      }
      else {
        uVar5 = 0x13441a00000;
      }
      if (cVar6 != '\0' || (float)(uVar5 >> 0x20) <= (float)uVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 10;
      }
      else {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      break;
    case 2:
      if ((*(int *)(unsigned)(ar4 + 0x128) == 4) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), rand_range(ar4,0,100,ar7_01)), 0x46 < iVar1)) {
        ar7_01 = (undefined1 *)(unsigned)0x0;
        ar6 = 0xffffffff;
        uVar2 = 0x20;
        (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x20,0xffffffff,0));
        *(undefined4 *)(unsigned)(ar4 + 0x218) = 5;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), rand_range(ar4,0,100,ar7_01));
        if (iVar1 < 0x47) {
          ar7_01 = (undefined1 *)(unsigned)0x0;
          ar6 = 0xffffffff;
          uVar2 = 0x1a;
          (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        }
        else {
          ar7_01 = (undefined1 *)(unsigned)0x0;
          ar6 = 0xffffffff;
          uVar2 = 0x11;
          (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
        }
      }
      (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7_01));
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
    case 3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6,ar7_01));
      if (iVar1 == 0x11) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar2,ar6,ar7_01));
        if (iVar1 == 7) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          uVar3 = 0;
        }
      }
      else if (iVar1 == 0x20) {
        *(undefined4 *)(unsigned)(ar4 + 0x218) = 5;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7_01));
        if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          uVar3 = 0;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7_01));
        if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          uVar3 = 0;
        }
      }
switchD_8c04eb5c_caseD_4:
      (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7_01));
      return uVar3;
    default:
      goto switchD_8c04eb5c_caseD_4;
    case 10:
      if (*(int *)(unsigned)(ar4 + 0x128) != 4) {
LAB_8c04ee58:
        ar7_01 = (undefined1 *)(unsigned)0x0;
        ar6 = 0xffffffff;
        uVar2 = 0x47;
        (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x47,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7_01));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        goto switchD_8c04eb5c_caseD_b;
      }
      ar6 = 100;
      uVar2 = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), rand_range(ar4,0,100,ar7_01));
      if (iVar1 < 0x5b) goto LAB_8c04ee58;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 2;
      break;
    case 0xb:
switchD_8c04eb5c_caseD_b:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7_01));
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        uVar3 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 0xc:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x2c)),ar7,ar6,ar7_01));
      ar7_01 = ((undefined1 *)(fr0_ - 0x2c));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c059fc4(ar4,ar5,ar5,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 48)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar5,ar7_01));
      ar6 = ar5;
      if (iVar1 == 0) {
        uVar3 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 0xd:
      ar7_00 = 0;
      ar6_00 = 0xffffffff;
      uVar2 = 0x55;
      (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x55,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 48)), vec3_clear(ar4 + 0x2d4,uVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 48)), vec3_clear(ar4 + 0x2a8,uVar2,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
    case 0xe:
      ar7_01 = (undefined1 *)(unsigned)0x1c;
      ar6 = ar5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c058024(ar4,ar5,ar5,0x1c));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        (vsp = ((unsigned long)(fr0_ - 48)), vec3_clear(ar4 + 0x2d4,ar5,ar6,ar7_01));
        (vsp = ((unsigned long)(fr0_ - 48)), vec3_clear(ar4 + 0x2a8,ar5,ar6,ar7_01));
      }
      uVar3 = (uint)(iVar1 != 0);
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2ac) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2ac) = (ulonglong)uVar4;
      }
      goto switchD_8c04eb5c_caseD_4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c04eb14\n.set _FUN_8c04eb14, _FUN_8c04eb14_def\n");
//@unit 8c04f034
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
undefined4 FUN_8c04f034_def(code *ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04f034";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 420; for (int i_ = 0; i_ < 420; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 ar7_00;
  undefined1 *ar4_00;
  undefined4 uVar10;
  float fVar11;
  double in_dr0 = 0;
  double dVar12;
  float fVar13;
  undefined8 in_dr14 = 0;
  double in_xd0 = 0;
  bool bVar14;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  uVar10 = 1;
  pcVar9 = ar6;
  uVar7 = ar7;
  uVar8 = ar7;
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),ar7,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),ar7,pcVar9,uVar7));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x4c)),ar7,pcVar9,uVar7));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x5c)),ar7,pcVar9,uVar7));
  pcVar5 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x6c)),((void *)0x8c022c4c),pcVar9,uVar7));
  (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023dac(((undefined1 *)(fr0_ - 0x78)),pcVar5,pcVar9,uVar7));
  (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023dac(((undefined1 *)(fr0_ - 0x84)),pcVar5,pcVar9,uVar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,pcVar5,pcVar9,uVar7));
  if (iVar1 == 0) {
    (*(undefined4 *)(fr0_ - 0x194)) = 2;
    (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x84)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x78)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x6c)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,pcVar9,uVar7));
    return (*(undefined4 *)(fr0_ - 0x194));
  }
  pcVar5 = ((void *)0x8c028cc4);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,((void *)0x8c028cc4),pcVar9,uVar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); FUN_8c02f670(uVar2,pcVar5,pcVar9,uVar7); });
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x94)),pcVar9,uVar7));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,pcVar9,uVar7));
  pcVar5 = ((void *)0x8c028cc4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,((void *)0x8c028cc4),pcVar9,uVar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,pcVar5,pcVar9,uVar7));
  dVar12 = in_dr0;
  if (iVar1 != 0x13) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,pcVar5,pcVar9,uVar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,pcVar5,pcVar9,uVar7));
    dVar12 = in_dr0;
    if (iVar1 != 0x18) goto LAB_8c04f31c;
  }
  (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),((undefined1 *)(fr0_ - 0x3c)),pcVar9,uVar7));
  if (cVar16 == '\0') {
    in_dr0 = CONCAT44D(0x43340000,(int)(D2U(dVar12) >> 0x20));
  }
  else {
    in_dr0 = 4.84372090138479e-312;
    in_xd0 = dVar12;
  }
  if (cVar15 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
    (*(undefined4 *)(fr0_ - 0x198)) = 2;
    (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x84)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x78)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x6c)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pcVar9,uVar7));
    uVar8 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,0xffffffff,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar8,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar8,uVar7));
    return (*(undefined4 *)(fr0_ - 0x198));
  }
LAB_8c04f31c:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,((void *)0x8c028cc4),pcVar9,uVar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); FUN_8c02f670(uVar2,((void *)0x8c02f670),pcVar9,uVar7); });
  pcVar5 = (code *)((undefined1 *)(fr0_ - 0x4c));
  pcVar9 = ((void *)0x8c023a14);
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(pcVar5,((undefined1 *)(fr0_ - 0xa4)),((void *)0x8c023a14),pcVar5));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,pcVar9,pcVar5));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0x104))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),2,pcVar9,pcVar5));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x5c)),iVar1 + 4,pcVar9,pcVar5));
  do {
    uVar7 = (undefined4)in_dr14;
    iVar1 = *(int *)(unsigned)(ar4 + 300);
    if ((9 < iVar1) || (iVar1 < 0)) goto switchD_8c04f3ac_default;
    pcVar6 = (code *)(&(*(undefined1 *)(unsigned)0x8c04f3e4))[iVar1];
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      pcVar9 = ar4 + 0x34c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c055c38(ar4,ar6,pcVar9,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 420)), vec3_clear(ar4 + 0x2a8,ar6,pcVar9,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        pcVar9 = (code *)0x12c;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      }
      goto switchD_8c04f3ac_default;
    case 1:
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 2:
      pcVar5 = (code *)(*(int *)(unsigned)(ar4 + 300) + 1);
      *(unsigned *)(unsigned)(ar4 + 300) = pcVar5;
      break;
    case 4:
      goto switchD_8c04f3ac_caseD_4;
    case 5:
      ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 420)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar6,pcVar9,pcVar5); });
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_1c_026dd8(ar4 + 0xb0,pcVar6,pcVar9,pcVar5));
      iVar1 = *(int *)(unsigned)(ar4 + 0x128) + (iVar1 + -0x16) * 2;
      if (iVar1 == 3) {
        uVar8 = 0x5e;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar8,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar3,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0xb4)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,pcVar9,pcVar5));
        uVar8 = 0x5e;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5));
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar8,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(unsigned)(*piVar4 + 8),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023e04(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0xc0)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,pcVar9,pcVar5));
      }
      else if (iVar1 == 4) {
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar7,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar3,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0xd0)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,pcVar9,pcVar5));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5));
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar7,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(unsigned)(*piVar4 + 8),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023e04(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0xdc)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0xdc)),0xffffffff,pcVar9,pcVar5));
      }
      else if (iVar1 == 5) {
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar7,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar3,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0xec)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0xec)),0xffffffff,pcVar9,pcVar5));
        uVar8 = 0xb0;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5e,0xb0,pcVar5));
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar7,uVar8,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(unsigned)(*piVar4 + 8),uVar8,pcVar5));
        pcVar5 = ((void *)0x8c023e04);
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023e04(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0xf8)),uVar8,((void *)0x8c023e04)));
        pcVar9 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,0xffffffff,pcVar5));
      }
      else if (iVar1 == 6) {
        uVar8 = 0x5f;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar8,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar3,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x108)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,pcVar9,pcVar5));
        uVar8 = 0x5f;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar8,pcVar9,pcVar5));
        pcVar9 = (code *)*puVar3;
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(unsigned)(pcVar9 + 8),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023e04(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0x114)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x114)),0xffffffff,pcVar9,pcVar5));
      }
      (vsp = ((unsigned long)(fr0_ - 420)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x120)),(*(undefined4 *)(fr0_ + 0x00000000)),pcVar9,pcVar5));
      ar4_00 = ((undefined1 *)(fr0_ - 0x3c));
      pcVar9 = ((void *)0x8c023484);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); FUN_8c023484(ar4_00,((undefined1 *)(fr0_ - 0x120)),((void *)0x8c023484),ar4_00); });
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x130)),pcVar9,ar4_00));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,pcVar9,ar4_00));
      pcVar5 = ((void *)0x8c014a34);
      (vsp = ((unsigned long)(fr0_ - 420)), object_dtor_delete(((undefined1 *)(fr0_ - 0x120)),0xffffffff,pcVar9,((void *)0x8c014a34)));
      pcVar9 = (code *)((undefined1 *)(fr0_ - 0x3c));
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023aa0(pcVar9,ar6,pcVar9,pcVar5));
      uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,ar6,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c036988(uVar7,ar6,pcVar9,pcVar5));
      uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,ar6,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c038a10(uVar7,ar6,pcVar9,pcVar5));
      uVar7 = 0xb0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,pcVar9,pcVar5));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03f3e8(ar5,uVar7,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030eb8(ar4 + 0x1fc,0x1fc,pcVar9,pcVar5));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        uVar10 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar8 = 0xffffffff;
        uVar7 = 0x1a;
        (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        pcVar5 = ((void *)0x8c033e68);
        (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,((void *)0x8c033e68)));
        pcVar9 = (code *)0xa;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), rand_range(ar4,0,10,pcVar5));
        if (iVar1 < 6) {
          pcVar5 = (code *)0x0;
          pcVar9 = (code *)0xffffffff;
          uVar7 = 0x1e;
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1e,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,pcVar9,pcVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        }
      }
      goto switchD_8c04f3ac_default;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,pcVar6,pcVar9,pcVar5));
      if (iVar1 == 0x13) {
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x5c)),pcVar9,pcVar5));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x4c)),pcVar9,pcVar5));
      }
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(ar4 + 0x248,ar6,pcVar9,pcVar5));
      if (cVar16 == '\0') {
        dVar12 = CONCAT44D(0x43480000,(*(uint*)((uchar*)&(*(double *)(fr0_ - 0x64))+0)));
      }
      else {
        dVar12 = 6.37156434669702e-312;
        in_xd0 = (*(double *)(fr0_ - 0x64));
      }
      if (cVar15 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x250) = fVar11;
        in_dr0 = CONCAT44D(0x43480000,(*(undefined4 *)(fr0_ - 0x6c)));
      }
      else {
        *(double *)(unsigned)(ar4 + 0x250) = in_xd0;
        in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x68)),(*(undefined4 *)(fr0_ - 0x6c)));
        in_dr0 = 6.37156434669702e-312;
      }
      if (cVar15 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(F32LO(in_dr0) - F32HI(in_dr0));
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      if (cVar16 == '\0') {
        *(int *)(unsigned)(ar4 + 0x248) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x248) = in_xd0;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      pcVar6 = ar6;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x140))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); Vec3_sub(&(*(undefined4 *)(fr0_ - 0x6c)),ar6,pcVar9,pcVar5); });
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_normalize(((undefined1 *)(fr0_ - 0x140)),pcVar6,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x150)),pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,pcVar9,pcVar5));
    case 7:
      fVar11 = F32LO(in_dr0);
      pcVar9 = ar4 + 0x248;
      pcVar6 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c04c314(ar4,ar6,pcVar9,pcVar5));
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,*(int *)(unsigned)(iVar1 + 8),pcVar9,pcVar5));
        if (iVar1 == 0x13) {
          (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x5c)),pcVar9,pcVar5));
          if (cVar16 == '\0') {
            dVar12 = CONCAT44D(0x42a00000,(*(uint*)((uchar*)&(*(double *)(fr0_ - 0x64))+0)));
          }
          else {
            dVar12 = 1.881185915789446e-53;
            in_xd0 = (*(double *)(fr0_ - 0x64));
          }
          if (cVar15 == '\0') {
            fVar11 = F32LO(dVar12) + F32HI(dVar12);
          }
          else {
            fVar11 = SUB84(dVar12 + dVar12,0);
          }
          dVar12 = in_xd0;
          if (cVar16 == '\0') {
            (*(double *)(fr0_ - 0x64)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x64))+4)),fVar11);
            dVar12 = (*(double *)(fr0_ - 0x64));
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x4c)),pcVar9,pcVar5));
          dVar12 = (*(double *)(fr0_ - 0x64));
        }
        (*(double *)(fr0_ - 0x64)) = dVar12;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x160))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); Vec3_sub(&(*(undefined4 *)(fr0_ - 0x6c)),ar6,pcVar9,pcVar5); });
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x160)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,pcVar9,pcVar5));
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x58) = (ulonglong)(uint)fVar11;
        }
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_length(ar4 + 0x54,((void *)0x8c022f54),pcVar9,pcVar5));
        if (cVar16 == '\0') {
          dVar12 = CONCAT44D(0x42480000,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
          dVar12 = 4.67388482346422e-312;
        }
        if (cVar15 == '\0') {
          fVar11 = F32LO(dVar12) + F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 + dVar12,0);
        }
        dVar12 = in_xd0;
        if (cVar16 == '\0') {
          (*(undefined8 *)(fr0_ - 0x1a0)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1a0))+4)),fVar11);
          dVar12 = (*(undefined8 *)(fr0_ - 0x1a0));
        }
        (*(undefined8 *)(fr0_ - 0x1a0)) = dVar12;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x170))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); Vec3_scale(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0x1a0)),pcVar9,pcVar5); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x180))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); Vec3_sub(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x170)),pcVar9,pcVar5); });
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(ar4 + 0x248,((undefined1 *)(fr0_ - 0x180)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x180)),0xffffffff,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x170)),0xffffffff,pcVar9,pcVar5));
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x43340000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0x12c43340000;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      }
switchD_8c04f3ac_default:
      (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1a0))+4)) = uVar10;
      (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x84)),0xffffffff,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x78)),0xffffffff,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x6c)),0xffffffff,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,pcVar9,pcVar5));
      pcVar5 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,pcVar9,((void *)0x8c022cb0)));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,0xffffffff,pcVar5));
      return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1a0))+4));
    case 8:
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x190)),ar4 + 0x54,pcVar9,pcVar5));
      pcVar5 = (code *)((undefined1 *)(fr0_ - 0x190));
      pcVar9 = ar4 + 0x248;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c04e0e0(ar4,ar6,pcVar9,pcVar5));
      uVar7 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x190)),0xffffffff,pcVar9,pcVar5));
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,uVar7,pcVar9,pcVar5));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,iVar1,pcVar9,pcVar5));
        if (iVar1 == 0x13) {
          pcVar5 = (code *)0x0;
          pcVar9 = (code *)0xffffffff;
          uVar7 = 0x1a;
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,pcVar9,pcVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030f2c(ar4 + 0x1fc,0,pcVar9,pcVar5));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else {
          pcVar5 = (code *)0x0;
          uVar8 = 0xffffffff;
          uVar7 = 0x17;
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x17,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,pcVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          pcVar9 = (code *)0x1fc;
          (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030f2c(ar4 + 0x1fc,ar4 + 0x1fc,0x1fc,pcVar5));
          *(undefined4 *)(unsigned)(ar4 + 300) = 4;
        }
      }
      if (*(int *)(unsigned)(ar4 + 0x298) == 1) {
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030f2c(ar4 + 0x1fc,0x298,pcVar9,pcVar5));
      }
      goto switchD_8c04f3ac_default;
    case 9:
      (vsp = ((unsigned long)(fr0_ - 420)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,pcVar9,pcVar5));
      fVar11 = F32HI(in_dr0);
      pcVar5 = ((void *)0x8c022fc0);
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x5c)),pcVar9,((void *)0x8c022fc0)));
      if (cVar16 == '\0') {
        fVar13 = 150.0;
      }
      else {
        fVar11 = 150.0;
        fVar13 = -1.0;
      }
      if (cVar15 == '\0' && fVar11 < fVar13) {
        uVar2 = 0;
        uVar8 = 0xffffffff;
        uVar7 = 0x16;
        (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,uVar2));
        pcVar5 = (code *)0x3;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        pcVar9 = (code *)0x2bc;
        *(undefined4 *)(unsigned)(ar4 + 700) = 0;
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030f2c(ar4 + 0x1fc,uVar7,700,3));
        *(undefined4 *)(unsigned)(ar4 + 300) = 4;
      }
      goto switchD_8c04f3ac_default;
    }
    pcVar9 = (code *)((undefined1 *)(fr0_ - 0x78));
    pcVar6 = ((void *)0x8c023df4);
    (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023df4(pcVar9,((void *)0x8c023df4),pcVar9,pcVar5));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,pcVar6,pcVar9,pcVar5));
    uVar7 = (undefined4)in_dr14;
    if (iVar1 == 0x18) {
      ar7_00 = 0;
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x17,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,3,uVar2,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030f2c(ar4 + 0x1fc,((void *)0x8c030f2c),uVar2,ar7_00));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      pcVar6 = ar4;
switchD_8c04f3ac_caseD_4:
      pcVar5 = ar4 + 0xb0;
      pcVar9 = ((void *)0x8c033b98);
      (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_AdvanceFrame_033ba0(pcVar5,pcVar6,((void *)0x8c033b98),pcVar5));
      ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 420)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar6,pcVar9,pcVar5); });
      uVar8 = SUB84(in_dr0,0);
      if (cVar16 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),uVar7);
        dVar12 = CONCAT44D(0x41a00000,uVar8);
      }
      else {
        dVar12 = 1.6981406014198e-311;
      }
      if (cVar15 == '\0') {
        bVar14 = F32HI(in_dr0) < F32HI(dVar12);
      }
      else {
        bVar14 = in_dr0 < dVar12;
      }
      if ((!bVar14) && (*(int *)(unsigned)(ar4 + 800) == 0)) {
        pcVar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c033474(ar4,0x1a,ar6,pcVar5));
        *(undefined4 *)(unsigned)(ar4 + 800) = 1;
        pcVar9 = ar6;
      }
      if (cVar16 == '\0') {
        dVar12 = CONCAT44D(0x41b00000,SUB84(dVar12,0));
      }
      else {
        dVar12 = 5.444735897974836e+158;
      }
      if (cVar15 == '\0') {
        bVar14 = F32HI(in_dr0) < F32HI(dVar12);
      }
      else {
        bVar14 = in_dr0 < dVar12;
      }
      if (!bVar14) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        pcVar5 = ar4;
      }
      goto switchD_8c04f3ac_default;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(undefined4 *)(unsigned)(ar4 + 300) = 6;
  } while( true );
}

__asm__(".globl _FUN_8c04f034\n.set _FUN_8c04f034, _FUN_8c04f034_def\n");
