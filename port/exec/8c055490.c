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
undefined4 FUN_8c055490_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c055490";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 136; for (int i_ = 0; i_ < 136; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 uVar4;
  uint in_fr1 = 0;
  ulonglong uVar5;
  code *pcVar6;
  char cVar7;
  
  cVar7 = '\0';
  uVar4 = 1;
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),uVar2,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    uVar5 = (ulonglong)in_fr1;
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar5;
    }
    iVar1 = ar4 + 0x14;
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(((undefined1 *)(fr0_ - 0x30)),iVar1,ar6,ar7));
    uVar2 = (undefined4)uVar5;
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c022d04(ar4 + 0x14,iVar1,ar6,ar7));
    ar6_00 = ((undefined4 *)(unsigned)0x8c125bf0);
    if (cVar7 == '\0') {
      uVar5 = CONCAT44(0x40400000,uVar2);
    }
    else {
      uVar5 = 0x41a0000040400000;
    }
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c032518(ar4,ar5,((undefined4 *)(unsigned)0x8c125bf0),(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x40)),ar6_00,(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,(*(undefined4 *)(fr0_ + 0x00000000))));
    ar5_00 = ((undefined1 *)(fr0_ - 0x30));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x14,ar5_00,ar6_00,(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c032ab0(ar4,ar5_00,ar6_00,(*(undefined4 *)(fr0_ + 0x00000000))));
    iVar1 = ar4 + 0x54;
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c031bb4(ar4,ar5,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x90) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x90) = uVar5 & 0xffffffff;
    }
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x98) = 0;
      uVar2 = (undefined4)uVar5;
      pcVar6 = (code *)0x3f333333;
      *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f333333;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x98) = uVar5 & 0xffffffff;
      uVar2 = 0x3f333333;
      pcVar6 = ((void *)0x8c023ae0);
      *(undefined8 *)(unsigned)(ar4 + 0x278) = 0x8c023ae03f333333;
    }
    uVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); Vec3_sub(ar4 + 0x54,ar5,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))); });
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_normalize(((undefined1 *)(fr0_ - 0x50)),uVar3,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x60)),iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))); });
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x84)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x20)),uVar3,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))); });
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x70)),(int)&(*(undefined8 *)(fr0_ - 0x84)) + 4,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    if (cVar7 == '\0') {
      (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x84))+4)),pcVar6);
    }
    else {
      (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44(pcVar6,uVar2);
    }
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x84)) + 4,0xffffffff,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
    }
  }
  else {
    (*(undefined4 *)(fr0_ + 0x00000000)) = ar7;
    if (*(int *)(unsigned)(ar4 + 300) != 1) goto LAB_8c0556a8;
  }
  ar6 = ar4 + 0x54;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 136)), pure_virtual_stub(ar4,ar5,ar6,(*(undefined4 *)(fr0_ + 0x00000000))));
  if (iVar1 == 0) {
    uVar4 = 0;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    *(undefined4 *)(unsigned)(ar4 + 700) = 0;
  }
LAB_8c0556a8:
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,(*(undefined4 *)(fr0_ + 0x00000000))));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,(*(undefined4 *)(fr0_ + 0x00000000))));
  return uVar4;
}

__asm__(".globl _FUN_8c055490\n.set _FUN_8c055490, _FUN_8c055490_def\n");
