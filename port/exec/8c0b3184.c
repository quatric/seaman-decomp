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
undefined4 FUN_8c0b3184_def(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b3184";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 208; for (int i_ = 0; i_ < 208; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *ar6_00;
  undefined4 uVar5;
  float in_fr1 = 0;
  float fVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar5 = 1;
  puVar4 = ar5;
  ar6_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 208)), Vec3_length(((undefined1 *)(fr0_ - 0x38)),puVar4,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
  iVar3 = *(int *)(unsigned)(ar4 + 0x40);
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar1 = 0;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7));
      if ((iVar3 != 1) && (iVar3 != 2)) {
        (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c031748(ar4,uVar1,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7));
      ar6_00 = (undefined8 *)(unsigned)0x3;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 208)), rand_range(ar4,0,3,ar7));
      if (cVar11 == '\0') {
        dVar9 = CONCAT44D((float)(iVar3 + 1),in_fr1);
      }
      else {
        dVar9 = (double)(iVar3 + 1);
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x24) = (int)(D2U(dVar9) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x24) = dVar9;
      }
      uVar1 = 0x8c286dbc;
      (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c031b68(ar4,0x8c286dbc,ar6_00,ar7));
      uVar7 = D2U(dVar9) & 0xffffffff;
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar7;
      }
      (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c031c64(ar4,uVar1,ar6_00,ar7));
      in_fr1 = (float)uVar7;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x318) = 0;
    default:
      iVar3 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_assign(ar4 + 0x80,iVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar3,ar6_00,ar7));
      if (cVar12 == '\0') {
        in_fr1 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar11 == '\0' && 1.0 < in_fr1) {
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
          dVar9 = 3.73986008970316e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = F32HI(dVar9);
          dVar9 = CONCAT44D(fVar6,F32LO(dVar9) - fVar6);
        }
        else {
          dVar9 = dVar9 - dVar9;
        }
        (*(int *)(fr0_ - 0xcc)) = ar4;
        if (cVar12 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar9,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      else {
        uVar8 = CONCAT44(0x3f800000,in_fr1);
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = uVar8;
        }
        ar6_00 = (undefined8 *)(unsigned)0x3;
        iVar3 = 0;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 208)), rand_range(ar4,0,3,ar7));
        if (cVar11 == '\0') {
          dVar9 = CONCAT44D((float)(iVar2 + 1),(int)uVar8);
        }
        else {
          dVar9 = (double)(iVar2 + 1);
        }
        if (cVar12 == '\0') {
          *(int *)(unsigned)(ar4 + 0x24) = (int)(D2U(dVar9) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x24) = dVar9;
        }
      }
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xcc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar3,ar6_00,ar7); });
      dVar10 = dVar9;
      if (cVar12 == '\0') {
        (*(undefined8 *)(fr0_ - 0x8c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8c))+4)),(int)(D2U(dVar9) >> 0x20));
        dVar10 = (*(undefined8 *)(fr0_ - 0x8c));
      }
      (*(undefined8 *)(fr0_ - 0x8c)) = dVar10;
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
      puVar4 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 208)), Vec3_length(((undefined1 *)(fr0_ - 0x68)),puVar4,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7));
      uVar1 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x8c)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x78)),(int)&(*(undefined8 *)(fr0_ - 0x8c)) + 4,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x8c)) + 4,0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),(int)(D2U(dVar9) >> 0x20));
        dVar9 = in_xd0;
      }
      else {
        dVar10 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar11 == '\0') {
        fVar6 = F32LO(dVar10) / F32HI(dVar10);
      }
      else {
        fVar6 = SUB84(dVar10 / dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x30) = fVar6;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar9;
      }
      ar6_00 = ar5;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c031764(ar4,ar6,ar5,ar7));
      if (*(int *)(unsigned)(ar4 + 0x1b8) == 1) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x18c) = *(undefined4 *)(unsigned)ar5;
          *(undefined4 *)(unsigned)(ar4 + 400) = *(undefined4 *)(unsigned)((int)ar5 + 4);
          *(undefined4 *)(unsigned)(ar4 + 0x194) = *(undefined4 *)(unsigned)(ar5 + 1);
          *(undefined4 *)(unsigned)(ar4 + 0x198) = *(undefined4 *)(unsigned)ar6;
          *(undefined4 *)(unsigned)(ar4 + 0x19c) = *(undefined4 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)(ar4 + 0x1a0) = *(undefined4 *)(unsigned)(ar6 + 1);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x18c) = *ar5;
          *(undefined8 *)(unsigned)(ar4 + 400) = *(undefined8 *)(unsigned)((int)ar5 + 4);
          *(undefined8 *)(unsigned)(ar4 + 0x194) = ar5[1];
          *(undefined8 *)(unsigned)(ar4 + 0x198) = *ar6;
          *(undefined8 *)(unsigned)(ar4 + 0x19c) = *(undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined8 *)(unsigned)(ar4 + 0x1a0) = ar6[1];
        }
      }
      break;
    case 2:
      break;
    case 4:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 208)), get_field_1c_026dd8(ar4 + 0xb0,uVar1,ar6_00,ar7));
      if (iVar3 == 0) {
        (vsp = ((unsigned long)(fr0_ - 208)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7));
      }
      else {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 208)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7));
        if (iVar3 == 1) {
          ar7 = 0;
          uVar5 = 0xffffffff;
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 208)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 208)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar5,ar7));
        }
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c031764(ar4,ar6,ar5,ar7));
      ar6_00 = ar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar5;
}

__asm__(".globl _FUN_8c0b3184\n.set _FUN_8c0b3184, _FUN_8c0b3184_def\n");
