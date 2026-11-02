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
undefined4 FUN_8c239212_def(undefined4 ar4,int *ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c239212";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 396; for (int i_ = 0; i_ < 396; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined *ar6_00;
  
  (*(uint *)(fr0_ - 0x150)) = 0xffffffff;
  (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(ar5));
  (*(undefined4 *)(fr0_ - 0x8)) = ar4;
  ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25b5b4(ar4,ar5,ar6,ar7); });
  ar6_00 = ((undefined1 *)(unsigned)0x8c26d968);
  uVar6 = (*(undefined4 *)(fr0_ - 0x8));
  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a174(((undefined1 *)(fr0_ - 0x10c)),(*(undefined4 *)(fr0_ - 0x8)),((undefined1 *)(unsigned)0x8c26d968),ar7));
  (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259be8(((undefined1 *)(fr0_ - 0x10c)),uVar6,ar6_00,ar7));
  if (-1 < (*(int *)(fr0_ - 0x13c))) {
    uVar6 = 4;
    piVar4 = &(*(int *)(fr0_ - 0x110));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c48(piVar4,4,ar6_00,ar7));
    if (iVar1 < 0) {
      (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,uVar6,ar6_00,ar7));
    }
    else if ((*(int *)(fr0_ - 0x110)) == 0x484d5650) {
      uVar6 = 8;
      piVar4 = &(*(int *)(fr0_ - 0x11c));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c48(piVar4,8,ar6_00,ar7));
      if (iVar1 < 0) {
        (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,uVar6,ar6_00,ar7));
      }
      else {
        (*(short *)(fr0_ - 0x114)) = (*(short *)(fr0_ - 0x118));
        (*(short *)(fr0_ - 0x112)) = (*(short *)(fr0_ - 0x116));
        ((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc))[1] = (int)(*(short *)(fr0_ - 0x116));
        (*(undefined4 *)(fr0_ - 0x148)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c238f02((int)(*(short *)(fr0_ - 0x118)),uVar6,ar6_00,ar7));
        piVar3 = &(*(int *)(fr0_ - 0x11c));
        (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c238f2a(((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x148)),piVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(0,0,piVar3,ar7));
        piVar7 = (int *)(unsigned)0x1;
        piVar4 = (int *)(unsigned)((*(int *)(fr0_ - 0x11c)) + 8);
        (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(piVar4,1,piVar3,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c239012(piVar4,piVar7,piVar3,ar7));
        if (iVar1 < 0) {
          (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar7,piVar3,ar7));
        }
        else {
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc))[1] = (int)(*(short *)(fr0_ - 0x112));
          iVar1 = 0;
          while( true ) {
            (*(int *)(fr0_ - 0x140)) = iVar1;
            if ((*(short *)(fr0_ - 0x112)) <= iVar1) {
              (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar7,piVar3,ar7));
              return 1;
            }
            piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc));
            (*(int *)(fr0_ - 0x144)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c239150(((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc)),iVar1,piVar3,ar7));
            (*(unsigned *)(fr0_ - 0x128) = (unsigned)(unsigned long)((int *)(unsigned)((*(int *)(fr0_ - 0x144)) * 0xc + *((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc)))));
            (*(unsigned *)(fr0_ - 0x120) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)) + 2));
            if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[1] & 0x1000000U) != 0) {
              piVar3 = (int *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[2] & 0x3ffffff);
              (*(uint *)(fr0_ - 0x150)) = (uint)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[2] >> 0x1a;
              piVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b08);
              piVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c);
              (*(unsigned *)(fr0_ - 0x138) = (unsigned)(unsigned long)(piVar3));
              (*(int *)(fr0_ - 0x130)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),piVar3,ar7));
              if ((*(int *)(fr0_ - 0x130)) < 0) {
                (*(int *)(fr0_ - 0x158)) = 2;
              }
              else {
                piVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b08);
                piVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c);
                piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                ar7 = (*(uint *)(fr0_ - 0x150));
                (*(int *)(fr0_ - 0x134)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a5c0((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),(*(uint *)(fr0_ - 0x150))));
                if ((*(int *)(fr0_ - 0x134)) < 0) {
                  (*(int *)(fr0_ - 0x158)) = 0;
                }
                else {
                  (*(int *)(fr0_ - 0x158)) = 1;
                }
              }
              (*(int *)(fr0_ - 0x154)) = 1;
              goto LAB_8c2394ac;
            }
            (*(int *)(fr0_ - 0x154)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c2391a8(piVar4,iVar1,piVar3,ar7));
            if ((*(int *)(fr0_ - 0x154)) < 0) break;
            piVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b08);
            piVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c);
            if ((*(int *)(fr0_ - 0x154)) == 1) {
              piVar3 = (int *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[2] & 0x3ffffff);
              (*(uint *)(fr0_ - 0x150)) = (uint)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[2] >> 0x1a;
              (*(unsigned *)(fr0_ - 0x138) = (unsigned)(unsigned long)(piVar3));
              (*(int *)(fr0_ - 0x130)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),piVar3,ar7));
              if ((*(int *)(fr0_ - 0x130)) < 0) {
LAB_8c239438:
                (*(int *)(fr0_ - 0x158)) = 2;
              }
              else {
                piVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b08);
                piVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c);
                piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                ar7 = (*(uint *)(fr0_ - 0x150));
                (*(int *)(fr0_ - 0x134)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a5c0((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),(*(uint *)(fr0_ - 0x150))));
                if ((*(int *)(fr0_ - 0x134)) < 0) {
                  (*(int *)(fr0_ - 0x158)) = 0;
                }
                else {
                  (*(int *)(fr0_ - 0x158)) = 1;
                }
              }
            }
            else {
              piVar3 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[2];
              (*(unsigned *)(fr0_ - 0x138) = (unsigned)(unsigned long)(piVar3));
              (*(int *)(fr0_ - 0x130)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),piVar3,ar7));
              if ((*(int *)(fr0_ - 0x130)) < 0) goto LAB_8c239438;
              (*(int *)(fr0_ - 0x158)) = 1;
            }
