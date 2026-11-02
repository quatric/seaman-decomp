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
uint FUN_8c10ad00_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ad00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  double in_dr0 = 0;
  double in_dr2 = 0;
  undefined8 uVar9;
  double dVar10;
  undefined8 in_xd2 = 0;
  short sVar11;
  byte in_FPSCR_CAUSE = 0;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte in_FPSCR_DN = 0;
  byte bVar15;
  byte in_FPSCR_PR = 0;
  byte in_FPSCR_SZ = 0;
  
  puVar2 = ((void *)(unsigned)0x8c120550);
  a4 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,9,ar6,ar7));
  uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar8 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar8 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    uVar8 = (uint)F32HI(in_dr0);
  }
  else {
    uVar8 = (uint)in_dr0;
  }
  uVar8 = uVar8 & 0xffff;
  ar4[0x1f] = uVar8;
  iVar5 = uVar8 + 1;
  *(short *)(unsigned)(*(int *)(unsigned)(uint)ar4[4] + 0xc) = (short)iVar5 * 4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,1,ar6,ar7));
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar13 = 0;
  bVar15 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar12 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar14 == 0) {
    uVar6 = (uint)F32HI(in_dr0);
  }
  else {
    uVar6 = (uint)in_dr0;
  }
  *(uint *)(unsigned)((int)0x9c + (int)ar4) = uVar6 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,2,ar6,ar7));
  uVar6 = ((uint)bVar13 << 0xc | (uint)bVar15 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar12 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    uVar6 = (uint)F32HI(in_dr0);
  }
  else {
    uVar6 = (uint)in_dr0;
  }
  ar4[0xf] = uVar6 & 0xffff;
  ar4[0x10] = iVar5;
  ar4[0x11] = iVar5 * ar4[0xf];
  ar4[0x12] = ar4[0x10] * (ar4[0x27] + 1);
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,ar4[0x11],4,ar7));
  ar4[10] = iVar5;
  ar4[0xb] = ar4[0x11] * 4 + ar4[10];
  uVar7 = 4;
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,uVar8 * 3,4,ar7));
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
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,3,uVar7,ar7));
  if (bVar14 == 0) {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeac));
  }
  else {
    in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c10aeb0),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeac));
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar14 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    in_dr0 = CONCAT44D(F32HI(in_dr0) * F32LO(in_dr2),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * in_dr2;
  }
  if (bVar13 == 0) {
    *(int *)(unsigned)((int)0x94 + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)0x94 + (int)ar4) = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,4,uVar7,ar7));
  if (bVar13 == 0) {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeac));
  }
  else {
    in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c10aeb0),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeac));
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar14 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar13 << 0x14)
          & 0xffe7ffff;
  bVar14 = 0;
  bVar12 = 0;
  bVar13 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar15 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar13 == 0) {
    in_dr0 = CONCAT44D(F32HI(in_dr0) * F32LO(in_dr2),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * in_dr2;
  }
  if (bVar15 == 0) {
    *(int *)(unsigned)((int)0x98 + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar9 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c10aeb0),SUB84(in_dr2,0));
  }
  else {
    *(double *)(unsigned)((int)0x98 + (int)ar4) = in_dr0;
    uVar9 = CONCAT44((*(undefined1 *)(unsigned)0x8c10aeb4),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeb0));
  }
  if (bVar15 == 0) {
    *(int *)(unsigned)((int)0x90 + (int)ar4) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)((int)0x90 + (int)ar4) = uVar9;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,5,uVar7,ar7));
  iVar5 = (int)0x88;
  uVar6 = ((uint)bVar14 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar15 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    sVar11 = (short)(int)F32HI(in_dr0);
  }
  else {
    sVar11 = (short)(int)in_dr0;
  }
  if (bVar14 == 0) {
    *(float *)(unsigned)(iVar5 + (int)ar4) = (float)(int)sVar11;
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c10aeb8),*(undefined4 *)(unsigned)(iVar5 + (int)ar4));
  }
  else {
    *(undefined8 *)(unsigned)(iVar5 + (int)ar4) = in_xd2;
    dVar10 = CONCAT44D((*(undefined1 *)(unsigned)0x8c10aebc),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeb8));
  }
  if (bVar15 == 0) {
    dVar10 = CONCAT44D(F32HI(dVar10) / F32LO(dVar10),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 / dVar10;
  }
  if (bVar14 == 0) {
    *(int *)(unsigned)((int)0x80 + (int)ar4) = (int)(D2U(dVar10) >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)0x80 + (int)ar4) = dVar10;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,6,uVar7,ar7));
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    sVar11 = (short)(int)F32HI(in_dr0);
  }
  else {
    sVar11 = (short)(int)in_dr0;
  }
  *(int *)(unsigned)((int)0x84 + (int)ar4) = (int)sVar11;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,7,uVar7,ar7));
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c126b78));
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c126bcc));
  if (bVar14 == 0) {
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c10aec4));
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  cVar1 = (char)((uVar6 & 0x100000) >> 0x14);
  if ((char)((uVar6 & 0x80000) >> 0x13) == '\0') {
    in_dr0 = CONCAT44D(F32HI(in_dr0) * F32LO(dVar10),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * dVar10;
  }
  if (cVar1 == '\0') {
    *(int *)(unsigned)((int)0x8c + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar9 = CONCAT44((*(undefined1 *)(unsigned)0x8c10af6c),SUB84(dVar10,0));
  }
  else {
    *(double *)(unsigned)((int)0x8c + (int)ar4) = in_dr0;
    uVar9 = CONCAT44((&(*(undefined1 *)(unsigned)0x8c126bcc)),(*(undefined1 *)(unsigned)0x8c10af6c));
  }
  iVar5 = (int)0xa0;
  if (cVar1 == '\0') {
    *(int *)(unsigned)(iVar5 + (int)ar4) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)(iVar5 + (int)ar4) = uVar9;
  }
  *(unsigned *)(unsigned)(iVar5 + 4 + (int)ar4) = puVar3;
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c128fac));
  *(unsigned *)(unsigned)(iVar5 + 8 + (int)ar4) = puVar4;
  *(unsigned *)(unsigned)(iVar5 + 0xc + (int)ar4) = puVar3;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,8,uVar7,ar7));
  ar6_00 = *(undefined4 *)(unsigned)((int)0xac + (int)ar4);
  uVar7 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11b6b8(a4,uVar8,ar6_00,ar7));
  *(undefined4 *)(unsigned)((int)0xb0 + (int)ar4) = uVar7;
  uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10a308(ar4,uVar8,ar6_00,ar7));
  return (uint)((uVar8 & 0xff) != 0);
}

__asm__(".globl _FUN_8c10ad00\n.set _FUN_8c10ad00, _FUN_8c10ad00_def\n");
