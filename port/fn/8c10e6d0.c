#include "../decls.h"
uint FUN_8c10e6d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_r11;
  int unaff_r12;
  int unaff_r14;
  undefined8 in_dr0;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined8 in_xd2;
  bool bVar15;
  byte in_FPSCR_CAUSE;
  byte bVar16;
  byte in_FPSCR_DN;
  byte bVar17;
  byte in_FPSCR_PR;
  byte bVar18;
  byte in_FPSCR_SZ;
  byte bVar19;
  
  fVar12 = (float)((ulonglong)in_dr0 >> 0x20);
  fVar14 = (float)((ulonglong)in_xd2 >> 0x20);
  iVar7 = 0;
  iVar4 = iVar7;
  if (*(short *)(unaff_r14 + 4) != 0) {
    do {
      iVar7 = iVar4 + 1;
      if (in_FPSCR_SZ != 0) {
        in_xd2 = *(undefined8 *)
                  (*(int *)(0x120 + unaff_r11) + (uint)*(byte *)(iVar4 + unaff_r12) * 4);
      }
      fVar14 = (float)((ulonglong)in_xd2 >> 0x20);
      uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar5 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar5 & 0x100000) >> 0x14);
      iVar4 = iVar7;
    } while (iVar7 < (int)(uint)*(ushort *)(unaff_r14 + 4));
  }
  uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar16 = 0;
  bVar17 = 0;
  bVar18 = (byte)((uVar5 & 0x80000) >> 0x13);
  bVar19 = (byte)((uVar5 & 0x100000) >> 0x14);
  thunk_FUN_8c013dfc(iVar7,ar5,ar6,ar7);
  uVar6 = (uint)bVar16 << 0xc | (uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14 |
          0x80000;
  uVar5 = (uVar6 & 0x80000) >> 0x13;
  uVar6 = (uVar6 & 0x100000) >> 0x14;
  cVar1 = (char)uVar6;
  dVar13 = (double)fVar12;
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44((undefined4)DAT_8c10e788,_DAT_8c10e77c);
  }
  else {
    dVar11 = (double)CONCAT44((*(uint*)((uchar*)&DAT_8c10e788+4)),(undefined4)DAT_8c10e788);
  }
  if ((char)uVar5 == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) *
                              (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 * dVar11;
  }
  if (cVar1 == '\0') {
    dVar11 = (double)(ulonglong)*(uint *)(0x128 + unaff_r11);
  }
  iVar4 = 0x128 + -4;
  uVar5 = (uVar5 << 0x13 | uVar6 << 0x14) & 0xffe7ffff;
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44(*(undefined4 *)(iVar4 + unaff_r11),SUB84(dVar11,0));
  }
  else {
    dVar11 = *(double *)(iVar4 + unaff_r11);
  }
  uVar6 = (uVar5 & 0x80000) >> 0x13;
  if ((char)uVar6 == '\0') {
    fVar12 = (float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0);
  }
  else {
    fVar12 = (float)((ulonglong)(dVar11 - dVar11) >> 0x20);
  }
  uVar5 = uVar6 << 0x13 | uVar5 & 0xfff00000 | 0x80000 & 0x3fffff;
  cVar1 = (char)((uVar5 & 0x80000) >> 0x13);
  cVar2 = (char)((uVar5 & 0x100000) >> 0x14);
  if (cVar1 == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) /
                              (float)((ulonglong)(double)fVar12 >> 0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 / (double)fVar12;
  }
  if (cVar2 == '\0') {
    fVar14 = (float)dVar13;
  }
  puVar3 = (&thunk_FUN_8c013dfc);
  if (cVar2 == '\0') {
    puVar3 = _DAT_8c10e77c;
  }
  if (cVar1 == '\0') {
    bVar15 = (float)((ulonglong)(double)fVar14 >> 0x20) < (float)(uint)puVar3;
  }
  else {
    bVar15 = (double)fVar14 < (double)CONCAT44(puVar3,_DAT_8c10e77c);
  }
  if (bVar15) {
    if (cVar2 == '\0') {
      dVar13 = (double)CONCAT44((*(uint*)((uchar*)&DAT_8c10e788+4)),_DAT_8c10e77c);
    }
    else {
      dVar13 = (double)CONCAT44((*(uint *)0x8c10e790),(*(uint*)((uchar*)&DAT_8c10e788+4)));
    }
  }
  else if (cVar2 == '\0') {
    dVar13 = (double)CONCAT44((undefined4)DAT_8c10e850,_DAT_8c10e77c);
  }
  else {
    dVar13 = (double)CONCAT44((*(uint*)((uchar*)&DAT_8c10e850+4)),(undefined4)DAT_8c10e850);
  }
  dVar11 = (double)fVar14;
  iVar4 = (int)0xff;
  if (cVar2 == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),(*(uint*)((uchar*)&DAT_8c10e850+4)));
  }
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) +
                              (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 + dVar13;
  }
  if (cVar1 == '\0') {
    iVar7 = (int)(float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    iVar7 = (int)dVar11;
  }
  iVar10 = 0;
  uVar5 = 0;
  if (*(short *)(unaff_r14 + 4) != 0) {
    do {
      iVar8 = (uint)*(byte *)(iVar10 + unaff_r12) + iVar7;
      iVar9 = iVar4;
      if ((iVar8 <= iVar4) && (iVar9 = iVar8, iVar8 < 0)) {
        iVar9 = 0;
      }
      *(char *)(iVar10 + unaff_r12) = (char)iVar9;
      iVar10 = iVar10 + 1;
      uVar5 = (uint)*(ushort *)(unaff_r14 + 4);
    } while (iVar10 < (int)uVar5);
  }
  return uVar5;
}

__asm__(".globl _FUN_8c10e6d0\n.set _FUN_8c10e6d0, _FUN_8c10e6d0_def\n");
