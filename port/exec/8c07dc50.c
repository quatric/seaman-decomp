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
undefined4 FUN_8c07dc50_def(code *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07dc50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 160; for (int i_ = 0; i_ < 160; i_++) z_[i_] = 0; }
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  undefined *ar5_00;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 ar7_00;
  undefined4 uVar7;
  float fVar8;
  ulonglong in_dr0 = 0;
  double dVar9;
  ulonglong in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar7 = 1;
  iVar3 = *(int *)(unsigned)(ar4 + 300);
  if ((6 < iVar3) || (iVar3 < 0)) goto switchD_8c07dc84_default;
  pcVar5 = ar5;
                    
  switch(iVar3) {
  case 0:
    uVar6 = 0x13;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7));
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        if (iVar3 != 2) goto LAB_8c07dcfc;
        (vsp = ((unsigned long)(fr0_ - 160)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6,ar7));
      }
      uVar6 = 300;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      ar6 = ar4;
    }
LAB_8c07dcfc:
    (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c031748(ar4,uVar6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c031700(ar4,uVar6,ar6,ar7));
    break;
  case 1:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
    if (cVar11 == '\0') {
      uVar2 = CONCAT44(0x42340000,(int)(in_dr0 >> 0x20));
    }
    else {
      uVar2 = 0x8c022cb042340000;
      in_xd0 = in_dr0;
    }
    in_dr0 = uVar2;
    bVar1 = cVar10 == '\0';
    fVar8 = (float)in_dr0;
    uVar2 = in_dr0 >> 0x20;
    pcVar4 = (code *)0xffffffff;
    pcVar5 = ar5;
    (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
    if (bVar1 && (float)uVar2 < fVar8) {
      ar5_00 = ((undefined1 *)(unsigned)0x8c125e68);
      uVar6 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar6;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar11 == '\0') {
        uVar2 = CONCAT44(0x42aa0000,(int)(in_dr0 >> 0x20));
      }
      else {
        uVar2 = 0xbf80000042aa0000;
        in_xd0 = in_dr0;
      }
      in_dr0 = uVar2;
      bVar1 = cVar10 != '\0';
      fVar8 = (float)in_dr0;
      uVar2 = in_dr0 >> 0x20;
      (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
      if (bVar1 || (float)uVar2 <= fVar8) {
        if (*(int *)(unsigned)(ar4 + 0x260) == 3) {
          (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c07f1e4(ar4,0x19,((undefined1 *)(unsigned)0x8c137738) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c07f1e4(ar4,0x1a,((undefined1 *)(unsigned)0x8c137768) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18,ar7));
        }
        ar7 = 0;
        ar6 = (code *)0xffffffff;
        ar5 = (code *)(*(int *)(unsigned)(ar4 + 0x260) + 0x16);
        (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
      }
      else {
        ar7 = 0;
        iVar3 = *(int *)(unsigned)(ar4 + 0x260) + 0x18;
        (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar3,0xffffffff,0));
        ar6 = ((void *)0x8c033e68);
        (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,((void *)0x8c033e68),ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        ar5 = ar4;
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
      ar5 = pcVar4;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  case 2:
    fVar8 = (float)(in_dr0 >> 0x20);
    iVar3 = *(int *)(unsigned)(ar4 + 0x260);
    if (iVar3 == 0) {
      (vsp = ((unsigned long)(fr0_ - 160)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
        (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c03c314(ar4,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar7 = 0;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar3 == 1) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
        if (cVar11 == '\0') {
          pcVar5 = (code *)0x42aa0000;
        }
        else {
          fVar8 = 85.0;
          pcVar5 = ((void *)0x8c022cb0);
        }
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
        if (cVar10 == '\0' && fVar8 < (float)(uint)pcVar5) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
        uVar6 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)(pcVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar6,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x70)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
        if (cVar11 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x14)));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
          dVar9 = *(double *)(unsigned)(ar4 + 600);
        }
        if (cVar10 == '\0') {
          fVar8 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 - dVar9,0);
        }
        uVar2 = in_xd0;
        if (cVar11 == '\0') {
          (*(ulonglong *)(fr0_ - 0x20)) = CONCAT44((*(uint*)((uchar*)&(*(ulonglong *)(fr0_ - 0x20))+4)),fVar8);
          uVar2 = (*(ulonglong *)(fr0_ - 0x20));
        }
        (*(ulonglong *)(fr0_ - 0x20)) = uVar2;
        (vsp = ((unsigned long)(fr0_ - 160)), vec3_copy_8c023d8c(ar4 + 0x254,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x7c)),ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x8c)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), object_dtor_delete(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
      }
    }
    break;
  case 3:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
    fVar8 = (float)(in_dr0 >> 0x20);
    (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
    if (cVar11 == '\0') {
      pcVar5 = (code *)0x42340000;
    }
    else {
      fVar8 = 45.0;
      pcVar5 = ((void *)0x8c022cb0);
    }
    (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7));
    if (cVar10 != '\0' || fVar8 <= (float)(uint)pcVar5) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7));
      if (iVar3 != 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c034148(ar4 + 0xb0,*(int *)(unsigned)(ar4 + 0x260) + 0x18,ar6,ar7));
      if (iVar3 != 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
    break;
  case 4:
    *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 1;
    (vsp = ((unsigned long)(fr0_ - 160)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    iVar3 = *(int *)(unsigned)(ar4 + 0x294);
    *(int *)(unsigned)(ar4 + 0x294) = iVar3 + 1;
    if (iVar3 + 1 < 0x12d) {
      if (*(int *)(unsigned)(ar4 + 0x2a8) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar7 = 0;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c03f39c(ar5,iVar3,((void *)0x8c03f39c),ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    break;
  case 5:
    iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c026db0(ar4,ar5,ar6,ar7));
    if (iVar3 == 0x12) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 160)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,ar7));
      if (iVar3 == 1) {
        (vsp = ((unsigned long)(fr0_ - 160)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x12,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c034148(ar4 + 0xb0,0x12,ar4 + 0xb0,0xb0));
    }
    break;
  case 6:
    pcVar5 = ar4 + 0xb0;
    (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_AdvanceFrame_033ba0(pcVar5,pcVar5,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,ar6,ar7); });
    if (cVar11 == '\0') {
      in_dr0 = in_dr0 >> 0x20;
    }
    if (cVar10 != '\0' || (float)in_dr0 <= 0.0) {
      ar7_00 = 0;
      uVar6 = 0xffffffff;
      uVar7 = 0x13;
      (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 160)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar6,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar7 = 0;
    }
  }
switchD_8c07dc84_default:
  *(undefined4 *)(unsigned)(ar4 + 0x2a8) = 0;
  return uVar7;
}

__asm__(".globl _FUN_8c07dc50\n.set _FUN_8c07dc50, _FUN_8c07dc50_def\n");
