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
undefined4 FUN_8c123954_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c123954";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined *puVar2;
  int in_r0 = (int)(unsigned long)vin0;
  int iVar3;
  uint in_r2 = 0;
  uint uVar4;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  int unaff_r14 = 0;
  undefined4 in_fr3 = 0;
  float fVar5;
  double dVar6;
  undefined8 in_xd2 = 0;
  byte in_FPSCR_CAUSE = 0;
  byte bVar7;
  byte in_FPSCR_DN = 0;
  byte bVar8;
  byte in_FPSCR_PR = 0;
  byte bVar9;
  byte in_FPSCR_SZ = 0;
  byte bVar10;
  char cVar11;
  
  if (*(byte *)(unsigned)(in_r0 + unaff_r14) != in_r2) {
    *(char *)(unsigned)(in_r0 + unaff_r14) = (char)ar5;
    if ((char)ar5 == '\0') {
      if (in_FPSCR_SZ == 0) {
        in_fr3 = *(undefined4 *)(unsigned)(unaff_r14 + 0x3c);
      }
      else {
        in_xd2 = *(undefined8 *)(unsigned)(unaff_r14 + 0x3c);
      }
      uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      if (in_FPSCR_SZ == 0) {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x38),in_fr3);
      }
      else {
        dVar6 = *(double *)(unsigned)(unaff_r14 + 0x38);
      }
      cVar1 = (char)((uVar4 & 0x80000) >> 0x13);
      cVar11 = (char)((uVar4 & 0x100000) >> 0x14);
      if (cVar1 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) + F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x2c));
      }
      else {
        in_xd2 = *(undefined8 *)(unsigned)(unaff_r14 + 0x2c);
      }
      if (cVar1 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
    }
    else {
      iVar3 = (int)0x4b8;
      *(undefined2 *)(unsigned)(iVar3 + unaff_r14) = 0;
      puVar2 = ((void *)(unsigned)0x8c120348);
      uVar4 = 0xffe7ffff;
      a7 = 0;
      a6 = 0;
      *(undefined1 *)(unsigned)(iVar3 + 4 + unaff_r14) = 0;
      a5 = 10;
      uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & uVar4;
      bVar7 = 0;
      bVar8 = 0;
      bVar9 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar10 = (byte)((uVar4 & 0x100000) >> 0x14);
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(unaff_r14,10,0,0));
      if ((uVar4 & 0xff) != 0) {
        return 1;
      }
      uVar4 = ((uint)bVar7 << 0xc | (uint)bVar8 << 0x12 | (uint)bVar9 << 0x13 | (uint)bVar10 << 0x14
              ) & 0xffe7ffff;
      bVar7 = 0;
      bVar8 = 0;
      bVar9 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar10 = (byte)((uVar4 & 0x100000) >> 0x14);
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12356c(unaff_r14,a5,a6,a7));
      if (bVar10 == 0) {
        in_fr3 = *(undefined4 *)(unsigned)(unaff_r14 + 0x3c);
      }
      else {
        in_xd2 = *(undefined8 *)(unsigned)(unaff_r14 + 0x3c);
      }
      uVar4 = ((uint)bVar7 << 0xc | (uint)bVar8 << 0x12 | (uint)bVar9 << 0x13 | (uint)bVar10 << 0x14
              ) & 0xffe7ffff;
      if (bVar10 == 0) {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x38),in_fr3);
      }
      else {
        dVar6 = *(double *)(unsigned)(unaff_r14 + 0x38);
      }
      cVar1 = (char)((uVar4 & 0x80000) >> 0x13);
      cVar11 = (char)((uVar4 & 0x100000) >> 0x14);
      if (cVar1 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) + F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x2c));
      }
      else {
        in_xd2 = *(undefined8 *)(unsigned)(unaff_r14 + 0x2c);
      }
      if (cVar1 == '\0') {
        fVar5 = F32LO(dVar6) - F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(unaff_r14 + 0x2c) = fVar5;
    }
    else {
      *(undefined8 *)(unsigned)(unaff_r14 + 0x2c) = in_xd2;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c123954\n.set _FUN_8c123954, _FUN_8c123954_def\n");
