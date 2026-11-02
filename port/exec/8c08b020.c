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
undefined4 FUN_8c08b020_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08b020";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int ar7_00;
  int ar5_00;
  char cVar11;
  char cVar12;
  undefined2 uVar13;
  
  uVar13 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x80)) >> 0x10);
  cVar12 = '\0';
  cVar11 = '\0';
  iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_124_027930(ar4 + 0x538,ar5,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  sVar1 = (short)uVar3;
  uVar3 = CONCAT22(uVar13,sVar1);
  iVar7 = *(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124;
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    ar7_00 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    ar7_00 = (int)(dVar9 / dVar9);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    (*(int *)(fr0_ - 0x34)) = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    (*(int *)(fr0_ - 0x34)) = (int)(dVar9 / dVar9);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar10 = F32HI(dVar9);
    fVar8 = F32LO(dVar9) / fVar10;
    dVar9 = CONCAT44D(fVar10,fVar8);
    ar5_00 = (int)fVar8;
  }
  else {
    dVar9 = dVar9 / dVar9;
    ar5_00 = (int)dVar9;
  }
  (*(int *)(fr0_ - 0x4c)) = (int)(D2U(dVar9) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256b0c(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256fec(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
  if (sVar1 == 3) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c015bb8(iVar7 + 0x70,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 128)), deref_u32(*(int *)(unsigned)(iVar7 + 0xa0) + iVar5 * 4,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar7 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d74(*(int *)(unsigned)(iVar7 + 0xa8) + iVar6 * 4,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x4c));
    if (cVar12 == '\0') {
      (*(int *)(fr0_ - 0x34)) = iVar7;
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c21bbb0(uVar4,iVar5,(*(int *)(fr0_ - 0x34)),ar7_00); });
    ar5_00 = iVar5;
  }
  else if (*(int *)(unsigned)(ar4 + 0x6c) < 0x32) {
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c219a9a(*(undefined4 *)(unsigned)(ar4 + 0x848),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
  }
  else {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c015bb8(iVar7 + 0x70,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 128)), deref_u32(*(int *)(unsigned)(iVar7 + 0xa0) + iVar5 * 4,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar7 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d74(*(int *)(unsigned)(iVar7 + 0xa8) + iVar6 * 4,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    if (cVar12 == '\0') {
      (*(int *)(fr0_ - 0x4c)) = iVar7;
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c21bbb0(uVar4,iVar5,(*(int *)(fr0_ - 0x4c)),ar7_00); });
    ar5_00 = iVar5;
    (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x4c));
  }
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c256210(1,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
  if (sVar1 == 2) {
    if (iVar2 == 3) {
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c139e5c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c08a6e8(ar4 + 0x538,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x844),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256328(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c25b5d0(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      ar7_00 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar2 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      iVar2 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar7 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      iVar7 = (int)(dVar9 / dVar9);
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256b0c(0,iVar7,iVar2,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256fec(0,iVar7,iVar2,ar7_00); });
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 128)), deref_u32(ar4 + 0x850,iVar7,iVar2,ar7_00));
    (*(int *)(fr0_ - 0x34)) = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d74(ar4 + 0x854,iVar7,iVar2,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c21bbb0(*(undefined4 *)(unsigned)(ar4 + 0x840),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c256210(1,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
  }
  else if ((sVar1 == 3) && (*(int *)(unsigned)(ar4 + 0x8fc) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c08a6e8(ar4 + 0x538,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x844),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256328(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c25b5d0(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x918));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      ar7_00 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x914));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      iVar2 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      iVar2 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x910));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      iVar7 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      iVar7 = (int)(dVar9 / dVar9);
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256b0c(0,iVar7,iVar2,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256fec(0,iVar7,iVar2,ar7_00); });
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 128)), deref_u32(ar4 + 0x850,iVar7,iVar2,ar7_00));
    (*(int *)(fr0_ - 0x34)) = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d74(ar4 + 0x854,iVar7,iVar2,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c21bbb0(*(undefined4 *)(unsigned)(ar4 + 0x840),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c256210(1,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c139e5c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c08b020\n.set _FUN_8c08b020, _FUN_8c08b020_def\n");
