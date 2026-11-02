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
undefined4 FUN_8c0845f4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0845f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 252; for (int i_ = 0; i_ < 252; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  float fVar8;
  double dVar6;
  double dVar7;
  undefined4 in_fr3 = 0;
  undefined8 in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x134);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 252)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7));
      if (iVar1 == 1) {
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
          fVar8 = 1235.0;
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
          fVar5 = 1235.0;
          fVar8 = 2.74654e-43;
        }
        if (cVar10 != '\0' || fVar5 <= fVar8) {
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_assign(ar4 + 0x54,((undefined1 *)(unsigned)0x8c125e48),ar6,ar7));
        }
        else {
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_scale(((undefined1 *)(unsigned)0x8c125e48),((undefined1 *)(unsigned)0x8c1379dc),ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x34)),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
        }
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_scale(ar4 + 0x54,ar4 + 0x48,ar6,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(unsigned)0x8c1379e0),ar6,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_add(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),((undefined1 *)(fr0_ - 0x54)),ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_assign(ar4 + 0x280,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x288));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x288);
          dVar6 = 6.54086966663815e-312;
        }
        if (cVar10 == '\0') {
          fVar5 = F32LO(dVar6) - F32HI(dVar6);
        }
        else {
          fVar5 = SUB84(dVar6 - dVar6,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 0x288) = fVar5;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x288) = in_xd0;
        }
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x74)),ar4 + 0x54,ar6,ar7));
      ar6 = 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x74)),1,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
      if (iVar1 == 0) {
        if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
          ar7 = 0;
          ar6 = 0xffffffff;
          uVar3 = 0x24;
          (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x24,0xffffffff,0));
        }
        else {
          ar7 = 0;
          ar6 = 0xffffffff;
          uVar3 = 0x2e;
          (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2e,0xffffffff,0));
        }
        (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 252)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7));
      fVar5 = F32HI(in_dr0);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xf8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 252)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,ar6,ar7); });
      if (cVar11 == '\0') {
        fVar8 = 90.0;
      }
      else {
        fVar5 = 90.0;
        fVar8 = 4.316e-43;
      }
      if (cVar10 != '\0' || fVar8 <= fVar5) {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      break;
    case 3:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_sub(ar4 + 0x280,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x84)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x94)),ar6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xf8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 252)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
      if (cVar11 == '\0') {
        (*(undefined8 *)(fr0_ - 0xb8)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xb8))+4)),(int)((ulonglong)in_dr0 >> 0x20));
        dVar6 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 1.3411048278844095e-08;
        (*(undefined8 *)(fr0_ - 0xb8)) = in_dr0;
      }
      if (cVar10 == '\0' && SUB84(dVar6,0) < F32HI(dVar6)) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar6 = -7.957972460180408e-251;
        }
        if (cVar10 == '\0') {
          fVar5 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar5,F32LO(dVar6) + fVar5);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0xb8)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_add(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),((undefined1 *)(fr0_ - 0xa4)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c022fc0((int)&(*(undefined8 *)(fr0_ - 0xb8)) + 4,ar4 + 0x280,ar6,ar7));
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),in_fr3);
        dVar7 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar7 = 6.54101886946819e-312;
      }
      if (cVar10 == '\0') {
        bVar9 = F32LO(dVar7) * F32HI(dVar7) <
                F32HI(dVar6);
      }
      else {
        bVar9 = dVar7 * dVar7 < dVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0xb8)) + 4,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6,ar7));
      if (bVar9) {
        if (*(int *)(unsigned)(ar4 + 0x2b8) == 1) {
          *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
        }
      }
      else {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      }
      break;
    case 4:
      ar6 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
      uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
      (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c031c74(ar4,uVar3,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar6,ar7));
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xf8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 252)); FUN_8c032204(ar4 + 0xb0,uVar3,ar6,ar7); });
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0845f4\n.set _FUN_8c0845f4, _FUN_8c0845f4_def\n");
