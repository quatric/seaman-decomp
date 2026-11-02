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
undefined4 Class_12b930_m1_0de1dc_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "Class_12b930_m1_0de1dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined1 *ar6_00;
  int iVar3;
  float fVar4;
  double in_dr0 = 0;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),iVar2,ar6_00,ar7));
  if (*(int *)(unsigned)(ar4 + 0xacc) == 2) {
    ar7 = ((undefined1 *)(fr0_ - 0x18));
    ar6_00 = ((undefined1 *)(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0db5a8(ar4 + 0x9e8,((undefined1 *)(fr0_ - 0x20)),ar6_00,ar7));
    iVar2 = ar4 + 0xa98;
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_assign(((undefined1 *)(fr0_ - 0x30)),iVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xac8) + 8) + 0x130))))
              (*(int *)(unsigned)(ar4 + 0xac8),iVar2,ar6_00,ar7));
    uVar1 = (*(undefined8 *)(fr0_ - 0x28));
    if (cVar6 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(int)(*(undefined8 *)(fr0_ - 0x28)));
      uVar1 = in_xd0;
    }
    if (cVar5 == '\0') {
      fVar4 = F32LO(in_dr0) - F32HI(in_dr0);
    }
    else {
      fVar4 = SUB84(in_dr0 - in_dr0,0);
    }
    if (cVar6 == '\0') {
      (*(undefined8 *)(fr0_ - 0x28)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x28))+4)),fVar4);
      uVar1 = (*(undefined8 *)(fr0_ - 0x28));
    }
    (*(undefined8 *)(fr0_ - 0x28)) = uVar1;
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      ar7 = ((undefined1 *)(fr0_ - 0x20));
      ar6_00 = ((undefined1 *)(fr0_ - 0x30));
      iVar2 = ar4 + 0xa68;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d7294(ar4 + iVar3 * 0x16c + 0x22d48,iVar2,ar6_00,ar7));
    }
  }
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d7100(ar4 + iVar3 * 0x16c + 0x22d48,iVar2,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0e389c(ar4,iVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d0178(ar4 + 0x13b24,iVar2,ar6_00,ar7));
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d9600(ar4 + 0x22704,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), get_field_a0_035724(ar5,iVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), Class_12bb08_m1_0da338(ar4,ar5,ar6,ar7));
  iVar2 = ar4 + 0x10ac;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0e3994(ar4,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d64a0(ar4 + 0xa68,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0dbd80(ar4,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d0714(ar4 + 0x13b24,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12b930_m1_0de1dc\n.set _Class_12b930_m1_0de1dc, _Class_12b930_m1_0de1dc_def\n");
