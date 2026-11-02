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
int FUN_8c0ad7ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ad7ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 ar6_00;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  int ar7_00;
  int iVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    ar7_00 = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    ar7_00 = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    (*(int *)(fr0_ - 0x3c)) = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    (*(int *)(fr0_ - 0x3c)) = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    fVar8 = F32HI(dVar7);
    fVar6 = F32LO(dVar7) / fVar8;
    dVar7 = CONCAT44D(fVar8,fVar6);
    iVar9 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    iVar9 = (int)dVar7;
  }
  iVar5 = (int)(D2U(dVar7) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256b0c(0,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256fec(0,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), get_field_124_027930(ar4 + 0x53c,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
  iVar3 = iVar9;
  if (iVar1 != 8) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 120)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + iVar3 * 4,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8) + iVar1 * 4,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    (*(int *)(fr0_ - 0x3c)) = iVar5;
    if (cVar11 == '\0') {
      (*(int *)(fr0_ - 0x3c)) = iVar1;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c21bbb0(uVar2,iVar3,(*(int *)(fr0_ - 0x3c)),ar7_00); });
  }
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c256210(1,iVar3,(*(int *)(fr0_ - 0x3c)),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c13b464),iVar3,(*(int *)(fr0_ - 0x3c)),ar7_00));
  if ((*(int *)(unsigned)(ar4 + 0x88c) != 0) && (*(int *)(unsigned)(ar4 + 0x890) != 0)) {
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256328(0,iVar3,(*(int *)(fr0_ - 0x3c)),ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25b5d0(0,iVar3,(*(int *)(fr0_ - 0x3c)),ar7_00); });
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x778));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
      ar7_00 = (int)(F32LO(dVar7) / F32HI(dVar7));
    }
    else {
      ar7_00 = (int)(dVar7 / dVar7);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x774));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
      (*(int *)(fr0_ - 0x3c)) = (int)(F32LO(dVar7) / F32HI(dVar7));
    }
    else {
      (*(int *)(fr0_ - 0x3c)) = (int)(dVar7 / dVar7);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x770));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
      fVar6 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
      iVar9 = (int)(F32LO(dVar7) / F32HI(dVar7));
    }
    else {
      iVar9 = (int)(dVar7 / dVar7);
    }
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256b0c(0,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x890),iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c219a9a(*(undefined4 *)(unsigned)(ar4 + 0x88c),iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c256210(1,iVar9,(*(int *)(fr0_ - 0x3c)),ar7_00));
  }
  iVar9 = *(int *)(unsigned)(ar4 + 0x170c);
  if (iVar9 == 1) {
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),ar4 + 0x30,(*(int *)(fr0_ - 0x3c)),ar7_00));
    ar6_00 = 0x1e;
    iVar9 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c0ae84c(ar4,((undefined1 *)(fr0_ - 0x20)),0x1e,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7_00));
    if (iVar9 == 1) {
      iVar9 = 0;
    }
    else {
      for (iVar5 = 0; iVar9 = 10, iVar5 < 10; iVar5 = iVar5 + 1) {
        if (cVar11 == '\0') {
          fVar6 = *(float *)(unsigned)(iVar5 * 0x4c + -0x73d7a684);
          fVar8 = 1500.0;
        }
        else {
          fVar6 = 1500.0;
          fVar8 = 1499.0;
        }
        if (cVar10 == '\0' && fVar8 < fVar6) {
          puVar4 = (undefined8 *)(unsigned)(iVar5 * 0x4c + -0x73d7a684);
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)puVar4 = 0x44bb6000;
          }
          else {
            *puVar4 = 0x9bc44bb6000;
          }
        }
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256328(0,uVar2,ar6_00,ar7_00); });
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25b5d0(0,uVar2,ar6_00,ar7_00); });
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256fec(0,uVar2,ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c01538c(ar4 + 0x9bc,uVar2,ar6_00,ar7_00));
        uVar2 = *(undefined4 *)(unsigned)(iVar5 * 0x4c + -0x73d7a644);
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c014a94(ar4 + 0x9bc,uVar2,ar6_00,ar7_00));
        (*(int *)(fr0_ - 0x74)) = iVar5;
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c016524(iVar5 * 0x44 + ar4 + 0x9c4,uVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c256210(1,uVar2,ar6_00,ar7_00));
      }
    }
  }
  return iVar9;
}

__asm__(".globl _FUN_8c0ad7ec\n.set _FUN_8c0ad7ec, _FUN_8c0ad7ec_def\n");
