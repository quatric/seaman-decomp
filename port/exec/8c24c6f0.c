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
uint FUN_8c24c6f0_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24c6f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 108; for (int i_ = 0; i_ < 108; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  uint *ar4_00;
  undefined4 *puVar10;
  double *pdVar11;
  undefined1 *puVar12;
  double *pdVar13;
  int iVar14;
  uint uVar15;
  double *unaff_r8 = 0;
  double *pdVar16;
  uint uVar17;
  uint *ar5_00;
  double *pdVar18;
  uint uVar19;
  uint *ar6_00;
  double *pdVar20;
  ushort *puVar21;
  ushort *puVar22;
  double in_dr0 = 0;
  float fVar23;
  float fVar24;
  float fVar25;
  double in_dr2 = 0;
  undefined4 uVar28;
  double dVar26;
  double dVar27;
  undefined4 uVar29;
  undefined4 uVar30;
  double in_dr4 = 0;
  double dVar31;
  double dVar32;
  double in_dr6 = 0;
  undefined4 uVar34;
  double dVar33;
  double in_dr8 = 0;
  double in_dr12 = 0;
  double dVar35;
  undefined8 in_dr14 = 0;
  double dVar36;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar37;
  double in_xd6 = 0;
  double in_xd8 = 0;
  bool bVar38;
  float in_PR = 0;
  char cVar39;
  char cVar40;
  double *pdVar41;
  
  cVar40 = '\0';
  cVar39 = '\0';
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  dVar36 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),0x3f000000);
  uVar1 = *ar4;
  puVar21 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  uVar2 = uVar1 & 0xc000;
  (*(float *)(fr0_ - 0x28)) = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    (*(int *)(fr0_ - 0x68)) = 0;
    pdVar41 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
    dVar36 = 7.946779287948402e-07;
    while( true ) {
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x68))) break;
      uVar1 = *puVar21;
      puVar9 = puVar21 + 1;
      puVar22 = puVar21 + 2;
      puVar21 = puVar21 + 3;
      pdVar20 = (double *)(unsigned)((uint)*puVar22 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar6 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar16 = (double *)(unsigned)((uint)*puVar9 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar6 & *(uint *)(unsigned)pdVar16 & *(uint *)(unsigned)pdVar20 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar6 | *(uint *)(unsigned)pdVar16 | *(uint *)(unsigned)pdVar20) & 1) == 0) {
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)((int)pdVar16 + 4);
            dVar37 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)((int)pdVar6 + 4));
            dVar32 = CONCAT44D(uVar30,SUB84(in_dr4,0));
          }
          else {
            dVar37 = *(double *)(unsigned)((int)pdVar16 + 4);
            uVar30 = (undefined4)(D2U(dVar37) >> 0x20);
            dVar32 = dVar37;
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) - F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 - dVar37;
          }
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 1))
            ;
            dVar32 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)(pdVar16 + 1));
          }
          else {
            in_xd4 = pdVar16[1];
          }
          fVar25 = F32LO(dVar32);
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),F32LO(dVar37) - fVar25);
          }
          else {
            dVar37 = dVar37 - dVar32;
          }
          dVar26 = in_xd4;
          if (cVar40 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar25);
            dVar26 = in_xd0;
          }
          in_xd0 = dVar26;
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) * F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 * dVar37;
          }
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),*(undefined4 *)(unsigned)(pdVar6 + 1));
          }
          if (cVar39 == '\0') {
            dVar26 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar37));
          }
          else {
            dVar26 = in_dr0 - dVar37;
          }
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar20 + 4));
          }
          (*(undefined4 *)(fr0_ - 0x5c)) = 0;
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),
                                      F32LO(dVar37) - F32HI(dVar32));
          }
          else {
            dVar37 = dVar37 - dVar32;
          }
          uVar2 = (uint)(D2U(dVar37) >> 0x20);
          dVar32 = dVar37;
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(uVar2,fVar25);
          }
          if (cVar39 == '\0') {
            in_dr0 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                      F32LO(dVar26) * F32LO(dVar37));
          }
          else {
            in_dr0 = dVar26 * dVar37;
          }
          in_dr2 = (double)((ulonglong)uVar2 << 0x20);
          if (cVar39 == '\0') {
            fVar25 = F32HI(dVar32) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar25,SUB84(dVar32,0));
            bVar38 = 0.0 < fVar25;
          }
          else {
            in_dr4 = dVar32 - in_dr0;
            bVar38 = in_dr2 < in_dr4;
          }
          if (bVar38) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24cb12;
            (*(undefined4 *)(fr0_ - 0x5c)) = 0x8000;
          }
          pdVar18 = pdVar16 + 2;
          puVar8 = ((undefined1 *)(fr0_ - 0x40));
          pdVar11 = pdVar20 + 2;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(pdVar6 + 2,pdVar18,pdVar11,puVar8));
          uVar30 = SUB84(in_dr0,0);
          ({ unsigned long ri0_ = (unsigned long)(pdVar41); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),pdVar18,pdVar11,puVar8); });
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar6 + 2),*(undefined4 *)(unsigned)(pdVar16 + 2));
          }
          else {
            dVar32 = pdVar6[2];
          }
          puVar12 = ((undefined1 *)(fr0_ - 0x40));
          puVar8 = ((undefined1 *)(unsigned)0x8c4c2620);
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 2))
            ;
          }
          fVar25 = F32HI(dVar36);
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar16 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar32,0);
            dVar32 = *(double *)(unsigned)((int)pdVar6 + 0x14);
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar20 + 0x14));
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar6 + 3),*(undefined4 *)(unsigned)(pdVar16 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar32,0);
            dVar32 = pdVar6[3];
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 3))
            ;
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          fVar25 = F32HI(dVar32);
          (*(float *)(fr0_ - 0x2c)) = fVar25;
          if (cVar40 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar32,0);
            (*(float *)(fr0_ - 0x28)) = fVar25;
          }
          puVar10 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x5c))));
          if (cVar40 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x5c))));
          if (cVar40 == '\0') {
            uVar34 = *(undefined4 *)(unsigned)((int)pdVar41 + 4);
          }
          else {
            in_xd6 = *(double *)(unsigned)((int)pdVar41 + 0xc);
            in_xd4 = *(double *)(unsigned)((int)pdVar41 + 4);
            uVar34 = SUB84(*pdVar41,0);
          }
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x5c))));
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),*(undefined4 *)(unsigned)((int)pdVar41 + 4));
          }
          else {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          uVar29 = (undefined4)(D2U(dVar32) >> 0x20);
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),*(undefined4 *)(unsigned)(pdVar41 + 1));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = uVar29;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = SUB84(dVar32,0);
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),uVar29);
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          uVar29 = (undefined4)(D2U(dVar32) >> 0x20);
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),*(undefined4 *)(unsigned)((int)pdVar41 + 0xc));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = uVar29;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = SUB84(dVar32,0);
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),uVar29);
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          uVar2 = (uint)(D2U(dVar32) >> 0x20);
          if (cVar40 == '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = uVar2;
            *(uint *)(unsigned)(pdVar6 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
            *(undefined4 *)(unsigned)((int)pdVar6 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
            *(undefined4 *)(unsigned)(pdVar6 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            *(uint *)(unsigned)((int)pdVar6 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = SUB84(dVar32,0);
            uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630) = uVar2;
            pdVar6[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
            *(ulonglong *)(unsigned)((int)pdVar6 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            pdVar6[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
            *(ulonglong *)(unsigned)((int)pdVar6 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          *(undefined4 *)(unsigned)pdVar6 = 0xe0000000;
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar30);
            dVar37 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),uVar15);
            pdVar6 = pdVar6 + 1;
          }
          else {
            dVar32 = *pdVar6;
            dVar37 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            dVar26 = CONCAT44D(uVar30,uVar34);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar30;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar37) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar32) >> 0x20);
            *(uint *)(unsigned)(pdVar16 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
            *(undefined4 *)(unsigned)((int)pdVar16 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
            *(undefined4 *)(unsigned)(pdVar16 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            *(uint *)(unsigned)((int)pdVar16 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          }
          else {
            dVar26 = pdVar6[2];
            unaff_r8[3] = pdVar6[3];
            unaff_r8[2] = dVar26;
            unaff_r8[1] = dVar37;
            *unaff_r8 = dVar32;
            uVar2 = SUB84(dVar37,0);
            pdVar16[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
            *(ulonglong *)(unsigned)((int)pdVar16 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            pdVar16[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
            *(ulonglong *)(unsigned)((int)pdVar16 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          *(undefined4 *)(unsigned)pdVar16 = 0xe0000000;
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar16,SUB84(dVar32,0));
            dVar37 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar16 + 4),uVar2);
            pdVar16 = pdVar16 + 1;
          }
          else {
            dVar32 = *pdVar16;
            dVar37 = pdVar16[1];
            pdVar16 = pdVar16 + 2;
          }
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar16 + 2);
            dVar26 = CONCAT44D(uVar30,SUB84(dVar26,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar16 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar30;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar37) >> 0x20);
            pdVar6 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar6 = (int)(D2U(dVar32) >> 0x20);
            *(uint *)(unsigned)(pdVar20 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
            *(undefined4 *)(unsigned)((int)pdVar20 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
            *(undefined4 *)(unsigned)(pdVar20 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            *(uint *)(unsigned)((int)pdVar20 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          }
          else {
            dVar26 = pdVar16[2];
            unaff_r8[7] = pdVar16[3];
            unaff_r8[6] = dVar26;
            unaff_r8[5] = dVar37;
            pdVar6 = unaff_r8 + 4;
            *pdVar6 = dVar32;
            uVar2 = SUB84(dVar37,0);
            pdVar20[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
            *(ulonglong *)(unsigned)((int)pdVar20 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            pdVar20[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
            *(ulonglong *)(unsigned)((int)pdVar20 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          *(undefined4 *)(unsigned)pdVar20 = 0xf0000000;
          if (cVar40 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar20,SUB84(dVar32,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 4),uVar2);
            pdVar20 = pdVar20 + 1;
          }
          else {
            in_dr0 = *pdVar20;
            in_dr2 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar20 + 2);
            in_dr4 = CONCAT44D(uVar30,SUB84(dVar26,0));
            *(undefined4 *)(unsigned)((int)pdVar6 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
            *(undefined4 *)(unsigned)(pdVar6 + 7) = uVar30;
            *(int *)(unsigned)((int)pdVar6 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar6 = pdVar6 + 6;
            *(int *)(unsigned)pdVar6 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar20[2];
            pdVar6[7] = pdVar20[3];
            pdVar6[6] = in_dr4;
            pdVar6[5] = in_dr2;
            pdVar6 = pdVar6 + 4;
            *pdVar6 = in_dr0;
          }
          unaff_r8 = pdVar6 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
        }
        else {
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar16 + 3);
            uVar34 = *(undefined4 *)(unsigned)((int)pdVar16 + 0x14);
            pdVar18 = (double *)(unsigned)((int)pdVar6 + 0x14);
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar34);
            dVar37 = CONCAT44D(uVar30,SUB84(in_dr0,0));
            dVar32 = *(double *)(unsigned)((int)pdVar16 + 0x14);
          }
          else {
            dVar37 = pdVar16[3];
            in_xd6 = *(double *)(unsigned)((int)pdVar16 + 0x14);
            in_xd4 = *(double *)(unsigned)((int)pdVar6 + 0x14);
            pdVar18 = pdVar6 + 3;
            uVar34 = SUB84(dVar37,0);
            uVar30 = (undefined4)(D2U(dVar37) >> 0x20);
            dVar32 = dVar37;
          }
          dVar26 = *pdVar18;
          fVar24 = F32HI(dVar26);
          fVar25 = F32LO(dVar26);
          if (cVar39 == '\0') {
            fVar23 = F32LO(in_dr2) * fVar24;
            dVar37 = CONCAT44D(F32HI(dVar37) * fVar25,SUB84(dVar37,0));
          }
          else {
            fVar23 = SUB84(in_dr2 * dVar26,0);
            dVar37 = dVar37 * dVar26;
          }
          if (cVar40 == '\0') {
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar6 + 2),*(undefined4 *)(unsigned)(pdVar16 + 2));
            dVar32 = CONCAT44D(uVar30,fVar23);
          }
          else {
            in_xd8 = pdVar16[2];
            dVar31 = pdVar6[2];
          }
          fVar23 = F32HI(dVar31);
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) * fVar23,SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 * dVar31;
          }
          dVar35 = in_xd6;
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),uVar34);
            dVar35 = in_xd0;
          }
          in_xd0 = dVar35;
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) - F32LO(dVar32),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 - dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),SUB84(dVar31,0));
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),F32LO(dVar32) * fVar24);
          }
          else {
            dVar32 = dVar32 * dVar26;
          }
          dVar35 = in_xd8;
          if (cVar40 == '\0') {
            dVar35 = CONCAT44D(SUB84(dVar31,0),SUB84(in_dr12,0));
          }
          if (cVar39 == '\0') {
            in_dr12 = CONCAT44D(F32HI(dVar35) * fVar25,SUB84(dVar35,0));
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),F32LO(dVar37) * fVar23);
            fVar24 = F32LO(dVar32) - F32HI(dVar32);
          }
          else {
            in_dr12 = dVar35 * dVar26;
            dVar37 = dVar37 * dVar31;
            fVar24 = SUB84(dVar32 - dVar32,0);
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 0x14),fVar24);
          }
          else {
            dVar32 = *(double *)(unsigned)((int)pdVar20 + 0x14);
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),
                                      F32LO(dVar37) - F32HI(in_dr12));
            dVar32 = CONCAT44D(F32HI(dVar32) * F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar37 = dVar37 - in_dr12;
            dVar32 = dVar32 * dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 2))
            ;
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar37) * F32LO(dVar32) +
                                      F32HI(dVar32),SUB84(dVar32,0));
          }
          in_dr0 = in_xd0;
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 3))
            ;
            in_dr0 = CONCAT44D(SUB84(dVar37,0),SUB84(dVar37,0));
          }
          (*(undefined4 *)(fr0_ - 0x5c)) = 0;
          if (cVar39 == '\0') {
            dVar32 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar32) +
                                    F32HI(dVar32)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar32) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar40 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar32) >> 0x20),fVar25);
          }
          if (cVar39 == '\0') {
            bVar38 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar38 = in_dr2 < in_dr4;
          }
          if (bVar38) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24cb12;
            (*(undefined4 *)(fr0_ - 0x5c)) = 0x8000;
          }
          pdVar18 = pdVar16 + 2;
          puVar8 = ((undefined1 *)(fr0_ - 0x40));
          pdVar11 = pdVar20 + 2;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(pdVar6 + 2,pdVar18,pdVar11,puVar8));
          ({ unsigned long ri0_ = (unsigned long)(pdVar41); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),pdVar18,pdVar11,puVar8); });
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar6 + 2),*(undefined4 *)(unsigned)(pdVar16 + 2));
          }
          else {
            dVar32 = pdVar6[2];
          }
          puVar12 = ((undefined1 *)(fr0_ - 0x40));
          puVar8 = ((undefined1 *)(unsigned)0x8c4c2620);
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 2))
            ;
          }
          fVar25 = F32HI(dVar36);
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar16 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar32,0);
            dVar32 = *(double *)(unsigned)((int)pdVar6 + 0x14);
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar20 + 0x14));
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar6 + 3),*(undefined4 *)(unsigned)(pdVar16 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar32,0);
            dVar32 = pdVar6[3];
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar20 + 3))
            ;
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          fVar25 = F32HI(dVar32);
          (*(float *)(fr0_ - 0x2c)) = fVar25;
          if (cVar40 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar32,0);
            (*(float *)(fr0_ - 0x28)) = fVar25;
          }
          puVar10 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x5c))));
          if (cVar40 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x5c))));
          if (cVar40 == '\0') {
            in_dr4 = (double)(ulonglong)*(uint *)(unsigned)((int)pdVar41 + 4);
          }
          else {
            in_xd6 = *(double *)(unsigned)((int)pdVar41 + 0xc);
            in_xd4 = *(double *)(unsigned)((int)pdVar41 + 4);
            in_dr4 = *pdVar41;
          }
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x5c))));
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),*(undefined4 *)(unsigned)((int)pdVar41 + 4));
          }
          else {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          uVar30 = (undefined4)(D2U(dVar32) >> 0x20);
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),*(undefined4 *)(unsigned)(pdVar41 + 1));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = uVar30;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = SUB84(dVar32,0);
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),uVar30);
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          uVar30 = (undefined4)(D2U(dVar32) >> 0x20);
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),*(undefined4 *)(unsigned)((int)pdVar41 + 0xc));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = uVar30;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = SUB84(dVar32,0);
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),uVar30);
          }
          if (cVar39 == '\0') {
            in_dr2 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            in_dr2 = dVar32 + dVar32;
          }
          uVar2 = (uint)((ulonglong)in_dr2 >> 0x20);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = uVar2;
          if (cVar40 != '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = SUB84(in_dr2,0);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630) = uVar2;
          }
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c24763c(pdVar6,pdVar16,pdVar20,((undefined1 *)(unsigned)0x8c4c2620)));
        }
      }
