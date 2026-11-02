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
undefined4
FUN_8c0a98cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a98cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);
  undefined4 s8 = *(undefined4 *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  undefined4 s16 = *(undefined4 *)(vsp + 16);
  undefined4 s20 = *(undefined4 *)(vsp + 20);
  undefined4 s24 = *(undefined4 *)(vsp + 24);
  undefined4 s28 = *(undefined4 *)(vsp + 28);
  undefined4 s32 = *(undefined4 *)(vsp + 32);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8060; for (int i_ = 0; i_ < 8060; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = 0x10;
  ({ unsigned long t0_ = (unsigned long)(500); *(unsigned *)((((unsigned long)(fr0_ - 8060)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 8060)) - 8); FUN_8c010120(((undefined1 *)(fr0_ - 0x1f4c)),((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
  (*(undefined4 *)(fr0_ - 0x1f6c)) = 0xffffffff;
  (*(unsigned *)(fr0_ - 0x1f5c) = (unsigned)(unsigned long)(&(*(undefined8 *)(fr0_ - 0x1f68))));
  (*(unsigned *)(fr0_ - 0x1f58) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x1f6c))));
  (*(undefined4 *)(fr0_ - 0x1f54)) = 0;
  (*(undefined4 *)(fr0_ - 0x1f50)) = 1;
  for (iVar3 = 0; iVar3 < *(int *)(unsigned)(ar4 + 0x230) + -1; iVar3 = iVar3 + 1) {
    puVar1 = (undefined8 *)(unsigned)(ar4 + iVar3 * 0x10 + 0x234);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x1f5c) = (unsigned)(unsigned long)(*(undefined4 *)(unsigned)puVar1));
    }
    else {
      *((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x1f5c)) = *puVar1;
    }
    puVar1 = (undefined8 *)(unsigned)(ar4 + iVar3 * 0x10 + 0x238);
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x41700000,*(undefined4 *)(unsigned)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar5 = 1.21432400688359e-311;
    }
    if (cVar6 == '\0') {
      fVar4 = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)((int)((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x1f5c)) + 4) = fVar4;
    }
    else {
      *(undefined8 *)(unsigned)((int)((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x1f5c)) + 4) = in_xd0;
    }
    puVar1 = (undefined8 *)(unsigned)(ar4 + iVar3 * 0x10 + 0x23c);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x1f5c)) + 1) = *(undefined4 *)(unsigned)puVar1;
    }
    else {
      ((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x1f5c))[1] = *puVar1;
    }
    (*(int *)(fr0_ - 0x1f78)) = iVar3;
    (vsp = ((unsigned long)(fr0_ - 8060)), FUN_8c234fd0(((undefined8 * *)(fr0_ - 0x1f5c)),(*(undefined4 *)(fr0_ - 0x1f50)),0,uVar2));
  }
  uVar2 = ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1f78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 8060)); vec_delete_array(((undefined1 *)(fr0_ - 0x1f4c)),((void *)0x8c022cb0),0x10,500); });
  return uVar2;
}

__asm__(".globl _FUN_8c0a98cc\n.set _FUN_8c0a98cc, _FUN_8c0a98cc_def\n");
