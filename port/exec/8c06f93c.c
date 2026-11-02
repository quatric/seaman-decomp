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
code * FUN_8c06f93c_def(int ar4,undefined4 *ar5,undefined4 ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c06f93c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 352; for (int i_ = 0; i_ < 352; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar7_00;
  int iVar2;
  code *pcVar3;
  undefined4 *a5;
  undefined8 *ar5_00;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *ar6_00;
  undefined4 uVar6;
  undefined8 *ar7_01;
  undefined4 ar7_02;
  code *pcVar7;
  undefined4 in_fr1 = 0;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double in_dr12 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  undefined8 in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar12;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  pcVar7 = (code *)0x1;
  puVar5 = ((undefined1 *)(fr0_ - 0x5c));
  ({ unsigned long t0_ = (unsigned long)(puVar5); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c03f480(*ar5,ar5,puVar5,ar7); });
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x5c)),puVar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,puVar5,ar7));
  pcVar3 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x3c)),((void *)0x8c023d34),puVar5,ar7));
  dVar9 = CONCAT44D(0x3f800000,in_fr1);
  dVar10 = dVar9;
  if (cVar14 == '\0') {
    (*(undefined8 *)(fr0_ - 0x158)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x158))+4)),0x3f800000);
    dVar10 = (*(undefined8 *)(fr0_ - 0x158));
  }
  (*(undefined8 *)(fr0_ - 0x158)) = dVar10;
  if (((ar5[4] == 3) || (pcVar3 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x68)), pcVar3 != (code *)0x0)) &&
     (*(int *)(unsigned)(ar4 + 0x298) == 1)) {
    if (((*(int *)(unsigned)(ar4 + 0x124) == 4) && (*(int *)(unsigned)(ar4 + 300) == 2)) &&
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 352)), get_field_6c_028cc4(*ar5,((void *)0x8c028cc4),puVar5,ar7)), iVar2 != 0)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); Vec3_scale(ar4 + 0x80,ar4 + 0x48,0x80,ar7); });
      pcVar7 = ((void *)0x8c023b8c);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x6c)),*(int *)(unsigned)(ar5[1] + 8) + 4,((void *)0x8c023b8c),ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x7c)),*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7,ar7); });
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x8c)),pcVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,0xffffffff,ar7));
      uVar6 = 0xffffffff;
      pcVar7 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,((void *)0x8c022cb0),0xffffffff));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,pcVar7,uVar6));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 352)), get_field_6c_028cc4(*ar5,((void *)0x8c028cc4),pcVar7,uVar6));
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c036988(uVar1,((void *)0x8c036988),uVar1,uVar6));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar1,uVar6));
    }
    uVar1 = ar5[4];
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c07a68c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],uVar1,ar5[3]));
    uVar6 = 0x80;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,uVar1,0x80));
    (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar1,uVar6));
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar1,uVar6));
    return (code *)1;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x124);
  if ((0x1f < iVar2) || (iVar2 < 0)) goto override_jmp_8c06fb96_case_5;
                    
  switch(iVar2) {
  case 0:
  case 0xe:
  case 0xf:
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c030eb8(ar4 + 0x1fc,0x1fc,puVar5,ar7));
    ar7 = (code *)(uint)ar5[3];
    pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c078fd0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],*(undefined4 *)(unsigned)(ar5[1] + 4),ar7));
    break;
  case 1:
    ar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), pure_virtual_stub(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x30)),ar7));
    pcVar7 = ar7;
    break;
  case 2:
    ar7 = (code *)(uint)ar5[6];
    pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c07af10(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar5[4],ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(uint)ar5[1],ar7));
    break;
  case 3:
    pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c07f76c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar5[6],ar7));
    break;
  case 4:
    ar7 = (code *)*ar5;
    pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c077a38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x30)),ar7));
    break;
  case 6:
    pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c07edac(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar5[6],ar7));
    break;
  case 7:
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031b58(ar4 + 0xb0,0xb0,puVar5,ar7));
    uVar1 = 0xb0;
    ar7 = ((void *)0x8c026858);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 352)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,puVar5,((void *)0x8c026858)));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c03c314(ar4,uVar1,1,ar7));
      pcVar7 = (code *)0x0;
    }
    break;
  case 8:
  case 9:
    uVar6 = 0xfffffffb;
    *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb;
    uVar1 = 300;
    if (*(int *)(unsigned)(ar4 + 300) == 0) {
      if (*(int *)(unsigned)(ar4 + 0x124) == 9) {
        ar7 = (code *)(uint)ar5[6];
        uVar6 = *(undefined4 *)(unsigned)(uint)ar5[1];
        uVar1 = 8;
        (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c033474(ar4,8,uVar6,ar7));
      }
      else {
        ar7 = (code *)(uint)ar5[6];
        uVar6 = *(undefined4 *)(unsigned)(uint)ar5[1];
        uVar1 = 7;
        (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c033474(ar4,7,uVar6,ar7));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x144)),uVar1,uVar6,ar7));
    pcVar7 = (code *)({ unsigned long t0_ = (unsigned long)(ar5[6]); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c07b7d0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x144)),ar5[3]); });
    ar7 = (code *)0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x144)),0xffffffff,((undefined1 *)(fr0_ - 0x144)),0xffffffff));
    break;
  case 10:
    if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
      pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c076750(ar4,*ar5,0,ar7));
    }
    else {
      a5 = ar5;
      pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c076994(ar4,ar5,puVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 352)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],a5,puVar5,ar7));
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),(int)(D2U(dVar9) >> 0x20));
      }
      else {
        dVar10 = *(double *)(unsigned)(ar4 + 0x48);
        in_xd0 = dVar9;
      }
      if (cVar13 == '\0') {
        fVar8 = F32LO(dVar10) - F32HI(dVar10);
      }
      else {
        fVar8 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar14 == '\0') {
        uVar11 = CONCAT44(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),fVar8);
      }
      else {
        uVar11 = *(undefined8 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
      }
      if (cVar13 == '\0' && (float)uVar11 < F32HI(uVar11)) {
        ar7 = ((void *)0x8c03c314);
        (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c03c314(ar4,a5,puVar5,((void *)0x8c03c314)));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031748(ar4,a5,puVar5,ar7));
      }
    }
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar9 = 2.651015428457012e+77;
    }
    if (cVar13 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar14 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar8;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    }
    break;
  case 0xb:
    if (*(int *)(unsigned)(ar4 + 0x128) < 2) {
      pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c075ef4(ar4,*(int *)(unsigned)(ar4 + 0x128),puVar5,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(unsigned)0x8c125e68),puVar5,ar7));
      uVar1 = 0;
      pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x9c)),0,ar7));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,uVar1,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(uint)ar5[1],ar7));
    break;
  case 0xc:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 352)), get_field_6c_028cc4(*ar5,pcVar3,puVar5,ar7));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,puVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,puVar5,ar7));
      return (code *)2;
    }
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c0507a4(iVar2,((undefined1 *)(fr0_ - 0x30)),&(*(float *)(fr0_ - 0x2c)),&(*(float *)(fr0_ - 0x28))));
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c03f414(iVar2,((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x34))));
    ar7_01 = &(*(undefined8 *)(fr0_ - 0x158));
    ar6_00 = &(*(undefined8 *)(fr0_ - 0x158));
    ar5_00 = &(*(undefined8 *)(fr0_ - 0x158));
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c03f3f8(iVar2,ar5_00,ar6_00,ar7_01));
    if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xac)),((void *)0x8c022ce8),ar6_00,ar7_01));
      puVar5 = ((undefined1 *)(fr0_ - 0xb8));
      (vsp = ((unsigned long)(fr0_ - 352)), vec3_copy_8c02b5fc(puVar5,((undefined1 *)(fr0_ - 0x3c)),puVar5,ar7_01));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xac)),((undefined1 *)(fr0_ - 0xb8)),puVar5,ar7_01); });
      pcVar3 = ((void *)0x8c023b8c);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xc8)),&(*(undefined8 *)(fr0_ - 0x158)),((void *)0x8c023b8c),ar7_01); });
      ar7 = ((void *)0x8c023aa0);
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023aa0(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0xd8)),pcVar3,((void *)0x8c023aa0)));
      puVar5 = ((undefined1 *)(fr0_ - 0xd8));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(puVar5,0xffffffff,puVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,puVar5,ar7));
      pcVar3 = ((void *)0x8c014a34);
      (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,((void *)0x8c014a34),ar7));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,pcVar3,ar7));
    }
    else {
      if (*(int *)(unsigned)(ar4 + 0x128) != 2) {
        uVar1 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,0,ar7_01));
        (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar1,ar7_01));
        return (code *)2;
      }
      puVar5 = ((undefined1 *)(fr0_ - 0xe8));
      pcVar3 = ((void *)0x8c022ce8);
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_xyz(puVar5,ar5_00,((void *)0x8c022ce8),puVar5));
      (vsp = ((unsigned long)(fr0_ - 352)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xf4)),((undefined1 *)(fr0_ - 0x3c)),pcVar3,puVar5));
      puVar5 = ((undefined1 *)(fr0_ - 0xf4));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xe8)),puVar5,pcVar3,puVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x114))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x104)),&(*(undefined8 *)(fr0_ - 0x158)),pcVar3,puVar5); });
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023aa0(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x114)),pcVar3,puVar5));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,pcVar3,puVar5));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,pcVar3,puVar5));
      (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,pcVar3,puVar5));
      ar7 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,pcVar3,((void *)0x8c022cb0)));
    }
    iVar2 = *(int *)(unsigned)(ar4 + 0x134);
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    else if (iVar2 != 1) {
      if (iVar2 == 2) {
        ar7 = (code *)*ar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c07cce0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x30)),ar7));
        if (iVar2 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          pcVar7 = (code *)0x0;
        }
      }
      break;
    }
    ar7 = (code *)(*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f138);
    puVar5 = ((undefined1 *)(fr0_ - 0x30));
    uVar1 = *(undefined4 *)(unsigned)(uint)ar5[1];
    iVar2 = (vsp = ((unsigned long)(fr0_ - 352)), pure_virtual_stub(ar4,uVar1,puVar5,ar7));
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c03f3e8(*ar5,uVar1,puVar5,ar7));
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,puVar5,ar7));
    break;
  case 0xd:
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
    ar7_00 = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfffffffb;
    *(char *)(unsigned)(ar4 + 0x1fc) = (char)ar7_00;
    if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c03f3ac(ar4 + 0xb0,0xb0,uVar1,ar7));
    }
    else {
      if (*(int *)(unsigned)(ar4 + 0x128) != 2) {
        uVar1 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,0xffffffff,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar1,ar7_00));
        return (code *)2;
      }
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c03f3ac(ar4 + 0xb0,ar4 + 0xb0,uVar1,ar7));
    }
    if (*(int *)(unsigned)(ar4 + 300) == 0) {
      iVar4 = ar4 + 0x48;
      iVar2 = ar4 + 0x48;
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c032ab0(ar4,iVar2,iVar4,ar7));
      uVar1 = SUB84(dVar9,0);
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c032ab0(ar4,iVar2,iVar4,ar7));
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(0x40000000,uVar1);
      }
      else {
        dVar9 = 5.52249404598712e-312;
      }
      iVar2 = ar4 + 0x48;
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x124)),((undefined1 *)(fr0_ - 0x124)),iVar2,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x124)),iVar2,ar7); });
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x134)),iVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,iVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x124)),0xffffffff,iVar2,ar7));
      ar7 = (code *)(uint)ar5[6];
      iVar2 = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c0329ac(ar4,ar4 + 0x54,ar5[3],ar7));
      if (iVar2 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 2;
      }
      else {
        ar7 = (code *)0x12c;
        *(undefined4 *)(unsigned)(ar4 + 300) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      }
    }
    if (*(int *)(unsigned)(ar4 + 300) == 1) {
      pcVar3 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      iVar4 = ar4 + 0x54;
      ar7 = pcVar3;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031764(ar4,iVar4,pcVar3,pcVar3));
      if (iVar2 == 0) {
        pcVar3 = (code *)0x12c;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c032ab0(ar4,iVar4,pcVar3,ar7));
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x24));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x24);
      }
      if (cVar13 == '\0') {
        fVar8 = F32LO(dVar9) * F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar8;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(uint)ar5[1],ar7));
    }
    break;
  case 0x14:
    if (*(int *)(unsigned)(ar4 + 0x21c) == 1) {
      iVar2 = *(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c;
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031b68(ar4,iVar2,puVar5,0x21c));
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(0x3f000000,*(undefined4 *)(unsigned)(ar4 + 0x38));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x38);
        dVar9 = 3.73993469111571e-312;
      }
      if (cVar13 == '\0') {
        fVar8 = F32LO(dVar9) * F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(unsigned)(ar4 + 0x38) = fVar8;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x38) = in_xd0;
      }
      ar7 = ((void *)0x8c026858);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 352)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,puVar5,((void *)0x8c026858)))
      ;
      if (iVar2 == 1) {
        ar7 = (code *)0x0;
        (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      }
      uVar1 = *(undefined4 *)(unsigned)(uint)ar5[1];
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x30)),uVar1,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
        ar7 = (code *)0x8c280eb4;
        (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar1,0x8c280eb4));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
        pcVar7 = (code *)0x0;
      }
    }
    else {
      if (cVar14 == '\0') {
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),*(undefined4 *)(unsigned)(ar5[3] + 8));
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),in_fr1);
      }
      else {
        in_xd12 = *(undefined8 *)(unsigned)(ar5[3] + 8);
        dVar9 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x28)) = F32LO(in_dr12) - F32HI(dVar9);
      }
      else {
        (*(float *)(fr0_ - 0x28)) = SUB84(in_dr12 - dVar9,0);
      }
      if (cVar14 != '\0') {
        (*(float *)(fr0_ - 0x28)) = (float)in_xd12;
        (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd12 >> 0x20);
      }
      iVar2 = *(int *)(unsigned)(uint)ar5[6];
      pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + 0x184));
      (vsp = ((unsigned long)(fr0_ - 352)), (*(code *)xlat((unsigned long)pcVar7))((int *)(unsigned)(uint)ar5[6],pcVar3,iVar2,pcVar7));
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)(D2U(dVar9) >> 0x20)
                                  );
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),SUB84(dVar9,0));
        dVar9 = in_xd14;
      }
      else {
        dVar10 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) - F32HI(dVar10));
      }
      else {
        in_dr14 = in_dr14 - dVar10;
      }
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D((*(float *)(fr0_ - 0x2c)),SUB84(dVar10,0));
      }
      else {
        dVar10 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
      }
      if (cVar13 == '\0') {
        bVar12 = SUB84(in_dr14,0) < F32HI(dVar10);
      }
      else {
        bVar12 = in_dr14 < dVar10;
      }
      if ((bVar12) && ((*(float *)(fr0_ - 0x2c)) = SUB84(in_dr14,0), cVar14 != '\0')) {
        (*(float *)(fr0_ - 0x2c)) = SUB84(dVar9,0);
        (*(float *)(fr0_ - 0x28)) = F32HI(dVar9);
      }
      (vsp = ((unsigned long)(fr0_ - 352)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],((undefined1 *)(fr0_ - 0x30)),iVar2,pcVar7));
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),SUB84(in_dr14,0));
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(F32HI(dVar9) +
                                 F32HI(dVar10),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 + dVar10;
      }
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D((*(float *)(fr0_ - 0x2c)),SUB84(dVar10,0));
      }
      else {
        dVar10 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
      }
      fVar8 = F32HI(dVar9);
      if (cVar13 == '\0') {
        bVar12 = F32HI(dVar10) < fVar8;
      }
      else {
        bVar12 = dVar10 < dVar9;
      }
      if ((bVar12) && ((*(float *)(fr0_ - 0x2c)) = fVar8, cVar14 != '\0')) {
        (*(float *)(fr0_ - 0x2c)) = SUB84(dVar9,0);
        (*(float *)(fr0_ - 0x28)) = fVar8;
      }
      ar7 = (code *)(uint)ar5[3];
      pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c07baa0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x30)),ar7));
    }
    break;
  case 0x15:
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_ctor_xyz((int)&(*(undefined8 *)(fr0_ - 0x158)) + 4,pcVar3,puVar5,ar7));
    ar7 = (code *)(uint)ar5[3];
    iVar2 = (int)&(*(undefined8 *)(fr0_ - 0x158)) + 4;
    pcVar7 = (code *)({ unsigned long t0_ = (unsigned long)(ar5[6]); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c07b7d0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],iVar2,ar7); });
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x158)) + 4,0xffffffff,iVar2,ar7));
    break;
  case 0x16:
    ar7 = (code *)0x0;
    (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(uint)ar5[1],ar7));
    pcVar7 = (code *)0x0;
    break;
  case 0x19:
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
    iVar2 = *(int *)(unsigned)(ar4 + 300);
    if (iVar2 == 0) {
      ar7_02 = ar5[6];
      uVar1 = *(undefined4 *)(unsigned)(uint)ar5[1];
      uVar6 = 0x1e;
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c033474(ar4,0x1e,uVar1,ar7_02));
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031748(ar4,uVar6,uVar1,ar7_02));
      ar7 = (code *)0x0;
      uVar6 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),uVar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar1;
      if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
        ar7 = ((void *)0x8c033e68);
        (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar6,((void *)0x8c033e68)));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar6,ar7));
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
LAB_8c070b94:
      if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
        ar7 = (code *)0x12c;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
    else {
      if (iVar2 == 1) goto LAB_8c070b94;
      if (iVar2 == 2) {
        if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
          ar7 = (code *)(ar4 + 0xb0);
          iVar2 = (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_AdvanceFrame_033ba0(ar7,pcVar3,((void *)0x8c033b98),ar7));
          if (iVar2 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
            pcVar7 = (code *)0x0;
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          }
        }
        else {
          uVar1 = 0xb0;
          (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,puVar5,ar7));
          ar7 = ((void *)0x8c026da8);
          (vsp = ((unsigned long)(fr0_ - 352)), CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,puVar5,((void *)0x8c026da8)));
          if (cVar14 == '\0') {
            dVar9 = (double)(D2U(dVar9) >> 0x20);
          }
          if (cVar13 != '\0' || SUB84(dVar9,0) <= 0.0) {
            (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,puVar5,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
            pcVar7 = (code *)0x0;
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          }
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(uint)ar5[1],ar7));
    break;
  case 0x1a:
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031748(ar4,pcVar3,puVar5,ar7));
    ar7 = (code *)0x0;
    uVar6 = 0xffffffff;
    uVar1 = 8;
    (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c032ab0(ar4,uVar1,uVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,uVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(uint)ar5[1],ar7));
    break;
  case 0x1b:
    uVar1 = *(undefined4 *)(unsigned)(uint)ar5[1];
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x30)),uVar1,ar7));
    pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c07d904(ar4,*ar5,uVar1,ar7));
    break;
  case 0x1c:
    pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031de8(ar4,0x10,puVar5,ar7));
    break;
  case 0x1e:
    uVar1 = *(undefined4 *)(unsigned)(uint)ar5[1];
    (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x30)),uVar1,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 352)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,uVar1,ar7));
    if (iVar2 == 1) {
      pcVar7 = (code *)0x0;
    }
    break;
  case 0x1f:
    ar7 = (code *)(uint)ar5[6];
    pcVar7 = (code *)({ unsigned long t0_ = (unsigned long)(ar5[3]); *(unsigned *)((((unsigned long)(fr0_ - 352)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 352)) - 8); FUN_8c07f56c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x30)),ar7); });
  }
override_jmp_8c06fb96_case_5:
  uVar1 = 0x124;
  if (*(int *)(unsigned)(ar4 + 0x124) != 0xc) {
    (vsp = ((unsigned long)(fr0_ - 352)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,0x124,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 352)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 352)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar1,ar7));
  return pcVar7;
}

__asm__(".globl _FUN_8c06f93c\n.set _FUN_8c06f93c, _FUN_8c06f93c_def\n");
