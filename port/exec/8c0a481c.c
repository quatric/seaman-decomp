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
undefined4 FUN_8c0a481c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a481c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ain0;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  int ar7_00;
  int ar6_00;
  int iVar6;
  char cVar7;
  char cVar8;
  int s12;
  
  cVar8 = '\0';
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    ar7_00 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    ar7_00 = (int)(dVar4 / dVar4);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    ar6_00 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    ar6_00 = (int)(dVar4 / dVar4);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    iVar6 = (int)(dVar4 / dVar4);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256b0c(0,iVar6,ar6_00,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)((fr0_ + (int)0xffffffe0)); *(unsigned *)((((unsigned long)(fr0_ - 84)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 84)) - 8); FUN_8c0a4a34(ar4 + 0x53c,iVar6,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 84)), vec3_copy_8c02b5fc((fr0_ + (int)0xffffffec),(fr0_ + (int)0xffffffe0),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete((fr0_ + (int)0xffffffe0),0xffffffff,ar6_00,ar7_00));
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0x10)));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    iVar6 = (int)(dVar4 / dVar4);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256ce0(0,iVar6,ar6_00,ar7_00); });
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0x14)));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    iVar6 = (int)(dVar4 / dVar4);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256a78(0,iVar6,ar6_00,ar7_00); });
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0xc)));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    fVar5 = F32HI(dVar4);
    fVar3 = F32LO(dVar4) / fVar5;
    dVar4 = CONCAT44D(fVar5,fVar3);
    iVar6 = (int)fVar3;
  }
  else {
    dVar4 = dVar4 / dVar4;
    iVar6 = (int)dVar4;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256d7c(0,iVar6,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c256fec(0,iVar6,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,iVar6,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,iVar6,ar6_00,ar7_00));
  ain0 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar6,ar6_00,ar7_00));
  s12 = ain0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + ain0 * 4,iVar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar6,ar6_00,ar7_00));
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(uVar2,(int)(D2U(dVar4) >> 0x20));
  }
  uVar2 = (undefined4)(D2U(dVar4) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c21ba62(uVar1,uVar2,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c256210(1,uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c13b07c),uVar2,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(ain0); unsigned long t1_ = (unsigned long)(SUB84(dVar4,0)); unsigned long t2_ = (unsigned long)((int)(D2U(dVar4) >> 0x20)); unsigned long t3_ = (unsigned long)(
               s12); unsigned long t4_ = (unsigned long)(uVar1); unsigned long t5_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); unsigned long t6_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); unsigned long t7_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); unsigned long t8_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 20) = (unsigned)t5_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 24) = (unsigned)t6_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 28) = (unsigned)t7_; *(unsigned *)((((unsigned long)(fr0_ - 84)) - 40) + 32) = (unsigned)t8_; vsp = (((unsigned long)(fr0_ - 84)) - 40); FUN_8c0a98cc(ar4 + 0x53c,uVar2,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete((fr0_ + (int)0xffffffec),0xffffffff,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0a481c\n.set _FUN_8c0a481c, _FUN_8c0a481c_def\n");
