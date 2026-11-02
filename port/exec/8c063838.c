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
undefined ** s_REQUEST_ATTENTION_063846_def(unsigned char *ar4,int *ar5,unsigned char *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_REQUEST_ATTENTION_063846";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 384; for (int i_ = 0; i_ < 384; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  unsigned char *ar7_00;
  int iVar2;
  undefined **ppuVar3;
  int *ar5_00;
  int iVar4;
  unsigned char *ar5_01;
  undefined4 uVar5;
  unsigned char *pcVar6;
  char *ar7_01;
  float fVar7;
  undefined8 in_dr0 = 0;
  float fVar8;
  unsigned char *pcVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = *(undefined4 *)(unsigned)(ar6 + 0xc);
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c8(uVar5,ar5,uVar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5_00,uVar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637d0(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),ar5_00,uVar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 384)), get_field_a0_035724(*(undefined4 *)(unsigned)(ar6 + 0x18),ar5_00,uVar5,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02bef8(*(undefined4 *)(unsigned)(ar6 + 4),ar5_00,uVar5,ar7));
  iVar4 = (int)(short)uVar1;
  if (iVar4 < 4) {
    return (undefined **)(unsigned)(int)(short)uVar1;
  }
  ar7_00 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 384)), get_field_a0_035724(*(undefined4 *)(unsigned)(ar6 + 0x18),iVar4,uVar5,
                                       *(undefined4 *)(unsigned)(ar6 + 0x18)));
  pcVar6 = (unsigned char *)(unsigned)((uint)ar7_00 & 0xff);
  if (pcVar6 != (unsigned char *)(unsigned)0x2) {
    return (undefined **)(unsigned)pcVar6;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_178_035734(*(undefined4 *)(unsigned)(ar6 + 8),iVar4,2,ar7_00));
  if (iVar2 != 0) {
    return (undefined **)(unsigned)iVar2;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c8(*(undefined4 *)(unsigned)(ar6 + 0xc),iVar4,pcVar6,ar7_00));
  ar5_01 = (unsigned char *)(unsigned)(int)(char)uVar1;
  if (ar5_01 == (unsigned char *)(unsigned)0x0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x148))))(ar5,0,pcVar6,ar7_00));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_ac_062880(uVar1,ar5_01,pcVar6,ar7_00));
    if (iVar4 == 4) {
      ar5_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0x18));
      pcVar6 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637d0(*(undefined4 *)(unsigned)(ar5_01 + 0x7cc),ar5_01,pcVar6,ar7_00));
      if (((pcVar6 == (unsigned char *)(unsigned)0x0) &&
          (ar5_01 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5_01,0,ar7_00)),
          ar5_01 == (unsigned char *)(unsigned)0xffffffff)) &&
         (iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),0xffffffff,pcVar6,ar7_00)),
         iVar4 == 0)) {
        ar5_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0x18));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_a0_035724(ar5_01,ar5_01,pcVar6,ar7_00));
        if ((((char)uVar1 == '\x02') &&
            (uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c035e8c(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_00)),
            (char)uVar1 == '\x01')) &&
           ((ar4[0x879] == (unsigned char)0x0 &&
            ((iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_00)),
             iVar4 == 0 &&
             (uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c05eec4(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_00)),
             (char)uVar1 == '\x02')))))) {
          iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02c340(*(int *)(unsigned)(ar6 + 4) + 0x90,ar5_01,pcVar6,ar7_00));
          uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
          if (iVar4 < 0x2d) {
            (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,ar5_01,pcVar6,ar7_00));
            if (cVar11 == '\0') {
              in_dr0 = CONCAT44(0x41a80000,uVar1);
            }
            else {
              in_dr0 = 0xfc41a80000;
            }
            if (cVar10 != '\0' || F32HI(in_dr0) <= (float)in_dr0) {
              (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,ar5_01,pcVar6,ar7_00));
              if (cVar11 == '\0') {
                in_dr0 = CONCAT44(0x41c80000,(int)((ulonglong)in_dr0 >> 0x20));
              }
              else {
                in_dr0 = 0x18841c80000;
              }
              if (cVar10 == '\0' && (float)in_dr0 < F32HI(in_dr0)) {
                (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x188))))(ar5,ar5_01,pcVar6,ar7_00));
                if (cVar11 == '\0') {
                  in_dr0 = CONCAT44(0x42980000,(int)((ulonglong)in_dr0 >> 0x20));
                }
                else {
                  in_dr0 = 0x8c025f6842980000;
                }
                if (((cVar10 == '\0' && F32HI(in_dr0) < (float)in_dr0) &&
                    (uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c025f68(*(int *)(unsigned)(ar6 + 4) + 0x78,ar5_01,pcVar6,ar7_00)),
                    (char)uVar1 != '\x01')) &&
                   (iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_00)),
                   iVar4 == 0)) {
                  (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c035e84(*(undefined4 *)(unsigned)(ar6 + 0xc),0,pcVar6,ar7_00));
                  ar4[0x879] = (unsigned char)0x1;
                  *(undefined4 *)(unsigned)(ar4 + 0x86c) = 0;
                  ar5_01 = (unsigned char *)(unsigned)0x0;
                  (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,pcVar6,ar7_00));
                  *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
                  *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
                  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
                  *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x12;
                  ar7_00 = (unsigned char *)(unsigned)0x12;
                  (*(undefined1 *)(unsigned)0x8c136908) = 0x12;
                  *(undefined4 *)(unsigned)(ar4 + 0x844) = 0xb;
                  (*(undefined1 *)(unsigned)0x8c13690c) = 0xb;
                  pcVar6 = (unsigned char *)(unsigned)0xc;
                  *(undefined4 *)(unsigned)(ar4 + 0x848) = 0xc;
                  (*(undefined1 *)(unsigned)0x8c136910) = 0xc;
                }
              }
            }
          }
        }
      }
    }
  }
  fVar7 = F32HI(in_dr0);
  iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637d0(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),ar5_01,pcVar6,ar7_00));
  if (iVar4 == 0) {
    iVar4 = *ar5;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x148))))(ar5,iVar4,pcVar6,ar7_00));
    ar7_00 = ((void *)0x8c062880);
    ar5_01 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 384)), get_field_ac_062880(uVar1,iVar4,pcVar6,((void *)0x8c062880)));
    pcVar6 = ar5_01;
    if ((ar5_01 == (unsigned char *)(unsigned)0x4) &&
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c8(*(undefined4 *)(unsigned)(ar6 + 0xc),4,4,ar7_00)), (char)uVar1 == '\0')) {
      pcVar6 = ((void *)0x8c05eec4);
      uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c05eec4(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,((void *)0x8c05eec4),ar7_00));
      if (((char)uVar1 == '\x02') &&
         (iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5_01,pcVar6,ar7_00)), iVar4 == -1)) {
        ar5_01 = ((void *)0x8c027930);
        iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),((void *)0x8c027930),pcVar6,ar7_00));
        if ((((iVar4 == 0) &&
             (uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_a0_035724(*(undefined4 *)(unsigned)(ar6 + 0x18),ar5_01,pcVar6,ar7_00)),
             (char)uVar1 == '\x02')) && (ar4[0x879] == (unsigned char)0x0)) &&
           (((ar5_01 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 384)), get_field_4_062878(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_00)),
             ar5_01 == (unsigned char *)(unsigned)0x1 &&
             (iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),1,pcVar6,ar7_00)), iVar4 == 0))
            && (uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c05eec4(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_00)),
               (char)uVar1 == '\x02')))) {
          iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02c340(*(int *)(unsigned)(ar6 + 4) + 0x90,((void *)0x8c02c340),pcVar6,ar7_00));
          ar5_01 = (unsigned char *)(unsigned)0x2d;
          if (iVar4 < 0x2d) {
            (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,0x2d,pcVar6,ar7_00));
            if (cVar11 == '\0') {
              fVar8 = 21.0;
            }
            else {
              fVar7 = 21.0;
              fVar8 = 2.85865e-43;
            }
            if (cVar10 != '\0' || fVar8 <= fVar7) {
              (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,ar5_01,pcVar6,ar7_00));
              if (cVar11 == '\0') {
                fVar7 = 25.0;
              }
              else {
                fVar8 = 25.0;
                fVar7 = 5.49309e-43;
              }
              if (cVar10 == '\0' && fVar8 < fVar7) {
                (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x188))))(ar5,ar5_01,pcVar6,ar7_00));
                if (cVar11 == '\0') {
                  pcVar9 = (unsigned char *)(unsigned)0x42980000;
                }
                else {
                  fVar7 = 76.0;
                  pcVar9 = ((void *)0x8c025f68);
                }
                if (cVar10 == '\0' && (float)(uint)pcVar9 < fVar7) {
                  ar5_01 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 4));
                  uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c025f68(ar5_01 + 0x78,ar5_01,pcVar6,ar7_00));
                  if ((char)uVar1 != '\x01') {
                    if ((char)ar4[0x98] < '\x04') {
                      ar5_01 = (unsigned char *)(unsigned)0x5;
                      iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,5,pcVar6,ar7_00));
                      if (iVar4 != 1) goto LAB_8c063f66;
                    }
                    iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_00));
                    if (iVar4 == 0) {
                      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,pcVar6,ar7_00));
                      ar5_01 = (unsigned char *)(unsigned)0x0;
                      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x17c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 384)); FUN_8c063800(*(undefined4 *)(unsigned)(ar6 + 0xc),0,pcVar6,ar7_00); });
                      ar4[0x879] = (unsigned char)0x1;
                      *(undefined4 *)(unsigned)(ar4 + 0x86c) = 0;
                      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
                      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
                      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
                      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x12;
                      (*(undefined1 *)(unsigned)0x8c136908) = 0x12;
                      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0xb;
                      (*(undefined1 *)(unsigned)0x8c13690c) = 0xb;
                      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0xc;
                      (*(undefined1 *)(unsigned)0x8c136910) = 0xc;
                      pcVar6 = (unsigned char *)(unsigned)((undefined1 *)(unsigned)0x8c13686c);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_8c063f66:
  ar7_01 = (char *)(unsigned)ar7_00;
  if (ar4[0x879] == (unsigned char)0x1) {
    if (*(int *)(unsigned)(ar4 + 900) == -1) {
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7_00));
      ar7_01 = ((undefined1 *)(unsigned)0x8c136cf1);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 384)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 384)) - 8); FUN_8c0303b8(ar4 + 0x9c,10,0,((undefined1 *)(unsigned)0x8c136cf1)); });
      *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
      pcVar6 = ar4 + 0x9c;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0f8320(0x8c35468c,*(undefined4 *)(unsigned)(ar4 + 0x388),pcVar6,ar7_01));
      *(undefined4 *)(unsigned)(ar4 + 900) = uVar1;
      *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c030870(ar4 + 0x9c,2,pcVar6,ar7_01));
    }
    *(int *)(unsigned)(ar4 + 0x86c) = *(int *)(unsigned)(ar4 + 0x86c) + 1;
    pcVar6 = ar4;
    if ((300 < *(int *)(unsigned)(ar4 + 0x86c)) ||
       (iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),((void *)0x8c03598c),ar4,ar7_01)),
       iVar4 != 0)) {
      ar4[0x879] = (unsigned char)0x0;
      *(undefined4 *)(unsigned)(ar4 + 0x86c) = 0;
    }
    ar5_01 = ar6;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02fcc4(ar4,ar6,pcVar6,ar7_01));
    if (((iVar4 == 1) &&
        (uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c8(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_01)), (char)uVar1 == '\0')
        ) && (iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_01)),
             iVar4 == 0)) {
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c0(*(undefined4 *)(unsigned)(ar6 + 0xc),1,pcVar6,ar7_01));
      ar4[0x879] = (unsigned char)0x2;
      ar5_01 = (unsigned char *)(unsigned)0x2;
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c05f498(*(undefined4 *)(unsigned)(ar6 + 0xc),2,pcVar6,ar7_01));
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c8(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_01));
  if ((char)uVar1 != 1) {
    return (undefined **)(unsigned)(int)(char)uVar1;
  }
  if ((char)ar4[0x879] != 2) {
    return (undefined **)(unsigned)(int)(char)ar4[0x879];
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_01));
  if (8 < iVar4) {
    return (undefined **)(unsigned)8;
  }
  if (iVar4 < 0) {
    return (undefined **)(unsigned)8;
  }
  ppuVar3 = &(*(undefined1 *)(unsigned)0x8c0641ac);
                    
  switch(iVar4) {
  case 1:
    if (*(int *)(unsigned)(ar4 + 0x40) == 0x1b) {
      ppuVar3 = (undefined **)(unsigned)0x1b;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c0(*(undefined4 *)(unsigned)(ar6 + 0xc),1,pcVar6,ar7_01));
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x1b;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x1b;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x1b;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x36;
      (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
      ppuVar3 = (undefined **)(unsigned)0xa4;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
    }
    break;
  case 2:
    ppuVar3 = *(undefined ***)(unsigned)(ar4 + 900);
    if (ppuVar3 == (undefined **)(unsigned)0xffffffff) {
      if (*(int *)(unsigned)(ar4 + 4) == 0xd) {
        ppuVar3 = (undefined **)(unsigned)0xd;
      }
      else {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02fcc4(ar4,ar6,pcVar6,ar7_01));
        if (iVar4 == 1) {
          ppuVar3 = (undefined **)(unsigned)0x1;
        }
        else {
          if (*(int *)(unsigned)(ar4 + 900) == -1) {
            uVar1 = 0;
            (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7_01));
            uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c064bac(*(undefined4 *)(unsigned)(ar6 + 0xc),uVar1,pcVar6,ar7_01));
            if ((char)uVar1 == '\0') {
              ar7_01 = ((undefined1 *)(unsigned)0x8c136d17);
              ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c136a1c)); *(unsigned *)((((unsigned long)(fr0_ - 384)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 384)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x2a,0,((undefined1 *)(unsigned)0x8c136d17)); });
              *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
              pcVar6 = ar4 + 0x9c;
              uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0f8320(0x8c35468c,*(undefined4 *)(unsigned)(ar4 + 0x388),pcVar6,ar7_01));
              *(undefined4 *)(unsigned)(ar4 + 900) = uVar1;
              *(undefined4 *)(unsigned)(ar4 + 0x14c) = 1;
            }
            else {
              ar7_01 = ((undefined1 *)(unsigned)0x8c136d23);
              ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 384)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 384)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x2a,0,((undefined1 *)(unsigned)0x8c136d23)); });
              *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
              pcVar6 = ar4 + 0x9c;
              uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0f8320(0x8c35468c,*(undefined4 *)(unsigned)(ar4 + 0x388),pcVar6,ar7_01));
              *(undefined4 *)(unsigned)(ar4 + 900) = uVar1;
              *(undefined4 *)(unsigned)(ar4 + 0x14c) = 1;
            }
          }
          if (*(int *)(unsigned)(ar4 + 0x14c) == 0) {
            ppuVar3 = (undefined **)(unsigned)0x0;
          }
          else if (*(int *)(unsigned)(ar4 + 900) == -1) {
            ppuVar3 = (undefined **)(unsigned)0xffffffff;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
            *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
            *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x12;
            (*(undefined1 *)(unsigned)0x8c136908) = 0x12;
            *(undefined4 *)(unsigned)(ar4 + 0x844) = 0xb;
            (*(undefined1 *)(unsigned)0x8c13690c) = 0xb;
            *(undefined4 *)(unsigned)(ar4 + 0x848) = 0xc;
            (*(undefined1 *)(unsigned)0x8c136910) = 0xc;
            (vsp = ((unsigned long)(fr0_ - 384)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,ar7_01));
            (vsp = ((unsigned long)(fr0_ - 384)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x30)),pcVar6,ar7_01));
            (vsp = ((unsigned long)(fr0_ - 384)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,pcVar6,ar7_01));
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x13c44960000;
            }
            (vsp = ((unsigned long)(fr0_ - 384)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,ar7_01));
            (vsp = ((unsigned long)(fr0_ - 384)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x40)),pcVar6,ar7_01));
            (vsp = ((unsigned long)(fr0_ - 384)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,pcVar6,ar7_01));
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x8044af0000;
            }
            ppuVar3 = (undefined **)(unsigned)0x80;
            ar4[0x80] = (unsigned char)0x0;
          }
        }
      }
    }
    break;
  case 3:
    ppuVar3 = *(undefined ***)(unsigned)(ar4 + 900);
    if (ppuVar3 == (undefined **)(unsigned)0xffffffff) {
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7_01));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c136a1c)); *(unsigned *)((((unsigned long)(fr0_ - 384)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 384)) - 8); FUN_8c0303b8(ar4 + 0x9c,3,0,((undefined1 *)(unsigned)0x8c136d2f)); });
      *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0f8320(0x8c35468c,*(undefined4 *)(unsigned)(ar4 + 0x388),ar4 + 0x9c,((void *)0x8c0f8320)));
      uVar5 = 900;
      *(undefined4 *)(unsigned)(ar4 + 900) = uVar1;
      *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
      if (*(int *)(unsigned)(ar4 + 900) == -1) {
        ppuVar3 = (undefined **)(unsigned)0xffffffff;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0xb;
        (*(undefined1 *)(unsigned)0x8c136908) = 0xb;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0xc;
        (*(undefined1 *)(unsigned)0x8c13690c) = 0xc;
        uVar1 = 0x36;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        (vsp = ((unsigned long)(fr0_ - 384)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x50)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,0x36,900));
        (vsp = ((unsigned long)(fr0_ - 384)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x50)),uVar1,uVar5));
        (vsp = ((unsigned long)(fr0_ - 384)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,uVar1,uVar5));
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x8044af0000;
        }
        ppuVar3 = (undefined **)(unsigned)0x80;
        ar4[0x80] = (unsigned char)0x0;
      }
    }
    break;
  case 4:
    if (*(int *)(unsigned)(ar4 + 0x40) == 0x1d) {
      return (undefined **)(unsigned)0x1d;
    }
    if (*(int *)(unsigned)(ar4 + 0x40) == 0x1c) {
      return (undefined **)(unsigned)0x1c;
    }
    if (*(int *)(unsigned)(ar4 + 0x10c) == 0) {
      return (undefined **)(unsigned)0;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c064bac(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_01));
    if (((((char)uVar1 < '\x02') ||
         (iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5_01,pcVar6,ar7_01)), iVar4 != -1)) ||
        (uVar1 = (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c05eec4(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_01)),
        (char)uVar1 != '\x02')) || (*(int *)(unsigned)(ar4 + 0x10c) != 4)) {
      if (*(int *)(unsigned)(ar4 + 0x10c) == 4) {
LAB_8c064842:
        (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c064b84(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_01,pcVar6,ar7_01));
      }
      else {
        ar7_01 = (char *)(unsigned)0x10c;
        pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10c));
        if (pcVar6 == (unsigned char *)(unsigned)0x6) goto LAB_8c064842;
      }
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c0(*(undefined4 *)(unsigned)(ar6 + 0xc),1,pcVar6,ar7_01));
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      if (*(int *)(unsigned)(ar4 + 0x10c) == 4) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x31;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x31;
        (*(undefined1 *)(unsigned)0x8c136908) = 0x31;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x1c;
        ar7_01 = (char *)(unsigned)0x840;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x1c;
        (*(undefined1 *)(unsigned)0x8c136908) = 0x1c;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x36;
      (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0b9ed4(*(undefined4 *)(unsigned)(ar6 + 0x18),0x24,0x1b,ar7_01));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c064ba0(*(undefined4 *)(unsigned)(ar6 + 0x18),3,pcVar6,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0xd8))))(ar5,*(undefined4 *)(unsigned)ar6,pcVar6,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c0(*(undefined4 *)(unsigned)(ar6 + 0xc),1,pcVar6,ar7_01));
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x1d;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x1d;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x1d;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x2c;
      (*(undefined1 *)(unsigned)0x8c13690c) = 0x2c;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0fa6c8(0x8c35468c,0x2c,pcVar6,ar7_01));
    }
    ppuVar3 = (undefined **)(unsigned)0x10c;
    *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
    break;
  case 5:
    iVar4 = (vsp = ((unsigned long)(fr0_ - 384)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0xf0))))(ar5,ar5_01,pcVar6,ar7_01));
    if (iVar4 == 1) {
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c05f498(*(undefined4 *)(unsigned)(ar6 + 0xc),6,pcVar6,ar7_01));
      ppuVar3 = (undefined **)(unsigned)(vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0b9ed4(*(undefined4 *)(unsigned)(ar6 + 0x18),0x25,0x1b,ar7_01));
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x2c;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x2c;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x2c;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x36;
      (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
      ppuVar3 = (undefined **)(unsigned)0xa4;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
    }
    break;
  case 6:
    ppuVar3 = (undefined **)(unsigned)(vsp = ((unsigned long)(fr0_ - 384)), FUN_8c05f498(*(undefined4 *)(unsigned)(ar6 + 0xc),7,pcVar6,ar7_01));
    break;
  case 7:
    if (*(int *)(unsigned)(ar4 + 0x40) == 0x17) {
      ppuVar3 = (undefined **)(unsigned)0x17;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c0(*(undefined4 *)(unsigned)(ar6 + 0xc),1,pcVar6,ar7_01));
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 99;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x17;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x17;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x17;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x36;
      (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
      ppuVar3 = (undefined **)(unsigned)0xa4;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
    }
    break;
  case 8:
    ar4[0x879] = (unsigned char)0x0;
    pcVar6 = ((void *)0x8c035e84);
    (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c035e84(*(undefined4 *)(unsigned)(ar6 + 0xc),0,((void *)0x8c035e84),ar7_01));
    ar4[0x871] = (unsigned char)0x0;
    (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c05f498(*(undefined4 *)(unsigned)(ar6 + 0xc),0,pcVar6,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0637c0(*(undefined4 *)(unsigned)(ar6 + 0xc),0,pcVar6,ar7_01));
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0x14;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x840) = 0;
    (*(undefined1 *)(unsigned)0x8c136908) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x36;
    (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
    *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x36;
    (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
    ppuVar3 = (undefined **)(unsigned)(vsp = ((unsigned long)(fr0_ - 384)), FUN_8c0c4e2c(0x36,0xa0,((undefined1 *)(unsigned)0x8c13686c),0x36));
  }
  return ppuVar3;
}

__asm__(".globl _s_REQUEST_ATTENTION_063846\n.set _s_REQUEST_ATTENTION_063846, _s_REQUEST_ATTENTION_063846_def\n");
