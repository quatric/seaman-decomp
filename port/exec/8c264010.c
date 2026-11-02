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
undefined4 FUN_8c264010_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c264010";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *ar4_01;
  char *a4;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2630cc(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  uVar3 = ar4_00;
  uVar2 = uVar1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27848c) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0(ar4_00,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c2695e4(uVar3,uVar2,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(uVar3,uVar2,ar6,ar7));
  uVar3 = uVar2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c278490) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0(uVar1,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262524(uVar1,uVar3,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(uVar1,uVar3,ar6,ar7));
  uVar3 = uVar1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c278494) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0(uVar2,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26371e(uVar2,uVar3,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(uVar2,uVar3,ar6,ar7));
  uVar3 = uVar2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c278498) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0(uVar1,uVar2,ar6,ar7));
  a4 = ((undefined1 *)(unsigned)0x8c277fd0);
  do {
    ar4_01 = a4;
    if (*a4 == '\x01') {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264e84(a4,uVar3,ar6,ar7));
    }
    a4 = a4 + 0x94;
  } while (a4 < ((undefined4 *)(unsigned)0x8c278470));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4_01,uVar3,ar6,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27849c) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0(uVar2,uVar3,ar6,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c278488) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0(ar4_00,uVar3,ar6,ar7));
  return (*(undefined4 *)(unsigned)(unsigned)0x8c278488);
}

__asm__(".globl _FUN_8c264010\n.set _FUN_8c264010, _FUN_8c264010_def\n");
