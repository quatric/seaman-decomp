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
undefined4 FUN_8c0cc524_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cc524";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  int ar5_01;
  undefined4 in_fr1 = 0;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  (*(undefined4 *)(fr0_ - 0x94)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ce90);
  (*(undefined4 *)(fr0_ - 0x90)) = (*(undefined1 *)(unsigned)0x8c13ce94);
  (*(undefined4 *)(fr0_ - 0x8c)) = (*(undefined1 *)(unsigned)0x8c13ce98);
  iVar6 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar5 + 8) + 0x144))))(ar5,ar5,ar6,ar7));
  ar5_01 = iVar1 + 0xb0;
  if (cVar8 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x2d3b4),in_fr1);
  }
  else {
    ((undefined4 *)(fr0_ - 0xa0))[0] = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x2d3b0) >> 0x20);
    uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x2d3b4);
  }
  if ((*(undefined1 *)(unsigned)0x8c43735c) == '\0') {
    if (cVar8 == '\0') {
      uVar4 = CONCAT44(0x3e99999a,(int)uVar4);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437358) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c43735c),0x3e99999a);
    }
    else {
      uVar4 = 0x8c4373643e99999a;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437358) = 0x8c4373643e99999a;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437358) = CONCAT14(1,(*(undefined4 *)(unsigned)(unsigned)0x8c437358));
  }
  if ((*(undefined1 *)(unsigned)0x8c437364) == '\0') {
    if (cVar8 == '\0') {
      uVar4 = CONCAT44(0x3d4ccccd,(int)uVar4);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437360) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437364),0x3d4ccccd);
    }
    else {
      uVar4 = 0x8c2363e83d4ccccd;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437360) = 0x8c2363e83d4ccccd;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437360) = CONCAT14(1,(*(undefined4 *)(unsigned)(unsigned)0x8c437360));
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c2363e8(((undefined1 *)(fr0_ - 0x88)),iVar6,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar5 + 8) + 0x120))))(ar5,iVar6,ar6,ar7));
  (*(undefined8 *)(fr0_ - 0xb0)) = uVar4;
  if (cVar8 == '\0') {
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    (*(undefined8 *)(fr0_ - 0xb0)) = CONCAT44(iVar1,uVar2);
    (*(undefined8 *)(fr0_ - 0x40)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x40))+4)),uVar2);
    uVar4 = (*(undefined8 *)(fr0_ - 0x40));
  }
  (*(undefined8 *)(fr0_ - 0x40)) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c2572ec(((undefined1 *)(fr0_ - 0x88)),iVar6,ar6,ar7));
  ar6_00 = ((undefined4 *)(fr0_ - 0xa0));
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x94));
  uVar2 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c21279c(0,ar5_00,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c219038(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c21907e(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c219070(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c01538c(0x8c43691c,ar5_00,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c256328(0,ar5_00,ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c25b5d0(0,ar5_00,ar6_00,ar7); });
  uVar2 = 0;
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x2d3b4));
  }
  else {
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar5 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(F32LO(dVar5) / F32HI(dVar5));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x2d3b0));
  }
  else {
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar5 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar1 = (int)(F32LO(dVar5) / F32HI(dVar5));
  }
  else {
    iVar1 = (int)(dVar5 / dVar5);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c256b0c(0,iVar1,iVar6,0); });
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c015b54(0x8c43690c,ar5_01,iVar6,uVar2));
  ar4_00 = 1;
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c256210(1,ar5_01,iVar6,uVar2));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c219070(ar4_00,ar5_01,iVar6,uVar2));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0f4b44(ar5,ar5_01,iVar6,uVar2));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c256328(0,ar5_01,iVar6,uVar2); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c25b5d0(0,ar5_01,iVar6,uVar2); });
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c078fb8(ar5,ar5_01,iVar6,uVar2));
  (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar5 + 8) + 0x38))))(ar5,ar5_01,iVar6,uVar2));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c256210(1,ar5_01,iVar6,uVar2));
  return uVar2;
}

__asm__(".globl _FUN_8c0cc524\n.set _FUN_8c0cc524, _FUN_8c0cc524_def\n");
