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
undefined4 FUN_8c0f5e0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5e0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0 = 0;
  double dVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0191c8((undefined1 *)(unsigned)((int)register0x0000003c + -0x48),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((undefined4)(*(undefined8 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c256328(0,ar5,ar6,ar7); });
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)((undefined4)(*(undefined8 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c013b3c(uVar1,ar5,ar6,ar7));
  if (cVar6 == '\0') {
    uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+0)) = uVar1;
    dVar3 = CONCAT44D(0x47800000,uVar1);
  }
  else {
    dVar3 = 12831.689682006836;
    (*(undefined8 *)(fr0_ - 0x4c)) = in_dr0;
  }
  if (cVar5 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(0x40c90fd8,fVar2);
  }
  else {
    dVar3 = 1.0382059669001045e+34;
  }
  if (cVar5 == '\0') {
    iVar4 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    iVar4 = (int)(dVar3 / dVar3);
  }
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(0x46fffe00,(float)iVar4);
  }
  else {
    dVar3 = -3.738952064572566e-250;
  }
  if (cVar5 == '\0') {
    iVar4 = (int)(F32LO(dVar3) - F32HI(dVar3));
  }
  else {
    iVar4 = (int)(dVar3 - dVar3);
  }
  ({ unsigned long ri0_ = (unsigned long)((undefined4)(*(undefined8 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c256a78(0,iVar4,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((undefined4)(*(undefined8 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c256fec(0,iVar4,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c01538c(ar4 + 0x1b4,iVar4,ar6,ar7));
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c014a94(ar4 + 0x1b4,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016524(ar4 + 0x170,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c256210(1,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5e0c\n.set _FUN_8c0f5e0c, _FUN_8c0f5e0c_def\n");
