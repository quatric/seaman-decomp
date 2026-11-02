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
undefined4 FUN_8c0593cc_def(int ar4,int *ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c0593cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 360; for (int i_ = 0; i_ < 360; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *ar6_00;
  undefined1 *puVar7;
  uint ar7_00;
  uint ar7_01;
  undefined4 ar7_02;
  undefined4 uVar8;
  float fVar9;
  undefined8 in_dr0 = 0;
  undefined8 uVar10;
  double dVar11;
  float fVar12;
  undefined8 in_xd0 = 0;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar8 = 1;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ + 0x00000000)),ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
  uVar5 = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c030f2c(ar4 + 0x1fc,(*(undefined4 *)(fr0_ + 0x00000000)),1,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x40)),(*(undefined4 *)(fr0_ + 0x00000000)),uVar5,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0x40)),uVar5,ar7_00); });
      puVar7 = ((undefined1 *)(fr0_ - 0x50));
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c057b6c(ar4,ar7,puVar7,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,puVar7,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,puVar7,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c032ab0(ar4,uVar2,puVar7,ar7_00));
      if (cVar14 == '\0') {
        *(int *)(unsigned)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x278) = in_dr0;
      }
      uVar5 = 0;
      *(undefined4 *)(unsigned)(ar4 + 800) = 0;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if ((*(int *)(fr0_ + 0x00000004)) == 0x1c) {
        uVar5 = 0x100;
        uVar2 = 0;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), rand_range(ar4,0,0x100,ar7_00));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,uVar2,uVar5,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2d4,uVar2,uVar5,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 300) = 5;
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x20;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x20,0xffffffff,0));
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 5;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6));
          break;
        }
      }
      uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,uVar5,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x70)),uVar2,uVar5,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x60)),((undefined1 *)(fr0_ - 0x70)),uVar5,ar7_00));
      if (cVar14 == '\0') {
        in_dr0 = CONCAT44(0x40000000,uVar6);
      }
      else {
        in_dr0 = 0x8c022cb040000000;
      }
      ar7_01 = (uint)(cVar13 == '\0' && (float)in_dr0 < F32HI(in_dr0));
      ar7_00 = ar7_01;
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar5,ar7_01));
      (*(undefined4 *)(fr0_ + 0x00000000)) = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar5,ar7_00));
      if (ar7_01 != 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 300) = 2;
        (vsp = ((unsigned long)(fr0_ - 360)), vec3_clear(ar4 + 0x2a8,(*(undefined4 *)(fr0_ + 0x00000000)),uVar5,ar7_00));
        pcVar4 = ((void *)0x8c014e20);
        (vsp = ((unsigned long)(fr0_ - 360)), vec3_clear(ar4 + 0x2d4,((void *)0x8c014e20),uVar5,ar7_00));
        if ((*(int *)(fr0_ + 0x00000004)) == 0x1d) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 360)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x10c))))(ar5,pcVar4,uVar5,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c0d98d4(uVar2,pcVar4,uVar5,ar7_00));
        }
        break;
      }
    case 1:
      fVar9 = F32HI(in_dr0);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c057e58(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),uVar5,ar7_00));
      if (iVar1 == 0) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); FUN_8c0230f0(ar4 + 0x14,(*(undefined4 *)(fr0_ + 0x00000000)),uVar5,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x90)),(*(undefined4 *)(fr0_ + 0x00000000)),uVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x90)),uVar5,ar7_00));
        if (cVar14 == '\0') {
          pcVar4 = (code *)0x40000000;
        }
        else {
          fVar9 = 2.0;
          pcVar4 = ((void *)0x8c022cb0);
        }
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,uVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar5,ar7_00));
        if (cVar13 != '\0' || fVar9 <= (float)(uint)pcVar4) {
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          uVar5 = 300;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          iVar1 = ar4;
          (vsp = ((unsigned long)(fr0_ - 360)), vec3_clear(ar4 + 0x2a8,300,ar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), vec3_clear(ar4 + 0x2d4,uVar5,iVar1,ar7_00));
          if ((*(int *)(fr0_ + 0x00000004)) == 0x1d) {
            uVar2 = (vsp = ((unsigned long)(fr0_ - 360)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x10c))))(ar5,uVar5,iVar1,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c0d98d4(uVar2,uVar5,iVar1,ar7_00));
          }
        }
        else {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
        }
      }
      break;
    case 2:
      if ((*(int *)(fr0_ + 0x00000004)) == 0x1c) {
        uVar5 = 0x1c;
        puVar7 = ((undefined1 *)(fr0_ - 0x30));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c058024(ar4,ar7,puVar7,0x1c));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c03c314(ar4,ar7,puVar7,uVar5));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,ar7,puVar7,uVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x1a;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c03f39c(ar6,uVar5,uVar2,uVar6));
        }
      }
      else if ((*(int *)(fr0_ + 0x00000004)) == 0x1d) {
        uVar5 = 0x1d;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c058024(ar4,ar7,((undefined1 *)(fr0_ - 0x30)),0x1d));
        if (iVar1 == 0) {
          if (cVar14 == '\0') {
            uVar10 = CONCAT44(*(undefined4 *)(unsigned)(ar7 + 4),(int)in_dr0);
          }
          else {
            uVar10 = *(undefined8 *)(unsigned)(ar7 + 4);
          }
          uVar2 = 0x2a8;
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,((void *)0x8c022d04),0x2a8,uVar5));
          (vsp = ((unsigned long)(fr0_ - 360)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar7,uVar2,uVar5));
          if (cVar14 == '\0') {
            dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar7 + 4),(int)((ulonglong)uVar10 >> 0x20));
            uVar10 = in_xd0;
          }
          else {
            dVar11 = *(double *)(unsigned)(ar7 + 4);
          }
          if (cVar13 == '\0') {
            fVar9 = F32LO(dVar11) - F32HI(dVar11);
          }
          else {
            fVar9 = SUB84(dVar11 - dVar11,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2ac) = fVar9;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2ac) = uVar10;
          }
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x25;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x25,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6));
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
          *(undefined4 *)(unsigned)(ar4 + 300) = 6;
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa0)),uVar5,uVar2,uVar6));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0xa0)),uVar2,uVar6); });
          puVar7 = ((undefined1 *)(fr0_ - 0xb0));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c057b6c(ar4,ar7,puVar7,uVar6));
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,puVar7,uVar6));
          uVar5 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,puVar7,uVar6));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c030eb8(ar4 + 0x1fc,uVar5,puVar7,uVar6));
        }
      }
      else if ((*(int *)(fr0_ + 0x00000004)) == 0x31) {
        uVar5 = 0x1c;
        puVar7 = ((undefined1 *)(fr0_ - 0x30));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c058024(ar4,ar7,puVar7,0x1c));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c03c314(ar4,ar7,puVar7,uVar5));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,ar7,puVar7,uVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          uVar2 = 0;
          uVar5 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          iVar1 = ar4 + 0xb0;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(iVar1,iVar1,uVar5,uVar2));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c03f39c(ar6,iVar1,uVar5,uVar2));
        }
      }
      break;
    case 3:
      uVar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x26,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      *(undefined4 *)(unsigned)(ar4 + 700) = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      pcVar4 = ((void *)0x8c022d04);
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2d4,0x2d4,((void *)0x8c022d04),uVar5));
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,ar4 + 0x2a8,pcVar4,uVar5));
      uVar8 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c030eb8(ar4 + 0x1fc,(*(undefined4 *)(fr0_ + 0x00000000)),1,ar7_00));
      uVar5 = 0x1c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c058024(ar4,ar7,((undefined1 *)(fr0_ - 0x30)),0x1c));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 700) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
        (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,ar4,0,uVar5));
        uVar6 = 0;
        uVar2 = 0xffffffff;
        uVar5 = 0x1a;
        (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        *(undefined4 *)(unsigned)(ar4 + 0x218) = 4;
        (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
      break;
    case 5:
      (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,(*(undefined4 *)(fr0_ + 0x00000000)),1,ar7_00));
      fVar9 = F32HI(in_dr0);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x164))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 360)); CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),uVar5,ar7_00); });
      if (cVar14 == '\0') {
        fVar12 = 113.0;
      }
      else {
        fVar9 = 113.0;
        fVar12 = 1.04257e-42;
      }
      if (cVar13 != '\0' || fVar12 <= fVar9) {
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        ar7_02 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x55;
        (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x55,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar6,ar7_02));
        (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2d4,uVar5,uVar6,ar7_02));
        (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,uVar5,uVar6,ar7_02));
        uVar5 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c026db0(ar4,uVar5,uVar6,ar7_02));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,uVar6,ar7_02));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 360)), deref_u32(uVar2,uVar5,uVar6,ar7_02));
        uVar5 = puVar3[1];
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar5;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
        *(undefined4 *)(unsigned)(ar4 + 0x29c) = 1;
        *(undefined4 *)(unsigned)(ar4 + 300) = 4;
      }
      break;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c057e58(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),1,ar7_00));
      fVar9 = F32HI(in_dr0);
      if (iVar1 == 0) {
        pcVar4 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); FUN_8c0230f0(ar4 + 0x14,((void *)0x8c0230f0),uVar5,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd0)),pcVar4,uVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xc0)),((undefined1 *)(fr0_ - 0xd0)),uVar5,ar7_00));
        if (cVar14 == '\0') {
          pcVar4 = (code *)0x40000000;
        }
        else {
          fVar9 = 2.0;
          pcVar4 = ((void *)0x8c022cb0);
        }
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,uVar5,ar7_00));
        ar6_00 = ((void *)0x8c022cb0);
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,((void *)0x8c022cb0),ar7_00));
        (*(uint *)(fr0_ - 0x100)) = (uint)(cVar13 == '\0' && fVar9 < (float)(uint)pcVar4);
        if ((*(uint *)(fr0_ - 0x100)) == 0) {
          puVar7 = ((undefined1 *)(fr0_ - 0xe0));
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(puVar7,0,puVar7,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0xe0)),puVar7,ar7_00); });
          puVar7 = ((undefined1 *)(fr0_ - 0xf0));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c057b6c(ar4,ar7,puVar7,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,puVar7,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,puVar7,ar7_00));
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 800) = 0;
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2d4,(*(uint *)(fr0_ - 0x100)),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,(*(uint *)(fr0_ - 0x100)),ar6_00,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          uVar8 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,((undefined1 *)(fr0_ - 0x30)),0xffffffff));
  return uVar8;
}

__asm__(".globl _FUN_8c0593cc\n.set _FUN_8c0593cc, _FUN_8c0593cc_def\n");
