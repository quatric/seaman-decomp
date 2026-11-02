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
undefined4 FUN_8c07f56c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07f56c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  double in_dr0 = 0;
  double dVar3;
  undefined4 in_fr3 = 0;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7));
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    return 0;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 76)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
  if (cVar6 == '\0') {
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    (*(undefined8 *)(fr0_ - 0x48)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x48))+4)),uVar2);
    in_dr0 = CONCAT44D(uVar2,in_fr3);
    dVar3 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    dVar3 = -7.956826985829187e-251;
    (*(undefined8 *)(fr0_ - 0x48)) = in_dr0;
  }
  if (cVar5 == '\0') {
    bVar4 = F32LO(dVar3) * F32HI(dVar3) < F32HI(in_dr0);
  }
  else {
    bVar4 = dVar3 * dVar3 < in_dr0;
  }
  if (!bVar4) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x24))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); Vec3_sub(ar5,ar6,ar6_00,ar7_00); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), Vec3_length(((undefined1 *)(fr0_ - 0x24)),ar6,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03263c(ar4,uVar2,ar6_00,ar7_00));
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x48)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x34)),ar5,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(ar4 + 0x54,(int)&(*(undefined8 *)(fr0_ - 0x48)) + 4,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x48)) + 4,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c032788(ar4,ar4 + 0x54,s0,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07f56c\n.set _FUN_8c07f56c, _FUN_8c07f56c_def\n");
