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
undefined4 FUN_8c0831c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0831c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float in_fr1 = 0;
  float fVar7;
  double dVar8;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar6 = 1;
  if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
    uVar6 = 0;
  }
  else {
    iVar1 = *(int *)(unsigned)(ar4 + 300);
    if ((iVar1 < 5) && (-1 < iVar1)) {
                    
      switch(iVar1) {
      case 0:
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x24))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
        ar5 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
        if (cVar10 == '\0') {
          in_fr1 = *(float *)(unsigned)(ar4 + 0x5c);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x5c);
        }
        if (cVar9 == '\0' && in_fr1 < 0.0) {
          if (cVar10 == '\0') {
            dVar8 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x5c));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x5c);
            dVar8 = 6.38186089609776e-312;
          }
          if (cVar9 == '\0') {
            fVar7 = F32LO(dVar8) * F32HI(dVar8);
          }
          else {
            fVar7 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 0x5c) = fVar7;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x5c) = in_xd0;
          }
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      case 1:
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c031748(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x54,ar6,ar7));
        uVar3 = 0;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x34)),0,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,uVar3,ar7));
        if (iVar1 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
          uVar4 = 0;
          uVar2 = 0xffffffff;
          uVar3 = 0;
          (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,uVar4));
        }
        break;
      case 2:
        uVar3 = ar6;
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c031748(ar4,ar5,ar6,ar7));
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D(0x3f7ae148,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar8 = -7.932371482664937e-251;
        }
        if (cVar9 == '\0') {
          fVar7 = F32LO(dVar8) * F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar8,0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x44)),ar4 + 0x54,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x44)),ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
        if (iVar1 == 1) {
          uVar5 = 6;
          uVar4 = 4;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 104)), rand_range(ar4,4,6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar2;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 104)), get_field_94_02aaa4(uVar3,uVar4,uVar5,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), libgcc_divide_helper_0101e4(uVar2,5,uVar5,ar7));
          if ((iVar1 == 3) || (iVar1 == 8)) {
            iVar1 = 2;
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), rand_range(ar4,0,2,ar7));
          }
          if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x13;
            (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0));
          }
          else if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x25;
            (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0));
          }
          else {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x2f;
            (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0));
          }
          if (iVar1 == 1) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
            (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c032ab0(ar4,ar5_00,uVar2,uVar4));
            ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c032204(ar4 + 0xb0,ar5_00,uVar2,uVar4); });
          }
          else {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c032ab0(ar4,ar5_00,uVar2,uVar4));
            ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c032204(ar4 + 0xb0,ar5_00,uVar2,uVar4); });
          }
          (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar2,uVar4));
          *(int *)(unsigned)(ar4 + 0x218) = iVar1 + 0xb;
        }
        break;
      case 3:
        uVar3 = ar6;
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c031748(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x54)),ar4 + 0x54,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x54)),ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,ar7));
        if (iVar1 == 7) {
          (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c032ab0(ar4,uVar2,ar6,ar7));
          ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c032204(ar4 + 0xb0,uVar2,ar6,ar7); });
          iVar1 = *(int *)(unsigned)(ar4 + 0x294) + -1;
          *(int *)(unsigned)(ar4 + 0x294) = iVar1;
          if (iVar1 < 1) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c032204(ar4 + 0xb0,uVar2,ar6,ar7); });
          }
        }
        break;
      case 4:
        uVar3 = ar6;
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c031748(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x64)),ar4 + 0x54,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
        if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          uVar6 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
          uVar5 = 0;
          uVar4 = 0xffffffff;
          uVar2 = 0;
          (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,uVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c03c314(ar4,uVar2,uVar4,uVar5));
          ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c032204(ar4 + 0xb0,uVar2,uVar4,uVar5); });
        }
      }
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c0831c8\n.set _FUN_8c0831c8, _FUN_8c0831c8_def\n");
