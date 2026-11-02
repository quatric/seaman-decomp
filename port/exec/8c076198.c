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
undefined4 FUN_8c076198_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c076198";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 240; for (int i_ = 0; i_ < 240; i_++) z_[i_] = 0; }
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *ar5_00;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0 = 0;
  code *pcVar8;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  iVar4 = *(int *)(unsigned)(ar4 + 300);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar10 == '\0') {
        uVar3 = CONCAT44(0x42340000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        uVar3 = 0x8c022cb042340000;
        in_xd0 = in_dr0;
      }
      in_dr0 = uVar3;
      bVar1 = cVar9 == '\0';
      fVar6 = (float)in_dr0;
      uVar2 = (ulonglong)in_dr0 >> 0x20;
      ar5 = -1;
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
      if (bVar1 && (float)uVar2 < fVar6) {
        ar5_00 = ((undefined1 *)(unsigned)0x8c125e68);
        uVar5 = (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar5;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
        if (cVar10 == '\0') {
          uVar3 = CONCAT44(0x42aa0000,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          uVar3 = 0xbf80000042aa0000;
          in_xd0 = in_dr0;
        }
        in_dr0 = uVar3;
        bVar1 = cVar9 != '\0';
        fVar6 = (float)in_dr0;
        uVar2 = (ulonglong)in_dr0 >> 0x20;
        (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
        if (bVar1 || (float)uVar2 <= fVar6) {
          if (*(int *)(unsigned)(ar4 + 0x260) == 3) {
            (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c07f1e4(ar4,0x19,((undefined1 *)(unsigned)0x8c137738) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18,ar7));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c07f1e4(ar4,0x1a,((undefined1 *)(unsigned)0x8c137768) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18,ar7));
          }
          ar7 = 0;
          ar6 = 0xffffffff;
          ar5 = *(int *)(unsigned)(ar4 + 0x260) + 0x16;
          (vsp = ((unsigned long)(fr0_ - 240)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 240)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
        }
        else {
          ar7 = 0;
          ar6 = 0xffffffff;
          ar5 = *(int *)(unsigned)(ar4 + 0x260) + 0x18;
          (vsp = ((unsigned long)(fr0_ - 240)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 240)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else if (iVar4 != 2) {
      if (iVar4 != 3) {
        return 1;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
      fVar6 = F32HI(in_dr0);
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar10 == '\0') {
        pcVar8 = (code *)0x42340000;
      }
      else {
        fVar6 = 45.0;
        pcVar8 = ((void *)0x8c022cb0);
      }
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7));
      if (cVar9 == '\0' && (float)(uint)pcVar8 < fVar6) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c034148(ar4 + 0xb0,*(int *)(unsigned)(ar4 + 0x260) + 0x18,ar6,ar7));
        if (iVar4 == 0) {
          return 1;
        }
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        return 0;
      }
      iVar4 = (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7));
      if (iVar4 == 0) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      return 0;
    }
    fVar6 = F32HI(in_dr0);
    iVar4 = *(int *)(unsigned)(ar4 + 0x260);
    if (iVar4 == 0) {
      (vsp = ((unsigned long)(fr0_ - 240)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) != 0) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c03c314(ar4,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      return 0;
    }
    if ((iVar4 != 3) && (iVar4 != 4)) {
      return 1;
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 240)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar4 != 1) {
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xec))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 240)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x70)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x14)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
        dVar7 = *(double *)(unsigned)(ar4 + 600);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      uVar3 = in_xd0;
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x20)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+4)),fVar6);
        uVar3 = (*(undefined8 *)(fr0_ - 0x20));
      }
      (*(undefined8 *)(fr0_ - 0x20)) = uVar3;
      (vsp = ((unsigned long)(fr0_ - 240)), vec3_copy_8c023d8c(ar4 + 0x254,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x7c)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x8c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), object_dtor_delete(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
      return 1;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 240)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 240)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
    if (cVar10 == '\0') {
      pcVar8 = (code *)0x42aa0000;
    }
    else {
      fVar6 = 85.0;
      pcVar8 = ((void *)0x8c022cb0);
    }
    (vsp = ((unsigned long)(fr0_ - 240)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
    if (cVar9 != '\0' || (float)(uint)pcVar8 <= fVar6) {
      return 1;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    return 1;
  }
  uVar5 = 0x13;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7));
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      if (iVar4 != 2) goto LAB_8c076216;
      (vsp = ((unsigned long)(fr0_ - 240)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar6,ar7));
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
LAB_8c076216:
  (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c031748(ar4,uVar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c031700(ar4,uVar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c076198\n.set _FUN_8c076198, _FUN_8c076198_def\n");
