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
undefined4 FUN_8c082c50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c082c50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 248; for (int i_ = 0; i_ < 248; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  double in_dr0 = 0;
  double dVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  uVar4 = 1;
  uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
  ar5_00 = ((undefined1 *)(unsigned)0x8c125e78);
  (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c031c74(ar4,((undefined1 *)(unsigned)0x8c125e78),uVar3,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(ar4 + 100) == 1) {
      uVar4 = 0;
    }
    else if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
      uVar4 = 0;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c031748(ar4,ar5_00,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(unsigned)0x8c125e68),uVar3,ar7));
      uVar3 = 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x40)),1,ar7));
      (*(undefined8 *)(fr0_ - 0xd4)) = (double)(ulonglong)CONCAT14(iVar1 == 0,(undefined4)(*(undefined8 *)(fr0_ - 0xd4)));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,uVar3,ar7));
      if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xd4))+4)) != 0) {
        ar7_00 = 0;
        uVar2 = 0xffffffff;
        uVar3 = 8;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00));
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 248)), rand_range(ar4,5,7,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar3;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)(unsigned)0x16;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0));
      }
      else if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)(unsigned)0x10;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)(unsigned)0x10;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar3,ar7));
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    else if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xcc))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xcc)),uVar3,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,uVar3,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 248)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,uVar3,ar7));
      if (iVar1 != 1) {
        return 1;
      }
      uVar2 = 0;
      uVar3 = 0xffffffff;
      uVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar3,uVar2));
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      return 0;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7); });
    (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x50)),uVar3,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,uVar3,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 248)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,uVar3,ar7));
    if (iVar1 == 1) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      (*(int *)(fr0_ - 0xf4)) = ar4;
      if ((*(int *)(unsigned)(ar4 + 0x128) < 3) || (5 < *(int *)(unsigned)(ar4 + 0x128))) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 8;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7));
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 0x14;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7));
      }
    }
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xf4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 248)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,uVar3,ar7); });
    if (cVar6 == '\0') {
      iVar1 = (int)F32HI(in_dr0);
    }
    else {
      iVar1 = (int)in_dr0;
    }
    if (iVar1 == 0x25) {
      ar7 = *(undefined4 *)(unsigned)(ar5 + 0x18);
      uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
      (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c033474(ar4,0x1b,uVar3,ar7));
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x44bb8000,*(undefined4 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)) + 8));
      }
      else {
        dVar5 = 3.14625103273492e-312;
      }
      if (cVar6 == '\0') {
        dVar5 = CONCAT44D(F32HI(dVar5) - F32LO(dVar5),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar5;
      }
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0xd4)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xd4))+4)),(int)(D2U(dVar5) >> 0x20));
        dVar5 = (*(undefined8 *)(fr0_ - 0xd4));
      }
      (*(undefined8 *)(fr0_ - 0xd4)) = dVar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); Vec3_scale(ar4 + 0x14,&(*(undefined8 *)(fr0_ - 0xd4)),uVar3,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x60)),((undefined1 *)(unsigned)0x8c1379c8),uVar3,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x70)),uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar3,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c02374c(((undefined1 *)(fr0_ - 0x20)),uVar2,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_assign(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x80)),uVar3,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x90)),uVar2,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x9c)),*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 4),uVar3,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x9c)),uVar3,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xbc))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); Vec3_add(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),((undefined1 *)(fr0_ - 0xac)),uVar3,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0xbc)),uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,uVar3,ar7));
      ar6_00 = ((undefined1 *)(fr0_ - 0x20));
      (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c0dba50(*(undefined4 *)(unsigned)(ar5 + 0x18),((undefined1 *)(fr0_ - 0x30)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c031c74(ar4,((undefined1 *)(unsigned)0x8c125e78),*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),ar7));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c082c50\n.set _FUN_8c082c50, _FUN_8c082c50_def\n");