LAB_8c24cb12:
      (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x68)) + 1;
    }
  }
  else if (uVar2 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    (*(int *)(fr0_ - 0x64)) = 0;
    pdVar41 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
    while( true ) {
      uVar30 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x64))) break;
      puVar9 = puVar21 + 3;
      pdVar18 = (double *)(unsigned)((uint)puVar21[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar16 = (double *)(unsigned)((uint)*puVar21 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar20 = (double *)(unsigned)((uint)puVar21[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar21 = puVar21 + 4;
      pdVar6 = (double *)(unsigned)((uint)*puVar9 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar16 & *(uint *)(unsigned)pdVar20 & *(uint *)(unsigned)pdVar18 & *(uint *)(unsigned)pdVar6 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar16 | *(uint *)(unsigned)pdVar20 | *(uint *)(unsigned)pdVar18 | *(uint *)(unsigned)pdVar6) & 1) == 0) {
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)((int)pdVar20 + 4);
            dVar32 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)((int)pdVar16 + 4));
          }
          else {
            dVar32 = *(double *)(unsigned)((int)pdVar20 + 4);
            in_xd4 = dVar32;
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) - F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 - dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar18 + 1))
            ;
            dVar37 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 1),uVar30);
          }
          else {
            dVar37 = pdVar20[1];
          }
          fVar25 = F32HI(dVar37);
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),F32LO(dVar32) - fVar25);
          }
          else {
            dVar32 = dVar32 - dVar37;
          }
          dVar26 = dVar37;
          if (cVar40 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar25);
            dVar26 = in_xd0;
          }
          in_xd0 = dVar26;
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) * F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 * dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar16 + 1))
            ;
          }
          if (cVar39 == '\0') {
            dVar26 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar32));
          }
          else {
            dVar26 = in_dr0 - dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar18 + 4));
          }
          (*(undefined4 *)(fr0_ - 0x54)) = 0;
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),
                                      F32LO(dVar32) - F32LO(dVar37));
          }
          else {
            dVar32 = dVar32 - dVar37;
          }
          uVar2 = (uint)(D2U(dVar32) >> 0x20);
          dVar31 = dVar32;
          if (cVar40 == '\0') {
            dVar31 = CONCAT44D(uVar2,SUB84(dVar37,0));
          }
          if (cVar39 == '\0') {
            in_dr0 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                      F32LO(dVar26) * F32LO(dVar32));
          }
          else {
            in_dr0 = dVar26 * dVar32;
          }
          in_dr2 = (double)((ulonglong)uVar2 << 0x20);
          if (cVar39 == '\0') {
            fVar25 = F32HI(dVar31) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar25,SUB84(dVar31,0));
            bVar38 = 0.0 < fVar25;
          }
          else {
            in_dr4 = dVar31 - in_dr0;
            bVar38 = in_dr2 < in_dr4;
          }
          if (bVar38) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24cf6c;
            (*(undefined4 *)(fr0_ - 0x54)) = 0x8000;
          }
          pdVar11 = pdVar20 + 2;
          puVar8 = ((undefined1 *)(fr0_ - 0x40));
          pdVar13 = pdVar18 + 2;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(pdVar16 + 2,pdVar11,pdVar13,puVar8));
          uVar30 = SUB84(in_dr0,0);
          ({ unsigned long ri0_ = (unsigned long)(pdVar41); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),pdVar11,pdVar13,puVar8); });
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 2),*(undefined4 *)(unsigned)(pdVar18 + 2));
          }
          else {
            dVar32 = pdVar20[2];
          }
          puVar8 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar12 = ((undefined1 *)(fr0_ - 0x40));
          fVar25 = F32LO(dVar36);
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar18 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar32,0);
            dVar32 = *(double *)(unsigned)((int)pdVar20 + 0x14);
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 3),*(undefined4 *)(unsigned)(pdVar18 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar32,0);
            dVar32 = pdVar20[3];
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          fVar25 = F32HI(dVar32);
          (*(float *)(fr0_ - 0x2c)) = fVar25;
          if (cVar40 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar32,0);
            (*(float *)(fr0_ - 0x28)) = fVar25;
          }
          puVar10 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x54))));
          if (cVar40 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x54))));
          if (cVar40 == '\0') {
            uVar34 = *(undefined4 *)(unsigned)((int)pdVar41 + 0xc);
            uVar29 = *(undefined4 *)(unsigned)((int)pdVar41 + 4);
          }
          else {
            uVar34 = SUB84(pdVar41[1],0);
            in_xd4 = *(double *)(unsigned)((int)pdVar41 + 4);
            uVar29 = SUB84(*pdVar41,0);
          }
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x54))));
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),*(undefined4 *)(unsigned)((int)pdVar41 + 4));
          }
          else {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          uVar28 = (undefined4)(D2U(dVar32) >> 0x20);
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),*(undefined4 *)(unsigned)(pdVar41 + 1));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = uVar28;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = SUB84(dVar32,0);
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),uVar28);
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          uVar28 = (undefined4)(D2U(dVar32) >> 0x20);
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),*(undefined4 *)(unsigned)((int)pdVar41 + 0xc));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = uVar28;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = SUB84(dVar32,0);
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),uVar28);
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          uVar2 = (uint)(D2U(dVar32) >> 0x20);
          if (cVar40 == '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = uVar2;
            *(uint *)(unsigned)(pdVar16 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
            *(undefined4 *)(unsigned)((int)pdVar16 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
            *(undefined4 *)(unsigned)(pdVar16 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            *(uint *)(unsigned)((int)pdVar16 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = SUB84(dVar32,0);
            uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630) = uVar2;
            pdVar16[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
            *(ulonglong *)(unsigned)((int)pdVar16 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            pdVar16[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
            *(ulonglong *)(unsigned)((int)pdVar16 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          *(undefined4 *)(unsigned)pdVar16 = 0xe0000000;
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar16,uVar30);
            dVar37 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar16 + 4),uVar15);
            pdVar16 = pdVar16 + 1;
          }
          else {
            dVar32 = *pdVar16;
            dVar37 = pdVar16[1];
            pdVar16 = pdVar16 + 2;
          }
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar16 + 2);
            dVar31 = CONCAT44D(uVar30,uVar29);
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar16 + 0x14),uVar34);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar16 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar30;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar37) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar32) >> 0x20);
            *(uint *)(unsigned)(pdVar20 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
            *(undefined4 *)(unsigned)((int)pdVar20 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
            *(undefined4 *)(unsigned)(pdVar20 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            *(uint *)(unsigned)((int)pdVar20 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          }
          else {
            dVar31 = pdVar16[2];
            dVar26 = pdVar16[3];
            unaff_r8[3] = dVar26;
            unaff_r8[2] = dVar31;
            unaff_r8[1] = dVar37;
            *unaff_r8 = dVar32;
            uVar2 = SUB84(dVar37,0);
            pdVar20[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
            *(ulonglong *)(unsigned)((int)pdVar20 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            pdVar20[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
            *(ulonglong *)(unsigned)((int)pdVar20 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          *(undefined4 *)(unsigned)pdVar20 = 0xe0000000;
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar20,SUB84(dVar32,0));
            dVar37 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 4),uVar2);
            pdVar20 = pdVar20 + 1;
          }
          else {
            dVar32 = *pdVar20;
            dVar37 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar20 + 2);
            dVar31 = CONCAT44D(uVar30,SUB84(dVar31,0));
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 0x14),SUB84(dVar26,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar30;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar37) >> 0x20);
            pdVar16 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar16 = (int)(D2U(dVar32) >> 0x20);
            *(uint *)(unsigned)(pdVar18 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
            *(undefined4 *)(unsigned)((int)pdVar18 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
            *(undefined4 *)(unsigned)(pdVar18 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            *(uint *)(unsigned)((int)pdVar18 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          }
          else {
            dVar31 = pdVar20[2];
            dVar26 = pdVar20[3];
            unaff_r8[7] = dVar26;
            unaff_r8[6] = dVar31;
            unaff_r8[5] = dVar37;
            pdVar16 = unaff_r8 + 4;
            *pdVar16 = dVar32;
            uVar2 = SUB84(dVar37,0);
            pdVar18[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
            *(ulonglong *)(unsigned)((int)pdVar18 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            pdVar18[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
            *(ulonglong *)(unsigned)((int)pdVar18 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          *(undefined4 *)(unsigned)pdVar18 = 0xe0000000;
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar18,SUB84(dVar32,0));
            dVar37 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar18 + 4),uVar2);
            pdVar18 = pdVar18 + 1;
          }
          else {
            dVar32 = *pdVar18;
            dVar37 = pdVar18[1];
            pdVar18 = pdVar18 + 2;
          }
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar18 + 2);
            dVar31 = CONCAT44D(uVar30,SUB84(dVar31,0));
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar18 + 0x14),SUB84(dVar26,0));
            *(undefined4 *)(unsigned)((int)pdVar16 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar18 + 0x14);
            *(undefined4 *)(unsigned)(pdVar16 + 7) = uVar30;
            *(int *)(unsigned)((int)pdVar16 + 0x34) = (int)(D2U(dVar37) >> 0x20);
            pdVar16 = pdVar16 + 6;
            *(int *)(unsigned)pdVar16 = (int)(D2U(dVar32) >> 0x20);
            *(uint *)(unsigned)(pdVar6 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
            *(undefined4 *)(unsigned)((int)pdVar6 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
            *(undefined4 *)(unsigned)(pdVar6 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            *(uint *)(unsigned)((int)pdVar6 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          }
          else {
            dVar31 = pdVar18[2];
            dVar26 = pdVar18[3];
            pdVar16[7] = dVar26;
            pdVar16[6] = dVar31;
            pdVar16[5] = dVar37;
            pdVar16 = pdVar16 + 4;
            *pdVar16 = dVar32;
            uVar2 = SUB84(dVar37,0);
            pdVar6[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
            *(ulonglong *)(unsigned)((int)pdVar6 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            pdVar6[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
            *(ulonglong *)(unsigned)((int)pdVar6 + 0x2c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
          }
          *(undefined4 *)(unsigned)pdVar6 = 0xf0000000;
          if (cVar40 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar32,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),uVar2);
            pdVar6 = pdVar6 + 1;
          }
          else {
            in_dr0 = *pdVar6;
            in_dr2 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            in_dr4 = CONCAT44D(uVar30,SUB84(dVar31,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),SUB84(dVar26,0));
            *(undefined4 *)(unsigned)((int)pdVar16 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(pdVar16 + 7) = uVar30;
            *(int *)(unsigned)((int)pdVar16 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar16 = pdVar16 + 6;
            *(int *)(unsigned)pdVar16 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            in_dr6 = pdVar6[3];
            pdVar16[7] = in_dr6;
            pdVar16[6] = in_dr4;
            pdVar16[5] = in_dr2;
            pdVar16 = pdVar16 + 4;
            *pdVar16 = in_dr0;
          }
          unaff_r8 = pdVar16 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
        }
        else {
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar20 + 3);
            uVar34 = *(undefined4 *)(unsigned)((int)pdVar20 + 0x14);
            in_dr6 = CONCAT44D(uVar34,SUB84(in_dr6,0));
            in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar16 + 0x14));
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar16 + 3),uVar30);
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar34);
            dVar37 = CONCAT44D(uVar30,SUB84(in_dr0,0));
          }
          else {
            dVar37 = pdVar20[3];
            in_dr6 = *(double *)(unsigned)((int)pdVar20 + 0x14);
            dVar32 = pdVar16[3];
            uVar34 = (undefined4)((ulonglong)in_dr6 >> 0x20);
            uVar30 = SUB84(dVar32,0);
            in_xd4 = dVar37;
          }
          fVar25 = F32HI(dVar32);
          if (cVar39 == '\0') {
            fVar24 = F32LO(in_dr2) * fVar25;
            dVar37 = CONCAT44D(F32HI(dVar37) * F32LO(in_dr8),
                                      SUB84(dVar37,0));
          }
          else {
            fVar24 = SUB84(in_dr2 * dVar32,0);
            dVar37 = dVar37 * in_dr8;
          }
          if (cVar40 == '\0') {
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 2),SUB84(in_dr8,0));
            in_dr6 = CONCAT44D(uVar34,*(undefined4 *)(unsigned)(pdVar16 + 2));
            dVar26 = CONCAT44D(uVar30,fVar24);
          }
          else {
            in_dr8 = pdVar20[2];
            dVar26 = in_xd4;
          }
          if (cVar39 == '\0') {
            dVar26 = CONCAT44D(F32HI(dVar26) * F32LO(in_dr6),
                                      SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 * in_dr6;
          }
          dVar31 = in_dr6;
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),
                                      (int)((ulonglong)in_dr6 >> 0x20));
            dVar31 = in_xd0;
          }
          in_xd0 = dVar31;
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) - F32LO(dVar26),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 - dVar26;
          }
          uVar34 = (undefined4)((ulonglong)in_dr8 >> 0x20);
          if (cVar40 == '\0') {
            dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),uVar34);
          }
          if (cVar39 == '\0') {
            dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) * fVar25);
          }
          else {
            dVar26 = dVar26 * dVar32;
          }
          dVar32 = in_dr8;
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(uVar34,SUB84(in_dr12,0));
          }
          if (cVar39 == '\0') {
            in_dr12 = CONCAT44D(F32HI(dVar32) * F32LO(in_dr8),
                                       SUB84(dVar32,0));
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),
                                      F32LO(dVar37) * F32LO(in_dr6));
            fVar25 = F32LO(dVar26) - F32HI(dVar26);
          }
          else {
            in_dr12 = dVar32 * in_dr8;
            dVar37 = dVar37 * in_dr6;
            fVar25 = SUB84(dVar26 - dVar26,0);
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar18 + 0x14),fVar25);
          }
          else {
            dVar32 = *(double *)(unsigned)((int)pdVar18 + 0x14);
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),
                                      F32LO(dVar37) - F32HI(in_dr12));
            dVar32 = CONCAT44D(F32HI(dVar32) * F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar37 = dVar37 - in_dr12;
            dVar32 = dVar32 * dVar32;
          }
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar18 + 2))
            ;
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar37) * F32LO(dVar32) +
                                      F32HI(dVar32),SUB84(dVar32,0));
          }
          in_dr0 = in_xd0;
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar18 + 3))
            ;
            in_dr0 = CONCAT44D(SUB84(dVar37,0),SUB84(dVar37,0));
          }
          (*(undefined4 *)(fr0_ - 0x54)) = 0;
          if (cVar39 == '\0') {
            dVar32 = (double)((ulonglong)
                              (uint)(F32HI(in_dr0) * F32LO(dVar32) +
                                    F32HI(dVar32)) << 0x20);
          }
          in_dr2 = (double)(D2U(dVar32) & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar40 == '\0') {
            in_dr4 = CONCAT44D((int)(D2U(dVar32) >> 0x20),uVar30);
          }
          if (cVar39 == '\0') {
            bVar38 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar38 = in_dr2 < in_dr4;
          }
          if (bVar38) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24cf6c;
            (*(undefined4 *)(fr0_ - 0x54)) = 0x8000;
          }
          pdVar11 = pdVar20 + 2;
          puVar8 = ((undefined1 *)(fr0_ - 0x40));
          pdVar13 = pdVar18 + 2;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(pdVar16 + 2,pdVar11,pdVar13,puVar8));
          ({ unsigned long ri0_ = (unsigned long)(pdVar41); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),pdVar11,pdVar13,puVar8); });
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 2),*(undefined4 *)(unsigned)(pdVar18 + 2));
          }
          else {
            dVar32 = pdVar20[2];
          }
          puVar8 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar12 = ((undefined1 *)(fr0_ - 0x40));
          fVar25 = F32LO(dVar36);
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar20 + 0x14),
                                      *(undefined4 *)(unsigned)((int)pdVar18 + 0x14));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar32,0);
            dVar32 = *(double *)(unsigned)((int)pdVar20 + 0x14);
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)(D2U(dVar32) >> 0x20);
            dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar20 + 3),*(undefined4 *)(unsigned)(pdVar18 + 3));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar32,0);
            dVar32 = pdVar20[3];
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D((F32HI(dVar32) + F32LO(dVar32)) *
                                      fVar25,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar36;
          }
          fVar25 = F32HI(dVar32);
          (*(float *)(fr0_ - 0x2c)) = fVar25;
          if (cVar40 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar32,0);
            (*(float *)(fr0_ - 0x28)) = fVar25;
          }
          puVar10 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x54))));
          if (cVar40 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x54))));
          if (cVar40 == '\0') {
            in_dr6 = (double)(ulonglong)*(uint *)(unsigned)((int)pdVar41 + 0xc);
            in_dr4 = (double)(ulonglong)*(uint *)(unsigned)((int)pdVar41 + 4);
          }
          else {
            in_dr6 = pdVar41[1];
            in_xd4 = *(double *)(unsigned)((int)pdVar41 + 4);
            in_dr4 = *pdVar41;
          }
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x54))));
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),*(undefined4 *)(unsigned)((int)pdVar41 + 4));
          }
          else {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          uVar30 = (undefined4)(D2U(dVar32) >> 0x20);
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),*(undefined4 *)(unsigned)(pdVar41 + 1));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = uVar30;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = SUB84(dVar32,0);
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),uVar30);
          }
          if (cVar39 == '\0') {
            dVar32 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          uVar30 = (undefined4)(D2U(dVar32) >> 0x20);
          if (cVar40 == '\0') {
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),*(undefined4 *)(unsigned)((int)pdVar41 + 0xc));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = uVar30;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = SUB84(dVar32,0);
            dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),uVar30);
          }
          if (cVar39 == '\0') {
            in_dr2 = CONCAT44D(F32HI(dVar32) + F32LO(dVar32),
                                      SUB84(dVar32,0));
          }
          else {
            in_dr2 = dVar32 + dVar32;
          }
          uVar2 = (uint)((ulonglong)in_dr2 >> 0x20);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = uVar2;
          if (cVar40 != '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = SUB84(in_dr2,0);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630) = uVar2;
          }
          if ((*(uint *)(unsigned)pdVar16 & *(uint *)(unsigned)pdVar20 & *(uint *)(unsigned)pdVar18 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c24763c(pdVar16,pdVar20,pdVar18,((undefined1 *)(unsigned)0x8c4c2620)));
          }
          if ((*(uint *)(unsigned)pdVar20 & *(uint *)(unsigned)pdVar18 & *(uint *)(unsigned)pdVar6 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c24763c(pdVar20,pdVar18,pdVar6,((undefined1 *)(unsigned)0x8c4c2620)));
          }
        }
      }
