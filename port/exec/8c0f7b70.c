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
undefined4 game_init_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "game_init";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined4 *)(unsigned)(unsigned)0x8c14029c);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c1402a0);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c1402a4);
  (*(undefined4 *)(fr0_ - 0xc)) = (*(undefined1 *)(unsigned)0x8c1402a8);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined4 *)(unsigned)(unsigned)0x8c1402ac);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c1402b0);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c1402b4);
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined1 *)(unsigned)0x8c1402b8);
  *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a2c)) = (undefined *)(unsigned)((uint)(&(*(undefined1 *)(unsigned)0x8c1f5a2c)) | 0xa0000000);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f7ea8(&(*(undefined4 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  if (iVar1 == 0) {
    uVar3 = 2;
    uVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c102bd0(0x31,0,2,ar7));
  }
  else {
    uVar3 = 1;
    uVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c102bd0(0x34,0,1,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c259a1c(0,uVar2,uVar3,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c43b578) = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(0x2b000,uVar2,uVar3,ar7));
  uVar2 = 0x2b000;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c25b334((*(undefined4 *)(unsigned)(unsigned)0x8c43b578),0x2b000,uVar3,ar7); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c43b57c) = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(0x1db000,uVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c236250((*(undefined4 *)(unsigned)(unsigned)0x8c43b57c),0x1db000,uVar3,ar7));
  ar7_00 = 0;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c258b26(0xfffaf6f0,0,0x4b320,0));
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c233f98(0,0,0,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c2570ec(uVar2,uVar3,uVar4,ar7_00); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c43b570) = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(0x1000,uVar3,uVar4,ar7_00));
  uVar4 = 0;
  uVar2 = 0x40;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23633c((*(undefined4 *)(unsigned)(unsigned)0x8c43b570),0x40,0,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c255bea(0x8c42d408,uVar2,uVar4,ar7_00); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c43b574) = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(0xabe00,uVar2,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c233d6c((*(undefined4 *)(unsigned)(unsigned)0x8c43b574),11000,uVar4,ar7_00));
  uVar3 = 0x15e;
  uVar2 = 0x8c43b584;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c25b34a(0x8c43b584,0x15e,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c213ee4(uVar2,uVar3,uVar4,ar7_00));
  uVar4 = 0xff000000;
  uVar2 = 0xff000000;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c259046(0xff000000,0xff000000,0xff000000,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c233d9c(0x820,uVar2,uVar4,ar7_00); });
  uVar3 = 0x800;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c233da2(0xffffffff,0x800,uVar4,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c233dac(&(*(undefined4 *)(fr0_ - 0x28)),uVar3,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c259358(3,uVar3,uVar4,ar7_00));
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c2593ac(1,uVar3,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), thunk_FUN_8c20a13a(uVar2,uVar3,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c259556(2,uVar3,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c259274(1,uVar3,uVar4,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c014370(5,uVar3,uVar4,ar7_00); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c43b580) = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(0x4000,uVar3,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f7ecc((*(undefined4 *)(unsigned)(unsigned)0x8c43b580),uVar3,uVar4,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 68)), s_Tmcpack_idx_0c0448(0x8c286ebc,uVar3,uVar4,ar7_00));
  return uVar2;
}

__asm__(".globl _game_init\n.set _game_init, _game_init_def\n");
