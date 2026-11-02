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
int s_GRAPHICS_MUSHROOMERLINE_09b8e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_MUSHROOMERLINE_09b8e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *ar5_00;
  undefined4 uVar2;
  code *ar6_00;
  int iVar3;
  undefined4 ar7_00;
  uint in_fr1 = 0;
  ulonglong uVar4;
  char cVar5;
  
  cVar5 = '\0';
  ar7_00 = 0;
  uVar2 = 1;
  uVar1 = 0;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c284a8c); unsigned long t3_ = (unsigned long)(0x8c284bbc); unsigned long t4_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c13aa6c)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 4)) - 24); FUN_8c0254d0(ar4,0,1,0); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12a990);
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016fcc(ar4 + 0x490,uVar1,uVar2,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(8); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x544,((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
  ({ unsigned long t0_ = (unsigned long)(8); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x5c4,((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
  uVar2 = 0x10;
  ar6_00 = ((void *)0x8c022cb0);
  ar5_00 = ((void *)0x8c022c4c);
  ({ unsigned long t0_ = (unsigned long)(8); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x644,((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02ff6c(ar4 + 0x6e4,ar5_00,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030fa0(ar4 + 0x780,ar5_00,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c09b508(ar4 + 0x9a4,ar5_00,ar6_00,uVar2));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13aabd)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c014334(ar4 + 0xc,ar5_00,ar6_00,uVar2); });
  *(undefined1 *)(unsigned)(ar4 + 0x6e0) = 0xff;
  iVar3 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xb4);
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f532c(ar4,uVar1,iVar3,uVar2));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c027224(ar4 + 0x780,uVar1,iVar3,uVar2); });
  if (cVar5 != '\0') {
    in_fr1 = 0x40000000;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x28))))((int *)(unsigned)(ar4 + 0xa8),ar4 + 0x30,iVar3,uVar2));
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(unsigned)(ar4 + iVar3 * 4 + 0x524) = 0;
  }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  *(int *)(unsigned)(ar4 + 0x308) = ar4 + 0x6e4;
  *(int *)(unsigned)(ar4 + 0x30c) = ar4 + 0x780;
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x6c4) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x6c4) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x9a0) = 0;
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x6c8) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x6cc) = 0x3e4ccccd;
    uVar4 = CONCAT44(0x3dcccccd,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x6d0) = 0x3dcccccd;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x6c8) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x6cc) = 0x6d03e4ccccd;
    uVar4 = 0x6d43dcccccd;
    *(undefined8 *)(unsigned)(ar4 + 0x6d0) = 0x6d43dcccccd;
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x6d4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x6d8) = 0x3e4ccccd;
    *(undefined4 *)(unsigned)(ar4 + 0x6dc) = 0x3dcccccd;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x6d4) = uVar4 & 0xffffffff;
    *(undefined8 *)(unsigned)(ar4 + 0x6d8) = 0x6d03e4ccccd;
    *(undefined8 *)(unsigned)(ar4 + 0x6dc) = 0x6d43dcccccd;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MUSHROOMERLINE_09b8e8\n.set _s_GRAPHICS_MUSHROOMERLINE_09b8e8, _s_GRAPHICS_MUSHROOMERLINE_09b8e8_def\n");
