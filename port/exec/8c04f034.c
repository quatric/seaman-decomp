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
undefined4 FUN_8c04f034_def(code *ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04f034";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 420; for (int i_ = 0; i_ < 420; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 ar7_00;
  undefined1 *ar4_00;
  undefined4 uVar10;
  float fVar11;
  double in_dr0 = 0;
  double dVar12;
  float fVar13;
  undefined8 in_dr14 = 0;
  double in_xd0 = 0;
  bool bVar14;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  uVar10 = 1;
  pcVar9 = ar6;
  uVar7 = ar7;
  uVar8 = ar7;
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),ar7,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),ar7,pcVar9,uVar7));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x4c)),ar7,pcVar9,uVar7));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x5c)),ar7,pcVar9,uVar7));
  pcVar5 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x6c)),((void *)0x8c022c4c),pcVar9,uVar7));
  (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023dac(((undefined1 *)(fr0_ - 0x78)),pcVar5,pcVar9,uVar7));
  (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023dac(((undefined1 *)(fr0_ - 0x84)),pcVar5,pcVar9,uVar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,pcVar5,pcVar9,uVar7));
  if (iVar1 == 0) {
    (*(undefined4 *)(fr0_ - 0x194)) = 2;
    (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x84)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x78)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x6c)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,pcVar9,uVar7));
    return (*(undefined4 *)(fr0_ - 0x194));
  }
  pcVar5 = ((void *)0x8c028cc4);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,((void *)0x8c028cc4),pcVar9,uVar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); FUN_8c02f670(uVar2,pcVar5,pcVar9,uVar7); });
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x94)),pcVar9,uVar7));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,pcVar9,uVar7));
  pcVar5 = ((void *)0x8c028cc4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,((void *)0x8c028cc4),pcVar9,uVar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,pcVar5,pcVar9,uVar7));
  dVar12 = in_dr0;
  if (iVar1 != 0x13) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,pcVar5,pcVar9,uVar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,pcVar5,pcVar9,uVar7));
    dVar12 = in_dr0;
    if (iVar1 != 0x18) goto LAB_8c04f31c;
  }
  (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),((undefined1 *)(fr0_ - 0x3c)),pcVar9,uVar7));
  if (cVar16 == '\0') {
    in_dr0 = CONCAT44D(0x43340000,(int)(D2U(dVar12) >> 0x20));
  }
  else {
    in_dr0 = 4.84372090138479e-312;
    in_xd0 = dVar12;
  }
  if (cVar15 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
    (*(undefined4 *)(fr0_ - 0x198)) = 2;
    (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x84)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x78)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x6c)),0xffffffff,pcVar9,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pcVar9,uVar7));
    uVar8 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,0xffffffff,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar8,uVar7));
    (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar8,uVar7));
    return (*(undefined4 *)(fr0_ - 0x198));
  }
