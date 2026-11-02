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
int FUN_8c23c4cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23c4cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  uint unaff_r10 = 0;
  int unaff_r11 = 0;
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 extraout_fr1 = 0;
  float extraout_fr0 = 0;
  float fVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_xd2 = 0;
  undefined8 uVar8;
  undefined8 in_xd14 = 0;
  undefined4 in_PR = 0;
  int iVar9;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = ((undefined1 *)(fr0_ - 0x4));
  }
  else {
    puVar3 = ((undefined1 *)(fr0_ - 0x8));
  }
  *(undefined4 *)(unsigned)(puVar3 + -4) = in_PR;
  iVar1 = *(int *)(unsigned)(ain0 + unaff_r11);
  uVar7 = 0x3f800000;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(iVar1 * 4 + unaff_r11) * 4 + -0x73b3ee20);
    if (in_FPSCR_SZ == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11a4),*(undefined4 *)(unsigned)(iVar2 + 200));
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(iVar2 + 200);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11a4));
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0xf8) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8),*(undefined4 *)(unsigned)(iVar2 + 0xcc));
    }
    else {
      *(double *)(unsigned)(iVar2 + 0xf8) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar2 + 0xcc);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8));
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0xfc) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac),*(undefined4 *)(unsigned)(iVar2 + 0xd0));
    }
    else {
      *(double *)(unsigned)(iVar2 + 0xfc) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar2 + 0xd0);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac));
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0x100) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),*(undefined4 *)(unsigned)(iVar2 + 0xd8));
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x100) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar2 + 0xd8);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0x108) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),*(undefined4 *)(unsigned)(iVar2 + 0xdc));
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x108) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar2 + 0xdc);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0x10c) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),*(undefined4 *)(unsigned)(iVar2 + 0xe0));
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x10c) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar2 + 0xe0);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0x110) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c4),*(undefined4 *)(unsigned)(iVar2 + 0xe8));
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x110) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar2 + 0xe8);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11c4));
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0x118) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8),*(undefined4 *)(unsigned)(iVar2 + 0xec));
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x118) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar2 + 0xec);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8));
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0x11c) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc),*(undefined4 *)(unsigned)(iVar2 + 0xf0));
      uVar8 = in_xd2;
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x11c) = dVar5;
      uVar8 = *(undefined8 *)(unsigned)(iVar2 + 0xf0);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc));
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    uVar6 = (undefined4)(D2U(dVar5) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(iVar2 + 0x120) = uVar6;
      *(undefined4 *)(unsigned)(iVar2 + 0x114) = *(undefined4 *)(unsigned)(iVar2 + 0xe4);
      dVar5 = CONCAT44D(uVar6,(*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0));
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x120) = dVar5;
      *(undefined8 *)(unsigned)(iVar2 + 0x114) = *(undefined8 *)(unsigned)(iVar2 + 0xe4);
      uVar8 = CONCAT44((*(uint *)(unsigned)0x8c4c11d4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0));
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)SUB84(dVar5,0);
    }
    else {
      iVar9 = (int)dVar5;
    }
    *(int *)(unsigned)(iVar2 + 0x88) = iVar9;
    ain0 = 0x124;
    in_xd2 = uVar8;
    if ((*(uint *)(unsigned)(iVar2 + 0x124) & unaff_r10) != 0) {
      ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar3 + -4)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 8)); FUN_8c23a8d8(*(undefined4 *)(unsigned)(iVar2 + 0x88),ar5,ar6,ar7); });
      in_xd2 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),uVar7);
        in_xd2 = uVar8;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = F32LO(dVar5) / extraout_fr0;
      }
      else {
        fVar4 = SUB84(dVar5 / CONCAT44D(extraout_fr0,extraout_fr1),0);
      }
      ain0 = 0x80;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(iVar2 + 0x80) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(iVar2 + 0x80) = in_xd2;
      }
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c23c4cc\n.set _FUN_8c23c4cc, _FUN_8c23c4cc_def\n");