LAB_8c24cf6c:
      (*(int *)(fr0_ - 0x64)) = (*(int *)(fr0_ - 0x64)) + 1;
    }
  }
  else if (uVar2 == 0x8000) {
    (*(int *)(fr0_ - 0x68)) = 0;
    while( true ) {
      uVar30 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x68))) break;
      uVar2 = 0;
      puVar22 = puVar21 + 1;
      iVar14 = 0;
      uVar19 = (uint)*puVar21;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar19;
      uVar15 = 0xffffffff;
      puVar9 = puVar22;
      if (uVar19 != 0) {
        do {
          uVar1 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar14 = iVar14 + 1;
          uVar17 = *(uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          uVar15 = uVar15 & uVar17;
          uVar2 = uVar2 | uVar17;
        } while (iVar14 < (int)uVar19);
      }
      dVar32 = in_xd0;
      if ((uVar15 & 0x3f) == 0) {
        iVar14 = (int)uVar19 >> 1;
        if ((uVar2 & 1) == 0) {
          iVar3 = (uint)*puVar22 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar7 = (uint)puVar21[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar5 = (uint)puVar21[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(iVar7 + 4);
            dVar37 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)(iVar3 + 4));
          }
          else {
            dVar37 = *(double *)(unsigned)(iVar7 + 4);
            in_xd2 = *(double *)(unsigned)(iVar3 + 4);
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) - F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 - dVar37;
          }
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),*(undefined4 *)(unsigned)(iVar5 + 8));
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(iVar7 + 8),uVar30);
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar5 + 8);
            dVar26 = *(double *)(unsigned)(iVar7 + 8);
          }
          fVar25 = F32HI(dVar26);
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),F32LO(dVar37) - fVar25);
          }
          else {
            dVar37 = dVar37 - dVar26;
          }
          dVar32 = dVar26;
          if (cVar40 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar25);
            dVar32 = in_xd0;
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) * F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 * dVar37;
          }
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 8));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar3 + 8);
          }
          if (cVar39 == '\0') {
            dVar31 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      F32LO(in_dr0) - F32LO(dVar37));
          }
          else {
            dVar31 = in_dr0 - dVar37;
          }
          uVar30 = (undefined4)(D2U(dVar37) >> 0x20);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D(uVar30,SUB84(dVar26,0));
            dVar26 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)(iVar5 + 4));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar5 + 4);
            dVar26 = dVar37;
          }
          if (cVar39 == '\0') {
            dVar26 = CONCAT44D(uVar30,F32LO(dVar26) - F32LO(dVar37));
          }
          else {
            dVar26 = dVar26 - dVar37;
          }
          (*(undefined4 *)(fr0_ - 0x50)) = 0;
          if (cVar39 == '\0') {
            in_dr0 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                      F32LO(dVar31) * F32LO(dVar26));
          }
          else {
            in_dr0 = dVar31 * dVar26;
          }
          in_dr2 = (double)(D2U(dVar26) & 0xffffffff00000000);
          if (cVar39 == '\0') {
            fVar25 = F32HI(dVar37) - F32LO(in_dr0);
            in_dr4 = CONCAT44D(fVar25,SUB84(dVar37,0));
            bVar38 = 0.0 < fVar25;
          }
          else {
            in_dr4 = dVar37 - in_dr0;
            bVar38 = in_dr2 < in_dr4;
          }
          if (bVar38) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24d3b8;
            (*(undefined4 *)(fr0_ - 0x50)) = 0x8000;
          }
          puVar8 = ((undefined1 *)(fr0_ - 0x40));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar19;
          iVar5 = iVar5 + 0x10;
          iVar7 = iVar7 + 0x10;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(iVar3 + 0x10,iVar7,iVar5,puVar8));
          uVar30 = SUB84(in_dr0,0);
          ({ unsigned long ri0_ = (unsigned long)(iVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),iVar7,iVar5,puVar8); });
          iVar3 = (uint)puVar22[iVar14 + -1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(iVar3 + 0x10);
            (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(iVar3 + 0x14);
            (*(float *)(fr0_ - 0x2c)) = *(float *)(unsigned)(iVar3 + 0x18);
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)*(undefined8 *)(unsigned)(iVar3 + 0x10);
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)*(undefined8 *)(unsigned)(iVar3 + 0x14);
            in_xd2 = *(double *)(unsigned)(iVar3 + 0x18);
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x28)) = F32HI(in_xd2);
          }
          iVar14 = (uint)puVar22[iVar14] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),*(undefined4 *)(unsigned)(iVar14 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar14 + 0x10);
            dVar37 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          uVar34 = (undefined4)(D2U(dVar37) >> 0x20);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(iVar14 + 0x14));
            (*(undefined4 *)(fr0_ - 0x34)) = uVar34;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar37,0);
            in_xd2 = *(double *)(unsigned)(iVar14 + 0x14);
            dVar37 = CONCAT44D((*(float *)(fr0_ - 0x2c)),uVar34);
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          uVar34 = (undefined4)(D2U(dVar37) >> 0x20);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(float *)(fr0_ - 0x2c)),*(undefined4 *)(unsigned)(iVar14 + 0x18));
            (*(undefined4 *)(fr0_ - 0x30)) = uVar34;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar37,0);
            in_xd2 = *(double *)(unsigned)(iVar14 + 0x18);
            dVar37 = CONCAT44D((*(float *)(fr0_ - 0x28)),uVar34);
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          fVar25 = F32HI(dVar37);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D(fVar25,(*(undefined4 *)(fr0_ - 0x34)));
            (*(float *)(fr0_ - 0x2c)) = fVar25;
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar37,0);
            in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
            (*(float *)(fr0_ - 0x28)) = fVar25;
          }
          fVar25 = F32LO(dVar36);
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),F32LO(dVar37) * fVar25);
          }
          else {
            dVar37 = dVar37 * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar37,0);
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),(*(undefined4 *)(fr0_ - 0x30)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),F32LO(dVar37) * fVar25);
          }
          else {
            dVar37 = dVar37 * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar37,0);
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),(*(float *)(fr0_ - 0x2c)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x2c)) = F32HI(in_xd2);
            in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
          }
          if (cVar39 == '\0') {
            (*(float *)(fr0_ - 0x2c)) = F32LO(dVar37) * fVar25;
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar37 * dVar36,0);
          }
          puVar8 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar12 = ((undefined1 *)(fr0_ - 0x40));
          if (cVar40 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x28)) = F32HI(in_xd2);
          }
          puVar10 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x50))));
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x50))));
          uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
          if (cVar40 == '\0') {
            uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x50))));
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          }
          else {
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          uVar34 = (undefined4)(D2U(dVar37) >> 0x20);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = uVar34;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = SUB84(dVar37,0);
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),uVar34);
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          uVar34 = (undefined4)(D2U(dVar37) >> 0x20);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = uVar34;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = SUB84(dVar37,0);
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),uVar34);
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          uVar15 = (uint)(D2U(dVar37) >> 0x20);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = uVar15;
          if (cVar40 != '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = SUB84(dVar37,0);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630) = uVar15;
          }
          if (cVar40 == '\0') {
            dVar37 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          }
          else {
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          }
          uVar15 = SUB84(dVar37,0);
          pdVar41 = (double *)(unsigned)((uint)*puVar22 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          if (cVar40 == '\0') {
            *(uint *)(unsigned)(pdVar41 + 4) = uVar15;
            *(undefined4 *)(unsigned)((int)pdVar41 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
            *(undefined4 *)(unsigned)(pdVar41 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            *(uint *)(unsigned)((int)pdVar41 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          }
          else {
            pdVar41[4] = in_xd2;
            *(ulonglong *)(unsigned)((int)pdVar41 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            pdVar41[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
            *(double *)(unsigned)((int)pdVar41 + 0x2c) = in_xd2;
          }
          *(undefined4 *)(unsigned)pdVar41 = 0xe0000000;
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D(*(undefined4 *)(unsigned)pdVar41,uVar30);
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar41 + 4),uVar15);
            pdVar41 = pdVar41 + 1;
          }
          else {
            dVar37 = *pdVar41;
            dVar26 = pdVar41[1];
            pdVar41 = pdVar41 + 2;
          }
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar41 + 2);
            dVar31 = CONCAT44D(uVar30,uVar2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar41 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar30;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar26) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar37) >> 0x20);
          }
          else {
            dVar31 = pdVar41[2];
            unaff_r8[3] = pdVar41[3];
            unaff_r8[2] = dVar31;
            unaff_r8[1] = dVar26;
            *unaff_r8 = dVar37;
          }
          puVar9 = puVar21 + 3;
          if (cVar40 == '\0') {
            dVar26 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          }
          else {
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          }
          uVar2 = SUB84(dVar26,0);
          pdVar41 = (double *)(unsigned)((uint)puVar21[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          if (cVar40 == '\0') {
            *(uint *)(unsigned)(pdVar41 + 4) = uVar2;
            *(undefined4 *)(unsigned)((int)pdVar41 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
            *(undefined4 *)(unsigned)(pdVar41 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            *(uint *)(unsigned)((int)pdVar41 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          }
          else {
            pdVar41[4] = in_xd2;
            *(ulonglong *)(unsigned)((int)pdVar41 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            pdVar41[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
            *(double *)(unsigned)((int)pdVar41 + 0x2c) = in_xd2;
          }
          *(undefined4 *)(unsigned)pdVar41 = 0xe0000000;
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D(*(undefined4 *)(unsigned)pdVar41,SUB84(dVar37,0));
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar41 + 4),uVar2);
            pdVar41 = pdVar41 + 1;
          }
          else {
            dVar37 = *pdVar41;
            dVar26 = pdVar41[1];
            pdVar41 = pdVar41 + 2;
          }
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar41 + 2);
            dVar31 = CONCAT44D(uVar30,SUB84(dVar31,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar41 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar30;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar26) >> 0x20);
            pdVar41 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar41 = (int)(D2U(dVar37) >> 0x20);
          }
          else {
            dVar31 = pdVar41[2];
            unaff_r8[7] = pdVar41[3];
            unaff_r8[6] = dVar31;
            unaff_r8[5] = dVar26;
            pdVar41 = unaff_r8 + 4;
            *pdVar41 = dVar37;
          }
          uVar30 = SUB84(dVar31,0);
          pdVar41 = pdVar41 + 4;
          iVar14 = 2;
          if (2 < (int)(uVar19 - 1)) {
            do {
              uVar1 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
              if (cVar40 != '\0') {
                in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
                uVar2 = SUB84(dVar26,0);
              }
              pdVar6 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              if (cVar40 == '\0') {
                *(uint *)(unsigned)(pdVar6 + 4) = uVar2;
                *(undefined4 *)(unsigned)((int)pdVar6 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
                *(undefined4 *)(unsigned)(pdVar6 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
                uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
                *(uint *)(unsigned)((int)pdVar6 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
              }
              else {
                pdVar6[4] = in_xd2;
                *(ulonglong *)(unsigned)((int)pdVar6 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
                pdVar6[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
                in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
                *(double *)(unsigned)((int)pdVar6 + 0x2c) = in_xd2;
              }
              *(undefined4 *)(unsigned)pdVar6 = 0xe0000000;
              if (cVar40 == '\0') {
                dVar37 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar37,0));
                dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),uVar2);
                pdVar6 = pdVar6 + 1;
              }
              else {
                dVar37 = *pdVar6;
                dVar26 = pdVar6[1];
                pdVar6 = pdVar6 + 2;
              }
              if (cVar40 == '\0') {
                uVar30 = *(undefined4 *)(unsigned)(pdVar6 + 2);
                dVar31 = CONCAT44D(uVar30,SUB84(dVar31,0));
                *(undefined4 *)(unsigned)((int)pdVar41 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
                *(undefined4 *)(unsigned)(pdVar41 + 3) = uVar30;
                *(int *)(unsigned)((int)pdVar41 + 0x14) = (int)(D2U(dVar26) >> 0x20);
                pdVar41 = pdVar41 + 2;
                *(int *)(unsigned)pdVar41 = (int)(D2U(dVar37) >> 0x20);
              }
              else {
                dVar31 = pdVar6[2];
                pdVar41[3] = pdVar6[3];
                pdVar41[2] = dVar31;
                pdVar41[1] = dVar26;
                *pdVar41 = dVar37;
              }
              uVar30 = SUB84(dVar31,0);
              pdVar41 = pdVar41 + 4;
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)(uVar19 - 1));
          }
          puVar21 = puVar9 + 1;
          uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          if (cVar40 != '\0') {
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
            uVar2 = SUB84(dVar26,0);
          }
          pdVar6 = (double *)(unsigned)((uint)*puVar9 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          if (cVar40 == '\0') {
            *(uint *)(unsigned)(pdVar6 + 4) = uVar2;
            *(undefined4 *)(unsigned)((int)pdVar6 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624);
            *(undefined4 *)(unsigned)(pdVar6 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
            *(uint *)(unsigned)((int)pdVar6 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c);
          }
          else {
            pdVar6[4] = in_xd2;
            *(ulonglong *)(unsigned)((int)pdVar6 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            pdVar6[5] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2628));
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),(*(undefined4 *)(unsigned)(unsigned)0x8c4c262c));
            *(double *)(unsigned)((int)pdVar6 + 0x2c) = in_xd2;
          }
          *(undefined4 *)(unsigned)pdVar6 = 0xf0000000;
          if (cVar40 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar37,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),uVar2);
            pdVar6 = pdVar6 + 1;
          }
          else {
            in_dr0 = *pdVar6;
            in_dr2 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar40 == '\0') {
            uVar34 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            in_dr4 = CONCAT44D(uVar34,uVar30);
            *(undefined4 *)(unsigned)((int)pdVar41 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(pdVar41 + 3) = uVar34;
            *(int *)(unsigned)((int)pdVar41 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar41 = pdVar41 + 2;
            *(int *)(unsigned)pdVar41 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            pdVar41[3] = pdVar6[3];
            pdVar41[2] = in_dr4;
            pdVar41[1] = in_dr2;
            *pdVar41 = in_dr0;
          }
          unaff_r8 = pdVar41 + 4;
        }
        else {
          iVar3 = (uint)*puVar22 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar7 = (uint)puVar21[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          iVar5 = (uint)puVar21[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar40 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(iVar7 + 0x18);
            dVar37 = CONCAT44D(uVar30,SUB84(in_dr0,0));
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(iVar7 + 0x14),*(undefined4 *)(unsigned)(iVar3 + 0x18));
            dVar26 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)(iVar3 + 0x14));
          }
          else {
            dVar37 = *(double *)(unsigned)(iVar7 + 0x18);
            uVar30 = (undefined4)(D2U(dVar37) >> 0x20);
            dVar31 = *(double *)(unsigned)(iVar7 + 0x14);
            dVar26 = dVar37;
          }
          fVar25 = F32LO(dVar26);
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) * fVar25,SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 * dVar26;
          }
          uVar34 = (undefined4)(D2U(dVar31) >> 0x20);
          dVar35 = dVar31;
          if (cVar40 == '\0') {
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar34);
            dVar35 = in_xd2;
          }
          if (cVar39 == '\0') {
            fVar24 = F32LO(in_dr2) * F32LO(dVar31);
          }
          else {
            fVar24 = SUB84(in_dr2 * dVar31,0);
          }
          if (cVar40 == '\0') {
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)(iVar7 + 0x10),*(undefined4 *)(unsigned)(iVar3 + 0x10));
            dVar27 = CONCAT44D(uVar30,fVar24);
          }
          else {
            dVar33 = *(double *)(unsigned)(iVar7 + 0x10);
            dVar27 = dVar26;
          }
          if (cVar39 == '\0') {
            dVar27 = CONCAT44D(F32HI(dVar27) * F32LO(dVar33),
                                      SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 * dVar33;
          }
          dVar32 = dVar31;
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),uVar34);
            dVar32 = in_xd0;
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) - F32LO(dVar27),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 - dVar27;
          }
          uVar30 = (undefined4)(D2U(dVar33) >> 0x20);
          in_xd2 = dVar33;
          if (cVar40 == '\0') {
            dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),uVar30);
            in_xd2 = dVar35;
          }
          if (cVar39 == '\0') {
            dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),
                                      F32LO(dVar27) * F32LO(dVar31));
          }
          else {
            dVar27 = dVar27 * dVar31;
          }
          dVar31 = dVar33;
          if (cVar40 == '\0') {
            dVar31 = CONCAT44D(uVar30,SUB84(in_dr12,0));
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),
                                      F32LO(dVar37) * F32LO(dVar33));
            in_dr12 = CONCAT44D(F32HI(dVar31) * fVar25,SUB84(dVar31,0));
            fVar24 = F32LO(dVar27) - F32HI(dVar27);
          }
          else {
            dVar37 = dVar37 * dVar33;
            in_dr12 = dVar31 * dVar26;
            fVar24 = SUB84(dVar27 - dVar27,0);
          }
          if (cVar40 == '\0') {
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(iVar5 + 0x14),fVar24);
          }
          else {
            dVar26 = *(double *)(unsigned)(iVar5 + 0x14);
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),
                                      F32LO(dVar37) - F32HI(in_dr12));
            in_dr4 = CONCAT44D(F32HI(dVar26) * F32LO(dVar26),
                                      SUB84(dVar26,0));
          }
          else {
            dVar37 = dVar37 - in_dr12;
            in_dr4 = dVar26 * dVar26;
          }
          if (cVar40 == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar5 + 0x10)
                                     );
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar5 + 0x10);
          }
          if (cVar39 == '\0') {
            in_dr4 = CONCAT44D(F32HI(dVar37) * F32LO(in_dr4) +
                                      F32HI(in_dr4),SUB84(in_dr4,0));
          }
          if (cVar40 == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar5 + 0x18)
                                     );
            in_dr0 = CONCAT44D(SUB84(dVar37,0),SUB84(dVar37,0));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar5 + 0x18);
            in_dr0 = dVar32;
          }
          if (cVar39 == '\0') {
            in_dr4 = CONCAT44D(F32HI(in_dr0) * F32LO(in_dr4) +
                                      F32HI(in_dr4),SUB84(in_dr4,0));
          }
          uVar2 = (uint)((ulonglong)in_dr4 >> 0x20);
          if (cVar40 == '\0') {
            in_dr4 = CONCAT44D(uVar2,fVar25);
          }
          in_dr2 = (double)((ulonglong)uVar2 << 0x20);
          if (cVar39 == '\0') {
            bVar38 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar38 = in_dr2 < in_dr4;
          }
          (*(undefined4 *)(fr0_ - 0x50)) = 0;
          if (bVar38) {
            if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) goto LAB_8c24d3b8;
            (*(undefined4 *)(fr0_ - 0x50)) = 0x8000;
          }
          puVar8 = ((undefined1 *)(fr0_ - 0x40));
          iVar5 = iVar5 + 0x10;
          iVar7 = iVar7 + 0x10;
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2361a8(iVar3 + 0x10,iVar7,iVar5,puVar8));
          ({ unsigned long ri0_ = (unsigned long)(iVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 108)); FUN_8c25ce48(((undefined1 *)(fr0_ - 0x40)),iVar7,iVar5,puVar8); });
          iVar3 = (uint)puVar22[iVar14 + -1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(iVar3 + 0x10);
            (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(iVar3 + 0x14);
            (*(float *)(fr0_ - 0x2c)) = *(float *)(unsigned)(iVar3 + 0x18);
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)*(undefined8 *)(unsigned)(iVar3 + 0x10);
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)*(undefined8 *)(unsigned)(iVar3 + 0x14);
            in_xd2 = *(double *)(unsigned)(iVar3 + 0x18);
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x28)) = F32HI(in_xd2);
          }
          iVar14 = (uint)puVar22[iVar14] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),*(undefined4 *)(unsigned)(iVar14 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar14 + 0x10);
            dVar37 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          uVar30 = (undefined4)(D2U(dVar37) >> 0x20);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(iVar14 + 0x14));
            (*(undefined4 *)(fr0_ - 0x34)) = uVar30;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar37,0);
            in_xd2 = *(double *)(unsigned)(iVar14 + 0x14);
            dVar37 = CONCAT44D((*(float *)(fr0_ - 0x2c)),uVar30);
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          uVar30 = (undefined4)(D2U(dVar37) >> 0x20);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(float *)(fr0_ - 0x2c)),*(undefined4 *)(unsigned)(iVar14 + 0x18));
            (*(undefined4 *)(fr0_ - 0x30)) = uVar30;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar37,0);
            in_xd2 = *(double *)(unsigned)(iVar14 + 0x18);
            dVar37 = CONCAT44D((*(float *)(fr0_ - 0x28)),uVar30);
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          fVar25 = F32HI(dVar37);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D(fVar25,(*(undefined4 *)(fr0_ - 0x34)));
            (*(float *)(fr0_ - 0x2c)) = fVar25;
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar37,0);
            in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
            (*(float *)(fr0_ - 0x28)) = fVar25;
          }
          fVar25 = F32LO(dVar36);
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),F32LO(dVar37) * fVar25);
          }
          else {
            dVar37 = dVar37 * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar37,0);
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),(*(undefined4 *)(fr0_ - 0x30)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x34)) = SUB84(in_xd2,0);
            (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),F32LO(dVar37) * fVar25);
          }
          else {
            dVar37 = dVar37 * dVar36;
          }
          if (cVar40 == '\0') {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar37,0);
            dVar37 = CONCAT44D((int)(D2U(dVar37) >> 0x20),(*(float *)(fr0_ - 0x2c)));
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x2c)) = F32HI(in_xd2);
            in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
          }
          if (cVar39 == '\0') {
            (*(float *)(fr0_ - 0x2c)) = F32LO(dVar37) * fVar25;
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar37 * dVar36,0);
          }
          puVar8 = ((undefined1 *)(unsigned)0x8c4c2620);
          puVar12 = ((undefined1 *)(fr0_ - 0x40));
          if (cVar40 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_xd2,0);
            (*(float *)(fr0_ - 0x28)) = F32HI(in_xd2);
          }
          puVar10 = &(*(undefined4 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x50))));
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x50))));
          if (cVar40 == '\0') {
            in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          else {
            in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
          }
          (vsp = ((unsigned long)(fr0_ - 108)), float_to_color_u8(puVar8,puVar10,puVar12,(*(undefined4 *)(fr0_ - 0x50))));
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          }
          else {
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2624));
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          uVar30 = (undefined4)(D2U(dVar37) >> 0x20);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2628),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = uVar30;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2624) = SUB84(dVar37,0);
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),uVar30);
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
          }
          if (cVar39 == '\0') {
            dVar37 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            dVar37 = dVar37 + dVar37;
          }
          uVar30 = (undefined4)(D2U(dVar37) >> 0x20);
          if (cVar40 == '\0') {
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c262c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = uVar30;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628) = SUB84(dVar37,0);
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2640),(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c));
            dVar37 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2630),uVar30);
          }
          if (cVar39 == '\0') {
            in_dr2 = CONCAT44D(F32HI(dVar37) + F32LO(dVar37),
                                      SUB84(dVar37,0));
          }
          else {
            in_dr2 = dVar37 + dVar37;
          }
          uVar2 = (uint)((ulonglong)in_dr2 >> 0x20);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = uVar2;
          if (cVar40 != '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c262c) = SUB84(in_dr2,0);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630) = uVar2;
          }
          puVar9 = puVar21 + 2;
          puVar21 = puVar21 + 3;
          iVar14 = 0;
          ar4_00 = (uint *)(unsigned)((uint)*puVar22 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          ar5_00 = (uint *)(unsigned)((uint)*puVar9 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          if (0 < (int)(uVar19 - 2)) {
            do {
              uVar1 = *puVar21;
              puVar21 = puVar21 + 1;
              ar6_00 = (uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c24763c(ar4_00,ar5_00,ar6_00,((undefined1 *)(unsigned)0x8c4c2620)));
              }
              iVar14 = iVar14 + 1;
              ar4_00 = ar5_00;
              ar5_00 = ar6_00;
            } while (iVar14 < (int)(uVar19 - 2));
          }
        }
      }
      else {
LAB_8c24d3b8:
        puVar21 = puVar22 + uVar19;
      }
      (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x68)) + 1;
      in_xd0 = dVar32;
    }
  }
  else if (uVar2 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab318) & 1) == 0) {
      pcVar4 = ((void *)0x8c2446d8);
    }
    else {
      pcVar4 = ((void *)0x8c244262);
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 108)), (*(code *)xlat((unsigned long)pcVar4))(ar4,uVar1 & 0x3fff,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c24c6f0\n.set _FUN_8c24c6f0, _FUN_8c24c6f0_def\n");
