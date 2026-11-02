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
undefined4 FUN_8c02aba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02aba0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int a7;
  undefined8 in_dr0 = 0;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  a7 = ar4 + 0x5c;
  iVar3 = ar4 + 0x50;
  iVar1 = ar4 + 0x30;
  (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)),iVar1,iVar3,a7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c02ace4(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar1,iVar3,a7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c027224(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar1,iVar3,a7); });
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x40000000,(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar4 = -7.957972504406915e-251;
  }
  if (cVar5 == '\0') {
    (*(float *)(fr0_ - 0x4c)) = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    (*(float *)(fr0_ - 0x4c)) = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x4c)) = (float)in_dr0;
    ((undefined4 *)(fr0_ - 0x48))[0] = (undefined4)((ulonglong)in_dr0 >> 0x20);
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x28)),&(*(float *)(fr0_ - 0x4c)),iVar3,a7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); Vec3_add(ar4 + 0x30,((undefined1 *)(fr0_ - 0x38)),iVar3,a7); });
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x18)),((undefined4 *)(fr0_ - 0x48)),iVar3,a7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined4 *)(fr0_ - 0x48)),0xffffffff,iVar3,a7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,iVar3,a7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,iVar3,a7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c027224(*(undefined4 *)(unsigned)(ar4 + 0x30c),uVar2,iVar3,a7); });
  (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x28))))((int *)(unsigned)(ar4 + 0xa8),ar4 + 0x30,iVar3,a7));
  iVar3 = ar4 + 0x5c;
  iVar1 = ar4 + 0x50;
  (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x10))))((int *)(unsigned)(ar4 + 0xa8),((undefined1 *)(fr0_ - 0x18)),iVar1,iVar3));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,iVar1,iVar3));
  return uVar2;
}

__asm__(".globl _FUN_8c02aba0\n.set _FUN_8c02aba0, _FUN_8c02aba0_def\n");
