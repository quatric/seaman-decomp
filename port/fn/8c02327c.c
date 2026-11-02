#include "../decls.h"
undefined4 * FUN_8c02327c_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 in_dr0;
  char cVar4;
  char cVar5;
  undefined8 uStack_20;
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c0230f0(ar4,ar5,ar6,ar7,(int)&uStack_20 + 4);
  FUN_8c022dac(&DAT_8c1259a8,(int)&uStack_20 + 4,ar6,ar7);
  uVar1 = in_dr0;
  if (cVar5 == '\0') {
    uStack_20 = CONCAT44((*(uint*)((uchar*)&uStack_20+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_20;
  }
  uStack_20 = uVar1;
  puVar2 = (undefined4 *)Vec3_dtor((int)&uStack_20 + 4,0xffffffff,ar6,ar7);
  fVar3 = (float)in_dr0;
  if (cVar5 == '\0') {
    fVar3 = *ar4;
  }
  if (cVar4 == '\0' && fVar3 < 0.0) {
    puVar2 = &DAT_8c0232e4;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c02327c\n.set _FUN_8c02327c, _FUN_8c02327c_def\n");