LAB_8c2394ac:
            if ((*(int *)(fr0_ - 0x158)) == 0) {
              (*(unsigned *)(fr0_ - 0x124) = (unsigned)(unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + (*(int *)(fr0_ - 0x130)) * 0x11));
              (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(4,1,piVar3,ar7));
              iVar1 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c48(((int * *)(fr0_ - 0x14c)),4,piVar3,ar7));
              if (iVar1 < 0) {
                uVar6 = 0;
                piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar3,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),0); });
                *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar3,piVar7,uVar6));
                return 0xffffffff;
              }
              piVar7 = (int *)(unsigned)0x1;
              piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14c));
              (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14c)),1,piVar3,ar7));
              if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] & 2U) == 0) {
                uVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[1] & 0xa0000000;
                if ((uVar2 == 0) || (uVar2 == 0x20000000)) {
                  (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a914(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5,piVar3,ar7));
                  if ((*(int *)(fr0_ - 0x13c)) < 0) {
                    uVar6 = 1;
                    piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                    piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar3,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),1); });
                    *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar3,piVar7,uVar6));
                    return 0xffffffff;
                  }
                  ar7 = 1;
                  ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),1); });
                  piVar7 = (int *)(unsigned)0x2;
                  *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = 0;
                  piVar3 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[5];
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),2,piVar3,ar7); });
                  ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] | 8;
                }
                else if (uVar2 == 0x80000000) {
                  ar7 = 1;
                  piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                  piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar7,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),1); });
                  *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = 0;
                }
              }
              else {
                uVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[1] & 0xa0000000;
                if (uVar2 == 0) {
                  ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4];
                  piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                  piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar7,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),ar7); });
                  *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10];
                  *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = 0;
