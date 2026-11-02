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
undefined4 FUN_8c058d60_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c058d60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 292; for (int i_ = 0; i_ < 292; i_++) z_[i_] = 0; }
  int iVar1;
  code *ar5_00;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  double dVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar5_00 = ((void *)0x8c022c4c);
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 292)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),((void *)0x8c022c4c),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 292)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 292)), Vec3_assign(((undefined1 *)(fr0_ - 0x30)),ar6,ar6_00,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      ar6_00 = (undefined1 *)(unsigned)(ar4 + 0x34c);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c055c38(ar4,ar5,ar6_00,ar7));
      ar7_00 = ar7;
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
      break;
    case 1:
      uVar3 = ar5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c057164(ar4,ar5,ar6_00,ar7_00));
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x30)),uVar3,ar6_00,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); FUN_8c0230f0(ar5,uVar3,ar6_00,ar7_00); });
        puVar2 = ((undefined1 *)(fr0_ - 0x50));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x40)),puVar2,ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_normalize(((undefined1 *)(fr0_ - 0x60)),puVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x70)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); Vec3_scale(ar4 + 0x54,((undefined1 *)(unsigned)0x8c1365f0),ar6_00,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_assign(ar4 + 0x248,((undefined1 *)(fr0_ - 0x90)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x250));
        }
        else {
          dVar6 = *(double *)(unsigned)(ar4 + 0x48);
        }
        if (cVar8 == '\0') {
          fVar5 = F32LO(dVar6) - F32HI(dVar6);
        }
        else {
          fVar5 = SUB84(dVar6 - dVar6,0);
        }
        if (cVar8 != '\0' || fVar5 <= 0.0) {
          (vsp = ((unsigned long)(fr0_ - 292)), Vec3_assign(ar4 + 0x248,ar5,ar6_00,ar7_00));
        }
        *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      }
      break;
    case 2:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x30)),ar6,ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); FUN_8c0230f0(ar5,ar6,ar6_00,ar7_00); });
      puVar2 = ((undefined1 *)(fr0_ - 0xb0));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xa0)),puVar2,ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_normalize(((undefined1 *)(fr0_ - 0xc0)),puVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xd0)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xe0)),ar4 + 0x54,ar6_00,ar7_00));
      ar7_00 = ((undefined1 *)(fr0_ - 0xe0));
      ar6_00 = (undefined1 *)(unsigned)(ar4 + 0x248);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c04e0e0(ar4,ar5,ar6_00,ar7_00));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6_00,ar7_00));
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c030f2c(ar4 + 0x1fc,uVar3,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      }
      break;
    case 3:
      ar7_00 = (undefined1 *)(unsigned)0x1d;
      ar6_00 = ((undefined1 *)(fr0_ - 0x30));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c058024(ar4,ar5,ar6_00,0x1d));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c022d04(ar4 + 0x2a8,ar5,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c022d04(ar4 + 0x2d4,ar5,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 700) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xf0)),ar6,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xf0)),ar6_00,ar7_00); });
      ar6_00 = ((undefined1 *)(fr0_ - 0x100));
      (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6_00,ar7_00));
      ar6 = (undefined1 *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c032ab0(ar4,ar6,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x278) = in_dr0;
      }
      *(undefined4 *)(unsigned)(ar4 + 800) = 0;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 5:
      fVar5 = F32HI(in_dr0);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c057e58(ar4,ar6,ar6_00,ar7_00));
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        ar6_00 = (undefined1 *)(unsigned)0xffffffff;
        uVar3 = 0x1a;
        (vsp = ((unsigned long)(fr0_ - 292)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 292)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x120)),uVar3,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x110)),((undefined1 *)(fr0_ - 0x120)),ar6_00,ar7_00));
        if (cVar9 == '\0') {
          fVar7 = 2.0;
        }
        else {
          fVar5 = 2.0;
          fVar7 = 8.319336e+12;
        }
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6_00,ar7_00));
        if (cVar8 != '\0' || fVar5 <= fVar7) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
        }
      }
      break;
    case 6:
      (vsp = ((unsigned long)(fr0_ - 292)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar6_00,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      uVar4 = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c058d60\n.set _FUN_8c058d60, _FUN_8c058d60_def\n");
