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
undefined4 FUN_8c0aa11c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0aa11c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 252; for (int i_ = 0; i_ < 252; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar5;
  float in_fr1 = 0;
  float fVar6;
  code *pcVar9;
  double dVar7;
  ulonglong uVar8;
  ulonglong in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 1;
  uVar4 = ar5;
  uVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 252)), get_field_6c_028cc4(ar6,uVar4,uVar3,ar7));
  ar7_00 = ((undefined1 *)(fr0_ - 0x24));
  ar6_00 = ((undefined1 *)(fr0_ - 0x28));
  ar5_00 = ((undefined1 *)(fr0_ - 0x2c));
  (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c0507a4(iVar2,ar5_00,ar6_00,ar7_00));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
    uVar5 = 2;
  }
  else {
    iVar2 = *(int *)(unsigned)(ar4 + 300);
    if ((iVar2 < 6) && (-1 < iVar2)) {
                    
      switch(iVar2) {
      case 0:
        *(undefined4 *)(unsigned)(ar4 + 0x21bc) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c030f2c(ar4 + 0x1fc,ar5_00,ar6_00,ar7_00));
      case 1:
        ar6_00 = ((undefined1 *)(fr0_ - 0x2c));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c0ab0d8(ar4,ar5,ar6_00,ar7_00));
        if (iVar2 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2194) = (ulonglong)(uint)in_fr1;
          }
          (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c03f3e8(ar6,ar5,ar6_00,ar7_00));
        }
        break;
      case 2:
        if (cVar11 == '\0') {
          in_fr1 = *(float *)(unsigned)(ar4 + 0x2194);
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
        }
        if (cVar10 == '\0') {
          in_fr1 = in_fr1 + 1.0;
        }
        else {
          in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0
                        );
        }
        (*(undefined8 *)(fr0_ - 0xf8)) = in_xd0;
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0xf8)) = CONCAT44(ar4,in_fr1);
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xf8))+4)) + 0x2194) = (undefined4)(*(undefined8 *)(fr0_ - 0xf8));
          uVar8 = CONCAT44(0x43160000,(undefined4)(*(undefined8 *)(fr0_ - 0xf8)));
        }
        else {
          *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xf8))+4)) + 0x2194) = (*(undefined8 *)(fr0_ - 0xf8));
          uVar8 = 0x12c43160000;
        }
        if (cVar10 != '\0' || (float)(uVar8 >> 0x20) <= (float)uVar8) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar8 & 0xffffffff;
          }
        }
        break;
      case 3:
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x3c)),ar5_00,ar6_00,ar7_00));
        ar6_00 = ((undefined1 *)(fr0_ - 0x3c));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c0ab0d8(ar4,ar5,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
        if (iVar2 == 0) {
          ar7_00 = (undefined1 *)(unsigned)0x0;
          ar6_00 = (undefined1 *)(unsigned)0xffffffff;
          uVar4 = 0;
          (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          uVar8 = (ulonglong)(uint)in_fr1;
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x22c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x22c) = uVar8;
          }
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x4c)),uVar4,ar6_00,ar7_00));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 252)), Vec3_length(((undefined1 *)(fr0_ - 0x4c)),uVar4,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); FUN_8c023138(uVar3,uVar4,ar6_00,ar7_00); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x5c)),((undefined1 *)(fr0_ - 0x6c)),ar6_00,ar7_00));
          if (cVar11 == '\0') {
            *(int *)(unsigned)(ar4 + 0x2194) = (int)(uVar8 >> 0x20);
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar8;
          }
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7_00));
          uVar3 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); FUN_8c023138(ar4 + 0x14,uVar3,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x8c)),uVar3,ar6_00,ar7_00));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 252)), Vec3_length(((undefined1 *)(fr0_ - 0x8c)),uVar3,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); FUN_8c023138(uVar4,uVar3,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xa8)),uVar3,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb8))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(fr0_ - 0xa8)),ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0xb8)),ar6_00,ar7_00));
          if (cVar11 == '\0') {
            fVar6 = (float)(uVar8 >> 0x20);
            pcVar9 = (code *)0x42b40000;
            uVar8 = in_xd0;
          }
          else {
            fVar6 = 90.0;
            pcVar9 = ((void *)0x8c023d68);
          }
          bVar1 = cVar10 != '\0';
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 252)), object_dtor_delete(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7_00));
          if (bVar1 || fVar6 <= (float)(uint)pcVar9) {
            if (cVar11 == '\0') {
              dVar7 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x2194));
            }
            else {
              uVar8 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
              dVar7 = 3.75058611530083e-312;
            }
            if (cVar10 == '\0') {
              fVar6 = F32LO(dVar7) * F32HI(dVar7);
            }
            else {
              fVar6 = SUB84(dVar7 * dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(unsigned)(ar4 + 0x2194) = fVar6;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar8;
            }
          }
        }
        break;
      case 4:
        if (cVar11 == '\0') {
          in_fr1 = *(float *)(unsigned)(ar4 + 0x2194);
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
        }
        if (cVar10 != '\0' || in_fr1 <= 0.0) {
          if (cVar11 == '\0') {
            in_fr1 = *(float *)(unsigned)(ar4 + 0x22c);
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x22c);
          }
          if (cVar10 == '\0') {
            in_fr1 = in_fr1 - 1.0;
          }
          else {
            in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) - CONCAT44D(0x3f800000,in_fr1)
                           ,0);
          }
          if (cVar11 == '\0') {
            *(float *)(unsigned)(ar4 + 0x22c) = in_fr1;
            uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x22c));
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x22c) = in_xd0;
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x22c);
            uVar8 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
          }
          if (cVar10 == '\0' && (float)(uVar8 >> 0x20) < (float)uVar8) {
            if (cVar11 == '\0') {
              uVar8 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x21ac);
            }
            else {
              in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x21ac);
            }
            dVar7 = CONCAT44D(0x3f800000,(float)uVar8);
            if (cVar10 == '\0') {
              fVar6 = (float)uVar8 - 1.0;
            }
            else {
              fVar6 = SUB84(dVar7 - dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(unsigned)(ar4 + 0x21ac) = fVar6;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = in_xd0;
            }
          }
          else {
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = uVar8 & 0xffffffff;
            }
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c022d04(ar4 + 0x14,ar5_00,ar6_00,ar7_00));
          }
        }
        else {
          if (cVar11 == '\0') {
            in_fr1 = *(float *)(unsigned)(ar4 + 0x22c);
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x22c);
          }
          if (cVar10 == '\0') {
            in_fr1 = in_fr1 + 1.0;
          }
          else {
            in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1)
                           ,0);
          }
          if (cVar11 == '\0') {
            *(float *)(unsigned)(ar4 + 0x22c) = in_fr1;
            uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x2194),*(undefined4 *)(unsigned)(ar4 + 0x22c));
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x22c) = in_xd0;
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x22c);
            uVar8 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
          }
          if (cVar10 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
            if (cVar11 == '\0') {
              uVar8 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x21ac);
            }
            else {
              in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x21ac);
            }
            dVar7 = CONCAT44D(0x3f800000,(float)uVar8);
            if (cVar10 == '\0') {
              fVar6 = (float)uVar8 + 1.0;
            }
            else {
              fVar6 = SUB84(dVar7 + dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(unsigned)(ar4 + 0x21ac) = fVar6;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = in_xd0;
            }
          }
          else {
            if (cVar11 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = uVar8 & 0xffffffff;
            }
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c022d04(ar4 + 0x14,ar5_00,ar6_00,ar7_00));
          }
        }
        (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
        break;
      case 5:
        iVar2 = (vsp = ((unsigned long)(fr0_ - 252)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
        if (iVar2 == 1) {
          (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6_00,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          uVar5 = 0;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
  }
  return uVar5;
}

__asm__(".globl _FUN_8c0aa11c\n.set _FUN_8c0aa11c, _FUN_8c0aa11c_def\n");