LAB_8c239986:
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25a6ea(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),piVar7,piVar3,ar7); });
                }
                else if (uVar2 == 0x80000000) {
                  if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] & 1U) == 0) {
                    (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5,piVar3,ar7));
                    if ((*(int *)(fr0_ - 0x13c)) < 0) {
                      uVar6 = 2;
                      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                      piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                      piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                      ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar3,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),2); });
                      *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10];
                      *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                      (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar3,piVar7,uVar6));
                      return 0xffffffff;
                    }
                    ar7 = 2;
                    ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),2); });
                    piVar7 = (int *)(unsigned)0x1;
                    *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10];
                    *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = 0;
                    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x14));
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),1,piVar3,ar7); });
                  }
                  else {
                    ar7 = 3;
                    piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                    piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar7,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),3); });
                    *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10];
                    *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = 0;
                  }
                }
                else if (uVar2 == 0x20000000) {
                  if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] & 1U) == 0) {
                    (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5,piVar3,ar7));
                    if ((*(int *)(fr0_ - 0x13c)) < 0) {
                      uVar6 = 2;
                      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                      piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                      piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                      ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar3,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),2); });
                      *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10];
                      *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                      (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar3,piVar7,uVar6));
                      return 0xffffffff;
                    }
                    ar7 = 2;
                    ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),2); });
                    piVar7 = (int *)(unsigned)0x3;
                    *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10];
                    *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = 0;
                    piVar3 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[5];
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),3,piVar3,ar7); });
                  }
                  else {
                    ar7 = 3;
                    piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                    piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar7,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),3); });
                    *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x40) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10];
                    *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = 0;
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25a6ea(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),piVar7,piVar3,ar7); });
                  }
                }
              }
            }
            else if ((*(int *)(fr0_ - 0x158)) == 1) {
              (*(unsigned *)(fr0_ - 0x124) = (unsigned)(unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + (*(int *)(fr0_ - 0x130)) * 0x11));
              ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[2] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124));
              uVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[1] & 0xa0000000;
              if (uVar2 == 0) {
                (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(4,1,piVar3,ar7));
                uVar6 = 4;
                ppiVar5 = ((int * *)(fr0_ - 0x14c));
                iVar1 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c48(ppiVar5,4,piVar3,ar7));
                if (iVar1 < 0) {
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7));
                  return 0xffffffff;
                }
                piVar7 = (int *)(unsigned)0x1;
                piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14c));
                (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14c)),1,piVar3,ar7));
                if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] & 2U) == 0) {
                  piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128));
                  (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a914(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),piVar7,piVar3,ar7));
                  if ((*(int *)(fr0_ - 0x13c)) < 0) {
                    *(short *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar7,piVar3,ar7));
                    return 0xffffffff;
                  }
                  *(undefined2 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x42) = 0;
                  if ((*(int *)(fr0_ - 0x154)) == 0) {
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124));
                    (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c2571fe(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)),piVar7,piVar3,ar7));
                    ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] | 2;
                    *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x10) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10] + 1;
                  }
                  else {
                    piVar7 = (int *)(unsigned)0x2;
                    piVar3 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[5];
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),2,piVar3,ar7); });
                    ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] | 8;
                  }
                }
                else {
                  if ((*(int *)(fr0_ - 0x154)) != 0) goto LAB_8c239986;
                  *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x10) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10] + 1;
                }
              }
              else if (uVar2 == 0x80000000) {
                if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] & 1U) == 0) {
                  piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128));
                  (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),piVar7,piVar3,ar7));
                  if ((*(int *)(fr0_ - 0x13c)) < 0) {
                    *(short *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar7,piVar3,ar7));
                    return 0xffffffff;
                  }
                  *(undefined2 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x42) = 0;
                  if ((*(int *)(fr0_ - 0x154)) == 0) {
                    ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] | 1;
                  }
                  else {
                    piVar7 = (int *)(unsigned)0x1;
                    piVar3 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[5];
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),1,piVar3,ar7); });
                  }
                }
                else {
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(4,1,piVar3,ar7));
                  uVar6 = 4;
                  ppiVar5 = ((int * *)(fr0_ - 0x14c));
                  iVar1 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c48(ppiVar5,4,piVar3,ar7));
                  if (iVar1 < 0) {
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7));
                    return 0xffffffff;
                  }
                  piVar7 = (int *)(unsigned)0x1;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14c));
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14c)),1,piVar3,ar7));
                }
              }
              else if (uVar2 == 0x20000000) {
                if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] & 2U) == 0) {
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(4,1,piVar3,ar7));
                  uVar6 = 4;
                  ppiVar5 = ((int * *)(fr0_ - 0x14c));
                  iVar1 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c48(ppiVar5,4,piVar3,ar7));
                  if (iVar1 < 0) {
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7));
                    return 0xffffffff;
                  }
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14c)),1,piVar3,ar7));
                  piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128));
                  (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a914(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),piVar7,piVar3,ar7));
                  if ((*(int *)(fr0_ - 0x13c)) < 0) {
                    *(short *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar7,piVar3,ar7));
                    return 0xffffffff;
                  }
                  *(undefined2 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x42) = 0;
                  if ((*(int *)(fr0_ - 0x154)) == 0) {
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124));
                    (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c2571fe(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)),piVar7,piVar3,ar7));
                    ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] | 2;
                    *(undefined2 *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x10) = 1;
                  }
                  else {
                    piVar7 = (int *)(unsigned)0x2;
                    piVar3 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[5];
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),2,piVar3,ar7); });
                    ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] | 8;
                  }
                }
                else if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] & 1U) == 0) {
                  piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 5;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128));
                  (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),piVar7,piVar3,ar7));
                  if ((*(int *)(fr0_ - 0x13c)) < 0) {
                    *(short *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar7,piVar3,ar7));
                    return 0xffffffff;
                  }
                  *(undefined2 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x42) = 0;
                  if ((*(int *)(fr0_ - 0x154)) == 0) {
                    ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[4] | 1;
                    *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x10) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10] + 1;
                  }
                  else {
                    piVar7 = (int *)(unsigned)0x3;
                    piVar3 = (int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[5];
                    piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25a608(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),3,piVar3,ar7); });
                  }
                }
                else {
                  if ((*(int *)(fr0_ - 0x154)) == 0) {
                    *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124)) + 0x10) = (short)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x124))[0x10] + 1;
                  }
                  else {
                    ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); FUN_8c25a6ea(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),piVar7,piVar3,ar7); });
                  }
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(4,1,piVar3,ar7));
                  uVar6 = 4;
                  ppiVar5 = ((int * *)(fr0_ - 0x14c));
                  iVar1 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c48(ppiVar5,4,piVar3,ar7));
                  if (iVar1 < 0) {
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                    (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7));
                    return 0xffffffff;
                  }
                  piVar7 = (int *)(unsigned)0x1;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14c));
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a122(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14c)),1,piVar3,ar7));
                }
              }
            }
            else if ((*(int *)(fr0_ - 0x158)) == 2) {
              piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
              (*(unsigned *)(fr0_ - 0x188) = (unsigned)(unsigned long)((int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a710(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),piVar7,piVar3,ar7))));
              uVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128))[1] & 0xa0000000;
              if (uVar2 == 0) {
                piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188));
                (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a770(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188)),piVar3,ar7));
                if ((*(int *)(fr0_ - 0x13c)) < 0) {
                  uVar6 = 0;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                  piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar7,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),0); });
                  *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar7,piVar3,uVar6));
                  return 0xffffffff;
                }
                ar7 = 2;
                piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                (*(unsigned *)(fr0_ - 0x188) = (unsigned)(unsigned long)(piVar7));
                ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar7,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),2); });
                *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = 0;
                if ((*(int *)(fr0_ - 0x154)) != 0) {
                  *(uint *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x10) = *(uint *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x10) | 8;
                }
              }
              else if (uVar2 == 0x80000000) {
                piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188));
                (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188)),piVar3,ar7));
                if ((*(int *)(fr0_ - 0x13c)) < 0) {
                  uVar6 = 0;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                  piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar7,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),0); });
                  *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar7,piVar3,uVar6));
                  return 0xffffffff;
                }
                ar7 = 1;
                piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                (*(unsigned *)(fr0_ - 0x188) = (unsigned)(unsigned long)(piVar7));
                ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar7,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),1); });
                *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = 0;
              }
              else if (uVar2 == 0x20000000) {
                (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a838(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188)),piVar3,ar7));
                if ((*(int *)(fr0_ - 0x13c)) < 0) {
                  uVar6 = 0;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                  piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),0); });
                  *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188)),piVar7,uVar6));
                  return 0xffffffff;
                }
                piVar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188));
                (*(int *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c25a914(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x128)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x188)),piVar3,ar7));
                if ((*(int *)(fr0_ - 0x13c)) < 0) {
                  uVar6 = 1;
                  piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                  piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar7,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),1); });
                  *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = -(short)(*(int *)(fr0_ - 0x13c));
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,piVar7,piVar3,uVar6));
                  return 0xffffffff;
                }
                ar7 = 3;
                piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120));
                piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138));
                (*(unsigned *)(fr0_ - 0x188) = (unsigned)(unsigned long)(piVar7));
                ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c25a380(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)),piVar7,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x138)),3); });
                *(undefined2 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x42) = 0;
                if ((*(int *)(fr0_ - 0x154)) != 0) {
                  *(uint *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x10) = *(uint *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x120)) + 0x10) | 8;
                }
              }
            }
            iVar1 = (*(int *)(fr0_ - 0x140)) + 1;
          }
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = (*(int *)(fr0_ - 0x144));
          (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,iVar1,piVar3,ar7));
        }
      }
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b4) = 4;
      (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c259c40(piVar4,uVar6,ar6_00,ar7));
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c239212\n.set _FUN_8c239212, _FUN_8c239212_def\n");
