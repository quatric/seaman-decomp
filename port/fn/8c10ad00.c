#include "../decls.h"
uint FUN_8c10ad00_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 ar6_00;
  uint uVar8;
  int a4;
  double in_dr0;
  double in_dr2;
  undefined8 uVar9;
  double dVar10;
  undefined8 in_xd2;
  short sVar11;
  byte in_FPSCR_CAUSE;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte in_FPSCR_DN;
  byte bVar15;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  puVar2 = (&FUN_8c120550);
  a4 = *ar4;
  FUN_8c120550(ar4,9,ar6,ar7);
  uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar8 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar8 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    uVar8 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar8 = (uint)in_dr0;
  }
  uVar8 = uVar8 & 0xffff;
  ar4[0x1f] = uVar8;
  iVar5 = uVar8 + 1;
  *(short *)(*(int *)(uint)ar4[4] + 0xc) = (short)iVar5 * 4;
  (*(code *)puVar2)(ar4,1,ar6,ar7);
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar13 = 0;
  bVar15 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar12 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar14 == 0) {
    uVar6 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar6 = (uint)in_dr0;
  }
  *(uint *)((int)0x9c + (int)ar4) = uVar6 & 0xffff;
  (*(code *)puVar2)(ar4,2,ar6,ar7);
  uVar6 = ((uint)bVar13 << 0xc | (uint)bVar15 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar12 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    uVar6 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar6 = (uint)in_dr0;
  }
  ar4[0xf] = uVar6 & 0xffff;
  ar4[0x10] = iVar5;
  ar4[0x11] = iVar5 * ar4[0xf];
  ar4[0x12] = ar4[0x10] * (ar4[0x27] + 1);
  iVar5 = (**(code **)(a4 + 0x14))(a4,ar4[0x11],4,ar7);
  ar4[10] = iVar5;
  ar4[0xb] = ar4[0x11] * 4 + ar4[10];
  uVar7 = 4;
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  iVar5 = (**(code **)(a4 + 0x14))(a4,uVar8 * 3,4,ar7);
  ar4[0x16] = iVar5;
  iVar5 = ar4[0x16] + uVar8 * 4;
  ar4[0x17] = iVar5;
  uVar6 = 0xffe7ffff;
  ar4[0x15] = uVar8 * 4 + iVar5;
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & uVar6;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  (*(code *)puVar2)(ar4,3,uVar7,ar7);
  if (bVar14 == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c10aeac);
  }
  else {
    in_xd2 = CONCAT44(_DAT_8c10aeb0,_DAT_8c10aeac);
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar14 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr2,0),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * in_dr2;
  }
  if (bVar13 == 0) {
    *(int *)((int)0x94 + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(double *)((int)0x94 + (int)ar4) = in_dr0;
  }
  (*(code *)puVar2)(ar4,4,uVar7,ar7);
  if (bVar13 == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c10aeac);
  }
  else {
    in_xd2 = CONCAT44(_DAT_8c10aeb0,_DAT_8c10aeac);
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar14 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar13 << 0x14)
          & 0xffe7ffff;
  bVar14 = 0;
  bVar12 = 0;
  bVar13 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar15 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar13 == 0) {
    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr2,0),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * in_dr2;
  }
  if (bVar15 == 0) {
    *(int *)((int)0x98 + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar9 = CONCAT44(_DAT_8c10aeb0,SUB84(in_dr2,0));
  }
  else {
    *(double *)((int)0x98 + (int)ar4) = in_dr0;
    uVar9 = CONCAT44(DAT_8c10aeb4,_DAT_8c10aeb0);
  }
  if (bVar15 == 0) {
    *(int *)((int)0x90 + (int)ar4) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)((int)0x90 + (int)ar4) = uVar9;
  }
  (*(code *)puVar2)(ar4,5,uVar7,ar7);
  iVar5 = (int)0x88;
  uVar6 = ((uint)bVar14 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar15 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    sVar11 = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    sVar11 = (short)(int)in_dr0;
  }
  if (bVar14 == 0) {
    *(float *)(iVar5 + (int)ar4) = (float)(int)sVar11;
    dVar10 = (double)CONCAT44(_DAT_8c10aeb8,*(undefined4 *)(iVar5 + (int)ar4));
  }
  else {
    *(undefined8 *)(iVar5 + (int)ar4) = in_xd2;
    dVar10 = (double)CONCAT44(DAT_8c10aebc,_DAT_8c10aeb8);
  }
  if (bVar15 == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 / dVar10;
  }
  if (bVar14 == 0) {
    *(int *)((int)0x80 + (int)ar4) = (int)((ulonglong)dVar10 >> 0x20);
  }
  else {
    *(double *)((int)0x80 + (int)ar4) = dVar10;
  }
  (*(code *)puVar2)(ar4,6,uVar7,ar7);
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    sVar11 = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    sVar11 = (short)(int)in_dr0;
  }
  *(int *)((int)0x84 + (int)ar4) = (int)sVar11;
  (*(code *)puVar2)(ar4,7,uVar7,ar7);
  puVar4 = (&DATA_8c126b78);
  puVar3 = (&DATA_8c126bcc);
  if (bVar14 == 0) {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),_DAT_8c10aec4);
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  cVar1 = (char)((uVar6 & 0x100000) >> 0x14);
  if ((char)((uVar6 & 0x80000) >> 0x13) == '\0') {
    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar10,0),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * dVar10;
  }
  if (cVar1 == '\0') {
    *(int *)((int)0x8c + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar9 = CONCAT44(DAT_8c10af6c,SUB84(dVar10,0));
  }
  else {
    *(double *)((int)0x8c + (int)ar4) = in_dr0;
    uVar9 = CONCAT44((&DATA_8c126bcc),DAT_8c10af6c);
  }
  iVar5 = (int)0xa0;
  if (cVar1 == '\0') {
    *(int *)(iVar5 + (int)ar4) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)(iVar5 + (int)ar4) = uVar9;
  }
  *(undefined **)(iVar5 + 4 + (int)ar4) = puVar3;
  puVar3 = (&DATA_8c128fac);
  *(undefined **)(iVar5 + 8 + (int)ar4) = puVar4;
  *(undefined **)(iVar5 + 0xc + (int)ar4) = puVar3;
  (*(code *)puVar2)(ar4,8,uVar7,ar7);
  ar6_00 = *(undefined4 *)((int)0xac + (int)ar4);
  uVar7 = FUN_8c11b6b8(a4,uVar8,ar6_00,ar7);
  *(undefined4 *)((int)0xb0 + (int)ar4) = uVar7;
  uVar8 = FUN_8c10a308(ar4,uVar8,ar6_00,ar7);
  return (uint)((uVar8 & 0xff) != 0);
}

__asm__(".globl _FUN_8c10ad00\n.set _FUN_8c10ad00, _FUN_8c10ad00_def\n");
