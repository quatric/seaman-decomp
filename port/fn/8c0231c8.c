#include "../decls.h"
undefined4 * FUN_8c0231c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 ar5_00;
  float fVar2;
  ulonglong in_dr0;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c0230f0(ar4,ar5,ar6,ar7,auStack_1c);
  Vec3_length_sq(auStack_1c,ar5,ar6,ar7);
  if (cVar5 == '\0') {
    in_dr0 = in_dr0 >> 0x20;
  }
  fVar2 = (float)in_dr0;
  bVar3 = fVar2 == 0.0;
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  if (bVar3) {
    puVar1 = (undefined4 *)&DAT_8c023270;
  }
  else {
    FUN_8c0230f0(ar4,ar5_00,ar6,ar7,auStack_2c);
    FUN_8c022dac(ar4,auStack_2c,ar6,ar7);
    puVar1 = (undefined4 *)Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  }
  if (cVar5 == '\0') {
    fVar2 = *(float *)(ar4 + 4);
  }
  if (cVar4 == '\0' && 0.0 < fVar2) {
    puVar1 = &DAT_8c023278;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0231c8\n.set _FUN_8c0231c8, _FUN_8c0231c8_def\n");
