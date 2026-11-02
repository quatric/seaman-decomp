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
undefined4 FUN_8c082378_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c082378";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr4 = 0;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_normalize(ar5,uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x2b4);
  *(int *)(unsigned)(ar4 + 0x2b4) = iVar2 + 1;
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),(float)(iVar2 + 1));
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x38);
  }
  if (cVar6 == '\0') {
    fVar4 = F32LO(dVar5) / F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr4,fVar4);
  }
  else {
    dVar5 = CONCAT44D(iVar2,in_fr4);
  }
  if (cVar6 == '\0') {
    fVar4 = F32LO(dVar5) / F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  uVar1 = in_xd0;
  if (cVar7 == '\0') {
    (*(undefined8 *)(fr0_ - 0x4c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+4)),fVar4);
    uVar1 = (*(undefined8 *)(fr0_ - 0x4c));
  }
  (*(undefined8 *)(fr0_ - 0x4c)) = uVar1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x18)),&(*(undefined8 *)(fr0_ - 0x4c)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_normalize(ar4 + 0x14,uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c082378\n.set _FUN_8c082378, _FUN_8c082378_def\n");
