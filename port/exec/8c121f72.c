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
undefined4 FUN_8c121f72_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c121f72";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 a5;
  int ar6_00;
  undefined4 uVar3;
  int a4;
  
  uVar3 = 1;
  a4 = *(int *)(unsigned)(0x108 + ar4);
  ar6_00 = 0x248 + ar4;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c120348(ar4 + 0x48,0xe,ar6_00,1));
  if ((uVar1 & 0xff) == 0) {
    iVar2 = (int)0x234;
    a5 = 0;
    *(undefined1 *)(unsigned)(iVar2 + ar4) = 1;
    *(undefined2 *)(unsigned)(iVar2 + 0x10 + ar4) = 0;
    *(unsigned *)(unsigned)(0xdc + ar4) = ((void *)(unsigned)0x8c121e40);
    iVar2 = (int)0x240;
    uVar1 = 0;
    if (*(int *)(unsigned)(iVar2 + ar4) != 0) {
      do {
        *(undefined4 *)(unsigned)(uVar1 * 8 + 0x268 + ar4 + 4) = 0;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(unsigned)(iVar2 + ar4));
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x50))))(a4,0,ar6_00,uVar3));
    (*(undefined4 *)(fr0_ - 0x18)) = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x94 + a4))))(a4,a5,ar6_00,uVar3));
    (*(int *)(fr0_ - 0x1c)) = 1;
    (*(int *)(fr0_ - 0x20)) = iVar2;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x2c))))(a4,a5,ar6_00,uVar3));
    (*(int *)(fr0_ - 0x14)) = (int)0x280;
    *(short *)(unsigned)(0x280 + ar4) = (short)uVar3;
    (*(int *)(fr0_ - 0x14)) = (*(int *)(fr0_ - 0x14)) + ar4;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c120348(ar4 + 0x48,0xf,&(*(int *)(fr0_ - 0x20)),((*(int *)(fr0_ - 0x1c)) + iVar2) * 2 + 0x10));
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c121f72\n.set _FUN_8c121f72, _FUN_8c121f72_def\n");
