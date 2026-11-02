#include "../decls.h"
undefined4 FUN_8c0a6370_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  FUN_8c031684(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0x21a4 + ar4) = 0;
  *(undefined4 *)(0x2198 + ar4) = 0;
  *(undefined4 *)(0x219c + ar4) = 0;
  *(undefined4 *)(0x230 + ar4) = 0;
  Vec3_ctor_xyz(auStack_18,ar5,ar6,ar7);
  Vec3_assign(ar4 + 0x80,auStack_18,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  Vec3_ctor_xyz(auStack_28,uVar1,ar6,ar7);
  Vec3_assign(ar4 + 0x14,auStack_28,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  uVar1 = FUN_8c023d7c(ar4 + 0x21a8,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0a6370\n.set _FUN_8c0a6370, _FUN_8c0a6370_def\n");
