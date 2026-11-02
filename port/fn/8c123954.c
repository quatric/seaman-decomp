#include "../decls.h"
undefined4 FUN_8c123954_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  int in_r0;
  int iVar3;
  uint in_r2;
  uint uVar4;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  int unaff_r14;
  undefined4 in_fr3;
  float fVar5;
  double dVar6;
  undefined8 in_xd2;
  byte in_FPSCR_CAUSE;
  byte bVar7;
  byte in_FPSCR_DN;
  byte bVar8;
  byte in_FPSCR_PR;
  byte bVar9;
  byte in_FPSCR_SZ;
  byte bVar10;
  char cVar11;
  
  if (*(byte *)(in_r0 + unaff_r14) != in_r2) {
    *(char *)(in_r0 + unaff_r14) = (char)ar5;
    if ((char)ar5 == '\0') {
      if (in_FPSCR_SZ == 0) {
        in_fr3 = *(undefined4 *)(unaff_r14 + 0x3c);
      }
      else {
        in_xd2 = *(undefined8 *)(unaff_r14 + 0x3c);
      }
      uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x38),in_fr3);
      }
      else {
        dVar6 = *(double *)(unaff_r14 + 0x38);
      }
      cVar1 = (char)((uVar4 & 0x80000) >> 0x13);
      cVar11 = (char)((uVar4 & 0x100000) >> 0x14);
      if (cVar1 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(unaff_r14 + 0x2c));
      }
      else {
        in_xd2 = *(undefined8 *)(unaff_r14 + 0x2c);
      }
      if (cVar1 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
    }
    else {
      iVar3 = (int)0x4b8;
      *(undefined2 *)(iVar3 + unaff_r14) = 0;
      puVar2 = (&FUN_8c120348);
      uVar4 = 0xffe7ffff;
      a7 = 0;
      a6 = 0;
      *(undefined1 *)(iVar3 + 4 + unaff_r14) = 0;
      a5 = 10;
      uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & uVar4;
      bVar7 = 0;
      bVar8 = 0;
      bVar9 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar10 = (byte)((uVar4 & 0x100000) >> 0x14);
      uVar4 = (*(code *)puVar2)(unaff_r14,10,0,0);
      if ((uVar4 & 0xff) != 0) {
        return 1;
      }
      uVar4 = ((uint)bVar7 << 0xc | (uint)bVar8 << 0x12 | (uint)bVar9 << 0x13 | (uint)bVar10 << 0x14
              ) & 0xffe7ffff;
      bVar7 = 0;
      bVar8 = 0;
      bVar9 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar10 = (byte)((uVar4 & 0x100000) >> 0x14);
      FUN_8c12356c(unaff_r14,a5,a6,a7);
      if (bVar10 == 0) {
        in_fr3 = *(undefined4 *)(unaff_r14 + 0x3c);
      }
      else {
        in_xd2 = *(undefined8 *)(unaff_r14 + 0x3c);
      }
      uVar4 = ((uint)bVar7 << 0xc | (uint)bVar8 << 0x12 | (uint)bVar9 << 0x13 | (uint)bVar10 << 0x14
              ) & 0xffe7ffff;
      if (bVar10 == 0) {
        dVar6 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x38),in_fr3);
      }
      else {
        dVar6 = *(double *)(unaff_r14 + 0x38);
      }
      cVar1 = (char)((uVar4 & 0x80000) >> 0x13);
      cVar11 = (char)((uVar4 & 0x100000) >> 0x14);
      if (cVar1 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(unaff_r14 + 0x2c));
      }
      else {
        in_xd2 = *(undefined8 *)(unaff_r14 + 0x2c);
      }
      if (cVar1 == '\0') {
        fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
    }
    if (cVar11 == '\0') {
      *(float *)(unaff_r14 + 0x2c) = fVar5;
    }
    else {
      *(undefined8 *)(unaff_r14 + 0x2c) = in_xd2;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c123954\n.set _FUN_8c123954, _FUN_8c123954_def\n");