LAB_8c04f31c:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,((void *)0x8c028cc4),pcVar9,uVar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); FUN_8c02f670(uVar2,((void *)0x8c02f670),pcVar9,uVar7); });
  pcVar5 = (code *)((undefined1 *)(fr0_ - 0x4c));
  pcVar9 = ((void *)0x8c023a14);
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(pcVar5,((undefined1 *)(fr0_ - 0xa4)),((void *)0x8c023a14),pcVar5));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,pcVar9,pcVar5));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0x104))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),2,pcVar9,pcVar5));
  (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x5c)),iVar1 + 4,pcVar9,pcVar5));
  do {
    uVar7 = (undefined4)in_dr14;
    iVar1 = *(int *)(unsigned)(ar4 + 300);
    if ((9 < iVar1) || (iVar1 < 0)) goto switchD_8c04f3ac_default;
    pcVar6 = (code *)(&(*(undefined1 *)(unsigned)0x8c04f3e4))[iVar1];
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      pcVar9 = ar4 + 0x34c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c055c38(ar4,ar6,pcVar9,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 420)), vec3_clear(ar4 + 0x2a8,ar6,pcVar9,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        pcVar9 = (code *)0x12c;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      }
      goto switchD_8c04f3ac_default;
    case 1:
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 2:
      pcVar5 = (code *)(*(int *)(unsigned)(ar4 + 300) + 1);
      *(unsigned *)(unsigned)(ar4 + 300) = pcVar5;
      break;
    case 4:
      goto switchD_8c04f3ac_caseD_4;
    case 5:
      ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 420)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar6,pcVar9,pcVar5); });
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_1c_026dd8(ar4 + 0xb0,pcVar6,pcVar9,pcVar5));
      iVar1 = *(int *)(unsigned)(ar4 + 0x128) + (iVar1 + -0x16) * 2;
      if (iVar1 == 3) {
        uVar8 = 0x5e;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar8,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar3,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0xb4)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,pcVar9,pcVar5));
        uVar8 = 0x5e;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5));
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar8,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(unsigned)(*piVar4 + 8),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023e04(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0xc0)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,pcVar9,pcVar5));
      }
      else if (iVar1 == 4) {
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar7,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar3,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0xd0)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,pcVar9,pcVar5));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5));
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar7,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(unsigned)(*piVar4 + 8),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023e04(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0xdc)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0xdc)),0xffffffff,pcVar9,pcVar5));
      }
      else if (iVar1 == 5) {
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar7,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar3,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0xec)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0xec)),0xffffffff,pcVar9,pcVar5));
        uVar8 = 0xb0;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5e,0xb0,pcVar5));
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar7,uVar8,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(unsigned)(*piVar4 + 8),uVar8,pcVar5));
        pcVar5 = ((void *)0x8c023e04);
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023e04(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0xf8)),uVar8,((void *)0x8c023e04)));
        pcVar9 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,0xffffffff,pcVar5));
      }
      else if (iVar1 == 6) {
        uVar8 = 0x5f;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar8,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar3,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x108)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,pcVar9,pcVar5));
        uVar8 = 0x5f;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 420)), deref_u32(uVar7,uVar8,pcVar9,pcVar5));
        pcVar9 = (code *)*puVar3;
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(unsigned)(pcVar9 + 8),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023e04(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0x114)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x114)),0xffffffff,pcVar9,pcVar5));
      }
      (vsp = ((unsigned long)(fr0_ - 420)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x120)),(*(undefined4 *)(fr0_ + 0x00000000)),pcVar9,pcVar5));
      ar4_00 = ((undefined1 *)(fr0_ - 0x3c));
      pcVar9 = ((void *)0x8c023484);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); FUN_8c023484(ar4_00,((undefined1 *)(fr0_ - 0x120)),((void *)0x8c023484),ar4_00); });
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x130)),pcVar9,ar4_00));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,pcVar9,ar4_00));
      pcVar5 = ((void *)0x8c014a34);
      (vsp = ((unsigned long)(fr0_ - 420)), object_dtor_delete(((undefined1 *)(fr0_ - 0x120)),0xffffffff,pcVar9,((void *)0x8c014a34)));
      pcVar9 = (code *)((undefined1 *)(fr0_ - 0x3c));
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023aa0(pcVar9,ar6,pcVar9,pcVar5));
      uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,ar6,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c036988(uVar7,ar6,pcVar9,pcVar5));
      uVar7 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,ar6,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c038a10(uVar7,ar6,pcVar9,pcVar5));
      uVar7 = 0xb0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,pcVar9,pcVar5));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c03f3e8(ar5,uVar7,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030eb8(ar4 + 0x1fc,0x1fc,pcVar9,pcVar5));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        uVar10 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar8 = 0xffffffff;
        uVar7 = 0x1a;
        (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        pcVar5 = ((void *)0x8c033e68);
        (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,((void *)0x8c033e68)));
        pcVar9 = (code *)0xa;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), rand_range(ar4,0,10,pcVar5));
        if (iVar1 < 6) {
          pcVar5 = (code *)0x0;
          pcVar9 = (code *)0xffffffff;
          uVar7 = 0x1e;
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1e,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,pcVar9,pcVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        }
      }
      goto switchD_8c04f3ac_default;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,pcVar6,pcVar9,pcVar5));
      if (iVar1 == 0x13) {
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x5c)),pcVar9,pcVar5));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x4c)),pcVar9,pcVar5));
      }
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(ar4 + 0x248,ar6,pcVar9,pcVar5));
      if (cVar16 == '\0') {
        dVar12 = CONCAT44D(0x43480000,(*(uint*)((uchar*)&(*(double *)(fr0_ - 0x64))+0)));
      }
      else {
        dVar12 = 6.37156434669702e-312;
        in_xd0 = (*(double *)(fr0_ - 0x64));
      }
      if (cVar15 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x250) = fVar11;
        in_dr0 = CONCAT44D(0x43480000,(*(undefined4 *)(fr0_ - 0x6c)));
      }
      else {
        *(double *)(unsigned)(ar4 + 0x250) = in_xd0;
        in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x68)),(*(undefined4 *)(fr0_ - 0x6c)));
        in_dr0 = 6.37156434669702e-312;
      }
      if (cVar15 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(F32LO(in_dr0) - F32HI(in_dr0));
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      if (cVar16 == '\0') {
        *(int *)(unsigned)(ar4 + 0x248) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x248) = in_xd0;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      pcVar6 = ar6;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x140))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); Vec3_sub(&(*(undefined4 *)(fr0_ - 0x6c)),ar6,pcVar9,pcVar5); });
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_normalize(((undefined1 *)(fr0_ - 0x140)),pcVar6,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x150)),pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,pcVar9,pcVar5));
    case 7:
      fVar11 = F32LO(in_dr0);
      pcVar9 = ar4 + 0x248;
      pcVar6 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c04c314(ar4,ar6,pcVar9,pcVar5));
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,*(int *)(unsigned)(iVar1 + 8),pcVar9,pcVar5));
        if (iVar1 == 0x13) {
          (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x5c)),pcVar9,pcVar5));
          if (cVar16 == '\0') {
            dVar12 = CONCAT44D(0x42a00000,(*(uint*)((uchar*)&(*(double *)(fr0_ - 0x64))+0)));
          }
          else {
            dVar12 = 1.881185915789446e-53;
            in_xd0 = (*(double *)(fr0_ - 0x64));
          }
          if (cVar15 == '\0') {
            fVar11 = F32LO(dVar12) + F32HI(dVar12);
          }
          else {
            fVar11 = SUB84(dVar12 + dVar12,0);
          }
          dVar12 = in_xd0;
          if (cVar16 == '\0') {
            (*(double *)(fr0_ - 0x64)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x64))+4)),fVar11);
            dVar12 = (*(double *)(fr0_ - 0x64));
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x4c)),pcVar9,pcVar5));
          dVar12 = (*(double *)(fr0_ - 0x64));
        }
        (*(double *)(fr0_ - 0x64)) = dVar12;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x160))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); Vec3_sub(&(*(undefined4 *)(fr0_ - 0x6c)),ar6,pcVar9,pcVar5); });
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x160)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,pcVar9,pcVar5));
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x58) = (ulonglong)(uint)fVar11;
        }
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_length(ar4 + 0x54,((void *)0x8c022f54),pcVar9,pcVar5));
        if (cVar16 == '\0') {
          dVar12 = CONCAT44D(0x42480000,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
          dVar12 = 4.67388482346422e-312;
        }
        if (cVar15 == '\0') {
          fVar11 = F32LO(dVar12) + F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 + dVar12,0);
        }
        dVar12 = in_xd0;
        if (cVar16 == '\0') {
          (*(undefined8 *)(fr0_ - 0x1a0)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1a0))+4)),fVar11);
          dVar12 = (*(undefined8 *)(fr0_ - 0x1a0));
        }
        (*(undefined8 *)(fr0_ - 0x1a0)) = dVar12;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x170))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); Vec3_scale(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0x1a0)),pcVar9,pcVar5); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x180))); *(unsigned *)((((unsigned long)(fr0_ - 420)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 420)) - 8); Vec3_sub(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x170)),pcVar9,pcVar5); });
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_assign(ar4 + 0x248,((undefined1 *)(fr0_ - 0x180)),pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x180)),0xffffffff,pcVar9,pcVar5));
        (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x170)),0xffffffff,pcVar9,pcVar5));
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x43340000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0x12c43340000;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      }
switchD_8c04f3ac_default:
      (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1a0))+4)) = uVar10;
      (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x84)),0xffffffff,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x78)),0xffffffff,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x6c)),0xffffffff,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pcVar9,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,pcVar9,pcVar5));
      pcVar5 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,pcVar9,((void *)0x8c022cb0)));
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,0xffffffff,pcVar5));
      return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1a0))+4));
    case 8:
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x190)),ar4 + 0x54,pcVar9,pcVar5));
      pcVar5 = (code *)((undefined1 *)(fr0_ - 0x190));
      pcVar9 = ar4 + 0x248;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c04e0e0(ar4,ar6,pcVar9,pcVar5));
      uVar7 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 420)), Vec3_dtor(((undefined1 *)(fr0_ - 0x190)),0xffffffff,pcVar9,pcVar5));
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,uVar7,pcVar9,pcVar5));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,iVar1,pcVar9,pcVar5));
        if (iVar1 == 0x13) {
          pcVar5 = (code *)0x0;
          pcVar9 = (code *)0xffffffff;
          uVar7 = 0x1a;
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,pcVar9,pcVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030f2c(ar4 + 0x1fc,0,pcVar9,pcVar5));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else {
          pcVar5 = (code *)0x0;
          uVar8 = 0xffffffff;
          uVar7 = 0x17;
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x17,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,pcVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          pcVar9 = (code *)0x1fc;
          (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030f2c(ar4 + 0x1fc,ar4 + 0x1fc,0x1fc,pcVar5));
          *(undefined4 *)(unsigned)(ar4 + 300) = 4;
        }
      }
      if (*(int *)(unsigned)(ar4 + 0x298) == 1) {
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030f2c(ar4 + 0x1fc,0x298,pcVar9,pcVar5));
      }
      goto switchD_8c04f3ac_default;
    case 9:
      (vsp = ((unsigned long)(fr0_ - 420)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,pcVar9,pcVar5));
      fVar11 = F32HI(in_dr0);
      pcVar5 = ((void *)0x8c022fc0);
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x5c)),pcVar9,((void *)0x8c022fc0)));
      if (cVar16 == '\0') {
        fVar13 = 150.0;
      }
      else {
        fVar11 = 150.0;
        fVar13 = -1.0;
      }
      if (cVar15 == '\0' && fVar11 < fVar13) {
        uVar2 = 0;
        uVar8 = 0xffffffff;
        uVar7 = 0x16;
        (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,uVar2));
        pcVar5 = (code *)0x3;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        pcVar9 = (code *)0x2bc;
        *(undefined4 *)(unsigned)(ar4 + 700) = 0;
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030f2c(ar4 + 0x1fc,uVar7,700,3));
        *(undefined4 *)(unsigned)(ar4 + 300) = 4;
      }
      goto switchD_8c04f3ac_default;
    }
    pcVar9 = (code *)((undefined1 *)(fr0_ - 0x78));
    pcVar6 = ((void *)0x8c023df4);
    (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c023df4(pcVar9,((void *)0x8c023df4),pcVar9,pcVar5));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 420)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,pcVar6,pcVar9,pcVar5));
    uVar7 = (undefined4)in_dr14;
    if (iVar1 == 0x18) {
      ar7_00 = 0;
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x17,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,3,uVar2,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c030f2c(ar4 + 0x1fc,((void *)0x8c030f2c),uVar2,ar7_00));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      pcVar6 = ar4;
switchD_8c04f3ac_caseD_4:
      pcVar5 = ar4 + 0xb0;
      pcVar9 = ((void *)0x8c033b98);
      (vsp = ((unsigned long)(fr0_ - 420)), s_CAnimBody_AdvanceFrame_033ba0(pcVar5,pcVar6,((void *)0x8c033b98),pcVar5));
      ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 420)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar6,pcVar9,pcVar5); });
      uVar8 = SUB84(in_dr0,0);
      if (cVar16 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),uVar7);
        dVar12 = CONCAT44D(0x41a00000,uVar8);
      }
      else {
        dVar12 = 1.6981406014198e-311;
      }
      if (cVar15 == '\0') {
        bVar14 = F32HI(in_dr0) < F32HI(dVar12);
      }
      else {
        bVar14 = in_dr0 < dVar12;
      }
      if ((!bVar14) && (*(int *)(unsigned)(ar4 + 800) == 0)) {
        pcVar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244));
        (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c033474(ar4,0x1a,ar6,pcVar5));
        *(undefined4 *)(unsigned)(ar4 + 800) = 1;
        pcVar9 = ar6;
      }
      if (cVar16 == '\0') {
        dVar12 = CONCAT44D(0x41b00000,SUB84(dVar12,0));
      }
      else {
        dVar12 = 5.444735897974836e+158;
      }
      if (cVar15 == '\0') {
        bVar14 = F32HI(in_dr0) < F32HI(dVar12);
      }
      else {
        bVar14 = in_dr0 < dVar12;
      }
      if (!bVar14) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        pcVar5 = ar4;
      }
      goto switchD_8c04f3ac_default;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(undefined4 *)(unsigned)(ar4 + 300) = 6;
  } while( true );
}

__asm__(".globl _FUN_8c04f034\n.set _FUN_8c04f034, _FUN_8c04f034_def\n");
