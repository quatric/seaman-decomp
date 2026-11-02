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
int s_HARDWARE_211130_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_HARDWARE_211130";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 172; for (int i_ = 0; i_ < 172; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 extraout_fr0 = 0;
  float fVar13;
  double in_dr2 = 0;
  double dVar14;
  undefined4 in_fr5 = 0;
  double dVar15;
  float fVar16;
  ulonglong in_dr14 = 0;
  undefined8 in_xd2 = 0;
  bool bVar17;
  char cVar18;
  char cVar19;
  
  cVar19 = '\0';
  cVar18 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  dVar14 = (double)(in_dr14 & 0xffffffff00000000);
  (*(uint *)(fr0_ - 0x88)) = 2;
  iVar4 = ar4;
  (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c2034c0(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c21214e(iVar4,ar5,ar6,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f4) = 0;
  (*(uint *)(fr0_ - 0x7c)) = (uint)((*(uint *)(unsigned)(ar4 + 4) & 1) != 0);
  (*(uint *)(fr0_ - 0x6c)) = (uint)((*(uint *)(unsigned)(ar4 + 4) & 0x20) == 0);
  (*(uint *)(fr0_ - 0x80)) = (uint)((*(uint *)(unsigned)(ar4 + 4) & 2) != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fdc) = (uint)((*(uint *)(unsigned)(ar4 + 4) & 0x100000) == 0);
  uVar11 = *(undefined4 *)(unsigned)(ar4 + 0x14);
  (vsp = ((unsigned long)(fr0_ - 172)), sh4_dmac_202c60(0xff,(*(uint *)(fr0_ - 0x80)),uVar11,ar7));
  if ((*(uint *)(unsigned)(ar4 + 4) & 0x10000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2758ec) = 0;
    bVar17 = (*(uint *)(unsigned)(ar4 + 4) & 0x10) != 0;
    if (bVar17) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fdc) = 1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) = (uint)bVar17;
    (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c211040((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0),*(undefined4 *)(unsigned)(ar4 + 0x5c),uVar11,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fec) = *(uint *)(unsigned)(ar4 + 0x24);
    uVar1 = *(uint *)(unsigned)(ar4 + 0x28);
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9fec) & 0x1f) != 0) {
      uVar1 = uVar1 - (0x20 - ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9fec) & 0x1f));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fec) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fec) + 0x1f & 0xffffffe0;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0) {
      uVar1 = uVar1 >> 1;
    }
    for (puVar6 = ((uint *)(fr0_ - 0x4c)); puVar6 < ((undefined8 *)(fr0_ - 0x38)); puVar6 = puVar6 + 1) {
      *puVar6 = 0;
    }
    puVar7 = (undefined8 *)(unsigned)(ar4 + 0x2c);
    while (fVar13 = F32LO(dVar14), puVar7 < (undefined8 *)(unsigned)(ar4 + 0x40U)) {
      if (cVar19 == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)puVar7);
        puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 4);
      }
      else {
        in_xd2 = *puVar7;
        puVar7 = puVar7 + 1;
      }
      if (cVar18 == '\0') {
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),fVar13 + F32LO(in_dr2));
      }
      else {
        dVar14 = dVar14 + in_dr2;
      }
    }
    if (cVar19 == '\0') {
      dVar15 = CONCAT44D(0x42c80000,in_fr5);
    }
    else {
      dVar15 = 9.046259222189e+74;
    }
    fVar16 = F32HI(dVar15);
    if (cVar18 == '\0') {
      bVar17 = fVar16 < fVar13;
    }
    else {
      bVar17 = dVar15 < dVar14;
    }
    if (bVar17) {
      uVar2 = 0;
      while (uVar2 < 0x14) {
        puVar7 = (undefined8 *)(unsigned)(ar4 + 0x2c + uVar2);
        if (cVar19 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)puVar7);
        }
        else {
          in_xd2 = *puVar7;
        }
        if (cVar18 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),
                                    (F32LO(in_dr2) * fVar16) / fVar13);
        }
        else {
          in_dr2 = (in_dr2 * dVar15) / dVar14;
        }
        if (cVar19 == '\0') {
          *(int *)(unsigned)((int)((undefined8 *)(fr0_ - 0x38)) + uVar2) = SUB84(in_dr2,0);
          uVar2 = uVar2 + 4;
        }
        else {
          *(undefined8 *)(unsigned)((int)((undefined8 *)(fr0_ - 0x38)) + uVar2) = in_xd2;
          uVar2 = uVar2 + 4;
        }
      }
    }
    else {
      uVar2 = 0;
      while (uVar2 < 0x14) {
        puVar6 = (uint *)(unsigned)(ar4 + 0x2c + uVar2);
        if (cVar19 == '\0') {
          uVar3 = *puVar6;
          in_dr2 = (double)(ulonglong)uVar3;
          *(uint *)(unsigned)((int)((undefined8 *)(fr0_ - 0x38)) + uVar2) = uVar3;
          uVar2 = uVar2 + 4;
        }
        else {
          *(undefined8 *)(unsigned)((int)((undefined8 *)(fr0_ - 0x38)) + uVar2) = *(undefined8 *)(unsigned)puVar6;
          uVar2 = uVar2 + 4;
        }
      }
    }
    for (uVar2 = 0; uVar11 = SUB84(in_dr2,0), uVar2 < 0x14; uVar2 = uVar2 + 4) {
      if (cVar19 == '\0') {
        uVar11 = *(undefined4 *)(unsigned)((int)((undefined8 *)(fr0_ - 0x38)) + uVar2);
      }
      if (cVar18 == '\0') {
        dVar14 = CONCAT44D((float)(int)uVar1,uVar11);
      }
      else {
        dVar14 = (double)(int)uVar1;
      }
      if ((int)uVar1 < 0) {
        if (cVar18 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) + 4.2949673e+09,
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + CONCAT44D(extraout_fr0,0x4f800000);
        }
      }
      if (cVar18 == '\0') {
        fVar13 = (F32LO(dVar14) * F32HI(dVar14)) / fVar16;
      }
      else {
        fVar13 = SUB84((dVar14 * dVar14) / dVar15,0);
      }
      in_dr2 = CONCAT44D(0x4f000000,fVar13);
      if (cVar18 != '\0' || 2.1474836e+09 <= fVar13) {
        if (cVar18 == '\0') {
          in_dr2 = CONCAT44D(0x4f800000,fVar13 - 4.2949673e+09);
        }
        else {
          in_dr2 = (in_dr2 + in_dr2) - (in_dr2 + in_dr2);
        }
      }
      if (cVar18 == '\0') {
        uVar3 = (uint)SUB84(in_dr2,0);
      }
      else {
        uVar3 = (uint)in_dr2;
      }
      *(uint *)(unsigned)(uVar2 + (int)((uint *)(fr0_ - 0x4c))) = uVar3 & 0xfffffff8;
    }
    if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bb0) & 0x40) != 0) && (((uint *)(fr0_ - 0x4c))[0] < 0x38)) {
      ((uint *)(fr0_ - 0x4c))[0] = ((uint *)(fr0_ - 0x4c))[0] + 0x38;
    }
    uVar12 = 0xffffffff;
    uVar3 = 0;
    for (uVar2 = 0; uVar2 < 5; uVar2 = uVar2 + 1) {
      puVar6 = ((uint *)(fr0_ - 0x4c)) + uVar2;
      uVar5 = *puVar6;
      uVar3 = uVar3 + uVar5;
      if ((int)uVar12 < (int)uVar5) {
        uVar12 = *puVar6;
        (*(uint *)(fr0_ - 0x84)) = uVar2;
      }
    }
    if (uVar1 < uVar3) {
      puVar6 = ((uint *)(fr0_ - 0x4c)) + (*(uint *)(fr0_ - 0x84));
      *puVar6 = *puVar6 - (uVar3 - uVar1);
      *puVar6 = *puVar6 & 0xffffffe0;
    }
    if (((uint *)(fr0_ - 0x4c))[0] != 0) {
      ((uint *)(fr0_ - 0x4c))[0] = ((uint *)(fr0_ - 0x4c))[0] - 0x10;
    }
    puVar8 = ((uint *)(fr0_ - 0x4c)) + 1;
    puVar6 = puVar8;
    for (; puVar8 < ((undefined8 *)(fr0_ - 0x38)); puVar8 = puVar8 + 1) {
      if (*puVar8 != 0) {
        *puVar6 = *puVar6 - 0x10;
      }
      puVar6 = puVar6 + 1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1a0) = *(undefined4 *)(unsigned)(ar4 + 0x20);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1a4) = ((uint *)(fr0_ - 0x4c))[0];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1a8) = ((uint *)(fr0_ - 0x4c))[1];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1ac) = ((uint *)(fr0_ - 0x4c))[2];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1b0) = ((uint *)(fr0_ - 0x4c))[3];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1b4) = ((uint *)(fr0_ - 0x4c))[4];
    (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c211730(((uint *)(fr0_ - 0x4c))[0],((uint *)(fr0_ - 0x4c))[1],((uint *)(fr0_ - 0x4c))[2],((uint *)(fr0_ - 0x4c))[3]));
    *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x20) + 0x10) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014);
    for (puVar9 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4aa288); puVar9 < (undefined4 *)(unsigned)0x8c4aa29c;
        puVar9 = puVar9 + 1) {
      *puVar9 = 0;
    }
    uVar1 = ((uint *)(fr0_ - 0x4c))[1];
    uVar2 = ((uint *)(fr0_ - 0x4c))[2];
    uVar3 = ((uint *)(fr0_ - 0x4c))[3];
    (*(uint *)(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c211876(((uint *)(fr0_ - 0x4c))[0],((uint *)(fr0_ - 0x4c))[1],((uint *)(fr0_ - 0x4c))[2],((uint *)(fr0_ - 0x4c))[3]));
    (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c211ba4((*(uint *)(fr0_ - 0x8c)),uVar1,uVar2,uVar3));
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 1) {
      (*(uint *)(fr0_ - 0x88)) = 1;
    }
    (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c211c98(((uint *)(fr0_ - 0x4c))[0],((uint *)(fr0_ - 0x4c))[1],((uint *)(fr0_ - 0x4c))[2],((uint *)(fr0_ - 0x4c))[3]));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa254) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa22c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa258) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa230);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa25c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa234);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa260) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa238);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa264) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa23c);
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 4) {
      *(undefined4 *)(unsigned)(uVar1 + 0x8c4aa268) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa254) + uVar1);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa208) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa20c) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa210) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa214) = 0;
    puVar10 = ((undefined1 *)(unsigned)0x8c4aa22c);
    *(unsigned *)0x8c4aa218 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4aa22c));
    puVar9 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4aa224);
    *(unsigned *)0x8c4aa21c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4aa254));
    uVar1 = 0;
    if ((*(uint *)(fr0_ - 0x88)) != 0) {
      do {
        uVar1 = uVar1 + 1;
        *puVar9 = puVar10;
        puVar10 = puVar10 + 0x14;
        puVar9 = puVar9 + 1;
      } while (uVar1 < (*(uint *)(fr0_ - 0x88)));
    }
    (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c211a20((*(uint *)(fr0_ - 0x88)),puVar9,uVar1,((uint *)(fr0_ - 0x4c))[3]));
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 4) {
      *(int *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa21c) + uVar1) =
           *(int *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa21c) + uVar1) + *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa288) + uVar1) * 4;
    }
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fdc) = 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2758ec) = 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f10) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08);
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08) * 4) = 2;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f20) = 1;
    uVar1 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x20) + 0x10);
    uVar12 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x20) + 0x10) & 2;
    uVar2 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x20) + 0x10) & 4;
    uVar3 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x20) + 0x10) & 8;
    (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c211730((*(undefined4 *)(fr0_ - 0x68)),uVar12,uVar2,(*(undefined4 *)(fr0_ - 0x5c))));
    (*(uint *)(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c211876(uVar1 & 1,uVar12,uVar2,uVar3));
    (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c211ba4((*(uint *)(fr0_ - 0x8c)),uVar12,uVar2,uVar3));
    ((uint *)(fr0_ - 0x4c))[3] = uVar3;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1fc) = *(uint *)(unsigned)(ar4 + 0x1c);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa1fc) & 7) != 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1fc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1fc) + 7 & 0xfffffff8;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bc0) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1fc) * -4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa200) * -2 >> 1;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 172)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d6c8),((undefined1 *)(unsigned)0x8c26d6d4),0,((uint *)(fr0_ - 0x4c))[3]));
  if (iVar4 == 1) {
    if (0x400000 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8)) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8) = 0x400000;
    }
  }
  else if (0x200000 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8)) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8) = 0x200000;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8) < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa204)) {
    iVar4 = 3;
  }
  else {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c203820((*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8),((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x50)),((uint *)(fr0_ - 0x4c))[3]));
    if (iVar4 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa004) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f8);
      uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c24) >> 7;
      uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c20) >> 7;
      uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c1c) >> 7;
      ({ unsigned long t0_ = (unsigned long)(~(*(uint *)(fr0_ - 0x80)) & (*(uint *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 172)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 172)) - 8); FUN_8c25d7c6((*(undefined4 *)(unsigned)(unsigned)0x8c4a9c18) >> 7,uVar1,uVar2,uVar3); });
      if ((*(uint *)(unsigned)(ar4 + 4) & 0x10000) != 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) = 1;
      }
      *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x20)) = ((undefined1 *)(unsigned)0x8c4aa254);
      *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x20) + 4) = ((undefined4 *)(unsigned)0x8c2757a8);
      *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x20) + 8) = ((undefined1 *)(unsigned)0x8c4aa208);
      *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x20) + 0xc) = ((undefined1 *)(unsigned)0x8c4aa224);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1b8) = (*(uint *)(fr0_ - 0x80));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9be0) = (*(uint *)(fr0_ - 0x80));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1bc) = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1c0) = *(undefined4 *)(unsigned)(ar4 + 0x10);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1c4) = *(undefined4 *)(unsigned)(ar4 + 0x14);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1c8) = (*(uint *)(fr0_ - 0x7c));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1cc) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + 4);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1d0) = *(undefined4 *)(unsigned)(ar4 + 0x10);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1d4) = *(undefined4 *)(unsigned)(ar4 + 0x14);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1d8) = (*(uint *)(fr0_ - 0x7c));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1dc) = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1e0) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + 4);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1e4) = (*(uint *)(fr0_ - 0x6c));
      (*(undefined4 *)(unsigned)(unsigned)0x8c2758e8) = 0x80000000;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 172)), FUN_8c211f40((*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f4),uVar1,uVar2,uVar3));
    }
  }
  return iVar4;
}

__asm__(".globl _s_HARDWARE_211130\n.set _s_HARDWARE_211130, _s_HARDWARE_211130_def\n");
