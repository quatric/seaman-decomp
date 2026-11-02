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
undefined4 FUN_8c07f8e0_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07f8e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined4 in_fr3 = 0;
  undefined4 uVar7;
  double dVar8;
  undefined8 in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  int *ain0;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  ain0 = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x10c))))(ar7,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_copy(&(*(undefined4 *)(fr0_ - 0x2c)),uVar1,ar6_00,ar7));
  uVar1 = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 176)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 176)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_normalize(((undefined1 *)(fr0_ - 0x4c)),uVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
  if (cVar11 == '\0') {
    dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),in_fr3);
    dVar5 = CONCAT44D(0x40a00000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0xdc;
    dVar8 = CONCAT44D(0x444d0000,(*(undefined4 *)(fr0_ - 0x2c)));
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
    dVar5 = 6.28646433727248e-312;
  }
  (*(undefined4 *)(fr0_ - 0x28)) = 0x444d0000;
  if (cVar10 == '\0') {
    fVar6 = F32HI(dVar5);
    fVar4 = F32LO(dVar5) * fVar6;
    dVar5 = CONCAT44D(fVar6,fVar4);
    dVar8 = CONCAT44D(F32HI(dVar8) + fVar4,SUB84(dVar8,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
    dVar8 = dVar8 + dVar5;
  }
  fVar4 = F32HI(dVar5);
  uVar7 = (undefined4)(D2U(dVar8) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x2c)) = uVar7;
  if (cVar11 != '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar8,0);
    (*(undefined4 *)(fr0_ - 0x28)) = uVar7;
  }
  if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(unsigned)(ar4 + 300);
    if ((iVar2 < 6) && (-1 < iVar2)) {
                    
      switch(iVar2) {
      case 0:
        if (*(int *)(unsigned)(ar4 + 0x2b8) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
          (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
          return 0;
        }
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
        ar6_00 = 1;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x6c)),1,ar7));
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6_00,ar7));
        if (iVar2 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        }
        break;
      case 1:
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        ar6_00 = 5;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 176)), rand_range(ar4,3,5,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar1;
      case 2:
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x7c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
          ar7 = (int *)(unsigned)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0x24;
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x24,0xffffffff,0));
        }
        else {
          ar7 = (int *)(unsigned)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0x2e;
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2e,0xffffffff,0));
        }
        (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7));
        break;
      case 3:
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7); });
        if (cVar11 == '\0') {
          fVar6 = 90.0;
        }
        else {
          fVar4 = 90.0;
          fVar6 = 7.51096e-43;
        }
        if (cVar10 != '\0' || fVar6 <= fVar4) {
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0x10;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        break;
      case 4:
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x8c)),((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
        uVar7 = SUB84(dVar8,0);
        (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x8c)),ar6_00,ar7));
        uVar1 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6_00,ar7));
        if (iVar2 == 7) {
          (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c032ab0(ar4,uVar1,ar6_00,ar7));
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c032204(ar4 + 0xb0,uVar1,ar6_00,ar7); });
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7); });
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar8 = 1.3411048278844095e-08;
        }
        if (cVar10 == '\0' && SUB84(dVar8,0) < F32HI(dVar8)) {
          if (cVar11 == '\0') {
            dVar8 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar8 = -7.957972460180408e-251;
          }
          if (cVar10 == '\0') {
            fVar4 = F32HI(dVar8);
            dVar8 = CONCAT44D(fVar4,F32LO(dVar8) + fVar4);
          }
          else {
            dVar8 = dVar8 + dVar8;
          }
          if (cVar11 == '\0') {
            *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar8,0);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
          }
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 176)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 176)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6_00,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 176)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 176)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x9c)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0xac)),ar6,ar6_00,ar7));
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),uVar7);
          dVar5 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          dVar5 = 3.051758535548288e-05;
        }
        if (cVar10 == '\0') {
          bVar9 = F32LO(dVar5) * F32HI(dVar5) <
                  F32HI(dVar8);
        }
        else {
          bVar9 = dVar5 * dVar5 < dVar8;
        }
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7));
        if (bVar9) {
          if (*(int *)(unsigned)(ar4 + 0x2b8) == 1) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
          }
        }
        else {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
        }
        break;
      case 5:
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        ar6_00 = ar5;
        (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031c74(ar4,ar5,ar5,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6_00,ar7));
        if (iVar2 == 1) {
          uVar3 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
          ar7 = (int *)(unsigned)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7));
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c032204(ar4 + 0xb0,uVar1,ar6_00,ar7); });
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07f8e0\n.set _FUN_8c07f8e0, _FUN_8c07f8e0_def\n");
