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
uint FUN_8c0839c0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0839c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 192; for (int i_ = 0; i_ < 192; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  uint uVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr3 = 0;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 192)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0x18)) + 0x1cc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0x18)),ar5,ar6,ar7));
  iVar1 = iVar1 + 4;
  (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),iVar1,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x2b0) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 192)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7));
    if (iVar1 == 1) {
      ar7_00 = 0;
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 192)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      *(int *)(unsigned)(ar4 + 0x2b0) = *(int *)(unsigned)(ar4 + 0x2b0) + 1;
      uVar2 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_assign(ar4 + 0x280,uVar2,uVar3,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x294) = 1;
      if (cVar11 == '\0') {
        uVar7 = 0x42340000;
      }
      else {
        uVar7 = 0xac;
      }
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x30)),uVar2,uVar3,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x30)),uVar3,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x40)),ar4 + 0x48,uVar3,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(unsigned)0x8c1379cc),uVar3,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_add(ar4 + 0x280,((undefined1 *)(fr0_ - 0x60)),uVar3,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x70)),uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c022fc0(ar4 + 0x54,((undefined1 *)(fr0_ - 0x24)),uVar3,ar7_00));
      if (cVar11 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar7);
      }
      else {
        uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      }
      if (cVar10 == '\0' && (float)uVar5 < F32HI(uVar5)) {
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),in_fr3);
          dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
          dVar6 = -1.6035025660963675e-250;
        }
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D(F32HI(dVar8) -
                                   F32LO(dVar6) * F32HI(dVar6),SUB84(dVar8,0)
                                  );
        }
        else {
          dVar8 = dVar8 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x5c) = (int)(D2U(dVar8) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = dVar8;
        }
      }
      ar7 = *(undefined4 *)(unsigned)(ar5 + 0x18);
      ar6 = *(int *)(unsigned)(ar5 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x2b0) == 1) {
    ar6 = ar4 + 0x54;
    uVar2 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 192)), pure_virtual_stub(ar4,uVar2,ar6,ar7));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x294) = *(int *)(unsigned)(ar4 + 0x294) + 1;
      if (cVar11 == '\0') {
        uVar3 = 0x42340000;
      }
      else {
        uVar3 = 0xac;
      }
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x7c)),uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x7c)),ar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x8c)),ar4 + 0x48,ar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(unsigned)0x8c1379d0),ar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xbc))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_add(ar4 + 0x280,((undefined1 *)(fr0_ - 0xac)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xbc)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 192)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      bVar9 = *(int *)(unsigned)(ar4 + 0x294) < 9;
      if (!bVar9) {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
      }
      uVar4 = (uint)bVar9;
      (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c022fc0(ar4 + 0x54,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
      if (cVar11 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3);
      }
      else {
        uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      }
      if (cVar10 == '\0' && (float)uVar5 < F32HI(uVar5)) {
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),in_fr3);
          dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
          dVar6 = -1.6035025660963675e-250;
        }
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D(F32HI(dVar8) -
                                   F32LO(dVar6) * F32HI(dVar6),SUB84(dVar8,0)
                                  );
        }
        else {
          dVar8 = dVar8 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x5c) = (int)(D2U(dVar8) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = dVar8;
        }
      }
      ar7 = *(undefined4 *)(unsigned)(ar5 + 0x18);
      ar6 = *(int *)(unsigned)(ar5 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0839c0\n.set _FUN_8c0839c0, _FUN_8c0839c0_def\n");
