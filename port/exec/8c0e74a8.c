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
undefined4 * s_INCUBATOR_0e74ae_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_INCUBATOR_0e74ae";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  code *ar5_00;
  undefined4 uVar1;
  undefined1 *ar5_01;
  code *ar6_00;
  undefined1 *ar6_01;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_fr1 = 0;
  float fVar5;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d99e8(ar4,((undefined1 *)(unsigned)0x8c1400c3),3,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c12b3b8);
  uVar2 = 0x20;
  ar6_00 = ((void *)0x8c0d6f68);
  ar5_00 = ((void *)0x8c0d6f28);
  ({ unsigned long t0_ = (unsigned long)(0xc); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x29,((void *)0x8c0d6f28),((void *)0x8c0d6f68),0x20); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016690(ar4 + 0x89,ar5_00,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0191e4(ar4 + 0x8a,ar5_00,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01a0cc(ar4 + 0xaa,ar5_00,ar6_00,uVar2));
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c015c58(ar4 + 0x105,0,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016410(ar4 + 0x111,uVar1,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0153b8(ar4 + 0x122,uVar1,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0e89a0(ar4,uVar1,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c019384(ar4 + 0x8a,uVar1,ar6_00,uVar2));
  if (cVar8 != '\0') {
    in_fr1 = 0xc1200000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383c8) = 0xc1200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383c4) = 0xc1880000;
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383cc) = 0;
    uVar1 = in_fr1;
  }
  else {
    uVar1 = 0x41800000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383cc) = in_fr1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383d4) = 0x41800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383d0) = 0xc1880000;
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383d8) = 0;
    uVar2 = uVar1;
  }
  else {
    uVar2 = 0x41800000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383d8) = uVar1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383e0) = 0x41800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383dc) = 0x41880000;
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383e4) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383f0) = uVar2;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383f0) = 0xc1200000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383e4) = uVar2;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383ec) = 0xc1200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383e8) = 0x41880000;
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383f0) = 0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383f4) = 0xff0f0f0f;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383f8) = 0xff00008f;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383fc) = 0xff00008f;
  (*(undefined4 *)(unsigned)(unsigned)0x8c438400) = 0xff0f0f0f;
  uVar1 = 4;
  ar6_01 = ((undefined1 *)(unsigned)0x8c4383f4);
  ar5_01 = ((undefined1 *)(unsigned)0x8c4383c4);
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016464(ar4 + 0x111,((undefined1 *)(unsigned)0x8c4383c4),((undefined1 *)(unsigned)0x8c4383f4),4));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c014790(ar4 + 0x111,ar5_01,ar6_01,uVar1));
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0x42140000,(float)iVar4);
      }
      else {
        dVar6 = -3023657517696.0;
      }
      if (cVar7 == '\0') {
        fVar5 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0xc2860000,fVar5);
      }
      else {
        dVar6 = 3.66595689778914e-312;
      }
      if (cVar7 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar8 == '\0') {
        ar4[iVar3 * 0x20 + iVar4 * 8 + 0x2a] = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + iVar3 * 0x20 + iVar4 * 8 + 0x2a) = in_xd0;
      }
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0x41e00000,(float)iVar3);
      }
      else {
        dVar6 = 60129550576.0;
      }
      if (cVar7 == '\0') {
        fVar5 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0x422c0000,fVar5);
      }
      else {
        dVar6 = 3.74019760929537e-312;
      }
      if (cVar7 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar8 == '\0') {
        ar4[iVar3 * 0x20 + iVar4 * 8 + 0x2b] = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + iVar3 * 0x20 + iVar4 * 8 + 0x2b) = dVar6;
      }
      if (cVar8 == '\0') {
        ar4[iVar3 * 0x20 + iVar4 * 8 + 0x2c] = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + iVar3 * 0x20 + iVar4 * 8 + 0x2c) = D2U(dVar6) & 0xffffffff;
      }
    }
  }
  if (cVar8 == '\0') {
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x44048000;
    ar4[0x24] = 0x43cd0000;
    ar4[0x25] = 0x41600000;
    ar4[0x26] = 0x41200000;
    ar4[0x27] = 0x41900000;
    ar4[0x28] = 0x41500000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(unsigned)(ar4 + 0x21) = 0x8c42c80000;
    *(undefined8 *)(unsigned)(ar4 + 0x23) = 0x9044048000;
    *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x9443cd0000;
    *(undefined8 *)(unsigned)(ar4 + 0x25) = 0x9841600000;
    *(undefined8 *)(unsigned)(ar4 + 0x26) = 0x9c41200000;
    *(undefined8 *)(unsigned)(ar4 + 0x27) = 0xa041900000;
    *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x4f222fe641500000;
  }
  return ar4;
}

__asm__(".globl _s_INCUBATOR_0e74ae\n.set _s_INCUBATOR_0e74ae, _s_INCUBATOR_0e74ae_def\n");
