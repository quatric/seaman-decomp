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
undefined4 FUN_8c0755e0_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0755e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 236; for (int i_ = 0; i_ < 236; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int ar5_00;
  undefined4 *puVar5;
  undefined4 *ar6_00;
  undefined4 ain0;
  undefined4 uVar6;
  float fVar7;
  ulonglong in_dr0 = 0;
  double dVar8;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar6 = 1;
  puVar5 = ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 236)), Vec3_length(((undefined1 *)(fr0_ - 0x60)),puVar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_copy(((undefined4 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(((undefined4 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x70)),((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7));
  if (cVar11 == '\0') {
    in_fr15 = (float)(in_dr0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x44)),uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x50)),uVar2,ar6_00,ar7));
  uVar2 = (undefined4)in_dr0;
  iVar4 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar4) || (iVar4 < 0)) goto switchD_8c0756cc_caseD_2;
  ar5_00 = iVar4 * 4;
                    
  switch(iVar4) {
  case 0:
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031748(ar4,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031700(ar4,ar5_00,ar6_00,ar7));
    puVar5 = ar5;
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D(0x42340000,uVar2);
    }
    else {
      dVar8 = 6.37147498041921e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = in_fr15 < F32HI(dVar8);
    }
    else {
      bVar9 = CONCAT44D(in_fr14,in_fr15) < dVar8;
    }
    if (bVar9) {
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
    }
    else {
      puVar5 = ((undefined4 *)(fr0_ - 0x28));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c023334(ar4 + 0x14,puVar5,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar2;
    }
    iVar4 = *(int *)(unsigned)(ar4 + 0x220);
    if (iVar4 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0x14;
      puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x29c));
      ar6_00 = (undefined4 *)(unsigned)0xb0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03c0f0(ar4 + 0xb0,puVar5,0xb0,ar7));
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 236)), deref_u32(uVar2,puVar5,ar6_00,ar7));
      uVar2 = puVar3[1];
      *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137828) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
    }
    else if (iVar4 == 3) {
      *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0x19;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03c0f0(ar4 + 0xb0,*(undefined4 *)(unsigned)(ar4 + 0x29c),ar6_00,ar7));
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 236)), deref_u32(uVar2,((void *)0x8c015b4c),ar6_00,ar7));
      puVar5 = (undefined4 *)(unsigned)(ar4 + 0xb4);
      uVar2 = puVar3[1];
      *puVar5 = *puVar3;
      *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137738) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
    }
    else if (iVar4 == 4) {
      *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0x1a;
      puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x29c));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03c0f0(ar4 + 0xb0,puVar5,ar6_00,ar7));
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 236)), deref_u32(uVar2,puVar5,ar6_00,ar7));
      uVar2 = puVar3[1];
      *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137768) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
    }
    (vsp = ((unsigned long)(fr0_ - 236)), vec3_clear(ar4 + 0x244,puVar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c02a1fc(ar4 + 0x254,puVar5,ar6_00,ar7));
  case 1:
    ar5_00 = *(int *)(unsigned)(ar4 + 0x29c);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c034148(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    if (iVar4 == 0) {
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar8 = 1.0035749846001845e+178;
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar7 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
    else if (iVar4 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    }
    else if (iVar4 == 2) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
switchD_8c0756cc_caseD_3:
      iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      if (iVar4 == 0x14) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        if (iVar4 == 7) {
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x41e00000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0xc441e00000;
          }
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x90)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031764(ar4,ar6,ar5,ar7));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0xa0)),ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar5,ar7));
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24c),(*(undefined4 *)(fr0_ - 0x30)));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
          dVar8 = *(double *)(unsigned)(ar4 + 0x24c);
        }
        if (cVar10 == '\0') {
          fVar7 = F32LO(dVar8) - F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x244,((undefined1 *)(fr0_ - 0x38)),ar5,ar7));
        ar6_00 = ar5;
      }
      else if ((iVar4 == 0x19) || (iVar4 == 0x1a)) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xb0)),ar6_00,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0xbc)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6_00,ar7));
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x40)));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ - 0x40)));
          dVar8 = *(double *)(unsigned)(ar4 + 600);
        }
        if (cVar10 == '\0') {
          fVar7 = F32HI(dVar8);
          dVar8 = CONCAT44D(fVar7,F32LO(dVar8) - fVar7);
        }
        else {
          dVar8 = dVar8 - dVar8;
        }
        uVar1 = in_xd0;
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0x4c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+4)),SUB84(dVar8,0));
          uVar1 = (*(undefined8 *)(fr0_ - 0x4c));
        }
        (*(undefined8 *)(fr0_ - 0x4c)) = uVar1;
        (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c023d8c(ar4 + 0x254,((undefined1 *)(fr0_ - 0x50)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xc8)),((undefined1 *)(fr0_ - 0x50)),ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 236)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 236)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0xc8)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xd8)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6_00,ar7));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6_00,ar7));
        if (iVar4 == 1) {
          (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
          if (cVar11 == '\0') {
            dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),(int)(D2U(dVar8) >> 0x20));
          }
          else {
            dVar8 = *(double *)(unsigned)(ar4 + 0x48);
          }
          if (cVar10 == '\0' && F32HI(dVar8) < SUB84(dVar8,0)) {
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
            uVar6 = 0;
          }
        }
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,ar6_00,ar7); });
        if (cVar10 == '\0') {
          iVar4 = (int)F32HI(dVar8);
        }
        else {
          iVar4 = (int)dVar8;
        }
        if (iVar4 == 0x10) {
          (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c033474(ar4,0x1c,ar5,ain0));
          ar6_00 = ar5;
          ar7 = ain0;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
    }
    break;
  case 3:
    goto switchD_8c0756cc_caseD_3;
  case 4:
    iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    if (((iVar4 != 0x14) && (iVar4 != 0x19)) && (iVar4 != 0x1a)) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined4 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      return 1;
    }
    (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c031764(ar4,ar6,ar5,ar7));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 236)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7));
    if (iVar4 == 1) {
      if (cVar11 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      ar7 = 0;
      ar6_00 = (undefined4 *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 236)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      uVar6 = 0;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 236)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7); });
      (vsp = ((unsigned long)(fr0_ - 236)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0xe8)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar5,ar7));
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24c),(*(undefined4 *)(fr0_ - 0x30)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
        dVar8 = *(double *)(unsigned)(ar4 + 0x24c);
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar8) - F32HI(dVar8);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 236)), Vec3_assign(ar4 + 0x244,((undefined1 *)(fr0_ - 0x38)),ar5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
      ar6_00 = ar5;
    }
  }
switchD_8c0756cc_caseD_2:
  (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), object_dtor_delete(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 236)), Vec3_dtor(((undefined4 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c0755e0\n.set _FUN_8c0755e0, _FUN_8c0755e0_def\n");
