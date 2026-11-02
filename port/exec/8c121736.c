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
uint FUN_8c121736_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c121736";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar3;
  uint uVar4;
  int unaff_r14 = 0;
  undefined *puVar5;
  double in_dr2 = 0;
  float fVar6;
  double in_dr4 = 0;
  float fVar8;
  double in_dr6 = 0;
  double dVar9;
  bool bVar10;
  byte in_FPSCR_CAUSE = 0;
  byte in_FPSCR_DN = 0;
  byte in_FPSCR_PR = 0;
  byte in_FPSCR_SZ = 0;
  char cVar2;
  double dVar7;
  
  if (in_FPSCR_SZ == 0) {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(in_r0 + unaff_r14));
  }
  if (in_FPSCR_PR == 0) {
    dVar9 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),F32LO(in_dr6) + F32LO(in_dr2));
  }
  else {
    dVar9 = in_dr6 + in_dr2;
  }
  if (in_FPSCR_SZ == 0) {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined1 *)(unsigned)0x8c12195c));
  }
  fVar8 = F32HI(dVar9);
  if (in_FPSCR_PR == 0) {
    fVar6 = F32LO(in_dr4) + F32LO(in_dr2);
    dVar7 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar6);
    bVar10 = fVar6 < fVar8;
  }
  else {
    dVar7 = in_dr4 + in_dr2;
    bVar10 = dVar7 < dVar9;
  }
  if ((bVar10) && (in_FPSCR_SZ == 0)) {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar8);
  }
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  uVar4 = (uVar3 & 0x80000) >> 0x13;
  cVar1 = (char)uVar4;
  uVar3 = (uVar3 & 0x100000) >> 0x14;
  cVar2 = (char)uVar3;
  fVar6 = F32LO(dVar7);
  if (cVar1 == '\0') {
    bVar10 = fVar6 < SUB84(dVar9,0);
  }
  else {
    bVar10 = dVar7 < dVar9;
  }
  if (bVar10) {
    if (cVar2 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar9,0));
    }
    if (cVar1 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) - fVar6);
    }
    else {
      in_dr2 = in_dr2 - dVar7;
    }
    puVar5 = ((void *)(unsigned)0x8c120348);
    if (cVar2 == '\0') {
      dVar9 = CONCAT44D(fVar8,fVar6);
      puVar5 = (*(undefined1 *)(unsigned)0x8c121964);
    }
    if (cVar1 == '\0') {
      dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),
                               (float)(uint)puVar5 * F32LO(in_dr2) + F32LO(dVar9));
    }
  }
  if (cVar2 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 100));
  }
  uVar3 = (uVar4 << 0x13 | uVar3 << 0x14) & 0xffe7ffff;
  uVar4 = (uVar3 & 0x80000) >> 0x13;
  if ((char)uVar4 == '\0') {
    bVar10 = SUB84(dVar9,0) < SUB84(in_dr2,0);
  }
  else {
    bVar10 = dVar9 < in_dr2;
  }
  if ((bVar10) && ((char)(uVar3 >> 0x14) == '\0')) {
    dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 100));
  }
  if (*(uint *)(unsigned)(unaff_r14 + 0x38) < *(uint *)(unsigned)(unaff_r14 + 0x54)) {
    *(int *)(unsigned)(unaff_r14 + 0x38) = *(int *)(unsigned)(unaff_r14 + 0x38) + 1;
  }
  uVar4 = (uVar4 << 0x13 & 0xffe7ffff) >> 0x13;
  fVar8 = F32HI(dVar7);
  if ((char)uVar4 == '\0') {
    bVar10 = fVar8 < F32HI(dVar9);
  }
  else {
    bVar10 = dVar7 < dVar9;
  }
  if (bVar10) {
    *(int *)(unsigned)(unaff_r14 + 0x2c) = *(int *)(unsigned)(unaff_r14 + 0x2c) + 1;
  }
  else {
    *(undefined4 *)(unsigned)(unaff_r14 + 0x2c) = 0;
  }
  if (*(uint *)(unsigned)(unaff_r14 + 0x58) < *(uint *)(unsigned)(unaff_r14 + 0x2c)) {
    *(int *)(unsigned)(unaff_r14 + 0x38) = *(int *)(unsigned)(unaff_r14 + 0x58) + -1;
  }
  if ((char)((uVar4 << 0x13 & 0xffe7ffff) >> 0x13) == '\0') {
    bVar10 = fVar8 < SUB84(dVar9,0);
  }
  else {
    bVar10 = dVar7 < dVar9;
  }
  if (bVar10) {
    *(undefined4 *)(unsigned)(unaff_r14 + 0x34) = 0;
  }
  else {
    *(int *)(unsigned)(unaff_r14 + 0x34) = *(int *)(unsigned)(unaff_r14 + 0x34) + 1;
  }
  if (*(int *)(unsigned)(unaff_r14 + 0x34) == 4) {
    *(undefined1 *)(unsigned)(unaff_r14 + 0x45) = 1;
    *(undefined4 *)(unsigned)(unaff_r14 + 0x48) = 0;
  }
  else if ((*(char *)(unsigned)(unaff_r14 + 0x45) != '\0') &&
          (uVar4 = *(uint *)(unsigned)(unaff_r14 + 0x48), *(uint *)(unsigned)(unaff_r14 + 0x48) = uVar4 + 1,
          *(uint *)(unsigned)(unaff_r14 + 0x58) < uVar4)) {
    *(undefined1 *)(unsigned)(unaff_r14 + 0x45) = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(unaff_r14,0xc,(uint)*(byte *)(unsigned)(unaff_r14 + 4),4));
  }
  bVar10 = *(uint *)(unsigned)(unaff_r14 + 0x50) < *(uint *)(unsigned)(unaff_r14 + 0x34);
  if (bVar10) {
    *(undefined1 *)(unsigned)(unaff_r14 + 0x44) = 1;
    *(undefined4 *)(unsigned)(unaff_r14 + 0x34) = 0;
    *(undefined1 *)(unsigned)(unaff_r14 + 0x45) = 0;
  }
  return (uint)bVar10;
}

__asm__(".globl _FUN_8c121736\n.set _FUN_8c121736, _FUN_8c121736_def\n");
