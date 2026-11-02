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
undefined4 Class_12b930_m3_0de4b0_def(int ar4,int ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "Class_12b930_m3_0de4b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = ar5;
  uVar3 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x2c)),iVar4,uVar3,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0da588(ar4 + 0xa4,iVar4,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e389c(ar4,iVar4,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d0178(ar4 + 0x13b24,iVar4,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d0d1c(ar4 + 0x13b8c,iVar4,uVar3,ar7));
  iVar4 = ar5;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d9600(ar4 + 0x22704,ar5,uVar3,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c0de6c0(ar4 + 0x13b24,iVar4,uVar3,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c0de6b0(ar4 + 0x13b70,iVar4,uVar3,ar7); });
  iVar6 = a4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437550) = iVar1;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar4 = ar5;
    uVar3 = ar6;
    ar7 = ar4;
    (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar6 + 8) + 0x10))))(iVar6,ar5,ar6,ar4));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), list_node_next(iVar6,iVar4,uVar3,ar7));
  }
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar4 = ar4;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0f4258(iVar6,ar4,uVar3,ar7));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), list_node_next(iVar6,iVar4,uVar3,ar7));
  }
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0da4f8(iVar6,iVar4,uVar3,ar7));
    if (iVar2 == 1) {
      iVar4 = ar4;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0f4974(iVar6,ar4,uVar3,ar7));
    }
    iVar6 = (vsp = ((unsigned long)(fr0_ - 76)), list_node_next(iVar6,iVar4,uVar3,ar7));
  }
  for (iVar6 = 0; iVar6 < iVar1; iVar6 = iVar6 + 1) {
    iVar4 = ar4;
    (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x28))))(a4,ar4,uVar3,ar7));
    a4 = (vsp = ((unsigned long)(fr0_ - 76)), list_node_next(a4,iVar4,uVar3,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0dbbe8(ar4,iVar4,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0e3994(ar4,ar4 + 0x10ac,uVar3,ar7));
  iVar4 = ar4 + 0x22eb4;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0d3d6c(ar4 + 0x10ac,iVar4,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0dbd80(ar4,iVar4,uVar3,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar3,ar7));
  return uVar3;
}

__asm__(".globl _Class_12b930_m3_0de4b0\n.set _Class_12b930_m3_0de4b0, _Class_12b930_m3_0de4b0_def\n");
